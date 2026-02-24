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
    auto* vqdesignertaskmenuextension = dynamic_cast<const VirtualQDesignerTaskMenuExtension*>(self);
    if (vqdesignertaskmenuextension && vqdesignertaskmenuextension->isVirtualQDesignerTaskMenuExtension) {
        return self->preferredEditAction();
    } else {
        return ((VirtualQDesignerTaskMenuExtension*)self)->preferredEditAction();
    }
}

libqt_list /* of QAction* */ QDesignerTaskMenuExtension_TaskActions(const QDesignerTaskMenuExtension* self) {
    auto* vqdesignertaskmenuextension = dynamic_cast<const VirtualQDesignerTaskMenuExtension*>(self);
    if (vqdesignertaskmenuextension && vqdesignertaskmenuextension->isVirtualQDesignerTaskMenuExtension) {
        QList<QAction*> _ret = vqdesignertaskmenuextension->taskActions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = ((VirtualQDesignerTaskMenuExtension*)self)->taskActions();
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
}

// Base class handler implementation
QAction* QDesignerTaskMenuExtension_SuperPreferredEditAction(const QDesignerTaskMenuExtension* self) {
    auto* vqdesignertaskmenuextension = const_cast<VirtualQDesignerTaskMenuExtension*>(dynamic_cast<const VirtualQDesignerTaskMenuExtension*>(self));
    if (vqdesignertaskmenuextension && vqdesignertaskmenuextension->isVirtualQDesignerTaskMenuExtension) {
        vqdesignertaskmenuextension->setQDesignerTaskMenuExtension_PreferredEditAction_IsBase(true);
        return vqdesignertaskmenuextension->preferredEditAction();
    } else {
        return self->QDesignerTaskMenuExtension::preferredEditAction();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerTaskMenuExtension_OnPreferredEditAction(const QDesignerTaskMenuExtension* self, intptr_t slot) {
    auto* vqdesignertaskmenuextension = const_cast<VirtualQDesignerTaskMenuExtension*>(dynamic_cast<const VirtualQDesignerTaskMenuExtension*>(self));
    if (vqdesignertaskmenuextension && vqdesignertaskmenuextension->isVirtualQDesignerTaskMenuExtension) {
        vqdesignertaskmenuextension->setQDesignerTaskMenuExtension_PreferredEditAction_Callback(reinterpret_cast<VirtualQDesignerTaskMenuExtension::QDesignerTaskMenuExtension_PreferredEditAction_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QAction* */ QDesignerTaskMenuExtension_SuperTaskActions(const QDesignerTaskMenuExtension* self) {
    auto* vqdesignertaskmenuextension = const_cast<VirtualQDesignerTaskMenuExtension*>(dynamic_cast<const VirtualQDesignerTaskMenuExtension*>(self));
    if (vqdesignertaskmenuextension && vqdesignertaskmenuextension->isVirtualQDesignerTaskMenuExtension) {
        vqdesignertaskmenuextension->setQDesignerTaskMenuExtension_TaskActions_IsBase(true);
        QList<QAction*> _ret = vqdesignertaskmenuextension->taskActions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = ((VirtualQDesignerTaskMenuExtension*)self)->taskActions();
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
}

// Auxiliary method to allow providing re-implementation
void QDesignerTaskMenuExtension_OnTaskActions(const QDesignerTaskMenuExtension* self, intptr_t slot) {
    auto* vqdesignertaskmenuextension = const_cast<VirtualQDesignerTaskMenuExtension*>(dynamic_cast<const VirtualQDesignerTaskMenuExtension*>(self));
    if (vqdesignertaskmenuextension && vqdesignertaskmenuextension->isVirtualQDesignerTaskMenuExtension) {
        vqdesignertaskmenuextension->setQDesignerTaskMenuExtension_TaskActions_Callback(reinterpret_cast<VirtualQDesignerTaskMenuExtension::QDesignerTaskMenuExtension_TaskActions_Callback>(slot));
    }
}

void QDesignerTaskMenuExtension_Delete(QDesignerTaskMenuExtension* self) {
    delete self;
}
