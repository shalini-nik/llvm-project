//===-- LC3bTargetInfo.h - LC3b Target Implementation -*- C++ -------*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_LC3B_TARGETINFO_LC3BTARGETINFO_H
#define LLVM_LIB_TARGET_LC3B_TARGETINFO_LC3BTARGETINFO_H

namespace llvm {

class Target;

Target &getTheLC3bTarget();

} // end namespace llvm

#endif // LLVM_LIB_TARGET_LC3B_TARGETINFO_LC3BTARGETINFO_H
