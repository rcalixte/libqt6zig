#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QDir>
#include <QEvent>
#include <QIODevice>
#include <QLayout>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUiLoader>
#include <QWidget>
#include <quiloader.h>
#include "libquiloader.h"
#include "libquiloader.hxx"

QUiLoader* QUiLoader_new() {
    return new VirtualQUiLoader();
}

QUiLoader* QUiLoader_new2(QObject* parent) {
    return new VirtualQUiLoader(parent);
}

QMetaObject* QUiLoader_MetaObject(const QUiLoader* self) {
    return (QMetaObject*)self->metaObject();
}

void* QUiLoader_Metacast(QUiLoader* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QUiLoader_Metacall(QUiLoader* self, int param1, int param2, void** param3) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQUiLoader*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_list /* of libqt_string */ QUiLoader_PluginPaths(const QUiLoader* self) {
    QList<QString> _ret = self->pluginPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QUiLoader_ClearPluginPaths(QUiLoader* self) {
    self->clearPluginPaths();
}

void QUiLoader_AddPluginPath(QUiLoader* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->addPluginPath(path_QString);
}

QWidget* QUiLoader_Load(QUiLoader* self, QIODevice* device) {
    return self->load(device);
}

libqt_list /* of libqt_string */ QUiLoader_AvailableWidgets(const QUiLoader* self) {
    QList<QString> _ret = self->availableWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QUiLoader_AvailableLayouts(const QUiLoader* self) {
    QList<QString> _ret = self->availableLayouts();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QWidget* QUiLoader_CreateWidget(QUiLoader* self, const libqt_string className, QWidget* parent, const libqt_string name) {
    QString className_QString = QString::fromUtf8(className.data, className.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return self->createWidget(className_QString, parent, name_QString);
    } else {
        return ((VirtualQUiLoader*)self)->createWidget(className_QString, parent, name_QString);
    }
}

QLayout* QUiLoader_CreateLayout(QUiLoader* self, const libqt_string className, QObject* parent, const libqt_string name) {
    QString className_QString = QString::fromUtf8(className.data, className.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return self->createLayout(className_QString, parent, name_QString);
    } else {
        return ((VirtualQUiLoader*)self)->createLayout(className_QString, parent, name_QString);
    }
}

QActionGroup* QUiLoader_CreateActionGroup(QUiLoader* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return self->createActionGroup(parent, name_QString);
    } else {
        return ((VirtualQUiLoader*)self)->createActionGroup(parent, name_QString);
    }
}

QAction* QUiLoader_CreateAction(QUiLoader* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return self->createAction(parent, name_QString);
    } else {
        return ((VirtualQUiLoader*)self)->createAction(parent, name_QString);
    }
}

void QUiLoader_SetWorkingDirectory(QUiLoader* self, const QDir* dir) {
    self->setWorkingDirectory(*dir);
}

QDir* QUiLoader_WorkingDirectory(const QUiLoader* self) {
    return new QDir(self->workingDirectory());
}

void QUiLoader_SetLanguageChangeEnabled(QUiLoader* self, bool enabled) {
    self->setLanguageChangeEnabled(enabled);
}

bool QUiLoader_IsLanguageChangeEnabled(const QUiLoader* self) {
    return self->isLanguageChangeEnabled();
}

void QUiLoader_SetTranslationEnabled(QUiLoader* self, bool enabled) {
    self->setTranslationEnabled(enabled);
}

bool QUiLoader_IsTranslationEnabled(const QUiLoader* self) {
    return self->isTranslationEnabled();
}

libqt_string QUiLoader_ErrorString(const QUiLoader* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* QUiLoader_Load2(QUiLoader* self, QIODevice* device, QWidget* parentWidget) {
    return self->load(device, parentWidget);
}

// Base class handler implementation
int QUiLoader_QBaseMetacall(QUiLoader* self, int param1, int param2, void** param3) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_Metacall_IsBase(true);
        return vquiloader->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QUiLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnMetacall(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_Metacall_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QUiLoader_QBaseCreateWidget(QUiLoader* self, const libqt_string className, QWidget* parent, const libqt_string name) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    QString className_QString = QString::fromUtf8(className.data, className.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CreateWidget_IsBase(true);
        return vquiloader->createWidget(className_QString, parent, name_QString);
    } else {
        return self->QUiLoader::createWidget(className_QString, parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCreateWidget(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CreateWidget_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_CreateWidget_Callback>(slot));
    }
}

// Base class handler implementation
QLayout* QUiLoader_QBaseCreateLayout(QUiLoader* self, const libqt_string className, QObject* parent, const libqt_string name) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    QString className_QString = QString::fromUtf8(className.data, className.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CreateLayout_IsBase(true);
        return vquiloader->createLayout(className_QString, parent, name_QString);
    } else {
        return self->QUiLoader::createLayout(className_QString, parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCreateLayout(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CreateLayout_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_CreateLayout_Callback>(slot));
    }
}

// Base class handler implementation
QActionGroup* QUiLoader_QBaseCreateActionGroup(QUiLoader* self, QObject* parent, const libqt_string name) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CreateActionGroup_IsBase(true);
        return vquiloader->createActionGroup(parent, name_QString);
    } else {
        return self->QUiLoader::createActionGroup(parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCreateActionGroup(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CreateActionGroup_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_CreateActionGroup_Callback>(slot));
    }
}

// Base class handler implementation
QAction* QUiLoader_QBaseCreateAction(QUiLoader* self, QObject* parent, const libqt_string name) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CreateAction_IsBase(true);
        return vquiloader->createAction(parent, name_QString);
    } else {
        return self->QUiLoader::createAction(parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCreateAction(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CreateAction_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_CreateAction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUiLoader_Event(QUiLoader* self, QEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return vquiloader->event(event);
    } else {
        return self->QUiLoader::event(event);
    }
}

// Base class handler implementation
bool QUiLoader_QBaseEvent(QUiLoader* self, QEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_Event_IsBase(true);
        return vquiloader->event(event);
    } else {
        return self->QUiLoader::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnEvent(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_Event_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUiLoader_EventFilter(QUiLoader* self, QObject* watched, QEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return vquiloader->eventFilter(watched, event);
    } else {
        return self->QUiLoader::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QUiLoader_QBaseEventFilter(QUiLoader* self, QObject* watched, QEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_EventFilter_IsBase(true);
        return vquiloader->eventFilter(watched, event);
    } else {
        return self->QUiLoader::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnEventFilter(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_EventFilter_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QUiLoader_TimerEvent(QUiLoader* self, QTimerEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->timerEvent(event);
    } else {
        ((VirtualQUiLoader*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QUiLoader_QBaseTimerEvent(QUiLoader* self, QTimerEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_TimerEvent_IsBase(true);
        vquiloader->timerEvent(event);
    } else {
        ((VirtualQUiLoader*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnTimerEvent(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_TimerEvent_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUiLoader_ChildEvent(QUiLoader* self, QChildEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->childEvent(event);
    } else {
        ((VirtualQUiLoader*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QUiLoader_QBaseChildEvent(QUiLoader* self, QChildEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_ChildEvent_IsBase(true);
        vquiloader->childEvent(event);
    } else {
        ((VirtualQUiLoader*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnChildEvent(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_ChildEvent_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUiLoader_CustomEvent(QUiLoader* self, QEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->customEvent(event);
    } else {
        ((VirtualQUiLoader*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QUiLoader_QBaseCustomEvent(QUiLoader* self, QEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CustomEvent_IsBase(true);
        vquiloader->customEvent(event);
    } else {
        ((VirtualQUiLoader*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCustomEvent(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_CustomEvent_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUiLoader_ConnectNotify(QUiLoader* self, const QMetaMethod* signal) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->connectNotify(*signal);
    } else {
        ((VirtualQUiLoader*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QUiLoader_QBaseConnectNotify(QUiLoader* self, const QMetaMethod* signal) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_ConnectNotify_IsBase(true);
        vquiloader->connectNotify(*signal);
    } else {
        ((VirtualQUiLoader*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnConnectNotify(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_ConnectNotify_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUiLoader_DisconnectNotify(QUiLoader* self, const QMetaMethod* signal) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->disconnectNotify(*signal);
    } else {
        ((VirtualQUiLoader*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QUiLoader_QBaseDisconnectNotify(QUiLoader* self, const QMetaMethod* signal) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_DisconnectNotify_IsBase(true);
        vquiloader->disconnectNotify(*signal);
    } else {
        ((VirtualQUiLoader*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnDisconnectNotify(QUiLoader* self, intptr_t slot) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_DisconnectNotify_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QUiLoader_Sender(const QUiLoader* self) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return vquiloader->sender();
    } else {
        return ((VirtualQUiLoader*)self)->sender();
    }
}

// Base class handler implementation
QObject* QUiLoader_QBaseSender(const QUiLoader* self) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_Sender_IsBase(true);
        return vquiloader->sender();
    } else {
        return ((VirtualQUiLoader*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnSender(const QUiLoader* self, intptr_t slot) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_Sender_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QUiLoader_SenderSignalIndex(const QUiLoader* self) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return vquiloader->senderSignalIndex();
    } else {
        return ((VirtualQUiLoader*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QUiLoader_QBaseSenderSignalIndex(const QUiLoader* self) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_SenderSignalIndex_IsBase(true);
        return vquiloader->senderSignalIndex();
    } else {
        return ((VirtualQUiLoader*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnSenderSignalIndex(const QUiLoader* self, intptr_t slot) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_SenderSignalIndex_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QUiLoader_Receivers(const QUiLoader* self, const char* signal) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return vquiloader->receivers(signal);
    } else {
        return ((VirtualQUiLoader*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QUiLoader_QBaseReceivers(const QUiLoader* self, const char* signal) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_Receivers_IsBase(true);
        return vquiloader->receivers(signal);
    } else {
        return ((VirtualQUiLoader*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnReceivers(const QUiLoader* self, intptr_t slot) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_Receivers_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUiLoader_IsSignalConnected(const QUiLoader* self, const QMetaMethod* signal) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        return vquiloader->isSignalConnected(*signal);
    } else {
        return ((VirtualQUiLoader*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QUiLoader_QBaseIsSignalConnected(const QUiLoader* self, const QMetaMethod* signal) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_IsSignalConnected_IsBase(true);
        return vquiloader->isSignalConnected(*signal);
    } else {
        return ((VirtualQUiLoader*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnIsSignalConnected(const QUiLoader* self, intptr_t slot) {
    auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self));
    if (vquiloader && vquiloader->isVirtualQUiLoader) {
        vquiloader->setQUiLoader_IsSignalConnected_Callback(reinterpret_cast<VirtualQUiLoader::QUiLoader_IsSignalConnected_Callback>(slot));
    }
}

void QUiLoader_Delete(QUiLoader* self) {
    delete self;
}
