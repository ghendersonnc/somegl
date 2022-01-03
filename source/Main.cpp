#include <iostream>

// Include glad before glfw
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow* window;

    if( !glfwInit() ) {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "CMAKE IS NEAT", NULL, NULL );

    if (!window) {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
    glfwMakeContextCurrent(window);

    gladLoadGL();

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
