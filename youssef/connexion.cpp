#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
/*db.setDatabaseName("source_Projet2a");
db.setUserName("hedi");//inserer nom de l'utilisateur
db.setPassword("system");//inserer mot de passe de cet utilisateur
*/
db.setDatabaseName("projet");//inserer le nom de la source de données ODBC
db.setUserName("ons");//inserer nom de l'utilisateur
db.setPassword("ons");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}
