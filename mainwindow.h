#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "studio.h"
#include "connection.h"
#include <QMainWindow>
#include "equipement.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_ajouter_clicked();

    void on_afficher_clicked();

    void on_supp_clicked();

    void on_ajouter_2_clicked();

    void on_afficher_3_clicked();




    void on_supp_3_clicked();

    void on_read_equipement_textChanged(const QString &arg1);

    void on_read_equipement_returnPressed();

private:
    Ui::MainWindow *ui;
        studio s1;
        equipement eq1;
};
#endif // MAINWINDOW_H
