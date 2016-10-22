set(target
    example_test)

set(srcs
    test.cpp
    ${CMAKE_SOURCE_DIR}/source/process.cpp)

add_executable(${target}
    ${srcs})

include_directories(
    ${CMAKE_SOURCE_DIR}/source)

target_link_libraries(${target}
    gtest)

add_test(NAME example_test COMMAND example_test)
