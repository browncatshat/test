cmake_minimum_required(VERSION 3.19)
include(cmake/Conan.cmake)
run_conan()
if(CONAN_CATCH2_ROOT_DEBUG)
  include(${CONAN_CATCH2_ROOT_DEBUG}/lib/cmake/Catch2/Catch.cmake)
else()
  include(${CONAN_CATCH2_ROOT}/lib/cmake/Catch2/Catch.cmake)
endif()

find_package(Catch2 REQUIRED)
add_executable(test 
	test.cpp
)
target_link_libraries(test 
	PUBLIC
		${PROJECT_NAME}
		CONAN_PKG::catch2
)
target_include_directories(test
	PRIVATE
		${CMAKE_SOURCE_DIR}/catch2/src
)


include(CTest)
include(Catch)
catch_discover_tests(test)
