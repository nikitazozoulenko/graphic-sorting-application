#include "display.h"

Display::Display(const int width, const int height, const char* const title, GLFWmonitor* glfw_monitor, GLFWwindow* glfw_other_window)
{
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	window = glfwCreateWindow(width, height, title, glfw_monitor, glfw_other_window);
	glfwMakeContextCurrent(window);
	//glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
}

void Display::swap_buffers()
{
	glfwSwapBuffers(window);
}
int Display::should_close()
{
	return glfwWindowShouldClose(window);
}
GLFWwindow* Display::get_window()
{
	return window;
}