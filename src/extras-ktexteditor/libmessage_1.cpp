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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__Message_Tr(const char* s) {
    auto _ret = KTextEditor::Message::tr(s);
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
    auto _ret = self->text();
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
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
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
    KTextEditor::Message::connect(self,
                                  static_cast<void (KTextEditor::Message::*)(KTextEditor::Message*)>(&KTextEditor::Message::closed),
                                  [self, slotFunc](KTextEditor::Message* message) {
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
    KTextEditor::Message::connect(self,
                                  static_cast<void (KTextEditor::Message::*)(const QString&)>(&KTextEditor::Message::textChanged),
                                  [self, slotFunc](const QString& text) {
                                      const auto text_ret = text;
                                      // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                      QByteArray text_b = text_ret.toUtf8();
                                      auto text_str_len = text_b.length();
                                      const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                                      memcpy((void*)text_str, text_b.data(), text_str_len);
                                      ((char*)text_str)[text_str_len] = '\0';
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
    KTextEditor::Message::connect(self,
                                  static_cast<void (KTextEditor::Message::*)(const QIcon&)>(&KTextEditor::Message::iconChanged),
                                  [self, slotFunc](const QIcon& icon) {
                                      const QIcon& icon_ret = icon;
                                      // Cast returned reference into pointer
                                      QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
                                      slotFunc(self, sigval1);
                                  });
}

libqt_string KTextEditor__Message_Tr2(const char* s, const char* c) {
    auto _ret = KTextEditor::Message::tr(s, c);
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
    auto _ret = KTextEditor::Message::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTextEditor__Message_SuperMetaObject(const KTextEditor__Message* self) {
    return (QMetaObject*)self->KTextEditor::Message::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnMetaObject(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self)))
        vktexteditormessage->ktexteditor__message_metaobject_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTextEditor__Message_SuperMetacast(KTextEditor__Message* self, const char* param1) {
    return self->KTextEditor::Message::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnMetacast(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_metacast_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__Message_SuperMetacall(KTextEditor__Message* self, int param1, int param2, void** param3) {
    return self->KTextEditor::Message::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnMetacall(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_metacall_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__Message_Event(KTextEditor__Message* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KTextEditor__Message_SuperEvent(KTextEditor__Message* self, QEvent* event) {
    return self->KTextEditor::Message::event(event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnEvent(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_event_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_Event_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__Message_EventFilter(KTextEditor__Message* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTextEditor__Message_SuperEventFilter(KTextEditor__Message* self, QObject* watched, QEvent* event) {
    return self->KTextEditor::Message::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnEventFilter(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_eventfilter_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Message_TimerEvent(KTextEditor__Message* self, QTimerEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage) {
        vktexteditormessage->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Message::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Message_SuperTimerEvent(KTextEditor__Message* self, QTimerEvent* event) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self)) {
        vktexteditormessage->KTextEditor::Message::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Message::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnTimerEvent(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_timerevent_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Message_ChildEvent(KTextEditor__Message* self, QChildEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage) {
        vktexteditormessage->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Message::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Message_SuperChildEvent(KTextEditor__Message* self, QChildEvent* event) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self)) {
        vktexteditormessage->KTextEditor::Message::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Message::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnChildEvent(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_childevent_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Message_CustomEvent(KTextEditor__Message* self, QEvent* event) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage) {
        vktexteditormessage->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Message::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Message_SuperCustomEvent(KTextEditor__Message* self, QEvent* event) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self)) {
        vktexteditormessage->KTextEditor::Message::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Message::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnCustomEvent(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_customevent_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Message_ConnectNotify(KTextEditor__Message* self, const QMetaMethod* signal) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage) {
        vktexteditormessage->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Message::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Message_SuperConnectNotify(KTextEditor__Message* self, const QMetaMethod* signal) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self)) {
        vktexteditormessage->KTextEditor::Message::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Message::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnConnectNotify(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_connectnotify_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__Message_DisconnectNotify(KTextEditor__Message* self, const QMetaMethod* signal) {
    auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self);
    if (vktexteditormessage) {
        vktexteditormessage->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::Message::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__Message_SuperDisconnectNotify(KTextEditor__Message* self, const QMetaMethod* signal) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self)) {
        vktexteditormessage->KTextEditor::Message::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::Message::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__Message_OnDisconnectNotify(KTextEditor__Message* self, intptr_t slot) {
    if (auto* vktexteditormessage = dynamic_cast<VirtualKTextEditorMessage*>(self))
        vktexteditormessage->ktexteditor__message_disconnectnotify_callback = reinterpret_cast<VirtualKTextEditorMessage::KTextEditor__Message_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KTextEditor__Message_Sender(const KTextEditor__Message* self) {
    if (auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self))) {
        return vktexteditormessage->VirtualKTextEditorMessage::sender();
    } else
        qFatal("Error: Protected method KTextEditor::Message::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__Message_SenderSignalIndex(const KTextEditor__Message* self) {
    if (auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self))) {
        return vktexteditormessage->VirtualKTextEditorMessage::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTextEditor::Message::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__Message_Receivers(const KTextEditor__Message* self, const char* signal) {
    if (auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self))) {
        return vktexteditormessage->VirtualKTextEditorMessage::receivers(signal);
    } else
        qFatal("Error: Protected method KTextEditor::Message::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__Message_IsSignalConnected(const KTextEditor__Message* self, const QMetaMethod* signal) {
    if (auto* vktexteditormessage = const_cast<VirtualKTextEditorMessage*>(dynamic_cast<const VirtualKTextEditorMessage*>(self))) {
        return vktexteditormessage->VirtualKTextEditorMessage::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTextEditor::Message::isSignalConnected called without a directly constructed type");
}

void KTextEditor__Message_Delete(KTextEditor__Message* self) {
    delete self;
}
