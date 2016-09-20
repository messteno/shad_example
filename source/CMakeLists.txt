set(target
    example)

set(srcs
    main.cpp
    input.cpp
    process.cpp)

set(headers
    input.h
    process.h)

add_executable(${target}
    ${srcs}
    ${headers})

add_custom_command(TARGET ${target}
    POST_BUILD
    COMMAND python ${CMAKE_SOURCE_DIR}/utils/preprocessor.py ${srcs} ${headers} > ${CONTEST_DIR}/${target}.cpp
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
