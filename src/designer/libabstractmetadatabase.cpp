#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerMetaDataBaseInterface>
#include <QDesignerMetaDataBaseItemInterface>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractmetadatabase.h>
#include "libabstractmetadatabase.h"
#include "libabstractmetadatabase.hxx"

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseItemInterface_new() {
    return new VirtualQDesignerMetaDataBaseItemInterface();
}

libqt_string QDesignerMetaDataBaseItemInterface_Name(const QDesignerMetaDataBaseItemInterface* self) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        QString _ret = vqdesignermetadatabaseiteminterface->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMetaDataBaseItemInterface*)self)->name();
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

void QDesignerMetaDataBaseItemInterface_SetName(QDesignerMetaDataBaseItemInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setName(name_QString);
    } else {
        ((VirtualQDesignerMetaDataBaseItemInterface*)self)->setName(name_QString);
    }
}

libqt_list /* of QWidget* */ QDesignerMetaDataBaseItemInterface_TabOrder(const QDesignerMetaDataBaseItemInterface* self) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        QList<QWidget*> _ret = vqdesignermetadatabaseiteminterface->tabOrder();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualQDesignerMetaDataBaseItemInterface*)self)->tabOrder();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

void QDesignerMetaDataBaseItemInterface_SetTabOrder(QDesignerMetaDataBaseItemInterface* self, const libqt_list /* of QWidget* */ tabOrder) {
    QList<QWidget*> tabOrder_QList;
    tabOrder_QList.reserve(tabOrder.len);
    QWidget** tabOrder_arr = static_cast<QWidget**>(tabOrder.data);
    for (size_t i = 0; i < tabOrder.len; ++i) {
        tabOrder_QList.push_back(tabOrder_arr[i]);
    }
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setTabOrder(tabOrder_QList);
    } else {
        ((VirtualQDesignerMetaDataBaseItemInterface*)self)->setTabOrder(tabOrder_QList);
    }
}

bool QDesignerMetaDataBaseItemInterface_Enabled(const QDesignerMetaDataBaseItemInterface* self) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        return vqdesignermetadatabaseiteminterface->enabled();
    } else {
        return ((VirtualQDesignerMetaDataBaseItemInterface*)self)->enabled();
    }
}

void QDesignerMetaDataBaseItemInterface_SetEnabled(QDesignerMetaDataBaseItemInterface* self, bool b) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setEnabled(b);
    } else {
        ((VirtualQDesignerMetaDataBaseItemInterface*)self)->setEnabled(b);
    }
}

// Base class handler implementation
libqt_string QDesignerMetaDataBaseItemInterface_QBaseName(const QDesignerMetaDataBaseItemInterface* self) {
    auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self));
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_Name_IsBase(true);
        QString _ret = vqdesignermetadatabaseiteminterface->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerMetaDataBaseItemInterface*)self)->name();
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
void QDesignerMetaDataBaseItemInterface_OnName(const QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self));
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_Name_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_Name_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseItemInterface_QBaseSetName(QDesignerMetaDataBaseItemInterface* self, const libqt_string name) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_SetName_IsBase(true);
        vqdesignermetadatabaseiteminterface->setName(name_QString);
    } else {
        ((VirtualQDesignerMetaDataBaseItemInterface*)self)->setName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnSetName(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_SetName_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_SetName_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ QDesignerMetaDataBaseItemInterface_QBaseTabOrder(const QDesignerMetaDataBaseItemInterface* self) {
    auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self));
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_TabOrder_IsBase(true);
        QList<QWidget*> _ret = vqdesignermetadatabaseiteminterface->tabOrder();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualQDesignerMetaDataBaseItemInterface*)self)->tabOrder();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
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
void QDesignerMetaDataBaseItemInterface_OnTabOrder(const QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self));
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_TabOrder_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_TabOrder_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseItemInterface_QBaseSetTabOrder(QDesignerMetaDataBaseItemInterface* self, const libqt_list /* of QWidget* */ tabOrder) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    QList<QWidget*> tabOrder_QList;
    tabOrder_QList.reserve(tabOrder.len);
    QWidget** tabOrder_arr = static_cast<QWidget**>(tabOrder.data);
    for (size_t i = 0; i < tabOrder.len; ++i) {
        tabOrder_QList.push_back(tabOrder_arr[i]);
    }
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_SetTabOrder_IsBase(true);
        vqdesignermetadatabaseiteminterface->setTabOrder(tabOrder_QList);
    } else {
        ((VirtualQDesignerMetaDataBaseItemInterface*)self)->setTabOrder(tabOrder_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnSetTabOrder(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_SetTabOrder_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_SetTabOrder_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerMetaDataBaseItemInterface_QBaseEnabled(const QDesignerMetaDataBaseItemInterface* self) {
    auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self));
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_Enabled_IsBase(true);
        return vqdesignermetadatabaseiteminterface->enabled();
    } else {
        return ((VirtualQDesignerMetaDataBaseItemInterface*)self)->enabled();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnEnabled(const QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self));
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_Enabled_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_Enabled_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseItemInterface_QBaseSetEnabled(QDesignerMetaDataBaseItemInterface* self, bool b) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_SetEnabled_IsBase(true);
        vqdesignermetadatabaseiteminterface->setEnabled(b);
    } else {
        ((VirtualQDesignerMetaDataBaseItemInterface*)self)->setEnabled(b);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnSetEnabled(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self);
    if (vqdesignermetadatabaseiteminterface && vqdesignermetadatabaseiteminterface->isVirtualQDesignerMetaDataBaseItemInterface) {
        vqdesignermetadatabaseiteminterface->setQDesignerMetaDataBaseItemInterface_SetEnabled_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_SetEnabled_Callback>(slot));
    }
}

