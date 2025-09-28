//===-- LC3bTargetInfo.cpp - LC3b Target Implementation ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "TargetInfo/LC3bTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheLC3bTarget() {
  static Target TheLC3bTarget;
  return TheLC3bTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeLC3bTargetInfo() {
  RegisterTarget<Triple::lc3b> X(getTheLC3bTarget(), "lc3b", "LC3b 32", "LC3b");
}
