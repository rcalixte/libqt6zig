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

KLineEdit* KLineEdit_new2(const libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    return new VirtualKLineEdit(string_QString);
}

KLineEdit* KLineEdit_new3() {
    return new VirtualKLineEdit();
}

KLineEdit* KLineEdit_new4(const libqt_string string, QWidget* parent) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    return new VirtualKLineEdit(string_QString, parent);
}

KCompletionBase* KLineEdit_AsKCompletionBase(KLineEdit* self) {
    return static_cast<KCompletionBase*>(self);
}

KLineEdit* KLineEdit_FromKCompletionBase(KCompletionBase* _kcompletionbase) {
    return dynamic_cast<KLineEdit*>(static_cast<KCompletionBase*>(_kcompletionbase));
}

QMetaObject* KLineEdit_MetaObject(const KLineEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLineEdit_Metacast(KLineEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLineEdit_Metacall(KLineEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KLineEdit_Tr(const char* s) {
    auto _ret = KLineEdit::tr(s);
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
    self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
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
    return self->completionBox(create);
}

void KLineEdit_SetCompletionObject(KLineEdit* self, KCompletion* param1, bool handle) {
    self->setCompletionObject(param1, handle);
}

void KLineEdit_Copy(const KLineEdit* self) {
    self->copy();
}

void KLineEdit_SetSqueezedTextEnabled(KLineEdit* self, bool enable) {
    self->setSqueezedTextEnabled(enable);
}

bool KLineEdit_IsSqueezedTextEnabled(const KLineEdit* self) {
    return self->isSqueezedTextEnabled();
}

libqt_string KLineEdit_OriginalText(const KLineEdit* self) {
    auto _ret = self->originalText();
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
    auto _ret = self->userText();
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
    KLineEdit::connect(self,
                       static_cast<void (KLineEdit::*)(const QString&)>(&KLineEdit::completionBoxActivated),
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

void KLineEdit_ReturnKeyPressed(KLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->returnKeyPressed(text_QString);
}

void KLineEdit_Connect_ReturnKeyPressed(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, const char*) = reinterpret_cast<void (*)(KLineEdit*, const char*)>(slot);
    KLineEdit::connect(self,
                       static_cast<void (KLineEdit::*)(const QString&)>(&KLineEdit::returnKeyPressed),
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

void KLineEdit_Completion(KLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->completion(param1_QString);
}

void KLineEdit_Connect_Completion(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, const char*) = reinterpret_cast<void (*)(KLineEdit*, const char*)>(slot);
    KLineEdit::connect(self,
                       static_cast<void (KLineEdit::*)(const QString&)>(&KLineEdit::completion),
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

void KLineEdit_SubstringCompletion(KLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->substringCompletion(param1_QString);
}

void KLineEdit_Connect_SubstringCompletion(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, const char*) = reinterpret_cast<void (*)(KLineEdit*, const char*)>(slot);
    KLineEdit::connect(self,
                       static_cast<void (KLineEdit::*)(const QString&)>(&KLineEdit::substringCompletion),
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

void KLineEdit_TextRotation(KLineEdit* self, int param1) {
    self->textRotation(static_cast<KCompletionBase::KeyBindingType>(param1));
}

void KLineEdit_Connect_TextRotation(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, int) = reinterpret_cast<void (*)(KLineEdit*, int)>(slot);
    KLineEdit::connect(self,
                       static_cast<void (KLineEdit::*)(KCompletionBase::KeyBindingType)>(&KLineEdit::textRotation),
                       [self, slotFunc](KCompletionBase::KeyBindingType param1) {
                           int sigval1 = static_cast<int>(param1);
                           slotFunc(self, sigval1);
                       });
}

void KLineEdit_CompletionModeChanged(KLineEdit* self, int param1) {
    self->completionModeChanged(static_cast<KCompletion::CompletionMode>(param1));
}

void KLineEdit_Connect_CompletionModeChanged(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, int) = reinterpret_cast<void (*)(KLineEdit*, int)>(slot);
    KLineEdit::connect(self,
                       static_cast<void (KLineEdit::*)(KCompletion::CompletionMode)>(&KLineEdit::completionModeChanged),
                       [self, slotFunc](KCompletion::CompletionMode param1) {
                           int sigval1 = static_cast<int>(param1);
                           slotFunc(self, sigval1);
                       });
}

void KLineEdit_AboutToShowContextMenu(KLineEdit* self, QMenu* contextMenu) {
    self->aboutToShowContextMenu(contextMenu);
}

void KLineEdit_Connect_AboutToShowContextMenu(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*, QMenu*) = reinterpret_cast<void (*)(KLineEdit*, QMenu*)>(slot);
    KLineEdit::connect(self,
                       static_cast<void (KLineEdit::*)(QMenu*)>(&KLineEdit::aboutToShowContextMenu),
                       [self, slotFunc](QMenu* contextMenu) {
                           QMenu* sigval1 = contextMenu;
                           slotFunc(self, sigval1);
                       });
}

void KLineEdit_ClearButtonClicked(KLineEdit* self) {
    self->clearButtonClicked();
}

void KLineEdit_Connect_ClearButtonClicked(KLineEdit* self, intptr_t slot) {
    void (*slotFunc)(KLineEdit*) = reinterpret_cast<void (*)(KLineEdit*)>(slot);
    KLineEdit::connect(self,
                       static_cast<void (KLineEdit::*)()>(&KLineEdit::clearButtonClicked),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void KLineEdit_SetReadOnly(KLineEdit* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

void KLineEdit_RotateText(KLineEdit* self, int typeVal) {
    self->rotateText(static_cast<KCompletionBase::KeyBindingType>(typeVal));
}

void KLineEdit_SetCompletedText(KLineEdit* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->setCompletedText(completedText_QString);
}

void KLineEdit_SetCompletedItems(KLineEdit* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setCompletedItems(items_QList, autoSuggest);
}

void KLineEdit_SetSqueezedText(KLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSqueezedText(text_QString);
}

void KLineEdit_SetText(KLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void KLineEdit_MakeCompletion(KLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->makeCompletion(param1_QString);
    }
}

bool KLineEdit_Event(KLineEdit* self, QEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        return vklineedit->event(param1);
    }
    qFatal("Error: Protected method KLineEdit::event called without a directly constructed type");
}

void KLineEdit_ResizeEvent(KLineEdit* self, QResizeEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->resizeEvent(param1);
    }
}

void KLineEdit_KeyPressEvent(KLineEdit* self, QKeyEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->keyPressEvent(param1);
    }
}

void KLineEdit_MousePressEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->mousePressEvent(param1);
    }
}

void KLineEdit_MouseReleaseEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->mouseReleaseEvent(param1);
    }
}

void KLineEdit_MouseDoubleClickEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->mouseDoubleClickEvent(param1);
    }
}

