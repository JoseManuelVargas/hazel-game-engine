project(Hazel)

set(SRC
	src/Application.cpp
	src/Log.cpp
	)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/Hazel)

add_library(${PROJECT_NAME} SHARED ${SRC})
target_link_libraries(${PROJECT_NAME} PUBLIC spdlog::spdlog)
target_compile_definitions(${PROJECT_NAME} PRIVATE HZ_PLATFORM_WINDOWS HZ_BUILD_DLL)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
