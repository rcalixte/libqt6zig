#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__AbstractHighlighter
#include <KSyntaxHighlighting/Definition>
#include <KSyntaxHighlighting/FoldingRegion>
#include <KSyntaxHighlighting/Format>
#include <KSyntaxHighlighting/State>
#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__SyntaxHighlighter
#include <KSyntaxHighlighting/Theme>
#include <QChildEvent>
#include <QEvent>
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
#include <syntaxhighlighter.h>
#include "libsyntaxhighlighter.h"
#include "libsyntaxhighlighter.hxx"

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new() {
    return new VirtualKSyntaxHighlightingSyntaxHighlighter();
}

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new2(QTextDocument* document) {
    return new VirtualKSyntaxHighlightingSyntaxHighlighter(document);
}

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new3(QObject* parent) {
    return new VirtualKSyntaxHighlightingSyntaxHighlighter(parent);
}

KSyntaxHighlighting__AbstractHighlighter* KSyntaxHighlighting__SyntaxHighlighter_AsKSyntaxHighlighting__AbstractHighlighter(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    return const_cast<KSyntaxHighlighting::SyntaxHighlighter*>(self);
}

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_FromKSyntaxHighlighting__AbstractHighlighter(const KSyntaxHighlighting::AbstractHighlighter* _ksyntaxhighlighting__abstracthighlighter) {
    return dynamic_cast<KSyntaxHighlighting::SyntaxHighlighter*>(const_cast<KSyntaxHighlighting::AbstractHighlighter*>(_ksyntaxhighlighting__abstracthighlighter));
}

QMetaObject* KSyntaxHighlighting__SyntaxHighlighter_MetaObject(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSyntaxHighlighting__SyntaxHighlighter_Metacast(KSyntaxHighlighting__SyntaxHighlighter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSyntaxHighlighting__SyntaxHighlighter_Metacall(KSyntaxHighlighting__SyntaxHighlighter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSyntaxHighlighting__SyntaxHighlighter_Tr(const char* s) {
    auto _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSyntaxHighlighting__SyntaxHighlighter_SetDefinition(KSyntaxHighlighting__SyntaxHighlighter* self, const KSyntaxHighlighting__Definition* def) {
    self->setDefinition(*def);
}

void KSyntaxHighlighting__SyntaxHighlighter_SetTheme(KSyntaxHighlighting__SyntaxHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    self->setTheme(*theme);
}

bool KSyntaxHighlighting__SyntaxHighlighter_StartsFoldingRegion(const KSyntaxHighlighting__SyntaxHighlighter* self, const QTextBlock* startBlock) {
    return self->startsFoldingRegion(*startBlock);
}

QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_FindFoldingRegionEnd(const KSyntaxHighlighting__SyntaxHighlighter* self, const QTextBlock* startBlock) {
    return new QTextBlock(self->findFoldingRegionEnd(*startBlock));
}

void KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock(KSyntaxHighlighting__SyntaxHighlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter) {
        vksyntaxhighlighting__syntaxhighlighter->highlightBlock(text_QString);
    }
}

void KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format) {
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter) {
        vksyntaxhighlighting__syntaxhighlighter->applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    }
}

void KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region) {
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter) {
        vksyntaxhighlighting__syntaxhighlighter->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    }
}

