#include "addnota.h"
#include "ui_addnota.h"

addNota::addNota(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNota)
{
    ui->setupUi(this);
}

addNota::~addNota()
{
    delete ui;
}
