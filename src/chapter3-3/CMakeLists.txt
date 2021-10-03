cmake_minimum_required(VERSION 3.10)

# Project information
project(chapter3-3)

# Add executables
add_executable(${PROJECT_NAME} chapter3-3.cc)

install(TARGETS
  ${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME}
)
