#ifndef WINDOW_H
#define WINDOW_H

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 640
#define TITLE "Graph Engine"

/*
* Create and initiate GLFW window
* Set GLFW WINDOW HINT and setup the window
*/
int window_init(int width, int height, char* title);

/*
* Check if the window is opened and is running
* Return glfwWindowShouldClose()
*/
int window_isOpen();

/*
* Update and renders the window 
* glfwSwapBuffers()
* glfwPollEvents() 
*/
void window_update();

#endif // WINDOW_H