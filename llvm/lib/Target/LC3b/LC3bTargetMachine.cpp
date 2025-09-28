//===- LC3bTargetMachine.cpp - Define TargetMachine for LC3b ----------===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// Implements the info about LC3b target spec.
//
//===----------------------------------------------------------------------===//

#include "LC3bTargetMachine.h"
#include "TargetInfo/LC3bTargetInfo.h"
// #include "LC3bMachineFunctionInfo.h"
#include "llvm/CodeGen/Passes.h"
#include "llvm/CodeGen/TargetLoweringObjectFileImpl.h"
#include "llvm/CodeGen/TargetPassConfig.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Transforms/Scalar.h"
#include <optional>

using namespace llvm;

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeLC3bTarget() {
  // Register the target.
  // RegisterTargetMachine<LC3bTargetMachine> A(getTheLC3bTarget());
}
