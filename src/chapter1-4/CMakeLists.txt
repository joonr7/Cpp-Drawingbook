cmake_minimum_required(VERSION 3.10)

# Project information
project(chapter1-4)

# Add executables
add_executable(chapter1-4 chapter1-4.cc)

install(TARGETS
  chapter1-4
  DESTINATION lib/${PROJECT_NAME}
)
