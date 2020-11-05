project(Hazel)

set(SRC
	src/Application.cpp
	)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/Hazel)

add_library(${PROJECT_NAME} SHARED ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
