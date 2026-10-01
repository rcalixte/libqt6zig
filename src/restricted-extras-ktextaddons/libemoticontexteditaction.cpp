#include <KActionMenu>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsWidgets__EmoticonTextEditAction
#include <emoticontexteditaction.h>
#include "libemoticontexteditaction.h"
#include "libemoticontexteditaction.hxx"

TextEmoticonsWidgets__EmoticonTextEditAction* TextEmoticonsWidgets__EmoticonTextEditAction_new(QObject* parent) {
    return new VirtualTextEmoticonsWidgetsEmoticonTextEditAction(parent);
}

QMetaObject* TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEmoticonsWidgets__EmoticonTextEditAction_Metacast(TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEmoticonsWidgets__EmoticonTextEditAction_Metacall(TextEmoticonsWidgets__EmoticonTextEditAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextEmoticonsWidgets__EmoticonTextEditAction_Tr(const char* s) {
    auto _ret = TextEmoticonsWidgets::EmoticonTextEditAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextEmoticonsWidgets__EmoticonTextEditAction_SetCustomEmojiSupport(TextEmoticonsWidgets__EmoticonTextEditAction* self, bool b) {
    self->setCustomEmojiSupport(b);
}

bool TextEmoticonsWidgets__EmoticonTextEditAction_CustomEmojiSupport(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    return self->customEmojiSupport();
}

void TextEmoticonsWidgets__EmoticonTextEditAction_InsertEmoticon(TextEmoticonsWidgets__EmoticonTextEditAction* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->insertEmoticon(param1_QString);
}

void TextEmoticonsWidgets__EmoticonTextEditAction_Connect_InsertEmoticon(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    void (*slotFunc)(TextEmoticonsWidgets__EmoticonTextEditAction*, const char*) = reinterpret_cast<void (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, const char*)>(slot);
    TextEmoticonsWidgets::EmoticonTextEditAction::connect(self,
                                                          static_cast<void (TextEmoticonsWidgets::EmoticonTextEditAction::*)(const QString&)>(&TextEmoticonsWidgets::EmoticonTextEditAction::insertEmoticon),
                                                          [self, slotFunc](const QString& param1) {
                                                              const auto param1_ret = param1;
                                                              // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                              QByteArray param1_b = param1_ret.toUtf8();
                                                              auto param1_str_len = param1_b.length();
                                                              const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                                                              memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                                                              ((char*)param1_str)[param1_str_len] = '\0';
                                                              const char* sigval1 = param1_str;
                                                              slotFunc(self, sigval1);
                                                              libqt_free(param1_str);
                                                          });
}

libqt_string TextEmoticonsWidgets__EmoticonTextEditAction_Tr2(const char* s, const char* c) {
    auto _ret = TextEmoticonsWidgets::EmoticonTextEditAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEmoticonsWidgets__EmoticonTextEditAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEmoticonsWidgets::EmoticonTextEditAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetaObject(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    return (QMetaObject*)self->TextEmoticonsWidgets::EmoticonTextEditAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnMetaObject(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_metaobject_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetacast(TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* param1) {
    return self->TextEmoticonsWidgets::EmoticonTextEditAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnMetacast(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_metacast_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetacall(TextEmoticonsWidgets__EmoticonTextEditAction* self, int param1, int param2, void** param3) {
    return self->TextEmoticonsWidgets::EmoticonTextEditAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnMetacall(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_metacall_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_Metacall_Callback>(slot);
}

// Derived class handler implementation
QWidget* TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* parent) {
    return self->createWidget(parent);
}

// Base class handler implementation
QWidget* TextEmoticonsWidgets__EmoticonTextEditAction_SuperCreateWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* parent) {
    return self->TextEmoticonsWidgets::EmoticonTextEditAction::createWidget(parent);
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnCreateWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_createwidget_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_Event(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction) {
        return vtextemoticonswidgetsemoticontexteditaction->event(param1);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* param1) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)) {
        return vtextemoticonswidgetsemoticontexteditaction->TextEmoticonsWidgets::EmoticonTextEditAction::event(param1);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_event_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter(TextEmoticonsWidgets__EmoticonTextEditAction* self, QObject* param1, QEvent* param2) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction) {
        return vtextemoticonswidgetsemoticontexteditaction->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperEventFilter(TextEmoticonsWidgets__EmoticonTextEditAction* self, QObject* param1, QEvent* param2) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)) {
        return vtextemoticonswidgetsemoticontexteditaction->TextEmoticonsWidgets::EmoticonTextEditAction::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnEventFilter(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_eventfilter_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* widget) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction) {
        vtextemoticonswidgetsemoticontexteditaction->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperDeleteWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* widget) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)) {
        vtextemoticonswidgetsemoticontexteditaction->TextEmoticonsWidgets::EmoticonTextEditAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnDeleteWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_deletewidget_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QTimerEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction) {
        vtextemoticonswidgetsemoticontexteditaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperTimerEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QTimerEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)) {
        vtextemoticonswidgetsemoticontexteditaction->TextEmoticonsWidgets::EmoticonTextEditAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnTimerEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_timerevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QChildEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction) {
        vtextemoticonswidgetsemoticontexteditaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperChildEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QChildEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)) {
        vtextemoticonswidgetsemoticontexteditaction->TextEmoticonsWidgets::EmoticonTextEditAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnChildEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_childevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction) {
        vtextemoticonswidgetsemoticontexteditaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperCustomEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* event) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)) {
        vtextemoticonswidgetsemoticontexteditaction->TextEmoticonsWidgets::EmoticonTextEditAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnCustomEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_customevent_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction) {
        vtextemoticonswidgetsemoticontexteditaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperConnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)) {
        vtextemoticonswidgetsemoticontexteditaction->TextEmoticonsWidgets::EmoticonTextEditAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnConnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_connectnotify_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction) {
        vtextemoticonswidgetsemoticontexteditaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperDisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self)) {
        vtextemoticonswidgetsemoticontexteditaction->TextEmoticonsWidgets::EmoticonTextEditAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEmoticonsWidgets::EmoticonTextEditAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnDisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))
        vtextemoticonswidgetsemoticontexteditaction->textemoticonswidgets__emoticontexteditaction_disconnectnotify_callback = reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))) {
        QList<QWidget*> _ret = vtextemoticonswidgetsemoticontexteditaction->VirtualTextEmoticonsWidgetsEmoticonTextEditAction::createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextEmoticonsWidgets__EmoticonTextEditAction_Sender(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))) {
        return vtextemoticonswidgetsemoticontexteditaction->VirtualTextEmoticonsWidgetsEmoticonTextEditAction::sender();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))) {
        return vtextemoticonswidgetsemoticontexteditaction->VirtualTextEmoticonsWidgetsEmoticonTextEditAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEmoticonsWidgets__EmoticonTextEditAction_Receivers(const TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* signal) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))) {
        return vtextemoticonswidgetsemoticontexteditaction->VirtualTextEmoticonsWidgetsEmoticonTextEditAction::receivers(signal);
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected(const TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    if (auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self))) {
        return vtextemoticonswidgetsemoticontexteditaction->VirtualTextEmoticonsWidgetsEmoticonTextEditAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEmoticonsWidgets::EmoticonTextEditAction::isSignalConnected called without a directly constructed type");
}

void TextEmoticonsWidgets__EmoticonTextEditAction_Delete(TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    delete self;
}
