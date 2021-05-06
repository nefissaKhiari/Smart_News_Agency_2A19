#include "gestion_youssef.h"
#include "ui_gestion_youssef.h"

#include "studio.h"
#include <QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include  "QtSql"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "connexion.h"
#include <QComboBox>
#include "equipement.h"
#include "mainwindow.h"
#include<QSystemTrayIcon>
QChartView* gestion_youssef::chartView;

gestion_youssef::gestion_youssef(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_youssef)
{
    ui->setupUi(this);
}

gestion_youssef::~gestion_youssef()
{
    delete ui;
}

void gestion_youssef::on_ajouter_clicked()
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

void gestion_youssef::on_afficher_clicked()
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


QAbstractItemModel *model =  s1.show();

int oui=0,non=0;
for (int i = 0; i < model->rowCount() ; ++i)
{
    if(model->data(model->index(i,2)) == "oui")
    {
        oui++;
    }
    else
    {
        non++;
    }

}



    QChart *chart = new QChart;
    chart->setAnimationOptions(QChart::AllAnimations);
    //! [3]

    // series 1
    //! [4]


    //! [6]

    //! [7]
    gestion_youssef::chartView = new QChartView(chart);
    gestion_youssef::chartView->setRenderHint(QPainter::Antialiasing);
    gestion_youssef::chartView->setMinimumSize(640, 480);
    //! [7]

    //! [8]
    // create main layout

    QLayoutItem* item;
    while ( ( item = ui->studioChart->layout()->takeAt( 0 ) ) != NULL )
    {
        delete item->widget();
        delete item;
    }

   ui->studioChart->addWidget(gestion_youssef::chartView);
   //ui->randomWidget->replace



   QBarSet *set0 = new QBarSet("Uses");

   QStringList categories;

   QBarSeries *series = new QBarSeries;
   series->append(set0);




   int first = 3;
   int count = 5;

categories<<"Disponible"<<"Pas Disponible";
*set0<<oui<<non;

   QVBarModelMapper *mapper = new QVBarModelMapper();
   mapper->setFirstBarSetColumn(1);
   mapper->setLastBarSetColumn(4);
   mapper->setFirstRow(first);
   mapper->setRowCount(count);
   mapper->setSeries(series);
   //mapper->setModel(m_model);


   //gestion_youssef::chartView->chart()->removeAllSeries();
   gestion_youssef::chartView->chart()->addSeries(series);
   //! [4]

   //! [5]
   // for storing color hex from the series
   QString seriesColorHex = "#000000";

   // get the color of the series and use it for showing the mapped area
   QList<QBarSet *> barsets = series->barSets();
   for (int i = 0; i < barsets.count(); i++) {
       seriesColorHex = "#" + QString::number(barsets.at(i)->brush().color().rgb(), 16).right(6).toUpper();
       //m_model->addMapping(seriesColorHex, QRect(1 + i, first, 1, barsets.at(i)->count()));
   }
   //! [5]

   //! [6]
   QBarCategoryAxis *axis = new QBarCategoryAxis();
   axis->setCategories(categories);
   gestion_youssef::chartView->chart()->createDefaultAxes();
   gestion_youssef::chartView->chart()->setAxisX(axis, series);
   gestion_youssef::chartView->chart()->setAxisY(axis, series);





}

void gestion_youssef::on_supp_clicked()
{

    studio s;
    s.set_id(ui->read_studio->text().toInt());
       bool test=s.remove(s.get_id());
       QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
        msgBox.exec();

        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
        notifyIcon->setIcon(QIcon(":/img/img/logo.png"));
        notifyIcon->show();
        notifyIcon->showMessage("Succes!","Suppression avec succes.!",QSystemTrayIcon::Information,15000);


    }
    else{
        msgBox.setText("Echec de suppression");

        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
        notifyIcon->setIcon(QIcon(":/img/img/logo.png"));
        notifyIcon->show();
        notifyIcon->showMessage("Echec!","Echec de suppression.!",QSystemTrayIcon::Information,15000);

        msgBox.exec();
}
}

