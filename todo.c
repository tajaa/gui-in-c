#include <GLFW/glfw3.h>

int main() {
  //init GLFW
  glfwInit();
  //create a window w/ a width of 1280 px, 720 pixels height, 
  //&little "todo" and last 2 params for spec a mointor adn OpenGL context
  // -sharing which are not used here yet
  GLFWwindow* window = glfwCreateWindow(1280, 720, "Todo", NULL, NULL);
  
  while(!glfwWindowShouldClose(window)){
    //clear the color buffer
    glClear(GL_COLOR_BUFFER_BIT);
    //set the clear color to a dark gray w/alpha of 1
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    // Poll for events (keyboard, mouse, etc)
    glfwPollEvents();
    //swap the front and back buffers
    glfwSwapBuffers(window);

  }
   //destory the window  
    glfwDestroyWindow(window);
    //terminate GLFW
    glfwTerminate();
    //return 0 to indicate a successful program execution
    return 0;
  
  
}
