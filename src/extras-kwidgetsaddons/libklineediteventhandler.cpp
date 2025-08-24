#include <KLineEditEventHandler>
#include <QObject>
#include <klineediteventhandler.h>
#include "libklineediteventhandler.h"
#include "libklineediteventhandler.hxx"

void KLineEditEventHandler_CatchReturnKey(QObject* param1) {
    KLineEditEventHandler::catchReturnKey(param1);
}

void KLineEditEventHandler_HandleUrlDrops(QObject* param1) {
    KLineEditEventHandler::handleUrlDrops(param1);
}
