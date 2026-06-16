#include <KActionCollection>
#include <KUndoActions>
#include <QAction>
#include <QString>
#include <QUndoStack>
#include <kundoactions.h>
#include "libkundoactions.h"
#include "libkundoactions.hxx"

QAction* KUndoActions_CreateRedoAction(QUndoStack* undoStack, KActionCollection* actionCollection, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    return KUndoActions::createRedoAction(undoStack, actionCollection, actionName_QString);
}

QAction* KUndoActions_CreateUndoAction(QUndoStack* undoStack, KActionCollection* actionCollection, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    return KUndoActions::createUndoAction(undoStack, actionCollection, actionName_QString);
}
