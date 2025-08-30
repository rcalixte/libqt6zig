#include <KStyleManager>
#include <QAction>
#include <QObject>
#include <kstylemanager.h>
#include "libkstylemanager.h"
#include "libkstylemanager.hxx"

void KStyleManager_InitStyle() {
    KStyleManager::initStyle();
}

QAction* KStyleManager_CreateConfigureAction(QObject* param1) {
    return KStyleManager::createConfigureAction(param1);
}
