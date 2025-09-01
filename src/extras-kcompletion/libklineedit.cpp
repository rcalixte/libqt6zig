#include <KCompletion>
#include <KCompletionBase>
#include <KCompletionBox>
#include <KLineEdit>
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
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLineEdit>
#include <QList>
#include <QMap>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <klineedit.h>
#include "libklineedit.h"
#include "libklineedit.hxx"

KLineEdit* KLineEdit_new(QWidget* parent) {
    return new VirtualKLineEdit(parent);
}

KLineEdit* KLineEdit_new2(const libqt_string stringVal) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new VirtualKLineEdit(stringVal_QString);
}

KLineEdit* KLineEdit_new3() {
    return new VirtualKLineEdit();
}

KLineEdit* KLineEdit_new4(const libqt_string stringVal, QWidget* parent) {
    QString stringVal_QString = QString::fromUtf8(stringVal.data, stringVal.len);
    return new VirtualKLineEdit(stringVal_QString, parent);
}

QMetaObject* KLineEdit_MetaObject(const KLineEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLineEdit_Metacast(KLineEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLineEdit_Metacall(KLineEdit* self, int param1, int param2, void** param3) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLineEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KLineEdit_Tr(const char* s) {
    QString _ret = KLineEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLineEdit_SetUrl(KLineEdit* self, const QUrl* url) {
    self->setUrl(*url);
}

void KLineEdit_SetCompletionMode(KLineEdit* self, int mode) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        ((VirtualKLineEdit*)self)->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

void KLineEdit_SetCompletionModeDisabled(KLineEdit* self, int mode) {
    self->setCompletionModeDisabled(static_cast<KCompletion::CompletionMode>(mode));
}

bool KLineEdit_UrlDropsEnabled(const KLineEdit* self) {
    return self->urlDropsEnabled();
}

void KLineEdit_SetTrapReturnKey(KLineEdit* self, bool trap) {
    self->setTrapReturnKey(trap);
}

bool KLineEdit_TrapReturnKey(const KLineEdit* self) {
    return self->trapReturnKey();
}

KCompletionBox* KLineEdit_CompletionBox(KLineEdit* self, bool create) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return self->completionBox(create);
    } else {
        return ((VirtualKLineEdit*)self)->completionBox(create);
    }
}

void KLineEdit_SetCompletionObject(KLineEdit* self, KCompletion* param1, bool handle) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        self->setCompletionObject(param1, handle);
    } else {
        ((VirtualKLineEdit*)self)->setCompletionObject(param1, handle);
    }
}

void KLineEdit_Copy(const KLineEdit* self) {
    auto* vklineedit = dynamic_cast<const VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        self->copy();
    } else {
        ((VirtualKLineEdit*)self)->copy();
    }
}

void KLineEdit_SetSqueezedTextEnabled(KLineEdit* self, bool enable) {
    self->setSqueezedTextEnabled(enable);
}

bool KLineEdit_IsSqueezedTextEnabled(const KLineEdit* self) {
    return self->isSqueezedTextEnabled();
}

