cmake_minimum_required(VERSION 3.19)


project(shit		            VERSION     0.1.0
                                DESCRIPTION "test this shit"
                                LANGUAGES   CXX)
								
add_library(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/src/lib.cpp ${CMAKE_CURRENT_SOURCE_DIR}/include/lib.hpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC
        	${CMAKE_CURRENT_SOURCE_DIR}/include/
)

add_subdirectory(test)