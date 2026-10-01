#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNote
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNoteProvider
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <inlinenoteprovider.h>
#include "libinlinenoteprovider.h"
#include "libinlinenoteprovider.hxx"

KTextEditor__InlineNoteProvider* KTextEditor__InlineNoteProvider_new() {
    return new VirtualKTextEditorInlineNoteProvider();
}

QMetaObject* KTextEditor__InlineNoteProvider_MetaObject(const KTextEditor__InlineNoteProvider* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__InlineNoteProvider_Metacast(KTextEditor__InlineNoteProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__InlineNoteProvider_Metacall(KTextEditor__InlineNoteProvider* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__InlineNoteProvider_Tr(const char* s) {
    auto _ret = KTextEditor::InlineNoteProvider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of int */ KTextEditor__InlineNoteProvider_InlineNotes(const KTextEditor__InlineNoteProvider* self, int line) {
    QList<int> _ret = self->inlineNotes(static_cast<int>(line));
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QSize* KTextEditor__InlineNoteProvider_InlineNoteSize(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note) {
    return new QSize(self->inlineNoteSize(*note));
}

void KTextEditor__InlineNoteProvider_PaintInlineNote(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, QPainter* painter, int direction) {
    self->paintInlineNote(*note, *painter, static_cast<Qt::LayoutDirection>(direction));
}

void KTextEditor__InlineNoteProvider_InlineNoteActivated(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, int buttons, const QPoint* globalPos) {
    self->inlineNoteActivated(*note, static_cast<Qt::MouseButtons>(buttons), *globalPos);
}

void KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos) {
    self->inlineNoteFocusInEvent(*note, *globalPos);
}

void KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note) {
    self->inlineNoteFocusOutEvent(*note);
}

void KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos) {
    self->inlineNoteMouseMoveEvent(*note, *globalPos);
}

void KTextEditor__InlineNoteProvider_InlineNotesReset(KTextEditor__InlineNoteProvider* self) {
    self->inlineNotesReset();
}

void KTextEditor__InlineNoteProvider_Connect_InlineNotesReset(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__InlineNoteProvider*) = reinterpret_cast<void (*)(KTextEditor__InlineNoteProvider*)>(slot);
    KTextEditor::InlineNoteProvider::connect(self,
                                             static_cast<void (KTextEditor::InlineNoteProvider::*)()>(&KTextEditor::InlineNoteProvider::inlineNotesReset),
                                             [self, slotFunc]() {
                                                 slotFunc(self);
                                             });
}

void KTextEditor__InlineNoteProvider_InlineNotesChanged(KTextEditor__InlineNoteProvider* self, int line) {
    self->inlineNotesChanged(static_cast<int>(line));
}

void KTextEditor__InlineNoteProvider_Connect_InlineNotesChanged(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__InlineNoteProvider*, int) = reinterpret_cast<void (*)(KTextEditor__InlineNoteProvider*, int)>(slot);
    KTextEditor::InlineNoteProvider::connect(self,
                                             static_cast<void (KTextEditor::InlineNoteProvider::*)(int)>(&KTextEditor::InlineNoteProvider::inlineNotesChanged),
                                             [self, slotFunc](int line) {
                                                 int sigval1 = line;
                                                 slotFunc(self, sigval1);
                                             });
}

