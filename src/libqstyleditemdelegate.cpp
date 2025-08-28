#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QItemEditorFactory>
#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QStyledItemDelegate>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qstyleditemdelegate.h>
#include "libqstyleditemdelegate.h"
#include "libqstyleditemdelegate.hxx"

QStyledItemDelegate* QStyledItemDelegate_new() {
    return new VirtualQStyledItemDelegate();
}

QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent) {
    return new VirtualQStyledItemDelegate(parent);
}

QMetaObject* QStyledItemDelegate_MetaObject(const QStyledItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStyledItemDelegate_Metacast(QStyledItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStyledItemDelegate_Metacall(QStyledItemDelegate* self, int param1, int param2, void** param3) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStyledItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnMetacall(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Metacall_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStyledItemDelegate_QBaseMetacall(QStyledItemDelegate* self, int param1, int param2, void** param3) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Metacall_IsBase(true);
        return vqstyleditemdelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQStyledItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStyledItemDelegate_Tr(const char* s) {
    QString _ret = QStyledItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        self->paint(painter, *option, *index);
    } else {
        ((VirtualQStyledItemDelegate*)self)->paint(painter, *option, *index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnPaint(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Paint_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Paint_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyledItemDelegate_QBasePaint(const QStyledItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Paint_IsBase(true);
        vqstyleditemdelegate->paint(painter, *option, *index);
    } else {
        ((VirtualQStyledItemDelegate*)self)->paint(painter, *option, *index);
    }
}

QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return new QSize(self->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualQStyledItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnSizeHint(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QStyledItemDelegate_QBaseSizeHint(const QStyledItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_SizeHint_IsBase(true);
        return new QSize(vqstyleditemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualQStyledItemDelegate*)self)->sizeHint(*option, *index));
    }
}

QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return self->createEditor(parent, *option, *index);
    } else {
        return ((VirtualQStyledItemDelegate*)self)->createEditor(parent, *option, *index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnCreateEditor(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_CreateEditor_Callback>(slot));
    }
}

// Virtual base class handler implementation
QWidget* QStyledItemDelegate_QBaseCreateEditor(const QStyledItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_CreateEditor_IsBase(true);
        return vqstyleditemdelegate->createEditor(parent, *option, *index);
    } else {
        return ((VirtualQStyledItemDelegate*)self)->createEditor(parent, *option, *index);
    }
}

void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        self->setEditorData(editor, *index);
    } else {
        ((VirtualQStyledItemDelegate*)self)->setEditorData(editor, *index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnSetEditorData(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SetEditorData_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyledItemDelegate_QBaseSetEditorData(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_SetEditorData_IsBase(true);
        vqstyleditemdelegate->setEditorData(editor, *index);
    } else {
        ((VirtualQStyledItemDelegate*)self)->setEditorData(editor, *index);
    }
}

void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        self->setModelData(editor, model, *index);
    } else {
        ((VirtualQStyledItemDelegate*)self)->setModelData(editor, model, *index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnSetModelData(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SetModelData_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyledItemDelegate_QBaseSetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_SetModelData_IsBase(true);
        vqstyleditemdelegate->setModelData(editor, model, *index);
    } else {
        ((VirtualQStyledItemDelegate*)self)->setModelData(editor, model, *index);
    }
}

void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        self->updateEditorGeometry(editor, *option, *index);
    } else {
        ((VirtualQStyledItemDelegate*)self)->updateEditorGeometry(editor, *option, *index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnUpdateEditorGeometry(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_UpdateEditorGeometry_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyledItemDelegate_QBaseUpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_UpdateEditorGeometry_IsBase(true);
        vqstyleditemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        ((VirtualQStyledItemDelegate*)self)->updateEditorGeometry(editor, *option, *index);
    }
}

QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self) {
    return self->itemEditorFactory();
}

void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
    self->setItemEditorFactory(factory);
}

libqt_string QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        QString _ret = self->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQStyledItemDelegate*)self)->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnDisplayText(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_DisplayText_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DisplayText_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_string QStyledItemDelegate_QBaseDisplayText(const QStyledItemDelegate* self, const QVariant* value, const QLocale* locale) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_DisplayText_IsBase(true);
        QString _ret = vqstyleditemdelegate->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQStyledItemDelegate*)self)->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

void QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->initStyleOption(option, *index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnInitStyleOption(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_InitStyleOption_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QStyledItemDelegate_QBaseInitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<const VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_InitStyleOption_IsBase(true);
        vqstyleditemdelegate->initStyleOption(option, *index);
    }
}

bool QStyledItemDelegate_EventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return vqstyleditemdelegate->eventFilter(object, event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnEventFilter(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_EventFilter_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStyledItemDelegate_QBaseEventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_EventFilter_IsBase(true);
        return vqstyleditemdelegate->eventFilter(object, event);
    }
    return {};
}

bool QStyledItemDelegate_EditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QStyledItemDelegate_OnEditorEvent(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_EditorEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QStyledItemDelegate_QBaseEditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_EditorEvent_IsBase(true);
        return vqstyleditemdelegate->editorEvent(event, model, *option, *index);
    }
    return {};
}

