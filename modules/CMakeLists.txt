
add_library(imgui 
${PROJECT_SOURCE_DIR}/modules/imgui/imgui_demo.cpp
${PROJECT_SOURCE_DIR}/modules/imgui/imgui_draw.cpp
${PROJECT_SOURCE_DIR}/modules/imgui/imgui_internal.h
${PROJECT_SOURCE_DIR}/modules/imgui/imgui_tables.cpp
${PROJECT_SOURCE_DIR}/modules/imgui/imgui_widgets.cpp
${PROJECT_SOURCE_DIR}/modules/imgui/imgui.cpp
${PROJECT_SOURCE_DIR}/modules/imgui/backends/imgui_impl_opengl3.cpp
${PROJECT_SOURCE_DIR}/modules/imgui/backends/imgui_impl_glfw.cpp
)
target_include_directories(imgui PRIVATE ./imgui)
target_include_directories(imgui PRIVATE ./imgui/backends)
target_include_directories(imgui PRIVATE ./imgui/examples/libs/glfw/include)

target_link_libraries(imgui PUBLIC ${PROJECT_SOURCE_DIR}/modules/imgui/examples/libs/glfw/lib-vc2010-64/glfw3.lib opengl32)
#add_dependencies(imgui PUBLIC ${PROJECT_SOURCE_DIR}/modules/imgui/examples/libs/glfw/lib-vc2010-64/glfw3.lib)
#target_link_libraries(${PROJECT_SOURCE_DIR}/modules/imgui/examples/libs/glfw/lib-vc2010-64/glfw3.lib PUBLIC cxx_project)

target_link_libraries(imgui PUBLIC cxx_project)

