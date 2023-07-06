#ifndef FORMWINDOW_H
#define FORMWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class FormWindow : public QMainWindow
{
    Q_OBJECT

public:
    FormWindow(QWidget *parent = nullptr);
    ~FormWindow();

private:
    Ui::FormWindow *ui;
};
#endif // FORMWINDOW_H
