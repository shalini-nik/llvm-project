add_llvm_component_library(LLVMLC3bDesc
  # LC3bAsmBackend.cpp
  # LC3bELFObjectWriter.cpp
  LC3bInstPrinter.cpp
  LC3bMCAsmInfo.cpp
  LC3bMCCodeEmitter.cpp
  # LC3bMCExpr.cpp
  LC3bMCTargetDesc.cpp
  # LC3bTargetStreamer.cpp

  LINK_COMPONENTS
  MC
  Support
  LC3bInfo

  ADD_TO_COMPONENT
  LC3b
 )
