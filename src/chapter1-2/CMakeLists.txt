cmake_minimum_required(VERSION 3.10)

# Project information
project(chapter1-2)

# Add executables
add_executable(chapter1-2 chapter1-2.cc)

install(TARGETS
  chapter1-2
  DESTINATION lib/${PROJECT_NAME}
)
