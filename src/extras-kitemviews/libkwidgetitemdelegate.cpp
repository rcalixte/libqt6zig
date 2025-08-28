#include <KWidgetItemDelegate>
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
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QTimerEvent>
#include <QWidget>
#include <kwidgetitemdelegate.h>
#include "libkwidgetitemdelegate.h"
#include "libkwidgetitemdelegate.hxx"

KWidgetItemDelegate* KWidgetItemDelegate_new(QAbstractItemView* itemView) {
    return new VirtualKWidgetItemDelegate(itemView);
}

KWidgetItemDelegate* KWidgetItemDelegate_new2(QAbstractItemView* itemView, QObject* parent) {
    return new VirtualKWidgetItemDelegate(itemView, parent);
}

QMetaObject* KWidgetItemDelegate_MetaObject(const KWidgetItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KWidgetItemDelegate_Metacast(KWidgetItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KWidgetItemDelegate_Metacall(KWidgetItemDelegate* self, int param1, int param2, void** param3) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KWidgetItemDelegate_OnMetacall(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Metacall_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KWidgetItemDelegate_QBaseMetacall(KWidgetItemDelegate* self, int param1, int param2, void** param3) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Metacall_IsBase(true);
        return vkwidgetitemdelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KWidgetItemDelegate_Tr(const char* s) {
    QString _ret = KWidgetItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemView* KWidgetItemDelegate_ItemView(const KWidgetItemDelegate* self) {
    return self->itemView();
}

QPersistentModelIndex* KWidgetItemDelegate_FocusedIndex(const KWidgetItemDelegate* self) {
    return new QPersistentModelIndex(self->focusedIndex());
}

void KWidgetItemDelegate_ResetModel(KWidgetItemDelegate* self) {
    self->resetModel();
}

libqt_list /* of QWidget* */ KWidgetItemDelegate_CreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = dynamic_cast<const VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        QList<QWidget*> _ret = vkwidgetitemdelegate->createItemWidgets(*index);
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KWidgetItemDelegate_OnCreateItemWidgets(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_CreateItemWidgets_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_CreateItemWidgets_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_list /* of QWidget* */ KWidgetItemDelegate_QBaseCreateItemWidgets(const KWidgetItemDelegate* self, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = dynamic_cast<const VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_CreateItemWidgets_IsBase(true);
        QList<QWidget*> _ret = vkwidgetitemdelegate->createItemWidgets(*index);
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
    return {};
}

void KWidgetItemDelegate_UpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index) {
    QList<QWidget*> widgets_QList;
    widgets_QList.reserve(widgets.len);
    QWidget** widgets_arr = static_cast<QWidget**>(widgets.data);
    for (size_t i = 0; i < widgets.len; ++i) {
        widgets_QList.push_back(widgets_arr[i]);
    }
    auto* vkwidgetitemdelegate = dynamic_cast<const VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->updateItemWidgets(widgets_QList, *option, *index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KWidgetItemDelegate_OnUpdateItemWidgets(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_UpdateItemWidgets_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_UpdateItemWidgets_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KWidgetItemDelegate_QBaseUpdateItemWidgets(const KWidgetItemDelegate* self, const libqt_list /* of QWidget* */ widgets, const QStyleOptionViewItem* option, const QPersistentModelIndex* index) {
    QList<QWidget*> widgets_QList;
    widgets_QList.reserve(widgets.len);
    QWidget** widgets_arr = static_cast<QWidget**>(widgets.data);
    for (size_t i = 0; i < widgets.len; ++i) {
        widgets_QList.push_back(widgets_arr[i]);
    }
    auto* vkwidgetitemdelegate = dynamic_cast<const VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_UpdateItemWidgets_IsBase(true);
        vkwidgetitemdelegate->updateItemWidgets(widgets_QList, *option, *index);
    }
}

libqt_string KWidgetItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KWidgetItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWidgetItemDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KWidgetItemDelegate::tr(s, c, static_cast<int>(n));
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
void KWidgetItemDelegate_Paint(const KWidgetItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->paint(painter, *option, *index);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->paint(painter, *option, *index);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBasePaint(const KWidgetItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Paint_IsBase(true);
        vkwidgetitemdelegate->paint(painter, *option, *index);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->paint(painter, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnPaint(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Paint_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KWidgetItemDelegate_SizeHint(const KWidgetItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return new QSize(vkwidgetitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualKWidgetItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Base class handler implementation
QSize* KWidgetItemDelegate_QBaseSizeHint(const KWidgetItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SizeHint_IsBase(true);
        return new QSize(vkwidgetitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualKWidgetItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSizeHint(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KWidgetItemDelegate_CreateEditor(const KWidgetItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->KWidgetItemDelegate::createEditor(parent, *option, *index);
    }
}

// Base class handler implementation
QWidget* KWidgetItemDelegate_QBaseCreateEditor(const KWidgetItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_CreateEditor_IsBase(true);
        return vkwidgetitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->KWidgetItemDelegate::createEditor(parent, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnCreateEditor(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_CreateEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_DestroyEditor(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->destroyEditor(editor, *index);
    } else {
        self->KWidgetItemDelegate::destroyEditor(editor, *index);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseDestroyEditor(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_DestroyEditor_IsBase(true);
        vkwidgetitemdelegate->destroyEditor(editor, *index);
    } else {
        self->KWidgetItemDelegate::destroyEditor(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnDestroyEditor(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_DestroyEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_SetEditorData(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setEditorData(editor, *index);
    } else {
        self->KWidgetItemDelegate::setEditorData(editor, *index);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseSetEditorData(const KWidgetItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SetEditorData_IsBase(true);
        vkwidgetitemdelegate->setEditorData(editor, *index);
    } else {
        self->KWidgetItemDelegate::setEditorData(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSetEditorData(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_SetEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_SetModelData(const KWidgetItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setModelData(editor, model, *index);
    } else {
        self->KWidgetItemDelegate::setModelData(editor, model, *index);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseSetModelData(const KWidgetItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SetModelData_IsBase(true);
        vkwidgetitemdelegate->setModelData(editor, model, *index);
    } else {
        self->KWidgetItemDelegate::setModelData(editor, model, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSetModelData(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_SetModelData_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_UpdateEditorGeometry(const KWidgetItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->KWidgetItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseUpdateEditorGeometry(const KWidgetItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_UpdateEditorGeometry_IsBase(true);
        vkwidgetitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->KWidgetItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnUpdateEditorGeometry(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_UpdateEditorGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWidgetItemDelegate_EditorEvent(KWidgetItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return self->KWidgetItemDelegate::editorEvent(event, model, *option, *index);
    }
}

// Base class handler implementation
bool KWidgetItemDelegate_QBaseEditorEvent(KWidgetItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_EditorEvent_IsBase(true);
        return vkwidgetitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return self->KWidgetItemDelegate::editorEvent(event, model, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnEditorEvent(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_EditorEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWidgetItemDelegate_HelpEvent(KWidgetItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->KWidgetItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Base class handler implementation
bool KWidgetItemDelegate_QBaseHelpEvent(KWidgetItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_HelpEvent_IsBase(true);
        return vkwidgetitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->KWidgetItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnHelpEvent(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ KWidgetItemDelegate_PaintingRoles(const KWidgetItemDelegate* self) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        QList<int> _ret = vkwidgetitemdelegate->paintingRoles();
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
        QList<int> _ret = self->KWidgetItemDelegate::paintingRoles();
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
libqt_list /* of int */ KWidgetItemDelegate_QBasePaintingRoles(const KWidgetItemDelegate* self) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_PaintingRoles_IsBase(true);
        QList<int> _ret = vkwidgetitemdelegate->paintingRoles();
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
        QList<int> _ret = self->KWidgetItemDelegate::paintingRoles();
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
void KWidgetItemDelegate_OnPaintingRoles(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_PaintingRoles_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWidgetItemDelegate_Event(KWidgetItemDelegate* self, QEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->event(event);
    } else {
        return self->KWidgetItemDelegate::event(event);
    }
}

// Base class handler implementation
bool KWidgetItemDelegate_QBaseEvent(KWidgetItemDelegate* self, QEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Event_IsBase(true);
        return vkwidgetitemdelegate->event(event);
    } else {
        return self->KWidgetItemDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnEvent(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Event_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWidgetItemDelegate_EventFilter(KWidgetItemDelegate* self, QObject* watched, QEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->eventFilter(watched, event);
    } else {
        return self->KWidgetItemDelegate::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KWidgetItemDelegate_QBaseEventFilter(KWidgetItemDelegate* self, QObject* watched, QEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_EventFilter_IsBase(true);
        return vkwidgetitemdelegate->eventFilter(watched, event);
    } else {
        return self->KWidgetItemDelegate::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnEventFilter(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_TimerEvent(KWidgetItemDelegate* self, QTimerEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->timerEvent(event);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseTimerEvent(KWidgetItemDelegate* self, QTimerEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_TimerEvent_IsBase(true);
        vkwidgetitemdelegate->timerEvent(event);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnTimerEvent(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_TimerEvent_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_ChildEvent(KWidgetItemDelegate* self, QChildEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->childEvent(event);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseChildEvent(KWidgetItemDelegate* self, QChildEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_ChildEvent_IsBase(true);
        vkwidgetitemdelegate->childEvent(event);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnChildEvent(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_ChildEvent_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_CustomEvent(KWidgetItemDelegate* self, QEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->customEvent(event);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseCustomEvent(KWidgetItemDelegate* self, QEvent* event) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_CustomEvent_IsBase(true);
        vkwidgetitemdelegate->customEvent(event);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnCustomEvent(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_CustomEvent_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_ConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseConnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_ConnectNotify_IsBase(true);
        vkwidgetitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnConnectNotify(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_DisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseDisconnectNotify(KWidgetItemDelegate* self, const QMetaMethod* signal) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_DisconnectNotify_IsBase(true);
        vkwidgetitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnDisconnectNotify(KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = dynamic_cast<VirtualKWidgetItemDelegate*>(self);
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KWidgetItemDelegate_SetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    QList<QEvent::Type> types_QList;
    types_QList.reserve(types.len);
    int* types_arr = static_cast<int*>(types.data);
    for (size_t i = 0; i < types.len; ++i) {
        types_QList.push_back(static_cast<QEvent::Type>(types_arr[i]));
    }
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setBlockedEventTypes(widget, types_QList);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->setBlockedEventTypes(widget, types_QList);
    }
}

// Base class handler implementation
void KWidgetItemDelegate_QBaseSetBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget, const libqt_list /* of int */ types) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    QList<QEvent::Type> types_QList;
    types_QList.reserve(types.len);
    int* types_arr = static_cast<int*>(types.data);
    for (size_t i = 0; i < types.len; ++i) {
        types_QList.push_back(static_cast<QEvent::Type>(types_arr[i]));
    }
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SetBlockedEventTypes_IsBase(true);
        vkwidgetitemdelegate->setBlockedEventTypes(widget, types_QList);
    } else {
        ((VirtualKWidgetItemDelegate*)self)->setBlockedEventTypes(widget, types_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSetBlockedEventTypes(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SetBlockedEventTypes_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_SetBlockedEventTypes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ KWidgetItemDelegate_BlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        QList<QEvent::Type> _ret = vkwidgetitemdelegate->blockedEventTypes(widget);
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QEvent::Type> _ret = ((VirtualKWidgetItemDelegate*)self)->blockedEventTypes(widget);
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of int */ KWidgetItemDelegate_QBaseBlockedEventTypes(const KWidgetItemDelegate* self, QWidget* widget) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_BlockedEventTypes_IsBase(true);
        QList<QEvent::Type> _ret = vkwidgetitemdelegate->blockedEventTypes(widget);
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QEvent::Type> _ret = ((VirtualKWidgetItemDelegate*)self)->blockedEventTypes(widget);
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnBlockedEventTypes(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_BlockedEventTypes_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_BlockedEventTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KWidgetItemDelegate_Sender(const KWidgetItemDelegate* self) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->sender();
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* KWidgetItemDelegate_QBaseSender(const KWidgetItemDelegate* self) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Sender_IsBase(true);
        return vkwidgetitemdelegate->sender();
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSender(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Sender_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KWidgetItemDelegate_SenderSignalIndex(const KWidgetItemDelegate* self) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KWidgetItemDelegate_QBaseSenderSignalIndex(const KWidgetItemDelegate* self) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SenderSignalIndex_IsBase(true);
        return vkwidgetitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnSenderSignalIndex(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KWidgetItemDelegate_Receivers(const KWidgetItemDelegate* self, const char* signal) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->receivers(signal);
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KWidgetItemDelegate_QBaseReceivers(const KWidgetItemDelegate* self, const char* signal) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Receivers_IsBase(true);
        return vkwidgetitemdelegate->receivers(signal);
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnReceivers(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_Receivers_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KWidgetItemDelegate_IsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        return vkwidgetitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KWidgetItemDelegate_QBaseIsSignalConnected(const KWidgetItemDelegate* self, const QMetaMethod* signal) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_IsSignalConnected_IsBase(true);
        return vkwidgetitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKWidgetItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KWidgetItemDelegate_OnIsSignalConnected(const KWidgetItemDelegate* self, intptr_t slot) {
    auto* vkwidgetitemdelegate = const_cast<VirtualKWidgetItemDelegate*>(dynamic_cast<const VirtualKWidgetItemDelegate*>(self));
    if (vkwidgetitemdelegate && vkwidgetitemdelegate->isVirtualKWidgetItemDelegate) {
        vkwidgetitemdelegate->setKWidgetItemDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualKWidgetItemDelegate::KWidgetItemDelegate_IsSignalConnected_Callback>(slot));
    }
}

void KWidgetItemDelegate_Delete(KWidgetItemDelegate* self) {
    delete self;
}
