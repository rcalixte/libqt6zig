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
    return (QMetaObject*)self->metaObject();
}

void* QDesignerFormWindowManagerInterface_Metacast(QDesignerFormWindowManagerInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerFormWindowManagerInterface_Metacall(QDesignerFormWindowManagerInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerFormWindowManagerInterface_Tr(const char* s) {
    auto _ret = QDesignerFormWindowManagerInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* QDesignerFormWindowManagerInterface_Action(const QDesignerFormWindowManagerInterface* self, int action) {
    return self->action(static_cast<QDesignerFormWindowManagerInterface::Action>(action));
}

QActionGroup* QDesignerFormWindowManagerInterface_ActionGroup(const QDesignerFormWindowManagerInterface* self, int actionGroup) {
    return self->actionGroup(static_cast<QDesignerFormWindowManagerInterface::ActionGroup>(actionGroup));
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
    return self->activeFormWindow();
}

int QDesignerFormWindowManagerInterface_FormWindowCount(const QDesignerFormWindowManagerInterface* self) {
    return self->formWindowCount();
}

QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_FormWindow(const QDesignerFormWindowManagerInterface* self, int index) {
    return self->formWindow(static_cast<int>(index));
}

QDesignerFormWindowInterface* QDesignerFormWindowManagerInterface_CreateFormWindow(QDesignerFormWindowManagerInterface* self, QWidget* parentWidget, int flags) {
    return self->createFormWindow(parentWidget, static_cast<Qt::WindowFlags>(flags));
}

QDesignerFormEditorInterface* QDesignerFormWindowManagerInterface_Core(const QDesignerFormWindowManagerInterface* self) {
    return self->core();
}

void QDesignerFormWindowManagerInterface_DragItems(QDesignerFormWindowManagerInterface* self, const libqt_list /* of QDesignerDnDItemInterface* */ item_list) {
    QList<QDesignerDnDItemInterface*> item_list_QList;
    item_list_QList.reserve(item_list.len);
    QDesignerDnDItemInterface** item_list_arr = static_cast<QDesignerDnDItemInterface**>(item_list.data);
    for (size_t i = 0; i < item_list.len; ++i) {
        item_list_QList.push_back(item_list_arr[i]);
    }
    self->dragItems(item_list_QList);
}

QPixmap* QDesignerFormWindowManagerInterface_CreatePreviewPixmap(const QDesignerFormWindowManagerInterface* self) {
    return new QPixmap(self->createPreviewPixmap());
}

void QDesignerFormWindowManagerInterface_FormWindowAdded(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->formWindowAdded(formWindow);
}

void QDesignerFormWindowManagerInterface_Connect_FormWindowAdded(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowManagerInterface::connect(self,
                                                 static_cast<void (QDesignerFormWindowManagerInterface::*)(QDesignerFormWindowInterface*)>(&QDesignerFormWindowManagerInterface::formWindowAdded),
                                                 [self, slotFunc](QDesignerFormWindowInterface* formWindow) {
                                                     QDesignerFormWindowInterface* sigval1 = formWindow;
                                                     slotFunc(self, sigval1);
                                                 });
}

void QDesignerFormWindowManagerInterface_FormWindowRemoved(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->formWindowRemoved(formWindow);
}

void QDesignerFormWindowManagerInterface_Connect_FormWindowRemoved(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowManagerInterface::connect(self,
                                                 static_cast<void (QDesignerFormWindowManagerInterface::*)(QDesignerFormWindowInterface*)>(&QDesignerFormWindowManagerInterface::formWindowRemoved),
                                                 [self, slotFunc](QDesignerFormWindowInterface* formWindow) {
                                                     QDesignerFormWindowInterface* sigval1 = formWindow;
                                                     slotFunc(self, sigval1);
                                                 });
}

void QDesignerFormWindowManagerInterface_ActiveFormWindowChanged(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->activeFormWindowChanged(formWindow);
}

void QDesignerFormWindowManagerInterface_Connect_ActiveFormWindowChanged(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowManagerInterface::connect(self,
                                                 static_cast<void (QDesignerFormWindowManagerInterface::*)(QDesignerFormWindowInterface*)>(&QDesignerFormWindowManagerInterface::activeFormWindowChanged),
                                                 [self, slotFunc](QDesignerFormWindowInterface* formWindow) {
                                                     QDesignerFormWindowInterface* sigval1 = formWindow;
                                                     slotFunc(self, sigval1);
                                                 });
}

void QDesignerFormWindowManagerInterface_FormWindowSettingsChanged(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* fw) {
    self->formWindowSettingsChanged(fw);
}

void QDesignerFormWindowManagerInterface_Connect_FormWindowSettingsChanged(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*) = reinterpret_cast<void (*)(QDesignerFormWindowManagerInterface*, QDesignerFormWindowInterface*)>(slot);
    QDesignerFormWindowManagerInterface::connect(self,
                                                 static_cast<void (QDesignerFormWindowManagerInterface::*)(QDesignerFormWindowInterface*)>(&QDesignerFormWindowManagerInterface::formWindowSettingsChanged),
                                                 [self, slotFunc](QDesignerFormWindowInterface* fw) {
                                                     QDesignerFormWindowInterface* sigval1 = fw;
                                                     slotFunc(self, sigval1);
                                                 });
}

void QDesignerFormWindowManagerInterface_AddFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->addFormWindow(formWindow);
}

void QDesignerFormWindowManagerInterface_RemoveFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->removeFormWindow(formWindow);
}

