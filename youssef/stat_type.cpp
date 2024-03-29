#include "stat_type.h"
#include "ui_stat_type.h"

stat_type::stat_type(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stat_type)
{
    ui->setupUi(this);
}

stat_type::~stat_type()
{
    delete ui;
}

void stat_type::choix_pie()
{

    vector<QString> liste_type;
    vector<qreal> count;
    QSqlQuery q1,q2;
    qreal tot=0,c;
    q1.prepare("SELECT DISTINCT TYPE FROM ARTICLES");
    q1.exec();
    while (q1.next()){
        liste_type.push_back(q1.value(0).toString());
    }

    q1.prepare("SELECT * FROM ARTICLES");
    q1.exec();
    while (q1.next()){
        tot++;
    }

    for (auto i = liste_type.begin(); i != liste_type.end(); ++i) {
         q2.prepare("SELECT * FROM ARTICLES where TYPE = :m");
         q2.bindValue(":m", *i);
         q2.exec();
         c=0;
         while (q2.next()){c++;}
         count.push_back(c/tot);

    }


// Define slices and percentage of whole they take up
QPieSeries *series = new QPieSeries();
for(unsigned int i = 0; i < liste_type.size(); i++)
series->append(liste_type[i] ,count[i]);



QPieSlice *slice = new QPieSlice();
slice->setLabelVisible(true);
slice->setPen(QPen(Qt::darkGreen,2));
// Create the chart widget
QChart *chart = new QChart();

// Add data to chart with title and show legend
chart->addSeries(series);
chart->legend()->show();
chart->setTitle("stat d'ARTICLES ");


// Used to display the chart
chartView = new QChartView(chart,ui->label);
chartView->setRenderHint(QPainter::Antialiasing);
chartView->setMinimumSize(400,400);

chartView->show();
}
