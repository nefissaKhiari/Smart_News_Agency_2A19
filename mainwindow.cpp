#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "studio.h"
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include  "QtSql"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "connection.h"
#include <QComboBox>
#include "equipement.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_ajouter_clicked()
{
    int id=ui->id->text().toInt();
   QString dispo=ui->dispo->currentText();
   QString salle=ui->salle->currentText();

 bool test=studio(id,salle,dispo).add();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");

     msgBox.exec();
 }
 else{
     msgBox.setText("Echec d'ajout");
    msgBox.exec();
}
}

void MainWindow::on_afficher_clicked()
{
    QString choice =ui->comboBox_studio->currentText();
    if (choice == "Par date")
    {
    ui->Afficher_2->setModel(s1.show());
}
    if (choice == "ID")
    {
        ui->Afficher_2->setModel(s1.show_id());

    }
    if (choice == "Salle")
     {
        ui->Afficher_2->setModel(s1.show_salle());

    }
    if (choice == "Dispo")
     {
        ui->Afficher_2->setModel(s1.show_dispo());

    }

}

void MainWindow::on_supp_clicked()
{

    studio s;
    s.set_id(ui->read_studio->text().toInt());
       bool test=s.remove(s.get_id());
       QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
        msgBox.exec();

    }
    else{
        msgBox.setText("Echec de suppression");
        msgBox.exec();
}
}




void MainWindow::on_ajouter_2_clicked()
{
    int nb=ui->nb->text().toInt();
   QString dispo_2=ui->dispo_2->currentText();
   QString name=ui->name->currentText();

 bool test=equipement(nb,name,dispo_2).add();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");

     msgBox.exec();
 }
 else{
     msgBox.setText("Echec d'ajout");
    msgBox.exec();
}
}

void MainWindow::on_afficher_3_clicked()
{

    QString choice =ui->comboBox_equipement->currentText();
    if (choice == "Par date")
    {
    ui->Afficher_4->setModel(eq1.show());
}
    if (choice == "nb")
    {
        ui->Afficher_4->setModel(eq1.show_nb());

    }
    if (choice == "dispo")
     {
        ui->Afficher_4->setModel(eq1.show_dispo());

    }
    if (choice == "name")
     {
        ui->Afficher_4->setModel(eq1.show_name());

    }
}

void MainWindow::on_supp_3_clicked()
{
    equipement  eq;
    eq.set_nb(ui->read_equipement->text().toInt());
       bool test=eq.remove(eq.get_nb());
       QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
        msgBox.exec();

    }
    else{
        msgBox.setText("Echec de suppression");
        msgBox.exec();
}
}

void MainWindow::on_read_equipement_textChanged(const QString &arg1)
{


    //QModelIndexList indexes = ui->Afficher_4->model()->match(ui->Afficher_4->model()->index(0,0),Qt::EditRole,arg1,-1, Qt::MatchFlags(Qt::MatchContains|Qt::MatchWrap));

    /*if(indexes.length() > from){
        QModelIndex ix = indexes.at(from);
        ui->Afficher_4->setCurrentIndex(ix);
        ui->Afficher_4->scrollTo(ix);
    }*/

}

void MainWindow::on_read_equipement_returnPressed()
{
    ui->Afficher_4->setModel(eq1.showSearch(ui->read_equipement->text()));
}
