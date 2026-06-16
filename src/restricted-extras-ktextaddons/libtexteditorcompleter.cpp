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

// Base class handler implementation
QMetaObject* TextCustomEditor__TextEditorCompleter_SuperMetaObject(const TextCustomEditor__TextEditorCompleter* self) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditortexteditorcompleter->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::TextEditorCompleter::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnMetaObject(const TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__TextEditorCompleter_SuperMetacast(TextCustomEditor__TextEditorCompleter* self, const char* param1) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Metacast_IsBase(true);
        return vtextcustomeditortexteditorcompleter->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::TextEditorCompleter::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnMetacast(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditorCompleter_SuperMetacall(TextCustomEditor__TextEditorCompleter* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Metacall_IsBase(true);
        return vtextcustomeditortexteditorcompleter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::TextEditorCompleter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnMetacall(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditorCompleter_Event(TextCustomEditor__TextEditorCompleter* self, QEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        return vtextcustomeditortexteditorcompleter->event(event);
    } else {
        return self->TextCustomEditor::TextEditorCompleter::event(event);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditorCompleter_SuperEvent(TextCustomEditor__TextEditorCompleter* self, QEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Event_IsBase(true);
        return vtextcustomeditortexteditorcompleter->event(event);
    } else {
        return self->TextCustomEditor::TextEditorCompleter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnEvent(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Event_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditorCompleter_EventFilter(TextCustomEditor__TextEditorCompleter* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        return vtextcustomeditortexteditorcompleter->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::TextEditorCompleter::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditorCompleter_SuperEventFilter(TextCustomEditor__TextEditorCompleter* self, QObject* watched, QEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_EventFilter_IsBase(true);
        return vtextcustomeditortexteditorcompleter->eventFilter(watched, event);
    } else {
        return self->TextCustomEditor::TextEditorCompleter::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnEventFilter(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_TimerEvent(TextCustomEditor__TextEditorCompleter* self, QTimerEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperTimerEvent(TextCustomEditor__TextEditorCompleter* self, QTimerEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_TimerEvent_IsBase(true);
        vtextcustomeditortexteditorcompleter->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnTimerEvent(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_ChildEvent(TextCustomEditor__TextEditorCompleter* self, QChildEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->childEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperChildEvent(TextCustomEditor__TextEditorCompleter* self, QChildEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_ChildEvent_IsBase(true);
        vtextcustomeditortexteditorcompleter->childEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnChildEvent(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_CustomEvent(TextCustomEditor__TextEditorCompleter* self, QEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->customEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperCustomEvent(TextCustomEditor__TextEditorCompleter* self, QEvent* event) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_CustomEvent_IsBase(true);
        vtextcustomeditortexteditorcompleter->customEvent(event);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnCustomEvent(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_ConnectNotify(TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperConnectNotify(TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_ConnectNotify_IsBase(true);
        vtextcustomeditortexteditorcompleter->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnConnectNotify(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextEditorCompleter_DisconnectNotify(TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__TextEditorCompleter_SuperDisconnectNotify(TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_DisconnectNotify_IsBase(true);
        vtextcustomeditortexteditorcompleter->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextEditorCompleter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnDisconnectNotify(TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = dynamic_cast<VirtualTextCustomEditorTextEditorCompleter*>(self);
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__TextEditorCompleter_Sender(const TextCustomEditor__TextEditorCompleter* self) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        return vtextcustomeditortexteditorcompleter->sender();
    } else {
        return ((VirtualTextCustomEditorTextEditorCompleter*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__TextEditorCompleter_SuperSender(const TextCustomEditor__TextEditorCompleter* self) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Sender_IsBase(true);
        return vtextcustomeditortexteditorcompleter->sender();
    } else {
        return ((VirtualTextCustomEditorTextEditorCompleter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnSender(const TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextEditorCompleter_SenderSignalIndex(const TextCustomEditor__TextEditorCompleter* self) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        return vtextcustomeditortexteditorcompleter->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorTextEditorCompleter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditorCompleter_SuperSenderSignalIndex(const TextCustomEditor__TextEditorCompleter* self) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_SenderSignalIndex_IsBase(true);
        return vtextcustomeditortexteditorcompleter->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorTextEditorCompleter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnSenderSignalIndex(const TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextEditorCompleter_Receivers(const TextCustomEditor__TextEditorCompleter* self, const char* signal) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        return vtextcustomeditortexteditorcompleter->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorTextEditorCompleter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__TextEditorCompleter_SuperReceivers(const TextCustomEditor__TextEditorCompleter* self, const char* signal) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Receivers_IsBase(true);
        return vtextcustomeditortexteditorcompleter->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorTextEditorCompleter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnReceivers(const TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextEditorCompleter_IsSignalConnected(const TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        return vtextcustomeditortexteditorcompleter->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorTextEditorCompleter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextEditorCompleter_SuperIsSignalConnected(const TextCustomEditor__TextEditorCompleter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_IsSignalConnected_IsBase(true);
        return vtextcustomeditortexteditorcompleter->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorTextEditorCompleter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextEditorCompleter_OnIsSignalConnected(const TextCustomEditor__TextEditorCompleter* self, intptr_t slot) {
    auto* vtextcustomeditortexteditorcompleter = const_cast<VirtualTextCustomEditorTextEditorCompleter*>(dynamic_cast<const VirtualTextCustomEditorTextEditorCompleter*>(self));
    if (vtextcustomeditortexteditorcompleter && vtextcustomeditortexteditorcompleter->isVirtualTextCustomEditorTextEditorCompleter) {
        vtextcustomeditortexteditorcompleter->setTextCustomEditor__TextEditorCompleter_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorTextEditorCompleter::TextCustomEditor__TextEditorCompleter_IsSignalConnected_Callback>(slot));
    }
}

void TextCustomEditor__TextEditorCompleter_Delete(TextCustomEditor__TextEditorCompleter* self) {
    delete self;
}
