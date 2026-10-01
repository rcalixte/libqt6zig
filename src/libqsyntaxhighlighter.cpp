#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QTimerEvent>
#include <qsyntaxhighlighter.h>
#include "libqsyntaxhighlighter.h"
#include "libqsyntaxhighlighter.hxx"

QSyntaxHighlighter* QSyntaxHighlighter_new(QObject* parent) {
    return new VirtualQSyntaxHighlighter(parent);
}

QSyntaxHighlighter* QSyntaxHighlighter_new2(QTextDocument* parent) {
    return new VirtualQSyntaxHighlighter(parent);
}

QMetaObject* QSyntaxHighlighter_MetaObject(const QSyntaxHighlighter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSyntaxHighlighter_Metacast(QSyntaxHighlighter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSyntaxHighlighter_Metacall(QSyntaxHighlighter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSyntaxHighlighter_Tr(const char* s) {
    auto _ret = QSyntaxHighlighter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc) {
    self->setDocument(doc);
}

QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self) {
    return self->document();
}

void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self) {
    self->rehighlight();
}

void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, const QTextBlock* block) {
    self->rehighlightBlock(*block);
}

void QSyntaxHighlighter_HighlightBlock(QSyntaxHighlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
    if (vqsyntaxhighlighter) {
        vqsyntaxhighlighter->highlightBlock(text_QString);
    }
}

libqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c) {
    auto _ret = QSyntaxHighlighter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSyntaxHighlighter::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSyntaxHighlighter_SuperMetaObject(const QSyntaxHighlighter* self) {
    return (QMetaObject*)self->QSyntaxHighlighter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnMetaObject(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self)))
        vqsyntaxhighlighter->qsyntaxhighlighter_metaobject_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSyntaxHighlighter_SuperMetacast(QSyntaxHighlighter* self, const char* param1) {
    return self->QSyntaxHighlighter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnMetacast(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_metacast_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSyntaxHighlighter_SuperMetacall(QSyntaxHighlighter* self, int param1, int param2, void** param3) {
    return self->QSyntaxHighlighter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnMetacall(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_metacall_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnHighlightBlock(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_highlightblock_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_HighlightBlock_Callback>(slot);
}

// Derived class handler implementation
bool QSyntaxHighlighter_Event(QSyntaxHighlighter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSyntaxHighlighter_SuperEvent(QSyntaxHighlighter* self, QEvent* event) {
    return self->QSyntaxHighlighter::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnEvent(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_event_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSyntaxHighlighter_EventFilter(QSyntaxHighlighter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSyntaxHighlighter_SuperEventFilter(QSyntaxHighlighter* self, QObject* watched, QEvent* event) {
    return self->QSyntaxHighlighter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnEventFilter(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_eventfilter_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSyntaxHighlighter_TimerEvent(QSyntaxHighlighter* self, QTimerEvent* event) {
    auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
    if (vqsyntaxhighlighter) {
        vqsyntaxhighlighter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSyntaxHighlighter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSyntaxHighlighter_SuperTimerEvent(QSyntaxHighlighter* self, QTimerEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->QSyntaxHighlighter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSyntaxHighlighter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnTimerEvent(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_timerevent_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSyntaxHighlighter_ChildEvent(QSyntaxHighlighter* self, QChildEvent* event) {
    auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
    if (vqsyntaxhighlighter) {
        vqsyntaxhighlighter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSyntaxHighlighter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSyntaxHighlighter_SuperChildEvent(QSyntaxHighlighter* self, QChildEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->QSyntaxHighlighter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSyntaxHighlighter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnChildEvent(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_childevent_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSyntaxHighlighter_CustomEvent(QSyntaxHighlighter* self, QEvent* event) {
    auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
    if (vqsyntaxhighlighter) {
        vqsyntaxhighlighter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSyntaxHighlighter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSyntaxHighlighter_SuperCustomEvent(QSyntaxHighlighter* self, QEvent* event) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->QSyntaxHighlighter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSyntaxHighlighter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnCustomEvent(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_customevent_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSyntaxHighlighter_ConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
    if (vqsyntaxhighlighter) {
        vqsyntaxhighlighter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSyntaxHighlighter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSyntaxHighlighter_SuperConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->QSyntaxHighlighter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSyntaxHighlighter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnConnectNotify(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_connectnotify_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSyntaxHighlighter_DisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self);
    if (vqsyntaxhighlighter) {
        vqsyntaxhighlighter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSyntaxHighlighter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSyntaxHighlighter_SuperDisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->QSyntaxHighlighter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSyntaxHighlighter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSyntaxHighlighter_OnDisconnectNotify(QSyntaxHighlighter* self, intptr_t slot) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self))
        vqsyntaxhighlighter->qsyntaxhighlighter_disconnectnotify_callback = reinterpret_cast<VirtualQSyntaxHighlighter::QSyntaxHighlighter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSyntaxHighlighter_SetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->VirtualQSyntaxHighlighter::setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::setFormat called without a directly constructed type");
}

// Derived class protected handler implementation
void QSyntaxHighlighter_SetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->VirtualQSyntaxHighlighter::setFormat(static_cast<int>(start), static_cast<int>(count), *color);
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::setFormat2 called without a directly constructed type");
}

// Derived class protected handler implementation
void QSyntaxHighlighter_SetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->VirtualQSyntaxHighlighter::setFormat(static_cast<int>(start), static_cast<int>(count), *font);
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::setFormat3 called without a directly constructed type");
}

// Derived class handler implementation
QTextCharFormat* QSyntaxHighlighter_Format(const QSyntaxHighlighter* self, int pos) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self)))
        return new QTextCharFormat(vqsyntaxhighlighter->format(static_cast<int>(pos)));
    qFatal("Error: Protected method QSyntaxHighlighter::format called without a directly constructed type");
}

// Derived class protected handler implementation
int QSyntaxHighlighter_PreviousBlockState(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->VirtualQSyntaxHighlighter::previousBlockState();
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::previousBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
int QSyntaxHighlighter_CurrentBlockState(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->VirtualQSyntaxHighlighter::currentBlockState();
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::currentBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
void QSyntaxHighlighter_SetCurrentBlockState(QSyntaxHighlighter* self, int newState) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->VirtualQSyntaxHighlighter::setCurrentBlockState(static_cast<int>(newState));
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::setCurrentBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
void QSyntaxHighlighter_SetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data) {
    if (auto* vqsyntaxhighlighter = dynamic_cast<VirtualQSyntaxHighlighter*>(self)) {
        vqsyntaxhighlighter->VirtualQSyntaxHighlighter::setCurrentBlockUserData(data);
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::setCurrentBlockUserData called without a directly constructed type");
}

// Derived class protected handler implementation
QTextBlockUserData* QSyntaxHighlighter_CurrentBlockUserData(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->VirtualQSyntaxHighlighter::currentBlockUserData();
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::currentBlockUserData called without a directly constructed type");
}

// Derived class handler implementation
QTextBlock* QSyntaxHighlighter_CurrentBlock(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self)))
        return new QTextBlock(vqsyntaxhighlighter->currentBlock());
    qFatal("Error: Protected method QSyntaxHighlighter::currentBlock called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSyntaxHighlighter_Sender(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->VirtualQSyntaxHighlighter::sender();
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSyntaxHighlighter_SenderSignalIndex(const QSyntaxHighlighter* self) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->VirtualQSyntaxHighlighter::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSyntaxHighlighter_Receivers(const QSyntaxHighlighter* self, const char* signal) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->VirtualQSyntaxHighlighter::receivers(signal);
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSyntaxHighlighter_IsSignalConnected(const QSyntaxHighlighter* self, const QMetaMethod* signal) {
    if (auto* vqsyntaxhighlighter = const_cast<VirtualQSyntaxHighlighter*>(dynamic_cast<const VirtualQSyntaxHighlighter*>(self))) {
        return vqsyntaxhighlighter->VirtualQSyntaxHighlighter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSyntaxHighlighter::isSignalConnected called without a directly constructed type");
}

void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self) {
    delete self;
}
