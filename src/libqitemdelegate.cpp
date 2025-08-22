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
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QItemDelegate_OnMetacall(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Metacall_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QItemDelegate_QBaseMetacall(QItemDelegate* self, int param1, int param2, void** param3) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Metacall_IsBase(true);
        return vqitemdelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QItemDelegate_Tr(const char* s) {
    QString _ret = QItemDelegate::tr(s);
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

QItemEditorFactory* QItemDelegate_ItemEditorFactory(const QItemDelegate* self) {
    return self->itemEditorFactory();
}

void QItemDelegate_SetItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory) {
    self->setItemEditorFactory(factory);
}

libqt_string QItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = QItemDelegate::tr(s, c);
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
    QString _ret = QItemDelegate::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QItemDelegate_Paint(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->paint(painter, *option, *index);
    } else {
        self->QItemDelegate::paint(painter, *option, *index);
    }
}

// Base class handler implementation
void QItemDelegate_QBasePaint(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Paint_IsBase(true);
        vqitemdelegate->paint(painter, *option, *index);
    } else {
        self->QItemDelegate::paint(painter, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnPaint(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Paint_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QItemDelegate_SizeHint(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return new QSize(vqitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualQItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Base class handler implementation
QSize* QItemDelegate_QBaseSizeHint(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SizeHint_IsBase(true);
        return new QSize(vqitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualQItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSizeHint(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QItemDelegate_CreateEditor(const QItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->QItemDelegate::createEditor(parent, *option, *index);
    }
}

// Base class handler implementation
QWidget* QItemDelegate_QBaseCreateEditor(const QItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_CreateEditor_IsBase(true);
        return vqitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->QItemDelegate::createEditor(parent, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnCreateEditor(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_CreateEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_SetEditorData(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setEditorData(editor, *index);
    } else {
        self->QItemDelegate::setEditorData(editor, *index);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseSetEditorData(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SetEditorData_IsBase(true);
        vqitemdelegate->setEditorData(editor, *index);
    } else {
        self->QItemDelegate::setEditorData(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSetEditorData(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SetEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_SetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setModelData(editor, model, *index);
    } else {
        self->QItemDelegate::setModelData(editor, model, *index);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseSetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SetModelData_IsBase(true);
        vqitemdelegate->setModelData(editor, model, *index);
    } else {
        self->QItemDelegate::setModelData(editor, model, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSetModelData(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SetModelData_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_UpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->QItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseUpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_UpdateEditorGeometry_IsBase(true);
        vqitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->QItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnUpdateEditorGeometry(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_UpdateEditorGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_DrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->drawDisplay(painter, *option, *rect, text_QString);
    } else {
        ((VirtualQItemDelegate*)self)->drawDisplay(painter, *option, *rect, text_QString);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseDrawDisplay(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const libqt_string text) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawDisplay_IsBase(true);
        vqitemdelegate->drawDisplay(painter, *option, *rect, text_QString);
    } else {
        ((VirtualQItemDelegate*)self)->drawDisplay(painter, *option, *rect, text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawDisplay(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawDisplay_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawDisplay_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_DrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->drawDecoration(painter, *option, *rect, *pixmap);
    } else {
        ((VirtualQItemDelegate*)self)->drawDecoration(painter, *option, *rect, *pixmap);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseDrawDecoration(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, const QPixmap* pixmap) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawDecoration_IsBase(true);
        vqitemdelegate->drawDecoration(painter, *option, *rect, *pixmap);
    } else {
        ((VirtualQItemDelegate*)self)->drawDecoration(painter, *option, *rect, *pixmap);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawDecoration(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawDecoration_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawDecoration_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_DrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->drawFocus(painter, *option, *rect);
    } else {
        ((VirtualQItemDelegate*)self)->drawFocus(painter, *option, *rect);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseDrawFocus(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawFocus_IsBase(true);
        vqitemdelegate->drawFocus(painter, *option, *rect);
    } else {
        ((VirtualQItemDelegate*)self)->drawFocus(painter, *option, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawFocus(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawFocus_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_DrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
    } else {
        ((VirtualQItemDelegate*)self)->drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
    }
}

// Base class handler implementation
void QItemDelegate_QBaseDrawCheck(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QRect* rect, int state) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawCheck_IsBase(true);
        vqitemdelegate->drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
    } else {
        ((VirtualQItemDelegate*)self)->drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawCheck(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawCheck_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawCheck_Callback>(slot));
    }
}

// Derived class handler implementation
bool QItemDelegate_EventFilter(QItemDelegate* self, QObject* object, QEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->eventFilter(object, event);
    } else {
        return ((VirtualQItemDelegate*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QItemDelegate_QBaseEventFilter(QItemDelegate* self, QObject* object, QEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_EventFilter_IsBase(true);
        return vqitemdelegate->eventFilter(object, event);
    } else {
        return ((VirtualQItemDelegate*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnEventFilter(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QItemDelegate_EditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return ((VirtualQItemDelegate*)self)->editorEvent(event, model, *option, *index);
    }
}

// Base class handler implementation
bool QItemDelegate_QBaseEditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_EditorEvent_IsBase(true);
        return vqitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return ((VirtualQItemDelegate*)self)->editorEvent(event, model, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnEditorEvent(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_EditorEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_DestroyEditor(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->destroyEditor(editor, *index);
    } else {
        self->QItemDelegate::destroyEditor(editor, *index);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseDestroyEditor(const QItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DestroyEditor_IsBase(true);
        vqitemdelegate->destroyEditor(editor, *index);
    } else {
        self->QItemDelegate::destroyEditor(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDestroyEditor(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DestroyEditor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QItemDelegate_HelpEvent(QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->QItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Base class handler implementation
bool QItemDelegate_QBaseHelpEvent(QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_HelpEvent_IsBase(true);
        return vqitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->QItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnHelpEvent(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ QItemDelegate_PaintingRoles(const QItemDelegate* self) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        QList<int> _ret = vqitemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<int> _ret = self->QItemDelegate::paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
libqt_list /* of int */ QItemDelegate_QBasePaintingRoles(const QItemDelegate* self) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_PaintingRoles_IsBase(true);
        QList<int> _ret = vqitemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<int> _ret = self->QItemDelegate::paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
void QItemDelegate_OnPaintingRoles(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_PaintingRoles_Callback>(slot));
    }
}

// Derived class handler implementation
bool QItemDelegate_Event(QItemDelegate* self, QEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->event(event);
    } else {
        return self->QItemDelegate::event(event);
    }
}

// Base class handler implementation
bool QItemDelegate_QBaseEvent(QItemDelegate* self, QEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Event_IsBase(true);
        return vqitemdelegate->event(event);
    } else {
        return self->QItemDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnEvent(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Event_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_TimerEvent(QItemDelegate* self, QTimerEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->timerEvent(event);
    } else {
        ((VirtualQItemDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseTimerEvent(QItemDelegate* self, QTimerEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_TimerEvent_IsBase(true);
        vqitemdelegate->timerEvent(event);
    } else {
        ((VirtualQItemDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnTimerEvent(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_TimerEvent_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_ChildEvent(QItemDelegate* self, QChildEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->childEvent(event);
    } else {
        ((VirtualQItemDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseChildEvent(QItemDelegate* self, QChildEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_ChildEvent_IsBase(true);
        vqitemdelegate->childEvent(event);
    } else {
        ((VirtualQItemDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnChildEvent(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_ChildEvent_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_CustomEvent(QItemDelegate* self, QEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->customEvent(event);
    } else {
        ((VirtualQItemDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseCustomEvent(QItemDelegate* self, QEvent* event) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_CustomEvent_IsBase(true);
        vqitemdelegate->customEvent(event);
    } else {
        ((VirtualQItemDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnCustomEvent(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_CustomEvent_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_ConnectNotify(QItemDelegate* self, const QMetaMethod* signal) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualQItemDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseConnectNotify(QItemDelegate* self, const QMetaMethod* signal) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_ConnectNotify_IsBase(true);
        vqitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualQItemDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnConnectNotify(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_DisconnectNotify(QItemDelegate* self, const QMetaMethod* signal) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualQItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseDisconnectNotify(QItemDelegate* self, const QMetaMethod* signal) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DisconnectNotify_IsBase(true);
        vqitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualQItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDisconnectNotify(QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = dynamic_cast<VirtualQItemDelegate*>(self);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_DrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->drawBackground(painter, *option, *index);
    } else {
        ((VirtualQItemDelegate*)self)->drawBackground(painter, *option, *index);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseDrawBackground(const QItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawBackground_IsBase(true);
        vqitemdelegate->drawBackground(painter, *option, *index);
    } else {
        ((VirtualQItemDelegate*)self)->drawBackground(painter, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDrawBackground(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DrawBackground_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DrawBackground_Callback>(slot));
    }
}

// Derived class handler implementation
void QItemDelegate_DoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->doLayout(*option, checkRect, iconRect, textRect, hint);
    } else {
        ((VirtualQItemDelegate*)self)->doLayout(*option, checkRect, iconRect, textRect, hint);
    }
}

// Base class handler implementation
void QItemDelegate_QBaseDoLayout(const QItemDelegate* self, const QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DoLayout_IsBase(true);
        vqitemdelegate->doLayout(*option, checkRect, iconRect, textRect, hint);
    } else {
        ((VirtualQItemDelegate*)self)->doLayout(*option, checkRect, iconRect, textRect, hint);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDoLayout(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DoLayout_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DoLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QItemDelegate_Rect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return new QRect(vqitemdelegate->rect(*option, *index, static_cast<int>(role)));
    }
    return {};
}

// Base class handler implementation
QRect* QItemDelegate_QBaseRect(const QItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index, int role) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Rect_IsBase(true);
        return new QRect(vqitemdelegate->rect(*option, *index, static_cast<int>(role)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnRect(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Rect_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Rect_Callback>(slot));
    }
}

// Derived class handler implementation
QStyleOptionViewItem* QItemDelegate_SetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return new QStyleOptionViewItem(vqitemdelegate->setOptions(*index, *option));
    }
    return {};
}

// Base class handler implementation
QStyleOptionViewItem* QItemDelegate_QBaseSetOptions(const QItemDelegate* self, const QModelIndex* index, const QStyleOptionViewItem* option) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SetOptions_IsBase(true);
        return new QStyleOptionViewItem(vqitemdelegate->setOptions(*index, *option));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSetOptions(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SetOptions_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SetOptions_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QItemDelegate_Decoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return new QPixmap(vqitemdelegate->decoration(*option, *variant));
    }
    return {};
}

// Base class handler implementation
QPixmap* QItemDelegate_QBaseDecoration(const QItemDelegate* self, const QStyleOptionViewItem* option, const QVariant* variant) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Decoration_IsBase(true);
        return new QPixmap(vqitemdelegate->decoration(*option, *variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDecoration(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Decoration_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Decoration_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QItemDelegate_DoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return new QRect(vqitemdelegate->doCheck(*option, *bounding, *variant));
    }
    return {};
}

// Base class handler implementation
QRect* QItemDelegate_QBaseDoCheck(const QItemDelegate* self, const QStyleOptionViewItem* option, const QRect* bounding, const QVariant* variant) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DoCheck_IsBase(true);
        return new QRect(vqitemdelegate->doCheck(*option, *bounding, *variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnDoCheck(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_DoCheck_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_DoCheck_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QItemDelegate_TextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return new QRect(vqitemdelegate->textRectangle(painter, *rect, *font, text_QString));
    }
    return {};
}

// Base class handler implementation
QRect* QItemDelegate_QBaseTextRectangle(const QItemDelegate* self, QPainter* painter, const QRect* rect, const QFont* font, const libqt_string text) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_TextRectangle_IsBase(true);
        return new QRect(vqitemdelegate->textRectangle(painter, *rect, *font, text_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnTextRectangle(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_TextRectangle_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_TextRectangle_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QItemDelegate_Sender(const QItemDelegate* self) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->sender();
    } else {
        return ((VirtualQItemDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* QItemDelegate_QBaseSender(const QItemDelegate* self) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Sender_IsBase(true);
        return vqitemdelegate->sender();
    } else {
        return ((VirtualQItemDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSender(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Sender_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QItemDelegate_SenderSignalIndex(const QItemDelegate* self) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualQItemDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QItemDelegate_QBaseSenderSignalIndex(const QItemDelegate* self) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SenderSignalIndex_IsBase(true);
        return vqitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualQItemDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnSenderSignalIndex(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QItemDelegate_Receivers(const QItemDelegate* self, const char* signal) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->receivers(signal);
    } else {
        return ((VirtualQItemDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QItemDelegate_QBaseReceivers(const QItemDelegate* self, const char* signal) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Receivers_IsBase(true);
        return vqitemdelegate->receivers(signal);
    } else {
        return ((VirtualQItemDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnReceivers(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_Receivers_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QItemDelegate_IsSignalConnected(const QItemDelegate* self, const QMetaMethod* signal) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        return vqitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualQItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QItemDelegate_QBaseIsSignalConnected(const QItemDelegate* self, const QMetaMethod* signal) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_IsSignalConnected_IsBase(true);
        return vqitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualQItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QItemDelegate_OnIsSignalConnected(const QItemDelegate* self, intptr_t slot) {
    auto* vqitemdelegate = const_cast<VirtualQItemDelegate*>(dynamic_cast<const VirtualQItemDelegate*>(self));
    if (vqitemdelegate && vqitemdelegate->isVirtualQItemDelegate) {
        vqitemdelegate->setQItemDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualQItemDelegate::QItemDelegate_IsSignalConnected_Callback>(slot));
    }
}

void QItemDelegate_Delete(QItemDelegate* self) {
    delete self;
}
