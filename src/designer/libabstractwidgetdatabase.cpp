#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerWidgetDataBaseInterface>
#include <QDesignerWidgetDataBaseItemInterface>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <abstractwidgetdatabase.h>
#include "libabstractwidgetdatabase.h"
#include "libabstractwidgetdatabase.hxx"

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseItemInterface_new() {
    return new VirtualQDesignerWidgetDataBaseItemInterface();
}

libqt_string QDesignerWidgetDataBaseItemInterface_Name(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        QString _ret = vqdesignerwidgetdatabaseiteminterface->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->name();
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

void QDesignerWidgetDataBaseItemInterface_SetName(QDesignerWidgetDataBaseItemInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setName(name_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setName(name_QString);
    }
}

libqt_string QDesignerWidgetDataBaseItemInterface_Group(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        QString _ret = vqdesignerwidgetdatabaseiteminterface->group();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->group();
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

void QDesignerWidgetDataBaseItemInterface_SetGroup(QDesignerWidgetDataBaseItemInterface* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setGroup(group_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setGroup(group_QString);
    }
}

libqt_string QDesignerWidgetDataBaseItemInterface_ToolTip(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        QString _ret = vqdesignerwidgetdatabaseiteminterface->toolTip();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->toolTip();
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

void QDesignerWidgetDataBaseItemInterface_SetToolTip(QDesignerWidgetDataBaseItemInterface* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setToolTip(toolTip_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setToolTip(toolTip_QString);
    }
}

libqt_string QDesignerWidgetDataBaseItemInterface_WhatsThis(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        QString _ret = vqdesignerwidgetdatabaseiteminterface->whatsThis();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->whatsThis();
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

void QDesignerWidgetDataBaseItemInterface_SetWhatsThis(QDesignerWidgetDataBaseItemInterface* self, const libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setWhatsThis(whatsThis_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setWhatsThis(whatsThis_QString);
    }
}

libqt_string QDesignerWidgetDataBaseItemInterface_IncludeFile(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        QString _ret = vqdesignerwidgetdatabaseiteminterface->includeFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->includeFile();
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

void QDesignerWidgetDataBaseItemInterface_SetIncludeFile(QDesignerWidgetDataBaseItemInterface* self, const libqt_string includeFile) {
    QString includeFile_QString = QString::fromUtf8(includeFile.data, includeFile.len);
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setIncludeFile(includeFile_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setIncludeFile(includeFile_QString);
    }
}

QIcon* QDesignerWidgetDataBaseItemInterface_Icon(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        return new QIcon(vqdesignerwidgetdatabaseiteminterface->icon());
    } else {
        return new QIcon(((VirtualQDesignerWidgetDataBaseItemInterface*)self)->icon());
    }
}

void QDesignerWidgetDataBaseItemInterface_SetIcon(QDesignerWidgetDataBaseItemInterface* self, const QIcon* icon) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setIcon(*icon);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setIcon(*icon);
    }
}

bool QDesignerWidgetDataBaseItemInterface_IsCompat(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        return vqdesignerwidgetdatabaseiteminterface->isCompat();
    } else {
        return ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->isCompat();
    }
}

void QDesignerWidgetDataBaseItemInterface_SetCompat(QDesignerWidgetDataBaseItemInterface* self, bool compat) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setCompat(compat);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setCompat(compat);
    }
}

bool QDesignerWidgetDataBaseItemInterface_IsContainer(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        return vqdesignerwidgetdatabaseiteminterface->isContainer();
    } else {
        return ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->isContainer();
    }
}

void QDesignerWidgetDataBaseItemInterface_SetContainer(QDesignerWidgetDataBaseItemInterface* self, bool container) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setContainer(container);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setContainer(container);
    }
}

bool QDesignerWidgetDataBaseItemInterface_IsCustom(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        return vqdesignerwidgetdatabaseiteminterface->isCustom();
    } else {
        return ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->isCustom();
    }
}

void QDesignerWidgetDataBaseItemInterface_SetCustom(QDesignerWidgetDataBaseItemInterface* self, bool custom) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setCustom(custom);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setCustom(custom);
    }
}

