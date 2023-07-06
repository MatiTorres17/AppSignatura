#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "crearasig.h"
#include "addnota.h"
#include "addbloq.h"
#include "dbmanage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void openaddNota();
    void openeditNota();
    void openaddBloq();
    void openeditBloq();
    void openaddAsig();
    void openeditAsig();
private:
    dbManage manage;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
