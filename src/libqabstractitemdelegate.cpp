#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QWidget>
#include <qabstractitemdelegate.h>
#include "libqabstractitemdelegate.h"
#include "libqabstractitemdelegate.hxx"

QAbstractItemDelegate* QAbstractItemDelegate_new() {
    return new VirtualQAbstractItemDelegate();
}

QAbstractItemDelegate* QAbstractItemDelegate_new2(QObject* parent) {
    return new VirtualQAbstractItemDelegate(parent);
}

QMetaObject* QAbstractItemDelegate_MetaObject(const QAbstractItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractItemDelegate_Metacast(QAbstractItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractItemDelegate_Metacall(QAbstractItemDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractItemDelegate_Tr(const char* s) {
    auto _ret = QAbstractItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractItemDelegate_Paint(const QAbstractItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->paint(painter, *option, *index);
}

QSize* QAbstractItemDelegate_SizeHint(const QAbstractItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->sizeHint(*option, *index));
}

QWidget* QAbstractItemDelegate_CreateEditor(const QAbstractItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->createEditor(parent, *option, *index);
}

void QAbstractItemDelegate_DestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->destroyEditor(editor, *index);
}

void QAbstractItemDelegate_SetEditorData(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->setEditorData(editor, *index);
}

void QAbstractItemDelegate_SetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->setModelData(editor, model, *index);
}

void QAbstractItemDelegate_UpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->updateEditorGeometry(editor, *option, *index);
}

bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->editorEvent(event, model, *option, *index);
}

bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->helpEvent(event, view, *option, *index);
}

libqt_list /* of int */ QAbstractItemDelegate_PaintingRoles(const QAbstractItemDelegate* self) {
    QList<int> _ret = self->paintingRoles();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor) {
    self->commitData(editor);
}

void QAbstractItemDelegate_Connect_CommitData(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*)>(slot);
    QAbstractItemDelegate::connect(self,
                                   static_cast<void (QAbstractItemDelegate::*)(QWidget*)>(&QAbstractItemDelegate::commitData),
                                   [self, slotFunc](QWidget* editor) {
                                       QWidget* sigval1 = editor;
                                       slotFunc(self, sigval1);
                                   });
}

void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor) {
    self->closeEditor(editor);
}

void QAbstractItemDelegate_Connect_CloseEditor(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*)>(slot);
    QAbstractItemDelegate::connect(self,
                                   static_cast<void (QAbstractItemDelegate::*)(QWidget*, QAbstractItemDelegate::EndEditHint)>(&QAbstractItemDelegate::closeEditor),
                                   [self, slotFunc](QWidget* editor) {
                                       QWidget* sigval1 = editor;
                                       slotFunc(self, sigval1);
                                   });
}

void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, const QModelIndex* param1) {
    self->sizeHintChanged(*param1);
}

void QAbstractItemDelegate_Connect_SizeHintChanged(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QModelIndex*)>(slot);
    QAbstractItemDelegate::connect(self,
                                   static_cast<void (QAbstractItemDelegate::*)(const QModelIndex&)>(&QAbstractItemDelegate::sizeHintChanged),
                                   [self, slotFunc](const QModelIndex& param1) {
                                       const QModelIndex& param1_ret = param1;
                                       // Cast returned reference into pointer
                                       QModelIndex* sigval1 = const_cast<QModelIndex*>(&param1_ret);
                                       slotFunc(self, sigval1);
                                   });
}

libqt_string QAbstractItemDelegate_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractItemDelegate_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractItemDelegate::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractItemDelegate_CloseEditor2(QAbstractItemDelegate* self, QWidget* editor, int hint) {
    self->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

void QAbstractItemDelegate_Connect_CloseEditor2(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*, int) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*, int)>(slot);
    QAbstractItemDelegate::connect(self,
                                   static_cast<void (QAbstractItemDelegate::*)(QWidget*, QAbstractItemDelegate::EndEditHint)>(&QAbstractItemDelegate::closeEditor),
                                   [self, slotFunc](QWidget* editor, QAbstractItemDelegate::EndEditHint hint) {
                                       QWidget* sigval1 = editor;
                                       int sigval2 = static_cast<int>(hint);
                                       slotFunc(self, sigval1, sigval2);
                                   });
}

