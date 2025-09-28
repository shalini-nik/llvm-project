//===-- LC3bMCTargetDesc.cpp - LC3b target descriptions ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
#include "LC3bMCTargetDesc.h"
#include "LC3bInstPrinter.h"
#include "LC3bMCAsmInfo.h"
#include "TargetInfo/LC3bTargetInfo.h"

#include "llvm/ADT/STLExtras.h"
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCStreamer.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/ErrorHandling.h"

#define GET_INSTRINFO_MC_DESC
#include "LC3bGenInstrInfo.inc"

#define GET_REGINFO_MC_DESC
#include "LC3bGenRegisterInfo.inc"

#define GET_SUBTARGETINFO_MC_DESC
#include "LC3bGenSubtargetInfo.inc"

using namespace llvm;

static MCAsmInfo *createLC3bMCAsmInfo(const MCRegisterInfo &MRI,
                                      const Triple &TT,
                                      const MCTargetOptions &Options) {
  MCAsmInfo *MAI = new LC3bMCAsmInfo(TT);
  return MAI;
}

static MCInstrInfo *createLC3bMCInstrInfo() {
  MCInstrInfo *X = new MCInstrInfo();
  InitLC3bMCInstrInfo(X);
  return X;
}

static MCInstPrinter *createLC3bMCInstPrinter(const Triple &TT,
                                              unsigned SyntaxVariant,
                                              const MCAsmInfo &MAI,
                                              const MCInstrInfo &MII,
                                              const MCRegisterInfo &MRI) {
  return new LC3bInstPrinter(MAI, MII, MRI);
}

static MCRegisterInfo *createLC3bMCRegisterInfo(const Triple &TT) {
  MCRegisterInfo *X = new MCRegisterInfo();
  InitLC3bMCRegisterInfo(X, LC3b::R7);
  return X;
}

static MCSubtargetInfo *createLC3bMCSubtargetInfo(const Triple &TT,
                                                  StringRef CPU, StringRef FS) {
  return createLC3bMCSubtargetInfoImpl(TT, CPU, CPU, FS);
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeLC3bTargetMC() {
  // Register the MCAsmInfo.
  TargetRegistry::RegisterMCAsmInfo(getTheLC3bTarget(), createLC3bMCAsmInfo);

  // Register the MCCodeEmitter.
  TargetRegistry::RegisterMCCodeEmitter(getTheLC3bTarget(),
                                        createLC3bMCCodeEmitter);

  // Register the MCInstrInfo.
  TargetRegistry::RegisterMCInstrInfo(getTheLC3bTarget(),
                                      createLC3bMCInstrInfo);

  // Register the MCInstPrinter.
  TargetRegistry::RegisterMCInstPrinter(getTheLC3bTarget(),
                                        createLC3bMCInstPrinter);

  // Register the MCRegisterInfo.
  TargetRegistry::RegisterMCRegInfo(getTheLC3bTarget(),
                                    createLC3bMCRegisterInfo);

  // Register the MCSubtargetInfo.
  TargetRegistry::RegisterMCSubtargetInfo(getTheLC3bTarget(),
                                          createLC3bMCSubtargetInfo);
}
