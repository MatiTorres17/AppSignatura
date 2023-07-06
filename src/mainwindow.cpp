#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->botonAddNota,SIGNAL(clicked()),this,SLOT(openaddNota()));
    connect(ui->botonEditNota,SIGNAL(clicked()),this,SLOT(openeditNota()));
    connect(ui->botonCrearAsig,&QPushButton::clicked,this,&MainWindow::openaddAsig);
    connect(ui->botonEditAsig,&QPushButton::clicked,this,&MainWindow::openeditAsig);
    connect(ui->botonAddBlo,&QPushButton::clicked,this,&MainWindow::openaddBloq);
    connect(ui->botonEditBlo,&QPushButton::clicked,this,&MainWindow::openeditBloq);
    ui->comboBox->insertItems(0,{"Mate 3","POO", "Fisica 130"});
    ui->comboBox_2->insertItems(0,{"Lunes","Martes","Miercoles","Jueves", "Viernes" });
    if(!manage.VerificarDB()){
        QMessageBox::critical(this,"Error","No posee SQLite.");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openaddAsig(){
    CrearAsig *asig = new CrearAsig(this);
    asig->addManage(&manage);
    asig->setModal(true);
    asig->show();
}
void MainWindow::openeditAsig(){
    CrearAsig *asig = new CrearAsig(this);
    asig->setModal(true);
    asig->show();
}
void MainWindow::openaddNota(){
    addNota *nota = new addNota(this);
    nota->setModal(true); // Evita que interactue con la ventana anterior hasta que esta se cierre
    nota->show();
}
void MainWindow::openeditNota(){
    addNota *nota = new addNota(this);
    nota->setModal(true);
    nota->show();
}

void MainWindow::openaddBloq(){
    AddBloq *bloque = new AddBloq(this);
    bloque->setModal(true);
    bloque->show();
}
void MainWindow::openeditBloq(){
    AddBloq *bloque = new AddBloq(this);
    bloque->setModal(true);
    bloque->show();
}

