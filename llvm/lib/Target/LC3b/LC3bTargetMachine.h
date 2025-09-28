//===-- LC3bTargetMachine.h - Define TargetMachine for LC3b -*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares the LC3b specific subclass of TargetMachine.
//
//===----------------------------------------------------------------------===//

// #ifndef LLVM_LIB_TARGET_XTENSA_XTENSATARGETMACHINE_H
// #define LLVM_LIB_TARGET_XTENSA_XTENSATARGETMACHINE_H

// #include "LC3bSubtarget.h"
// #include "llvm/CodeGen/CodeGenTargetMachineImpl.h"
// #include <optional>

// namespace llvm {
// extern Target TheLC3bTarget;

// class LC3bTargetMachine : public CodeGenTargetMachineImpl {
//   std::unique_ptr<TargetLoweringObjectFile> TLOF;
// public:
//   LC3bTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
//                       StringRef FS, const TargetOptions &Options,
//                       std::optional<Reloc::Model> RM,
//                       std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
//                       bool JIT, bool isLittle);

//   LC3bTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
//                       StringRef FS, const TargetOptions &Options,
//                       std::optional<Reloc::Model> RM,
//                       std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
//                       bool JIT);

//   const LC3bSubtarget *getSubtargetImpl(const Function &F) const override;

//   TargetPassConfig *createPassConfig(PassManagerBase &PM) override;

//   TargetLoweringObjectFile *getObjFileLowering() const override {
//     return TLOF.get();
//   }

//   MachineFunctionInfo *
//   createMachineFunctionInfo(BumpPtrAllocator &Allocator, const Function &F,
//                             const TargetSubtargetInfo *STI) const override;

// protected:
//   mutable StringMap<std::unique_ptr<LC3bSubtarget>> SubtargetMap;
// };
// } // end namespace llvm

// #endif // LLVM_LIB_TARGET_XTENSA_XTENSATARGETMACHINE_H
