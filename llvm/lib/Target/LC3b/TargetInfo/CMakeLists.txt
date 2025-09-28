add_llvm_component_library(LLVMLC3bInfo
  LC3bTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  LC3b
  )