libqt_string KLineEdit_OriginalText(const KLineEdit* self) {
    QString _ret = self->originalText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLineEdit_UserText(const KLineEdit* self) {
    QString _ret = self->userText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLineEdit_SetCompletionBox(KLineEdit* self, KCompletionBox* box) {
    self->setCompletionBox(box);
}

QSize* KLineEdit_ClearButtonUsedSize(const KLineEdit* self) {
    return new QSize(self->clearButtonUsedSize());
}

void KLineEdit_DoCompletion(KLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->doCompletion(text_QString);
}

void KLineEdit_CompletionBoxActivated(KLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->completionBoxActivated(param1_QString);
}

void KLineEdit_Connect_CompletionBoxActivated(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, const char*) = reinterpret_cast<void (*)(KLineEdit*, const char*)>(slot);
    KLineEdit::connect(self, &KLineEdit::completionBoxActivated, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KLineEdit_ReturnKeyPressed(KLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->returnKeyPressed(text_QString);
}

void KLineEdit_Connect_ReturnKeyPressed(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, const char*) = reinterpret_cast<void (*)(KLineEdit*, const char*)>(slot);
    KLineEdit::connect(self, &KLineEdit::returnKeyPressed, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        slotFunc(self, sigval1);
        libqt_free(text_str);
    });
}

void KLineEdit_Completion(KLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->completion(param1_QString);
}

void KLineEdit_Connect_Completion(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, const char*) = reinterpret_cast<void (*)(KLineEdit*, const char*)>(slot);
    KLineEdit::connect(self, &KLineEdit::completion, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KLineEdit_SubstringCompletion(KLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->substringCompletion(param1_QString);
}

void KLineEdit_Connect_SubstringCompletion(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, const char*) = reinterpret_cast<void (*)(KLineEdit*, const char*)>(slot);
    KLineEdit::connect(self, &KLineEdit::substringCompletion, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KLineEdit_TextRotation(KLineEdit* self, int param1) {
    self->textRotation(static_cast<KCompletionBase::KeyBindingType>(param1));
}

void KLineEdit_Connect_TextRotation(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, int) = reinterpret_cast<void (*)(KLineEdit*, int)>(slot);
    KLineEdit::connect(self, &KLineEdit::textRotation, [self, slotFunc](KCompletionBase::KeyBindingType param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void KLineEdit_CompletionModeChanged(KLineEdit* self, int param1) {
    self->completionModeChanged(static_cast<KCompletion::CompletionMode>(param1));
}

void KLineEdit_Connect_CompletionModeChanged(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, int) = reinterpret_cast<void (*)(KLineEdit*, int)>(slot);
    KLineEdit::connect(self, &KLineEdit::completionModeChanged, [self, slotFunc](KCompletion::CompletionMode param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void KLineEdit_AboutToShowContextMenu(KLineEdit* self, QMenu* contextMenu) {
    self->aboutToShowContextMenu(contextMenu);
}

void KLineEdit_Connect_AboutToShowContextMenu(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, QMenu*) = reinterpret_cast<void (*)(KLineEdit*, QMenu*)>(slot);
    KLineEdit::connect(self, &KLineEdit::aboutToShowContextMenu, [self, slotFunc](QMenu* contextMenu) {
        QMenu* sigval1 = contextMenu;
        slotFunc(self, sigval1);
    });
}

void KLineEdit_ClearButtonClicked(KLineEdit* self) {
    self->clearButtonClicked();
}

void KLineEdit_Connect_ClearButtonClicked(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*) = reinterpret_cast<void (*)(KLineEdit*)>(slot);
    KLineEdit::connect(self, &KLineEdit::clearButtonClicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KLineEdit_SetReadOnly(KLineEdit* self, bool readOnly) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        self->setReadOnly(readOnly);
    } else {
        ((VirtualKLineEdit*)self)->setReadOnly(readOnly);
    }
}

void KLineEdit_RotateText(KLineEdit* self, int typeVal) {
    self->rotateText(static_cast<KCompletionBase::KeyBindingType>(typeVal));
}

void KLineEdit_SetCompletedText(KLineEdit* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        self->setCompletedText(completedText_QString);
    } else {
        ((VirtualKLineEdit*)self)->setCompletedText(completedText_QString);
    }
}

void KLineEdit_SetCompletedItems(KLineEdit* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        self->setCompletedItems(items_QList, autoSuggest);
    } else {
        ((VirtualKLineEdit*)self)->setCompletedItems(items_QList, autoSuggest);
    }
}

void KLineEdit_SetSqueezedText(KLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSqueezedText(text_QString);
}

void KLineEdit_SetText(KLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        self->setText(text_QString);
    } else {
        ((VirtualKLineEdit*)self)->setText(text_QString);
    }
}

void KLineEdit_MakeCompletion(KLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->makeCompletion(param1_QString);
    }
}

bool KLineEdit_Event(KLineEdit* self, QEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->event(param1);
    }
    return {};
}

void KLineEdit_ResizeEvent(KLineEdit* self, QResizeEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->resizeEvent(param1);
    }
}

void KLineEdit_KeyPressEvent(KLineEdit* self, QKeyEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->keyPressEvent(param1);
    }
}

void KLineEdit_MousePressEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->mousePressEvent(param1);
    }
}

void KLineEdit_MouseReleaseEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->mouseReleaseEvent(param1);
    }
}

void KLineEdit_MouseDoubleClickEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->mouseDoubleClickEvent(param1);
    }
}

void KLineEdit_ContextMenuEvent(KLineEdit* self, QContextMenuEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->contextMenuEvent(param1);
    }
}

void KLineEdit_SetCompletedText2(KLineEdit* self, const libqt_string param1, bool param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setCompletedText(param1_QString, param2);
    }
}

void KLineEdit_PaintEvent(KLineEdit* self, QPaintEvent* ev) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->paintEvent(ev);
    }
}

