#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QHelpEvent>
#include <QItemDelegate>
#include <QItemEditorFactory>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qitemdelegate.h>
#include "libqitemdelegate.h"
#include "libqitemdelegate.hxx"

QItemDelegate* QItemDelegate_new() {
    return new VirtualQItemDelegate();
}

QItemDelegate* QItemDelegate_new2(QObject* parent) {
    return new VirtualQItemDelegate(parent);
}

QMetaObject* QItemDelegate_MetaObject(const QItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* QItemDelegate_Metacast(QItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QItemDelegate_Metacall(QItemDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QItemDelegate_Tr(const char* s) {
    auto _ret = QItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QItemDelegate_HasClipping(const QItemDelegate* self) {
    return self->hasClipping();
}

void QItemDelegate_SetClipping(QItemDelegate* self, bool clip) {
    self->setClipping(clip);
}

void QItemDelegate_Paint(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->paint(painter, *option, *index);
}

QSize* QItemDelegate_SizeHint(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->sizeHint(*option, *index));
}

QWidget* QItemDelegate_CreateEditor(const QItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->createEditor(parent, *option, *index);
}

void QItemDelegate_SetEditorData(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->setEditorData(editor, *index);
}

void QItemDelegate_SetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->setModelData(editor, model, *index);
}

void QItemDelegate_UpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QItemDelegate_ItemEditorFactory(const QItemDelegate* self) {
    return self->itemEditorFactory();
}

void QItemDelegate_SetItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory) {
    self->setItemEditorFactory(factory);
}

void QItemDelegate_DrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->drawDisplay(painter, *option, *rect, text_QString);
    }
}

void QItemDelegate_DrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap) {
    auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->drawDecoration(painter, *option, *rect, *pixmap);
    }
}

void QItemDelegate_DrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect) {
    auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->drawFocus(painter, *option, *rect);
    }
}

void QItemDelegate_DrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state) {
    auto* vqitemdelegate = dynamic_cast<const VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
    }
}

bool QItemDelegate_EventFilter(QItemDelegate* self, QObject* object, QEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        return vqitemdelegate->eventFilter(object, event);
    }
    qFatal("Error: Protected method QItemDelegate::eventFilter called without a directly constructed type");
}

bool QItemDelegate_EditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        return vqitemdelegate->editorEvent(event, model, *option, *index);
    }
    qFatal("Error: Protected method QItemDelegate::editorEvent called without a directly constructed type");
}

