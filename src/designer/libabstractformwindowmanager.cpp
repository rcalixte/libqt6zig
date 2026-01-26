#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QDesignerDnDItemInterface>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
#include <QDesignerFormWindowManagerInterface>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractformwindowmanager.h>
#include "libabstractformwindowmanager.h"
#include "libabstractformwindowmanager.hxx"

QDesignerFormWindowManagerInterface* QDesignerFormWindowManagerInterface_new() {
    return new VirtualQDesignerFormWindowManagerInterface();
}

QDesignerFormWindowManagerInterface* QDesignerFormWindowManagerInterface_new2(QObject* parent) {
    return new VirtualQDesignerFormWindowManagerInterface(parent);
}

QMetaObject* QDesignerFormWindowManagerInterface_MetaObject(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerFormWindowManagerInterface*)self)->metaObject();
    }
}

void* QDesignerFormWindowManagerInterface_Metacast(QDesignerFormWindowManagerInterface* self, const char* param1) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerFormWindowManagerInterface_Metacall(QDesignerFormWindowManagerInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QAction* QDesignerFormWindowManagerInterface_Action(const QDesignerFormWindowManagerInterface* self, int action) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->action(static_cast<QDesignerFormWindowManagerInterface::Action>(action));
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->action(static_cast<QDesignerFormWindowManagerInterface::Action>(action));
    }
}

QActionGroup* QDesignerFormWindowManagerInterface_ActionGroup(const QDesignerFormWindowManagerInterface* self, int actionGroup) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->actionGroup(static_cast<QDesignerFormWindowManagerInterface::ActionGroup>(actionGroup));
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->actionGroup(static_cast<QDesignerFormWindowManagerInterface::ActionGroup>(actionGroup));
    }
}

QAction* QDesignerFormWindowManagerInterface_ActionCut(const QDesignerFormWindowManagerInterface* self) {
    return self->actionCut();
}

QAction* QDesignerFormWindowManagerInterface_ActionCopy(const QDesignerFormWindowManagerInterface* self) {
    return self->actionCopy();
}

QAction* QDesignerFormWindowManagerInterface_ActionPaste(const QDesignerFormWindowManagerInterface* self) {
    return self->actionPaste();
}

QAction* QDesignerFormWindowManagerInterface_ActionDelete(const QDesignerFormWindowManagerInterface* self) {
    return self->actionDelete();
}

QAction* QDesignerFormWindowManagerInterface_ActionSelectAll(const QDesignerFormWindowManagerInterface* self) {
    return self->actionSelectAll();
}

QAction* QDesignerFormWindowManagerInterface_ActionLower(const QDesignerFormWindowManagerInterface* self) {
    return self->actionLower();
}

QAction* QDesignerFormWindowManagerInterface_ActionRaise(const QDesignerFormWindowManagerInterface* self) {
    return self->actionRaise();
}

QAction* QDesignerFormWindowManagerInterface_ActionUndo(const QDesignerFormWindowManagerInterface* self) {
    return self->actionUndo();
}

QAction* QDesignerFormWindowManagerInterface_ActionRedo(const QDesignerFormWindowManagerInterface* self) {
    return self->actionRedo();
}

QAction* QDesignerFormWindowManagerInterface_ActionHorizontalLayout(const QDesignerFormWindowManagerInterface* self) {
    return self->actionHorizontalLayout();
}

QAction* QDesignerFormWindowManagerInterface_ActionVerticalLayout(const QDesignerFormWindowManagerInterface* self) {
    return self->actionVerticalLayout();
}

QAction* QDesignerFormWindowManagerInterface_ActionSplitHorizontal(const QDesignerFormWindowManagerInterface* self) {
    return self->actionSplitHorizontal();
}

QAction* QDesignerFormWindowManagerInterface_ActionSplitVertical(const QDesignerFormWindowManagerInterface* self) {
    return self->actionSplitVertical();
}

QAction* QDesignerFormWindowManagerInterface_ActionGridLayout(const QDesignerFormWindowManagerInterface* self) {
    return self->actionGridLayout();
}

QAction* QDesignerFormWindowManagerInterface_ActionFormLayout(const QDesignerFormWindowManagerInterface* self) {
    return self->actionFormLayout();
}

QAction* QDesignerFormWindowManagerInterface_ActionBreakLayout(const QDesignerFormWindowManagerInterface* self) {
    return self->actionBreakLayout();
}

QAction* QDesignerFormWindowManagerInterface_ActionAdjustSize(const QDesignerFormWindowManagerInterface* self) {
    return self->actionAdjustSize();
}