libqt_string KLineEdit_Tr2(const char* s, const char* c) {
    QString _ret = KLineEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLineEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = KLineEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLineEdit_SetCompletionModeDisabled2(KLineEdit* self, int mode, bool disable) {
    self->setCompletionModeDisabled(static_cast<KCompletion::CompletionMode>(mode), disable);
}

// Base class handler implementation
int KLineEdit_QBaseMetacall(KLineEdit* self, int param1, int param2, void** param3) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Metacall_IsBase(true);
        return vklineedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KLineEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMetacall(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Metacall_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetCompletionMode(KLineEdit* self, int mode) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletionMode_IsBase(true);
        vklineedit->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KLineEdit::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletionMode(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletionMode_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletionMode_Callback>(slot));
    }
}

// Base class handler implementation
KCompletionBox* KLineEdit_QBaseCompletionBox(KLineEdit* self, bool create) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CompletionBox_IsBase(true);
        return vklineedit->completionBox(create);
    } else {
        return self->KLineEdit::completionBox(create);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCompletionBox(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CompletionBox_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_CompletionBox_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetCompletionObject(KLineEdit* self, KCompletion* param1, bool handle) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletionObject_IsBase(true);
        vklineedit->setCompletionObject(param1, handle);
    } else {
        self->KLineEdit::setCompletionObject(param1, handle);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletionObject(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletionObject_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletionObject_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseCopy(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Copy_IsBase(true);
        vklineedit->copy();
    } else {
        self->KLineEdit::copy();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCopy(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Copy_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Copy_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetReadOnly(KLineEdit* self, bool readOnly) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetReadOnly_IsBase(true);
        vklineedit->setReadOnly(readOnly);
    } else {
        self->KLineEdit::setReadOnly(readOnly);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetReadOnly(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetReadOnly_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetCompletedText(KLineEdit* self, const libqt_string completedText) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletedText_IsBase(true);
        vklineedit->setCompletedText(completedText_QString);
    } else {
        self->KLineEdit::setCompletedText(completedText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletedText(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletedText_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletedText_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetCompletedItems(KLineEdit* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletedItems_IsBase(true);
        vklineedit->setCompletedItems(items_QList, autoSuggest);
    } else {
        self->KLineEdit::setCompletedItems(items_QList, autoSuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletedItems(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletedItems_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletedItems_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetText(KLineEdit* self, const libqt_string text) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetText_IsBase(true);
        vklineedit->setText(text_QString);
    } else {
        self->KLineEdit::setText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetText(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetText_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetText_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseMakeCompletion(KLineEdit* self, const libqt_string param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MakeCompletion_IsBase(true);
        vklineedit->makeCompletion(param1_QString);
    } else {
        ((VirtualKLineEdit*)self)->makeCompletion(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMakeCompletion(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MakeCompletion_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_MakeCompletion_Callback>(slot));
    }
}

// Base class handler implementation
bool KLineEdit_QBaseEvent(KLineEdit* self, QEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Event_IsBase(true);
        return vklineedit->event(param1);
    } else {
        return ((VirtualKLineEdit*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Event_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Event_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseResizeEvent(KLineEdit* self, QResizeEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ResizeEvent_IsBase(true);
        vklineedit->resizeEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnResizeEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ResizeEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseKeyPressEvent(KLineEdit* self, QKeyEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_KeyPressEvent_IsBase(true);
        vklineedit->keyPressEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnKeyPressEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseMousePressEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MousePressEvent_IsBase(true);
        vklineedit->mousePressEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMousePressEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MousePressEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseMouseReleaseEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MouseReleaseEvent_IsBase(true);
        vklineedit->mouseReleaseEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMouseReleaseEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseMouseDoubleClickEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MouseDoubleClickEvent_IsBase(true);
        vklineedit->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMouseDoubleClickEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseContextMenuEvent(KLineEdit* self, QContextMenuEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ContextMenuEvent_IsBase(true);
        vklineedit->contextMenuEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnContextMenuEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetCompletedText2(KLineEdit* self, const libqt_string param1, bool param2) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletedText2_IsBase(true);
        vklineedit->setCompletedText(param1_QString, param2);
    } else {
        ((VirtualKLineEdit*)self)->setCompletedText(param1_QString, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletedText2(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetCompletedText2_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletedText2_Callback>(slot));
    }
}

// Base class handler implementation
void KLineEdit_QBasePaintEvent(KLineEdit* self, QPaintEvent* ev) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_PaintEvent_IsBase(true);
        vklineedit->paintEvent(ev);
    } else {
        ((VirtualKLineEdit*)self)->paintEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnPaintEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_PaintEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KLineEdit_SizeHint(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return new QSize(vklineedit->sizeHint());
    } else {
        return new QSize(((VirtualKLineEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KLineEdit_QBaseSizeHint(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SizeHint_IsBase(true);
        return new QSize(vklineedit->sizeHint());
    } else {
        return new QSize(((VirtualKLineEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSizeHint(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SizeHint_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KLineEdit_MinimumSizeHint(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return new QSize(vklineedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKLineEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KLineEdit_QBaseMinimumSizeHint(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vklineedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKLineEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMinimumSizeHint(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_MouseMoveEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->mouseMoveEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseMouseMoveEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MouseMoveEvent_IsBase(true);
        vklineedit->mouseMoveEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMouseMoveEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_KeyReleaseEvent(KLineEdit* self, QKeyEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->keyReleaseEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseKeyReleaseEvent(KLineEdit* self, QKeyEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_KeyReleaseEvent_IsBase(true);
        vklineedit->keyReleaseEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnKeyReleaseEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_FocusInEvent(KLineEdit* self, QFocusEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->focusInEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseFocusInEvent(KLineEdit* self, QFocusEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusInEvent_IsBase(true);
        vklineedit->focusInEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnFocusInEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusInEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_FocusOutEvent(KLineEdit* self, QFocusEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->focusOutEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseFocusOutEvent(KLineEdit* self, QFocusEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusOutEvent_IsBase(true);
        vklineedit->focusOutEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnFocusOutEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_DragEnterEvent(KLineEdit* self, QDragEnterEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->dragEnterEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseDragEnterEvent(KLineEdit* self, QDragEnterEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DragEnterEvent_IsBase(true);
        vklineedit->dragEnterEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDragEnterEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_DragMoveEvent(KLineEdit* self, QDragMoveEvent* e) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->dragMoveEvent(e);
    } else {
        ((VirtualKLineEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void KLineEdit_QBaseDragMoveEvent(KLineEdit* self, QDragMoveEvent* e) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DragMoveEvent_IsBase(true);
        vklineedit->dragMoveEvent(e);
    } else {
        ((VirtualKLineEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDragMoveEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_DragLeaveEvent(KLineEdit* self, QDragLeaveEvent* e) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->dragLeaveEvent(e);
    } else {
        ((VirtualKLineEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void KLineEdit_QBaseDragLeaveEvent(KLineEdit* self, QDragLeaveEvent* e) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DragLeaveEvent_IsBase(true);
        vklineedit->dragLeaveEvent(e);
    } else {
        ((VirtualKLineEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDragLeaveEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_DropEvent(KLineEdit* self, QDropEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->dropEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseDropEvent(KLineEdit* self, QDropEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DropEvent_IsBase(true);
        vklineedit->dropEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDropEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DropEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_ChangeEvent(KLineEdit* self, QEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->changeEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseChangeEvent(KLineEdit* self, QEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ChangeEvent_IsBase(true);
        vklineedit->changeEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnChangeEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ChangeEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_InputMethodEvent(KLineEdit* self, QInputMethodEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->inputMethodEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseInputMethodEvent(KLineEdit* self, QInputMethodEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_InputMethodEvent_IsBase(true);
        vklineedit->inputMethodEvent(param1);
    } else {
        ((VirtualKLineEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnInputMethodEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_InitStyleOption(const KLineEdit* self, QStyleOptionFrame* option) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->initStyleOption(option);
    } else {
        ((VirtualKLineEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KLineEdit_QBaseInitStyleOption(const KLineEdit* self, QStyleOptionFrame* option) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_InitStyleOption_IsBase(true);
        vklineedit->initStyleOption(option);
    } else {
        ((VirtualKLineEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnInitStyleOption(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_InitStyleOption_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KLineEdit_InputMethodQuery(const KLineEdit* self, int param1) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return new QVariant(vklineedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKLineEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KLineEdit_QBaseInputMethodQuery(const KLineEdit* self, int param1) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vklineedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKLineEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnInputMethodQuery(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_TimerEvent(KLineEdit* self, QTimerEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->timerEvent(param1);
    } else {
        self->KLineEdit::timerEvent(param1);
    }
}

// Base class handler implementation
void KLineEdit_QBaseTimerEvent(KLineEdit* self, QTimerEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_TimerEvent_IsBase(true);
        vklineedit->timerEvent(param1);
    } else {
        self->KLineEdit::timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnTimerEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_TimerEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KLineEdit_DevType(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->devType();
    } else {
        return self->KLineEdit::devType();
    }
}

// Base class handler implementation
int KLineEdit_QBaseDevType(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DevType_IsBase(true);
        return vklineedit->devType();
    } else {
        return self->KLineEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDevType(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DevType_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_SetVisible(KLineEdit* self, bool visible) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setVisible(visible);
    } else {
        self->KLineEdit::setVisible(visible);
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetVisible(KLineEdit* self, bool visible) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetVisible_IsBase(true);
        vklineedit->setVisible(visible);
    } else {
        self->KLineEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetVisible(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetVisible_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KLineEdit_HeightForWidth(const KLineEdit* self, int param1) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KLineEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KLineEdit_QBaseHeightForWidth(const KLineEdit* self, int param1) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_HeightForWidth_IsBase(true);
        return vklineedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KLineEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnHeightForWidth(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_HeightForWidth_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEdit_HasHeightForWidth(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->hasHeightForWidth();
    } else {
        return self->KLineEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KLineEdit_QBaseHasHeightForWidth(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_HasHeightForWidth_IsBase(true);
        return vklineedit->hasHeightForWidth();
    } else {
        return self->KLineEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnHasHeightForWidth(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KLineEdit_PaintEngine(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->paintEngine();
    } else {
        return self->KLineEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KLineEdit_QBasePaintEngine(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_PaintEngine_IsBase(true);
        return vklineedit->paintEngine();
    } else {
        return self->KLineEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnPaintEngine(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_PaintEngine_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_WheelEvent(KLineEdit* self, QWheelEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->wheelEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseWheelEvent(KLineEdit* self, QWheelEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_WheelEvent_IsBase(true);
        vklineedit->wheelEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnWheelEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_WheelEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_EnterEvent(KLineEdit* self, QEnterEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->enterEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseEnterEvent(KLineEdit* self, QEnterEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_EnterEvent_IsBase(true);
        vklineedit->enterEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnEnterEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_EnterEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_LeaveEvent(KLineEdit* self, QEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->leaveEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseLeaveEvent(KLineEdit* self, QEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_LeaveEvent_IsBase(true);
        vklineedit->leaveEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnLeaveEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_LeaveEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_MoveEvent(KLineEdit* self, QMoveEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->moveEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseMoveEvent(KLineEdit* self, QMoveEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MoveEvent_IsBase(true);
        vklineedit->moveEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMoveEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_MoveEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_CloseEvent(KLineEdit* self, QCloseEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->closeEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseCloseEvent(KLineEdit* self, QCloseEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CloseEvent_IsBase(true);
        vklineedit->closeEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCloseEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CloseEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_TabletEvent(KLineEdit* self, QTabletEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->tabletEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseTabletEvent(KLineEdit* self, QTabletEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_TabletEvent_IsBase(true);
        vklineedit->tabletEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnTabletEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_TabletEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_ActionEvent(KLineEdit* self, QActionEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->actionEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseActionEvent(KLineEdit* self, QActionEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ActionEvent_IsBase(true);
        vklineedit->actionEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnActionEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ActionEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_ShowEvent(KLineEdit* self, QShowEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->showEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseShowEvent(KLineEdit* self, QShowEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ShowEvent_IsBase(true);
        vklineedit->showEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnShowEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ShowEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_HideEvent(KLineEdit* self, QHideEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->hideEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseHideEvent(KLineEdit* self, QHideEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_HideEvent_IsBase(true);
        vklineedit->hideEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnHideEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_HideEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEdit_NativeEvent(KLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKLineEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KLineEdit_QBaseNativeEvent(KLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_NativeEvent_IsBase(true);
        return vklineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKLineEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnNativeEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_NativeEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KLineEdit_Metric(const KLineEdit* self, int param1) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKLineEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KLineEdit_QBaseMetric(const KLineEdit* self, int param1) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Metric_IsBase(true);
        return vklineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKLineEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMetric(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Metric_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_InitPainter(const KLineEdit* self, QPainter* painter) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->initPainter(painter);
    } else {
        ((VirtualKLineEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KLineEdit_QBaseInitPainter(const KLineEdit* self, QPainter* painter) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_InitPainter_IsBase(true);
        vklineedit->initPainter(painter);
    } else {
        ((VirtualKLineEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnInitPainter(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_InitPainter_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KLineEdit_Redirected(const KLineEdit* self, QPoint* offset) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->redirected(offset);
    } else {
        return ((VirtualKLineEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KLineEdit_QBaseRedirected(const KLineEdit* self, QPoint* offset) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Redirected_IsBase(true);
        return vklineedit->redirected(offset);
    } else {
        return ((VirtualKLineEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnRedirected(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Redirected_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KLineEdit_SharedPainter(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->sharedPainter();
    } else {
        return ((VirtualKLineEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KLineEdit_QBaseSharedPainter(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SharedPainter_IsBase(true);
        return vklineedit->sharedPainter();
    } else {
        return ((VirtualKLineEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSharedPainter(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SharedPainter_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEdit_FocusNextPrevChild(KLineEdit* self, bool next) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKLineEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KLineEdit_QBaseFocusNextPrevChild(KLineEdit* self, bool next) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusNextPrevChild_IsBase(true);
        return vklineedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKLineEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnFocusNextPrevChild(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEdit_EventFilter(KLineEdit* self, QObject* watched, QEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->eventFilter(watched, event);
    } else {
        return self->KLineEdit::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KLineEdit_QBaseEventFilter(KLineEdit* self, QObject* watched, QEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_EventFilter_IsBase(true);
        return vklineedit->eventFilter(watched, event);
    } else {
        return self->KLineEdit::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnEventFilter(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_EventFilter_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_ChildEvent(KLineEdit* self, QChildEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->childEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseChildEvent(KLineEdit* self, QChildEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ChildEvent_IsBase(true);
        vklineedit->childEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnChildEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ChildEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_CustomEvent(KLineEdit* self, QEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->customEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KLineEdit_QBaseCustomEvent(KLineEdit* self, QEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CustomEvent_IsBase(true);
        vklineedit->customEvent(event);
    } else {
        ((VirtualKLineEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCustomEvent(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CustomEvent_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_ConnectNotify(KLineEdit* self, const QMetaMethod* signal) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->connectNotify(*signal);
    } else {
        ((VirtualKLineEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KLineEdit_QBaseConnectNotify(KLineEdit* self, const QMetaMethod* signal) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ConnectNotify_IsBase(true);
        vklineedit->connectNotify(*signal);
    } else {
        ((VirtualKLineEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnConnectNotify(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_ConnectNotify_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_DisconnectNotify(KLineEdit* self, const QMetaMethod* signal) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->disconnectNotify(*signal);
    } else {
        ((VirtualKLineEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KLineEdit_QBaseDisconnectNotify(KLineEdit* self, const QMetaMethod* signal) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DisconnectNotify_IsBase(true);
        vklineedit->disconnectNotify(*signal);
    } else {
        ((VirtualKLineEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDisconnectNotify(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_SetHandleSignals(KLineEdit* self, bool handle) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setHandleSignals(handle);
    } else {
        self->KLineEdit::setHandleSignals(handle);
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetHandleSignals(KLineEdit* self, bool handle) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetHandleSignals_IsBase(true);
        vklineedit->setHandleSignals(handle);
    } else {
        self->KLineEdit::setHandleSignals(handle);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetHandleSignals(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetHandleSignals_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetHandleSignals_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_VirtualHook(KLineEdit* self, int id, void* data) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKLineEdit*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KLineEdit_QBaseVirtualHook(KLineEdit* self, int id, void* data) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_VirtualHook_IsBase(true);
        vklineedit->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKLineEdit*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnVirtualHook(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_VirtualHook_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_UserCancelled(KLineEdit* self, const libqt_string cancelText) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QString cancelText_QString = QString::fromUtf8(cancelText.data, cancelText.len);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->userCancelled(cancelText_QString);
    } else {
        ((VirtualKLineEdit*)self)->userCancelled(cancelText_QString);
    }
}

// Base class handler implementation
void KLineEdit_QBaseUserCancelled(KLineEdit* self, const libqt_string cancelText) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QString cancelText_QString = QString::fromUtf8(cancelText.data, cancelText.len);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_UserCancelled_IsBase(true);
        vklineedit->userCancelled(cancelText_QString);
    } else {
        ((VirtualKLineEdit*)self)->userCancelled(cancelText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnUserCancelled(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_UserCancelled_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_UserCancelled_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* KLineEdit_CreateStandardContextMenu(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->createStandardContextMenu();
    } else {
        return ((VirtualKLineEdit*)self)->createStandardContextMenu();
    }
}

// Base class handler implementation
QMenu* KLineEdit_QBaseCreateStandardContextMenu(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CreateStandardContextMenu_IsBase(true);
        return vklineedit->createStandardContextMenu();
    } else {
        return ((VirtualKLineEdit*)self)->createStandardContextMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCreateStandardContextMenu(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CreateStandardContextMenu_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_CreateStandardContextMenu_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_SetUserSelection(KLineEdit* self, bool userSelection) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setUserSelection(userSelection);
    } else {
        ((VirtualKLineEdit*)self)->setUserSelection(userSelection);
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetUserSelection(KLineEdit* self, bool userSelection) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetUserSelection_IsBase(true);
        vklineedit->setUserSelection(userSelection);
    } else {
        ((VirtualKLineEdit*)self)->setUserSelection(userSelection);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetUserSelection(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetUserSelection_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetUserSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEdit_AutoSuggest(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->autoSuggest();
    } else {
        return ((VirtualKLineEdit*)self)->autoSuggest();
    }
}

// Base class handler implementation
bool KLineEdit_QBaseAutoSuggest(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_AutoSuggest_IsBase(true);
        return vklineedit->autoSuggest();
    } else {
        return ((VirtualKLineEdit*)self)->autoSuggest();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnAutoSuggest(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_AutoSuggest_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_AutoSuggest_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KLineEdit_CursorRect(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return new QRect(vklineedit->cursorRect());
    }
    return {};
}

// Base class handler implementation
QRect* KLineEdit_QBaseCursorRect(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CursorRect_IsBase(true);
        return new QRect(vklineedit->cursorRect());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCursorRect(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_CursorRect_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_CursorRect_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_UpdateMicroFocus(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->updateMicroFocus();
    } else {
        ((VirtualKLineEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KLineEdit_QBaseUpdateMicroFocus(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_UpdateMicroFocus_IsBase(true);
        vklineedit->updateMicroFocus();
    } else {
        ((VirtualKLineEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnUpdateMicroFocus(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_Create(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->create();
    } else {
        ((VirtualKLineEdit*)self)->create();
    }
}

// Base class handler implementation
void KLineEdit_QBaseCreate(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Create_IsBase(true);
        vklineedit->create();
    } else {
        ((VirtualKLineEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCreate(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Create_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_Destroy(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->destroy();
    } else {
        ((VirtualKLineEdit*)self)->destroy();
    }
}

// Base class handler implementation
void KLineEdit_QBaseDestroy(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Destroy_IsBase(true);
        vklineedit->destroy();
    } else {
        ((VirtualKLineEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDestroy(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Destroy_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEdit_FocusNextChild(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->focusNextChild();
    } else {
        return ((VirtualKLineEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KLineEdit_QBaseFocusNextChild(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusNextChild_IsBase(true);
        return vklineedit->focusNextChild();
    } else {
        return ((VirtualKLineEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnFocusNextChild(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusNextChild_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEdit_FocusPreviousChild(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->focusPreviousChild();
    } else {
        return ((VirtualKLineEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KLineEdit_QBaseFocusPreviousChild(KLineEdit* self) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusPreviousChild_IsBase(true);
        return vklineedit->focusPreviousChild();
    } else {
        return ((VirtualKLineEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnFocusPreviousChild(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KLineEdit_Sender(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->sender();
    } else {
        return ((VirtualKLineEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* KLineEdit_QBaseSender(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Sender_IsBase(true);
        return vklineedit->sender();
    } else {
        return ((VirtualKLineEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSender(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Sender_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KLineEdit_SenderSignalIndex(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->senderSignalIndex();
    } else {
        return ((VirtualKLineEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KLineEdit_QBaseSenderSignalIndex(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SenderSignalIndex_IsBase(true);
        return vklineedit->senderSignalIndex();
    } else {
        return ((VirtualKLineEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSenderSignalIndex(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KLineEdit_Receivers(const KLineEdit* self, const char* signal) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->receivers(signal);
    } else {
        return ((VirtualKLineEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KLineEdit_QBaseReceivers(const KLineEdit* self, const char* signal) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Receivers_IsBase(true);
        return vklineedit->receivers(signal);
    } else {
        return ((VirtualKLineEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnReceivers(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Receivers_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLineEdit_IsSignalConnected(const KLineEdit* self, const QMetaMethod* signal) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKLineEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KLineEdit_QBaseIsSignalConnected(const KLineEdit* self, const QMetaMethod* signal) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_IsSignalConnected_IsBase(true);
        return vklineedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKLineEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnIsSignalConnected(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KLineEdit_GetDecodedMetricF(const KLineEdit* self, int metricA, int metricB) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKLineEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KLineEdit_QBaseGetDecodedMetricF(const KLineEdit* self, int metricA, int metricB) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_GetDecodedMetricF_IsBase(true);
        return vklineedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKLineEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnGetDecodedMetricF(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_GetDecodedMetricF_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KLineEdit_KeyBindingMap(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vklineedit->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKLineEdit*)self)->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KLineEdit_QBaseKeyBindingMap(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_KeyBindingMap_IsBase(true);
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vklineedit->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKLineEdit*)self)->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnKeyBindingMap(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_KeyBindingMap_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_KeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_SetKeyBindingMap(KLineEdit* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_QMap;
    int* keyBindingMap_karr = static_cast<int*>(keyBindingMap.keys);
    libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(keyBindingMap.values);
    for (size_t i = 0; i < keyBindingMap.len; ++i) {
        QList<QKeySequence> keyBindingMap_varr_i_QList;
        keyBindingMap_varr_i_QList.reserve(keyBindingMap_varr[i].len);
        QKeySequence** keyBindingMap_varr_i_arr = static_cast<QKeySequence**>(keyBindingMap_varr[i].data);
        for (size_t i = 0; i < keyBindingMap_varr[i].len; ++i) {
            keyBindingMap_varr_i_QList.push_back(*(keyBindingMap_varr_i_arr[i]));
        }
        keyBindingMap_QMap[static_cast<KCompletionBase::KeyBindingType>(keyBindingMap_karr[i])] = keyBindingMap_varr_i_QList;
    }
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKLineEdit*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetKeyBindingMap(KLineEdit* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_QMap;
    int* keyBindingMap_karr = static_cast<int*>(keyBindingMap.keys);
    libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(keyBindingMap.values);
    for (size_t i = 0; i < keyBindingMap.len; ++i) {
        QList<QKeySequence> keyBindingMap_varr_i_QList;
        keyBindingMap_varr_i_QList.reserve(keyBindingMap_varr[i].len);
        QKeySequence** keyBindingMap_varr_i_arr = static_cast<QKeySequence**>(keyBindingMap_varr[i].data);
        for (size_t i = 0; i < keyBindingMap_varr[i].len; ++i) {
            keyBindingMap_varr_i_QList.push_back(*(keyBindingMap_varr_i_arr[i]));
        }
        keyBindingMap_QMap[static_cast<KCompletionBase::KeyBindingType>(keyBindingMap_karr[i])] = keyBindingMap_varr_i_QList;
    }
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetKeyBindingMap_IsBase(true);
        vklineedit->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKLineEdit*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetKeyBindingMap(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetKeyBindingMap_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetKeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KLineEdit_SetDelegate(KLineEdit* self, KCompletionBase* delegate) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setDelegate(delegate);
    } else {
        ((VirtualKLineEdit*)self)->setDelegate(delegate);
    }
}

// Base class handler implementation
void KLineEdit_QBaseSetDelegate(KLineEdit* self, KCompletionBase* delegate) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetDelegate_IsBase(true);
        vklineedit->setDelegate(delegate);
    } else {
        ((VirtualKLineEdit*)self)->setDelegate(delegate);
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetDelegate(KLineEdit* self, intptr_t slot) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_SetDelegate_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_SetDelegate_Callback>(slot));
    }
}

// Derived class handler implementation
KCompletionBase* KLineEdit_Delegate(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        return vklineedit->delegate();
    } else {
        return ((VirtualKLineEdit*)self)->delegate();
    }
}

// Base class handler implementation
KCompletionBase* KLineEdit_QBaseDelegate(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Delegate_IsBase(true);
        return vklineedit->delegate();
    } else {
        return ((VirtualKLineEdit*)self)->delegate();
    }
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDelegate(const KLineEdit* self, intptr_t slot) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit && vklineedit->isVirtualKLineEdit) {
        vklineedit->setKLineEdit_Delegate_Callback(reinterpret_cast<VirtualKLineEdit::KLineEdit_Delegate_Callback>(slot));
    }
}

void KLineEdit_Delete(KLineEdit* self) {
    delete self;
}