libqt_string QDesignerWidgetDataBaseItemInterface_PluginPath(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        QString _ret = vqdesignerwidgetdatabaseiteminterface->pluginPath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->pluginPath();
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

void QDesignerWidgetDataBaseItemInterface_SetPluginPath(QDesignerWidgetDataBaseItemInterface* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setPluginPath(path_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setPluginPath(path_QString);
    }
}

bool QDesignerWidgetDataBaseItemInterface_IsPromoted(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        return vqdesignerwidgetdatabaseiteminterface->isPromoted();
    } else {
        return ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->isPromoted();
    }
}

void QDesignerWidgetDataBaseItemInterface_SetPromoted(QDesignerWidgetDataBaseItemInterface* self, bool b) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setPromoted(b);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setPromoted(b);
    }
}

libqt_string QDesignerWidgetDataBaseItemInterface_Extends(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        QString _ret = vqdesignerwidgetdatabaseiteminterface->extends();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->extends();
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

void QDesignerWidgetDataBaseItemInterface_SetExtends(QDesignerWidgetDataBaseItemInterface* self, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setExtends(s_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setExtends(s_QString);
    }
}

void QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, const libqt_list /* of QVariant* */ list) {
    QList<QVariant> list_QList;
    list_QList.reserve(list.len);
    QVariant** list_arr = static_cast<QVariant**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setDefaultPropertyValues(list_QList);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setDefaultPropertyValues(list_QList);
    }
}

