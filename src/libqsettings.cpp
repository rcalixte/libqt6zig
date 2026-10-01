#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qsettings.h>
#include "libqsettings.h"
#include "libqsettings.hxx"

QSettings* QSettings_new(const libqt_string organization) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    return new VirtualQSettings(organization_QString);
}

QSettings* QSettings_new2(int scope, const libqt_string organization) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString);
}

QSettings* QSettings_new3(int format, int scope, const libqt_string organization) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    return new VirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString);
}

QSettings* QSettings_new4(const libqt_string fileName, int format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQSettings(fileName_QString, static_cast<QSettings::Format>(format));
}

QSettings* QSettings_new5() {
    return new VirtualQSettings();
}

QSettings* QSettings_new6(int scope) {
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope));
}

QSettings* QSettings_new7(const libqt_string organization, const libqt_string application) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(organization_QString, application_QString);
}

QSettings* QSettings_new8(const libqt_string organization, const libqt_string application, QObject* parent) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(organization_QString, application_QString, parent);
}

QSettings* QSettings_new9(int scope, const libqt_string organization, const libqt_string application) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString, application_QString);
}

QSettings* QSettings_new10(int scope, const libqt_string organization, const libqt_string application, QObject* parent) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString, application_QString, parent);
}

QSettings* QSettings_new11(int format, int scope, const libqt_string organization, const libqt_string application) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString, application_QString);
}

QSettings* QSettings_new12(int format, int scope, const libqt_string organization, const libqt_string application, QObject* parent) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString, application_QString, parent);
}

QSettings* QSettings_new13(const libqt_string fileName, int format, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQSettings(fileName_QString, static_cast<QSettings::Format>(format), parent);
}

QSettings* QSettings_new14(QObject* parent) {
    return new VirtualQSettings(parent);
}

QSettings* QSettings_new15(int scope, QObject* parent) {
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope), parent);
}