void KLineEdit_ContextMenuEvent(KLineEdit* self, QContextMenuEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->contextMenuEvent(param1);
    }
}

void KLineEdit_SetCompletedText2(KLineEdit* self, const libqt_string param1, bool param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->setCompletedText(param1_QString, param2);
    }
}

void KLineEdit_PaintEvent(KLineEdit* self, QPaintEvent* ev) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->paintEvent(ev);
    }
}

libqt_string KLineEdit_Tr2(const char* s, const char* c) {
    auto _ret = KLineEdit::tr(s, c);
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
    auto _ret = KLineEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* KLineEdit_SuperMetaObject(const KLineEdit* self) {
    return (QMetaObject*)self->KLineEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMetaObject(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_metaobject_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KLineEdit_SuperMetacast(KLineEdit* self, const char* param1) {
    return self->KLineEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMetacast(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_metacast_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int KLineEdit_SuperMetacall(KLineEdit* self, int param1, int param2, void** param3) {
    return self->KLineEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMetacall(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_metacall_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperSetCompletionMode(KLineEdit* self, int mode) {
    self->KLineEdit::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletionMode(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_setcompletionmode_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletionMode_Callback>(slot);
}

// Base class handler implementation
KCompletionBox* KLineEdit_SuperCompletionBox(KLineEdit* self, bool create) {
    return self->KLineEdit::completionBox(create);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCompletionBox(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_completionbox_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_CompletionBox_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperSetCompletionObject(KLineEdit* self, KCompletion* param1, bool handle) {
    self->KLineEdit::setCompletionObject(param1, handle);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletionObject(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_setcompletionobject_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletionObject_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperCopy(const KLineEdit* self) {
    self->KLineEdit::copy();
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCopy(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_copy_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_Copy_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperSetReadOnly(KLineEdit* self, bool readOnly) {
    self->KLineEdit::setReadOnly(readOnly);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetReadOnly(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_setreadonly_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetReadOnly_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperSetCompletedText(KLineEdit* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->KLineEdit::setCompletedText(completedText_QString);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletedText(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_setcompletedtext_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletedText_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperSetCompletedItems(KLineEdit* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->KLineEdit::setCompletedItems(items_QList, autoSuggest);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletedItems(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_setcompleteditems_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletedItems_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperSetText(KLineEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->KLineEdit::setText(text_QString);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetText(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_settext_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetText_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperMakeCompletion(KLineEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::makeCompletion(param1_QString);
    } else
        qFatal("Error: Protected virtual method KLineEdit::makeCompletion called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMakeCompletion(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_makecompletion_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_MakeCompletion_Callback>(slot);
}

// Base class handler implementation
bool KLineEdit_SuperEvent(KLineEdit* self, QEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        return vklineedit->KLineEdit::event(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_event_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_Event_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperResizeEvent(KLineEdit* self, QResizeEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnResizeEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_resizeevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperKeyPressEvent(KLineEdit* self, QKeyEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnKeyPressEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_keypressevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperMousePressEvent(KLineEdit* self, QMouseEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMousePressEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_mousepressevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperMouseReleaseEvent(KLineEdit* self, QMouseEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMouseReleaseEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_mousereleaseevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperMouseDoubleClickEvent(KLineEdit* self, QMouseEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMouseDoubleClickEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperContextMenuEvent(KLineEdit* self, QContextMenuEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnContextMenuEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_contextmenuevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperSetCompletedText2(KLineEdit* self, const libqt_string param1, bool param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::setCompletedText(param1_QString, param2);
    } else
        qFatal("Error: Protected virtual method KLineEdit::setCompletedText2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetCompletedText2(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_setcompletedtext2_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetCompletedText2_Callback>(slot);
}

// Base class handler implementation
void KLineEdit_SuperPaintEvent(KLineEdit* self, QPaintEvent* ev) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::paintEvent(ev);
    } else
        qFatal("Error: Protected virtual method KLineEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnPaintEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_paintevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* KLineEdit_SizeHint(const KLineEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KLineEdit_SuperSizeHint(const KLineEdit* self) {
    return new QSize(self->KLineEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSizeHint(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_sizehint_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KLineEdit_MinimumSizeHint(const KLineEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KLineEdit_SuperMinimumSizeHint(const KLineEdit* self) {
    return new QSize(self->KLineEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMinimumSizeHint(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_minimumsizehint_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_MouseMoveEvent(KLineEdit* self, QMouseEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->mouseMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperMouseMoveEvent(KLineEdit* self, QMouseEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMouseMoveEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_mousemoveevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_KeyReleaseEvent(KLineEdit* self, QKeyEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->keyReleaseEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperKeyReleaseEvent(KLineEdit* self, QKeyEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnKeyReleaseEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_keyreleaseevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_FocusInEvent(KLineEdit* self, QFocusEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperFocusInEvent(KLineEdit* self, QFocusEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnFocusInEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_focusinevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_FocusOutEvent(KLineEdit* self, QFocusEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperFocusOutEvent(KLineEdit* self, QFocusEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnFocusOutEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_focusoutevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_DragEnterEvent(KLineEdit* self, QDragEnterEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperDragEnterEvent(KLineEdit* self, QDragEnterEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDragEnterEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_dragenterevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_DragMoveEvent(KLineEdit* self, QDragMoveEvent* e) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperDragMoveEvent(KLineEdit* self, QDragMoveEvent* e) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KLineEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDragMoveEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_dragmoveevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_DragLeaveEvent(KLineEdit* self, QDragLeaveEvent* e) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperDragLeaveEvent(KLineEdit* self, QDragLeaveEvent* e) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method KLineEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDragLeaveEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_dragleaveevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_DropEvent(KLineEdit* self, QDropEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperDropEvent(KLineEdit* self, QDropEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDropEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_dropevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_ChangeEvent(KLineEdit* self, QEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperChangeEvent(KLineEdit* self, QEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnChangeEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_changeevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_InputMethodEvent(KLineEdit* self, QInputMethodEvent* param1) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperInputMethodEvent(KLineEdit* self, QInputMethodEvent* param1) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLineEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnInputMethodEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_inputmethodevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_InitStyleOption(const KLineEdit* self, QStyleOptionFrame* option) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit) {
        vklineedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperInitStyleOption(const KLineEdit* self, QStyleOptionFrame* option) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        vklineedit->KLineEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KLineEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnInitStyleOption(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_initstyleoption_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
QVariant* KLineEdit_InputMethodQuery(const KLineEdit* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KLineEdit_SuperInputMethodQuery(const KLineEdit* self, int param1) {
    return new QVariant(self->KLineEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnInputMethodQuery(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_inputmethodquery_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_TimerEvent(KLineEdit* self, QTimerEvent* param1) {
    self->timerEvent(param1);
}

// Base class handler implementation
void KLineEdit_SuperTimerEvent(KLineEdit* self, QTimerEvent* param1) {
    self->KLineEdit::timerEvent(param1);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnTimerEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_timerevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
int KLineEdit_DevType(const KLineEdit* self) {
    return self->devType();
}

// Base class handler implementation
int KLineEdit_SuperDevType(const KLineEdit* self) {
    return self->KLineEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDevType(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_devtype_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_SetVisible(KLineEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KLineEdit_SuperSetVisible(KLineEdit* self, bool visible) {
    self->KLineEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetVisible(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_setvisible_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KLineEdit_HeightForWidth(const KLineEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KLineEdit_SuperHeightForWidth(const KLineEdit* self, int param1) {
    return self->KLineEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnHeightForWidth(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_heightforwidth_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KLineEdit_HasHeightForWidth(const KLineEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KLineEdit_SuperHasHeightForWidth(const KLineEdit* self) {
    return self->KLineEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnHasHeightForWidth(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_hasheightforwidth_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KLineEdit_PaintEngine(const KLineEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KLineEdit_SuperPaintEngine(const KLineEdit* self) {
    return self->KLineEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnPaintEngine(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_paintengine_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_WheelEvent(KLineEdit* self, QWheelEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperWheelEvent(KLineEdit* self, QWheelEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnWheelEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_wheelevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_EnterEvent(KLineEdit* self, QEnterEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperEnterEvent(KLineEdit* self, QEnterEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnEnterEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_enterevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_LeaveEvent(KLineEdit* self, QEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperLeaveEvent(KLineEdit* self, QEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnLeaveEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_leaveevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_MoveEvent(KLineEdit* self, QMoveEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperMoveEvent(KLineEdit* self, QMoveEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMoveEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_moveevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_CloseEvent(KLineEdit* self, QCloseEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperCloseEvent(KLineEdit* self, QCloseEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCloseEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_closeevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_TabletEvent(KLineEdit* self, QTabletEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperTabletEvent(KLineEdit* self, QTabletEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnTabletEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_tabletevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_ActionEvent(KLineEdit* self, QActionEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperActionEvent(KLineEdit* self, QActionEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnActionEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_actionevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_ShowEvent(KLineEdit* self, QShowEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperShowEvent(KLineEdit* self, QShowEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnShowEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_showevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_HideEvent(KLineEdit* self, QHideEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperHideEvent(KLineEdit* self, QHideEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnHideEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_hideevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KLineEdit_NativeEvent(KLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        return vklineedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KLineEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KLineEdit_SuperNativeEvent(KLineEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        return vklineedit->KLineEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KLineEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnNativeEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_nativeevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KLineEdit_Metric(const KLineEdit* self, int param1) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit) {
        return vklineedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KLineEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KLineEdit_SuperMetric(const KLineEdit* self, int param1) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->KLineEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KLineEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnMetric(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_metric_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_InitPainter(const KLineEdit* self, QPainter* painter) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit) {
        vklineedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperInitPainter(const KLineEdit* self, QPainter* painter) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        vklineedit->KLineEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KLineEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnInitPainter(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_initpainter_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KLineEdit_Redirected(const KLineEdit* self, QPoint* offset) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit) {
        return vklineedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KLineEdit_SuperRedirected(const KLineEdit* self, QPoint* offset) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->KLineEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KLineEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnRedirected(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_redirected_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KLineEdit_SharedPainter(const KLineEdit* self) {
    auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self));
    if (vklineedit) {
        return vklineedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KLineEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KLineEdit_SuperSharedPainter(const KLineEdit* self) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->KLineEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KLineEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSharedPainter(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        vklineedit->klineedit_sharedpainter_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KLineEdit_FocusNextPrevChild(KLineEdit* self, bool next) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        return vklineedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KLineEdit_SuperFocusNextPrevChild(KLineEdit* self, bool next) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        return vklineedit->KLineEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KLineEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnFocusNextPrevChild(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_focusnextprevchild_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KLineEdit_EventFilter(KLineEdit* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KLineEdit_SuperEventFilter(KLineEdit* self, QObject* watched, QEvent* event) {
    return self->KLineEdit::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnEventFilter(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_eventfilter_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_ChildEvent(KLineEdit* self, QChildEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperChildEvent(KLineEdit* self, QChildEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnChildEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_childevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_CustomEvent(KLineEdit* self, QEvent* event) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperCustomEvent(KLineEdit* self, QEvent* event) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KLineEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnCustomEvent(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_customevent_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_ConnectNotify(KLineEdit* self, const QMetaMethod* signal) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperConnectNotify(KLineEdit* self, const QMetaMethod* signal) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLineEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnConnectNotify(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_connectnotify_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_DisconnectNotify(KLineEdit* self, const QMetaMethod* signal) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperDisconnectNotify(KLineEdit* self, const QMetaMethod* signal) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLineEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnDisconnectNotify(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_disconnectnotify_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_SetHandleSignals(KLineEdit* self, bool handle) {
    self->setHandleSignals(handle);
}

// Base class handler implementation
void KLineEdit_SuperSetHandleSignals(KLineEdit* self, bool handle) {
    self->KLineEdit::setHandleSignals(handle);
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnSetHandleSignals(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_sethandlesignals_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_SetHandleSignals_Callback>(slot);
}

// Derived class handler implementation
void KLineEdit_VirtualHook(KLineEdit* self, int id, void* data) {
    auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self);
    if (vklineedit) {
        vklineedit->virtual_hook(static_cast<int>(id), data);
    } else {
        qFatal("Error: Protected virtual method KLineEdit::virtual_hook called without a directly constructed type");
    }
}

// Base class handler implementation
void KLineEdit_SuperVirtualHook(KLineEdit* self, int id, void* data) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->KLineEdit::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KLineEdit::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLineEdit_OnVirtualHook(KLineEdit* self, intptr_t slot) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self))
        vklineedit->klineedit_virtualhook_callback = reinterpret_cast<VirtualKLineEdit::KLineEdit_VirtualHook_Callback>(slot);
}

// Derived class protected handler implementation
void KLineEdit_UserCancelled(KLineEdit* self, const libqt_string cancelText) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        QString cancelText_QString = QString::fromUtf8(cancelText.data, cancelText.len);
        vklineedit->VirtualKLineEdit::userCancelled(cancelText_QString);
    } else
        qFatal("Error: Protected method KLineEdit::userCancelled called without a directly constructed type");
}

// Derived class protected handler implementation
QMenu* KLineEdit_CreateStandardContextMenu(KLineEdit* self) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        return vklineedit->VirtualKLineEdit::createStandardContextMenu();
    } else
        qFatal("Error: Protected method KLineEdit::createStandardContextMenu called without a directly constructed type");
}

// Derived class protected handler implementation
void KLineEdit_SetUserSelection(KLineEdit* self, bool userSelection) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->VirtualKLineEdit::setUserSelection(userSelection);
    } else
        qFatal("Error: Protected method KLineEdit::setUserSelection called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLineEdit_AutoSuggest(const KLineEdit* self) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->VirtualKLineEdit::autoSuggest();
    } else
        qFatal("Error: Protected method KLineEdit::autoSuggest called without a directly constructed type");
}

// Derived class handler implementation
QRect* KLineEdit_CursorRect(const KLineEdit* self) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self)))
        return new QRect(vklineedit->cursorRect());
    qFatal("Error: Protected method KLineEdit::cursorRect called without a directly constructed type");
}

// Derived class protected handler implementation
void KLineEdit_UpdateMicroFocus(KLineEdit* self) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->VirtualKLineEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method KLineEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KLineEdit_Create(KLineEdit* self) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->VirtualKLineEdit::create();
    } else
        qFatal("Error: Protected method KLineEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KLineEdit_Destroy(KLineEdit* self) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->VirtualKLineEdit::destroy();
    } else
        qFatal("Error: Protected method KLineEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLineEdit_FocusNextChild(KLineEdit* self) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        return vklineedit->VirtualKLineEdit::focusNextChild();
    } else
        qFatal("Error: Protected method KLineEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLineEdit_FocusPreviousChild(KLineEdit* self) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        return vklineedit->VirtualKLineEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method KLineEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KLineEdit_Sender(const KLineEdit* self) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->VirtualKLineEdit::sender();
    } else
        qFatal("Error: Protected method KLineEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KLineEdit_SenderSignalIndex(const KLineEdit* self) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->VirtualKLineEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method KLineEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KLineEdit_Receivers(const KLineEdit* self, const char* signal) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->VirtualKLineEdit::receivers(signal);
    } else
        qFatal("Error: Protected method KLineEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLineEdit_IsSignalConnected(const KLineEdit* self, const QMetaMethod* signal) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->VirtualKLineEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KLineEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KLineEdit_GetDecodedMetricF(const KLineEdit* self, int metricA, int metricB) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->VirtualKLineEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KLineEdit::getDecodedMetricF called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_map /* of int to libqt_list of QKeySequence* */ KLineEdit_KeyBindingMap(const KLineEdit* self) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vklineedit->VirtualKLineEdit::keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size())));
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
    } else
        qFatal("Error: Protected method KLineEdit::keyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KLineEdit_SetKeyBindingMap(KLineEdit* self, libqt_map /* of int to libqt_list of QKeySequence* */ keyBindingMap) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_QMap;
        int* keyBindingMap_karr = static_cast<int*>(keyBindingMap.keys);
        libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(keyBindingMap.values);
        for (size_t i = 0; i < keyBindingMap.len; ++i) {
            QList<QKeySequence> keyBindingMap_varr_i_QList;
            keyBindingMap_varr_i_QList.reserve(keyBindingMap_varr[i].len);
            QKeySequence** keyBindingMap_varr_i_arr = static_cast<QKeySequence**>(keyBindingMap_varr[i].data);
            for (size_t j = 0; j < keyBindingMap_varr[i].len; ++j) {
                keyBindingMap_varr_i_QList.push_back(*(keyBindingMap_varr_i_arr[j]));
            }
            keyBindingMap_QMap.insert(static_cast<KCompletionBase::KeyBindingType>(keyBindingMap_karr[i]), keyBindingMap_varr_i_QList);
        }
        vklineedit->VirtualKLineEdit::setKeyBindingMap(keyBindingMap_QMap);
    } else
        qFatal("Error: Protected method KLineEdit::setKeyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KLineEdit_SetDelegate(KLineEdit* self, KCompletionBase* delegate) {
    if (auto* vklineedit = dynamic_cast<VirtualKLineEdit*>(self)) {
        vklineedit->VirtualKLineEdit::setDelegate(delegate);
    } else
        qFatal("Error: Protected method KLineEdit::setDelegate called without a directly constructed type");
}

// Derived class protected handler implementation
KCompletionBase* KLineEdit_Delegate(const KLineEdit* self) {
    if (auto* vklineedit = const_cast<VirtualKLineEdit*>(dynamic_cast<const VirtualKLineEdit*>(self))) {
        return vklineedit->VirtualKLineEdit::delegate();
    } else
        qFatal("Error: Protected method KLineEdit::delegate called without a directly constructed type");
}

void KLineEdit_Delete(KLineEdit* self) {
    delete self;
}