QAction* QDesignerFormWindowManagerInterface_ActionSimplifyLayout(const QDesignerFormWindowManagerInterface* self) {
    return self->actionSimplifyLayout();
}

QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_ActiveFormWindow(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->activeFormWindow();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->activeFormWindow();
    }
}

int QDesignerFormWindowManagerInterface_FormWindowCount(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->formWindowCount();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->formWindowCount();
    }
}

QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_FormWindow(const QDesignerFormWindowManagerInterface* self, int index) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->formWindow(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->formWindow(static_cast<int>(index));
    }
}

QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_CreateFormWindow(QDesignerFormWindowManagerInterface* self, QWidget* parentWidget, int flags) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->createFormWindow(parentWidget, static_cast<Qt::WindowFlags>(flags));
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->createFormWindow(parentWidget, static_cast<Qt::WindowFlags>(flags));
    }
}

QDesignerFormEditorInterface* QDesignerFormWindowManagerInterface_Core(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->core();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->core();
    }
}

void QDesignerFormWindowManagerInterface_DragItems(QDesignerFormWindowManagerInterface* self, const libqt_list /* of QDesignerDnDItemInterface* */ item_list) {
    QList<QDesignerDnDItemInterface*> item_list_QList;
    item_list_QList.reserve(item_list.len);
    QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(item_list.data);
    for (size_t i = 0; i < item_list.len; ++i) {
        item_list_QList.push_back(item_list_arr[i]);
    }
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->dragItems(item_list_QList);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->dragItems(item_list_QList);
    }
}

QPixmap* QDesignerFormWindowManagerInterface_CreatePreviewPixmap(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return new QPixmap(vqdesignerformwindowmanagerinterface->createPreviewPixmap());
    } else {
        return new QPixmap(((VirtualQDesignerFormWindowManagerInterface*)self)->createPreviewPixmap());
    }
}

void QDesignerFormWindowManagerInterface_FormWindowAdded(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->formWindowAdded(formWindow);
}

void QDesignerFormWindowManagerInterface_Connect_FormWindowAdded(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowManagerInterface::connect(self, &QDesignerFormWindowManagerInterface::formWindowAdded, [self, slotFunc](QDesignerFormWindowInterface* formWindow) {
        QDesignerFormWindowInterface* sigval1 = formWindow;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowManagerInterface_FormWindowRemoved(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->formWindowRemoved(formWindow);
}

void QDesignerFormWindowManagerInterface_Connect_FormWindowRemoved(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowManagerInterface::connect(self, &QDesignerFormWindowManagerInterface::formWindowRemoved, [self, slotFunc](QDesignerFormWindowInterface* formWindow) {
        QDesignerFormWindowInterface* sigval1 = formWindow;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowManagerInterface_ActiveFormWindowChanged(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->activeFormWindowChanged(formWindow);
}

void QDesignerFormWindowManagerInterface_Connect_ActiveFormWindowChanged(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowManagerInterface::connect(self, &QDesignerFormWindowManagerInterface::activeFormWindowChanged, [self, slotFunc](QDesignerFormWindowInterface* formWindow) {
        QDesignerFormWindowInterface* sigval1 = formWindow;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowManagerInterface_FormWindowSettingsChanged(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* fw) {
    self->formWindowSettingsChanged(fw);
}

void QDesignerFormWindowManagerInterface_Connect_FormWindowSettingsChanged(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowManagerInterface::connect(self, &QDesignerFormWindowManagerInterface::formWindowSettingsChanged, [self, slotFunc](QDesignerFormWindowInterface* fw) {
        QDesignerFormWindowInterface* sigval1 = fw;
        slotFunc(self, sigval1);
    });
}

void QDesignerFormWindowManagerInterface_AddFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->addFormWindow(formWindow);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->addFormWindow(formWindow);
    }
}

void QDesignerFormWindowManagerInterface_RemoveFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->removeFormWindow(formWindow);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->removeFormWindow(formWindow);
    }
}

void QDesignerFormWindowManagerInterface_SetActiveFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setActiveFormWindow(formWindow);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->setActiveFormWindow(formWindow);
    }
}

void QDesignerFormWindowManagerInterface_ShowPreview(QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->showPreview();
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->showPreview();
    }
}

void QDesignerFormWindowManagerInterface_CloseAllPreviews(QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->closeAllPreviews();
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->closeAllPreviews();
    }
}

void QDesignerFormWindowManagerInterface_ShowPluginDialog(QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->showPluginDialog();
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->showPluginDialog();
    }
}