libqt_string QStyledItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = QStyledItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QStyledItemDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStyledItemDelegate::tr(s, c, static_cast<int>(n));
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
void QStyledItemDelegate_DestroyEditor(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->destroyEditor(editor, *index);
    } else {
        self->QStyledItemDelegate::destroyEditor(editor, *index);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseDestroyEditor(const QStyledItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_DestroyEditor_IsBase(true);
        vqstyleditemdelegate->destroyEditor(editor, *index);
    } else {
        self->QStyledItemDelegate::destroyEditor(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnDestroyEditor(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DestroyEditor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyledItemDelegate_HelpEvent(QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return vqstyleditemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->QStyledItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseHelpEvent(QStyledItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_HelpEvent_IsBase(true);
        return vqstyleditemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->QStyledItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnHelpEvent(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ QStyledItemDelegate_PaintingRoles(const QStyledItemDelegate* self) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        QList<int> _ret = vqstyleditemdelegate->paintingRoles();
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
        QList<int> _ret = self->QStyledItemDelegate::paintingRoles();
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
libqt_list /* of int */ QStyledItemDelegate_QBasePaintingRoles(const QStyledItemDelegate* self) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_PaintingRoles_IsBase(true);
        QList<int> _ret = vqstyleditemdelegate->paintingRoles();
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
        QList<int> _ret = self->QStyledItemDelegate::paintingRoles();
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
void QStyledItemDelegate_OnPaintingRoles(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_PaintingRoles_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyledItemDelegate_Event(QStyledItemDelegate* self, QEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return vqstyleditemdelegate->event(event);
    } else {
        return self->QStyledItemDelegate::event(event);
    }
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseEvent(QStyledItemDelegate* self, QEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Event_IsBase(true);
        return vqstyleditemdelegate->event(event);
    } else {
        return self->QStyledItemDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnEvent(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Event_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_TimerEvent(QStyledItemDelegate* self, QTimerEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->timerEvent(event);
    } else {
        ((VirtualQStyledItemDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseTimerEvent(QStyledItemDelegate* self, QTimerEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_TimerEvent_IsBase(true);
        vqstyleditemdelegate->timerEvent(event);
    } else {
        ((VirtualQStyledItemDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnTimerEvent(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_TimerEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_ChildEvent(QStyledItemDelegate* self, QChildEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->childEvent(event);
    } else {
        ((VirtualQStyledItemDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseChildEvent(QStyledItemDelegate* self, QChildEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_ChildEvent_IsBase(true);
        vqstyleditemdelegate->childEvent(event);
    } else {
        ((VirtualQStyledItemDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnChildEvent(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_ChildEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_CustomEvent(QStyledItemDelegate* self, QEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->customEvent(event);
    } else {
        ((VirtualQStyledItemDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseCustomEvent(QStyledItemDelegate* self, QEvent* event) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_CustomEvent_IsBase(true);
        vqstyleditemdelegate->customEvent(event);
    } else {
        ((VirtualQStyledItemDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnCustomEvent(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_CustomEvent_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_ConnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->connectNotify(*signal);
    } else {
        ((VirtualQStyledItemDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseConnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_ConnectNotify_IsBase(true);
        vqstyleditemdelegate->connectNotify(*signal);
    } else {
        ((VirtualQStyledItemDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnConnectNotify(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyledItemDelegate_DisconnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualQStyledItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStyledItemDelegate_QBaseDisconnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_DisconnectNotify_IsBase(true);
        vqstyleditemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualQStyledItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnDisconnectNotify(QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = dynamic_cast<VirtualQStyledItemDelegate*>(self);
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStyledItemDelegate_Sender(const QStyledItemDelegate* self) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return vqstyleditemdelegate->sender();
    } else {
        return ((VirtualQStyledItemDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* QStyledItemDelegate_QBaseSender(const QStyledItemDelegate* self) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Sender_IsBase(true);
        return vqstyleditemdelegate->sender();
    } else {
        return ((VirtualQStyledItemDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSender(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Sender_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyledItemDelegate_SenderSignalIndex(const QStyledItemDelegate* self) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return vqstyleditemdelegate->senderSignalIndex();
    } else {
        return ((VirtualQStyledItemDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QStyledItemDelegate_QBaseSenderSignalIndex(const QStyledItemDelegate* self) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_SenderSignalIndex_IsBase(true);
        return vqstyleditemdelegate->senderSignalIndex();
    } else {
        return ((VirtualQStyledItemDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnSenderSignalIndex(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyledItemDelegate_Receivers(const QStyledItemDelegate* self, const char* signal) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return vqstyleditemdelegate->receivers(signal);
    } else {
        return ((VirtualQStyledItemDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QStyledItemDelegate_QBaseReceivers(const QStyledItemDelegate* self, const char* signal) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Receivers_IsBase(true);
        return vqstyleditemdelegate->receivers(signal);
    } else {
        return ((VirtualQStyledItemDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnReceivers(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_Receivers_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyledItemDelegate_IsSignalConnected(const QStyledItemDelegate* self, const QMetaMethod* signal) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        return vqstyleditemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualQStyledItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStyledItemDelegate_QBaseIsSignalConnected(const QStyledItemDelegate* self, const QMetaMethod* signal) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_IsSignalConnected_IsBase(true);
        return vqstyleditemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualQStyledItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyledItemDelegate_OnIsSignalConnected(const QStyledItemDelegate* self, intptr_t slot) {
    auto* vqstyleditemdelegate = const_cast<VirtualQStyledItemDelegate*>(dynamic_cast<const VirtualQStyledItemDelegate*>(self));
    if (vqstyleditemdelegate && vqstyleditemdelegate->isVirtualQStyledItemDelegate) {
        vqstyleditemdelegate->setQStyledItemDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualQStyledItemDelegate::QStyledItemDelegate_IsSignalConnected_Callback>(slot));
    }
}

void QStyledItemDelegate_Delete(QStyledItemDelegate* self) {
    delete self;
}
