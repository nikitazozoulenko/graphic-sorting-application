#ifndef SORTING_APPLICATION_DISPLAY_H
#define SORTING_APPLICATION_DISPLAY_H

#include <GL\glew.h>
#include <GLFW\glfw3.h>

class Display
{
public:
	Display(const int width, const int height, const char* const title, GLFWmonitor* glfw_monitor, GLFWwindow* glfw_other_window);
	void swap_buffers();
	int should_close();
	GLFWwindow* get_window();
protected:
private:
	GLFWwindow* window;
};
#endif // !SORTING_APPLICATION_DISPLAY_H
