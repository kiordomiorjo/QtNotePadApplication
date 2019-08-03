#include "mainwindow.h"
#include <QApplication> // widgets, event handling, and more

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // create application object
    MainWindow w; // create main window
    w.show(); // show main window

    return a.exec(); // loop
}
