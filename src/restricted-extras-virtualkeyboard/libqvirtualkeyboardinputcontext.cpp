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
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::preeditTextChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_InputMethodHintsChanged(QVirtualKeyboardInputContext* self) {
    self->inputMethodHintsChanged();
}

void QVirtualKeyboardInputContext_Connect_InputMethodHintsChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::inputMethodHintsChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_SurroundingTextChanged(QVirtualKeyboardInputContext* self) {
    self->surroundingTextChanged();
}

void QVirtualKeyboardInputContext_Connect_SurroundingTextChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::surroundingTextChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_SelectedTextChanged(QVirtualKeyboardInputContext* self) {
    self->selectedTextChanged();
}

void QVirtualKeyboardInputContext_Connect_SelectedTextChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::selectedTextChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_AnchorPositionChanged(QVirtualKeyboardInputContext* self) {
    self->anchorPositionChanged();
}

void QVirtualKeyboardInputContext_Connect_AnchorPositionChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::anchorPositionChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_CursorPositionChanged(QVirtualKeyboardInputContext* self) {
    self->cursorPositionChanged();
}

void QVirtualKeyboardInputContext_Connect_CursorPositionChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::cursorPositionChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_AnchorRectangleChanged(QVirtualKeyboardInputContext* self) {
    self->anchorRectangleChanged();
}

void QVirtualKeyboardInputContext_Connect_AnchorRectangleChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::anchorRectangleChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_CursorRectangleChanged(QVirtualKeyboardInputContext* self) {
    self->cursorRectangleChanged();
}

void QVirtualKeyboardInputContext_Connect_CursorRectangleChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::cursorRectangleChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_ShiftActiveChanged(QVirtualKeyboardInputContext* self) {
    self->shiftActiveChanged();
}

void QVirtualKeyboardInputContext_Connect_ShiftActiveChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::shiftActiveChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_CapsLockActiveChanged(QVirtualKeyboardInputContext* self) {
    self->capsLockActiveChanged();
}

void QVirtualKeyboardInputContext_Connect_CapsLockActiveChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::capsLockActiveChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_UppercaseChanged(QVirtualKeyboardInputContext* self) {
    self->uppercaseChanged();
}

void QVirtualKeyboardInputContext_Connect_UppercaseChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::uppercaseChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_AnimatingChanged(QVirtualKeyboardInputContext* self) {
    self->animatingChanged();
}

void QVirtualKeyboardInputContext_Connect_AnimatingChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::animatingChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_LocaleChanged(QVirtualKeyboardInputContext* self) {
    self->localeChanged();
}

void QVirtualKeyboardInputContext_Connect_LocaleChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::localeChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_InputItemChanged(QVirtualKeyboardInputContext* self) {
    self->inputItemChanged();
}

void QVirtualKeyboardInputContext_Connect_InputItemChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::inputItemChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_SelectionControlVisibleChanged(QVirtualKeyboardInputContext* self) {
    self->selectionControlVisibleChanged();
}

void QVirtualKeyboardInputContext_Connect_SelectionControlVisibleChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::selectionControlVisibleChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_AnchorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self) {
    self->anchorRectIntersectsClipRectChanged();
}

void QVirtualKeyboardInputContext_Connect_AnchorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::anchorRectIntersectsClipRectChanged),
                                          [self, slotFunc]() {
                                              slotFunc(self);
                                          });
}

void QVirtualKeyboardInputContext_CursorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self) {
    self->cursorRectIntersectsClipRectChanged();
}

