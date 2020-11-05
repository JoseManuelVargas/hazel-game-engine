project(Sandbox)

set(SRC
	src/SandboxApp.cpp
	)

add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} Hazel)
target_compile_definitions(${PROJECT_NAME} PRIVATE HZ_PLATFORM_WINDOWS)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD 
	COMMAND ${CMAKE_COMMAND} -E copy_if_different 
	$<TARGET_FILE:Hazel> $<TARGET_FILE_DIR:${PROJECT_NAME}>
	COMMENT "Copying Hazel DLL")
