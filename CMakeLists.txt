cmake_minimum_required(VERSION 3.19)


option(TEST_SHIT ON)

if(TEST_SHIT)
	set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")
endif()

project(shit		            VERSION     0.1.0
                                DESCRIPTION "test this shit"
                                LANGUAGES   CXX)
								
add_library(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/src/lib.cpp ${CMAKE_CURRENT_SOURCE_DIR}/include/lib.hpp)
target_include_directories(${PROJECT_NAME}
	PUBLIC
		${CMAKE_SOURCE_DIR}/include
)

add_subdirectory(test)
