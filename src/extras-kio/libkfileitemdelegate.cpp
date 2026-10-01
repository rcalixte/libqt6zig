#include <KFileItem>
#include <KFileItemDelegate>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QWidget>
#include <kfileitemdelegate.h>
#include "libkfileitemdelegate.h"
#include "libkfileitemdelegate.hxx"

KFileItemDelegate* KFileItemDelegate_new() {
    return new VirtualKFileItemDelegate();
}

KFileItemDelegate* KFileItemDelegate_new2(QObject* parent) {
    return new VirtualKFileItemDelegate(parent);
}

QMetaObject* KFileItemDelegate_MetaObject(const KFileItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileItemDelegate_Metacast(KFileItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileItemDelegate_Metacall(KFileItemDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFileItemDelegate_Tr(const char* s) {
    auto _ret = KFileItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KFileItemDelegate_SizeHint(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->sizeHint(*option, *index));
}

void KFileItemDelegate_Paint(const KFileItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->paint(painter, *option, *index);
}

QWidget* KFileItemDelegate_CreateEditor(const KFileItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->createEditor(parent, *option, *index);
}

bool KFileItemDelegate_EditorEvent(KFileItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->editorEvent(event, model, *option, *index);
}

void KFileItemDelegate_SetEditorData(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->setEditorData(editor, *index);
}

void KFileItemDelegate_SetModelData(const KFileItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->setModelData(editor, model, *index);
}

void KFileItemDelegate_UpdateEditorGeometry(const KFileItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->updateEditorGeometry(editor, *option, *index);
}

void KFileItemDelegate_SetShowInformation(KFileItemDelegate* self, const libqt_list /* of int */ list) {
    QList<KFileItemDelegate::Information> list_QList;
    list_QList.reserve(list.len);
    int* list_arr = static_cast<int*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(static_cast<KFileItemDelegate::Information>(list_arr[i]));
    }
    self->setShowInformation(list_QList);
}

void KFileItemDelegate_SetShowInformation2(KFileItemDelegate* self, int information) {
    self->setShowInformation(static_cast<KFileItemDelegate::Information>(information));
}

libqt_list /* of int */ KFileItemDelegate_ShowInformation(const KFileItemDelegate* self) {
    QList<KFileItemDelegate::Information> _ret = self->showInformation();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileItemDelegate_SetShadowColor(KFileItemDelegate* self, const QColor* color) {
    self->setShadowColor(*color);
}

QColor* KFileItemDelegate_ShadowColor(const KFileItemDelegate* self) {
    return new QColor(self->shadowColor());
}

void KFileItemDelegate_SetShadowOffset(KFileItemDelegate* self, const QPointF* offset) {
    self->setShadowOffset(*offset);
}

QPointF* KFileItemDelegate_ShadowOffset(const KFileItemDelegate* self) {
    return new QPointF(self->shadowOffset());
}

void KFileItemDelegate_SetShadowBlur(KFileItemDelegate* self, double radius) {
    self->setShadowBlur(static_cast<qreal>(radius));
}

double KFileItemDelegate_ShadowBlur(const KFileItemDelegate* self) {
    return static_cast<double>(self->shadowBlur());
}

void KFileItemDelegate_SetMaximumSize(KFileItemDelegate* self, const QSize* size) {
    self->setMaximumSize(*size);
}

QSize* KFileItemDelegate_MaximumSize(const KFileItemDelegate* self) {
    return new QSize(self->maximumSize());
}

void KFileItemDelegate_SetShowToolTipWhenElided(KFileItemDelegate* self, bool showToolTip) {
    self->setShowToolTipWhenElided(showToolTip);
}

bool KFileItemDelegate_ShowToolTipWhenElided(const KFileItemDelegate* self) {
    return self->showToolTipWhenElided();
}

QRect* KFileItemDelegate_IconRect(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QRect(self->iconRect(*option, *index));
}

void KFileItemDelegate_SetWrapMode(KFileItemDelegate* self, int wrapMode) {
    self->setWrapMode(static_cast<QTextOption::WrapMode>(wrapMode));
}

int KFileItemDelegate_WrapMode(const KFileItemDelegate* self) {
    return static_cast<int>(self->wrapMode());
}

void KFileItemDelegate_SetJobTransfersVisible(KFileItemDelegate* self, bool jobTransfersVisible) {
    self->setJobTransfersVisible(jobTransfersVisible);
}

bool KFileItemDelegate_JobTransfersVisible(const KFileItemDelegate* self) {
    return self->jobTransfersVisible();
}

bool KFileItemDelegate_EventFilter(KFileItemDelegate* self, QObject* object, QEvent* event) {
    return self->eventFilter(object, event);
}

QRect* KFileItemDelegate_SelectionEmblemRect(const KFileItemDelegate* self) {
    return new QRect(self->selectionEmblemRect());
}

void KFileItemDelegate_SetSelectionEmblemRect(KFileItemDelegate* self, QRect* rect, int iconSize) {
    self->setSelectionEmblemRect(*rect, static_cast<int>(iconSize));
}

KFileItem* KFileItemDelegate_FileItem(const KFileItemDelegate* self, const QModelIndex* index) {
    return new KFileItem(self->fileItem(*index));
}

bool KFileItemDelegate_HelpEvent(KFileItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->helpEvent(event, view, *option, *index);
}

QRegion* KFileItemDelegate_Shape(KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QRegion(self->shape(*option, *index));
}

libqt_string KFileItemDelegate_Tr2(const char* s, const char* c) {
    auto _ret = KFileItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileItemDelegate_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFileItemDelegate::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFileItemDelegate_SuperMetaObject(const KFileItemDelegate* self) {
    return (QMetaObject*)self->KFileItemDelegate::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnMetaObject(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_metaobject_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFileItemDelegate_SuperMetacast(KFileItemDelegate* self, const char* param1) {
    return self->KFileItemDelegate::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnMetacast(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_metacast_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFileItemDelegate_SuperMetacall(KFileItemDelegate* self, int param1, int param2, void** param3) {
    return self->KFileItemDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnMetacall(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_metacall_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KFileItemDelegate_SuperSizeHint(const KFileItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->KFileItemDelegate::sizeHint(*option, *index));
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnSizeHint(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_sizehint_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KFileItemDelegate_SuperPaint(const KFileItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->KFileItemDelegate::paint(painter, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnPaint(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_paint_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Paint_Callback>(slot);
}

// Base class handler implementation
QWidget* KFileItemDelegate_SuperCreateEditor(const KFileItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->KFileItemDelegate::createEditor(parent, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnCreateEditor(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_createeditor_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_CreateEditor_Callback>(slot);
}

// Base class handler implementation
bool KFileItemDelegate_SuperEditorEvent(KFileItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->KFileItemDelegate::editorEvent(event, model, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnEditorEvent(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_editorevent_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_EditorEvent_Callback>(slot);
}

// Base class handler implementation
void KFileItemDelegate_SuperSetEditorData(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->KFileItemDelegate::setEditorData(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnSetEditorData(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_seteditordata_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_SetEditorData_Callback>(slot);
}

// Base class handler implementation
void KFileItemDelegate_SuperSetModelData(const KFileItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->KFileItemDelegate::setModelData(editor, model, *index);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnSetModelData(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_setmodeldata_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_SetModelData_Callback>(slot);
}

// Base class handler implementation
void KFileItemDelegate_SuperUpdateEditorGeometry(const KFileItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->KFileItemDelegate::updateEditorGeometry(editor, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnUpdateEditorGeometry(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_updateeditorgeometry_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_UpdateEditorGeometry_Callback>(slot);
}

// Base class handler implementation
bool KFileItemDelegate_SuperEventFilter(KFileItemDelegate* self, QObject* object, QEvent* event) {
    return self->KFileItemDelegate::eventFilter(object, event);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnEventFilter(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_eventfilter_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool KFileItemDelegate_SuperHelpEvent(KFileItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->KFileItemDelegate::helpEvent(event, view, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnHelpEvent(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_helpevent_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_HelpEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileItemDelegate_DestroyEditor(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->destroyEditor(editor, *index);
}

// Base class handler implementation
void KFileItemDelegate_SuperDestroyEditor(const KFileItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->KFileItemDelegate::destroyEditor(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnDestroyEditor(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_destroyeditor_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_DestroyEditor_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of int */ KFileItemDelegate_PaintingRoles(const KFileItemDelegate* self) {
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

// Base class handler implementation
libqt_list /* of int */ KFileItemDelegate_SuperPaintingRoles(const KFileItemDelegate* self) {
    QList<int> _ret = self->KFileItemDelegate::paintingRoles();
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
void KFileItemDelegate_OnPaintingRoles(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self)))
        vkfileitemdelegate->kfileitemdelegate_paintingroles_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_PaintingRoles_Callback>(slot);
}

// Derived class handler implementation
bool KFileItemDelegate_Event(KFileItemDelegate* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFileItemDelegate_SuperEvent(KFileItemDelegate* self, QEvent* event) {
    return self->KFileItemDelegate::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnEvent(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_event_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_Event_Callback>(slot);
}

// Derived class handler implementation
void KFileItemDelegate_TimerEvent(KFileItemDelegate* self, QTimerEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate) {
        vkfileitemdelegate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileItemDelegate::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemDelegate_SuperTimerEvent(KFileItemDelegate* self, QTimerEvent* event) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self)) {
        vkfileitemdelegate->KFileItemDelegate::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileItemDelegate::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnTimerEvent(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_timerevent_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileItemDelegate_ChildEvent(KFileItemDelegate* self, QChildEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate) {
        vkfileitemdelegate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileItemDelegate::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemDelegate_SuperChildEvent(KFileItemDelegate* self, QChildEvent* event) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self)) {
        vkfileitemdelegate->KFileItemDelegate::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileItemDelegate::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnChildEvent(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_childevent_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileItemDelegate_CustomEvent(KFileItemDelegate* self, QEvent* event) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate) {
        vkfileitemdelegate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileItemDelegate::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemDelegate_SuperCustomEvent(KFileItemDelegate* self, QEvent* event) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self)) {
        vkfileitemdelegate->KFileItemDelegate::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileItemDelegate::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnCustomEvent(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_customevent_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileItemDelegate_ConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate) {
        vkfileitemdelegate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileItemDelegate::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemDelegate_SuperConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self)) {
        vkfileitemdelegate->KFileItemDelegate::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileItemDelegate::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnConnectNotify(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_connectnotify_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileItemDelegate_DisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal) {
    auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self);
    if (vkfileitemdelegate) {
        vkfileitemdelegate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileItemDelegate::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileItemDelegate_SuperDisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self)) {
        vkfileitemdelegate->KFileItemDelegate::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileItemDelegate::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileItemDelegate_OnDisconnectNotify(KFileItemDelegate* self, intptr_t slot) {
    if (auto* vkfileitemdelegate = dynamic_cast<VirtualKFileItemDelegate*>(self))
        vkfileitemdelegate->kfileitemdelegate_disconnectnotify_callback = reinterpret_cast<VirtualKFileItemDelegate::KFileItemDelegate_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KFileItemDelegate_Sender(const KFileItemDelegate* self) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self))) {
        return vkfileitemdelegate->VirtualKFileItemDelegate::sender();
    } else
        qFatal("Error: Protected method KFileItemDelegate::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileItemDelegate_SenderSignalIndex(const KFileItemDelegate* self) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self))) {
        return vkfileitemdelegate->VirtualKFileItemDelegate::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFileItemDelegate::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileItemDelegate_Receivers(const KFileItemDelegate* self, const char* signal) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self))) {
        return vkfileitemdelegate->VirtualKFileItemDelegate::receivers(signal);
    } else
        qFatal("Error: Protected method KFileItemDelegate::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileItemDelegate_IsSignalConnected(const KFileItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vkfileitemdelegate = const_cast<VirtualKFileItemDelegate*>(dynamic_cast<const VirtualKFileItemDelegate*>(self))) {
        return vkfileitemdelegate->VirtualKFileItemDelegate::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFileItemDelegate::isSignalConnected called without a directly constructed type");
}

void KFileItemDelegate_Delete(KFileItemDelegate* self) {
    delete self;
}
