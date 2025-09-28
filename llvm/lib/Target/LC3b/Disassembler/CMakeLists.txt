add_llvm_component_library(LLVMLC3bDisassembler
  LC3bDisassembler.cpp

  LINK_COMPONENTS
  MCDisassembler
  Support
  LC3bInfo

  ADD_TO_COMPONENT
  LC3b
  )
