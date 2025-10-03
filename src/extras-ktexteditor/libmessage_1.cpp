#include <KTextEditor/Document>
#include <KTextEditor/Message>
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <message.h>
#include "libmessage_1.h"
#include "libmessage_1.hxx"

KTextEditor__Message* KTextEditor__Message_new(const libqt_string richtext) {
    QString richtext_QString = QString::fromUtf8(richtext.data, richtext.len);
    return new VirtualKTextEditorMessage(richtext_QString);
}

KTextEditor__Message* KTextEditor__Message_new2(const libqt_string richtext, int typeVal) {
    QString richtext_QString = QString::fromUtf8(richtext.data, richtext.len);
    return new VirtualKTextEditorMessage(richtext_QString, static_cast<KTextEditor::Message::MessageType>(typeVal));
}

QMetaObject* KTextEditor__Message_MetaObject(const KTextEditor__Message* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__Message_Metacast(KTextEditor__Message* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__Message_Metacall(KTextEditor__Message* self, int param1, int param2, void** param3) {
    auto* vktexteditor__message = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditor__message && vktexteditor__message->isVirtualKTextEditorMessage) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEditorMessage*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEditor__Message_Tr(const char* s) {
    QString _ret = KTextEditor::Message::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Message_Text(const KTextEditor__Message* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIcon* KTextEditor__Message_Icon(const KTextEditor__Message* self) {
    return new QIcon(self->icon());
}

int KTextEditor__Message_MessageType(const KTextEditor__Message* self) {
    return static_cast<int>(self->messageType());
}

void KTextEditor__Message_AddAction(KTextEditor__Message* self, QAction* action) {
    self->addAction(action);
}

libqt_list /* of QAction* */ KTextEditor__Message_Actions(const KTextEditor__Message* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KTextEditor__Message_SetAutoHide(KTextEditor__Message* self) {
    self->setAutoHide();
}

int KTextEditor__Message_AutoHide(const KTextEditor__Message* self) {
    return self->autoHide();
}

void KTextEditor__Message_SetAutoHideMode(KTextEditor__Message* self, int mode) {
    self->setAutoHideMode(static_cast<KTextEditor::Message::AutoHideMode>(mode));
}

int KTextEditor__Message_AutoHideMode(const KTextEditor__Message* self) {
    return static_cast<int>(self->autoHideMode());
}

void KTextEditor__Message_SetWordWrap(KTextEditor__Message* self, bool wordWrap) {
    self->setWordWrap(wordWrap);
}

bool KTextEditor__Message_WordWrap(const KTextEditor__Message* self) {
    return self->wordWrap();
}

void KTextEditor__Message_SetPriority(KTextEditor__Message* self, int priority) {
    self->setPriority(static_cast<int>(priority));
}

int KTextEditor__Message_Priority(const KTextEditor__Message* self) {
    return self->priority();
}

void KTextEditor__Message_SetView(KTextEditor__Message* self, KTextEditor__View* view) {
    self->setView(view);
}

KTextEditor__View* KTextEditor__Message_View(const KTextEditor__Message* self) {
    return self->view();
}

void KTextEditor__Message_SetDocument(KTextEditor__Message* self, KTextEditor__Document* document) {
    self->setDocument(document);
}

KTextEditor__Document* KTextEditor__Message_Document(const KTextEditor__Message* self) {
    return self->document();
}

void KTextEditor__Message_SetPosition(KTextEditor__Message* self, int position) {
    self->setPosition(static_cast<KTextEditor::Message::MessagePosition>(position));
}

int KTextEditor__Message_Position(const KTextEditor__Message* self) {
    return static_cast<int>(self->position());
}

void KTextEditor__Message_SetText(KTextEditor__Message* self, const libqt_string richtext) {
    QString richtext_QString = QString::fromUtf8(richtext.data, richtext.len);
    self->setText(richtext_QString);
}

void KTextEditor__Message_SetIcon(KTextEditor__Message* self, const QIcon* icon) {
    self->setIcon(*icon);
}

void KTextEditor__Message_Closed(KTextEditor__Message* self, KTextEditor__Message* message) {
    self->closed(message);
}

void KTextEditor__Message_Connect_Closed(KTextEditor__Message* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Message*, KTextEditor__Message*) = reinterpret_cast<void (*)(KTextEditor__Message*, KTextEditor__Message*)>(slot);
    KTextEditor::Message::connect(self, &KTextEditor::Message::closed, [self, slotFunc](KTextEditor::Message* message) {
        KTextEditor__Message* sigval1 = message;
        slotFunc(self, sigval1);
    });
}

void KTextEditor__Message_TextChanged(KTextEditor__Message* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textChanged(text_QString);
}

void KTextEditor__Message_Connect_TextChanged(KTextEditor__Message* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Message*, const char*) = reinterpret_cast<void (*)(KTextEditor__Message*, const char*)>(slot);
    KTextEditor::Message::connect(self, &KTextEditor::Message::textChanged, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        slotFunc(self, sigval1);
        libqt_free(text_str);
    });
}

void KTextEditor__Message_IconChanged(KTextEditor__Message* self, const QIcon* icon) {
    self->iconChanged(*icon);
}

void KTextEditor__Message_Connect_IconChanged(KTextEditor__Message* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__Message*, QIcon*) = reinterpret_cast<void (*)(KTextEditor__Message*, QIcon*)>(slot);
    KTextEditor::Message::connect(self, &KTextEditor::Message::iconChanged, [self, slotFunc](const QIcon& icon) {
        const QIcon& icon_ret = icon;
        // Cast returned reference into pointer
        QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string KTextEditor__Message_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::Message::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__Message_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::Message::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__Message_AddAction2(KTextEditor__Message* self, QAction* action, bool closeOnTrigger) {
    self->addAction(action, closeOnTrigger);
}

void KTextEditor__Message_SetAutoHide1(KTextEditor__Message* self, int delay) {
    self->setAutoHide(static_cast<int>(delay));
}

// Base class handler implementation
int KTextEditor__Message_QBaseMetacall(KTextEditor__Message* self, int param1, int param2, void** param3) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_Metacall_IsBase(true);
        return vktexteditormessage->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEditor::Message::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnMetacall(KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_Metacall_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Message_Event(KTextEditor__Message* self, QEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        return vktexteditormessage->event(event);
    } else {
        return self->KTextEditor::Message::event(event);
    }
}

// Base class handler implementation
bool KTextEditor__Message_QBaseEvent(KTextEditor__Message* self, QEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_Event_IsBase(true);
        return vktexteditormessage->event(event);
    } else {
        return self->KTextEditor::Message::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnEvent(KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_Event_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Message_EventFilter(KTextEditor__Message* self, QObject* watched, QEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        return vktexteditormessage->eventFilter(watched, event);
    } else {
        return self->KTextEditor::Message::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTextEditor__Message_QBaseEventFilter(KTextEditor__Message* self, QObject* watched, QEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_EventFilter_IsBase(true);
        return vktexteditormessage->eventFilter(watched, event);
    } else {
        return self->KTextEditor::Message::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnEventFilter(KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_EventFilter_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Message_TimerEvent(KTextEditor__Message* self, QTimerEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->timerEvent(event);
    } else {
        ((VirtualKTextEditorMessage*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Message_QBaseTimerEvent(KTextEditor__Message* self, QTimerEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_TimerEvent_IsBase(true);
        vktexteditormessage->timerEvent(event);
    } else {
        ((VirtualKTextEditorMessage*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnTimerEvent(KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_TimerEvent_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Message_ChildEvent(KTextEditor__Message* self, QChildEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->childEvent(event);
    } else {
        ((VirtualKTextEditorMessage*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Message_QBaseChildEvent(KTextEditor__Message* self, QChildEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_ChildEvent_IsBase(true);
        vktexteditormessage->childEvent(event);
    } else {
        ((VirtualKTextEditorMessage*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnChildEvent(KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_ChildEvent_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Message_CustomEvent(KTextEditor__Message* self, QEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->customEvent(event);
    } else {
        ((VirtualKTextEditorMessage*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__Message_QBaseCustomEvent(KTextEditor__Message* self, QEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_CustomEvent_IsBase(true);
        vktexteditormessage->customEvent(event);
    } else {
        ((VirtualKTextEditorMessage*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnCustomEvent(KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_CustomEvent_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Message_ConnectNotify(KTextEditor__Message* self, const QMetaMethod* signal) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorMessage*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__Message_QBaseConnectNotify(KTextEditor__Message* self, const QMetaMethod* signal) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_ConnectNotify_IsBase(true);
        vktexteditormessage->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorMessage*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnConnectNotify(KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__Message_DisconnectNotify(KTextEditor__Message* self, const QMetaMethod* signal) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorMessage*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__Message_QBaseDisconnectNotify(KTextEditor__Message* self, const QMetaMethod* signal) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_DisconnectNotify_IsBase(true);
        vktexteditormessage->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorMessage*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnDisconnectNotify(KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEditor__Message_Sender(const KTextEditor__Message* self) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        return vktexteditormessage->sender();
    } else {
        return ((VirtualKTextEditorMessage*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEditor__Message_QBaseSender(const KTextEditor__Message* self) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_Sender_IsBase(true);
        return vktexteditormessage->sender();
    } else {
        return ((VirtualKTextEditorMessage*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnSender(const KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_Sender_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__Message_SenderSignalIndex(const KTextEditor__Message* self) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        return vktexteditormessage->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorMessage*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEditor__Message_QBaseSenderSignalIndex(const KTextEditor__Message* self) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_SenderSignalIndex_IsBase(true);
        return vktexteditormessage->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorMessage*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnSenderSignalIndex(const KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__Message_Receivers(const KTextEditor__Message* self, const char* signal) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        return vktexteditormessage->receivers(signal);
    } else {
        return ((VirtualKTextEditorMessage*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEditor__Message_QBaseReceivers(const KTextEditor__Message* self, const char* signal) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_Receivers_IsBase(true);
        return vktexteditormessage->receivers(signal);
    } else {
        return ((VirtualKTextEditorMessage*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnReceivers(const KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_Receivers_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__Message_IsSignalConnected(const KTextEditor__Message* self, const QMetaMethod* signal) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        return vktexteditormessage->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorMessage*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEditor__Message_QBaseIsSignalConnected(const KTextEditor__Message* self, const QMetaMethod* signal) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_IsSignalConnected_IsBase(true);
        return vktexteditormessage->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorMessage*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnIsSignalConnected(const KTextEditor__Message* self, intptr_t slot) {
    auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self));
    if (vktexteditormessage && vktexteditormessage->isVirtualKTextEditorMessage) {
        vktexteditormessage->setKTextEditor__Message_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_IsSignalConnected_Callback>(slot));
    }
}

void KTextEditor__Message_Delete(KTextEditor__Message* self) {
    delete self;
}
