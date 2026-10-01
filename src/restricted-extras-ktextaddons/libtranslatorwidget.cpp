#include <QAbstractScrollArea>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
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
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBlock>
#include <QTextCursor>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorTextEdit
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorWidget
#include <translatorwidget.h>
#include "libtranslatorwidget.h"
#include "libtranslatorwidget.hxx"

TextTranslator__TranslatorTextEdit* TextTranslator__TranslatorTextEdit_new(QWidget* parent) {
    return new VirtualTextTranslatorTranslatorTextEdit(parent);
}

TextTranslator__TranslatorTextEdit* TextTranslator__TranslatorTextEdit_new2() {
    return new VirtualTextTranslatorTranslatorTextEdit();
}

QMetaObject* TextTranslator__TranslatorTextEdit_MetaObject(const TextTranslator__TranslatorTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorTextEdit_Metacast(TextTranslator__TranslatorTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorTextEdit_Metacall(TextTranslator__TranslatorTextEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorTextEdit_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextTranslator__TranslatorTextEdit_TranslateText(TextTranslator__TranslatorTextEdit* self) {
    self->translateText();
}

void TextTranslator__TranslatorTextEdit_Connect_TranslateText(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorTextEdit*) = reinterpret_cast<void (*)(TextTranslator__TranslatorTextEdit*)>(slot);
    TextTranslator::TranslatorTextEdit::connect(self,
                                                static_cast<void (TextTranslator::TranslatorTextEdit::*)()>(&TextTranslator::TranslatorTextEdit::translateText),
                                                [self, slotFunc]() {
                                                    slotFunc(self);
                                                });
}

void TextTranslator__TranslatorTextEdit_DropEvent(TextTranslator__TranslatorTextEdit* self, QDropEvent* param1) {
    auto* vtexttranslator__translatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslator__translatortextedit) {
        vtexttranslator__translatortextedit->dropEvent(param1);
    }
}

libqt_string TextTranslator__TranslatorTextEdit_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorTextEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorTextEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextTranslator__TranslatorTextEdit_SuperMetaObject(const TextTranslator__TranslatorTextEdit* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorTextEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMetaObject(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorTextEdit_SuperMetacast(TextTranslator__TranslatorTextEdit* self, const char* param1) {
    return self->TextTranslator::TranslatorTextEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMetacast(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperMetacall(TextTranslator__TranslatorTextEdit* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMetacall(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDropEvent(TextTranslator__TranslatorTextEdit* self, QDropEvent* param1) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDropEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_dropevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorTextEdit_LoadResource(TextTranslator__TranslatorTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorTextEdit_SuperLoadResource(TextTranslator__TranslatorTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->TextTranslator::TranslatorTextEdit::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnLoadResource(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_loadresource_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_LoadResource_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorTextEdit_InputMethodQuery(const TextTranslator__TranslatorTextEdit* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorTextEdit_SuperInputMethodQuery(const TextTranslator__TranslatorTextEdit* self, int property) {
    return new QVariant(self->TextTranslator::TranslatorTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInputMethodQuery(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_inputmethodquery_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_Event(TextTranslator__TranslatorTextEdit* self, QEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->event(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperEvent(TextTranslator__TranslatorTextEdit* self, QEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::event(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Event_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_TimerEvent(TextTranslator__TranslatorTextEdit* self, QTimerEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperTimerEvent(TextTranslator__TranslatorTextEdit* self, QTimerEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnTimerEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_KeyPressEvent(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperKeyPressEvent(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnKeyPressEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_keypressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_KeyReleaseEvent(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperKeyReleaseEvent(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnKeyReleaseEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_keyreleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ResizeEvent(TextTranslator__TranslatorTextEdit* self, QResizeEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperResizeEvent(TextTranslator__TranslatorTextEdit* self, QResizeEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnResizeEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_resizeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_PaintEvent(TextTranslator__TranslatorTextEdit* self, QPaintEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperPaintEvent(TextTranslator__TranslatorTextEdit* self, QPaintEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnPaintEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_paintevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MousePressEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMousePressEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMousePressEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_mousepressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MouseMoveEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMouseMoveEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMouseMoveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_mousemoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MouseReleaseEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMouseReleaseEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMouseReleaseEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_mousereleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMouseDoubleClickEvent(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMouseDoubleClickEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_FocusNextPrevChild(TextTranslator__TranslatorTextEdit* self, bool next) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperFocusNextPrevChild(TextTranslator__TranslatorTextEdit* self, bool next) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFocusNextPrevChild(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_focusnextprevchild_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ContextMenuEvent(TextTranslator__TranslatorTextEdit* self, QContextMenuEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperContextMenuEvent(TextTranslator__TranslatorTextEdit* self, QContextMenuEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnContextMenuEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_contextmenuevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DragEnterEvent(TextTranslator__TranslatorTextEdit* self, QDragEnterEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDragEnterEvent(TextTranslator__TranslatorTextEdit* self, QDragEnterEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDragEnterEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_dragenterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DragLeaveEvent(TextTranslator__TranslatorTextEdit* self, QDragLeaveEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDragLeaveEvent(TextTranslator__TranslatorTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDragLeaveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_dragleaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DragMoveEvent(TextTranslator__TranslatorTextEdit* self, QDragMoveEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDragMoveEvent(TextTranslator__TranslatorTextEdit* self, QDragMoveEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDragMoveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_dragmoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_FocusInEvent(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperFocusInEvent(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFocusInEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_focusinevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_FocusOutEvent(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperFocusOutEvent(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnFocusOutEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_focusoutevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ShowEvent(TextTranslator__TranslatorTextEdit* self, QShowEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperShowEvent(TextTranslator__TranslatorTextEdit* self, QShowEvent* param1) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnShowEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_showevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ChangeEvent(TextTranslator__TranslatorTextEdit* self, QEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperChangeEvent(TextTranslator__TranslatorTextEdit* self, QEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnChangeEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_changeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_WheelEvent(TextTranslator__TranslatorTextEdit* self, QWheelEvent* e) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperWheelEvent(TextTranslator__TranslatorTextEdit* self, QWheelEvent* e) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnWheelEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_wheelevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* TextTranslator__TranslatorTextEdit_SuperCreateMimeDataFromSelection(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCreateMimeDataFromSelection(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_createmimedatafromselection_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_CanInsertFromMimeData(const TextTranslator__TranslatorTextEdit* self, const QMimeData* source) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperCanInsertFromMimeData(const TextTranslator__TranslatorTextEdit* self, const QMimeData* source) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCanInsertFromMimeData(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_caninsertfrommimedata_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_InsertFromMimeData(TextTranslator__TranslatorTextEdit* self, const QMimeData* source) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperInsertFromMimeData(TextTranslator__TranslatorTextEdit* self, const QMimeData* source) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInsertFromMimeData(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_insertfrommimedata_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_InputMethodEvent(TextTranslator__TranslatorTextEdit* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperInputMethodEvent(TextTranslator__TranslatorTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInputMethodEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_inputmethodevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ScrollContentsBy(TextTranslator__TranslatorTextEdit* self, int dx, int dy) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperScrollContentsBy(TextTranslator__TranslatorTextEdit* self, int dx, int dy) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnScrollContentsBy(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_scrollcontentsby_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DoSetTextCursor(TextTranslator__TranslatorTextEdit* self, const QTextCursor* cursor) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDoSetTextCursor(TextTranslator__TranslatorTextEdit* self, const QTextCursor* cursor) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDoSetTextCursor(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_dosettextcursor_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorTextEdit_MinimumSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorTextEdit_SuperMinimumSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    return new QSize(self->TextTranslator::TranslatorTextEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMinimumSizeHint(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_minimumsizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorTextEdit_SizeHint(const TextTranslator__TranslatorTextEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorTextEdit_SuperSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    return new QSize(self->TextTranslator::TranslatorTextEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSizeHint(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_sizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_SetupViewport(TextTranslator__TranslatorTextEdit* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperSetupViewport(TextTranslator__TranslatorTextEdit* self, QWidget* viewport) {
    self->TextTranslator::TranslatorTextEdit::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSetupViewport(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_setupviewport_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_EventFilter(TextTranslator__TranslatorTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperEventFilter(TextTranslator__TranslatorTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnEventFilter(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_ViewportEvent(TextTranslator__TranslatorTextEdit* self, QEvent* param1) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperViewportEvent(TextTranslator__TranslatorTextEdit* self, QEvent* param1) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnViewportEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_viewportevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorTextEdit_ViewportSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    return new QSize((self->*&VirtualTextTranslatorTranslatorTextEdit::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorTextEdit_SuperViewportSizeHint(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        return new QSize(vtexttranslatortranslatortextedit->viewportSizeHint());
    qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnViewportSizeHint(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_viewportsizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_InitStyleOption(const TextTranslator__TranslatorTextEdit* self, QStyleOptionFrame* option) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperInitStyleOption(const TextTranslator__TranslatorTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInitStyleOption(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_initstyleoption_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorTextEdit_DevType(const TextTranslator__TranslatorTextEdit* self) {
    return self->devType();
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperDevType(const TextTranslator__TranslatorTextEdit* self) {
    return self->TextTranslator::TranslatorTextEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDevType(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_devtype_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_SetVisible(TextTranslator__TranslatorTextEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperSetVisible(TextTranslator__TranslatorTextEdit* self, bool visible) {
    self->TextTranslator::TranslatorTextEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSetVisible(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_setvisible_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorTextEdit_HeightForWidth(const TextTranslator__TranslatorTextEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperHeightForWidth(const TextTranslator__TranslatorTextEdit* self, int param1) {
    return self->TextTranslator::TranslatorTextEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnHeightForWidth(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_heightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_HasHeightForWidth(const TextTranslator__TranslatorTextEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperHasHeightForWidth(const TextTranslator__TranslatorTextEdit* self) {
    return self->TextTranslator::TranslatorTextEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnHasHeightForWidth(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_hasheightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorTextEdit_PaintEngine(const TextTranslator__TranslatorTextEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorTextEdit_SuperPaintEngine(const TextTranslator__TranslatorTextEdit* self) {
    return self->TextTranslator::TranslatorTextEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnPaintEngine(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_paintengine_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_EnterEvent(TextTranslator__TranslatorTextEdit* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperEnterEvent(TextTranslator__TranslatorTextEdit* self, QEnterEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnEnterEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_enterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_LeaveEvent(TextTranslator__TranslatorTextEdit* self, QEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperLeaveEvent(TextTranslator__TranslatorTextEdit* self, QEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnLeaveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_leaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_MoveEvent(TextTranslator__TranslatorTextEdit* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperMoveEvent(TextTranslator__TranslatorTextEdit* self, QMoveEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMoveEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_moveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_CloseEvent(TextTranslator__TranslatorTextEdit* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperCloseEvent(TextTranslator__TranslatorTextEdit* self, QCloseEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCloseEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_closeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_TabletEvent(TextTranslator__TranslatorTextEdit* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperTabletEvent(TextTranslator__TranslatorTextEdit* self, QTabletEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnTabletEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_tabletevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ActionEvent(TextTranslator__TranslatorTextEdit* self, QActionEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperActionEvent(TextTranslator__TranslatorTextEdit* self, QActionEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnActionEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_actionevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_HideEvent(TextTranslator__TranslatorTextEdit* self, QHideEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperHideEvent(TextTranslator__TranslatorTextEdit* self, QHideEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnHideEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_hideevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorTextEdit_NativeEvent(TextTranslator__TranslatorTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorTextEdit_SuperNativeEvent(TextTranslator__TranslatorTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnNativeEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_nativeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorTextEdit_Metric(const TextTranslator__TranslatorTextEdit* self, int param1) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextTranslator__TranslatorTextEdit_SuperMetric(const TextTranslator__TranslatorTextEdit* self, int param1) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnMetric(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_metric_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_InitPainter(const TextTranslator__TranslatorTextEdit* self, QPainter* painter) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperInitPainter(const TextTranslator__TranslatorTextEdit* self, QPainter* painter) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnInitPainter(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_initpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorTextEdit_Redirected(const TextTranslator__TranslatorTextEdit* self, QPoint* offset) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorTextEdit_SuperRedirected(const TextTranslator__TranslatorTextEdit* self, QPoint* offset) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnRedirected(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_redirected_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorTextEdit_SharedPainter(const TextTranslator__TranslatorTextEdit* self) {
    auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self));
    if (vtexttranslatortranslatortextedit) {
        return vtexttranslatortranslatortextedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorTextEdit_SuperSharedPainter(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnSharedPainter(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_sharedpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ChildEvent(TextTranslator__TranslatorTextEdit* self, QChildEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperChildEvent(TextTranslator__TranslatorTextEdit* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnChildEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_CustomEvent(TextTranslator__TranslatorTextEdit* self, QEvent* event) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperCustomEvent(TextTranslator__TranslatorTextEdit* self, QEvent* event) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnCustomEvent(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_ConnectNotify(TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperConnectNotify(TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnConnectNotify(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorTextEdit_DisconnectNotify(TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self);
    if (vtexttranslatortranslatortextedit) {
        vtexttranslatortranslatortextedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorTextEdit_SuperDisconnectNotify(TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->TextTranslator::TranslatorTextEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorTextEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorTextEdit_OnDisconnectNotify(TextTranslator__TranslatorTextEdit* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self))
        vtexttranslatortranslatortextedit->texttranslator__translatortextedit_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorTextEdit::TextTranslator__TranslatorTextEdit_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QTextBlock* TextTranslator__TranslatorTextEdit_FirstVisibleBlock(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        return new QTextBlock(vtexttranslatortranslatortextedit->firstVisibleBlock());
    qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::firstVisibleBlock called without a directly constructed type");
}

// Derived class handler implementation
QPointF* TextTranslator__TranslatorTextEdit_ContentOffset(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        return new QPointF(vtexttranslatortranslatortextedit->contentOffset());
    qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::contentOffset called without a directly constructed type");
}

// Derived class handler implementation
QRectF* TextTranslator__TranslatorTextEdit_BlockBoundingRect(const TextTranslator__TranslatorTextEdit* self, const QTextBlock* block) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        return new QRectF(vtexttranslatortranslatortextedit->blockBoundingRect(*block));
    qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::blockBoundingRect called without a directly constructed type");
}

// Derived class handler implementation
QRectF* TextTranslator__TranslatorTextEdit_BlockBoundingGeometry(const TextTranslator__TranslatorTextEdit* self, const QTextBlock* block) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        return new QRectF(vtexttranslatortranslatortextedit->blockBoundingGeometry(*block));
    qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::blockBoundingGeometry called without a directly constructed type");
}

// Derived class handler implementation
QAbstractTextDocumentLayout__PaintContext* TextTranslator__TranslatorTextEdit_GetPaintContext(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        return new QAbstractTextDocumentLayout::PaintContext(vtexttranslatortranslatortextedit->getPaintContext());
    qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::getPaintContext called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorTextEdit_ZoomInF(TextTranslator__TranslatorTextEdit* self, float range) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorTextEdit_SetViewportMargins(TextTranslator__TranslatorTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* TextTranslator__TranslatorTextEdit_ViewportMargins(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self)))
        return new QMargins(vtexttranslatortranslatortextedit->viewportMargins());
    qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorTextEdit_DrawFrame(TextTranslator__TranslatorTextEdit* self, QPainter* param1) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::drawFrame(param1);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorTextEdit_UpdateMicroFocus(TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorTextEdit_Create(TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::create();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorTextEdit_Destroy(TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::destroy();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorTextEdit_FocusNextChild(TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        return vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::focusNextChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorTextEdit_FocusPreviousChild(TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = dynamic_cast<VirtualTextTranslatorTranslatorTextEdit*>(self)) {
        return vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorTextEdit_Sender(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorTextEdit_SenderSignalIndex(const TextTranslator__TranslatorTextEdit* self) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorTextEdit_Receivers(const TextTranslator__TranslatorTextEdit* self, const char* signal) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorTextEdit_IsSignalConnected(const TextTranslator__TranslatorTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextTranslator__TranslatorTextEdit_GetDecodedMetricF(const TextTranslator__TranslatorTextEdit* self, int metricA, int metricB) {
    if (auto* vtexttranslatortranslatortextedit = const_cast<VirtualTextTranslatorTranslatorTextEdit*>(dynamic_cast<const VirtualTextTranslatorTranslatorTextEdit*>(self))) {
        return vtexttranslatortranslatortextedit->VirtualTextTranslatorTranslatorTextEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorTextEdit::getDecodedMetricF called without a directly constructed type");
}

void TextTranslator__TranslatorTextEdit_Delete(TextTranslator__TranslatorTextEdit* self) {
    delete self;
}

TextTranslator__TranslatorWidget* TextTranslator__TranslatorWidget_new(QWidget* parent) {
    return new VirtualTextTranslatorTranslatorWidget(parent);
}

TextTranslator__TranslatorWidget* TextTranslator__TranslatorWidget_new2() {
    return new VirtualTextTranslatorTranslatorWidget();
}

TextTranslator__TranslatorWidget* TextTranslator__TranslatorWidget_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualTextTranslatorTranslatorWidget(text_QString);
}

TextTranslator__TranslatorWidget* TextTranslator__TranslatorWidget_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualTextTranslatorTranslatorWidget(text_QString, parent);
}

QMetaObject* TextTranslator__TranslatorWidget_MetaObject(const TextTranslator__TranslatorWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextTranslator__TranslatorWidget_Metacast(TextTranslator__TranslatorWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextTranslator__TranslatorWidget_Metacall(TextTranslator__TranslatorWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextTranslator__TranslatorWidget_Tr(const char* s) {
    auto _ret = TextTranslator::TranslatorWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextTranslator__TranslatorWidget_SetTextToTranslate(TextTranslator__TranslatorWidget* self, const libqt_string textToTranslate) {
    QString textToTranslate_QString = QString::fromUtf8(textToTranslate.data, textToTranslate.len);
    self->setTextToTranslate(textToTranslate_QString);
}

void TextTranslator__TranslatorWidget_WriteConfig(TextTranslator__TranslatorWidget* self) {
    self->writeConfig();
}

void TextTranslator__TranslatorWidget_ReadConfig(TextTranslator__TranslatorWidget* self) {
    self->readConfig();
}

void TextTranslator__TranslatorWidget_SetStandalone(TextTranslator__TranslatorWidget* self, bool b) {
    self->setStandalone(b);
}

void TextTranslator__TranslatorWidget_SlotTranslate(TextTranslator__TranslatorWidget* self) {
    self->slotTranslate();
}

void TextTranslator__TranslatorWidget_SlotCloseWidget(TextTranslator__TranslatorWidget* self) {
    self->slotCloseWidget();
}

bool TextTranslator__TranslatorWidget_Event(TextTranslator__TranslatorWidget* self, QEvent* e) {
    auto* vtexttranslator__translatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslator__translatorwidget) {
        return vtexttranslator__translatorwidget->event(e);
    }
    qFatal("Error: Protected method TextTranslator::TranslatorWidget::event called without a directly constructed type");
}

void TextTranslator__TranslatorWidget_ToolsWasClosed(TextTranslator__TranslatorWidget* self) {
    self->toolsWasClosed();
}

void TextTranslator__TranslatorWidget_Connect_ToolsWasClosed(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    void (*slotFunc)(TextTranslator__TranslatorWidget*) = reinterpret_cast<void (*)(TextTranslator__TranslatorWidget*)>(slot);
    TextTranslator::TranslatorWidget::connect(self,
                                              static_cast<void (TextTranslator::TranslatorWidget::*)()>(&TextTranslator::TranslatorWidget::toolsWasClosed),
                                              [self, slotFunc]() {
                                                  slotFunc(self);
                                              });
}

libqt_string TextTranslator__TranslatorWidget_Tr2(const char* s, const char* c) {
    auto _ret = TextTranslator::TranslatorWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextTranslator__TranslatorWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextTranslator::TranslatorWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextTranslator__TranslatorWidget_SuperMetaObject(const TextTranslator__TranslatorWidget* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMetaObject(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextTranslator__TranslatorWidget_SuperMetacast(TextTranslator__TranslatorWidget* self, const char* param1) {
    return self->TextTranslator::TranslatorWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMetacast(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperMetacall(TextTranslator__TranslatorWidget* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMetacall(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperEvent(TextTranslator__TranslatorWidget* self, QEvent* e) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        return vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::event(e);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Event_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorWidget_DevType(const TextTranslator__TranslatorWidget* self) {
    return self->devType();
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperDevType(const TextTranslator__TranslatorWidget* self) {
    return self->TextTranslator::TranslatorWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDevType(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_devtype_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_SetVisible(TextTranslator__TranslatorWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperSetVisible(TextTranslator__TranslatorWidget* self, bool visible) {
    self->TextTranslator::TranslatorWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnSetVisible(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_setvisible_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorWidget_SizeHint(const TextTranslator__TranslatorWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorWidget_SuperSizeHint(const TextTranslator__TranslatorWidget* self) {
    return new QSize(self->TextTranslator::TranslatorWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnSizeHint(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_sizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorWidget_MinimumSizeHint(const TextTranslator__TranslatorWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorWidget_SuperMinimumSizeHint(const TextTranslator__TranslatorWidget* self) {
    return new QSize(self->TextTranslator::TranslatorWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMinimumSizeHint(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_minimumsizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorWidget_HeightForWidth(const TextTranslator__TranslatorWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperHeightForWidth(const TextTranslator__TranslatorWidget* self, int param1) {
    return self->TextTranslator::TranslatorWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnHeightForWidth(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_heightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_HasHeightForWidth(const TextTranslator__TranslatorWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperHasHeightForWidth(const TextTranslator__TranslatorWidget* self) {
    return self->TextTranslator::TranslatorWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnHasHeightForWidth(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_hasheightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorWidget_PaintEngine(const TextTranslator__TranslatorWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorWidget_SuperPaintEngine(const TextTranslator__TranslatorWidget* self) {
    return self->TextTranslator::TranslatorWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnPaintEngine(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_paintengine_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MousePressEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMousePressEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMousePressEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_mousepressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MouseReleaseEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMouseReleaseEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMouseReleaseEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_mousereleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MouseDoubleClickEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMouseDoubleClickEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMouseDoubleClickEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MouseMoveEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMouseMoveEvent(TextTranslator__TranslatorWidget* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMouseMoveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_mousemoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_WheelEvent(TextTranslator__TranslatorWidget* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperWheelEvent(TextTranslator__TranslatorWidget* self, QWheelEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnWheelEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_wheelevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_KeyPressEvent(TextTranslator__TranslatorWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperKeyPressEvent(TextTranslator__TranslatorWidget* self, QKeyEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnKeyPressEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_keypressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_KeyReleaseEvent(TextTranslator__TranslatorWidget* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperKeyReleaseEvent(TextTranslator__TranslatorWidget* self, QKeyEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnKeyReleaseEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_keyreleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_FocusInEvent(TextTranslator__TranslatorWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperFocusInEvent(TextTranslator__TranslatorWidget* self, QFocusEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnFocusInEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_focusinevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_FocusOutEvent(TextTranslator__TranslatorWidget* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperFocusOutEvent(TextTranslator__TranslatorWidget* self, QFocusEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnFocusOutEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_focusoutevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_EnterEvent(TextTranslator__TranslatorWidget* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperEnterEvent(TextTranslator__TranslatorWidget* self, QEnterEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnEnterEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_enterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_LeaveEvent(TextTranslator__TranslatorWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperLeaveEvent(TextTranslator__TranslatorWidget* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnLeaveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_leaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_PaintEvent(TextTranslator__TranslatorWidget* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperPaintEvent(TextTranslator__TranslatorWidget* self, QPaintEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnPaintEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_paintevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_MoveEvent(TextTranslator__TranslatorWidget* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperMoveEvent(TextTranslator__TranslatorWidget* self, QMoveEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMoveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_moveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ResizeEvent(TextTranslator__TranslatorWidget* self, QResizeEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperResizeEvent(TextTranslator__TranslatorWidget* self, QResizeEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnResizeEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_resizeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_CloseEvent(TextTranslator__TranslatorWidget* self, QCloseEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperCloseEvent(TextTranslator__TranslatorWidget* self, QCloseEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnCloseEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_closeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ContextMenuEvent(TextTranslator__TranslatorWidget* self, QContextMenuEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperContextMenuEvent(TextTranslator__TranslatorWidget* self, QContextMenuEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnContextMenuEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_contextmenuevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_TabletEvent(TextTranslator__TranslatorWidget* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperTabletEvent(TextTranslator__TranslatorWidget* self, QTabletEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnTabletEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_tabletevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ActionEvent(TextTranslator__TranslatorWidget* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperActionEvent(TextTranslator__TranslatorWidget* self, QActionEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnActionEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_actionevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DragEnterEvent(TextTranslator__TranslatorWidget* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDragEnterEvent(TextTranslator__TranslatorWidget* self, QDragEnterEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDragEnterEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_dragenterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DragMoveEvent(TextTranslator__TranslatorWidget* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDragMoveEvent(TextTranslator__TranslatorWidget* self, QDragMoveEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDragMoveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_dragmoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DragLeaveEvent(TextTranslator__TranslatorWidget* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDragLeaveEvent(TextTranslator__TranslatorWidget* self, QDragLeaveEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDragLeaveEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_dragleaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DropEvent(TextTranslator__TranslatorWidget* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDropEvent(TextTranslator__TranslatorWidget* self, QDropEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDropEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_dropevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ShowEvent(TextTranslator__TranslatorWidget* self, QShowEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperShowEvent(TextTranslator__TranslatorWidget* self, QShowEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnShowEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_showevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_HideEvent(TextTranslator__TranslatorWidget* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperHideEvent(TextTranslator__TranslatorWidget* self, QHideEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnHideEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_hideevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_NativeEvent(TextTranslator__TranslatorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        return vtexttranslatortranslatorwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperNativeEvent(TextTranslator__TranslatorWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        return vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnNativeEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_nativeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ChangeEvent(TextTranslator__TranslatorWidget* self, QEvent* param1) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperChangeEvent(TextTranslator__TranslatorWidget* self, QEvent* param1) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnChangeEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_changeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorWidget_Metric(const TextTranslator__TranslatorWidget* self, int param1) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget) {
        return vtexttranslatortranslatorwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextTranslator__TranslatorWidget_SuperMetric(const TextTranslator__TranslatorWidget* self, int param1) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        return vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnMetric(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_metric_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_InitPainter(const TextTranslator__TranslatorWidget* self, QPainter* painter) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperInitPainter(const TextTranslator__TranslatorWidget* self, QPainter* painter) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnInitPainter(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_initpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorWidget_Redirected(const TextTranslator__TranslatorWidget* self, QPoint* offset) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget) {
        return vtexttranslatortranslatorwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorWidget_SuperRedirected(const TextTranslator__TranslatorWidget* self, QPoint* offset) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        return vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnRedirected(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_redirected_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorWidget_SharedPainter(const TextTranslator__TranslatorWidget* self) {
    auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self));
    if (vtexttranslatortranslatorwidget) {
        return vtexttranslatortranslatorwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorWidget_SuperSharedPainter(const TextTranslator__TranslatorWidget* self) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        return vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnSharedPainter(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_sharedpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_InputMethodEvent(TextTranslator__TranslatorWidget* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperInputMethodEvent(TextTranslator__TranslatorWidget* self, QInputMethodEvent* param1) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnInputMethodEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_inputmethodevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorWidget_InputMethodQuery(const TextTranslator__TranslatorWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorWidget_SuperInputMethodQuery(const TextTranslator__TranslatorWidget* self, int param1) {
    return new QVariant(self->TextTranslator::TranslatorWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnInputMethodQuery(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self)))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_inputmethodquery_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_FocusNextPrevChild(TextTranslator__TranslatorWidget* self, bool next) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        return vtexttranslatortranslatorwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperFocusNextPrevChild(TextTranslator__TranslatorWidget* self, bool next) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        return vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnFocusNextPrevChild(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_focusnextprevchild_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorWidget_EventFilter(TextTranslator__TranslatorWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextTranslator__TranslatorWidget_SuperEventFilter(TextTranslator__TranslatorWidget* self, QObject* watched, QEvent* event) {
    return self->TextTranslator::TranslatorWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnEventFilter(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_TimerEvent(TextTranslator__TranslatorWidget* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperTimerEvent(TextTranslator__TranslatorWidget* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnTimerEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ChildEvent(TextTranslator__TranslatorWidget* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperChildEvent(TextTranslator__TranslatorWidget* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnChildEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_CustomEvent(TextTranslator__TranslatorWidget* self, QEvent* event) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperCustomEvent(TextTranslator__TranslatorWidget* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnCustomEvent(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_ConnectNotify(TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperConnectNotify(TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnConnectNotify(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorWidget_DisconnectNotify(TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self);
    if (vtexttranslatortranslatorwidget) {
        vtexttranslatortranslatorwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorWidget_SuperDisconnectNotify(TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->TextTranslator::TranslatorWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorWidget_OnDisconnectNotify(TextTranslator__TranslatorWidget* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self))
        vtexttranslatortranslatorwidget->texttranslator__translatorwidget_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorWidget::TextTranslator__TranslatorWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextTranslator__TranslatorWidget_UpdateMicroFocus(TextTranslator__TranslatorWidget* self) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorWidget_Create(TextTranslator__TranslatorWidget* self) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::create();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorWidget_Destroy(TextTranslator__TranslatorWidget* self) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::destroy();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorWidget_FocusNextChild(TextTranslator__TranslatorWidget* self) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        return vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::focusNextChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorWidget_FocusPreviousChild(TextTranslator__TranslatorWidget* self) {
    if (auto* vtexttranslatortranslatorwidget = dynamic_cast<VirtualTextTranslatorTranslatorWidget*>(self)) {
        return vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorWidget_Sender(const TextTranslator__TranslatorWidget* self) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        return vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorWidget_SenderSignalIndex(const TextTranslator__TranslatorWidget* self) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        return vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorWidget_Receivers(const TextTranslator__TranslatorWidget* self, const char* signal) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        return vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorWidget_IsSignalConnected(const TextTranslator__TranslatorWidget* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        return vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextTranslator__TranslatorWidget_GetDecodedMetricF(const TextTranslator__TranslatorWidget* self, int metricA, int metricB) {
    if (auto* vtexttranslatortranslatorwidget = const_cast<VirtualTextTranslatorTranslatorWidget*>(dynamic_cast<const VirtualTextTranslatorTranslatorWidget*>(self))) {
        return vtexttranslatortranslatorwidget->VirtualTextTranslatorTranslatorWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorWidget::getDecodedMetricF called without a directly constructed type");
}

void TextTranslator__TranslatorWidget_Delete(TextTranslator__TranslatorWidget* self) {
    delete self;
}