void gestion_youssef::on_ajouter_2_clicked()
{
    int nb=ui->nb->text().toInt();
   QString dispo_2=ui->dispo_2->currentText();
   QString name=ui->name->currentText();

 bool test=equipement(nb,name,dispo_2).add();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");
     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
     notifyIcon->setIcon(QIcon(":/img/img/logo.png"));
     notifyIcon->show();
     notifyIcon->showMessage("Succes!","Ajout avec succes.!",QSystemTrayIcon::Information,15000);

     msgBox.exec();
 }
 else{
     msgBox.setText("Echec d'ajout");
     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
     notifyIcon->setIcon(QIcon(":/img/img/logo.png"));
     notifyIcon->show();
     notifyIcon->showMessage("Echec!","Echec d'ajout",QSystemTrayIcon::Information,15000);
    msgBox.exec();
}
}

void gestion_youssef::on_afficher_3_clicked()
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

void gestion_youssef::on_supp_3_clicked()
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

void gestion_youssef::on_read_equipement_textChanged(const QString &arg1)
{


    //QModelIndexList indexes = ui->Afficher_4->model()->match(ui->Afficher_4->model()->index(0,0),Qt::EditRole,arg1,-1, Qt::MatchFlags(Qt::MatchContains|Qt::MatchWrap));

    /*if(indexes.length() > from){
        QModelIndex ix = indexes.at(from);
        ui->Afficher_4->setCurrentIndex(ix);
        ui->Afficher_4->scrollTo(ix);
    }*/

}

void gestion_youssef::on_read_equipement_returnPressed()
{
    ui->Afficher_4->setModel(eq1.showSearch(ui->read_equipement->text()));
}

void gestion_youssef::on_pdfEquip_clicked()
{
    equipement::printPDF(ui->Afficher_4);
    QMessageBox::information(nullptr, QObject::tr("PDF Saved"),
                      QObject::tr("PDF file saved as equipement.pdf"), QMessageBox::Ok);

}

void gestion_youssef::on_actiondeconnecter_triggered()
{
    close();
        MainWindow *ws;
    ws = new MainWindow();
ws->setWindowTitle("News Agency");
ws->show();
}

void gestion_youssef::on_pushButton_3_clicked()
{
    int nb=ui->nb->text().toInt();
   QString dispo_2=ui->dispo_2->currentText();
   QString name=ui->name->currentText();

 bool test=equipement(nb,name,dispo_2).modify();
 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");
     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
     notifyIcon->setIcon(QIcon(":/img/img/logo.png"));
     notifyIcon->show();
     notifyIcon->showMessage("Succes!","Modification avec succes.!",QSystemTrayIcon::Information,15000);

     msgBox.exec();
 }
 else{
     msgBox.setText("Echec d'ajout");
     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
     notifyIcon->setIcon(QIcon(":/img/img/logo.png"));
     notifyIcon->show();
     notifyIcon->showMessage("Echec!","Echec de modification",QSystemTrayIcon::Information,15000);
    msgBox.exec();
}
}

void gestion_youssef::on_pushButton_clicked()
{
    int id=ui->id->text().toInt();
   QString dispo=ui->dispo->currentText();
   QString salle=ui->salle->currentText();

 bool test=studio(id,salle,dispo).modify();
 QMessageBox msgBox;

 if(test)
   {

     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
     notifyIcon->setIcon(QIcon(":/img/img/logo.png"));
     notifyIcon->show();
     notifyIcon->showMessage("Succes!","Modification avec succes.",QSystemTrayIcon::Information,15000);

     msgBox.setText("Modification avec succes.");

     msgBox.exec();
 }
 else{
     msgBox.setText("Echec de modification");
     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
     notifyIcon->setIcon(QIcon(":/img/img/logo.png"));
     notifyIcon->show();
     notifyIcon->showMessage("Echec!","Echec modification.",QSystemTrayIcon::Information,15000);

    msgBox.exec();
}
}
