#include "addbloq.h"
#include "ui_addbloq.h"

AddBloq::AddBloq(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBloq)
{
    ui->setupUi(this);
}

AddBloq::~AddBloq()
{
    delete ui;
}
