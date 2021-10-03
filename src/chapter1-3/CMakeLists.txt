cmake_minimum_required(VERSION 3.10)

# Project information
project(chapter1-3)

# Add executables
add_executable(chapter1-3 chapter1-3.cc)

install(TARGETS
  chapter1-3
  DESTINATION lib/${PROJECT_NAME}
)
