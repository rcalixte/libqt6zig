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

libqt_string TextCustomEditor__RichTextBrowser_Tr(const char* s) {
    auto _ret = TextCustomEditor::RichTextBrowser::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    if (vtextcustomeditor__richtextbrowser) {
        vtextcustomeditor__richtextbrowser->addExtraMenuEntry(menu, *pos);
    }
}

void TextCustomEditor__RichTextBrowser_ContextMenuEvent(TextCustomEditor__RichTextBrowser* self, QContextMenuEvent* event) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser) {
        vtextcustomeditor__richtextbrowser->contextMenuEvent(event);
    }
}

bool TextCustomEditor__RichTextBrowser_Event(TextCustomEditor__RichTextBrowser* self, QEvent* ev) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser) {
        return vtextcustomeditor__richtextbrowser->event(ev);
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::event called without a directly constructed type");
}

void TextCustomEditor__RichTextBrowser_KeyPressEvent(TextCustomEditor__RichTextBrowser* self, QKeyEvent* event) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser) {
        vtextcustomeditor__richtextbrowser->keyPressEvent(event);
    }
}

void TextCustomEditor__RichTextBrowser_WheelEvent(TextCustomEditor__RichTextBrowser* self, QWheelEvent* e) {
    auto* vtextcustomeditor__richtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditor__richtextbrowser) {
        vtextcustomeditor__richtextbrowser->wheelEvent(e);
    }
}

