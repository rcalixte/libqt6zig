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
    auto* vtextemoticonswidgets__emoticontexteditaction = dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgets__emoticontexteditaction && vtextemoticonswidgets__emoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->metaObject();
    }
}

void* TextEmoticonsWidgets__EmoticonTextEditAction_Metacast(TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* param1) {
    auto* vtextemoticonswidgets__emoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgets__emoticontexteditaction && vtextemoticonswidgets__emoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->qt_metacast(param1);
    }
}

int TextEmoticonsWidgets__EmoticonTextEditAction_Metacall(TextEmoticonsWidgets__EmoticonTextEditAction* self, int param1, int param2, void** param3) {
    auto* vtextemoticonswidgets__emoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgets__emoticontexteditaction && vtextemoticonswidgets__emoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    TextEmoticonsWidgets::EmoticonTextEditAction::connect(self, &TextEmoticonsWidgets::EmoticonTextEditAction::insertEmoticon, [self, slotFunc](const QString& param1) {
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

// Base class handler implementation
QMetaObject* TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetaObject(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_IsBase(true);
        return (QMetaObject*)vtextemoticonswidgetsemoticontexteditaction->metaObject();
    } else {
        return (QMetaObject*)self->TextEmoticonsWidgets::EmoticonTextEditAction::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnMetaObject(const TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetacast(TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* param1) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Metacast_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->qt_metacast(param1);
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditAction::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnMetacast(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Metacast_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetacall(TextEmoticonsWidgets__EmoticonTextEditAction* self, int param1, int param2, void** param3) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Metacall_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnMetacall(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Metacall_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* parent) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return vtextemoticonswidgetsemoticontexteditaction->createWidget(parent);
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditAction::createWidget(parent);
    }
}

// Base class handler implementation
QWidget* TextEmoticonsWidgets__EmoticonTextEditAction_SuperCreateWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* parent) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->createWidget(parent);
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditAction::createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnCreateWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_Event(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return vtextemoticonswidgetsemoticontexteditaction->event(param1);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Event_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->event(param1);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Event_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter(TextEmoticonsWidgets__EmoticonTextEditAction* self, QObject* param1, QEvent* param2) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return vtextemoticonswidgetsemoticontexteditaction->eventFilter(param1, param2);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperEventFilter(TextEmoticonsWidgets__EmoticonTextEditAction* self, QObject* param1, QEvent* param2) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->eventFilter(param1, param2);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnEventFilter(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* widget) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->deleteWidget(widget);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperDeleteWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, QWidget* widget) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_IsBase(true);
        vtextemoticonswidgetsemoticontexteditaction->deleteWidget(widget);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnDeleteWidget(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QTimerEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperTimerEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QTimerEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditaction->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnTimerEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QChildEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->childEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperChildEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QChildEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditaction->childEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnChildEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->customEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperCustomEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditaction->customEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnCustomEvent(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperConnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_IsBase(true);
        vtextemoticonswidgetsemoticontexteditaction->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnConnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_SuperDisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_IsBase(true);
        vtextemoticonswidgetsemoticontexteditaction->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnDisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self);
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        QList<QWidget*> _ret = vtextemoticonswidgetsemoticontexteditaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ TextEmoticonsWidgets__EmoticonTextEditAction_SuperCreatedWidgets(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vtextemoticonswidgetsemoticontexteditaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnCreatedWidgets(const TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEmoticonsWidgets__EmoticonTextEditAction_Sender(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return vtextemoticonswidgetsemoticontexteditaction->sender();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEmoticonsWidgets__EmoticonTextEditAction_SuperSender(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Sender_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->sender();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnSender(const TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Sender_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return vtextemoticonswidgetsemoticontexteditaction->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditAction_SuperSenderSignalIndex(const TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnSenderSignalIndex(const TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditAction_Receivers(const TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return vtextemoticonswidgetsemoticontexteditaction->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditAction_SuperReceivers(const TextEmoticonsWidgets__EmoticonTextEditAction* self, const char* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Receivers_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnReceivers(const TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_Receivers_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected(const TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        return vtextemoticonswidgetsemoticontexteditaction->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperIsSignalConnected(const TextEmoticonsWidgets__EmoticonTextEditAction* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditaction->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditAction_OnIsSignalConnected(const TextEmoticonsWidgets__EmoticonTextEditAction* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditaction = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditAction*>(self));
    if (vtextemoticonswidgetsemoticontexteditaction && vtextemoticonswidgetsemoticontexteditaction->isVirtualTextEmoticonsWidgetsEmoticonTextEditAction) {
        vtextemoticonswidgetsemoticontexteditaction->setTextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditAction::TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected_Callback>(slot));
    }
}

void TextEmoticonsWidgets__EmoticonTextEditAction_Delete(TextEmoticonsWidgets__EmoticonTextEditAction* self) {
    delete self;
}
