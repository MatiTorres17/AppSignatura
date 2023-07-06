#include "dbmanage.h"
#include <QDir>
dbManage::dbManage(){
}

bool dbManage::VerificarDB(){
    if (QSqlDatabase::isDriverAvailable("QSQLITE")){
        QString dbName = QDir::currentPath() + "/mydatabase.db";
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(dbName);
        return true;
    }else{
        return false;
    }
}
bool dbManage::addMateria(QString materia, QString nom_prof){
    if(db.open()){
    QSqlQuery q;
        qDebug() <<q.exec("CREATE TABLE IF NOT EXIST Materia ("
               "id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
               "nombre VARCHAR(255),"
               "nom_profesor VARCHAR(255)"
               ")");
        QString query = "INSERT INTO Materia (nombre,nom_profesor) VALUES ('"+materia+"','"+nom_prof+"')";
        qDebug() <<q.exec(query);
        qDebug() <<q.exec("SELECT * FROM Materia");
        while(q.next()){
            qDebug() << q.value("id").toInt();
            qDebug() << q.value("nombre").toString();
            qDebug() << q.value("nom_profesor").toString();
        }
        db.close();
        return true;
    }else{
        return false;
    }
}
