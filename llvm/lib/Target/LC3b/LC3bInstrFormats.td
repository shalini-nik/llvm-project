//===- LC3bInstrFormats.td - LC3b Instruction Formats --*- tablegen -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// LC3b instructions
class InstLC3b<dag outs,dag ins, string asm, list <dag> pattern =[]>:Instruction{
    bits<16> Inst;
    let Size = 2;
    let Namespace = "LC3b";
    dag OutOperandList = outs;       // An dag containing the MI def operand list.
    dag InOperandList = ins;        // An dag containing the MI use operand list.
    let AsmString = asm;
    let Pattern = pattern;
    let DecoderNamespace = "LC3b";
}
// operation instructions
class LC3b_OP<dag outs,dag ins,string asm, list <dag>pattern=[]>
            :InstLC3b<outs,ins,asm,pattern>{
    bits<3> rd;
    bits<3> rs1;
    let Inst{11-9} = rd;
    let Inst{8-6} = rs1;
}
//// register instructions
class LC3b_OP_RR<bits<4> func, string asm, list<dag> pattern=[]>:
      LC3b_OP<(outs GPROpnd:$rd),(ins GPROpnd:$rs1,GPROpnd:$rs2),
      asm#"\t$rd, $rs1, $rs2", pattern>{
        bits<3>rs2;
        let Inst{15-12}=func;
        let Inst{5-3}=0b000;
        let Inst{2-0}=rs2;
      }
//// immediate instructions

// Data movement instructions
//// PC-Relative Mode
//// Indirect Mode
//// Base+Offset Mode
//// Immediate Mode

// Control instructions
