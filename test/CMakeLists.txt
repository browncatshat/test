cmake_minimum_required(VERSION 3.19)
find_package(Catch2 REQUIRED PATHS ${CMAKE_SOURCE_DIR}/build/)
add_executable(TESTEXE 
	test.cpp
)
target_link_libraries(TESTEXE 
	PUBLIC
		${PROJECT_NAME}
		Catch2::Catch2
)
target_include_directories(TESTEXE
	PRIVATE
		${CMAKE_SOURCE_DIR}/catch2/src
)


include(CTest)
include(Catch)
catch_discover_tests(TESTEXE)
