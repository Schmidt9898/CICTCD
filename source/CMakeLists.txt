


#file( GLOB LIB_SOURCES lib/*.cpp )


add_executable(myrunnable gui.cpp)
#add_executable(myrunnable main.cpp)

target_include_directories(myrunnable PRIVATE ${PROJECT_SOURCE_DIR}/modules/imgui)
target_include_directories(myrunnable PRIVATE ${PROJECT_SOURCE_DIR}/modules/imgui/backends)
target_include_directories(myrunnable PRIVATE ${PROJECT_SOURCE_DIR}/modules/imgui/examples/libs/glfw/include)

target_link_libraries(myrunnable PRIVATE imgui tools cxx_project)


