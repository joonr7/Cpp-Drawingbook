cmake_minimum_required(VERSION 3.10)

# Project information
project(chapter2)

# Add executables
add_executable(chapter2 chapter2.cc)

install(TARGETS
  chapter2
  DESTINATION lib/${PROJECT_NAME}
)
