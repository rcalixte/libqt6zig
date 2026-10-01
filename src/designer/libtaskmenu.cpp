#include <QAction>
#include <QDesignerTaskMenuExtension>
#include <QList>
#include <taskmenu.h>
#include "libtaskmenu.h"
#include "libtaskmenu.hxx"

QDesignerTaskMenuExtension* QDesignerTaskMenuExtension_new() {
    return new VirtualQDesignerTaskMenuExtension();
}

QAction* QDesignerTaskMenuExtension_PreferredEditAction(const QDesignerTaskMenuExtension* self) {
    return self->preferredEditAction();
}

libqt_list /* of QAction* */ QDesignerTaskMenuExtension_TaskActions(const QDesignerTaskMenuExtension* self) {
    QList<QAction*> _ret = self->taskActions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
QAction* QDesignerTaskMenuExtension_SuperPreferredEditAction(const QDesignerTaskMenuExtension* self) {
    return self->QDesignerTaskMenuExtension::preferredEditAction();
}

// Auxiliary method to allow providing re-implementation
void QDesignerTaskMenuExtension_OnPreferredEditAction(QDesignerTaskMenuExtension* self, intptr_t slot) {
    if (auto* vqdesignertaskmenuextension = const_cast<VirtualQDesignerTaskMenuExtension*>(dynamic_cast<const VirtualQDesignerTaskMenuExtension*>(self)))
        vqdesignertaskmenuextension->qdesignertaskmenuextension_preferrededitaction_callback = reinterpret_cast<VirtualQDesignerTaskMenuExtension::QDesignerTaskMenuExtension_PreferredEditAction_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerTaskMenuExtension_OnTaskActions(QDesignerTaskMenuExtension* self, intptr_t slot) {
    if (auto* vqdesignertaskmenuextension = const_cast<VirtualQDesignerTaskMenuExtension*>(dynamic_cast<const VirtualQDesignerTaskMenuExtension*>(self)))
        vqdesignertaskmenuextension->qdesignertaskmenuextension_taskactions_callback = reinterpret_cast<VirtualQDesignerTaskMenuExtension::QDesignerTaskMenuExtension_TaskActions_Callback>(slot);
}

void QDesignerTaskMenuExtension_Delete(QDesignerTaskMenuExtension* self) {
    delete self;
}
