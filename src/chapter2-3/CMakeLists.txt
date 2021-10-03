cmake_minimum_required(VERSION 3.10)

# Project information
project(chapter2-3)

# Add executables
add_executable(${PROJECT_NAME} chapter2-3.cc)

install(TARGETS
  ${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME}
)
