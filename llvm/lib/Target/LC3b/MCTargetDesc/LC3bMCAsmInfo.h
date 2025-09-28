//===-- LC3bMCAsmInfo.h - LC3b Asm Info --------------------*- C++ -*--===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file contains the declaration of the LC3bMCAsmInfo class.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_LC3B_MCTARGETDESC_LC3BTARGETASMINFO_H
#define LLVM_LIB_TARGET_LC3B_MCTARGETDESC_LC3BTARGETASMINFO_H

#include "llvm/MC/MCAsmInfoELF.h"

namespace llvm {
class Triple;

class LC3bMCAsmInfo : public MCAsmInfoELF {
public:
  explicit LC3bMCAsmInfo(const Triple &TT);
};

} // namespace llvm

#endif // LLVM_LIB_TARGET_LC3B_MCTARGETDESC_LC3BTARGETASMINFO_H
