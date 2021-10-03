cmake_minimum_required(VERSION 3.10)

# Project information
project(chapter1-1)

# Add executables
add_executable(chapter1-1 chapter1-1.cc)

install(TARGETS
  chapter1-1
  DESTINATION lib/${PROJECT_NAME}
)
