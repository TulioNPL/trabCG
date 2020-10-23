#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent) : QGLWidget(parent)
{
}

void GLWidget::initializeGL(){

}

void GLWidget::resizeGL(int width, int height){
}

void GLWidget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT);
}

void GLWidget::toggleBackgroundColor(bool toBlack) {
    if (toBlack)
        glClearColor (0, 0, 0, 1);
    else
        glClearColor (1, 1, 1, 1);
    updateGL ();
}
