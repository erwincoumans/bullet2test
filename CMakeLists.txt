cmake_minimum_required (VERSION 2.8)

if (DEFINED BULLET_DIRECTORY)
else()
	set (BULLET_DIRECTORY ../bullet3)

endif()

add_subdirectory(${BULLET_DIRECTORY} bin)

project (Tutorial)

INCLUDE_DIRECTORIES(
	${BULLET_PHYSICS_SOURCE_DIR}/src
)

LINK_LIBRARIES(
	LinearMath
)

add_executable(Tutorial main.cpp)

