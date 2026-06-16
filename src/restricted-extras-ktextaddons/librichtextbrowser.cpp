#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBrowser>
#include <QTextCursor>
#include <QTextEdit>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__RichTextBrowser
#include <richtextbrowser.h>
#include "librichtextbrowser.h"
#include "librichtextbrowser.hxx"

TextCustomEditor__RichTextBrowser* TextCustomEditor__RichTextBrowser_new(QWidget* parent) {
    return new VirtualTextCustomEditorRichTextBrowser(parent);
}

TextCustomEditor__RichTextBrowser* TextCustomEditor__RichTextBrowser_new2() {
    return new VirtualTextCustomEditorRichTextBrowser();
}

QMetaObject* TextCustomEditor__RichTextBrowser_MetaObject(const TextCustomEditor__RichTextBrowser* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__RichTextBrowser_Metacast(TextCustomEditor__RichTextBrowser* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__RichTextBrowser_Metacall(TextCustomEditor__RichTextBrowser* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void TextCustomEditor__RichTextBrowser_SetSearchSupport(TextCustomEditor__RichTextBrowser* self, bool b) {
    self->setSearchSupport(b);
}

bool TextCustomEditor__RichTextBrowser_SearchSupport(const TextCustomEditor__RichTextBrowser* self) {
    return self->searchSupport();
}

bool TextCustomEditor__RichTextBrowser_TextToSpeechSupport(const TextCustomEditor__RichTextBrowser* self) {
    return self->textToSpeechSupport();
}

void TextCustomEditor__RichTextBrowser_SetTextToSpeechSupport(TextCustomEditor__RichTextBrowser* self, bool b) {
    self->setTextToSpeechSupport(b);
}

void TextCustomEditor__RichTextBrowser_SetWebShortcutSupport(TextCustomEditor__RichTextBrowser* self, bool b) {
    self->setWebShortcutSupport(b);
}

bool TextCustomEditor__RichTextBrowser_WebShortcutSupport(const TextCustomEditor__RichTextBrowser* self) {
    return self->webShortcutSupport();
}

void TextCustomEditor__RichTextBrowser_SetDefaultFontSize(TextCustomEditor__RichTextBrowser* self, int val) {
    self->setDefaultFontSize(static_cast<int>(val));
}

int TextCustomEditor__RichTextBrowser_ZoomFactor(const TextCustomEditor__RichTextBrowser* self) {
    return self->zoomFactor();
}

void TextCustomEditor__RichTextBrowser_SlotDisplayMessageIndicator(TextCustomEditor__RichTextBrowser* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->slotDisplayMessageIndicator(message_QString);
}

void TextCustomEditor__RichTextBrowser_SlotSpeakText(TextCustomEditor__RichTextBrowser* self) {
    self->slotSpeakText();
}

void TextCustomEditor__RichTextBrowser_SlotZoomReset(TextCustomEditor__RichTextBrowser* self) {
    self->slotZoomReset();
}

void TextCustomEditor__RichTextBrowser_AddExtraMenuEntry(TextCustomEditor__RichTextBrowser* self, QMenu* menu, QPoint* pos) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser && vtextcustomeditor__richtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditor__richtextbrowser->addExtraMenuEntry(menu, *pos);
    }
}

void TextCustomEditor__RichTextBrowser_ContextMenuEvent(TextCustomEditor__RichTextBrowser* self, QContextMenuEvent* event) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser && vtextcustomeditor__richtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditor__richtextbrowser->contextMenuEvent(event);
    }
}

bool TextCustomEditor__RichTextBrowser_Event(TextCustomEditor__RichTextBrowser* self, QEvent* ev) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser && vtextcustomeditor__richtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditor__richtextbrowser->event(ev);
    }
    return {};
}

void TextCustomEditor__RichTextBrowser_KeyPressEvent(TextCustomEditor__RichTextBrowser* self, QKeyEvent* event) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser && vtextcustomeditor__richtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditor__richtextbrowser->keyPressEvent(event);
    }
}

