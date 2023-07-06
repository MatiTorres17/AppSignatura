#ifndef ADDBLOQ_H
#define ADDBLOQ_H
#include "dbmanage.h"
#include <QDialog>

namespace Ui {
class AddBloq;
}

class AddBloq : public QDialog
{
    Q_OBJECT

public:
    explicit AddBloq(QWidget *parent = nullptr);
    ~AddBloq();

private:
    Ui::AddBloq *ui;
};

#endif // ADDBLOQ_H
