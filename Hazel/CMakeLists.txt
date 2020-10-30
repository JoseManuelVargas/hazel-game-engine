project(Hazel)

set(SRC
	src/Test.cpp
	)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/hazel)

add_library(${PROJECT_NAME} SHARED ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
