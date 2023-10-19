cmake_minimum_required(VERSION 3.0.0)
project(cpp_topics VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(class_inheritence)
target_sources(class_inheritence PRIVATE
               "${CMAKE_CURRENT_SOURCE_DIR}/class_inheritence/src/main.cpp"
               "${CMAKE_CURRENT_SOURCE_DIR}/class_inheritence/src/table_tennis_player.cpp"
               "${CMAKE_CURRENT_SOURCE_DIR}/class_inheritence/src/rated_player.cpp")
target_include_directories(class_inheritence PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/class_inheritence/inc")

add_executable(reference_variables reference_variables/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
