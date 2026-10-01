#include <QChildEvent>
#include <QEvent>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QTranslator>
#include <qtranslator.h>
#include "libqtranslator.h"
#include "libqtranslator.hxx"

QTranslator* QTranslator_new() {
    return new VirtualQTranslator();
}

QTranslator* QTranslator_new2(QObject* parent) {
    return new VirtualQTranslator(parent);
}

QMetaObject* QTranslator_MetaObject(const QTranslator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTranslator_Metacast(QTranslator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTranslator_Metacall(QTranslator* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTranslator_Tr(const char* s) {
    auto _ret = QTranslator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTranslator_Translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    auto _ret = self->translate(context, sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTranslator_IsEmpty(const QTranslator* self) {
    return self->isEmpty();
}

libqt_string QTranslator_Language(const QTranslator* self) {
    auto _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTranslator_FilePath(const QTranslator* self) {
    auto _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTranslator_Load(QTranslator* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->load(filename_QString);
}

bool QTranslator_Load2(QTranslator* self, const QLocale* locale, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->load(*locale, filename_QString);
}

bool QTranslator_Load3(QTranslator* self, const unsigned char* data, int len) {
    return self->load(static_cast<const uchar*>(data), static_cast<int>(len));
}

libqt_string QTranslator_Tr2(const char* s, const char* c) {
    auto _ret = QTranslator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTranslator_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTranslator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTranslator_Load22(QTranslator* self, const libqt_string filename, const libqt_string directory) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    return self->load(filename_QString, directory_QString);
}

bool QTranslator_Load32(QTranslator* self, const libqt_string filename, const libqt_string directory, const libqt_string search_delimiters) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString search_delimiters_QString = QString::fromUtf8(search_delimiters.data, search_delimiters.len);
    return self->load(filename_QString, directory_QString, search_delimiters_QString);
}

bool QTranslator_Load4(QTranslator* self, const libqt_string filename, const libqt_string directory, const libqt_string search_delimiters, const libqt_string suffix) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString search_delimiters_QString = QString::fromUtf8(search_delimiters.data, search_delimiters.len);
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    return self->load(filename_QString, directory_QString, search_delimiters_QString, suffix_QString);
}

bool QTranslator_Load33(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    return self->load(*locale, filename_QString, prefix_QString);
}

bool QTranslator_Load42(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix, const libqt_string directory) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    return self->load(*locale, filename_QString, prefix_QString, directory_QString);
}

bool QTranslator_Load5(QTranslator* self, const QLocale* locale, const libqt_string filename, const libqt_string prefix, const libqt_string directory, const libqt_string suffix) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    return self->load(*locale, filename_QString, prefix_QString, directory_QString, suffix_QString);
}

bool QTranslator_Load34(QTranslator* self, const unsigned char* data, int len, const libqt_string directory) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    return self->load(static_cast<const uchar*>(data), static_cast<int>(len), directory_QString);
}

// Base class handler implementation
QMetaObject* QTranslator_SuperMetaObject(const QTranslator* self) {
    return (QMetaObject*)self->QTranslator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnMetaObject(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self)))
        vqtranslator->qtranslator_metaobject_callback = reinterpret_cast<VirtualQTranslator::QTranslator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTranslator_SuperMetacast(QTranslator* self, const char* param1) {
    return self->QTranslator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnMetacast(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_metacast_callback = reinterpret_cast<VirtualQTranslator::QTranslator_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTranslator_SuperMetacall(QTranslator* self, int param1, int param2, void** param3) {
    return self->QTranslator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnMetacall(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_metacall_callback = reinterpret_cast<VirtualQTranslator::QTranslator_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string QTranslator_SuperTranslate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    auto _ret = self->QTranslator::translate(context, sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnTranslate(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self)))
        vqtranslator->qtranslator_translate_callback = reinterpret_cast<VirtualQTranslator::QTranslator_Translate_Callback>(slot);
}

// Base class handler implementation
bool QTranslator_SuperIsEmpty(const QTranslator* self) {
    return self->QTranslator::isEmpty();
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnIsEmpty(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self)))
        vqtranslator->qtranslator_isempty_callback = reinterpret_cast<VirtualQTranslator::QTranslator_IsEmpty_Callback>(slot);
}

// Derived class handler implementation
bool QTranslator_Event(QTranslator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTranslator_SuperEvent(QTranslator* self, QEvent* event) {
    return self->QTranslator::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnEvent(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_event_callback = reinterpret_cast<VirtualQTranslator::QTranslator_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTranslator_EventFilter(QTranslator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTranslator_SuperEventFilter(QTranslator* self, QObject* watched, QEvent* event) {
    return self->QTranslator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnEventFilter(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_eventfilter_callback = reinterpret_cast<VirtualQTranslator::QTranslator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTranslator_TimerEvent(QTranslator* self, QTimerEvent* event) {
    auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self);
    if (vqtranslator) {
        vqtranslator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTranslator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTranslator_SuperTimerEvent(QTranslator* self, QTimerEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->QTranslator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTranslator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnTimerEvent(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_timerevent_callback = reinterpret_cast<VirtualQTranslator::QTranslator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTranslator_ChildEvent(QTranslator* self, QChildEvent* event) {
    auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self);
    if (vqtranslator) {
        vqtranslator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTranslator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTranslator_SuperChildEvent(QTranslator* self, QChildEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->QTranslator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTranslator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnChildEvent(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_childevent_callback = reinterpret_cast<VirtualQTranslator::QTranslator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTranslator_CustomEvent(QTranslator* self, QEvent* event) {
    auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self);
    if (vqtranslator) {
        vqtranslator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTranslator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTranslator_SuperCustomEvent(QTranslator* self, QEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->QTranslator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTranslator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnCustomEvent(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_customevent_callback = reinterpret_cast<VirtualQTranslator::QTranslator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTranslator_ConnectNotify(QTranslator* self, const QMetaMethod* signal) {
    auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self);
    if (vqtranslator) {
        vqtranslator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTranslator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTranslator_SuperConnectNotify(QTranslator* self, const QMetaMethod* signal) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->QTranslator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTranslator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnConnectNotify(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_connectnotify_callback = reinterpret_cast<VirtualQTranslator::QTranslator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTranslator_DisconnectNotify(QTranslator* self, const QMetaMethod* signal) {
    auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self);
    if (vqtranslator) {
        vqtranslator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTranslator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTranslator_SuperDisconnectNotify(QTranslator* self, const QMetaMethod* signal) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->QTranslator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTranslator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnDisconnectNotify(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self))
        vqtranslator->qtranslator_disconnectnotify_callback = reinterpret_cast<VirtualQTranslator::QTranslator_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QTranslator_Sender(const QTranslator* self) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->VirtualQTranslator::sender();
    } else
        qFatal("Error: Protected method QTranslator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTranslator_SenderSignalIndex(const QTranslator* self) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->VirtualQTranslator::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTranslator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTranslator_Receivers(const QTranslator* self, const char* signal) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->VirtualQTranslator::receivers(signal);
    } else
        qFatal("Error: Protected method QTranslator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTranslator_IsSignalConnected(const QTranslator* self, const QMetaMethod* signal) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->VirtualQTranslator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTranslator::isSignalConnected called without a directly constructed type");
}

void QTranslator_Delete(QTranslator* self) {
    delete self;
}
