#include <QChildEvent>
#include <QEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QTimerEvent>
#include <QVirtualKeyboardInputContext>
#include <QVirtualKeyboardInputEngine>
#include <QVirtualKeyboardObserver>
#include <qvirtualkeyboardinputcontext.h>
#include "libqvirtualkeyboardinputcontext.h"
#include "libqvirtualkeyboardinputcontext.hxx"

QVirtualKeyboardInputContext* QVirtualKeyboardInputContext_new() {
    return new VirtualQVirtualKeyboardInputContext();
}

QVirtualKeyboardInputContext* QVirtualKeyboardInputContext_new2(QObject* parent) {
    return new VirtualQVirtualKeyboardInputContext(parent);
}

QMetaObject* QVirtualKeyboardInputContext_MetaObject(const QVirtualKeyboardInputContext* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardInputContext_Metacast(QVirtualKeyboardInputContext* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardInputContext_Metacall(QVirtualKeyboardInputContext* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardInputContext_Tr(const char* s) {
    auto _ret = QVirtualKeyboardInputContext::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QVirtualKeyboardInputContext_IsShiftActive(const QVirtualKeyboardInputContext* self) {
    return self->isShiftActive();
}

bool QVirtualKeyboardInputContext_IsCapsLockActive(const QVirtualKeyboardInputContext* self) {
    return self->isCapsLockActive();
}

bool QVirtualKeyboardInputContext_IsUppercase(const QVirtualKeyboardInputContext* self) {
    return self->isUppercase();
}

int QVirtualKeyboardInputContext_AnchorPosition(const QVirtualKeyboardInputContext* self) {
    return self->anchorPosition();
}

int QVirtualKeyboardInputContext_CursorPosition(const QVirtualKeyboardInputContext* self) {
    return self->cursorPosition();
}

int QVirtualKeyboardInputContext_InputMethodHints(const QVirtualKeyboardInputContext* self) {
    return static_cast<int>(self->inputMethodHints());
}

libqt_string QVirtualKeyboardInputContext_PreeditText(const QVirtualKeyboardInputContext* self) {
    auto _ret = self->preeditText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVirtualKeyboardInputContext_SetPreeditText(QVirtualKeyboardInputContext* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPreeditText(text_QString);
}

libqt_list /* of QInputMethodEvent__Attribute* */ QVirtualKeyboardInputContext_PreeditTextAttributes(const QVirtualKeyboardInputContext* self) {
    QList<QInputMethodEvent::Attribute> _ret = self->preeditTextAttributes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QInputMethodEvent__Attribute** _arr = static_cast<QInputMethodEvent__Attribute**>(malloc(sizeof(QInputMethodEvent__Attribute*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QInputMethodEvent::Attribute(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QVirtualKeyboardInputContext_SurroundingText(const QVirtualKeyboardInputContext* self) {
    auto _ret = self->surroundingText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardInputContext_SelectedText(const QVirtualKeyboardInputContext* self) {
    auto _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRectF* QVirtualKeyboardInputContext_AnchorRectangle(const QVirtualKeyboardInputContext* self) {
    return new QRectF(self->anchorRectangle());
}

QRectF* QVirtualKeyboardInputContext_CursorRectangle(const QVirtualKeyboardInputContext* self) {
    return new QRectF(self->cursorRectangle());
}

bool QVirtualKeyboardInputContext_IsAnimating(const QVirtualKeyboardInputContext* self) {
    return self->isAnimating();
}

void QVirtualKeyboardInputContext_SetAnimating(QVirtualKeyboardInputContext* self, bool isAnimating) {
    self->setAnimating(isAnimating);
}

libqt_string QVirtualKeyboardInputContext_Locale(const QVirtualKeyboardInputContext* self) {
    auto _ret = self->locale();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* QVirtualKeyboardInputContext_InputItem(const QVirtualKeyboardInputContext* self) {
    return self->inputItem();
}

QVirtualKeyboardInputEngine* QVirtualKeyboardInputContext_InputEngine(const QVirtualKeyboardInputContext* self) {
    return self->inputEngine();
}

bool QVirtualKeyboardInputContext_IsSelectionControlVisible(const QVirtualKeyboardInputContext* self) {
    return self->isSelectionControlVisible();
}

bool QVirtualKeyboardInputContext_AnchorRectIntersectsClipRect(const QVirtualKeyboardInputContext* self) {
    return self->anchorRectIntersectsClipRect();
}

bool QVirtualKeyboardInputContext_CursorRectIntersectsClipRect(const QVirtualKeyboardInputContext* self) {
    return self->cursorRectIntersectsClipRect();
}

QVirtualKeyboardObserver* QVirtualKeyboardInputContext_KeyboardObserver(const QVirtualKeyboardInputContext* self) {
    return self->keyboardObserver();
}

void QVirtualKeyboardInputContext_SendKeyClick(QVirtualKeyboardInputContext* self, int key, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->sendKeyClick(static_cast<int>(key), text_QString);
}

void QVirtualKeyboardInputContext_Commit(QVirtualKeyboardInputContext* self) {
    self->commit();
}

void QVirtualKeyboardInputContext_Commit2(QVirtualKeyboardInputContext* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->commit(text_QString);
}

void QVirtualKeyboardInputContext_Clear(QVirtualKeyboardInputContext* self) {
    self->clear();
}

void QVirtualKeyboardInputContext_SetSelectionOnFocusObject(QVirtualKeyboardInputContext* self, const QPointF* anchorPos, const QPointF* cursorPos) {
    self->setSelectionOnFocusObject(*anchorPos, *cursorPos);
}

void QVirtualKeyboardInputContext_PreeditTextChanged(QVirtualKeyboardInputContext* self) {
    self->preeditTextChanged();
}

void QVirtualKeyboardInputContext_Connect_PreeditTextChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::preeditTextChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_InputMethodHintsChanged(QVirtualKeyboardInputContext* self) {
    self->inputMethodHintsChanged();
}

void QVirtualKeyboardInputContext_Connect_InputMethodHintsChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::inputMethodHintsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_SurroundingTextChanged(QVirtualKeyboardInputContext* self) {
    self->surroundingTextChanged();
}

void QVirtualKeyboardInputContext_Connect_SurroundingTextChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::surroundingTextChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_SelectedTextChanged(QVirtualKeyboardInputContext* self) {
    self->selectedTextChanged();
}

void QVirtualKeyboardInputContext_Connect_SelectedTextChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::selectedTextChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_AnchorPositionChanged(QVirtualKeyboardInputContext* self) {
    self->anchorPositionChanged();
}

void QVirtualKeyboardInputContext_Connect_AnchorPositionChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::anchorPositionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_CursorPositionChanged(QVirtualKeyboardInputContext* self) {
    self->cursorPositionChanged();
}

void QVirtualKeyboardInputContext_Connect_CursorPositionChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::cursorPositionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_AnchorRectangleChanged(QVirtualKeyboardInputContext* self) {
    self->anchorRectangleChanged();
}

void QVirtualKeyboardInputContext_Connect_AnchorRectangleChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::anchorRectangleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_CursorRectangleChanged(QVirtualKeyboardInputContext* self) {
    self->cursorRectangleChanged();
}

void QVirtualKeyboardInputContext_Connect_CursorRectangleChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::cursorRectangleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_ShiftActiveChanged(QVirtualKeyboardInputContext* self) {
    self->shiftActiveChanged();
}

void QVirtualKeyboardInputContext_Connect_ShiftActiveChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::shiftActiveChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_CapsLockActiveChanged(QVirtualKeyboardInputContext* self) {
    self->capsLockActiveChanged();
}

void QVirtualKeyboardInputContext_Connect_CapsLockActiveChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::capsLockActiveChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_UppercaseChanged(QVirtualKeyboardInputContext* self) {
    self->uppercaseChanged();
}

void QVirtualKeyboardInputContext_Connect_UppercaseChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::uppercaseChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_AnimatingChanged(QVirtualKeyboardInputContext* self) {
    self->animatingChanged();
}

void QVirtualKeyboardInputContext_Connect_AnimatingChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::animatingChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_LocaleChanged(QVirtualKeyboardInputContext* self) {
    self->localeChanged();
}

void QVirtualKeyboardInputContext_Connect_LocaleChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::localeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_InputItemChanged(QVirtualKeyboardInputContext* self) {
    self->inputItemChanged();
}

void QVirtualKeyboardInputContext_Connect_InputItemChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::inputItemChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_SelectionControlVisibleChanged(QVirtualKeyboardInputContext* self) {
    self->selectionControlVisibleChanged();
}

void QVirtualKeyboardInputContext_Connect_SelectionControlVisibleChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::selectionControlVisibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_AnchorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self) {
    self->anchorRectIntersectsClipRectChanged();
}

void QVirtualKeyboardInputContext_Connect_AnchorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::anchorRectIntersectsClipRectChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputContext_CursorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self) {
    self->cursorRectIntersectsClipRectChanged();
}

void QVirtualKeyboardInputContext_Connect_CursorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self, &QVirtualKeyboardInputContext::cursorRectIntersectsClipRectChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVirtualKeyboardInputContext_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardInputContext::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardInputContext_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardInputContext::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVirtualKeyboardInputContext_SetPreeditText2(QVirtualKeyboardInputContext* self, const libqt_string text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QInputMethodEvent::Attribute> attributes_QList;
    attributes_QList.reserve(attributes.len);
    QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes.data);
    for (size_t i = 0; i < attributes.len; ++i) {
        attributes_QList.push_back(*(attributes_arr[i]));
    }
    self->setPreeditText(text_QString, attributes_QList);
}

void QVirtualKeyboardInputContext_SetPreeditText3(QVirtualKeyboardInputContext* self, const libqt_string text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes, int replaceFrom) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QInputMethodEvent::Attribute> attributes_QList;
    attributes_QList.reserve(attributes.len);
    QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes.data);
    for (size_t i = 0; i < attributes.len; ++i) {
        attributes_QList.push_back(*(attributes_arr[i]));
    }
    self->setPreeditText(text_QString, attributes_QList, static_cast<int>(replaceFrom));
}

void QVirtualKeyboardInputContext_SetPreeditText4(QVirtualKeyboardInputContext* self, const libqt_string text, libqt_list /* of QInputMethodEvent__Attribute* */ attributes, int replaceFrom, int replaceLength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QInputMethodEvent::Attribute> attributes_QList;
    attributes_QList.reserve(attributes.len);
    QInputMethodEvent__Attribute** attributes_arr = static_cast<QInputMethodEvent__Attribute**>(attributes.data);
    for (size_t i = 0; i < attributes.len; ++i) {
        attributes_QList.push_back(*(attributes_arr[i]));
    }
    self->setPreeditText(text_QString, attributes_QList, static_cast<int>(replaceFrom), static_cast<int>(replaceLength));
}

void QVirtualKeyboardInputContext_SendKeyClick3(QVirtualKeyboardInputContext* self, int key, const libqt_string text, int modifiers) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->sendKeyClick(static_cast<int>(key), text_QString, static_cast<int>(modifiers));
}

void QVirtualKeyboardInputContext_Commit22(QVirtualKeyboardInputContext* self, const libqt_string text, int replaceFrom) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->commit(text_QString, static_cast<int>(replaceFrom));
}

void QVirtualKeyboardInputContext_Commit3(QVirtualKeyboardInputContext* self, const libqt_string text, int replaceFrom, int replaceLength) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->commit(text_QString, static_cast<int>(replaceFrom), static_cast<int>(replaceLength));
}

// Base class handler implementation
QMetaObject* QVirtualKeyboardInputContext_SuperMetaObject(const QVirtualKeyboardInputContext* self) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_MetaObject_IsBase(true);
        return (QMetaObject*)vqvirtualkeyboardinputcontext->metaObject();
    } else {
        return (QMetaObject*)self->QVirtualKeyboardInputContext::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnMetaObject(const QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_MetaObject_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QVirtualKeyboardInputContext_SuperMetacast(QVirtualKeyboardInputContext* self, const char* param1) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Metacast_IsBase(true);
        return vqvirtualkeyboardinputcontext->qt_metacast(param1);
    } else {
        return self->QVirtualKeyboardInputContext::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnMetacast(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Metacast_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_Metacast_Callback>(slot));
}

// Base class handler implementation
int QVirtualKeyboardInputContext_SuperMetacall(QVirtualKeyboardInputContext* self, int param1, int param2, void** param3) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Metacall_IsBase(true);
        return vqvirtualkeyboardinputcontext->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QVirtualKeyboardInputContext::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnMetacall(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Metacall_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardInputContext_Event(QVirtualKeyboardInputContext* self, QEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        return vqvirtualkeyboardinputcontext->event(event);
    } else {
        return self->QVirtualKeyboardInputContext::event(event);
    }
}

// Base class handler implementation
bool QVirtualKeyboardInputContext_SuperEvent(QVirtualKeyboardInputContext* self, QEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Event_IsBase(true);
        return vqvirtualkeyboardinputcontext->event(event);
    } else {
        return self->QVirtualKeyboardInputContext::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnEvent(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Event_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_Event_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardInputContext_EventFilter(QVirtualKeyboardInputContext* self, QObject* watched, QEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        return vqvirtualkeyboardinputcontext->eventFilter(watched, event);
    } else {
        return self->QVirtualKeyboardInputContext::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVirtualKeyboardInputContext_SuperEventFilter(QVirtualKeyboardInputContext* self, QObject* watched, QEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_EventFilter_IsBase(true);
        return vqvirtualkeyboardinputcontext->eventFilter(watched, event);
    } else {
        return self->QVirtualKeyboardInputContext::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnEventFilter(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_EventFilter_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_TimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->timerEvent(event);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperTimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_TimerEvent_IsBase(true);
        vqvirtualkeyboardinputcontext->timerEvent(event);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnTimerEvent(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_TimerEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_ChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->childEvent(event);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_ChildEvent_IsBase(true);
        vqvirtualkeyboardinputcontext->childEvent(event);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnChildEvent(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_ChildEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_CustomEvent(QVirtualKeyboardInputContext* self, QEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->customEvent(event);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperCustomEvent(QVirtualKeyboardInputContext* self, QEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_CustomEvent_IsBase(true);
        vqvirtualkeyboardinputcontext->customEvent(event);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnCustomEvent(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_CustomEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_ConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->connectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_ConnectNotify_IsBase(true);
        vqvirtualkeyboardinputcontext->connectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnConnectNotify(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_ConnectNotify_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_DisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->disconnectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperDisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_DisconnectNotify_IsBase(true);
        vqvirtualkeyboardinputcontext->disconnectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardInputContext*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnDisconnectNotify(QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_DisconnectNotify_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QVirtualKeyboardInputContext_Sender(const QVirtualKeyboardInputContext* self) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        return vqvirtualkeyboardinputcontext->sender();
    } else {
        return ((VirtualQVirtualKeyboardInputContext*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVirtualKeyboardInputContext_SuperSender(const QVirtualKeyboardInputContext* self) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Sender_IsBase(true);
        return vqvirtualkeyboardinputcontext->sender();
    } else {
        return ((VirtualQVirtualKeyboardInputContext*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnSender(const QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Sender_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_Sender_Callback>(slot));
}

// Derived class handler implementation
int QVirtualKeyboardInputContext_SenderSignalIndex(const QVirtualKeyboardInputContext* self) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        return vqvirtualkeyboardinputcontext->senderSignalIndex();
    } else {
        return ((VirtualQVirtualKeyboardInputContext*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVirtualKeyboardInputContext_SuperSenderSignalIndex(const QVirtualKeyboardInputContext* self) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_SenderSignalIndex_IsBase(true);
        return vqvirtualkeyboardinputcontext->senderSignalIndex();
    } else {
        return ((VirtualQVirtualKeyboardInputContext*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnSenderSignalIndex(const QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QVirtualKeyboardInputContext_Receivers(const QVirtualKeyboardInputContext* self, const char* signal) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        return vqvirtualkeyboardinputcontext->receivers(signal);
    } else {
        return ((VirtualQVirtualKeyboardInputContext*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVirtualKeyboardInputContext_SuperReceivers(const QVirtualKeyboardInputContext* self, const char* signal) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Receivers_IsBase(true);
        return vqvirtualkeyboardinputcontext->receivers(signal);
    } else {
        return ((VirtualQVirtualKeyboardInputContext*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnReceivers(const QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_Receivers_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardInputContext_IsSignalConnected(const QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        return vqvirtualkeyboardinputcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualQVirtualKeyboardInputContext*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVirtualKeyboardInputContext_SuperIsSignalConnected(const QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext) {
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_IsSignalConnected_IsBase(true);
        return vqvirtualkeyboardinputcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualQVirtualKeyboardInputContext*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnIsSignalConnected(const QVirtualKeyboardInputContext* self, intptr_t slot) {
    auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self));
    if (vqvirtualkeyboardinputcontext && vqvirtualkeyboardinputcontext->isVirtualQVirtualKeyboardInputContext)
        vqvirtualkeyboardinputcontext->setQVirtualKeyboardInputContext_IsSignalConnected_Callback(reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_IsSignalConnected_Callback>(slot));
}

void QVirtualKeyboardInputContext_Delete(QVirtualKeyboardInputContext* self) {
    delete self;
}
