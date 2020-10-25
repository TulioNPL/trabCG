#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QtOpenGL>
#include <iostream>
#include <fstream>
#include <limits>

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = nullptr);

signals:

public slots:
    void toggleBackgroundColor(bool toBlack);
    void showFileOpenDialog();

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

private:
    void readOFFFile(const QString &fileName);

};

#endif // GLWIDGET_H
