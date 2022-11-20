#ifndef CONTEXT_MANAGER_H
#define CONTEXT_MANAGER_H

void framebufferSizeCallback(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
}

#endif 