void TextCustomEditor__RichTextBrowser_WheelEvent(TextCustomEditor__RichTextBrowser* self, QWheelEvent* e) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser && vtextcustomeditor__richtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditor__richtextbrowser->wheelEvent(e);
    }
}

void TextCustomEditor__RichTextBrowser_Say(TextCustomEditor__RichTextBrowser* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void TextCustomEditor__RichTextBrowser_Connect_Say(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextBrowser*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextBrowser*, const char*)>(slot);
    TextCustomEditor::RichTextBrowser::connect(self, &TextCustomEditor::RichTextBrowser::say, [self, slotFunc](const QString& text) {
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

void TextCustomEditor__RichTextBrowser_FindText(TextCustomEditor__RichTextBrowser* self) {
    self->findText();
}

void TextCustomEditor__RichTextBrowser_Connect_FindText(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextBrowser*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextBrowser*)>(slot);
    TextCustomEditor::RichTextBrowser::connect(self, &TextCustomEditor::RichTextBrowser::findText, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* TextCustomEditor__RichTextBrowser_SuperMetaObject(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorrichtextbrowser->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::RichTextBrowser::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMetaObject(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__RichTextBrowser_SuperMetacast(TextCustomEditor__RichTextBrowser* self, const char* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Metacast_IsBase(true);
        return vtextcustomeditorrichtextbrowser->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::RichTextBrowser::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMetacast(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperMetacall(TextCustomEditor__RichTextBrowser* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Metacall_IsBase(true);
        return vtextcustomeditorrichtextbrowser->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::RichTextBrowser::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMetacall(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperAddExtraMenuEntry(TextCustomEditor__RichTextBrowser* self, QMenu* menu, QPoint* pos) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_AddExtraMenuEntry_IsBase(true);
        vtextcustomeditorrichtextbrowser->addExtraMenuEntry(menu, *pos);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->addExtraMenuEntry(menu, *pos);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnAddExtraMenuEntry(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperContextMenuEvent(TextCustomEditor__RichTextBrowser* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ContextMenuEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnContextMenuEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperEvent(TextCustomEditor__RichTextBrowser* self, QEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Event_IsBase(true);
        return vtextcustomeditorrichtextbrowser->event(ev);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Event_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Event_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperKeyPressEvent(TextCustomEditor__RichTextBrowser* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_KeyPressEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnKeyPressEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperWheelEvent(TextCustomEditor__RichTextBrowser* self, QWheelEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_WheelEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->wheelEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnWheelEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextBrowser_LoadResource(TextCustomEditor__RichTextBrowser* self, int typeVal, const QUrl* name) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return new QVariant(vtextcustomeditorrichtextbrowser->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextBrowser*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextBrowser_SuperLoadResource(TextCustomEditor__RichTextBrowser* self, int typeVal, const QUrl* name) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_LoadResource_IsBase(true);
        return new QVariant(vtextcustomeditorrichtextbrowser->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextBrowser*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnLoadResource(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_LoadResource_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Backward(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->backward();
    } else {
        self->TextCustomEditor::RichTextBrowser::backward();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperBackward(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Backward_IsBase(true);
        vtextcustomeditorrichtextbrowser->backward();
    } else {
        self->TextCustomEditor::RichTextBrowser::backward();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnBackward(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Backward_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Backward_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Forward(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->forward();
    } else {
        self->TextCustomEditor::RichTextBrowser::forward();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperForward(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Forward_IsBase(true);
        vtextcustomeditorrichtextbrowser->forward();
    } else {
        self->TextCustomEditor::RichTextBrowser::forward();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnForward(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Forward_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Forward_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Home(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->home();
    } else {
        self->TextCustomEditor::RichTextBrowser::home();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperHome(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Home_IsBase(true);
        vtextcustomeditorrichtextbrowser->home();
    } else {
        self->TextCustomEditor::RichTextBrowser::home();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnHome(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Home_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Home_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Reload(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->reload();
    } else {
        self->TextCustomEditor::RichTextBrowser::reload();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperReload(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Reload_IsBase(true);
        vtextcustomeditorrichtextbrowser->reload();
    } else {
        self->TextCustomEditor::RichTextBrowser::reload();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnReload(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Reload_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Reload_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MouseMoveEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->mouseMoveEvent(ev);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->mouseMoveEvent(ev);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMouseMoveEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MouseMoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->mouseMoveEvent(ev);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->mouseMoveEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMouseMoveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MousePressEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->mousePressEvent(ev);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->mousePressEvent(ev);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMousePressEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MousePressEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->mousePressEvent(ev);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->mousePressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMousePressEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MouseReleaseEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->mouseReleaseEvent(ev);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->mouseReleaseEvent(ev);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMouseReleaseEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->mouseReleaseEvent(ev);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->mouseReleaseEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMouseReleaseEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_FocusOutEvent(TextCustomEditor__RichTextBrowser* self, QFocusEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->focusOutEvent(ev);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->focusOutEvent(ev);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperFocusOutEvent(TextCustomEditor__RichTextBrowser* self, QFocusEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusOutEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->focusOutEvent(ev);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->focusOutEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnFocusOutEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_FocusNextPrevChild(TextCustomEditor__RichTextBrowser* self, bool next) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperFocusNextPrevChild(TextCustomEditor__RichTextBrowser* self, bool next) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorrichtextbrowser->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnFocusNextPrevChild(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_PaintEvent(TextCustomEditor__RichTextBrowser* self, QPaintEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->paintEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperPaintEvent(TextCustomEditor__RichTextBrowser* self, QPaintEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_PaintEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->paintEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnPaintEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DoSetSource(TextCustomEditor__RichTextBrowser* self, const QUrl* name, int typeVal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDoSetSource(TextCustomEditor__RichTextBrowser* self, const QUrl* name, int typeVal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DoSetSource_IsBase(true);
        vtextcustomeditorrichtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDoSetSource(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DoSetSource_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DoSetSource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextBrowser_InputMethodQuery(const TextCustomEditor__RichTextBrowser* self, int property) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return new QVariant(vtextcustomeditorrichtextbrowser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextBrowser*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextBrowser_SuperInputMethodQuery(const TextCustomEditor__RichTextBrowser* self, int property) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorrichtextbrowser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextBrowser*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInputMethodQuery(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_TimerEvent(TextCustomEditor__RichTextBrowser* self, QTimerEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->timerEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperTimerEvent(TextCustomEditor__RichTextBrowser* self, QTimerEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_TimerEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->timerEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnTimerEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_KeyReleaseEvent(TextCustomEditor__RichTextBrowser* self, QKeyEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->keyReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperKeyReleaseEvent(TextCustomEditor__RichTextBrowser* self, QKeyEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->keyReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnKeyReleaseEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ResizeEvent(TextCustomEditor__RichTextBrowser* self, QResizeEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->resizeEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperResizeEvent(TextCustomEditor__RichTextBrowser* self, QResizeEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ResizeEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->resizeEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnResizeEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMouseDoubleClickEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DragEnterEvent(TextCustomEditor__RichTextBrowser* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->dragEnterEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDragEnterEvent(TextCustomEditor__RichTextBrowser* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DragEnterEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->dragEnterEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDragEnterEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DragLeaveEvent(TextCustomEditor__RichTextBrowser* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->dragLeaveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDragLeaveEvent(TextCustomEditor__RichTextBrowser* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DragLeaveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->dragLeaveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDragLeaveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DragMoveEvent(TextCustomEditor__RichTextBrowser* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->dragMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDragMoveEvent(TextCustomEditor__RichTextBrowser* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DragMoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->dragMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDragMoveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DropEvent(TextCustomEditor__RichTextBrowser* self, QDropEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->dropEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDropEvent(TextCustomEditor__RichTextBrowser* self, QDropEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DropEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->dropEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDropEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_FocusInEvent(TextCustomEditor__RichTextBrowser* self, QFocusEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->focusInEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperFocusInEvent(TextCustomEditor__RichTextBrowser* self, QFocusEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusInEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->focusInEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnFocusInEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ShowEvent(TextCustomEditor__RichTextBrowser* self, QShowEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->showEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperShowEvent(TextCustomEditor__RichTextBrowser* self, QShowEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ShowEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->showEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnShowEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ChangeEvent(TextCustomEditor__RichTextBrowser* self, QEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->changeEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperChangeEvent(TextCustomEditor__RichTextBrowser* self, QEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ChangeEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->changeEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnChangeEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->createMimeDataFromSelection();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* TextCustomEditor__RichTextBrowser_SuperCreateMimeDataFromSelection(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_IsBase(true);
        return vtextcustomeditorrichtextbrowser->createMimeDataFromSelection();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCreateMimeDataFromSelection(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_CanInsertFromMimeData(const TextCustomEditor__RichTextBrowser* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperCanInsertFromMimeData(const TextCustomEditor__RichTextBrowser* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_CanInsertFromMimeData_IsBase(true);
        return vtextcustomeditorrichtextbrowser->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCanInsertFromMimeData(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_InsertFromMimeData(TextCustomEditor__RichTextBrowser* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->insertFromMimeData(source);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperInsertFromMimeData(TextCustomEditor__RichTextBrowser* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InsertFromMimeData_IsBase(true);
        vtextcustomeditorrichtextbrowser->insertFromMimeData(source);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInsertFromMimeData(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_InputMethodEvent(TextCustomEditor__RichTextBrowser* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperInputMethodEvent(TextCustomEditor__RichTextBrowser* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InputMethodEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInputMethodEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ScrollContentsBy(TextCustomEditor__RichTextBrowser* self, int dx, int dy) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperScrollContentsBy(TextCustomEditor__RichTextBrowser* self, int dx, int dy) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ScrollContentsBy_IsBase(true);
        vtextcustomeditorrichtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnScrollContentsBy(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DoSetTextCursor(TextCustomEditor__RichTextBrowser* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDoSetTextCursor(TextCustomEditor__RichTextBrowser* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DoSetTextCursor_IsBase(true);
        vtextcustomeditorrichtextbrowser->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDoSetTextCursor(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowser_MinimumSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return new QSize(vtextcustomeditorrichtextbrowser->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowser*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowser_SuperMinimumSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtextbrowser->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowser*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMinimumSizeHint(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowser_SizeHint(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return new QSize(vtextcustomeditorrichtextbrowser->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowser*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowser_SuperSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtextbrowser->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextBrowser*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSizeHint(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_SetupViewport(TextCustomEditor__RichTextBrowser* self, QWidget* viewport) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setupViewport(viewport);
    } else {
        self->TextCustomEditor::RichTextBrowser::setupViewport(viewport);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperSetupViewport(TextCustomEditor__RichTextBrowser* self, QWidget* viewport) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SetupViewport_IsBase(true);
        vtextcustomeditorrichtextbrowser->setupViewport(viewport);
    } else {
        self->TextCustomEditor::RichTextBrowser::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSetupViewport(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SetupViewport_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_EventFilter(TextCustomEditor__RichTextBrowser* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->eventFilter(param1, param2);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperEventFilter(TextCustomEditor__RichTextBrowser* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_EventFilter_IsBase(true);
        return vtextcustomeditorrichtextbrowser->eventFilter(param1, param2);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnEventFilter(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_ViewportEvent(TextCustomEditor__RichTextBrowser* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->viewportEvent(param1);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperViewportEvent(TextCustomEditor__RichTextBrowser* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ViewportEvent_IsBase(true);
        return vtextcustomeditorrichtextbrowser->viewportEvent(param1);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnViewportEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ViewportEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowser_ViewportSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return new QSize(vtextcustomeditorrichtextbrowser->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowser_SuperViewportSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ViewportSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtextbrowser->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnViewportSizeHint(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_InitStyleOption(const TextCustomEditor__RichTextBrowser* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->initStyleOption(option);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperInitStyleOption(const TextCustomEditor__RichTextBrowser* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InitStyleOption_IsBase(true);
        vtextcustomeditorrichtextbrowser->initStyleOption(option);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInitStyleOption(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InitStyleOption_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowser_DevType(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->devType();
    } else {
        return self->TextCustomEditor::RichTextBrowser::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperDevType(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DevType_IsBase(true);
        return vtextcustomeditorrichtextbrowser->devType();
    } else {
        return self->TextCustomEditor::RichTextBrowser::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDevType(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_SetVisible(TextCustomEditor__RichTextBrowser* self, bool visible) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextBrowser::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperSetVisible(TextCustomEditor__RichTextBrowser* self, bool visible) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SetVisible_IsBase(true);
        vtextcustomeditorrichtextbrowser->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextBrowser::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSetVisible(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowser_HeightForWidth(const TextCustomEditor__RichTextBrowser* self, int param1) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextBrowser::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperHeightForWidth(const TextCustomEditor__RichTextBrowser* self, int param1) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_HeightForWidth_IsBase(true);
        return vtextcustomeditorrichtextbrowser->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextBrowser::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnHeightForWidth(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_HasHeightForWidth(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextBrowser::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperHasHeightForWidth(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorrichtextbrowser->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextBrowser::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnHasHeightForWidth(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowser_PaintEngine(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextBrowser::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowser_SuperPaintEngine(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_PaintEngine_IsBase(true);
        return vtextcustomeditorrichtextbrowser->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextBrowser::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnPaintEngine(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_EnterEvent(TextCustomEditor__RichTextBrowser* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperEnterEvent(TextCustomEditor__RichTextBrowser* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_EnterEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnEnterEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_LeaveEvent(TextCustomEditor__RichTextBrowser* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperLeaveEvent(TextCustomEditor__RichTextBrowser* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_LeaveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnLeaveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MoveEvent(TextCustomEditor__RichTextBrowser* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMoveEvent(TextCustomEditor__RichTextBrowser* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MoveEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMoveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_CloseEvent(TextCustomEditor__RichTextBrowser* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperCloseEvent(TextCustomEditor__RichTextBrowser* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_CloseEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCloseEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_TabletEvent(TextCustomEditor__RichTextBrowser* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperTabletEvent(TextCustomEditor__RichTextBrowser* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_TabletEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnTabletEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ActionEvent(TextCustomEditor__RichTextBrowser* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperActionEvent(TextCustomEditor__RichTextBrowser* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ActionEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnActionEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_HideEvent(TextCustomEditor__RichTextBrowser* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperHideEvent(TextCustomEditor__RichTextBrowser* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_HideEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnHideEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_NativeEvent(TextCustomEditor__RichTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperNativeEvent(TextCustomEditor__RichTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_NativeEvent_IsBase(true);
        return vtextcustomeditorrichtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnNativeEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowser_Metric(const TextCustomEditor__RichTextBrowser* self, int param1) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperMetric(const TextCustomEditor__RichTextBrowser* self, int param1) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Metric_IsBase(true);
        return vtextcustomeditorrichtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMetric(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_InitPainter(const TextCustomEditor__RichTextBrowser* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperInitPainter(const TextCustomEditor__RichTextBrowser* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InitPainter_IsBase(true);
        vtextcustomeditorrichtextbrowser->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInitPainter(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowser_Redirected(const TextCustomEditor__RichTextBrowser* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowser_SuperRedirected(const TextCustomEditor__RichTextBrowser* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Redirected_IsBase(true);
        return vtextcustomeditorrichtextbrowser->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnRedirected(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextBrowser_SharedPainter(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextBrowser_SuperSharedPainter(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SharedPainter_IsBase(true);
        return vtextcustomeditorrichtextbrowser->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSharedPainter(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ChildEvent(TextCustomEditor__RichTextBrowser* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperChildEvent(TextCustomEditor__RichTextBrowser* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ChildEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnChildEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_CustomEvent(TextCustomEditor__RichTextBrowser* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperCustomEvent(TextCustomEditor__RichTextBrowser* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_CustomEvent_IsBase(true);
        vtextcustomeditorrichtextbrowser->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCustomEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ConnectNotify(TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperConnectNotify(TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ConnectNotify_IsBase(true);
        vtextcustomeditorrichtextbrowser->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnConnectNotify(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DisconnectNotify(TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDisconnectNotify(TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DisconnectNotify_IsBase(true);
        vtextcustomeditorrichtextbrowser->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDisconnectNotify(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* TextCustomEditor__RichTextBrowser_MousePopupMenu(TextCustomEditor__RichTextBrowser* self, QPoint* pos) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->mousePopupMenu(*pos);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->mousePopupMenu(*pos);
    }
}

// Base class handler implementation
QMenu* TextCustomEditor__RichTextBrowser_SuperMousePopupMenu(TextCustomEditor__RichTextBrowser* self, QPoint* pos) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MousePopupMenu_IsBase(true);
        return vtextcustomeditorrichtextbrowser->mousePopupMenu(*pos);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->mousePopupMenu(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMousePopupMenu(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_MousePopupMenu_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MousePopupMenu_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ZoomInF(TextCustomEditor__RichTextBrowser* self, float range) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperZoomInF(TextCustomEditor__RichTextBrowser* self, float range) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ZoomInF_IsBase(true);
        vtextcustomeditorrichtextbrowser->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnZoomInF(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ZoomInF_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_SetViewportMargins(TextCustomEditor__RichTextBrowser* self, int left, int top, int right, int bottom) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperSetViewportMargins(TextCustomEditor__RichTextBrowser* self, int left, int top, int right, int bottom) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SetViewportMargins_IsBase(true);
        vtextcustomeditorrichtextbrowser->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSetViewportMargins(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SetViewportMargins_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* TextCustomEditor__RichTextBrowser_ViewportMargins(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return new QMargins(vtextcustomeditorrichtextbrowser->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* TextCustomEditor__RichTextBrowser_SuperViewportMargins(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ViewportMargins_IsBase(true);
        return new QMargins(vtextcustomeditorrichtextbrowser->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnViewportMargins(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_ViewportMargins_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DrawFrame(TextCustomEditor__RichTextBrowser* self, QPainter* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->drawFrame(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDrawFrame(TextCustomEditor__RichTextBrowser* self, QPainter* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DrawFrame_IsBase(true);
        vtextcustomeditorrichtextbrowser->drawFrame(param1);
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDrawFrame(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_DrawFrame_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_UpdateMicroFocus(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperUpdateMicroFocus(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorrichtextbrowser->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnUpdateMicroFocus(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Create(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->create();
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperCreate(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Create_IsBase(true);
        vtextcustomeditorrichtextbrowser->create();
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCreate(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Create_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Destroy(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDestroy(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Destroy_IsBase(true);
        vtextcustomeditorrichtextbrowser->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextBrowser*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDestroy(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_FocusNextChild(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperFocusNextChild(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusNextChild_IsBase(true);
        return vtextcustomeditorrichtextbrowser->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnFocusNextChild(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_FocusPreviousChild(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperFocusPreviousChild(TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorrichtextbrowser->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnFocusPreviousChild(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__RichTextBrowser_Sender(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__RichTextBrowser_SuperSender(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Sender_IsBase(true);
        return vtextcustomeditorrichtextbrowser->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSender(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowser_SenderSignalIndex(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperSenderSignalIndex(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorrichtextbrowser->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSenderSignalIndex(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowser_Receivers(const TextCustomEditor__RichTextBrowser* self, const char* signal) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperReceivers(const TextCustomEditor__RichTextBrowser* self, const char* signal) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Receivers_IsBase(true);
        return vtextcustomeditorrichtextbrowser->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnReceivers(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_IsSignalConnected(const TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperIsSignalConnected(const TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_IsSignalConnected_IsBase(true);
        return vtextcustomeditorrichtextbrowser->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnIsSignalConnected(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__RichTextBrowser_GetDecodedMetricF(const TextCustomEditor__RichTextBrowser* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        return vtextcustomeditorrichtextbrowser->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__RichTextBrowser_SuperGetDecodedMetricF(const TextCustomEditor__RichTextBrowser* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorrichtextbrowser->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextBrowser*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnGetDecodedMetricF(const TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser && vtextcustomeditorrichtextbrowser->isVirtualTextCustomEditorRichTextBrowser) {
        vtextcustomeditorrichtextbrowser->setTextCustomEditor__RichTextBrowser_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__RichTextBrowser_Delete(TextCustomEditor__RichTextBrowser* self) {
    delete self;
}
