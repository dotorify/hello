cmake_minimum_required(VERSION 2.6)
project(ProjectName)


# Main source files list
# ===========================================================================
add_library(
	# <Library name>
	Name
	# </Library name>

	# <Additional sources>
	main.cpp
	# </Additional sources>
)


# Brief: Select a Build Type
# @ Values: Release | Debug | RelWithDebInfo | MinSizeRel 
# @ See: http://www.cmake.org/Wiki/CMake_Useful_Variables#Compilers_and_Tools
# ===========================================================================
SET(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_DEBUG_POSTFIX "_d")


# Brief: Verbose Mode
# ===========================================================================
## SET(CMAKE_VERBOSE_MAKEFILE ON)

# Include
# ===========================================================================
## include_directories("../include")


# Link the libraries
# ===========================================================================
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")


# To display information
# ===========================================================================
MESSAGE( STATUS "CMAKE_BUILD_TYPE: " ${CMAKE_BUILD_TYPE} )
MESSAGE( STATUS "CMAKE_C_COMPILER: " ${CMAKE_C_COMPILER} )
MESSAGE( STATUS "CMAKE_CXX_COMPILER: " ${CMAKE_CXX_COMPILER} )


# To support make distclean.
# ===========================================================================
IF (UNIX)
	ADD_CUSTOM_TARGET (distclean @echo cleaning for source distribution)
	SET(DISTCLEANED
		cmake_install.cmake
		CMakeCache.txt
		Makefile
	)
  
	ADD_CUSTOM_COMMAND(
		DEPENDS clean
		COMMENT "distribution clean"
		COMMAND rm
		ARGS    -Rf CMakeFiles ${DISTCLEANED}
		TARGET  distclean
	)
ENDIF(UNIX)