libqt_string KSyntaxHighlighting__SyntaxHighlighter_Tr2(const char* s, const char* c) {
    auto _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__SyntaxHighlighter_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSyntaxHighlighting__SyntaxHighlighter_SuperMetaObject(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    return (QMetaObject*)self->KSyntaxHighlighting::SyntaxHighlighter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnMetaObject(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_metaobject_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSyntaxHighlighting__SyntaxHighlighter_SuperMetacast(KSyntaxHighlighting__SyntaxHighlighter* self, const char* param1) {
    return self->KSyntaxHighlighting::SyntaxHighlighter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnMetacast(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_metacast_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_SuperMetacall(KSyntaxHighlighting__SyntaxHighlighter* self, int param1, int param2, void** param3) {
    return self->KSyntaxHighlighting::SyntaxHighlighter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnMetacall(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_metacall_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback>(slot);
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperSetDefinition(KSyntaxHighlighting__SyntaxHighlighter* self, const KSyntaxHighlighting__Definition* def) {
    self->KSyntaxHighlighting::SyntaxHighlighter::setDefinition(*def);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSetDefinition(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_setdefinition_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback>(slot);
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperSetTheme(KSyntaxHighlighting__SyntaxHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    self->KSyntaxHighlighting::SyntaxHighlighter::setTheme(*theme);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSetTheme(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_settheme_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback>(slot);
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperHighlightBlock(KSyntaxHighlighting__SyntaxHighlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->KSyntaxHighlighting::SyntaxHighlighter::highlightBlock(text_QString);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::highlightBlock called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnHighlightBlock(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_highlightblock_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback>(slot);
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFormat(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->KSyntaxHighlighting::SyntaxHighlighter::applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::applyFormat called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnApplyFormat(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_applyformat_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback>(slot);
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFolding(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->KSyntaxHighlighting::SyntaxHighlighter::applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::applyFolding called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnApplyFolding(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_applyfolding_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback>(slot);
}

// Derived class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_Event(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_SuperEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event) {
    return self->KSyntaxHighlighting::SyntaxHighlighter::event(event);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnEvent(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_event_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_Event_Callback>(slot);
}

// Derived class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_EventFilter(KSyntaxHighlighting__SyntaxHighlighter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_SuperEventFilter(KSyntaxHighlighting__SyntaxHighlighter* self, QObject* watched, QEvent* event) {
    return self->KSyntaxHighlighting::SyntaxHighlighter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnEventFilter(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_eventfilter_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_TimerEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QTimerEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperTimerEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QTimerEvent* event) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->KSyntaxHighlighting::SyntaxHighlighter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnTimerEvent(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_timerevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_ChildEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QChildEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperChildEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QChildEvent* event) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->KSyntaxHighlighting::SyntaxHighlighter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnChildEvent(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_childevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_CustomEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperCustomEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->KSyntaxHighlighting::SyntaxHighlighter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnCustomEvent(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_customevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperConnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->KSyntaxHighlighting::SyntaxHighlighter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnConnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_connectnotify_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SuperDisconnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->KSyntaxHighlighting::SyntaxHighlighter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::SyntaxHighlighter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnDisconnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        vksyntaxhighlightingsyntaxhighlighter->ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_callback = reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SetFormat(KSyntaxHighlighting__SyntaxHighlighter* self, int start, int count, const QTextCharFormat* format) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::setFormat called without a directly constructed type");
}

// Derived class handler implementation
QTextCharFormat* KSyntaxHighlighting__SyntaxHighlighter_Format(const KSyntaxHighlighting__SyntaxHighlighter* self, int pos) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)))
        return new QTextCharFormat(vksyntaxhighlightingsyntaxhighlighter->format(static_cast<int>(pos)));
    qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::format called without a directly constructed type");
}

// Derived class protected handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))) {
        return vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::previousBlockState();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::previousBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))) {
        return vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::currentBlockState();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::currentBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState(KSyntaxHighlighting__SyntaxHighlighter* self, int newState) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::setCurrentBlockState(static_cast<int>(newState));
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::setCurrentBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData(KSyntaxHighlighting__SyntaxHighlighter* self, QTextBlockUserData* data) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)) {
        vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::setCurrentBlockUserData(data);
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::setCurrentBlockUserData called without a directly constructed type");
}

// Derived class protected handler implementation
QTextBlockUserData* KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))) {
        return vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::currentBlockUserData();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::currentBlockUserData called without a directly constructed type");
}

// Derived class handler implementation
QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self)))
        return new QTextBlock(vksyntaxhighlightingsyntaxhighlighter->currentBlock());
    qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::currentBlock called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSyntaxHighlighting__SyntaxHighlighter_Sender(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))) {
        return vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::sender();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))) {
        return vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_Receivers(const KSyntaxHighlighting__SyntaxHighlighter* self, const char* signal) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))) {
        return vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::receivers(signal);
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected(const KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))) {
        return vksyntaxhighlightingsyntaxhighlighter->VirtualKSyntaxHighlightingSyntaxHighlighter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::isSignalConnected called without a directly constructed type");
}

// Derived class handler implementation
KSyntaxHighlighting__State* KSyntaxHighlighting__SyntaxHighlighter_HighlightLine(KSyntaxHighlighting__SyntaxHighlighter* self, libqt_string text, const KSyntaxHighlighting__State* state) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self))
        return new KSyntaxHighlighting::State(vksyntaxhighlightingsyntaxhighlighter->highlightLine(text_QString, *state));
    qFatal("Error: Protected method KSyntaxHighlighting::SyntaxHighlighter::highlightLine called without a directly constructed type");
}

void KSyntaxHighlighting__SyntaxHighlighter_Delete(KSyntaxHighlighting__SyntaxHighlighter* self) {
    delete self;
}
