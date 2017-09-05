//GLEW, GLFW, GLM
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm\glm.hpp>

//Standard c++ & c includes
#include <iostream>

//My own includes
#include "display.h"

int main()
{
	//Init glfw, create window then init glew
	glfwInit();
	Display display(1600, 900, "Sorting Application", nullptr, nullptr);
	glewExperimental = GL_TRUE;
	glewInit();

	while (!display.should_close())
	{
		display.swap_buffers();
		glfwPollEvents();
	}
	glfwTerminate();
	return 0;
}