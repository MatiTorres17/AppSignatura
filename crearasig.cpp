#include "crearasig.h"
#include "ui_crearasig.h"

CrearAsig::CrearAsig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearAsig)
{
    ui->setupUi(this);
    connect(ui->botonCrear,&QPushButton::clicked,this, &CrearAsig::addToDB);
}

CrearAsig::~CrearAsig()
{
    delete ui;
}

void CrearAsig::addManage(dbManage *m){
    manage = m;
}

void CrearAsig::addToDB(){
    //Añadir codigo para añadir a la Base de Datos
    QString n_asig = ui->lineEdit->displayText();
    QString n_prof = ui->lineEdit_2->displayText();

    manage->addMateria(n_asig,n_prof);
    close();
}
