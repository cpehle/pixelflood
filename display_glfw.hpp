#ifndef DISPLAY_GLFW_HPP
#define DISPLAY_GLFW_HPP

#include "canvas.hpp"

class Display
{
	public:
		Display(int width, int height, bool fullscreen);
		~Display();
		Canvas canvas;
		void operator()();
	private:
		struct GLFWwindow* window;
		uint32_t* texImageBuf;
};

#endif
