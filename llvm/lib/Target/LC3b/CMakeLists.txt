add_llvm_component_group(LC3b)

set(LLVM_TARGET_DEFINITIONS LC3b.td)

tablegen(LLVM LC3bGenAsmMatcher.inc -gen-asm-matcher)
tablegen(LLVM LC3bGenAsmWriter.inc -gen-asm-writer)
# tablegen(LLVM LC3bGenCallingConv.inc -gen-callingconv)
# tablegen(LLVM LC3bGenDAGISel.inc -gen-dag-isel)
tablegen(LLVM LC3bGenDisassemblerTables.inc -gen-disassembler)
tablegen(LLVM LC3bGenInstrInfo.inc -gen-instr-info)
tablegen(LLVM LC3bGenMCCodeEmitter.inc -gen-emitter)
tablegen(LLVM LC3bGenRegisterInfo.inc -gen-register-info)
tablegen(LLVM LC3bGenSubtargetInfo.inc -gen-subtarget)

add_public_tablegen_target(LC3bCommonTableGen)

add_llvm_target(LC3bCodeGen
  # LC3bAsmPrinter.cpp
  # LC3bConstantPoolValue.cpp
  # LC3bFrameLowering.cpp
  # LC3bInstrInfo.cpp
  # LC3bISelDAGToDAG.cpp
  # LC3bISelLowering.cpp
  # LC3bRegisterInfo.cpp
  # LC3bSubtarget.cpp
  LC3bTargetMachine.cpp
  # LC3bUtils.cpp

  LINK_COMPONENTS
  AsmPrinter
  CodeGen
  Core
  MC
  SelectionDAG
  Support
  Target
  LC3bDesc
  LC3bInfo

  ADD_TO_COMPONENT
  LC3b
  )

add_subdirectory(AsmParser)
add_subdirectory(Disassembler)
add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)

