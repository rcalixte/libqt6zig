#include <QChildEvent>
#include <QCompleter>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlainTextEdit>
#include <QString>
#include <QTextEdit>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__TextEditorCompleter
#include <texteditorcompleter.h>
#include "libtexteditorcompleter.h"
#include "libtexteditorcompleter.hxx"

TextCustomEditor__TextEditorCompleter* TextCustomEditor__TextEditorCompleter_new(QTextEdit* editor, QObject* parent) {
    return new VirtualTextCustomEditorTextEditorCompleter(editor, parent);
}

TextCustomEditor__TextEditorCompleter* TextCustomEditor__TextEditorCompleter_new2(QPlainTextEdit* editor, QObject* parent) {
    return new VirtualTextCustomEditorTextEditorCompleter(editor, parent);
}

QMetaObject* TextCustomEditor__TextEditorCompleter_MetaObject(const TextCustomEditor__TextEditorCompleter* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__TextEditorCompleter_Metacast(TextCustomEditor__TextEditorCompleter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__TextEditorCompleter_Metacall(TextCustomEditor__TextEditorCompleter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextCustomEditor__TextEditorCompleter_Tr(const char* s) {
    auto _ret = TextCustomEditor::TextEditorCompleter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__TextEditorCompleter_SetCompleterStringList(TextCustomEditor__TextEditorCompleter* self, const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->setCompleterStringList(list_QList);
}

QCompleter* TextCustomEditor__TextEditorCompleter_Completer(const TextCustomEditor__TextEditorCompleter* self) {
    return self->completer();
}

void TextCustomEditor__TextEditorCompleter_CompleteText(TextCustomEditor__TextEditorCompleter* self) {
    self->completeText();
}

void TextCustomEditor__TextEditorCompleter_SetExcludeOfCharacters(TextCustomEditor__TextEditorCompleter* self, const libqt_string excludes) {
    QString excludes_QString = QString::fromUtf8(excludes.data, excludes.len);
    self->setExcludeOfCharacters(excludes_QString);
}

libqt_string TextCustomEditor__TextEditorCompleter_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::TextEditorCompleter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__TextEditorCompleter_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::TextEditorCompleter::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__TextEditorCompleter_SuperMetaObject(const TextCustomEditor__TextEditorCompleter* self) {
    return (QMetaObject*)self->TextCustomEditor::TextEditorCompleter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnMetaObject(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self)))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__TextEditorCompleter_SuperMetacast(TextCustomEditor__TextEditorCompleter* self, const char* param1) {
    return self->TextCustomEditor::TextEditorCompleter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnMetacast(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_metacast_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__TextEditorCompleter_SuperMetacall(TextCustomEditor__TextEditorCompleter* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::TextEditorCompleter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnMetacall(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_metacall_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextEditorCompleter_Event(TextCustomEditor__TextEditorCompleter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextCustomEditor__TextEditorCompleter_SuperEvent(TextCustomEditor__TextEditorCompleter* self, QEvent* event) {
    return self->TextCustomEditor::TextEditorCompleter::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnEvent(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_event_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__TextEditorCompleter_EventFilter(TextCustomEditor__TextEditorCompleter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextCustomEditor__TextEditorCompleter_SuperEventFilter(TextCustomEditor__TextEditorCompleter* self, QObject* watched, QEvent* event) {
    return self->TextCustomEditor::TextEditorCompleter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnEventFilter(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_TimerEvent(TextCustomEditor__TextEditorCompleter* self, QTimerEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter) {
        vtextcustomeditortexteditorcompleter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperTimerEvent(TextCustomEditor__TextEditorCompleter* self, QTimerEvent* event) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self)) {
        vtextcustomeditortexteditorcompleter->TextCustomEditor::TextEditorCompleter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnTimerEvent(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_ChildEvent(TextCustomEditor__TextEditorCompleter* self, QChildEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter) {
        vtextcustomeditortexteditorcompleter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperChildEvent(TextCustomEditor__TextEditorCompleter* self, QChildEvent* event) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self)) {
        vtextcustomeditortexteditorcompleter->TextCustomEditor::TextEditorCompleter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnChildEvent(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_childevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_CustomEvent(TextCustomEditor__TextEditorCompleter* self, QEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter) {
        vtextcustomeditortexteditorcompleter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperCustomEvent(TextCustomEditor__TextEditorCompleter* self, QEvent* event) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self)) {
        vtextcustomeditortexteditorcompleter->TextCustomEditor::TextEditorCompleter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnCustomEvent(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_customevent_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_ConnectNotify(TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter) {
        vtextcustomeditortexteditorcompleter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperConnectNotify(TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self)) {
        vtextcustomeditortexteditorcompleter->TextCustomEditor::TextEditorCompleter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnConnectNotify(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_DisconnectNotify(TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter) {
        vtextcustomeditortexteditorcompleter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperDisconnectNotify(TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self)) {
        vtextcustomeditortexteditorcompleter->TextCustomEditor::TextEditorCompleter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::TextEditorCompleter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnDisconnectNotify(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    if (auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self))
        vtextcustomeditortexteditorcompleter->textcustomeditor__texteditorcompleter_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* TextCustomEditor__TextEditorCompleter_Sender(const TextCustomEditor__TextEditorCompleter* self) {
    if (auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self))) {
        return vtextcustomeditortexteditorcompleter->VirtualTextCustomEditorTextEditorCompleter::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditorCompleter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__TextEditorCompleter_SenderSignalIndex(const TextCustomEditor__TextEditorCompleter* self) {
    if (auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self))) {
        return vtextcustomeditortexteditorcompleter->VirtualTextCustomEditorTextEditorCompleter::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditorCompleter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__TextEditorCompleter_Receivers(const TextCustomEditor__TextEditorCompleter* self, const char* signal) {
    if (auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self))) {
        return vtextcustomeditortexteditorcompleter->VirtualTextCustomEditorTextEditorCompleter::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditorCompleter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__TextEditorCompleter_IsSignalConnected(const TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self))) {
        return vtextcustomeditortexteditorcompleter->VirtualTextCustomEditorTextEditorCompleter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::TextEditorCompleter::isSignalConnected called without a directly constructed type");
}

void TextCustomEditor__TextEditorCompleter_Delete(TextCustomEditor__TextEditorCompleter* self) {
    delete self;
}
