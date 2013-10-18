cmake_minimum_required(VERSION 2.8)

add_executable(test main.cpp)
#target_link_libraries(test pthread)

IF (UNIX)
    ADD_CUSTOM_TARGET (distclean @echo cleaning for source distribution)
    SET(DISTCLEANED
        cmake.depends
        cmake.check_depends
        CMakeCache.txt
        cmake.check_cache
        *.cmake
        Makefile
        core core.*
        gmon.out
        *~
        CMakeFiles
        )

    ADD_CUSTOM_COMMAND(
        DEPENDS clean
        COMMENT "distribution clean"
        COMMAND rm
        ARGS    -Rf CMakeTmp ${DISTCLEANED}
        TARGET  distclean
        )
ENDIF(UNIX)