QMetaObject* QSettings_MetaObject(const QSettings* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSettings_Metacast(QSettings* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSettings_Metacall(QSettings* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSettings_Tr(const char* s) {
    auto _ret = QSettings::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSettings_Clear(QSettings* self) {
    self->clear();
}

void QSettings_Sync(QSettings* self) {
    self->sync();
}

int QSettings_Status(const QSettings* self) {
    return static_cast<int>(self->status());
}

bool QSettings_IsAtomicSyncRequired(const QSettings* self) {
    return self->isAtomicSyncRequired();
}

void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable) {
    self->setAtomicSyncRequired(enable);
}

void QSettings_BeginGroup(QSettings* self, libqt_string prefix) {
    self->beginGroup(QAnyStringView(prefix.data, prefix.len));
}

void QSettings_EndGroup(QSettings* self) {
    self->endGroup();
}

libqt_string QSettings_Group(const QSettings* self) {
    auto _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSettings_BeginReadArray(QSettings* self, libqt_string prefix) {
    return self->beginReadArray(QAnyStringView(prefix.data, prefix.len));
}

void QSettings_BeginWriteArray(QSettings* self, libqt_string prefix) {
    self->beginWriteArray(QAnyStringView(prefix.data, prefix.len));
}

void QSettings_EndArray(QSettings* self) {
    self->endArray();
}

void QSettings_SetArrayIndex(QSettings* self, int i) {
    self->setArrayIndex(static_cast<int>(i));
}

libqt_list /* of libqt_string */ QSettings_AllKeys(const QSettings* self) {
    QList<QString> _ret = self->allKeys();
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

libqt_list /* of libqt_string */ QSettings_ChildKeys(const QSettings* self) {
    QList<QString> _ret = self->childKeys();
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

libqt_list /* of libqt_string */ QSettings_ChildGroups(const QSettings* self) {
    QList<QString> _ret = self->childGroups();
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

bool QSettings_IsWritable(const QSettings* self) {
    return self->isWritable();
}

void QSettings_SetValue(QSettings* self, libqt_string key, const QVariant* value) {
    self->setValue(QAnyStringView(key.data, key.len), *value);
}

QVariant* QSettings_Value(const QSettings* self, libqt_string key, const QVariant* defaultValue) {
    return new QVariant(self->value(QAnyStringView(key.data, key.len), *defaultValue));
}

QVariant* QSettings_Value2(const QSettings* self, libqt_string key) {
    return new QVariant(self->value(QAnyStringView(key.data, key.len)));
}

void QSettings_Remove(QSettings* self, libqt_string key) {
    self->remove(QAnyStringView(key.data, key.len));
}

bool QSettings_Contains(const QSettings* self, libqt_string key) {
    return self->contains(QAnyStringView(key.data, key.len));
}

void QSettings_SetFallbacksEnabled(QSettings* self, bool b) {
    self->setFallbacksEnabled(b);
}

bool QSettings_FallbacksEnabled(const QSettings* self) {
    return self->fallbacksEnabled();
}

libqt_string QSettings_FileName(const QSettings* self) {
    auto _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSettings_Format(const QSettings* self) {
    return static_cast<int>(self->format());
}

int QSettings_Scope(const QSettings* self) {
    return static_cast<int>(self->scope());
}

libqt_string QSettings_OrganizationName(const QSettings* self) {
    auto _ret = self->organizationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSettings_ApplicationName(const QSettings* self) {
    auto _ret = self->applicationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSettings_SetDefaultFormat(int format) {
    QSettings::setDefaultFormat(static_cast<QSettings::Format>(format));
}

int QSettings_DefaultFormat() {
    return static_cast<int>(QSettings::defaultFormat());
}

void QSettings_SetPath(int format, int scope, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QSettings::setPath(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), path_QString);
}

bool QSettings_Event(QSettings* self, QEvent* event) {
    auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
    if (vqsettings) {
        return vqsettings->event(event);
    }
    qFatal("Error: Protected method QSettings::event called without a directly constructed type");
}

libqt_string QSettings_Tr2(const char* s, const char* c) {
    auto _ret = QSettings::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSettings_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSettings::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSettings_BeginWriteArray2(QSettings* self, libqt_string prefix, int size) {
    self->beginWriteArray(QAnyStringView(prefix.data, prefix.len), static_cast<int>(size));
}

// Base class handler implementation
QMetaObject* QSettings_SuperMetaObject(const QSettings* self) {
    return (QMetaObject*)self->QSettings::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnMetaObject(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self)))
        vqsettings->qsettings_metaobject_callback = reinterpret_cast<VirtualQSettings::QSettings_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSettings_SuperMetacast(QSettings* self, const char* param1) {
    return self->QSettings::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnMetacast(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_metacast_callback = reinterpret_cast<VirtualQSettings::QSettings_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSettings_SuperMetacall(QSettings* self, int param1, int param2, void** param3) {
    return self->QSettings::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnMetacall(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_metacall_callback = reinterpret_cast<VirtualQSettings::QSettings_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QSettings_SuperEvent(QSettings* self, QEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        return vqsettings->QSettings::event(event);
    } else
        qFatal("Error: Protected virtual method QSettings::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnEvent(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_event_callback = reinterpret_cast<VirtualQSettings::QSettings_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSettings_EventFilter(QSettings* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSettings_SuperEventFilter(QSettings* self, QObject* watched, QEvent* event) {
    return self->QSettings::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnEventFilter(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_eventfilter_callback = reinterpret_cast<VirtualQSettings::QSettings_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSettings_TimerEvent(QSettings* self, QTimerEvent* event) {
    auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
    if (vqsettings) {
        vqsettings->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSettings::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSettings_SuperTimerEvent(QSettings* self, QTimerEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->QSettings::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSettings::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnTimerEvent(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_timerevent_callback = reinterpret_cast<VirtualQSettings::QSettings_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSettings_ChildEvent(QSettings* self, QChildEvent* event) {
    auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
    if (vqsettings) {
        vqsettings->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSettings::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSettings_SuperChildEvent(QSettings* self, QChildEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->QSettings::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSettings::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnChildEvent(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_childevent_callback = reinterpret_cast<VirtualQSettings::QSettings_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSettings_CustomEvent(QSettings* self, QEvent* event) {
    auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
    if (vqsettings) {
        vqsettings->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSettings::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSettings_SuperCustomEvent(QSettings* self, QEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->QSettings::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSettings::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnCustomEvent(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_customevent_callback = reinterpret_cast<VirtualQSettings::QSettings_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSettings_ConnectNotify(QSettings* self, const QMetaMethod* signal) {
    auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
    if (vqsettings) {
        vqsettings->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSettings::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSettings_SuperConnectNotify(QSettings* self, const QMetaMethod* signal) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->QSettings::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSettings::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnConnectNotify(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_connectnotify_callback = reinterpret_cast<VirtualQSettings::QSettings_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSettings_DisconnectNotify(QSettings* self, const QMetaMethod* signal) {
    auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
    if (vqsettings) {
        vqsettings->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSettings::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSettings_SuperDisconnectNotify(QSettings* self, const QMetaMethod* signal) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->QSettings::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSettings::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnDisconnectNotify(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self))
        vqsettings->qsettings_disconnectnotify_callback = reinterpret_cast<VirtualQSettings::QSettings_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QSettings_Sender(const QSettings* self) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        return vqsettings->VirtualQSettings::sender();
    } else
        qFatal("Error: Protected method QSettings::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSettings_SenderSignalIndex(const QSettings* self) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        return vqsettings->VirtualQSettings::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSettings::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSettings_Receivers(const QSettings* self, const char* signal) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        return vqsettings->VirtualQSettings::receivers(signal);
    } else
        qFatal("Error: Protected method QSettings::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSettings_IsSignalConnected(const QSettings* self, const QMetaMethod* signal) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        return vqsettings->VirtualQSettings::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSettings::isSignalConnected called without a directly constructed type");
}

void QSettings_Delete(QSettings* self) {
    delete self;
}
