#include "mainwindow.h"
#include <QTranslator>
#include <QInputDialog>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator t ;
    QTranslator guiTranslator ;
    QStringList languages ;
    languages << "english" << "french" << "arabic";
    QString lang = QInputDialog::getItem(NULL,"select language","language",languages);

    if (lang == "english")
    {
      t.load(":/langue/english.qm");
      guiTranslator.load("C:/Qt/Qt5.9.9/5.9.9/mingw53_32/translations/qtbase_en.pm");
    } else if ( lang == "arabic")
    {
        t.load(":/langue/arabic.qm");
        guiTranslator.load("C:/Qt/Qt5.9.9/5.9.9/mingw53_32/translations/qtbase_ar.pm");
    }
    if ( lang != "french")
    {
        a.installTranslator(&t);
        a.installTranslator(&guiTranslator);
    }

    MainWindow w;
    w.show();
    return a.exec();
}
