cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeProject_10_2")

# Enable export of all symbols for DLL on Windows
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# Add source to this project's shared library
add_library(Figures SHARED 
  "CMakeProject_10_2.cpp" 
  "EquilateralTriangle.cpp" "EquilateralTriangle.h" 
  "FigureBase.cpp" "FigureBase.h" 
  "FigureCreationException.h" 
  "IsoscelesTriangle.cpp" "IsoscelesTriangle.h" 
  "Parallelogram.cpp" "Parallelogram.h" 
  "QuadrangleFigureBase.cpp" "QuadrangleFigureBase.h" 
  "Rectangle.cpp" "Rectangle.h" 
  "resource.h" 
  "Rhombus.cpp" "Rhombus.h" 
  "RightAngledTriangle.cpp" "RightAngledTriangle.h" 
  "SideAndAngle.h" 
  "Square.cpp" "Square.h" 
  "TriangleFigureBase.cpp" "TriangleFigureBase.h" 
  "CustomException.h"
)

# Add a separate executable for testing the library (optional)
add_executable (CMakeProject_10_2_Test "CMakeProject_10_2.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Figures PROPERTY CXX_STANDARD 20)
  set_property(TARGET CMakeProject_10_2_Test PROPERTY CXX_STANDARD 20)
endif()

# Link the executable with the library
target_link_libraries(CMakeProject_10_2_Test PRIVATE Figures)

# TODO: Add tests and install targets if needed.