void QDesignerMetaDataBaseItemInterface_Delete(QDesignerMetaDataBaseItemInterface* self) {
    delete self;
}

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new() {
    return new VirtualQDesignerMetaDataBaseInterface();
}

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new2(QObject* parent) {
    return new VirtualQDesignerMetaDataBaseInterface(parent);
}

QMetaObject* QDesignerMetaDataBaseInterface_MetaObject(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerMetaDataBaseInterface*)self)->metaObject();
    }
}

void* QDesignerMetaDataBaseInterface_Metacast(QDesignerMetaDataBaseInterface* self, const char* param1) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerMetaDataBaseInterface_Metacall(QDesignerMetaDataBaseInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_Item(const QDesignerMetaDataBaseInterface* self, QObject* object) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return vqdesignermetadatabaseinterface->item(object);
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->item(object);
    }
}

void QDesignerMetaDataBaseInterface_Add(QDesignerMetaDataBaseInterface* self, QObject* object) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->add(object);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->add(object);
    }
}

void QDesignerMetaDataBaseInterface_Remove(QDesignerMetaDataBaseInterface* self, QObject* object) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->remove(object);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->remove(object);
    }
}

libqt_list /* of QObject* */ QDesignerMetaDataBaseInterface_Objects(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        QList<QObject*> _ret = vqdesignermetadatabaseinterface->objects();
        // Convert QList<> from C++ memory to manually-managed C memory
        QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QObject*> _ret = ((VirtualQDesignerMetaDataBaseInterface*)self)->objects();
        // Convert QList<> from C++ memory to manually-managed C memory
        QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_Core(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return vqdesignermetadatabaseinterface->core();
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->core();
    }
}

void QDesignerMetaDataBaseInterface_Changed(QDesignerMetaDataBaseInterface* self) {
    self->changed();
}

