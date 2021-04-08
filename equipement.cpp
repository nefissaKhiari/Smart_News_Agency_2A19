#include "equipement.h"

equipement::equipement()
{
    nb=0;
    name="";
    dispo="";

}

equipement::equipement(int nb, QString name, QString dispo )
{
    this->nb=nb;
    this->name=name;
    this->dispo=dispo;
 }


int equipement::get_nb(){return nb;}
QString equipement::get_name(){return name;}
QString equipement::get_dispo(){return dispo;}
bool equipement::add(){
    QSqlQuery query;
    query.prepare("INSERT INTO EQUIPEMENT (NB, NAME, DISPO)"
                  "VALUES(:NB, :NAME, :DISPO )");
    query.bindValue(":NB",nb);
    query.bindValue(":NAME",name);
    query.bindValue(":DISPO",dispo);
    return query.exec();
}

QSqlQueryModel * equipement::show()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM equipement");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NB"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISPO"));
        return model;
}

bool equipement::remove(int nb)
{
QSqlQuery query;
QString toSearch= QString::number(nb);
query.prepare("DELETE FROM EQUIPEMENT WHERE NB = :NB");
query.bindValue(":NB", toSearch);
return    query.exec();
}
QSqlQueryModel * equipement::show_name()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM STUDIO ORDER BY name DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NB"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISPO"));
        return model;
}
void equipement::set_nb(int id){this->nb=id;}

QSqlQueryModel * equipement::show_dispo()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM EQUIPEMENT ORDER BY DISPO DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NB"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISPO"));
        return model;
}
QSqlQueryModel * equipement::show_nb()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM EQUIPEMENT ORDER BY ID DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NB"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISPO"));
        return model;
}
QSqlQueryModel * equipement::show_one()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM EQUIPEMENT ORDER BY ID DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NB"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISPO"));
        return model;
}