// Base class handler implementation
QMetaObject* QDesignerFormWindowManagerInterface_QBaseMetaObject(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignerformwindowmanagerinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerFormWindowManagerInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnMetaObject(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerFormWindowManagerInterface_QBaseMetacast(QDesignerFormWindowManagerInterface* self, const char* param1) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Metacast_IsBase(true);
        return vqdesignerformwindowmanagerinterface->qt_metacast(param1);
    } else {
        return self->QDesignerFormWindowManagerInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnMetacast(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerFormWindowManagerInterface_QBaseMetacall(QDesignerFormWindowManagerInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Metacall_IsBase(true);
        return vqdesignerformwindowmanagerinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerFormWindowManagerInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnMetacall(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QAction* QDesignerFormWindowManagerInterface_QBaseAction(const QDesignerFormWindowManagerInterface* self, int action) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Action_IsBase(true);
        return vqdesignerformwindowmanagerinterface->action(static_cast<QDesignerFormWindowManagerInterface::Action>(action));
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->action(static_cast<QDesignerFormWindowManagerInterface::Action>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnAction(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Action_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Action_Callback>(slot));
    }
}

// Base class handler implementation
QActionGroup* QDesignerFormWindowManagerInterface_QBaseActionGroup(const QDesignerFormWindowManagerInterface* self, int actionGroup) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ActionGroup_IsBase(true);
        return vqdesignerformwindowmanagerinterface->actionGroup(static_cast<QDesignerFormWindowManagerInterface::ActionGroup>(actionGroup));
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->actionGroup(static_cast<QDesignerFormWindowManagerInterface::ActionGroup>(actionGroup));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnActionGroup(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ActionGroup_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ActionGroup_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_QBaseActiveFormWindow(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ActiveFormWindow_IsBase(true);
        return vqdesignerformwindowmanagerinterface->activeFormWindow();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->activeFormWindow();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnActiveFormWindow(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ActiveFormWindow_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ActiveFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerFormWindowManagerInterface_QBaseFormWindowCount(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_FormWindowCount_IsBase(true);
        return vqdesignerformwindowmanagerinterface->formWindowCount();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->formWindowCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnFormWindowCount(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_FormWindowCount_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_FormWindowCount_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_QBaseFormWindow(const QDesignerFormWindowManagerInterface* self, int index) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_FormWindow_IsBase(true);
        return vqdesignerformwindowmanagerinterface->formWindow(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->formWindow(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnFormWindow(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_FormWindow_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_FormWindow_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_QBaseCreateFormWindow(QDesignerFormWindowManagerInterface* self, QWidget* parentWidget, int flags) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_CreateFormWindow_IsBase(true);
        return vqdesignerformwindowmanagerinterface->createFormWindow(parentWidget, static_cast<Qt::WindowFlags>(flags));
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->createFormWindow(parentWidget, static_cast<Qt::WindowFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCreateFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_CreateFormWindow_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_CreateFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerFormWindowManagerInterface_QBaseCore(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Core_IsBase(true);
        return vqdesignerformwindowmanagerinterface->core();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCore(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Core_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Core_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseDragItems(QDesignerFormWindowManagerInterface* self, const libqt_list /* of QDesignerDnDItemInterface* */ item_list) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    QList<QDesignerDnDItemInterface*> item_list_QList;
    item_list_QList.reserve(item_list.len);
    QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(item_list.data);
    for (size_t i = 0; i < item_list.len; ++i) {
        item_list_QList.push_back(item_list_arr[i]);
    }
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_DragItems_IsBase(true);
        vqdesignerformwindowmanagerinterface->dragItems(item_list_QList);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->dragItems(item_list_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnDragItems(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_DragItems_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_DragItems_Callback>(slot));
    }
}

// Base class handler implementation
QPixmap* QDesignerFormWindowManagerInterface_QBaseCreatePreviewPixmap(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_CreatePreviewPixmap_IsBase(true);
        return new QPixmap(vqdesignerformwindowmanagerinterface->createPreviewPixmap());
    } else {
        return new QPixmap(((VirtualQDesignerFormWindowManagerInterface*)self)->createPreviewPixmap());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCreatePreviewPixmap(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_CreatePreviewPixmap_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_CreatePreviewPixmap_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseAddFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_AddFormWindow_IsBase(true);
        vqdesignerformwindowmanagerinterface->addFormWindow(formWindow);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->addFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnAddFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_AddFormWindow_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_AddFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseRemoveFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_RemoveFormWindow_IsBase(true);
        vqdesignerformwindowmanagerinterface->removeFormWindow(formWindow);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->removeFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnRemoveFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_RemoveFormWindow_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_RemoveFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseSetActiveFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_SetActiveFormWindow_IsBase(true);
        vqdesignerformwindowmanagerinterface->setActiveFormWindow(formWindow);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->setActiveFormWindow(formWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnSetActiveFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_SetActiveFormWindow_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_SetActiveFormWindow_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseShowPreview(QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ShowPreview_IsBase(true);
        vqdesignerformwindowmanagerinterface->showPreview();
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->showPreview();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnShowPreview(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ShowPreview_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ShowPreview_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseCloseAllPreviews(QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_CloseAllPreviews_IsBase(true);
        vqdesignerformwindowmanagerinterface->closeAllPreviews();
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->closeAllPreviews();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCloseAllPreviews(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_CloseAllPreviews_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_CloseAllPreviews_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseShowPluginDialog(QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ShowPluginDialog_IsBase(true);
        vqdesignerformwindowmanagerinterface->showPluginDialog();
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->showPluginDialog();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnShowPluginDialog(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ShowPluginDialog_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ShowPluginDialog_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormWindowManagerInterface_Event(QDesignerFormWindowManagerInterface* self, QEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->event(event);
    } else {
        return self->QDesignerFormWindowManagerInterface::event(event);
    }
}

// Base class handler implementation
bool QDesignerFormWindowManagerInterface_QBaseEvent(QDesignerFormWindowManagerInterface* self, QEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Event_IsBase(true);
        return vqdesignerformwindowmanagerinterface->event(event);
    } else {
        return self->QDesignerFormWindowManagerInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnEvent(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Event_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormWindowManagerInterface_EventFilter(QDesignerFormWindowManagerInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerFormWindowManagerInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerFormWindowManagerInterface_QBaseEventFilter(QDesignerFormWindowManagerInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_EventFilter_IsBase(true);
        return vqdesignerformwindowmanagerinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerFormWindowManagerInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnEventFilter(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_TimerEvent(QDesignerFormWindowManagerInterface* self, QTimerEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseTimerEvent(QDesignerFormWindowManagerInterface* self, QTimerEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_TimerEvent_IsBase(true);
        vqdesignerformwindowmanagerinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnTimerEvent(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_ChildEvent(QDesignerFormWindowManagerInterface* self, QChildEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->childEvent(event);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseChildEvent(QDesignerFormWindowManagerInterface* self, QChildEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ChildEvent_IsBase(true);
        vqdesignerformwindowmanagerinterface->childEvent(event);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnChildEvent(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_CustomEvent(QDesignerFormWindowManagerInterface* self, QEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->customEvent(event);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseCustomEvent(QDesignerFormWindowManagerInterface* self, QEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_CustomEvent_IsBase(true);
        vqdesignerformwindowmanagerinterface->customEvent(event);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCustomEvent(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_ConnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseConnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ConnectNotify_IsBase(true);
        vqdesignerformwindowmanagerinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnConnectNotify(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_DisconnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_QBaseDisconnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_DisconnectNotify_IsBase(true);
        vqdesignerformwindowmanagerinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerFormWindowManagerInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnDisconnectNotify(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerFormWindowManagerInterface_Sender(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->sender();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerFormWindowManagerInterface_QBaseSender(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Sender_IsBase(true);
        return vqdesignerformwindowmanagerinterface->sender();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnSender(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerFormWindowManagerInterface_SenderSignalIndex(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerFormWindowManagerInterface_QBaseSenderSignalIndex(const QDesignerFormWindowManagerInterface* self) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerformwindowmanagerinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnSenderSignalIndex(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerFormWindowManagerInterface_Receivers(const QDesignerFormWindowManagerInterface* self, const char* signal) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerFormWindowManagerInterface_QBaseReceivers(const QDesignerFormWindowManagerInterface* self, const char* signal) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Receivers_IsBase(true);
        return vqdesignerformwindowmanagerinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnReceivers(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerFormWindowManagerInterface_IsSignalConnected(const QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        return vqdesignerformwindowmanagerinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerFormWindowManagerInterface_QBaseIsSignalConnected(const QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_IsSignalConnected_IsBase(true);
        return vqdesignerformwindowmanagerinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerFormWindowManagerInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnIsSignalConnected(const QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self));
    if (vqdesignerformwindowmanagerinterface && vqdesignerformwindowmanagerinterface->isVirtualQDesignerFormWindowManagerInterface) {
        vqdesignerformwindowmanagerinterface->setQDesignerFormWindowManagerInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_IsSignalConnected_Callback>(slot));
    }
}

void QDesignerFormWindowManagerInterface_Delete(QDesignerFormWindowManagerInterface* self) {
    delete self;
}
