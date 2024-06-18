#include <GLFW/glfw3.h>
#include <leif/leif.h>

#define WIN_MARGIN 20.0f
static int winw = 1280, winh = 720 ;
int main() {
  glfwInit();
  GLFWwindow* window = glfwCreateWindow(winw, winh,"Todo", NULL, NULL);

  glfwMakeContextCurrent(window);

  lf_init_glfw(winw, winh, window);

  
  while(!glfwWindowShouldClose(window)){
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    lf_begin();

    lf_div_begin(((vec2s){WIN_MARGIN, WIN_MARGIN}), ((vec2s){winw- WIN_MARGIN
          * 2.0f, winh - WIN_MARGIN * 2.0f}),true);
    


    lf_text("it works!");
    lf_end();

    glfwPollEvents();

    glfwSwapBuffers(window);

  }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
  
  
}
