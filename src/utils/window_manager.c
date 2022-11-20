#include <GLAD/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>

#include "../include/graph/utils/window_manager.h"
#include "../include/graph/utils/context_manager.h"

static GLFWwindow *window;

int window_init(int width, int height, char* title) 
{
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE); 
     
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if(window == NULL)
        glfwTerminate();
        return -1;

    glfwMakeContextCurrent(window);

    /*
    * Gerenciamento de redimensionamento de janela
    */
    glfwSetFramebufferSizeCallback(window, framebufferSizeCallback);

    return 1;
}

void window_update() 
{
    glfwSwapBuffers(window);
    glfwPollEvents();   
}

int window_isOpen() 
{
    return !glfwWindowShouldClose(window);
}