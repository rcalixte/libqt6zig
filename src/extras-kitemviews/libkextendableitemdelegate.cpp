#include <KExtendableItemDelegate>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QList>
#include <QLocale>
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
#include <QStyledItemDelegate>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <kextendableitemdelegate.h>
#include "libkextendableitemdelegate.h"
#include "libkextendableitemdelegate.hxx"

KExtendableItemDelegate* KExtendableItemDelegate_new(QAbstractItemView* parent) {
    return new VirtualKExtendableItemDelegate(parent);
}

QMetaObject* KExtendableItemDelegate_MetaObject(const KExtendableItemDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KExtendableItemDelegate_Metacast(KExtendableItemDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KExtendableItemDelegate_Metacall(KExtendableItemDelegate* self, int param1, int param2, void** param3) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KExtendableItemDelegate_OnMetacall(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Metacall_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KExtendableItemDelegate_QBaseMetacall(KExtendableItemDelegate* self, int param1, int param2, void** param3) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Metacall_IsBase(true);
        return vkextendableitemdelegate->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KExtendableItemDelegate_Tr(const char* s) {
    QString _ret = KExtendableItemDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KExtendableItemDelegate_ExtendItem(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index) {
    self->extendItem(extender, *index);
}

void KExtendableItemDelegate_ContractItem(KExtendableItemDelegate* self, const QModelIndex* index) {
    self->contractItem(*index);
}

void KExtendableItemDelegate_ContractAll(KExtendableItemDelegate* self) {
    self->contractAll();
}

bool KExtendableItemDelegate_IsExtended(const KExtendableItemDelegate* self, const QModelIndex* index) {
    return self->isExtended(*index);
}

void KExtendableItemDelegate_ExtenderCreated(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index) {
    self->extenderCreated(extender, *index);
}

void KExtendableItemDelegate_Connect_ExtenderCreated(KExtendableItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(KExtendableItemDelegate*, QWidget*, QModelIndex*) = reinterpret_cast<void (*)(KExtendableItemDelegate*, QWidget*, QModelIndex*)>(slot);
    KExtendableItemDelegate::connect(self, &KExtendableItemDelegate::extenderCreated, [self, slotFunc](QWidget* extender, const QModelIndex& index) {
        QWidget* sigval1 = extender;
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KExtendableItemDelegate_ExtenderDestroyed(KExtendableItemDelegate* self, QWidget* extender, const QModelIndex* index) {
    self->extenderDestroyed(extender, *index);
}

void KExtendableItemDelegate_Connect_ExtenderDestroyed(KExtendableItemDelegate* self, intptr_t slot) {
    void (*slotFunc)(KExtendableItemDelegate*, QWidget*, QModelIndex*) = reinterpret_cast<void (*)(KExtendableItemDelegate*, QWidget*, QModelIndex*)>(slot);
    KExtendableItemDelegate::connect(self, &KExtendableItemDelegate::extenderDestroyed, [self, slotFunc](QWidget* extender, const QModelIndex& index) {
        QWidget* sigval1 = extender;
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KExtendableItemDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KExtendableItemDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KExtendableItemDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KExtendableItemDelegate::tr(s, c, static_cast<int>(n));
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
QSize* KExtendableItemDelegate_SizeHint(const KExtendableItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return new QSize(vkextendableitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualKExtendableItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Base class handler implementation
QSize* KExtendableItemDelegate_QBaseSizeHint(const KExtendableItemDelegate* self, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SizeHint_IsBase(true);
        return new QSize(vkextendableitemdelegate->sizeHint(*option, *index));
    } else {
        return new QSize(((VirtualKExtendableItemDelegate*)self)->sizeHint(*option, *index));
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSizeHint(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SizeHint_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_Paint(const KExtendableItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->paint(painter, *option, *index);
    } else {
        self->KExtendableItemDelegate::paint(painter, *option, *index);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBasePaint(const KExtendableItemDelegate* self, QPainter* painter, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Paint_IsBase(true);
        vkextendableitemdelegate->paint(painter, *option, *index);
    } else {
        self->KExtendableItemDelegate::paint(painter, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnPaint(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Paint_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_UpdateExtenderGeometry(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->updateExtenderGeometry(extender, *option, *index);
    } else {
        self->KExtendableItemDelegate::updateExtenderGeometry(extender, *option, *index);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseUpdateExtenderGeometry(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_UpdateExtenderGeometry_IsBase(true);
        vkextendableitemdelegate->updateExtenderGeometry(extender, *option, *index);
    } else {
        self->KExtendableItemDelegate::updateExtenderGeometry(extender, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnUpdateExtenderGeometry(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_UpdateExtenderGeometry_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_UpdateExtenderGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KExtendableItemDelegate_CreateEditor(const KExtendableItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->KExtendableItemDelegate::createEditor(parent, *option, *index);
    }
}

// Base class handler implementation
QWidget* KExtendableItemDelegate_QBaseCreateEditor(const KExtendableItemDelegate* self, QWidget* parent, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_CreateEditor_IsBase(true);
        return vkextendableitemdelegate->createEditor(parent, *option, *index);
    } else {
        return self->KExtendableItemDelegate::createEditor(parent, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnCreateEditor(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_CreateEditor_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_CreateEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_SetEditorData(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setEditorData(editor, *index);
    } else {
        self->KExtendableItemDelegate::setEditorData(editor, *index);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseSetEditorData(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SetEditorData_IsBase(true);
        vkextendableitemdelegate->setEditorData(editor, *index);
    } else {
        self->KExtendableItemDelegate::setEditorData(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSetEditorData(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SetEditorData_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SetEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_SetModelData(const KExtendableItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setModelData(editor, model, *index);
    } else {
        self->KExtendableItemDelegate::setModelData(editor, model, *index);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseSetModelData(const KExtendableItemDelegate* self, QWidget* editor, QAbstractItemModel* model, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SetModelData_IsBase(true);
        vkextendableitemdelegate->setModelData(editor, model, *index);
    } else {
        self->KExtendableItemDelegate::setModelData(editor, model, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSetModelData(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SetModelData_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SetModelData_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_UpdateEditorGeometry(const KExtendableItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->KExtendableItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseUpdateEditorGeometry(const KExtendableItemDelegate* self, QWidget* editor, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_UpdateEditorGeometry_IsBase(true);
        vkextendableitemdelegate->updateEditorGeometry(editor, *option, *index);
    } else {
        self->KExtendableItemDelegate::updateEditorGeometry(editor, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnUpdateEditorGeometry(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_UpdateEditorGeometry_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_UpdateEditorGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KExtendableItemDelegate_DisplayText(const KExtendableItemDelegate* self, const QVariant* value, const QLocale* locale) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        QString _ret = vkextendableitemdelegate->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KExtendableItemDelegate::displayText(*value, *locale);
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

// Base class handler implementation
libqt_string KExtendableItemDelegate_QBaseDisplayText(const KExtendableItemDelegate* self, const QVariant* value, const QLocale* locale) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_DisplayText_IsBase(true);
        QString _ret = vkextendableitemdelegate->displayText(*value, *locale);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KExtendableItemDelegate::displayText(*value, *locale);
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

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnDisplayText(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_DisplayText_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_DisplayText_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_InitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->initStyleOption(option, *index);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->initStyleOption(option, *index);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseInitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_InitStyleOption_IsBase(true);
        vkextendableitemdelegate->initStyleOption(option, *index);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->initStyleOption(option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnInitStyleOption(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_InitStyleOption_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtendableItemDelegate_EventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->eventFilter(object, event);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool KExtendableItemDelegate_QBaseEventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_EventFilter_IsBase(true);
        return vkextendableitemdelegate->eventFilter(object, event);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnEventFilter(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_EventFilter_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtendableItemDelegate_EditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->editorEvent(event, model, *option, *index);
    }
}

// Base class handler implementation
bool KExtendableItemDelegate_QBaseEditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_EditorEvent_IsBase(true);
        return vkextendableitemdelegate->editorEvent(event, model, *option, *index);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->editorEvent(event, model, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnEditorEvent(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_EditorEvent_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_EditorEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_DestroyEditor(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->destroyEditor(editor, *index);
    } else {
        self->KExtendableItemDelegate::destroyEditor(editor, *index);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseDestroyEditor(const KExtendableItemDelegate* self, QWidget* editor, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_DestroyEditor_IsBase(true);
        vkextendableitemdelegate->destroyEditor(editor, *index);
    } else {
        self->KExtendableItemDelegate::destroyEditor(editor, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnDestroyEditor(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_DestroyEditor_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_DestroyEditor_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtendableItemDelegate_HelpEvent(KExtendableItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->KExtendableItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Base class handler implementation
bool KExtendableItemDelegate_QBaseHelpEvent(KExtendableItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_HelpEvent_IsBase(true);
        return vkextendableitemdelegate->helpEvent(event, view, *option, *index);
    } else {
        return self->KExtendableItemDelegate::helpEvent(event, view, *option, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnHelpEvent(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_HelpEvent_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_HelpEvent_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of int */ KExtendableItemDelegate_PaintingRoles(const KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        QList<int> _ret = vkextendableitemdelegate->paintingRoles();
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
        QList<int> _ret = self->KExtendableItemDelegate::paintingRoles();
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
libqt_list /* of int */ KExtendableItemDelegate_QBasePaintingRoles(const KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_PaintingRoles_IsBase(true);
        QList<int> _ret = vkextendableitemdelegate->paintingRoles();
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
        QList<int> _ret = self->KExtendableItemDelegate::paintingRoles();
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
void KExtendableItemDelegate_OnPaintingRoles(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_PaintingRoles_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_PaintingRoles_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtendableItemDelegate_Event(KExtendableItemDelegate* self, QEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->event(event);
    } else {
        return self->KExtendableItemDelegate::event(event);
    }
}

// Base class handler implementation
bool KExtendableItemDelegate_QBaseEvent(KExtendableItemDelegate* self, QEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Event_IsBase(true);
        return vkextendableitemdelegate->event(event);
    } else {
        return self->KExtendableItemDelegate::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnEvent(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Event_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_TimerEvent(KExtendableItemDelegate* self, QTimerEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->timerEvent(event);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseTimerEvent(KExtendableItemDelegate* self, QTimerEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_TimerEvent_IsBase(true);
        vkextendableitemdelegate->timerEvent(event);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnTimerEvent(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_TimerEvent_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_ChildEvent(KExtendableItemDelegate* self, QChildEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->childEvent(event);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseChildEvent(KExtendableItemDelegate* self, QChildEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ChildEvent_IsBase(true);
        vkextendableitemdelegate->childEvent(event);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnChildEvent(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ChildEvent_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_CustomEvent(KExtendableItemDelegate* self, QEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->customEvent(event);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseCustomEvent(KExtendableItemDelegate* self, QEvent* event) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_CustomEvent_IsBase(true);
        vkextendableitemdelegate->customEvent(event);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnCustomEvent(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_CustomEvent_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_ConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ConnectNotify_IsBase(true);
        vkextendableitemdelegate->connectNotify(*signal);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnConnectNotify(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ConnectNotify_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_DisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseDisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_DisconnectNotify_IsBase(true);
        vkextendableitemdelegate->disconnectNotify(*signal);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnDisconnectNotify(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_DisconnectNotify_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KExtendableItemDelegate_ExtenderRect(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return new QRect(vkextendableitemdelegate->extenderRect(extender, *option, *index));
    }
    return {};
}

// Base class handler implementation
QRect* KExtendableItemDelegate_QBaseExtenderRect(const KExtendableItemDelegate* self, QWidget* extender, const QStyleOptionViewItem* option, const QModelIndex* index) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ExtenderRect_IsBase(true);
        return new QRect(vkextendableitemdelegate->extenderRect(extender, *option, *index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnExtenderRect(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ExtenderRect_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_ExtenderRect_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_SetExtendPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setExtendPixmap(*pixmap);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->setExtendPixmap(*pixmap);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseSetExtendPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SetExtendPixmap_IsBase(true);
        vkextendableitemdelegate->setExtendPixmap(*pixmap);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->setExtendPixmap(*pixmap);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSetExtendPixmap(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SetExtendPixmap_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SetExtendPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
void KExtendableItemDelegate_SetContractPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setContractPixmap(*pixmap);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->setContractPixmap(*pixmap);
    }
}

// Base class handler implementation
void KExtendableItemDelegate_QBaseSetContractPixmap(KExtendableItemDelegate* self, const QPixmap* pixmap) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SetContractPixmap_IsBase(true);
        vkextendableitemdelegate->setContractPixmap(*pixmap);
    } else {
        ((VirtualKExtendableItemDelegate*)self)->setContractPixmap(*pixmap);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSetContractPixmap(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SetContractPixmap_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SetContractPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* KExtendableItemDelegate_ExtendPixmap(KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return new QPixmap(vkextendableitemdelegate->extendPixmap());
    }
    return {};
}

// Base class handler implementation
QPixmap* KExtendableItemDelegate_QBaseExtendPixmap(KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ExtendPixmap_IsBase(true);
        return new QPixmap(vkextendableitemdelegate->extendPixmap());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnExtendPixmap(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ExtendPixmap_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_ExtendPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* KExtendableItemDelegate_ContractPixmap(KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return new QPixmap(vkextendableitemdelegate->contractPixmap());
    }
    return {};
}

// Base class handler implementation
QPixmap* KExtendableItemDelegate_QBaseContractPixmap(KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ContractPixmap_IsBase(true);
        return new QPixmap(vkextendableitemdelegate->contractPixmap());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnContractPixmap(KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = dynamic_cast<VirtualKExtendableItemDelegate*>(self);
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_ContractPixmap_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_ContractPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KExtendableItemDelegate_Sender(const KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->sender();
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->sender();
    }
}

// Base class handler implementation
QObject* KExtendableItemDelegate_QBaseSender(const KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Sender_IsBase(true);
        return vkextendableitemdelegate->sender();
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSender(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Sender_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KExtendableItemDelegate_SenderSignalIndex(const KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KExtendableItemDelegate_QBaseSenderSignalIndex(const KExtendableItemDelegate* self) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SenderSignalIndex_IsBase(true);
        return vkextendableitemdelegate->senderSignalIndex();
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnSenderSignalIndex(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_SenderSignalIndex_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KExtendableItemDelegate_Receivers(const KExtendableItemDelegate* self, const char* signal) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->receivers(signal);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KExtendableItemDelegate_QBaseReceivers(const KExtendableItemDelegate* self, const char* signal) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Receivers_IsBase(true);
        return vkextendableitemdelegate->receivers(signal);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnReceivers(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_Receivers_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KExtendableItemDelegate_IsSignalConnected(const KExtendableItemDelegate* self, const QMetaMethod* signal) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        return vkextendableitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KExtendableItemDelegate_QBaseIsSignalConnected(const KExtendableItemDelegate* self, const QMetaMethod* signal) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_IsSignalConnected_IsBase(true);
        return vkextendableitemdelegate->isSignalConnected(*signal);
    } else {
        return ((VirtualKExtendableItemDelegate*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KExtendableItemDelegate_OnIsSignalConnected(const KExtendableItemDelegate* self, intptr_t slot) {
    auto* vkextendableitemdelegate = const_cast<VirtualKExtendableItemDelegate*>(dynamic_cast<const VirtualKExtendableItemDelegate*>(self));
    if (vkextendableitemdelegate && vkextendableitemdelegate->isVirtualKExtendableItemDelegate) {
        vkextendableitemdelegate->setKExtendableItemDelegate_IsSignalConnected_Callback(reinterpret_cast<VirtualKExtendableItemDelegate::KExtendableItemDelegate_IsSignalConnected_Callback>(slot));
    }
}

void KExtendableItemDelegate_Delete(KExtendableItemDelegate* self) {
    delete self;
}