libqt_list /* of QVariant* */ QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        QList<QVariant> _ret = vqdesignerwidgetdatabaseiteminterface->defaultPropertyValues();
        // Convert QList<> from C++ memory to manually-managed C memory
        QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QVariant(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QVariant> _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->defaultPropertyValues();
        // Convert QList<> from C++ memory to manually-managed C memory
        QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QVariant(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_string QDesignerWidgetDataBaseItemInterface_SuperName(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_Name_IsBase(true);
        QString _ret = vqdesignerwidgetdatabaseiteminterface->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->name();
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
void QDesignerWidgetDataBaseItemInterface_OnName(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_Name_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_Name_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetName(QDesignerWidgetDataBaseItemInterface* self, const libqt_string name) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetName_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setName(name_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetName(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetName_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetName_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerWidgetDataBaseItemInterface_SuperGroup(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_Group_IsBase(true);
        QString _ret = vqdesignerwidgetdatabaseiteminterface->group();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->group();
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
void QDesignerWidgetDataBaseItemInterface_OnGroup(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_Group_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_Group_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetGroup(QDesignerWidgetDataBaseItemInterface* self, const libqt_string group) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetGroup_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setGroup(group_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setGroup(group_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetGroup(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetGroup_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetGroup_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerWidgetDataBaseItemInterface_SuperToolTip(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_ToolTip_IsBase(true);
        QString _ret = vqdesignerwidgetdatabaseiteminterface->toolTip();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->toolTip();
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
void QDesignerWidgetDataBaseItemInterface_OnToolTip(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_ToolTip_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_ToolTip_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetToolTip(QDesignerWidgetDataBaseItemInterface* self, const libqt_string toolTip) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetToolTip_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setToolTip(toolTip_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setToolTip(toolTip_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetToolTip(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetToolTip_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetToolTip_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerWidgetDataBaseItemInterface_SuperWhatsThis(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_WhatsThis_IsBase(true);
        QString _ret = vqdesignerwidgetdatabaseiteminterface->whatsThis();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->whatsThis();
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
void QDesignerWidgetDataBaseItemInterface_OnWhatsThis(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_WhatsThis_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_WhatsThis_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetWhatsThis(QDesignerWidgetDataBaseItemInterface* self, const libqt_string whatsThis) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetWhatsThis_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setWhatsThis(whatsThis_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setWhatsThis(whatsThis_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetWhatsThis(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetWhatsThis_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetWhatsThis_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerWidgetDataBaseItemInterface_SuperIncludeFile(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IncludeFile_IsBase(true);
        QString _ret = vqdesignerwidgetdatabaseiteminterface->includeFile();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->includeFile();
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
void QDesignerWidgetDataBaseItemInterface_OnIncludeFile(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IncludeFile_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IncludeFile_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetIncludeFile(QDesignerWidgetDataBaseItemInterface* self, const libqt_string includeFile) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    QString includeFile_QString = QString::fromUtf8(includeFile.data, includeFile.len);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetIncludeFile_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setIncludeFile(includeFile_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setIncludeFile(includeFile_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetIncludeFile(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetIncludeFile_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetIncludeFile_Callback>(slot));
    }
}

// Base class handler implementation
QIcon* QDesignerWidgetDataBaseItemInterface_SuperIcon(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_Icon_IsBase(true);
        return new QIcon(vqdesignerwidgetdatabaseiteminterface->icon());
    } else {
        return new QIcon(((VirtualQDesignerWidgetDataBaseItemInterface*)self)->icon());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIcon(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_Icon_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_Icon_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetIcon(QDesignerWidgetDataBaseItemInterface* self, const QIcon* icon) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetIcon_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setIcon(*icon);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setIcon(*icon);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetIcon(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetIcon_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetIcon_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerWidgetDataBaseItemInterface_SuperIsCompat(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IsCompat_IsBase(true);
        return vqdesignerwidgetdatabaseiteminterface->isCompat();
    } else {
        return ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->isCompat();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIsCompat(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IsCompat_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IsCompat_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetCompat(QDesignerWidgetDataBaseItemInterface* self, bool compat) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetCompat_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setCompat(compat);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setCompat(compat);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetCompat(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetCompat_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetCompat_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerWidgetDataBaseItemInterface_SuperIsContainer(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IsContainer_IsBase(true);
        return vqdesignerwidgetdatabaseiteminterface->isContainer();
    } else {
        return ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->isContainer();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIsContainer(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IsContainer_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IsContainer_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetContainer(QDesignerWidgetDataBaseItemInterface* self, bool container) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetContainer_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setContainer(container);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setContainer(container);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetContainer(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetContainer_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetContainer_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerWidgetDataBaseItemInterface_SuperIsCustom(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IsCustom_IsBase(true);
        return vqdesignerwidgetdatabaseiteminterface->isCustom();
    } else {
        return ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->isCustom();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIsCustom(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IsCustom_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IsCustom_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetCustom(QDesignerWidgetDataBaseItemInterface* self, bool custom) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetCustom_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setCustom(custom);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setCustom(custom);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetCustom(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetCustom_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetCustom_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerWidgetDataBaseItemInterface_SuperPluginPath(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_PluginPath_IsBase(true);
        QString _ret = vqdesignerwidgetdatabaseiteminterface->pluginPath();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->pluginPath();
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
void QDesignerWidgetDataBaseItemInterface_OnPluginPath(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_PluginPath_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_PluginPath_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetPluginPath(QDesignerWidgetDataBaseItemInterface* self, const libqt_string path) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetPluginPath_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setPluginPath(path_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setPluginPath(path_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetPluginPath(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetPluginPath_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetPluginPath_Callback>(slot));
    }
}

// Base class handler implementation
bool QDesignerWidgetDataBaseItemInterface_SuperIsPromoted(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IsPromoted_IsBase(true);
        return vqdesignerwidgetdatabaseiteminterface->isPromoted();
    } else {
        return ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->isPromoted();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnIsPromoted(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_IsPromoted_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_IsPromoted_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetPromoted(QDesignerWidgetDataBaseItemInterface* self, bool b) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetPromoted_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setPromoted(b);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setPromoted(b);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetPromoted(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetPromoted_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetPromoted_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QDesignerWidgetDataBaseItemInterface_SuperExtends(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_Extends_IsBase(true);
        QString _ret = vqdesignerwidgetdatabaseiteminterface->extends();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->extends();
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
void QDesignerWidgetDataBaseItemInterface_OnExtends(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_Extends_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_Extends_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetExtends(QDesignerWidgetDataBaseItemInterface* self, const libqt_string s) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    QString s_QString = QString::fromUtf8(s.data, s.len);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetExtends_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setExtends(s_QString);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setExtends(s_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetExtends(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetExtends_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetExtends_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseItemInterface_SuperSetDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, const libqt_list /* of QVariant* */ list) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    QList<QVariant> list_QList;
    list_QList.reserve(list.len);
    QVariant** list_arr = static_cast<QVariant**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_IsBase(true);
        vqdesignerwidgetdatabaseiteminterface->setDefaultPropertyValues(list_QList);
    } else {
        ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->setDefaultPropertyValues(list_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnSetDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = dynamic_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(self);
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QVariant* */ QDesignerWidgetDataBaseItemInterface_SuperDefaultPropertyValues(const QDesignerWidgetDataBaseItemInterface* self) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_IsBase(true);
        QList<QVariant> _ret = vqdesignerwidgetdatabaseiteminterface->defaultPropertyValues();
        // Convert QList<> from C++ memory to manually-managed C memory
        QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QVariant(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QVariant> _ret = ((VirtualQDesignerWidgetDataBaseItemInterface*)self)->defaultPropertyValues();
        // Convert QList<> from C++ memory to manually-managed C memory
        QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QVariant(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseItemInterface_OnDefaultPropertyValues(const QDesignerWidgetDataBaseItemInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseiteminterface = const_cast<VirtualQDesignerWidgetDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseItemInterface*>(self));
    if (vqdesignerwidgetdatabaseiteminterface && vqdesignerwidgetdatabaseiteminterface->isVirtualQDesignerWidgetDataBaseItemInterface) {
        vqdesignerwidgetdatabaseiteminterface->setQDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseItemInterface::QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_Callback>(slot));
    }
}

void QDesignerWidgetDataBaseItemInterface_Delete(QDesignerWidgetDataBaseItemInterface* self) {
    delete self;
}

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new() {
    return new VirtualQDesignerWidgetDataBaseInterface();
}

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new2(QObject* parent) {
    return new VirtualQDesignerWidgetDataBaseInterface(parent);
}

QMetaObject* QDesignerWidgetDataBaseInterface_MetaObject(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQDesignerWidgetDataBaseInterface*)self)->metaObject();
    }
}

void* QDesignerWidgetDataBaseInterface_Metacast(QDesignerWidgetDataBaseInterface* self, const char* param1) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->qt_metacast(param1);
    }
}

int QDesignerWidgetDataBaseInterface_Metacall(QDesignerWidgetDataBaseInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QDesignerWidgetDataBaseInterface_Count(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return self->count();
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->count();
    }
}

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_Item(const QDesignerWidgetDataBaseInterface* self, int index) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return self->item(static_cast<int>(index));
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->item(static_cast<int>(index));
    }
}

int QDesignerWidgetDataBaseInterface_IndexOf(const QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return self->indexOf(item);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->indexOf(item);
    }
}

void QDesignerWidgetDataBaseInterface_Insert(QDesignerWidgetDataBaseInterface* self, int index, QDesignerWidgetDataBaseItemInterface* item) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        self->insert(static_cast<int>(index), item);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->insert(static_cast<int>(index), item);
    }
}

void QDesignerWidgetDataBaseInterface_Append(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        self->append(item);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->append(item);
    }
}

int QDesignerWidgetDataBaseInterface_IndexOfObject(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return self->indexOfObject(object, resolveName);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->indexOfObject(object, resolveName);
    }
}

int QDesignerWidgetDataBaseInterface_IndexOfClassName(const QDesignerWidgetDataBaseInterface* self, const libqt_string className, bool resolveName) {
    QString className_QString = QString::fromUtf8(className.data, className.len);
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return self->indexOfClassName(className_QString, resolveName);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->indexOfClassName(className_QString, resolveName);
    }
}

QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_Core(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return self->core();
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->core();
    }
}

bool QDesignerWidgetDataBaseInterface_IsContainer(const QDesignerWidgetDataBaseInterface* self, QObject* object) {
    return self->isContainer(object);
}

bool QDesignerWidgetDataBaseInterface_IsCustom(const QDesignerWidgetDataBaseInterface* self, QObject* object) {
    return self->isCustom(object);
}

void QDesignerWidgetDataBaseInterface_Changed(QDesignerWidgetDataBaseInterface* self) {
    self->changed();
}

void QDesignerWidgetDataBaseInterface_Connect_Changed(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerWidgetDataBaseInterface*) = reinterpret_cast<void (*)(QDesignerWidgetDataBaseInterface*)>(slot);
    QDesignerWidgetDataBaseInterface::connect(self, &QDesignerWidgetDataBaseInterface::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool QDesignerWidgetDataBaseInterface_IsContainer2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
    return self->isContainer(object, resolveName);
}

bool QDesignerWidgetDataBaseInterface_IsCustom2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
    return self->isCustom(object, resolveName);
}

// Base class handler implementation
QMetaObject* QDesignerWidgetDataBaseInterface_SuperMetaObject(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_MetaObject_IsBase(true);
        return (QMetaObject*)vqdesignerwidgetdatabaseinterface->metaObject();
    } else {
        return (QMetaObject*)self->QDesignerWidgetDataBaseInterface::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnMetaObject(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_MetaObject_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QDesignerWidgetDataBaseInterface_SuperMetacast(QDesignerWidgetDataBaseInterface* self, const char* param1) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Metacast_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->qt_metacast(param1);
    } else {
        return self->QDesignerWidgetDataBaseInterface::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnMetacast(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Metacast_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperMetacall(QDesignerWidgetDataBaseInterface* self, int param1, int param2, void** param3) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Metacall_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QDesignerWidgetDataBaseInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnMetacall(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Metacall_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperCount(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Count_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->count();
    } else {
        return self->QDesignerWidgetDataBaseInterface::count();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnCount(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Count_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Count_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_SuperItem(const QDesignerWidgetDataBaseInterface* self, int index) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Item_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->item(static_cast<int>(index));
    } else {
        return self->QDesignerWidgetDataBaseInterface::item(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnItem(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Item_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Item_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperIndexOf(const QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_IndexOf_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->indexOf(item);
    } else {
        return self->QDesignerWidgetDataBaseInterface::indexOf(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnIndexOf(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_IndexOf_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_IndexOf_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperInsert(QDesignerWidgetDataBaseInterface* self, int index, QDesignerWidgetDataBaseItemInterface* item) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Insert_IsBase(true);
        vqdesignerwidgetdatabaseinterface->insert(static_cast<int>(index), item);
    } else {
        self->QDesignerWidgetDataBaseInterface::insert(static_cast<int>(index), item);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnInsert(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Insert_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Insert_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperAppend(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Append_IsBase(true);
        vqdesignerwidgetdatabaseinterface->append(item);
    } else {
        self->QDesignerWidgetDataBaseInterface::append(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnAppend(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Append_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Append_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperIndexOfObject(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_IndexOfObject_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->indexOfObject(object, resolveName);
    } else {
        return self->QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnIndexOfObject(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_IndexOfObject_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_IndexOfObject_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperIndexOfClassName(const QDesignerWidgetDataBaseInterface* self, const libqt_string className, bool resolveName) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    QString className_QString = QString::fromUtf8(className.data, className.len);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_IndexOfClassName_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->indexOfClassName(className_QString, resolveName);
    } else {
        return self->QDesignerWidgetDataBaseInterface::indexOfClassName(className_QString, resolveName);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnIndexOfClassName(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_IndexOfClassName_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_IndexOfClassName_Callback>(slot));
    }
}

// Base class handler implementation
QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_SuperCore(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Core_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->core();
    } else {
        return self->QDesignerWidgetDataBaseInterface::core();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnCore(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Core_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Core_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetDataBaseInterface_Event(QDesignerWidgetDataBaseInterface* self, QEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return vqdesignerwidgetdatabaseinterface->event(event);
    } else {
        return self->QDesignerWidgetDataBaseInterface::event(event);
    }
}

// Base class handler implementation
bool QDesignerWidgetDataBaseInterface_SuperEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Event_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->event(event);
    } else {
        return self->QDesignerWidgetDataBaseInterface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnEvent(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Event_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetDataBaseInterface_EventFilter(QDesignerWidgetDataBaseInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return vqdesignerwidgetdatabaseinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDesignerWidgetDataBaseInterface_SuperEventFilter(QDesignerWidgetDataBaseInterface* self, QObject* watched, QEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_EventFilter_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->eventFilter(watched, event);
    } else {
        return self->QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnEventFilter(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_EventFilter_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_TimerEvent(QDesignerWidgetDataBaseInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperTimerEvent(QDesignerWidgetDataBaseInterface* self, QTimerEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_TimerEvent_IsBase(true);
        vqdesignerwidgetdatabaseinterface->timerEvent(event);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnTimerEvent(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_TimerEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_ChildEvent(QDesignerWidgetDataBaseInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->childEvent(event);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperChildEvent(QDesignerWidgetDataBaseInterface* self, QChildEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_ChildEvent_IsBase(true);
        vqdesignerwidgetdatabaseinterface->childEvent(event);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnChildEvent(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_ChildEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_CustomEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->customEvent(event);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperCustomEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_CustomEvent_IsBase(true);
        vqdesignerwidgetdatabaseinterface->customEvent(event);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnCustomEvent(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_CustomEvent_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_ConnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperConnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_ConnectNotify_IsBase(true);
        vqdesignerwidgetdatabaseinterface->connectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnConnectNotify(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_ConnectNotify_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDesignerWidgetDataBaseInterface_DisconnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDesignerWidgetDataBaseInterface_SuperDisconnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_DisconnectNotify_IsBase(true);
        vqdesignerwidgetdatabaseinterface->disconnectNotify(*signal);
    } else {
        ((VirtualQDesignerWidgetDataBaseInterface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnDisconnectNotify(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = dynamic_cast<VirtualQDesignerWidgetDataBaseInterface*>(self);
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_DisconnectNotify_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDesignerWidgetDataBaseInterface_Sender(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return vqdesignerwidgetdatabaseinterface->sender();
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDesignerWidgetDataBaseInterface_SuperSender(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Sender_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->sender();
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnSender(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Sender_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetDataBaseInterface_SenderSignalIndex(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return vqdesignerwidgetdatabaseinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperSenderSignalIndex(const QDesignerWidgetDataBaseInterface* self) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_SenderSignalIndex_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->senderSignalIndex();
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnSenderSignalIndex(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDesignerWidgetDataBaseInterface_Receivers(const QDesignerWidgetDataBaseInterface* self, const char* signal) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return vqdesignerwidgetdatabaseinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDesignerWidgetDataBaseInterface_SuperReceivers(const QDesignerWidgetDataBaseInterface* self, const char* signal) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Receivers_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->receivers(signal);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnReceivers(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_Receivers_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDesignerWidgetDataBaseInterface_IsSignalConnected(const QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        return vqdesignerwidgetdatabaseinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDesignerWidgetDataBaseInterface_SuperIsSignalConnected(const QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_IsSignalConnected_IsBase(true);
        return vqdesignerwidgetdatabaseinterface->isSignalConnected(*signal);
    } else {
        return ((VirtualQDesignerWidgetDataBaseInterface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerWidgetDataBaseInterface_OnIsSignalConnected(const QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
    auto* vqdesignerwidgetdatabaseinterface = const_cast<VirtualQDesignerWidgetDataBaseInterface*>(dynamic_cast<const VirtualQDesignerWidgetDataBaseInterface*>(self));
    if (vqdesignerwidgetdatabaseinterface && vqdesignerwidgetdatabaseinterface->isVirtualQDesignerWidgetDataBaseInterface) {
        vqdesignerwidgetdatabaseinterface->setQDesignerWidgetDataBaseInterface_IsSignalConnected_Callback(reinterpret_cast<VirtualQDesignerWidgetDataBaseInterface::QDesignerWidgetDataBaseInterface_IsSignalConnected_Callback>(slot));
    }
}

void QDesignerWidgetDataBaseInterface_Delete(QDesignerWidgetDataBaseInterface* self) {
    delete self;
}