libqt_string KTextEditor__InlineNoteProvider_Tr2(const char* s, const char* c) {
    auto _ret = KTextEditor::InlineNoteProvider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__InlineNoteProvider_Tr3(const char* s, const char* c, int n) {
    auto _ret = KTextEditor::InlineNoteProvider::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTextEditor__InlineNoteProvider_SuperMetaObject(const KTextEditor__InlineNoteProvider* self) {
    return (QMetaObject*)self->KTextEditor::InlineNoteProvider::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnMetaObject(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self)))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_metaobject_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTextEditor__InlineNoteProvider_SuperMetacast(KTextEditor__InlineNoteProvider* self, const char* param1) {
    return self->KTextEditor::InlineNoteProvider::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnMetacast(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_metacast_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__InlineNoteProvider_SuperMetacall(KTextEditor__InlineNoteProvider* self, int param1, int param2, void** param3) {
    return self->KTextEditor::InlineNoteProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnMetacall(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_metacall_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNotes(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self)))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_inlinenotes_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNotes_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteSize(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self)))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_inlinenotesize_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteSize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnPaintInlineNote(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self)))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_paintinlinenote_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_PaintInlineNote_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperInlineNoteActivated(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, int buttons, const QPoint* globalPos) {
    self->KTextEditor::InlineNoteProvider::inlineNoteActivated(*note, static_cast<Qt::MouseButtons>(buttons), *globalPos);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteActivated(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_inlinenoteactivated_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteActivated_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperInlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos) {
    self->KTextEditor::InlineNoteProvider::inlineNoteFocusInEvent(*note, *globalPos);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperInlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note) {
    self->KTextEditor::InlineNoteProvider::inlineNoteFocusOutEvent(*note);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperInlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos) {
    self->KTextEditor::InlineNoteProvider::inlineNoteMouseMoveEvent(*note, *globalPos);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__InlineNoteProvider_Event(KTextEditor__InlineNoteProvider* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KTextEditor__InlineNoteProvider_SuperEvent(KTextEditor__InlineNoteProvider* self, QEvent* event) {
    return self->KTextEditor::InlineNoteProvider::event(event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_event_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_Event_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__InlineNoteProvider_EventFilter(KTextEditor__InlineNoteProvider* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTextEditor__InlineNoteProvider_SuperEventFilter(KTextEditor__InlineNoteProvider* self, QObject* watched, QEvent* event) {
    return self->KTextEditor::InlineNoteProvider::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnEventFilter(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_eventfilter_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_TimerEvent(KTextEditor__InlineNoteProvider* self, QTimerEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider) {
        vktexteditorinlinenoteprovider->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperTimerEvent(KTextEditor__InlineNoteProvider* self, QTimerEvent* event) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self)) {
        vktexteditorinlinenoteprovider->KTextEditor::InlineNoteProvider::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnTimerEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_timerevent_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_ChildEvent(KTextEditor__InlineNoteProvider* self, QChildEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider) {
        vktexteditorinlinenoteprovider->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperChildEvent(KTextEditor__InlineNoteProvider* self, QChildEvent* event) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self)) {
        vktexteditorinlinenoteprovider->KTextEditor::InlineNoteProvider::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnChildEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_childevent_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_CustomEvent(KTextEditor__InlineNoteProvider* self, QEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider) {
        vktexteditorinlinenoteprovider->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperCustomEvent(KTextEditor__InlineNoteProvider* self, QEvent* event) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self)) {
        vktexteditorinlinenoteprovider->KTextEditor::InlineNoteProvider::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnCustomEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_customevent_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_ConnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider) {
        vktexteditorinlinenoteprovider->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperConnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self)) {
        vktexteditorinlinenoteprovider->KTextEditor::InlineNoteProvider::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnConnectNotify(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_connectnotify_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_DisconnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider) {
        vktexteditorinlinenoteprovider->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_SuperDisconnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self)) {
        vktexteditorinlinenoteprovider->KTextEditor::InlineNoteProvider::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::InlineNoteProvider::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnDisconnectNotify(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    if (auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self))
        vktexteditorinlinenoteprovider->ktexteditor__inlinenoteprovider_disconnectnotify_callback = reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KTextEditor__InlineNoteProvider_Sender(const KTextEditor__InlineNoteProvider* self) {
    if (auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self))) {
        return vktexteditorinlinenoteprovider->VirtualKTextEditorInlineNoteProvider::sender();
    } else
        qFatal("Error: Protected method KTextEditor::InlineNoteProvider::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__InlineNoteProvider_SenderSignalIndex(const KTextEditor__InlineNoteProvider* self) {
    if (auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self))) {
        return vktexteditorinlinenoteprovider->VirtualKTextEditorInlineNoteProvider::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTextEditor::InlineNoteProvider::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__InlineNoteProvider_Receivers(const KTextEditor__InlineNoteProvider* self, const char* signal) {
    if (auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self))) {
        return vktexteditorinlinenoteprovider->VirtualKTextEditorInlineNoteProvider::receivers(signal);
    } else
        qFatal("Error: Protected method KTextEditor::InlineNoteProvider::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__InlineNoteProvider_IsSignalConnected(const KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    if (auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self))) {
        return vktexteditorinlinenoteprovider->VirtualKTextEditorInlineNoteProvider::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTextEditor::InlineNoteProvider::isSignalConnected called without a directly constructed type");
}

void KTextEditor__InlineNoteProvider_Delete(KTextEditor__InlineNoteProvider* self) {
    delete self;
}