void QDesignerFormWindowManagerInterface_SetActiveFormWindow(QDesignerFormWindowManagerInterface* self, QDesignerFormWindowInterface* formWindow) {
    self->setActiveFormWindow(formWindow);
}

void QDesignerFormWindowManagerInterface_ShowPreview(QDesignerFormWindowManagerInterface* self) {
    self->showPreview();
}

void QDesignerFormWindowManagerInterface_CloseAllPreviews(QDesignerFormWindowManagerInterface* self) {
    self->closeAllPreviews();
}

void QDesignerFormWindowManagerInterface_ShowPluginDialog(QDesignerFormWindowManagerInterface* self) {
    self->showPluginDialog();
}

libqt_string QDesignerFormWindowManagerInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerFormWindowManagerInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerFormWindowManagerInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerFormWindowManagerInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QDesignerFormWindowManagerInterface_SuperMetaObject(const QDesignerFormWindowManagerInterface* self) {
    return (QMetaObject*)self->QDesignerFormWindowManagerInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnMetaObject(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self)))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerFormWindowManagerInterface_SuperMetacast(QDesignerFormWindowManagerInterface* self, const char* param1) {
    return self->QDesignerFormWindowManagerInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnMetacast(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_metacast_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerFormWindowManagerInterface_SuperMetacall(QDesignerFormWindowManagerInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerFormWindowManagerInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnMetacall(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_metacall_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnAction(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self)))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_action_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Action_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnActionGroup(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self)))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_actiongroup_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ActionGroup_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnActiveFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self)))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_activeformwindow_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ActiveFormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnFormWindowCount(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self)))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_formwindowcount_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_FormWindowCount_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self)))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_formwindow_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_FormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCreateFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_createformwindow_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_CreateFormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCore(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self)))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_core_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Core_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnDragItems(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_dragitems_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_DragItems_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCreatePreviewPixmap(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self)))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_createpreviewpixmap_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_CreatePreviewPixmap_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnAddFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_addformwindow_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_AddFormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnRemoveFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_removeformwindow_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_RemoveFormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnSetActiveFormWindow(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_setactiveformwindow_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_SetActiveFormWindow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnShowPreview(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_showpreview_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ShowPreview_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCloseAllPreviews(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_closeallpreviews_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_CloseAllPreviews_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnShowPluginDialog(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_showplugindialog_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ShowPluginDialog_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerFormWindowManagerInterface_Event(QDesignerFormWindowManagerInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDesignerFormWindowManagerInterface_SuperEvent(QDesignerFormWindowManagerInterface* self, QEvent* event) {
    return self->QDesignerFormWindowManagerInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnEvent(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_event_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerFormWindowManagerInterface_EventFilter(QDesignerFormWindowManagerInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerFormWindowManagerInterface_SuperEventFilter(QDesignerFormWindowManagerInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerFormWindowManagerInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnEventFilter(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_TimerEvent(QDesignerFormWindowManagerInterface* self, QTimerEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface) {
        vqdesignerformwindowmanagerinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_SuperTimerEvent(QDesignerFormWindowManagerInterface* self, QTimerEvent* event) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self)) {
        vqdesignerformwindowmanagerinterface->QDesignerFormWindowManagerInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnTimerEvent(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_ChildEvent(QDesignerFormWindowManagerInterface* self, QChildEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface) {
        vqdesignerformwindowmanagerinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_SuperChildEvent(QDesignerFormWindowManagerInterface* self, QChildEvent* event) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self)) {
        vqdesignerformwindowmanagerinterface->QDesignerFormWindowManagerInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnChildEvent(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_childevent_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_CustomEvent(QDesignerFormWindowManagerInterface* self, QEvent* event) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface) {
        vqdesignerformwindowmanagerinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_SuperCustomEvent(QDesignerFormWindowManagerInterface* self, QEvent* event) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self)) {
        vqdesignerformwindowmanagerinterface->QDesignerFormWindowManagerInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnCustomEvent(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_customevent_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_ConnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface) {
        vqdesignerformwindowmanagerinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_SuperConnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self)) {
        vqdesignerformwindowmanagerinterface->QDesignerFormWindowManagerInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnConnectNotify(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerFormWindowManagerInterface_DisconnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self);
    if (vqdesignerformwindowmanagerinterface) {
        vqdesignerformwindowmanagerinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerFormWindowManagerInterface_SuperDisconnectNotify(QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self)) {
        vqdesignerformwindowmanagerinterface->QDesignerFormWindowManagerInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerFormWindowManagerInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerFormWindowManagerInterface_OnDisconnectNotify(QDesignerFormWindowManagerInterface* self, intptr_t slot) {
    if (auto* vqdesignerformwindowmanagerinterface = dynamic_cast<VirtualQDesignerFormWindowManagerInterface*>(self))
        vqdesignerformwindowmanagerinterface->qdesignerformwindowmanagerinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerFormWindowManagerInterface::QDesignerFormWindowManagerInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDesignerFormWindowManagerInterface_Sender(const QDesignerFormWindowManagerInterface* self) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self))) {
        return vqdesignerformwindowmanagerinterface->VirtualQDesignerFormWindowManagerInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerFormWindowManagerInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerFormWindowManagerInterface_SenderSignalIndex(const QDesignerFormWindowManagerInterface* self) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self))) {
        return vqdesignerformwindowmanagerinterface->VirtualQDesignerFormWindowManagerInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerFormWindowManagerInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerFormWindowManagerInterface_Receivers(const QDesignerFormWindowManagerInterface* self, const char* signal) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self))) {
        return vqdesignerformwindowmanagerinterface->VirtualQDesignerFormWindowManagerInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerFormWindowManagerInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerFormWindowManagerInterface_IsSignalConnected(const QDesignerFormWindowManagerInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignerformwindowmanagerinterface = const_cast<VirtualQDesignerFormWindowManagerInterface*>(dynamic_cast<const VirtualQDesignerFormWindowManagerInterface*>(self))) {
        return vqdesignerformwindowmanagerinterface->VirtualQDesignerFormWindowManagerInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerFormWindowManagerInterface::isSignalConnected called without a directly constructed type");
}

void QDesignerFormWindowManagerInterface_Delete(QDesignerFormWindowManagerInterface* self) {
    delete self;
}