void QVirtualKeyboardInputContext_Connect_CursorRectIntersectsClipRectChanged(QVirtualKeyboardInputContext* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputContext*) = reinterpret_cast<void (*)(QVirtualKeyboardInputContext*)>(slot);
    QVirtualKeyboardInputContext::connect(self,
                                          static_cast<void (QVirtualKeyboardInputContext::*)()>(&QVirtualKeyboardInputContext::cursorRectIntersectsClipRectChanged),
                                          [self, slotFunc]() {
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
    return (QMetaObject*)self->QVirtualKeyboardInputContext::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnMetaObject(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self)))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_metaobject_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVirtualKeyboardInputContext_SuperMetacast(QVirtualKeyboardInputContext* self, const char* param1) {
    return self->QVirtualKeyboardInputContext::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnMetacast(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_metacast_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVirtualKeyboardInputContext_SuperMetacall(QVirtualKeyboardInputContext* self, int param1, int param2, void** param3) {
    return self->QVirtualKeyboardInputContext::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnMetacall(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_metacall_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QVirtualKeyboardInputContext_Event(QVirtualKeyboardInputContext* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVirtualKeyboardInputContext_SuperEvent(QVirtualKeyboardInputContext* self, QEvent* event) {
    return self->QVirtualKeyboardInputContext::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnEvent(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_event_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVirtualKeyboardInputContext_EventFilter(QVirtualKeyboardInputContext* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVirtualKeyboardInputContext_SuperEventFilter(QVirtualKeyboardInputContext* self, QObject* watched, QEvent* event) {
    return self->QVirtualKeyboardInputContext::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnEventFilter(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_eventfilter_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_TimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext) {
        vqvirtualkeyboardinputcontext->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperTimerEvent(QVirtualKeyboardInputContext* self, QTimerEvent* event) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self)) {
        vqvirtualkeyboardinputcontext->QVirtualKeyboardInputContext::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnTimerEvent(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_timerevent_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_ChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext) {
        vqvirtualkeyboardinputcontext->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperChildEvent(QVirtualKeyboardInputContext* self, QChildEvent* event) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self)) {
        vqvirtualkeyboardinputcontext->QVirtualKeyboardInputContext::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnChildEvent(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_childevent_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_CustomEvent(QVirtualKeyboardInputContext* self, QEvent* event) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext) {
        vqvirtualkeyboardinputcontext->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperCustomEvent(QVirtualKeyboardInputContext* self, QEvent* event) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self)) {
        vqvirtualkeyboardinputcontext->QVirtualKeyboardInputContext::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnCustomEvent(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_customevent_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_ConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext) {
        vqvirtualkeyboardinputcontext->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperConnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self)) {
        vqvirtualkeyboardinputcontext->QVirtualKeyboardInputContext::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnConnectNotify(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_connectnotify_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardInputContext_DisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self);
    if (vqvirtualkeyboardinputcontext) {
        vqvirtualkeyboardinputcontext->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardInputContext_SuperDisconnectNotify(QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self)) {
        vqvirtualkeyboardinputcontext->QVirtualKeyboardInputContext::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardInputContext::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardInputContext_OnDisconnectNotify(QVirtualKeyboardInputContext* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardinputcontext = dynamic_cast<VirtualQVirtualKeyboardInputContext*>(self))
        vqvirtualkeyboardinputcontext->qvirtualkeyboardinputcontext_disconnectnotify_callback = reinterpret_cast<VirtualQVirtualKeyboardInputContext::QVirtualKeyboardInputContext_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QVirtualKeyboardInputContext_Sender(const QVirtualKeyboardInputContext* self) {
    if (auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self))) {
        return vqvirtualkeyboardinputcontext->VirtualQVirtualKeyboardInputContext::sender();
    } else
        qFatal("Error: Protected method QVirtualKeyboardInputContext::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVirtualKeyboardInputContext_SenderSignalIndex(const QVirtualKeyboardInputContext* self) {
    if (auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self))) {
        return vqvirtualkeyboardinputcontext->VirtualQVirtualKeyboardInputContext::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVirtualKeyboardInputContext::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVirtualKeyboardInputContext_Receivers(const QVirtualKeyboardInputContext* self, const char* signal) {
    if (auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self))) {
        return vqvirtualkeyboardinputcontext->VirtualQVirtualKeyboardInputContext::receivers(signal);
    } else
        qFatal("Error: Protected method QVirtualKeyboardInputContext::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVirtualKeyboardInputContext_IsSignalConnected(const QVirtualKeyboardInputContext* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardinputcontext = const_cast<VirtualQVirtualKeyboardInputContext*>(dynamic_cast<const VirtualQVirtualKeyboardInputContext*>(self))) {
        return vqvirtualkeyboardinputcontext->VirtualQVirtualKeyboardInputContext::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVirtualKeyboardInputContext::isSignalConnected called without a directly constructed type");
}

void QVirtualKeyboardInputContext_Delete(QVirtualKeyboardInputContext* self) {
    delete self;
}
