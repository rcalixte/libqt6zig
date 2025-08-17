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
#include <QByteArray>
#include <cstring>
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
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractItemDelegate_OnMetacall(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Metacall_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractItemDelegate_QBaseMetacall(QAbstractItemDelegate* self, int param1, int param2, void** param3) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Metacall_IsBase(true);
        return vqabstractitemdelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractItemDelegate_Tr(const char* s) {
    QString _ret = QAbstractItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor) {
    self->commitData(editor);
}

void QAbstractItemDelegate_Connect_CommitData(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::commitData, [self, slotFunc](QWidget* editor) {
        QWidget* sigval1 = editor;
        slotFunc(self, sigval1);
    });
}

void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor) {
    self->closeEditor(editor);
}

void QAbstractItemDelegate_Connect_CloseEditor(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QWidget*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QWidget*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::closeEditor, [self, slotFunc](QWidget* editor) {
        QWidget* sigval1 = editor;
        slotFunc(self, sigval1);
    });
}

void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, const QModelIndex* param1) {
    self->sizeHintChanged(*param1);
}

void QAbstractItemDelegate_Connect_SizeHintChanged(QAbstractItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemDelegate*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemDelegate*, QModelIndex*)>(slot);
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::sizeHintChanged, [self, slotFunc](const QModelIndex& param1) {
        const QModelIndex& param1_ret = param1;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractItemDelegate::tr(s, c);
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
    QString _ret = QAbstractItemDelegate::tr(s, c, static_cast<int>(n));
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
    QAbstractItemDelegate::connect(self, &QAbstractItemDelegate::closeEditor, [self, slotFunc](QWidget* editor, QAbstractItemDelegate::EndEditHint hint) {
        QWidget* sigval1 = editor;
        int sigval2 = static_cast<int>(hint);
        slotFunc(self, sigval1, sigval2);
    });
}