void TextCustomEditor__RichTextBrowser_Say(TextCustomEditor__RichTextBrowser* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void TextCustomEditor__RichTextBrowser_Connect_Say(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextBrowser*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextBrowser*, const char*)>(slot);
    TextCustomEditor::RichTextBrowser::connect(self,
                                               static_cast<void (TextCustomEditor::RichTextBrowser::*)(const QString&)>(&TextCustomEditor::RichTextBrowser::say),
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

void TextCustomEditor__RichTextBrowser_FindText(TextCustomEditor__RichTextBrowser* self) {
    self->findText();
}

void TextCustomEditor__RichTextBrowser_Connect_FindText(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextBrowser*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextBrowser*)>(slot);
    TextCustomEditor::RichTextBrowser::connect(self,
                                               static_cast<void (TextCustomEditor::RichTextBrowser::*)()>(&TextCustomEditor::RichTextBrowser::findText),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

libqt_string TextCustomEditor__RichTextBrowser_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::RichTextBrowser::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__RichTextBrowser_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::RichTextBrowser::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__RichTextBrowser_SuperMetaObject(const TextCustomEditor__RichTextBrowser* self) {
    return (QMetaObject*)self->TextCustomEditor::RichTextBrowser::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMetaObject(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__RichTextBrowser_SuperMetacast(TextCustomEditor__RichTextBrowser* self, const char* param1) {
    return self->TextCustomEditor::RichTextBrowser::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMetacast(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_metacast_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperMetacall(TextCustomEditor__RichTextBrowser* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::RichTextBrowser::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMetacall(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_metacall_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Metacall_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperAddExtraMenuEntry(TextCustomEditor__RichTextBrowser* self, QMenu* menu, QPoint* pos) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::addExtraMenuEntry(menu, *pos);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::addExtraMenuEntry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnAddExtraMenuEntry(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_addextramenuentry_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_AddExtraMenuEntry_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperContextMenuEvent(TextCustomEditor__RichTextBrowser* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnContextMenuEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperEvent(TextCustomEditor__RichTextBrowser* self, QEvent* ev) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::event(ev);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_event_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Event_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperKeyPressEvent(TextCustomEditor__RichTextBrowser* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnKeyPressEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperWheelEvent(TextCustomEditor__RichTextBrowser* self, QWheelEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnWheelEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextBrowser_LoadResource(TextCustomEditor__RichTextBrowser* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextBrowser_SuperLoadResource(TextCustomEditor__RichTextBrowser* self, int typeVal, const QUrl* name) {
    return new QVariant(self->TextCustomEditor::RichTextBrowser::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnLoadResource(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_loadresource_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_LoadResource_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Backward(TextCustomEditor__RichTextBrowser* self) {
    self->backward();
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperBackward(TextCustomEditor__RichTextBrowser* self) {
    self->TextCustomEditor::RichTextBrowser::backward();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnBackward(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_backward_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Backward_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Forward(TextCustomEditor__RichTextBrowser* self) {
    self->forward();
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperForward(TextCustomEditor__RichTextBrowser* self) {
    self->TextCustomEditor::RichTextBrowser::forward();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnForward(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_forward_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Forward_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Home(TextCustomEditor__RichTextBrowser* self) {
    self->home();
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperHome(TextCustomEditor__RichTextBrowser* self) {
    self->TextCustomEditor::RichTextBrowser::home();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnHome(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_home_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Home_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_Reload(TextCustomEditor__RichTextBrowser* self) {
    self->reload();
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperReload(TextCustomEditor__RichTextBrowser* self) {
    self->TextCustomEditor::RichTextBrowser::reload();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnReload(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_reload_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Reload_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MouseMoveEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->mouseMoveEvent(ev);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMouseMoveEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::mouseMoveEvent(ev);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMouseMoveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MousePressEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->mousePressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMousePressEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::mousePressEvent(ev);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMousePressEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MouseReleaseEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->mouseReleaseEvent(ev);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMouseReleaseEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* ev) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::mouseReleaseEvent(ev);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMouseReleaseEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_FocusOutEvent(TextCustomEditor__RichTextBrowser* self, QFocusEvent* ev) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->focusOutEvent(ev);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperFocusOutEvent(TextCustomEditor__RichTextBrowser* self, QFocusEvent* ev) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::focusOutEvent(ev);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnFocusOutEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_FocusNextPrevChild(TextCustomEditor__RichTextBrowser* self, bool next) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperFocusNextPrevChild(TextCustomEditor__RichTextBrowser* self, bool next) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnFocusNextPrevChild(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_PaintEvent(TextCustomEditor__RichTextBrowser* self, QPaintEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperPaintEvent(TextCustomEditor__RichTextBrowser* self, QPaintEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnPaintEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DoSetSource(TextCustomEditor__RichTextBrowser* self, const QUrl* name, int typeVal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::doSetSource called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDoSetSource(TextCustomEditor__RichTextBrowser* self, const QUrl* name, int typeVal) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::doSetSource called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDoSetSource(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_dosetsource_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DoSetSource_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextBrowser_InputMethodQuery(const TextCustomEditor__RichTextBrowser* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextBrowser_SuperInputMethodQuery(const TextCustomEditor__RichTextBrowser* self, int property) {
    return new QVariant(self->TextCustomEditor::RichTextBrowser::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInputMethodQuery(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_TimerEvent(TextCustomEditor__RichTextBrowser* self, QTimerEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperTimerEvent(TextCustomEditor__RichTextBrowser* self, QTimerEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnTimerEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_KeyReleaseEvent(TextCustomEditor__RichTextBrowser* self, QKeyEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperKeyReleaseEvent(TextCustomEditor__RichTextBrowser* self, QKeyEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnKeyReleaseEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ResizeEvent(TextCustomEditor__RichTextBrowser* self, QResizeEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperResizeEvent(TextCustomEditor__RichTextBrowser* self, QResizeEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnResizeEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextBrowser* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMouseDoubleClickEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DragEnterEvent(TextCustomEditor__RichTextBrowser* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDragEnterEvent(TextCustomEditor__RichTextBrowser* self, QDragEnterEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDragEnterEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DragLeaveEvent(TextCustomEditor__RichTextBrowser* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDragLeaveEvent(TextCustomEditor__RichTextBrowser* self, QDragLeaveEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDragLeaveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DragMoveEvent(TextCustomEditor__RichTextBrowser* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDragMoveEvent(TextCustomEditor__RichTextBrowser* self, QDragMoveEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDragMoveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DropEvent(TextCustomEditor__RichTextBrowser* self, QDropEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDropEvent(TextCustomEditor__RichTextBrowser* self, QDropEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDropEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_FocusInEvent(TextCustomEditor__RichTextBrowser* self, QFocusEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperFocusInEvent(TextCustomEditor__RichTextBrowser* self, QFocusEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnFocusInEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ShowEvent(TextCustomEditor__RichTextBrowser* self, QShowEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperShowEvent(TextCustomEditor__RichTextBrowser* self, QShowEvent* param1) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnShowEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_showevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ChangeEvent(TextCustomEditor__RichTextBrowser* self, QEvent* e) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperChangeEvent(TextCustomEditor__RichTextBrowser* self, QEvent* e) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnChangeEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* TextCustomEditor__RichTextBrowser_SuperCreateMimeDataFromSelection(const TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCreateMimeDataFromSelection(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_createmimedatafromselection_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_CanInsertFromMimeData(const TextCustomEditor__RichTextBrowser* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperCanInsertFromMimeData(const TextCustomEditor__RichTextBrowser* self, const QMimeData* source) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCanInsertFromMimeData(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_caninsertfrommimedata_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_InsertFromMimeData(TextCustomEditor__RichTextBrowser* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperInsertFromMimeData(TextCustomEditor__RichTextBrowser* self, const QMimeData* source) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInsertFromMimeData(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_insertfrommimedata_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_InputMethodEvent(TextCustomEditor__RichTextBrowser* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperInputMethodEvent(TextCustomEditor__RichTextBrowser* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInputMethodEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ScrollContentsBy(TextCustomEditor__RichTextBrowser* self, int dx, int dy) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperScrollContentsBy(TextCustomEditor__RichTextBrowser* self, int dx, int dy) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnScrollContentsBy(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_scrollcontentsby_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DoSetTextCursor(TextCustomEditor__RichTextBrowser* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDoSetTextCursor(TextCustomEditor__RichTextBrowser* self, const QTextCursor* cursor) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDoSetTextCursor(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_dosettextcursor_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowser_MinimumSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowser_SuperMinimumSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    return new QSize(self->TextCustomEditor::RichTextBrowser::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMinimumSizeHint(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowser_SizeHint(const TextCustomEditor__RichTextBrowser* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowser_SuperSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    return new QSize(self->TextCustomEditor::RichTextBrowser::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSizeHint(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_SetupViewport(TextCustomEditor__RichTextBrowser* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperSetupViewport(TextCustomEditor__RichTextBrowser* self, QWidget* viewport) {
    self->TextCustomEditor::RichTextBrowser::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSetupViewport(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_setupviewport_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_EventFilter(TextCustomEditor__RichTextBrowser* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperEventFilter(TextCustomEditor__RichTextBrowser* self, QObject* param1, QEvent* param2) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnEventFilter(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_ViewportEvent(TextCustomEditor__RichTextBrowser* self, QEvent* param1) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperViewportEvent(TextCustomEditor__RichTextBrowser* self, QEvent* param1) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnViewportEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_viewportevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextBrowser_ViewportSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    return new QSize((self->*&VirtualTextCustomEditorRichTextBrowser::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextBrowser_SuperViewportSizeHint(const TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        return new QSize(vtextcustomeditorrichtextbrowser->viewportSizeHint());
    qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnViewportSizeHint(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_viewportsizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_InitStyleOption(const TextCustomEditor__RichTextBrowser* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperInitStyleOption(const TextCustomEditor__RichTextBrowser* self, QStyleOptionFrame* option) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInitStyleOption(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_initstyleoption_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowser_DevType(const TextCustomEditor__RichTextBrowser* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperDevType(const TextCustomEditor__RichTextBrowser* self) {
    return self->TextCustomEditor::RichTextBrowser::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDevType(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_devtype_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_SetVisible(TextCustomEditor__RichTextBrowser* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperSetVisible(TextCustomEditor__RichTextBrowser* self, bool visible) {
    self->TextCustomEditor::RichTextBrowser::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSetVisible(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowser_HeightForWidth(const TextCustomEditor__RichTextBrowser* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperHeightForWidth(const TextCustomEditor__RichTextBrowser* self, int param1) {
    return self->TextCustomEditor::RichTextBrowser::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnHeightForWidth(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_HasHeightForWidth(const TextCustomEditor__RichTextBrowser* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperHasHeightForWidth(const TextCustomEditor__RichTextBrowser* self) {
    return self->TextCustomEditor::RichTextBrowser::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnHasHeightForWidth(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowser_PaintEngine(const TextCustomEditor__RichTextBrowser* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextBrowser_SuperPaintEngine(const TextCustomEditor__RichTextBrowser* self) {
    return self->TextCustomEditor::RichTextBrowser::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnPaintEngine(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_EnterEvent(TextCustomEditor__RichTextBrowser* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperEnterEvent(TextCustomEditor__RichTextBrowser* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnEnterEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_LeaveEvent(TextCustomEditor__RichTextBrowser* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperLeaveEvent(TextCustomEditor__RichTextBrowser* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnLeaveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_MoveEvent(TextCustomEditor__RichTextBrowser* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperMoveEvent(TextCustomEditor__RichTextBrowser* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMoveEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_CloseEvent(TextCustomEditor__RichTextBrowser* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperCloseEvent(TextCustomEditor__RichTextBrowser* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCloseEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_TabletEvent(TextCustomEditor__RichTextBrowser* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperTabletEvent(TextCustomEditor__RichTextBrowser* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnTabletEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ActionEvent(TextCustomEditor__RichTextBrowser* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperActionEvent(TextCustomEditor__RichTextBrowser* self, QActionEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnActionEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_HideEvent(TextCustomEditor__RichTextBrowser* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperHideEvent(TextCustomEditor__RichTextBrowser* self, QHideEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnHideEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextBrowser_NativeEvent(TextCustomEditor__RichTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextBrowser_SuperNativeEvent(TextCustomEditor__RichTextBrowser* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnNativeEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextBrowser_Metric(const TextCustomEditor__RichTextBrowser* self, int param1) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextBrowser_SuperMetric(const TextCustomEditor__RichTextBrowser* self, int param1) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnMetric(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_metric_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_InitPainter(const TextCustomEditor__RichTextBrowser* self, QPainter* painter) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperInitPainter(const TextCustomEditor__RichTextBrowser* self, QPainter* painter) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnInitPainter(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowser_Redirected(const TextCustomEditor__RichTextBrowser* self, QPoint* offset) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextBrowser_SuperRedirected(const TextCustomEditor__RichTextBrowser* self, QPoint* offset) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnRedirected(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_redirected_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextBrowser_SharedPainter(const TextCustomEditor__RichTextBrowser* self) {
    auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self));
    if (vtextcustomeditorrichtextbrowser) {
        return vtextcustomeditorrichtextbrowser->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextBrowser_SuperSharedPainter(const TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnSharedPainter(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ChildEvent(TextCustomEditor__RichTextBrowser* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperChildEvent(TextCustomEditor__RichTextBrowser* self, QChildEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnChildEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_childevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_CustomEvent(TextCustomEditor__RichTextBrowser* self, QEvent* event) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperCustomEvent(TextCustomEditor__RichTextBrowser* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnCustomEvent(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_customevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_ConnectNotify(TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperConnectNotify(TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnConnectNotify(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextBrowser_DisconnectNotify(TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self);
    if (vtextcustomeditorrichtextbrowser) {
        vtextcustomeditorrichtextbrowser->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextBrowser_SuperDisconnectNotify(TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->TextCustomEditor::RichTextBrowser::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextBrowser::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextBrowser_OnDisconnectNotify(TextCustomEditor__RichTextBrowser* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self))
        vtextcustomeditorrichtextbrowser->textcustomeditor__richtextbrowser_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextBrowser::TextCustomEditor__RichTextBrowser_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QMenu* TextCustomEditor__RichTextBrowser_MousePopupMenu(TextCustomEditor__RichTextBrowser* self, QPoint* pos) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        return vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::mousePopupMenu(*pos);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::mousePopupMenu called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowser_ZoomInF(TextCustomEditor__RichTextBrowser* self, float range) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowser_SetViewportMargins(TextCustomEditor__RichTextBrowser* self, int left, int top, int right, int bottom) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* TextCustomEditor__RichTextBrowser_ViewportMargins(const TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self)))
        return new QMargins(vtextcustomeditorrichtextbrowser->viewportMargins());
    qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowser_DrawFrame(TextCustomEditor__RichTextBrowser* self, QPainter* param1) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::drawFrame(param1);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowser_UpdateMicroFocus(TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowser_Create(TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextBrowser_Destroy(TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowser_FocusNextChild(TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        return vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowser_FocusPreviousChild(TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = dynamic_cast<VirtualTextCustomEditorRichTextBrowser*>(self)) {
        return vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__RichTextBrowser_Sender(const TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextBrowser_SenderSignalIndex(const TextCustomEditor__RichTextBrowser* self) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextBrowser_Receivers(const TextCustomEditor__RichTextBrowser* self, const char* signal) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextBrowser_IsSignalConnected(const TextCustomEditor__RichTextBrowser* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__RichTextBrowser_GetDecodedMetricF(const TextCustomEditor__RichTextBrowser* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorrichtextbrowser = const_cast<VirtualTextCustomEditorRichTextBrowser*>(dynamic_cast<const VirtualTextCustomEditorRichTextBrowser*>(self))) {
        return vtextcustomeditorrichtextbrowser->VirtualTextCustomEditorRichTextBrowser::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextBrowser::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__RichTextBrowser_Delete(TextCustomEditor__RichTextBrowser* self) {
    delete self;
}