void QDesignerMetaDataBaseInterface_Connect_Changed(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerMetaDataBaseInterface*) = reinterpret_cast<void (*)(QDesignerMetaDataBaseInterface*)>(slot);
    QDesignerMetaDataBaseInterface::connect(self, &QDesignerMetaDataBaseInterface::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* QDesignerMetaDataBaseInterface_QBaseMetaObject(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignermetadatabaseinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerMetaDataBaseInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnMetaObject(const QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerMetaDataBaseInterface_QBaseMetacast(QDesignerMetaDataBaseInterface* self, const char* param1) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Metacast_IsBase(true);
        return vqdesignermetadatabaseinterface->qt_metacast(param1);
    } else {
        return self->QDesignerMetaDataBaseInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnMetacast(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerMetaDataBaseInterface_QBaseMetacall(QDesignerMetaDataBaseInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Metacall_IsBase(true);
        return vqdesignermetadatabaseinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerMetaDataBaseInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnMetacall(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_QBaseItem(const QDesignerMetaDataBaseInterface* self, QObject* object) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Item_IsBase(true);
        return vqdesignermetadatabaseinterface->item(object);
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->item(object);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnItem(const QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Item_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Item_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_QBaseAdd(QDesignerMetaDataBaseInterface* self, QObject* object) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Add_IsBase(true);
        vqdesignermetadatabaseinterface->add(object);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->add(object);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnAdd(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Add_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Add_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_QBaseRemove(QDesignerMetaDataBaseInterface* self, QObject* object) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Remove_IsBase(true);
        vqdesignermetadatabaseinterface->remove(object);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->remove(object);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnRemove(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Remove_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Remove_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QObject* */ QDesignerMetaDataBaseInterface_QBaseObjects(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Objects_IsBase(true);
        QList<QObject*> _ret = vqdesignermetadatabaseinterface->objects();
        // Convert QList<> from C++ memory to manually-managed C memory
        QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QObject*> _ret = ((VirtualQDesignerMetaDataBaseInterface*)self)->objects();
        // Convert QList<> from C++ memory to manually-managed C memory
        QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size())));
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
void QDesignerMetaDataBaseInterface_OnObjects(const QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Objects_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Objects_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_QBaseCore(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Core_IsBase(true);
        return vqdesignermetadatabaseinterface->core();
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnCore(const QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Core_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Core_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerMetaDataBaseInterface_Event(QDesignerMetaDataBaseInterface* self, QEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return vqdesignermetadatabaseinterface->event(event);
    } else {
        return self->QDesignerMetaDataBaseInterface::event(event);
    }
}

// Base class handler implementation
bool QDesignerMetaDataBaseInterface_QBaseEvent(QDesignerMetaDataBaseInterface* self, QEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Event_IsBase(true);
        return vqdesignermetadatabaseinterface->event(event);
    } else {
        return self->QDesignerMetaDataBaseInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Event_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerMetaDataBaseInterface_EventFilter(QDesignerMetaDataBaseInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return vqdesignermetadatabaseinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerMetaDataBaseInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerMetaDataBaseInterface_QBaseEventFilter(QDesignerMetaDataBaseInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_EventFilter_IsBase(true);
        return vqdesignermetadatabaseinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerMetaDataBaseInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnEventFilter(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_TimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_QBaseTimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_TimerEvent_IsBase(true);
        vqdesignermetadatabaseinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnTimerEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_ChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->childEvent(event);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_QBaseChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_ChildEvent_IsBase(true);
        vqdesignermetadatabaseinterface->childEvent(event);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnChildEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_CustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->customEvent(event);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_QBaseCustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_CustomEvent_IsBase(true);
        vqdesignermetadatabaseinterface->customEvent(event);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnCustomEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_ConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_QBaseConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_ConnectNotify_IsBase(true);
        vqdesignermetadatabaseinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnConnectNotify(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_DisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_QBaseDisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_DisconnectNotify_IsBase(true);
        vqdesignermetadatabaseinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerMetaDataBaseInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnDisconnectNotify(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerMetaDataBaseInterface_Sender(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return vqdesignermetadatabaseinterface->sender();
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerMetaDataBaseInterface_QBaseSender(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Sender_IsBase(true);
        return vqdesignermetadatabaseinterface->sender();
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnSender(const QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerMetaDataBaseInterface_SenderSignalIndex(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return vqdesignermetadatabaseinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerMetaDataBaseInterface_QBaseSenderSignalIndex(const QDesignerMetaDataBaseInterface* self) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_SenderSignalIndex_IsBase(true);
        return vqdesignermetadatabaseinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnSenderSignalIndex(const QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerMetaDataBaseInterface_Receivers(const QDesignerMetaDataBaseInterface* self, const char* signal) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return vqdesignermetadatabaseinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerMetaDataBaseInterface_QBaseReceivers(const QDesignerMetaDataBaseInterface* self, const char* signal) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Receivers_IsBase(true);
        return vqdesignermetadatabaseinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnReceivers(const QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerMetaDataBaseInterface_IsSignalConnected(const QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        return vqdesignermetadatabaseinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerMetaDataBaseInterface_QBaseIsSignalConnected(const QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_IsSignalConnected_IsBase(true);
        return vqdesignermetadatabaseinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerMetaDataBaseInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnIsSignalConnected(const QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self));
    if (vqdesignermetadatabaseinterface && vqdesignermetadatabaseinterface->isVirtualQDesignerMetaDataBaseInterface) {
        vqdesignermetadatabaseinterface->setQDesignerMetaDataBaseInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_IsSignalConnected_Callback>(slot));
    }
}

void QDesignerMetaDataBaseInterface_Delete(QDesignerMetaDataBaseInterface* self) {
    delete self;
}
