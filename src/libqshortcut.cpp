#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QShortcut>
#include <QString>
#include <QTimerEvent>
#include <qshortcut.h>
#include "libqshortcut.h"
#include "libqshortcut.hxx"

QShortcut* QShortcut_new(QObject* parent) {
    return new VirtualQShortcut(parent);
}

QShortcut* QShortcut_new2(const QKeySequence* key, QObject* parent) {
    return new VirtualQShortcut(*key, parent);
}

QShortcut* QShortcut_new3(int key, QObject* parent) {
    return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent);
}

QShortcut* QShortcut_new4(const QKeySequence* key, QObject* parent, const char* member) {
    return new VirtualQShortcut(*key, parent, member);
}

QShortcut* QShortcut_new5(const QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember) {
    return new VirtualQShortcut(*key, parent, member, ambiguousMember);
}

QShortcut* QShortcut_new6(const QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
    return new VirtualQShortcut(*key, parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

QShortcut* QShortcut_new7(int key, QObject* parent, const char* member) {
    return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member);
}

QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember) {
    return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember);
}

QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
    return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

QMetaObject* QShortcut_MetaObject(const QShortcut* self) {
    return (QMetaObject*)self->metaObject();
}

void* QShortcut_Metacast(QShortcut* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QShortcut_Metacall(QShortcut* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QShortcut_Tr(const char* s) {
    auto _ret = QShortcut::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QShortcut_SetKey(QShortcut* self, const QKeySequence* key) {
    self->setKey(*key);
}

QKeySequence* QShortcut_Key(const QShortcut* self) {
    return new QKeySequence(self->key());
}

void QShortcut_SetKeys(QShortcut* self, int key) {
    self->setKeys(static_cast<QKeySequence::StandardKey>(key));
}

void QShortcut_SetKeys2(QShortcut* self, const libqt_list /* of QKeySequence* */ keys) {
    QList<QKeySequence> keys_QList;
    keys_QList.reserve(keys.len);
    QKeySequence** keys_arr = static_cast<QKeySequence**>(keys.data);
    for (size_t i = 0; i < keys.len; ++i) {
        keys_QList.push_back(*(keys_arr[i]));
    }
    self->setKeys(keys_QList);
}

libqt_list /* of QKeySequence* */ QShortcut_Keys(const QShortcut* self) {
    QList<QKeySequence> _ret = self->keys();
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QShortcut_SetEnabled(QShortcut* self, bool enable) {
    self->setEnabled(enable);
}

bool QShortcut_IsEnabled(const QShortcut* self) {
    return self->isEnabled();
}

void QShortcut_SetContext(QShortcut* self, int context) {
    self->setContext(static_cast<Qt::ShortcutContext>(context));
}

int QShortcut_Context(const QShortcut* self) {
    return static_cast<int>(self->context());
}

void QShortcut_SetAutoRepeat(QShortcut* self, bool on) {
    self->setAutoRepeat(on);
}

bool QShortcut_AutoRepeat(const QShortcut* self) {
    return self->autoRepeat();
}

int QShortcut_Id(const QShortcut* self) {
    return self->id();
}

void QShortcut_SetWhatsThis(QShortcut* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setWhatsThis(text_QString);
}

libqt_string QShortcut_WhatsThis(const QShortcut* self) {
    auto _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QShortcut_Activated(QShortcut* self) {
    self->activated();
}

void QShortcut_Connect_Activated(QShortcut* self, intptr_t slot) {
    void (*slotFunc)(QShortcut*) = reinterpret_cast<void (*)(QShortcut*)>(slot);
    QShortcut::connect(self,
                       static_cast<void (QShortcut::*)()>(&QShortcut::activated),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void QShortcut_ActivatedAmbiguously(QShortcut* self) {
    self->activatedAmbiguously();
}

void QShortcut_Connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot) {
    void (*slotFunc)(QShortcut*) = reinterpret_cast<void (*)(QShortcut*)>(slot);
    QShortcut::connect(self,
                       static_cast<void (QShortcut::*)()>(&QShortcut::activatedAmbiguously),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

bool QShortcut_Event(QShortcut* self, QEvent* e) {
    auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
    if (vqshortcut) {
        return vqshortcut->event(e);
    }
    qFatal("Error: Protected method QShortcut::event called without a directly constructed type");
}

libqt_string QShortcut_Tr2(const char* s, const char* c) {
    auto _ret = QShortcut::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QShortcut_Tr3(const char* s, const char* c, int n) {
    auto _ret = QShortcut::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QShortcut_SuperMetaObject(const QShortcut* self) {
    return (QMetaObject*)self->QShortcut::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnMetaObject(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self)))
        vqshortcut->qshortcut_metaobject_callback = reinterpret_cast<VirtualQShortcut::QShortcut_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QShortcut_SuperMetacast(QShortcut* self, const char* param1) {
    return self->QShortcut::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnMetacast(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_metacast_callback = reinterpret_cast<VirtualQShortcut::QShortcut_Metacast_Callback>(slot);
}

// Base class handler implementation
int QShortcut_SuperMetacall(QShortcut* self, int param1, int param2, void** param3) {
    return self->QShortcut::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnMetacall(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_metacall_callback = reinterpret_cast<VirtualQShortcut::QShortcut_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QShortcut_SuperEvent(QShortcut* self, QEvent* e) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        return vqshortcut->QShortcut::event(e);
    } else
        qFatal("Error: Protected virtual method QShortcut::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnEvent(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_event_callback = reinterpret_cast<VirtualQShortcut::QShortcut_Event_Callback>(slot);
}

// Derived class handler implementation
bool QShortcut_EventFilter(QShortcut* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QShortcut_SuperEventFilter(QShortcut* self, QObject* watched, QEvent* event) {
    return self->QShortcut::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnEventFilter(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_eventfilter_callback = reinterpret_cast<VirtualQShortcut::QShortcut_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QShortcut_TimerEvent(QShortcut* self, QTimerEvent* event) {
    auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
    if (vqshortcut) {
        vqshortcut->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QShortcut::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QShortcut_SuperTimerEvent(QShortcut* self, QTimerEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->QShortcut::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QShortcut::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnTimerEvent(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_timerevent_callback = reinterpret_cast<VirtualQShortcut::QShortcut_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QShortcut_ChildEvent(QShortcut* self, QChildEvent* event) {
    auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
    if (vqshortcut) {
        vqshortcut->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QShortcut::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QShortcut_SuperChildEvent(QShortcut* self, QChildEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->QShortcut::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QShortcut::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnChildEvent(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_childevent_callback = reinterpret_cast<VirtualQShortcut::QShortcut_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QShortcut_CustomEvent(QShortcut* self, QEvent* event) {
    auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
    if (vqshortcut) {
        vqshortcut->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QShortcut::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QShortcut_SuperCustomEvent(QShortcut* self, QEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->QShortcut::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QShortcut::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnCustomEvent(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_customevent_callback = reinterpret_cast<VirtualQShortcut::QShortcut_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QShortcut_ConnectNotify(QShortcut* self, const QMetaMethod* signal) {
    auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
    if (vqshortcut) {
        vqshortcut->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QShortcut::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QShortcut_SuperConnectNotify(QShortcut* self, const QMetaMethod* signal) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->QShortcut::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QShortcut::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnConnectNotify(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_connectnotify_callback = reinterpret_cast<VirtualQShortcut::QShortcut_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QShortcut_DisconnectNotify(QShortcut* self, const QMetaMethod* signal) {
    auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self);
    if (vqshortcut) {
        vqshortcut->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QShortcut::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QShortcut_SuperDisconnectNotify(QShortcut* self, const QMetaMethod* signal) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->QShortcut::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QShortcut::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnDisconnectNotify(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self))
        vqshortcut->qshortcut_disconnectnotify_callback = reinterpret_cast<VirtualQShortcut::QShortcut_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QShortcut_Sender(const QShortcut* self) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        return vqshortcut->VirtualQShortcut::sender();
    } else
        qFatal("Error: Protected method QShortcut::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QShortcut_SenderSignalIndex(const QShortcut* self) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        return vqshortcut->VirtualQShortcut::senderSignalIndex();
    } else
        qFatal("Error: Protected method QShortcut::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QShortcut_Receivers(const QShortcut* self, const char* signal) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        return vqshortcut->VirtualQShortcut::receivers(signal);
    } else
        qFatal("Error: Protected method QShortcut::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QShortcut_IsSignalConnected(const QShortcut* self, const QMetaMethod* signal) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        return vqshortcut->VirtualQShortcut::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QShortcut::isSignalConnected called without a directly constructed type");
}

void QShortcut_Delete(QShortcut* self) {
    delete self;
}
