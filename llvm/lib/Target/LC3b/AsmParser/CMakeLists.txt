add_llvm_component_library(LLVMLC3bAsmParser
  LC3bAsmParser.cpp

  LINK_COMPONENTS
  MC
  MCParser
  Support
  LC3bDesc
  LC3bInfo

  ADD_TO_COMPONENT
  LC3b
  )
