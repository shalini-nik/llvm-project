//===- LC3bInstrInfo.td - Target Description for LC3b -*- tablegen -*--===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file describes the LC3b instructions in TableGen format.
//
//===----------------------------------------------------------------------===//

include "LC3bInstrFormats.td"

//===----------------------------------------------------------------------===//
// Arithmetic & Logical instructions
//===----------------------------------------------------------------------===//

class ArithLogic_RRR<bits<4> func, string Opcstr, SDNode OpNode>
  : LC3b_OP_RR<func, Opcstr, [(set i16:$rd, (OpNode GPROpnd:$rs1,GPROpnd:$rs2))]> {
  let isCommutable = 1;
}

def ADD : ArithLogic_RRR<0b0001,"add",add>;
def AND : ArithLogic_RRR<0b0101,"and",and>;
def XOR : ArithLogic_RRR<0b1001,"xor",xor>;