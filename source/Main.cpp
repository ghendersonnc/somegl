#include <iostream>

// Include glad before glfw
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow* window;

    if( !glfwInit() ) {
        std::cerr << "Failed to initialize GLFW\n" << std::endl;
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "CMAKE IS NEAT", NULL, NULL );

    if (!window) {
        std::cerr << "Failed to open GLFW window" << std::endl;
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        std::cout << "Failed to initialize OpenGL context" << std::endl;
        return -1;
    }

    {
        int MAJOR_VERSION;
        int MINOR_VERSION;

        glGetIntegerv(GL_MAJOR_VERSION, &MAJOR_VERSION);
        glGetIntegerv(GL_MINOR_VERSION, &MINOR_VERSION);

        std::cout << "OpenGL Version " << MAJOR_VERSION << "." << MINOR_VERSION << std::endl;
    }

    while( !glfwWindowShouldClose(window) ) {

        // quick legacy OpenGL
        glBegin(GL_TRIANGLES);
        glVertex3f(-1.0f, -1.0f, 0.0f);
        glVertex3f(0.0f, 1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, 0.0f);
        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }


    glfwTerminate();

}
