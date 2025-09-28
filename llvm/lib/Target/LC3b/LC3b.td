//===- LC3b.td - Describe the LC3b Target Machine ------*- tablegen -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

//===----------------------------------------------------------------------===//
// Target-independent interfaces
//===----------------------------------------------------------------------===//

include "llvm/Target/Target.td"

//===----------------------------------------------------------------------===//
// Register File Description
//===----------------------------------------------------------------------===//

include "LC3bRegisterInfo.td"

//===----------------------------------------------------------------------===//
// Instruction Descriptions
//===----------------------------------------------------------------------===//

include "LC3bInstrInfo.td"

def LC3bInstrInfo : InstrInfo;

//===----------------------------------------------------------------------===//
// Target Declaration
//===----------------------------------------------------------------------===//

def LC3bAsmParser : AsmParser;
def LC3bAsmParserVariant : AsmParserVariant {
  let RegisterPrefix = "%";
}

def LC3bInstPrinter : AsmWriter {
  string AsmWriterClassName  = "InstPrinter";
}

def LC3b : Target {
  let InstructionSet = LC3bInstrInfo;
  let AssemblyWriters = [LC3bInstPrinter];
  let AssemblyParsers = [LC3bAsmParser];
  let AssemblyParserVariants = [LC3bAsmParserVariant];
}


//===----------------------------------------------------------------------===//
// LC3b processors supported.
//===----------------------------------------------------------------------===//

class Proc<string Name, list<SubtargetFeature> Features,
           list<SubtargetFeature> TuneFeatures = []>
 : Processor<Name, NoItineraries, Features, TuneFeatures>;

def : Proc<"generic",         []>;
//===----------------------------------------------------------------------===//
// Processors - Only one since no subtargets
//===----------------------------------------------------------------------===//


