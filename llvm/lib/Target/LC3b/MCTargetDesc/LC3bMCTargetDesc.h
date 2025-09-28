//===-- LC3bMCTargetDesc.h - LC3b Target Descriptions -------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file provides LC3b specific target descriptions.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_LC3B_MCTARGETDESC_LC3BMCTARGETDESC_H
#define LLVM_LIB_TARGET_LC3B_MCTARGETDESC_LC3BMCTARGETDESC_H
#include "llvm/Support/DataTypes.h"
#include <memory>

namespace llvm {

class MCAsmBackend;
class MCCodeEmitter;
class MCContext;
class MCInstrInfo;
class MCObjectTargetWriter;
class MCObjectWriter;
class MCRegisterInfo;
class MCSubtargetInfo;
class MCTargetOptions;
class StringRef;
class Target;
class raw_ostream;

extern Target TheLC3bTarget;

MCCodeEmitter *createLC3bMCCodeEmitter(const MCInstrInfo &MCII, MCContext &Ctx);

MCAsmBackend *createLC3bMCAsmBackend(const Target &T,
                                     const MCSubtargetInfo &STI,
                                     const MCRegisterInfo &MRI,
                                     const MCTargetOptions &Options);
std::unique_ptr<MCObjectTargetWriter>
createLC3bObjectWriter(uint8_t OSABI, bool IsLittleEndian);
} // end namespace llvm

// Defines symbolic names for LC3b registers.
// This defines a mapping from register name to register number.
#define GET_REGINFO_ENUM
#include "LC3bGenRegisterInfo.inc"

// Defines symbolic names for the LC3b instructions.
#define GET_INSTRINFO_ENUM
#include "LC3bGenInstrInfo.inc"

#define GET_SUBTARGETINFO_ENUM
#include "LC3bGenSubtargetInfo.inc"

#endif // LLVM_LIB_TARGET_LC3B_MCTARGETDESC_LC3BMCTARGETDESC_H