// Base class handler implementation
QMetaObject* QAbstractItemDelegate_SuperMetaObject(const QAbstractItemDelegate* self) {
    return (QMetaObject*)self->QAbstractItemDelegate::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnMetaObject(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_metaobject_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractItemDelegate_SuperMetacast(QAbstractItemDelegate* self, const char* param1) {
    return self->QAbstractItemDelegate::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnMetacast(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_metacast_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemDelegate_SuperMetacall(QAbstractItemDelegate* self, int param1, int param2, void** param3) {
    return self->QAbstractItemDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnMetacall(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_metacall_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnPaint(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_paint_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Paint_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSizeHint(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_sizehint_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SizeHint_Callback>(slot);
}

// Base class handler implementation
QWidget* QAbstractItemDelegate_SuperCreateEditor(const QAbstractItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->QAbstractItemDelegate::createEditor(parent, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnCreateEditor(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_createeditor_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_CreateEditor_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemDelegate_SuperDestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->QAbstractItemDelegate::destroyEditor(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnDestroyEditor(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_destroyeditor_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_DestroyEditor_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemDelegate_SuperSetEditorData(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->QAbstractItemDelegate::setEditorData(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSetEditorData(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_seteditordata_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SetEditorData_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemDelegate_SuperSetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->QAbstractItemDelegate::setModelData(editor, model, *index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSetModelData(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_setmodeldata_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SetModelData_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemDelegate_SuperUpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->QAbstractItemDelegate::updateEditorGeometry(editor, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnUpdateEditorGeometry(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_updateeditorgeometry_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_UpdateEditorGeometry_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemDelegate_SuperEditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->QAbstractItemDelegate::editorEvent(event, model, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEditorEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_editorevent_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_EditorEvent_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemDelegate_SuperHelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->QAbstractItemDelegate::helpEvent(event, view, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnHelpEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_helpevent_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_HelpEvent_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of int */ QAbstractItemDelegate_SuperPaintingRoles(const QAbstractItemDelegate* self) {
    QList<int> _ret = self->QAbstractItemDelegate::paintingRoles();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnPaintingRoles(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self)))
        vqabstractitemdelegate->qabstractitemdelegate_paintingroles_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_PaintingRoles_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractItemDelegate_Event(QAbstractItemDelegate* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAbstractItemDelegate_SuperEvent(QAbstractItemDelegate* self, QEvent* event) {
    return self->QAbstractItemDelegate::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_event_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractItemDelegate_EventFilter(QAbstractItemDelegate* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractItemDelegate_SuperEventFilter(QAbstractItemDelegate* self, QObject* watched, QEvent* event) {
    return self->QAbstractItemDelegate::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEventFilter(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_eventfilter_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemDelegate_TimerEvent(QAbstractItemDelegate* self, QTimerEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate) {
        vqabstractitemdelegate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemDelegate::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemDelegate_SuperTimerEvent(QAbstractItemDelegate* self, QTimerEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->QAbstractItemDelegate::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemDelegate::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnTimerEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_timerevent_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemDelegate_ChildEvent(QAbstractItemDelegate* self, QChildEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate) {
        vqabstractitemdelegate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemDelegate::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemDelegate_SuperChildEvent(QAbstractItemDelegate* self, QChildEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->QAbstractItemDelegate::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemDelegate::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnChildEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_childevent_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemDelegate_CustomEvent(QAbstractItemDelegate* self, QEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate) {
        vqabstractitemdelegate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemDelegate::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemDelegate_SuperCustomEvent(QAbstractItemDelegate* self, QEvent* event) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->QAbstractItemDelegate::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemDelegate::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnCustomEvent(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_customevent_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemDelegate_ConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate) {
        vqabstractitemdelegate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemDelegate::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemDelegate_SuperConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->QAbstractItemDelegate::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractItemDelegate::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnConnectNotify(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_connectnotify_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemDelegate_DisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate) {
        vqabstractitemdelegate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemDelegate::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemDelegate_SuperDisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self)) {
        vqabstractitemdelegate->QAbstractItemDelegate::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractItemDelegate::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnDisconnectNotify(QAbstractItemDelegate* self, intptr_t slot) {
    if (auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self))
        vqabstractitemdelegate->qabstractitemdelegate_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAbstractItemDelegate_Sender(const QAbstractItemDelegate* self) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->VirtualQAbstractItemDelegate::sender();
    } else
        qFatal("Error: Protected method QAbstractItemDelegate::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractItemDelegate_SenderSignalIndex(const QAbstractItemDelegate* self) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->VirtualQAbstractItemDelegate::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractItemDelegate::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractItemDelegate_Receivers(const QAbstractItemDelegate* self, const char* signal) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->VirtualQAbstractItemDelegate::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractItemDelegate::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractItemDelegate_IsSignalConnected(const QAbstractItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self))) {
        return vqabstractitemdelegate->VirtualQAbstractItemDelegate::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractItemDelegate::isSignalConnected called without a directly constructed type");
}

void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self) {
    delete self;
}
