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

void GLWidget::showFileOpenDialog()
{
    QByteArray fileFormat = "off";
        QString fileName;
        fileName = QFileDialog :: getOpenFileName ( this,
            "Open File",
            QDir :: homePath(),
            QString("%1 Files (*.%2)")
            .arg(QString(fileFormat.toUpper()))
            .arg(QString(fileFormat)));

        if (!fileName.isEmpty()) {
            readOFFFile(fileName);

            //genNormals();             // Metodo nao implementado
            //genTexCoordsCylinder();   // Metodo nao implementado
            //genTangents();            // Metodo nao implementado

            //createVBOs();               // Metodo nao implementado
            //createShaders();           // Metodo nao implementado

            updateGL();
        }

}

void GLWidget::readOFFFile(const QString &fileName)
{


}
