#include "mainwindow.h"
#include <QApplication>
#include <QGLFormat>

int main(int argc, char *argv[])
{
    QGLFormat format = QGLFormat::defaultFormat();
    format.setSampleBuffers(true);  //Anti-serrilhamento
    format.setSamples(8);           //Anti-serrilhamento
    if (!format.sampleBuffers())
        qWarning("Multisample buffer is not supported.");
    QGLFormat::setDefaultFormat(format);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}