// Derived class handler implementation
void QAbstractItemDelegate_Paint(const QAbstractItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->paint(painter, *option, *index);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->paint(painter, *option, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBasePaint(const QAbstractItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Paint_IsBase(true);
        vqabstractitemdelegate->paint(painter, *option, *index);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->paint(painter, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnPaint(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Paint_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractItemDelegate_SizeHint(const QAbstractItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return new QSize(vqabstractitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualQAbstractItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Base class handler implementation
QSize* QAbstractItemDelegate_QBaseSizeHint(const QAbstractItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SizeHint_IsBase(true);
        return new QSize(vqabstractitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualQAbstractItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSizeHint(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QAbstractItemDelegate_CreateEditor(const QAbstractItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->QAbstractItemDelegate::createEditor(parent, *option, *index);
    }
}

// Base class handler implementation
QWidget* QAbstractItemDelegate_QBaseCreateEditor(const QAbstractItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_CreateEditor_IsBase(true);
        return vqabstractitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->QAbstractItemDelegate::createEditor(parent, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnCreateEditor(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_CreateEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_DestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->destroyEditor(editor, *index);
    } else {
        self->QAbstractItemDelegate::destroyEditor(editor, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseDestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_DestroyEditor_IsBase(true);
        vqabstractitemdelegate->destroyEditor(editor, *index);
    } else {
        self->QAbstractItemDelegate::destroyEditor(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnDestroyEditor(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_DestroyEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_SetEditorData(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setEditorData(editor, *index);
    } else {
        self->QAbstractItemDelegate::setEditorData(editor, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseSetEditorData(const QAbstractItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SetEditorData_IsBase(true);
        vqabstractitemdelegate->setEditorData(editor, *index);
    } else {
        self->QAbstractItemDelegate::setEditorData(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSetEditorData(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SetEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_SetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setModelData(editor, model, *index);
    } else {
        self->QAbstractItemDelegate::setModelData(editor, model, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseSetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SetModelData_IsBase(true);
        vqabstractitemdelegate->setModelData(editor, model, *index);
    } else {
        self->QAbstractItemDelegate::setModelData(editor, model, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSetModelData(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SetModelData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_UpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->QAbstractItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseUpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_UpdateEditorGeometry_IsBase(true);
        vqabstractitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->QAbstractItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnUpdateEditorGeometry(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_UpdateEditorGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return self->QAbstractItemDelegate::editorEvent(event, model, *option, *index);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseEditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_EditorEvent_IsBase(true);
        return vqabstractitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return self->QAbstractItemDelegate::editorEvent(event, model, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEditorEvent(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_EditorEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->QAbstractItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseHelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_HelpEvent_IsBase(true);
        return vqabstractitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->QAbstractItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnHelpEvent(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ QAbstractItemDelegate_PaintingRoles(const QAbstractItemDelegate* self) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        QList<int> _ret = vqabstractitemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<int> _ret = self->QAbstractItemDelegate::paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
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
libqt_list /* of int */ QAbstractItemDelegate_QBasePaintingRoles(const QAbstractItemDelegate* self) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_PaintingRoles_IsBase(true);
        QList<int> _ret = vqabstractitemdelegate->paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<int> _ret = self->QAbstractItemDelegate::paintingRoles();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
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
void QAbstractItemDelegate_OnPaintingRoles(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_PaintingRoles_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_Event(QAbstractItemDelegate* self, QEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->event(event);
    } else {
        return self->QAbstractItemDelegate::event(event);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseEvent(QAbstractItemDelegate* self, QEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Event_IsBase(true);
        return vqabstractitemdelegate->event(event);
    } else {
        return self->QAbstractItemDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEvent(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Event_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_EventFilter(QAbstractItemDelegate* self, QObject* watched, QEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->eventFilter(watched, event);
    } else {
        return self->QAbstractItemDelegate::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseEventFilter(QAbstractItemDelegate* self, QObject* watched, QEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_EventFilter_IsBase(true);
        return vqabstractitemdelegate->eventFilter(watched, event);
    } else {
        return self->QAbstractItemDelegate::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnEventFilter(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_TimerEvent(QAbstractItemDelegate* self, QTimerEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->timerEvent(event);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseTimerEvent(QAbstractItemDelegate* self, QTimerEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_TimerEvent_IsBase(true);
        vqabstractitemdelegate->timerEvent(event);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnTimerEvent(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_ChildEvent(QAbstractItemDelegate* self, QChildEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->childEvent(event);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseChildEvent(QAbstractItemDelegate* self, QChildEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_ChildEvent_IsBase(true);
        vqabstractitemdelegate->childEvent(event);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnChildEvent(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_CustomEvent(QAbstractItemDelegate* self, QEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->customEvent(event);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseCustomEvent(QAbstractItemDelegate* self, QEvent* event) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_CustomEvent_IsBase(true);
        vqabstractitemdelegate->customEvent(event);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnCustomEvent(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_ConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_ConnectNotify_IsBase(true);
        vqabstractitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnConnectNotify(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemDelegate_DisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemDelegate_QBaseDisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_DisconnectNotify_IsBase(true);
        vqabstractitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnDisconnectNotify(QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = dynamic_cast<VirtualQAbstractItemDelegate*>(self);
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractItemDelegate_Sender(const QAbstractItemDelegate* self) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->sender();
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractItemDelegate_QBaseSender(const QAbstractItemDelegate* self) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Sender_IsBase(true);
        return vqabstractitemdelegate->sender();
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSender(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Sender_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemDelegate_SenderSignalIndex(const QAbstractItemDelegate* self) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractItemDelegate_QBaseSenderSignalIndex(const QAbstractItemDelegate* self) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SenderSignalIndex_IsBase(true);
        return vqabstractitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnSenderSignalIndex(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemDelegate_Receivers(const QAbstractItemDelegate* self, const char* signal) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->receivers(signal);
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractItemDelegate_QBaseReceivers(const QAbstractItemDelegate* self, const char* signal) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Receivers_IsBase(true);
        return vqabstractitemdelegate->receivers(signal);
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnReceivers(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_Receivers_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemDelegate_IsSignalConnected(const QAbstractItemDelegate* self, const QMetaMethod* signal) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        return vqabstractitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractItemDelegate_QBaseIsSignalConnected(const QAbstractItemDelegate* self, const QMetaMethod* signal) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_IsSignalConnected_IsBase(true);
        return vqabstractitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemDelegate_OnIsSignalConnected(const QAbstractItemDelegate* self, intptr_t slot) {
    auto* vqabstractitemdelegate = const_cast<VirtualQAbstractItemDelegate*>(dynamic_cast<const VirtualQAbstractItemDelegate*>(self));
    if (vqabstractitemdelegate && vqabstractitemdelegate->isVirtualQAbstractItemDelegate) {
        vqabstractitemdelegate->setQAbstractItemDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractItemDelegate::QAbstractItemDelegate_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self) {
    delete self;
}
