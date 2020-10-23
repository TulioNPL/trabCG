#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = nullptr);

signals:

public slots:
    void toggleBackgroundColor(bool toBlack);

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

};

#endif // GLWIDGET_H
