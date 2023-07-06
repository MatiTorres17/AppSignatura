#ifndef ADDNOTA_H
#define ADDNOTA_H
#include "dbmanage.h"
#include <QDialog>

namespace Ui {
class addNota;
}

class addNota : public QDialog
{
    Q_OBJECT

public:
    explicit addNota(QWidget *parent = nullptr);
    ~addNota();

private:
    Ui::addNota *ui;
};

#endif // ADDNOTA_H
