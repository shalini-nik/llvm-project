//===- LC3bRegisterInfo.td - LC3b Register defs --------*- tablegen -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

//===----------------------------------------------------------------------===//
// Class definitions.
//===----------------------------------------------------------------------===//

class LC3bReg<bits<16> Enc,string n>:Register<n>{
    let HWEncoding=Enc;
    let Namespace="LC3b";
}
foreach I = 0 - 7 in {
    def R#I : LC3bReg<I,"R"#I>;
}

class LC3bRegisterClass<list<ValueType> types, int size,
                       int alignment,dag regList,
                       int copycost = 1 >
: RegisterClass<"LC3b",types,alignment,regList>{

    let Size = size;
    let CopyCost=copycost;
}
class LC3bRegisterOperand<RegisterClass RC> : RegisterOperand<RC>{
    let DecoderMethod = "decode"#RC#"RegisterClass";

}
def GPR: LC3bRegisterClass<[i16],16,16,(add (sequence "R%u",0,7))>;
def GPROpnd:LC3bRegisterOperand<GPR>;