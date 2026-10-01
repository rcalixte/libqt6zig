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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QUiLoader_Tr(const char* s) {
    auto _ret = QUiLoader::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QUiLoader_PluginPaths(const QUiLoader* self) {
    QList<QString> _ret = self->pluginPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    return self->createWidget(className_QString, parent, name_QString);
}

QLayout* QUiLoader_CreateLayout(QUiLoader* self, const libqt_string className, QObject* parent, const libqt_string name) {
    QString className_QString = QString::fromUtf8(className.data, className.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->createLayout(className_QString, parent, name_QString);
}

QActionGroup* QUiLoader_CreateActionGroup(QUiLoader* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->createActionGroup(parent, name_QString);
}

QAction* QUiLoader_CreateAction(QUiLoader* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->createAction(parent, name_QString);
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
    auto _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUiLoader_Tr2(const char* s, const char* c) {
    auto _ret = QUiLoader::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUiLoader_Tr3(const char* s, const char* c, int n) {
    auto _ret = QUiLoader::tr(s, c, static_cast<int>(n));
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
QMetaObject* QUiLoader_SuperMetaObject(const QUiLoader* self) {
    return (QMetaObject*)self->QUiLoader::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnMetaObject(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self)))
        vquiloader->quiloader_metaobject_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QUiLoader_SuperMetacast(QUiLoader* self, const char* param1) {
    return self->QUiLoader::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnMetacast(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_metacast_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_Metacast_Callback>(slot);
}

// Base class handler implementation
int QUiLoader_SuperMetacall(QUiLoader* self, int param1, int param2, void** param3) {
    return self->QUiLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnMetacall(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_metacall_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_Metacall_Callback>(slot);
}

// Base class handler implementation
QWidget* QUiLoader_SuperCreateWidget(QUiLoader* self, const libqt_string className, QWidget* parent, const libqt_string name) {
    QString className_QString = QString::fromUtf8(className.data, className.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QUiLoader::createWidget(className_QString, parent, name_QString);
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCreateWidget(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_createwidget_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_CreateWidget_Callback>(slot);
}

// Base class handler implementation
QLayout* QUiLoader_SuperCreateLayout(QUiLoader* self, const libqt_string className, QObject* parent, const libqt_string name) {
    QString className_QString = QString::fromUtf8(className.data, className.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QUiLoader::createLayout(className_QString, parent, name_QString);
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCreateLayout(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_createlayout_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_CreateLayout_Callback>(slot);
}

// Base class handler implementation
QActionGroup* QUiLoader_SuperCreateActionGroup(QUiLoader* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QUiLoader::createActionGroup(parent, name_QString);
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCreateActionGroup(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_createactiongroup_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_CreateActionGroup_Callback>(slot);
}

// Base class handler implementation
QAction* QUiLoader_SuperCreateAction(QUiLoader* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->QUiLoader::createAction(parent, name_QString);
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCreateAction(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_createaction_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_CreateAction_Callback>(slot);
}

// Derived class handler implementation
bool QUiLoader_Event(QUiLoader* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QUiLoader_SuperEvent(QUiLoader* self, QEvent* event) {
    return self->QUiLoader::event(event);
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnEvent(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_event_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_Event_Callback>(slot);
}

// Derived class handler implementation
bool QUiLoader_EventFilter(QUiLoader* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QUiLoader_SuperEventFilter(QUiLoader* self, QObject* watched, QEvent* event) {
    return self->QUiLoader::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnEventFilter(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_eventfilter_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QUiLoader_TimerEvent(QUiLoader* self, QTimerEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader) {
        vquiloader->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUiLoader::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUiLoader_SuperTimerEvent(QUiLoader* self, QTimerEvent* event) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self)) {
        vquiloader->QUiLoader::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QUiLoader::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnTimerEvent(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_timerevent_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QUiLoader_ChildEvent(QUiLoader* self, QChildEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader) {
        vquiloader->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUiLoader::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUiLoader_SuperChildEvent(QUiLoader* self, QChildEvent* event) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self)) {
        vquiloader->QUiLoader::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QUiLoader::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnChildEvent(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_childevent_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QUiLoader_CustomEvent(QUiLoader* self, QEvent* event) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader) {
        vquiloader->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUiLoader::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUiLoader_SuperCustomEvent(QUiLoader* self, QEvent* event) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self)) {
        vquiloader->QUiLoader::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QUiLoader::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnCustomEvent(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_customevent_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QUiLoader_ConnectNotify(QUiLoader* self, const QMetaMethod* signal) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader) {
        vquiloader->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QUiLoader::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QUiLoader_SuperConnectNotify(QUiLoader* self, const QMetaMethod* signal) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self)) {
        vquiloader->QUiLoader::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QUiLoader::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnConnectNotify(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_connectnotify_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QUiLoader_DisconnectNotify(QUiLoader* self, const QMetaMethod* signal) {
    auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self);
    if (vquiloader) {
        vquiloader->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QUiLoader::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QUiLoader_SuperDisconnectNotify(QUiLoader* self, const QMetaMethod* signal) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self)) {
        vquiloader->QUiLoader::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QUiLoader::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUiLoader_OnDisconnectNotify(QUiLoader* self, intptr_t slot) {
    if (auto* vquiloader = dynamic_cast<VirtualQUiLoader*>(self))
        vquiloader->quiloader_disconnectnotify_callback = reinterpret_cast<VirtualQUiLoader::QUiLoader_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QUiLoader_Sender(const QUiLoader* self) {
    if (auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self))) {
        return vquiloader->VirtualQUiLoader::sender();
    } else
        qFatal("Error: Protected method QUiLoader::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QUiLoader_SenderSignalIndex(const QUiLoader* self) {
    if (auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self))) {
        return vquiloader->VirtualQUiLoader::senderSignalIndex();
    } else
        qFatal("Error: Protected method QUiLoader::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QUiLoader_Receivers(const QUiLoader* self, const char* signal) {
    if (auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self))) {
        return vquiloader->VirtualQUiLoader::receivers(signal);
    } else
        qFatal("Error: Protected method QUiLoader::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QUiLoader_IsSignalConnected(const QUiLoader* self, const QMetaMethod* signal) {
    if (auto* vquiloader = const_cast<VirtualQUiLoader*>(dynamic_cast<const VirtualQUiLoader*>(self))) {
        return vquiloader->VirtualQUiLoader::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QUiLoader::isSignalConnected called without a directly constructed type");
}

void QUiLoader_Delete(QUiLoader* self) {
    delete self;
}
