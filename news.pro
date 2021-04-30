QT       += core gui sql network charts printsupport multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    article.cpp \
    client.cpp \
    connexion.cpp \
    equipe.cpp \
    equipement.cpp \
    exportexcelobject.cpp \
    gestion_hedi.cpp \
    gestion_malek.cpp \
    gestion_mustpha.cpp \
    gestion_ons.cpp \
    gestion_youssef.cpp \
    invite.cpp \
    journaliste.cpp \
    main.cpp \
    mainwindow.cpp \
    mission.cpp \
    notifications.cpp \
    programme.cpp \
    publicite.cpp \
    smtp.cpp \
    sponsor.cpp \
    stat_publicite.cpp \
    stat_type.cpp \
    studio.cpp

HEADERS += \
    article.h \
    client.h \
    connexion.h \
    equipe.h \
    equipement.h \
    exportexcelobject.h \
    gestion_hedi.h \
    gestion_malek.h \
    gestion_mustpha.h \
    gestion_ons.h \
    gestion_youssef.h \
    invite.h \
    journaliste.h \
    mainwindow.h \
    mission.h \
    notifications.h \
    programme.h \
    publicite.h \
    smtp.h \
    sponsor.h \
    stat_publicite.h \
    stat_type.h \
    studio.h

FORMS += \
    gestion_hedi.ui \
    gestion_malek.ui \
    gestion_mustpha.ui \
    gestion_ons.ui \
    gestion_youssef.ui \
    mainwindow.ui \
    stat_publicite.ui \
    stat_type.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
