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
#include <QTextCursor>
#include <QTextEdit>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionCore__AutoCorrection
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionWidgets__AutoCorrectionTextEdit
#include <autocorrectiontextedit.h>
#include "libautocorrectiontextedit.h"
#include "libautocorrectiontextedit.hxx"

TextAutoCorrectionWidgets__AutoCorrectionTextEdit* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_new(QWidget* parent) {
    return new VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit(parent);
}

TextAutoCorrectionWidgets__AutoCorrectionTextEdit* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_new2() {
    return new VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit();
}

QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Tr(const char* s) {
    auto _ret = TextAutoCorrectionWidgets::AutoCorrectionTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

TextAutoCorrectionCore__AutoCorrection* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Autocorrection(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return self->autocorrection();
}

void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetAutocorrection(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, TextAutoCorrectionCore__AutoCorrection* autocorrect) {
    self->setAutocorrection(autocorrect);
}

void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetAutocorrectionLanguage(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setAutocorrectionLanguage(language_QString);
}

void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgets__autocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgets__autocorrectiontextedit) {
        vtextautocorrectionwidgets__autocorrectiontextedit->keyPressEvent(e);
    }
}

libqt_string TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Tr2(const char* s, const char* c) {
    auto _ret = TextAutoCorrectionWidgets::AutoCorrectionTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextAutoCorrectionWidgets::AutoCorrectionTextEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return (QMetaObject*)self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetaObject(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_metaobject_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetacast(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* param1) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetacast(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_metacast_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetacall(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1, int param2, void** param3) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetacall(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_metacall_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_keypressevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperLoadResource(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnLoadResource(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_loadresource_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LoadResource_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int property) {
    return new QVariant(self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInputMethodQuery(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_inputmethodquery_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->event(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::event(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_event_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Event_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTimerEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTimerEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_timerevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_keyreleaseevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QResizeEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QResizeEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_resizeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPaintEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPaintEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_paintevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_mousepressevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_mousemoveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_mousereleaseevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool next) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_focusnextprevchild_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QContextMenuEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QContextMenuEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_contextmenuevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragEnterEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragEnterEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_dragenterevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragLeaveEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_dragleaveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragMoveEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragMoveEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_dragmoveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDropEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDropEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDropEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDropEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_dropevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_focusinevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_focusoutevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QShowEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperShowEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QShowEvent* param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnShowEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_showevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_changeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWheelEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWheelEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_wheelevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCreateMimeDataFromSelection(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCreateMimeDataFromSelection(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_createmimedatafromselection_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMimeData* source) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCanInsertFromMimeData(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMimeData* source) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCanInsertFromMimeData(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_caninsertfrommimedata_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMimeData* source) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInsertFromMimeData(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMimeData* source) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInsertFromMimeData(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_insertfrommimedata_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_inputmethodevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int dx, int dy) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperScrollContentsBy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int dx, int dy) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnScrollContentsBy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_scrollcontentsby_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QTextCursor* cursor) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDoSetTextCursor(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QTextCursor* cursor) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDoSetTextCursor(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_dosettextcursor_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return new QSize(self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMinimumSizeHint(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_minimumsizehint_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return new QSize(self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSizeHint(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_sizehint_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSetupViewport(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWidget* viewport) {
    self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSetupViewport(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_setupviewport_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEventFilter(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEventFilter(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_eventfilter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnViewportEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_viewportevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return new QSize((self->*&VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperViewportSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        return new QSize(vtextautocorrectionwidgetsautocorrectiontextedit->viewportSizeHint());
    qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnViewportSizeHint(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_viewportsizehint_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QStyleOptionFrame* option) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInitStyleOption(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_initstyleoption_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return self->devType();
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDevType(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDevType(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_devtype_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSetVisible(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool visible) {
    self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSetVisible(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_setvisible_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHeightForWidth(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_heightforwidth_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHasHeightForWidth(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_hasheightforwidth_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnPaintEngine(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_paintengine_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEnterEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_enterevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_leaveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMoveEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_moveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QCloseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_closeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTabletEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_tabletevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperActionEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QActionEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnActionEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_actionevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QHideEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperHideEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QHideEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnHideEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_hideevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_nativeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperMetric(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnMetric(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_metric_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* painter) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnInitPainter(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_initpainter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperRedirected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPoint* offset) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnRedirected(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_redirected_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self));
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnSharedPainter(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_sharedpainter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperChildEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QChildEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnChildEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_childevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_customevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_connectnotify_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self);
    if (vtextautocorrectionwidgetsautocorrectiontextedit) {
        vtextautocorrectionwidgetsautocorrectiontextedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SuperDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->TextAutoCorrectionWidgets::AutoCorrectionTextEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_OnDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))
        vtextautocorrectionwidgetsautocorrectiontextedit->textautocorrectionwidgets__autocorrectiontextedit_disconnectnotify_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ZoomInF(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, float range) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SetViewportMargins(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_ViewportMargins(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)))
        return new QMargins(vtextautocorrectionwidgetsautocorrectiontextedit->viewportMargins());
    qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_DrawFrame(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::drawFrame(param1);
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_UpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Create(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::create();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Destroy(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::destroy();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::focusNextChild();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_FocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self)) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Sender(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::sender();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_SenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Receivers(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::receivers(signal);
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionTextEdit_IsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionTextEdit_GetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int metricA, int metricB) {
    if (auto* vtextautocorrectionwidgetsautocorrectiontextedit = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit*>(self))) {
        return vtextautocorrectionwidgetsautocorrectiontextedit->VirtualTextAutoCorrectionWidgetsAutoCorrectionTextEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionTextEdit::getDecodedMetricF called without a directly constructed type");
}

void TextAutoCorrectionWidgets__AutoCorrectionTextEdit_Delete(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self) {
    delete self;
}
