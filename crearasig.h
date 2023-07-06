#ifndef CREARASIG_H
#define CREARASIG_H
#include "dbmanage.h"
#include <QDialog>

namespace Ui {
class CrearAsig;
}

class CrearAsig : public QDialog
{
    Q_OBJECT

public:
    explicit CrearAsig(QWidget *parent = nullptr);
    ~CrearAsig();
    void addManage(dbManage *m);
private slots:
    void addToDB();
private:
    dbManage *manage;
    Ui::CrearAsig *ui;
};

#endif // CREARASIG_H
