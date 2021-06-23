cmake_minimum_required(VERSION 3.19)
find_package(Catch2 REQUIRED)
add_executable(test 
	test.cpp
)
target_link_libraries(test 
	PUBLIC
		${PROJECT_NAME}
		Catch2::Catch2
)

include(CTest)
include(ParseAndAddCatchTests)
catch_discover_tests(test)