/********************************************************************************
** Form generated from reading UI file 'gestion_ons.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_ONS_H
#define UI_GESTION_ONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_ons
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label;
    QComboBox *journaliste_sel_col;
    QPushButton *pushButton_4;
    QLineEdit *rech_journaliste;
    QTableView *table_journaliste;
    QPushButton *pushButton;
    QPushButton *actiondelete_journaliste;
    QWidget *tab_4;
    QLineEdit *nb_articles;
    QLabel *label_7;
    QLineEdit *id;
    QLabel *label_8;
    QComboBox *specialite;
    QLabel *label_9;
    QLineEdit *nom;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *actionadd_journaliste;
    QPushButton *actionedit_journaliste;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QTableView *table_article;
    QLineEdit *rech_article;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QComboBox *article_sel_col;
    QPushButton *stat;
    QPushButton *actiondelete_article;
    QWidget *tab_6;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *id2;
    QComboBox *type2;
    QLabel *label_14;
    QComboBox *journaliste2;
    QLabel *label_15;
    QPushButton *actionadd_article;
    QPushButton *actionedit_article;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_ons)
    {
        if (gestion_ons->objectName().isEmpty())
            gestion_ons->setObjectName(QStringLiteral("gestion_ons"));
        gestion_ons->resize(807, 577);
        centralwidget = new QWidget(gestion_ons);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 771, 551));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 711, 591));
        tabWidget_2->setCursor(QCursor(Qt::ClosedHandCursor));
        tabWidget_2->setAutoFillBackground(false);
        tabWidget_2->setStyleSheet(QStringLiteral("background-image: url(:/res/img/bg.png);"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 331, 31));
        journaliste_sel_col = new QComboBox(tab_3);
        journaliste_sel_col->setObjectName(QStringLiteral("journaliste_sel_col"));
        journaliste_sel_col->setGeometry(QRect(611, 40, 81, 22));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 420, 281, 23));
        rech_journaliste = new QLineEdit(tab_3);
        rech_journaliste->setObjectName(QStringLiteral("rech_journaliste"));
        rech_journaliste->setGeometry(QRect(490, 40, 111, 24));
        rech_journaliste->setClearButtonEnabled(true);
        table_journaliste = new QTableView(tab_3);
        table_journaliste->setObjectName(QStringLiteral("table_journaliste"));
        table_journaliste->setGeometry(QRect(40, 81, 651, 331));
        table_journaliste->setStyleSheet(QStringLiteral(""));
        table_journaliste->setSortingEnabled(true);
        table_journaliste->horizontalHeader()->setCascadingSectionResizes(true);
        table_journaliste->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_journaliste->horizontalHeader()->setStretchLastSection(false);
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 420, 331, 23));
        actiondelete_journaliste = new QPushButton(tab_3);
        actiondelete_journaliste->setObjectName(QStringLiteral("actiondelete_journaliste"));
        actiondelete_journaliste->setGeometry(QRect(390, 40, 93, 28));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        nb_articles = new QLineEdit(tab_4);
        nb_articles->setObjectName(QStringLiteral("nb_articles"));
        nb_articles->setGeometry(QRect(270, 290, 81, 20));
        nb_articles->setReadOnly(true);
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 290, 101, 16));
        id = new QLineEdit(tab_4);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(250, 170, 113, 20));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 170, 47, 14));
        specialite = new QComboBox(tab_4);
        specialite->setObjectName(QStringLiteral("specialite"));
        specialite->setGeometry(QRect(250, 250, 111, 22));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(170, 250, 61, 16));
        nom = new QLineEdit(tab_4);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(250, 210, 113, 20));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(180, 210, 47, 14));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(220, 30, 231, 51));
        actionadd_journaliste = new QPushButton(tab_4);
        actionadd_journaliste->setObjectName(QStringLiteral("actionadd_journaliste"));
        actionadd_journaliste->setGeometry(QRect(200, 410, 93, 28));
        actionedit_journaliste = new QPushButton(tab_4);
        actionedit_journaliste->setObjectName(QStringLiteral("actionedit_journaliste"));
        actionedit_journaliste->setGeometry(QRect(360, 410, 93, 28));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(20, 20, 741, 491));
        tabWidget_3->setStyleSheet(QStringLiteral("background-image: url(:/res/img/bg.png);"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        table_article = new QTableView(tab_5);
        table_article->setObjectName(QStringLiteral("table_article"));
        table_article->setGeometry(QRect(40, 80, 651, 341));
        table_article->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_article->setSortingEnabled(true);
        table_article->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        rech_article = new QLineEdit(tab_5);
        rech_article->setObjectName(QStringLiteral("rech_article"));
        rech_article->setGeometry(QRect(460, 40, 141, 24));
        rech_article->setClearButtonEnabled(true);
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 430, 331, 23));
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 430, 281, 23));
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 30, 261, 31));
        article_sel_col = new QComboBox(tab_5);
        article_sel_col->setObjectName(QStringLiteral("article_sel_col"));
        article_sel_col->setGeometry(QRect(610, 40, 81, 22));
        stat = new QPushButton(tab_5);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(430, 40, 24, 24));
        stat->setStyleSheet(QStringLiteral("background-image: url(:/res/img/unnamed.png);"));
        actiondelete_article = new QPushButton(tab_5);
        actiondelete_article->setObjectName(QStringLiteral("actiondelete_article"));
        actiondelete_article->setGeometry(QRect(330, 40, 93, 28));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 170, 47, 14));
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(190, 270, 61, 16));
        id2 = new QLineEdit(tab_6);
        id2->setObjectName(QStringLiteral("id2"));
        id2->setGeometry(QRect(270, 170, 113, 20));
        type2 = new QComboBox(tab_6);
        type2->setObjectName(QStringLiteral("type2"));
        type2->setGeometry(QRect(270, 220, 111, 22));
        label_14 = new QLabel(tab_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(200, 220, 47, 14));
        journaliste2 = new QComboBox(tab_6);
        journaliste2->setObjectName(QStringLiteral("journaliste2"));
        journaliste2->setGeometry(QRect(270, 270, 111, 22));
        label_15 = new QLabel(tab_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(230, 30, 231, 41));
        actionadd_article = new QPushButton(tab_6);
        actionadd_article->setObjectName(QStringLiteral("actionadd_article"));
        actionadd_article->setGeometry(QRect(210, 350, 93, 28));
        actionedit_article = new QPushButton(tab_6);
        actionedit_article->setObjectName(QStringLiteral("actionedit_article"));
        actionedit_article->setGeometry(QRect(370, 350, 93, 28));
        tabWidget_3->addTab(tab_6, QString());
        tabWidget->addTab(tab_2, QString());
        gestion_ons->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_ons);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 807, 26));
        gestion_ons->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_ons);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_ons->setStatusBar(statusbar);

        retranslateUi(gestion_ons);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_ons);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_ons)
    {
        gestion_ons->setWindowTitle(QApplication::translate("gestion_ons", "Gestion Journalistes et Articles", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_ons", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#ff1601;\">Gestion Journalistes</span></p></body></html>", Q_NULLPTR));
        journaliste_sel_col->clear();
        journaliste_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_ons", "All", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Specialite", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Nb Articles", Q_NULLPTR)
        );
        pushButton_4->setText(QApplication::translate("gestion_ons", "Imprimer", Q_NULLPTR));
        rech_journaliste->setPlaceholderText(QApplication::translate("gestion_ons", "Recherche", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_ons", "Export Excel", Q_NULLPTR));
        actiondelete_journaliste->setText(QApplication::translate("gestion_ons", "supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("gestion_ons", "<--", Q_NULLPTR));
        nb_articles->setPlaceholderText(QApplication::translate("gestion_ons", "        0", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_ons", "Nombre Articles", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_ons", "ID", Q_NULLPTR));
        specialite->clear();
        specialite->insertItems(0, QStringList()
         << QApplication::translate("gestion_ons", "            --", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Sport", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Fashion", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "News", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Art", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("gestion_ons", "Specialite", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_ons", "Nom", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_ons", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#ff2600; vertical-align:super;\">Details Journaliste</span></p></body></html>", Q_NULLPTR));
        actionadd_journaliste->setText(QApplication::translate("gestion_ons", "ajouter", Q_NULLPTR));
        actionedit_journaliste->setText(QApplication::translate("gestion_ons", "modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("gestion_ons", "-->", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_ons", "Journalistes", Q_NULLPTR));
        rech_article->setPlaceholderText(QApplication::translate("gestion_ons", "Recherche", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("gestion_ons", "Export Excel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_ons", "Imprimer", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_ons", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">Gestion Articles</span></p></body></html>", Q_NULLPTR));
        article_sel_col->clear();
        article_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_ons", "All", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Type", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Journaliste", Q_NULLPTR)
        );
        stat->setText(QString());
        actiondelete_article->setText(QApplication::translate("gestion_ons", "supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("gestion_ons", "<--", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_ons", "  ID", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_ons", "Journaliste", Q_NULLPTR));
        type2->clear();
        type2->insertItems(0, QStringList()
         << QApplication::translate("gestion_ons", "            --", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Sport ", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Fashion", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "News", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Art", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("gestion_ons", "Type", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_ons", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#f90000;\">Details Articles</span></p></body></html>", Q_NULLPTR));
        actionadd_article->setText(QApplication::translate("gestion_ons", "ajouter", Q_NULLPTR));
        actionedit_article->setText(QApplication::translate("gestion_ons", "modifier", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("gestion_ons", "-->", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_ons", "Articles", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_ons: public Ui_gestion_ons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ONS_H
