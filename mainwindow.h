#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT // each Q_OBJECT operates on its own thread
            // can handle events
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_as_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile = "";
};

#endif // MAINWINDOW_H
