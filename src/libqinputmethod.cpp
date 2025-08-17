#include <QInputMethod>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qinputmethod.h>
#include "libqinputmethod.h"
#include "libqinputmethod.hxx"

QMetaObject* QInputMethod_MetaObject(const QInputMethod* self) {
    return (QMetaObject*)self->metaObject();
}

void* QInputMethod_Metacast(QInputMethod* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QInputMethod_Metacall(QInputMethod* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QInputMethod_Tr(const char* s) {
    QString _ret = QInputMethod::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTransform* QInputMethod_InputItemTransform(const QInputMethod* self) {
    return new QTransform(self->inputItemTransform());
}

void QInputMethod_SetInputItemTransform(QInputMethod* self, const QTransform* transform) {
    self->setInputItemTransform(*transform);
}

QRectF* QInputMethod_InputItemRectangle(const QInputMethod* self) {
    return new QRectF(self->inputItemRectangle());
}

void QInputMethod_SetInputItemRectangle(QInputMethod* self, const QRectF* rect) {
    self->setInputItemRectangle(*rect);
}

QRectF* QInputMethod_CursorRectangle(const QInputMethod* self) {
    return new QRectF(self->cursorRectangle());
}

QRectF* QInputMethod_AnchorRectangle(const QInputMethod* self) {
    return new QRectF(self->anchorRectangle());
}

QRectF* QInputMethod_KeyboardRectangle(const QInputMethod* self) {
    return new QRectF(self->keyboardRectangle());
}

QRectF* QInputMethod_InputItemClipRectangle(const QInputMethod* self) {
    return new QRectF(self->inputItemClipRectangle());
}

bool QInputMethod_IsVisible(const QInputMethod* self) {
    return self->isVisible();
}

void QInputMethod_SetVisible(QInputMethod* self, bool visible) {
    self->setVisible(visible);
}

bool QInputMethod_IsAnimating(const QInputMethod* self) {
    return self->isAnimating();
}

QLocale* QInputMethod_Locale(const QInputMethod* self) {
    return new QLocale(self->locale());
}

int QInputMethod_InputDirection(const QInputMethod* self) {
    return static_cast<int>(self->inputDirection());
}

QVariant* QInputMethod_QueryFocusObject(int query, const QVariant* argument) {
    return new QVariant(QInputMethod::queryFocusObject(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QInputMethod_Show(QInputMethod* self) {
    self->show();
}

void QInputMethod_Hide(QInputMethod* self) {
    self->hide();
}

void QInputMethod_Update(QInputMethod* self, int queries) {
    self->update(static_cast<Qt::InputMethodQueries>(queries));
}

void QInputMethod_Reset(QInputMethod* self) {
    self->reset();
}

void QInputMethod_Commit(QInputMethod* self) {
    self->commit();
}

void QInputMethod_InvokeAction(QInputMethod* self, int a, int cursorPosition) {
    self->invokeAction(static_cast<QInputMethod::Action>(a), static_cast<int>(cursorPosition));
}

void QInputMethod_CursorRectangleChanged(QInputMethod* self) {
    self->cursorRectangleChanged();
}

void QInputMethod_Connect_CursorRectangleChanged(QInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QInputMethod*) = reinterpret_cast<void (*)(QInputMethod*)>(slot);
    QInputMethod::connect(self, &QInputMethod::cursorRectangleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QInputMethod_AnchorRectangleChanged(QInputMethod* self) {
    self->anchorRectangleChanged();
}

void QInputMethod_Connect_AnchorRectangleChanged(QInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QInputMethod*) = reinterpret_cast<void (*)(QInputMethod*)>(slot);
    QInputMethod::connect(self, &QInputMethod::anchorRectangleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QInputMethod_KeyboardRectangleChanged(QInputMethod* self) {
    self->keyboardRectangleChanged();
}

void QInputMethod_Connect_KeyboardRectangleChanged(QInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QInputMethod*) = reinterpret_cast<void (*)(QInputMethod*)>(slot);
    QInputMethod::connect(self, &QInputMethod::keyboardRectangleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QInputMethod_InputItemClipRectangleChanged(QInputMethod* self) {
    self->inputItemClipRectangleChanged();
}

void QInputMethod_Connect_InputItemClipRectangleChanged(QInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QInputMethod*) = reinterpret_cast<void (*)(QInputMethod*)>(slot);
    QInputMethod::connect(self, &QInputMethod::inputItemClipRectangleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QInputMethod_VisibleChanged(QInputMethod* self) {
    self->visibleChanged();
}

void QInputMethod_Connect_VisibleChanged(QInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QInputMethod*) = reinterpret_cast<void (*)(QInputMethod*)>(slot);
    QInputMethod::connect(self, &QInputMethod::visibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QInputMethod_AnimatingChanged(QInputMethod* self) {
    self->animatingChanged();
}

void QInputMethod_Connect_AnimatingChanged(QInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QInputMethod*) = reinterpret_cast<void (*)(QInputMethod*)>(slot);
    QInputMethod::connect(self, &QInputMethod::animatingChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QInputMethod_LocaleChanged(QInputMethod* self) {
    self->localeChanged();
}

void QInputMethod_Connect_LocaleChanged(QInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QInputMethod*) = reinterpret_cast<void (*)(QInputMethod*)>(slot);
    QInputMethod::connect(self, &QInputMethod::localeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QInputMethod_InputDirectionChanged(QInputMethod* self, int newDirection) {
    self->inputDirectionChanged(static_cast<Qt::LayoutDirection>(newDirection));
}

void QInputMethod_Connect_InputDirectionChanged(QInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QInputMethod*, int) = reinterpret_cast<void (*)(QInputMethod*, int)>(slot);
    QInputMethod::connect(self, &QInputMethod::inputDirectionChanged, [self, slotFunc](Qt::LayoutDirection newDirection) {
        int sigval1 = static_cast<int>(newDirection);
        slotFunc(self, sigval1);
    });
}

libqt_string QInputMethod_Tr2(const char* s, const char* c) {
    QString _ret = QInputMethod::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputMethod_Tr3(const char* s, const char* c, int n) {
    QString _ret = QInputMethod::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
