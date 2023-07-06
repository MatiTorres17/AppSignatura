#ifndef DBMANAGE_H
#define DBMANAGE_H
#include <vector>
#include <iostream>
#include <QTime>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QStringList>
#include <QMessageBox>
#include <QtDebug>
using namespace std;
const QStringList Materias;

class dbManage{
public:
    dbManage();
    bool VerificarDB();
    bool addMateria(QString materia, QString nom_prof);
    bool editMateria(QString materia, QString nom_prof);
    bool delMateria(QString materia);
    bool addNota(QString materia,QString nom_nota, int nota);
    bool editNota(QString materia,QString nom_nota, int nota);
    bool delNota(QString materia, QString nom_nota);
private:
    QSqlDatabase db;
};

#endif // DBMANAGE_H
