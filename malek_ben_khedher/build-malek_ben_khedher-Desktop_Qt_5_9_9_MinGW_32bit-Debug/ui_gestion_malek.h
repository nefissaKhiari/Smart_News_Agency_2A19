/********************************************************************************
** Form generated from reading UI file 'gestion_malek.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_MALEK_H
#define UI_GESTION_MALEK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_malek
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *table_publicite;
    QLabel *label;
    QComboBox *publicite_sel_col;
    QLineEdit *rech_publicite;
    QPushButton *stat;
    QGroupBox *groupBox;
    QLabel *label_5;
    QComboBox *type;
    QDoubleSpinBox *cout;
    QLineEdit *id;
    QComboBox *sponsor;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *actionadd_publicite;
    QPushButton *actionedit_publicite;
    QPushButton *actiondelete_publicite;
    QWidget *tab_2;
    QTableView *table_sponsor;
    QLabel *label_4;
    QComboBox *sponsor_sel_col;
    QLineEdit *rech_sponsor;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLineEdit *prenom;
    QLineEdit *nom;
    QLabel *label_8;
    QLineEdit *id2;
    QLabel *label_9;
    QPushButton *actionadd_sponsor;
    QPushButton *actionedit_sponsor;
    QPushButton *actiondelete_sponsor;
    QWidget *tab_5;
    QLineEdit *rcpt;
    QLineEdit *file;
    QPushButton *sendBtn;
    QLineEdit *subject;
    QLineEdit *mail_pass;
    QTextEdit *msg;
    QPushButton *browseBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_malek)
    {
        if (gestion_malek->objectName().isEmpty())
            gestion_malek->setObjectName(QStringLiteral("gestion_malek"));
        gestion_malek->resize(941, 598);
        centralwidget = new QWidget(gestion_malek);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 921, 471));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        table_publicite = new QTableView(tab);
        table_publicite->setObjectName(QStringLiteral("table_publicite"));
        table_publicite->setGeometry(QRect(20, 71, 651, 371));
        table_publicite->setSortingEnabled(true);
        table_publicite->horizontalHeader()->setCascadingSectionResizes(true);
        table_publicite->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_publicite->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 201, 31));
        publicite_sel_col = new QComboBox(tab);
        publicite_sel_col->setObjectName(QStringLiteral("publicite_sel_col"));
        publicite_sel_col->setGeometry(QRect(580, 30, 81, 22));
        rech_publicite = new QLineEdit(tab);
        rech_publicite->setObjectName(QStringLiteral("rech_publicite"));
        rech_publicite->setGeometry(QRect(430, 30, 141, 24));
        rech_publicite->setClearButtonEnabled(true);
        stat = new QPushButton(tab);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(400, 30, 24, 24));
        stat->setStyleSheet(QStringLiteral("background-image: url(:/res/img/unnamed.png);"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(700, 80, 191, 211));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 93, 61, 16));
        type = new QComboBox(groupBox);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(70, 60, 111, 22));
        cout = new QDoubleSpinBox(groupBox);
        cout->setObjectName(QStringLiteral("cout"));
        cout->setGeometry(QRect(70, 90, 111, 22));
        id = new QLineEdit(groupBox);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(70, 30, 113, 20));
        sponsor = new QComboBox(groupBox);
        sponsor->setObjectName(QStringLiteral("sponsor"));
        sponsor->setGeometry(QRect(70, 120, 111, 22));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 125, 61, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 63, 47, 14));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 34, 47, 14));
        actionadd_publicite = new QPushButton(groupBox);
        actionadd_publicite->setObjectName(QStringLiteral("actionadd_publicite"));
        actionadd_publicite->setGeometry(QRect(20, 160, 75, 23));
        actionedit_publicite = new QPushButton(groupBox);
        actionedit_publicite->setObjectName(QStringLiteral("actionedit_publicite"));
        actionedit_publicite->setGeometry(QRect(100, 160, 75, 23));
        actiondelete_publicite = new QPushButton(tab);
        actiondelete_publicite->setObjectName(QStringLiteral("actiondelete_publicite"));
        actiondelete_publicite->setGeometry(QRect(700, 300, 191, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_sponsor = new QTableView(tab_2);
        table_sponsor->setObjectName(QStringLiteral("table_sponsor"));
        table_sponsor->setGeometry(QRect(20, 70, 651, 371));
        table_sponsor->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_sponsor->setSortingEnabled(true);
        table_sponsor->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 191, 31));
        sponsor_sel_col = new QComboBox(tab_2);
        sponsor_sel_col->setObjectName(QStringLiteral("sponsor_sel_col"));
        sponsor_sel_col->setGeometry(QRect(590, 30, 81, 22));
        rech_sponsor = new QLineEdit(tab_2);
        rech_sponsor->setObjectName(QStringLiteral("rech_sponsor"));
        rech_sponsor->setGeometry(QRect(440, 30, 141, 24));
        rech_sponsor->setClearButtonEnabled(true);
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(690, 70, 201, 181));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 63, 47, 14));
        prenom = new QLineEdit(groupBox_2);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(72, 93, 111, 21));
        nom = new QLineEdit(groupBox_2);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(70, 60, 113, 20));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 34, 47, 14));
        id2 = new QLineEdit(groupBox_2);
        id2->setObjectName(QStringLiteral("id2"));
        id2->setGeometry(QRect(70, 30, 113, 20));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 96, 47, 14));
        actionadd_sponsor = new QPushButton(groupBox_2);
        actionadd_sponsor->setObjectName(QStringLiteral("actionadd_sponsor"));
        actionadd_sponsor->setGeometry(QRect(20, 140, 75, 23));
        actionedit_sponsor = new QPushButton(groupBox_2);
        actionedit_sponsor->setObjectName(QStringLiteral("actionedit_sponsor"));
        actionedit_sponsor->setGeometry(QRect(110, 140, 75, 23));
        actiondelete_sponsor = new QPushButton(tab_2);
        actiondelete_sponsor->setObjectName(QStringLiteral("actiondelete_sponsor"));
        actiondelete_sponsor->setGeometry(QRect(690, 260, 201, 23));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        rcpt = new QLineEdit(tab_5);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(10, 20, 611, 21));
        file = new QLineEdit(tab_5);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(10, 90, 701, 23));
        sendBtn = new QPushButton(tab_5);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(10, 420, 871, 23));
        subject = new QLineEdit(tab_5);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(10, 54, 871, 21));
        mail_pass = new QLineEdit(tab_5);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(640, 20, 241, 20));
        mail_pass->setEchoMode(QLineEdit::Password);
        msg = new QTextEdit(tab_5);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(10, 126, 871, 291));
        browseBtn = new QPushButton(tab_5);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(720, 90, 161, 24));
        tabWidget->addTab(tab_5, QString());
        gestion_malek->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_malek);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 941, 22));
        gestion_malek->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_malek);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_malek->setStatusBar(statusbar);

        retranslateUi(gestion_malek);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_malek);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_malek)
    {
        gestion_malek->setWindowTitle(QApplication::translate("gestion_malek", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_malek", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Liste Publicites</span></p></body></html>", Q_NULLPTR));
        publicite_sel_col->clear();
        publicite_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_malek", "All", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Type", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Cout", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Sponsor", Q_NULLPTR)
        );
        rech_publicite->setPlaceholderText(QApplication::translate("gestion_malek", "Recherche", Q_NULLPTR));
        stat->setText(QString());
        groupBox->setTitle(QApplication::translate("gestion_malek", "Details publicite", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_malek", "Cout", Q_NULLPTR));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("gestion_malek", "type 1", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "type 2", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "type 3", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "type 4", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("gestion_malek", "Sponsor", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_malek", "Type", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_malek", "ID", Q_NULLPTR));
        actionadd_publicite->setText(QApplication::translate("gestion_malek", "ajouter", Q_NULLPTR));
        actionedit_publicite->setText(QApplication::translate("gestion_malek", "modifier", Q_NULLPTR));
        actiondelete_publicite->setText(QApplication::translate("gestion_malek", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_malek", "Publicites", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_malek", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Liste Sponsors</span></p></body></html>", Q_NULLPTR));
        sponsor_sel_col->clear();
        sponsor_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_malek", "All", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Prenom", Q_NULLPTR)
        );
        rech_sponsor->setPlaceholderText(QApplication::translate("gestion_malek", "Recherche", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("gestion_malek", "GroupBox", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_malek", "Nom", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_malek", "ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_malek", "Prenom", Q_NULLPTR));
        actionadd_sponsor->setText(QApplication::translate("gestion_malek", "ajouter", Q_NULLPTR));
        actionedit_sponsor->setText(QApplication::translate("gestion_malek", "modifier", Q_NULLPTR));
        actiondelete_sponsor->setText(QApplication::translate("gestion_malek", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_malek", "Sponsors", Q_NULLPTR));
        rcpt->setPlaceholderText(QApplication::translate("gestion_malek", "recipient", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("gestion_malek", "attachement here", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("gestion_malek", "Send", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("gestion_malek", "subject", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("gestion_malek", "your mail password", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("gestion_malek", "type your message here ...", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("gestion_malek", "Browse ...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("gestion_malek", "E-mail", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_malek: public Ui_gestion_malek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_MALEK_H
