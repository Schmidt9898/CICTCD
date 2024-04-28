


#file( GLOB LIB_SOURCES lib/*.cpp )


add_executable(myrunnable gui.cpp)
#add_executable(myrunnable main.cpp)

#target_sources(myrunnable PRIVATE 
#${PROJECT_SOURCE_DIR}/modules/imgui/imgui_demo.cpp
#${PROJECT_SOURCE_DIR}/modules/imgui/imgui_draw.cpp
#${PROJECT_SOURCE_DIR}/modules/imgui/imgui_internal.h
#${PROJECT_SOURCE_DIR}/modules/imgui/imgui_tables.cpp
#${PROJECT_SOURCE_DIR}/modules/imgui/imgui_widgets.cpp
#${PROJECT_SOURCE_DIR}/modules/imgui/imgui.cpp
#${PROJECT_SOURCE_DIR}/modules/imgui/backends/imgui_impl_opengl3.cpp
#${PROJECT_SOURCE_DIR}/modules/imgui/backends/imgui_impl_glfw.cpp
#)

target_include_directories(myrunnable PRIVATE ${PROJECT_SOURCE_DIR}/modules/imgui)
target_include_directories(myrunnable PRIVATE ${PROJECT_SOURCE_DIR}/modules/imgui/backends)
target_include_directories(myrunnable PRIVATE ${PROJECT_SOURCE_DIR}/modules/imgui/examples/libs/glfw/include)

target_link_libraries(myrunnable PRIVATE imgui tools cxx_project)