libqt_string QItemDelegate_Tr2(const char* s, const char* c) {
    auto _ret = QItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QItemDelegate_Tr3(const char* s, const char* c, int n) {
    auto _ret = QItemDelegate::tr(s, c, static_cast<int>(n));
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
QMetaObject* QItemDelegate_SuperMetaObject(const QItemDelegate* self) {
    return (QMetaObject*)self->QItemDelegate::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnMetaObject(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_metaobject_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QItemDelegate_SuperMetacast(QItemDelegate* self, const char* param1) {
    return self->QItemDelegate::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnMetacast(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_metacast_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Metacast_Callback>(slot);
}

// Base class handler implementation
int QItemDelegate_SuperMetacall(QItemDelegate* self, int param1, int param2, void** param3) {
    return self->QItemDelegate::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnMetacall(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_metacall_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Metacall_Callback>(slot);
}

// Base class handler implementation
void QItemDelegate_SuperPaint(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->QItemDelegate::paint(painter, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnPaint(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_paint_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Paint_Callback>(slot);
}

// Base class handler implementation
QSize* QItemDelegate_SuperSizeHint(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return new QSize(self->QItemDelegate::sizeHint(*option, *index));
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSizeHint(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_sizehint_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SizeHint_Callback>(slot);
}

// Base class handler implementation
QWidget* QItemDelegate_SuperCreateEditor(const QItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->QItemDelegate::createEditor(parent, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnCreateEditor(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_createeditor_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_CreateEditor_Callback>(slot);
}

// Base class handler implementation
void QItemDelegate_SuperSetEditorData(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->QItemDelegate::setEditorData(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSetEditorData(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_seteditordata_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SetEditorData_Callback>(slot);
}

// Base class handler implementation
void QItemDelegate_SuperSetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    self->QItemDelegate::setModelData(editor, model, *index);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSetModelData(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_setmodeldata_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SetModelData_Callback>(slot);
}

// Base class handler implementation
void QItemDelegate_SuperUpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    self->QItemDelegate::updateEditorGeometry(editor, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnUpdateEditorGeometry(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_updateeditorgeometry_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_UpdateEditorGeometry_Callback>(slot);
}

// Base class handler implementation
void QItemDelegate_SuperDrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        vqitemdelegate->QItemDelegate::drawDisplay(painter, *option, *rect, text_QString);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::drawDisplay called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawDisplay(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_drawdisplay_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawDisplay_Callback>(slot);
}

// Base class handler implementation
void QItemDelegate_SuperDrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        vqitemdelegate->QItemDelegate::drawDecoration(painter, *option, *rect, *pixmap);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::drawDecoration called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawDecoration(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_drawdecoration_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawDecoration_Callback>(slot);
}

// Base class handler implementation
void QItemDelegate_SuperDrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        vqitemdelegate->QItemDelegate::drawFocus(painter, *option, *rect);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::drawFocus called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawFocus(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_drawfocus_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawFocus_Callback>(slot);
}

// Base class handler implementation
void QItemDelegate_SuperDrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        vqitemdelegate->QItemDelegate::drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
    } else
        qFatal("Error: Protected virtual method QItemDelegate::drawCheck called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawCheck(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_drawcheck_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawCheck_Callback>(slot);
}

// Base class handler implementation
bool QItemDelegate_SuperEventFilter(QItemDelegate* self, QObject* object, QEvent* event) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self)) {
        return vqitemdelegate->QItemDelegate::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnEventFilter(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_eventfilter_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool QItemDelegate_SuperEditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self)) {
        return vqitemdelegate->QItemDelegate::editorEvent(event, model, *option, *index);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::editorEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnEditorEvent(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_editorevent_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_EditorEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemDelegate_DestroyEditor(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->destroyEditor(editor, *index);
}

// Base class handler implementation
void QItemDelegate_SuperDestroyEditor(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    self->QItemDelegate::destroyEditor(editor, *index);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDestroyEditor(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_destroyeditor_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DestroyEditor_Callback>(slot);
}

// Derived class handler implementation
bool QItemDelegate_HelpEvent(QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->helpEvent(event, view, *option, *index);
}

// Base class handler implementation
bool QItemDelegate_SuperHelpEvent(QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    return self->QItemDelegate::helpEvent(event, view, *option, *index);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnHelpEvent(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_helpevent_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_HelpEvent_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of int */ QItemDelegate_PaintingRoles(const QItemDelegate* self) {
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
libqt_list /* of int */ QItemDelegate_SuperPaintingRoles(const QItemDelegate* self) {
    QList<int> _ret = self->QItemDelegate::paintingRoles();
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
void QItemDelegate_OnPaintingRoles(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        vqitemdelegate->qitemdelegate_paintingroles_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_PaintingRoles_Callback>(slot);
}

// Derived class handler implementation
bool QItemDelegate_Event(QItemDelegate* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QItemDelegate_SuperEvent(QItemDelegate* self, QEvent* event) {
    return self->QItemDelegate::event(event);
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnEvent(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_event_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Event_Callback>(slot);
}

// Derived class handler implementation
void QItemDelegate_TimerEvent(QItemDelegate* self, QTimerEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemDelegate::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemDelegate_SuperTimerEvent(QItemDelegate* self, QTimerEvent* event) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self)) {
        vqitemdelegate->QItemDelegate::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnTimerEvent(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_timerevent_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemDelegate_ChildEvent(QItemDelegate* self, QChildEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemDelegate::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemDelegate_SuperChildEvent(QItemDelegate* self, QChildEvent* event) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self)) {
        vqitemdelegate->QItemDelegate::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnChildEvent(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_childevent_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemDelegate_CustomEvent(QItemDelegate* self, QEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QItemDelegate::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemDelegate_SuperCustomEvent(QItemDelegate* self, QEvent* event) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self)) {
        vqitemdelegate->QItemDelegate::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnCustomEvent(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_customevent_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QItemDelegate_ConnectNotify(QItemDelegate* self, const QMetaMethod* signal) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QItemDelegate::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemDelegate_SuperConnectNotify(QItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self)) {
        vqitemdelegate->QItemDelegate::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnConnectNotify(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_connectnotify_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QItemDelegate_DisconnectNotify(QItemDelegate* self, const QMetaMethod* signal) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate) {
        vqitemdelegate->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QItemDelegate::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QItemDelegate_SuperDisconnectNotify(QItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self)) {
        vqitemdelegate->QItemDelegate::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QItemDelegate::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDisconnectNotify(QItemDelegate* self, intptr_t slot) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        vqitemdelegate->qitemdelegate_disconnectnotify_callback = reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QItemDelegate_DrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        vqitemdelegate->VirtualQItemDelegate::drawBackground(painter, *option, *index);
    } else
        qFatal("Error: Protected method QItemDelegate::drawBackground called without a directly constructed type");
}

// Derived class protected handler implementation
void QItemDelegate_DoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        vqitemdelegate->VirtualQItemDelegate::doLayout(*option, checkRect, iconRect, textRect, hint);
    } else
        qFatal("Error: Protected method QItemDelegate::doLayout called without a directly constructed type");
}

// Derived class handler implementation
QRect* QItemDelegate_Rect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        return new QRect(vqitemdelegate->rect(*option, *index, static_cast<int>(role)));
    qFatal("Error: Protected method QItemDelegate::rect called without a directly constructed type");
}

// Derived class handler implementation
QStyleOptionViewItem* QItemDelegate_SetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        return new QStyleOptionViewItem(vqitemdelegate->setOptions(*index, *option));
    qFatal("Error: Protected method QItemDelegate::setOptions called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QItemDelegate_Decoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        return new QPixmap(vqitemdelegate->decoration(*option, *variant));
    qFatal("Error: Protected method QItemDelegate::decoration called without a directly constructed type");
}

// Derived class handler implementation
QPixmap* QItemDelegate_SelectedPixmap(QItemDelegate* self, const QPixmap* pixmap, const QPalette* palette, bool enabled) {
    if (auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self))
        return new QPixmap(vqitemdelegate->selectedPixmap(*pixmap, *palette, enabled));
    qFatal("Error: Protected method QItemDelegate::selectedPixmap called without a directly constructed type");
}

// Derived class handler implementation
QRect* QItemDelegate_DoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        return new QRect(vqitemdelegate->doCheck(*option, *bounding, *variant));
    qFatal("Error: Protected method QItemDelegate::doCheck called without a directly constructed type");
}

// Derived class handler implementation
QRect* QItemDelegate_TextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self)))
        return new QRect(vqitemdelegate->textRectangle(painter, *rect, *font, text_QString));
    qFatal("Error: Protected method QItemDelegate::textRectangle called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QItemDelegate_Sender(const QItemDelegate* self) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        return vqitemdelegate->VirtualQItemDelegate::sender();
    } else
        qFatal("Error: Protected method QItemDelegate::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QItemDelegate_SenderSignalIndex(const QItemDelegate* self) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        return vqitemdelegate->VirtualQItemDelegate::senderSignalIndex();
    } else
        qFatal("Error: Protected method QItemDelegate::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QItemDelegate_Receivers(const QItemDelegate* self, const char* signal) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        return vqitemdelegate->VirtualQItemDelegate::receivers(signal);
    } else
        qFatal("Error: Protected method QItemDelegate::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QItemDelegate_IsSignalConnected(const QItemDelegate* self, const QMetaMethod* signal) {
    if (auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self))) {
        return vqitemdelegate->VirtualQItemDelegate::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QItemDelegate::isSignalConnected called without a directly constructed type");
}

void QItemDelegate_Delete(QItemDelegate* self) {
    delete self;
}
