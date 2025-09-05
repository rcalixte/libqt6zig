#include <KActionCollection>
#include <KUndoActions>
#include <QAction>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUndoStack>
#include <kundoactions.h>
#include "libkundoactions.h"
#include "libkundoactions.hxx"

QAction* KUndoActions_CreateRedoAction(QUndoStack* param1, KActionCollection* param2, const libqt_string param3) {
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return KUndoActions::createRedoAction(param1, param2, param3_QString);
}

QAction* KUndoActions_CreateUndoAction(QUndoStack* param1, KActionCollection* param2, const libqt_string param3) {
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return KUndoActions::createUndoAction(param1, param2, param3_QString);
}
