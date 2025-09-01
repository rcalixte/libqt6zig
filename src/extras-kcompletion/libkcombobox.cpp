#include <KComboBox>
#include <KCompletion>
#include <KCompletionBase>
#include <KCompletionBox>
#include <QAbstractItemModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionComboBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcombobox.h>
#include "libkcombobox.h"
#include "libkcombobox.hxx"

KComboBox* KComboBox_new(QWidget* parent) {
    return new VirtualKComboBox(parent);
}

KComboBox* KComboBox_new2() {
    return new VirtualKComboBox();
}

KComboBox* KComboBox_new3(bool rw) {
    return new VirtualKComboBox(rw);
}

KComboBox* KComboBox_new4(bool rw, QWidget* parent) {
    return new VirtualKComboBox(rw, parent);
}

QMetaObject* KComboBox_MetaObject(const KComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KComboBox_Metacast(KComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KComboBox_Metacall(KComboBox* self, int param1, int param2, void** param3) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KComboBox_Tr(const char* s) {
    QString _ret = KComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KComboBox_SetEditUrl(KComboBox* self, const QUrl* url) {
    self->setEditUrl(*url);
}

void KComboBox_AddUrl(KComboBox* self, const QUrl* url) {
    self->addUrl(*url);
}

void KComboBox_AddUrl2(KComboBox* self, const QIcon* icon, const QUrl* url) {
    self->addUrl(*icon, *url);
}

void KComboBox_InsertUrl(KComboBox* self, int index, const QUrl* url) {
    self->insertUrl(static_cast<int>(index), *url);
}

void KComboBox_InsertUrl2(KComboBox* self, int index, const QIcon* icon, const QUrl* url) {
    self->insertUrl(static_cast<int>(index), *icon, *url);
}

void KComboBox_ChangeUrl(KComboBox* self, int index, const QUrl* url) {
    self->changeUrl(static_cast<int>(index), *url);
}

void KComboBox_ChangeUrl2(KComboBox* self, int index, const QIcon* icon, const QUrl* url) {
    self->changeUrl(static_cast<int>(index), *icon, *url);
}

int KComboBox_CursorPosition(const KComboBox* self) {
    return self->cursorPosition();
}

void KComboBox_SetAutoCompletion(KComboBox* self, bool autocomplete) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        self->setAutoCompletion(autocomplete);
    } else {
        ((VirtualKComboBox*)self)->setAutoCompletion(autocomplete);
    }
}

bool KComboBox_AutoCompletion(const KComboBox* self) {
    return self->autoCompletion();
}

bool KComboBox_UrlDropsEnabled(const KComboBox* self) {
    return self->urlDropsEnabled();
}

bool KComboBox_Contains(const KComboBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->contains(text_QString);
}

void KComboBox_SetTrapReturnKey(KComboBox* self, bool trap) {
    self->setTrapReturnKey(trap);
}

bool KComboBox_TrapReturnKey(const KComboBox* self) {
    return self->trapReturnKey();
}

KCompletionBox* KComboBox_CompletionBox(KComboBox* self) {
    return self->completionBox();
}

void KComboBox_SetLineEdit(KComboBox* self, QLineEdit* lineEdit) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        self->setLineEdit(lineEdit);
    } else {
        ((VirtualKComboBox*)self)->setLineEdit(lineEdit);
    }
}

void KComboBox_SetEditable(KComboBox* self, bool editable) {
    self->setEditable(editable);
}

QMenu* KComboBox_ContextMenu(const KComboBox* self) {
    return self->contextMenu();
}

QSize* KComboBox_MinimumSizeHint(const KComboBox* self) {
    auto* vkcombobox = dynamic_cast<const VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualKComboBox*)self)->minimumSizeHint());
    }
}

void KComboBox_ReturnPressed(KComboBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->returnPressed(text_QString);
}

void KComboBox_Connect_ReturnPressed(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, const char*) = reinterpret_cast<void (*)(KComboBox*, const char*)>(slot);
    KComboBox::connect(self, &KComboBox::returnPressed, [self, slotFunc](const QString& text) {
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

void KComboBox_Completion(KComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->completion(param1_QString);
}

void KComboBox_Connect_Completion(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, const char*) = reinterpret_cast<void (*)(KComboBox*, const char*)>(slot);
    KComboBox::connect(self, &KComboBox::completion, [self, slotFunc](const QString& param1) {
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

void KComboBox_SubstringCompletion(KComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->substringCompletion(param1_QString);
}

void KComboBox_Connect_SubstringCompletion(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, const char*) = reinterpret_cast<void (*)(KComboBox*, const char*)>(slot);
    KComboBox::connect(self, &KComboBox::substringCompletion, [self, slotFunc](const QString& param1) {
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

void KComboBox_TextRotation(KComboBox* self, int param1) {
    self->textRotation(static_cast<KCompletionBase::KeyBindingType>(param1));
}

void KComboBox_Connect_TextRotation(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, int) = reinterpret_cast<void (*)(KComboBox*, int)>(slot);
    KComboBox::connect(self, &KComboBox::textRotation, [self, slotFunc](KCompletionBase::KeyBindingType param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void KComboBox_CompletionModeChanged(KComboBox* self, int param1) {
    self->completionModeChanged(static_cast<KCompletion::CompletionMode>(param1));
}

void KComboBox_Connect_CompletionModeChanged(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, int) = reinterpret_cast<void (*)(KComboBox*, int)>(slot);
    KComboBox::connect(self, &KComboBox::completionModeChanged, [self, slotFunc](KCompletion::CompletionMode param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void KComboBox_AboutToShowContextMenu(KComboBox* self, QMenu* contextMenu) {
    self->aboutToShowContextMenu(contextMenu);
}

void KComboBox_Connect_AboutToShowContextMenu(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, QMenu*) = reinterpret_cast<void (*)(KComboBox*, QMenu*)>(slot);
    KComboBox::connect(self, &KComboBox::aboutToShowContextMenu, [self, slotFunc](QMenu* contextMenu) {
        QMenu* sigval1 = contextMenu;
        slotFunc(self, sigval1);
    });
}

void KComboBox_RotateText(KComboBox* self, int typeVal) {
    self->rotateText(static_cast<KCompletionBase::KeyBindingType>(typeVal));
}

void KComboBox_SetCompletedText(KComboBox* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        self->setCompletedText(completedText_QString);
    } else {
        ((VirtualKComboBox*)self)->setCompletedText(completedText_QString);
    }
}

void KComboBox_SetCompletedItems(KComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        self->setCompletedItems(items_QList, autoSuggest);
    } else {
        ((VirtualKComboBox*)self)->setCompletedItems(items_QList, autoSuggest);
    }
}

void KComboBox_SetCurrentItem(KComboBox* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->setCurrentItem(item_QString);
}

void KComboBox_MakeCompletion(KComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->makeCompletion(param1_QString);
    }
}

void KComboBox_SetCompletedText2(KComboBox* self, const libqt_string text, bool marked) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setCompletedText(text_QString, marked);
    }
}

libqt_string KComboBox_Tr2(const char* s, const char* c) {
    QString _ret = KComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KComboBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = KComboBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KCompletionBox* KComboBox_CompletionBox1(KComboBox* self, bool create) {
    return self->completionBox(create);
}

void KComboBox_SetCurrentItem2(KComboBox* self, const libqt_string item, bool insert) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->setCurrentItem(item_QString, insert);
}

void KComboBox_SetCurrentItem3(KComboBox* self, const libqt_string item, bool insert, int index) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->setCurrentItem(item_QString, insert, static_cast<int>(index));
}

// Base class handler implementation
int KComboBox_QBaseMetacall(KComboBox* self, int param1, int param2, void** param3) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Metacall_IsBase(true);
        return vkcombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMetacall(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Metacall_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KComboBox_QBaseSetAutoCompletion(KComboBox* self, bool autocomplete) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetAutoCompletion_IsBase(true);
        vkcombobox->setAutoCompletion(autocomplete);
    } else {
        self->KComboBox::setAutoCompletion(autocomplete);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetAutoCompletion(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetAutoCompletion_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetAutoCompletion_Callback>(slot));
    }
}

// Base class handler implementation
void KComboBox_QBaseSetLineEdit(KComboBox* self, QLineEdit* lineEdit) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetLineEdit_IsBase(true);
        vkcombobox->setLineEdit(lineEdit);
    } else {
        self->KComboBox::setLineEdit(lineEdit);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetLineEdit(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetLineEdit_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetLineEdit_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KComboBox_QBaseMinimumSizeHint(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vkcombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKComboBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMinimumSizeHint(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KComboBox_QBaseSetCompletedText(KComboBox* self, const libqt_string completedText) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletedText_IsBase(true);
        vkcombobox->setCompletedText(completedText_QString);
    } else {
        self->KComboBox::setCompletedText(completedText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletedText(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletedText_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletedText_Callback>(slot));
    }
}

// Base class handler implementation
void KComboBox_QBaseSetCompletedItems(KComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletedItems_IsBase(true);
        vkcombobox->setCompletedItems(items_QList, autoSuggest);
    } else {
        self->KComboBox::setCompletedItems(items_QList, autoSuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletedItems(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletedItems_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletedItems_Callback>(slot));
    }
}

// Base class handler implementation
void KComboBox_QBaseMakeCompletion(KComboBox* self, const libqt_string param1) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MakeCompletion_IsBase(true);
        vkcombobox->makeCompletion(param1_QString);
    } else {
        ((VirtualKComboBox*)self)->makeCompletion(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMakeCompletion(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MakeCompletion_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_MakeCompletion_Callback>(slot));
    }
}

// Base class handler implementation
void KComboBox_QBaseSetCompletedText2(KComboBox* self, const libqt_string text, bool marked) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletedText2_IsBase(true);
        vkcombobox->setCompletedText(text_QString, marked);
    } else {
        ((VirtualKComboBox*)self)->setCompletedText(text_QString, marked);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletedText2(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletedText2_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletedText2_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_SetModel(KComboBox* self, QAbstractItemModel* model) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setModel(model);
    } else {
        self->KComboBox::setModel(model);
    }
}

// Base class handler implementation
void KComboBox_QBaseSetModel(KComboBox* self, QAbstractItemModel* model) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetModel_IsBase(true);
        vkcombobox->setModel(model);
    } else {
        self->KComboBox::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetModel(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetModel_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KComboBox_SizeHint(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return new QSize(vkcombobox->sizeHint());
    } else {
        return new QSize(((VirtualKComboBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KComboBox_QBaseSizeHint(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SizeHint_IsBase(true);
        return new QSize(vkcombobox->sizeHint());
    } else {
        return new QSize(((VirtualKComboBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSizeHint(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SizeHint_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_ShowPopup(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->showPopup();
    } else {
        self->KComboBox::showPopup();
    }
}

// Base class handler implementation
void KComboBox_QBaseShowPopup(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ShowPopup_IsBase(true);
        vkcombobox->showPopup();
    } else {
        self->KComboBox::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnShowPopup(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ShowPopup_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_HidePopup(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->hidePopup();
    } else {
        self->KComboBox::hidePopup();
    }
}

// Base class handler implementation
void KComboBox_QBaseHidePopup(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_HidePopup_IsBase(true);
        vkcombobox->hidePopup();
    } else {
        self->KComboBox::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnHidePopup(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_HidePopup_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool KComboBox_Event(KComboBox* self, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->event(event);
    } else {
        return self->KComboBox::event(event);
    }
}

// Base class handler implementation
bool KComboBox_QBaseEvent(KComboBox* self, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Event_IsBase(true);
        return vkcombobox->event(event);
    } else {
        return self->KComboBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Event_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KComboBox_InputMethodQuery(const KComboBox* self, int param1) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return new QVariant(vkcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KComboBox_QBaseInputMethodQuery(const KComboBox* self, int param1) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vkcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnInputMethodQuery(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_FocusInEvent(KComboBox* self, QFocusEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->focusInEvent(e);
    } else {
        ((VirtualKComboBox*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseFocusInEvent(KComboBox* self, QFocusEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusInEvent_IsBase(true);
        vkcombobox->focusInEvent(e);
    } else {
        ((VirtualKComboBox*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnFocusInEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_FocusOutEvent(KComboBox* self, QFocusEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->focusOutEvent(e);
    } else {
        ((VirtualKComboBox*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseFocusOutEvent(KComboBox* self, QFocusEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusOutEvent_IsBase(true);
        vkcombobox->focusOutEvent(e);
    } else {
        ((VirtualKComboBox*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnFocusOutEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_ChangeEvent(KComboBox* self, QEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->changeEvent(e);
    } else {
        ((VirtualKComboBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseChangeEvent(KComboBox* self, QEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ChangeEvent_IsBase(true);
        vkcombobox->changeEvent(e);
    } else {
        ((VirtualKComboBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnChangeEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_ResizeEvent(KComboBox* self, QResizeEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->resizeEvent(e);
    } else {
        ((VirtualKComboBox*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseResizeEvent(KComboBox* self, QResizeEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ResizeEvent_IsBase(true);
        vkcombobox->resizeEvent(e);
    } else {
        ((VirtualKComboBox*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnResizeEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_PaintEvent(KComboBox* self, QPaintEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->paintEvent(e);
    } else {
        ((VirtualKComboBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBasePaintEvent(KComboBox* self, QPaintEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_PaintEvent_IsBase(true);
        vkcombobox->paintEvent(e);
    } else {
        ((VirtualKComboBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnPaintEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_PaintEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_ShowEvent(KComboBox* self, QShowEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->showEvent(e);
    } else {
        ((VirtualKComboBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseShowEvent(KComboBox* self, QShowEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ShowEvent_IsBase(true);
        vkcombobox->showEvent(e);
    } else {
        ((VirtualKComboBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnShowEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ShowEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_HideEvent(KComboBox* self, QHideEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->hideEvent(e);
    } else {
        ((VirtualKComboBox*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseHideEvent(KComboBox* self, QHideEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_HideEvent_IsBase(true);
        vkcombobox->hideEvent(e);
    } else {
        ((VirtualKComboBox*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnHideEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_HideEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_MousePressEvent(KComboBox* self, QMouseEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->mousePressEvent(e);
    } else {
        ((VirtualKComboBox*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseMousePressEvent(KComboBox* self, QMouseEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MousePressEvent_IsBase(true);
        vkcombobox->mousePressEvent(e);
    } else {
        ((VirtualKComboBox*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMousePressEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_MouseReleaseEvent(KComboBox* self, QMouseEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseMouseReleaseEvent(KComboBox* self, QMouseEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MouseReleaseEvent_IsBase(true);
        vkcombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMouseReleaseEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_KeyPressEvent(KComboBox* self, QKeyEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->keyPressEvent(e);
    } else {
        ((VirtualKComboBox*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseKeyPressEvent(KComboBox* self, QKeyEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_KeyPressEvent_IsBase(true);
        vkcombobox->keyPressEvent(e);
    } else {
        ((VirtualKComboBox*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnKeyPressEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_KeyReleaseEvent(KComboBox* self, QKeyEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKComboBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseKeyReleaseEvent(KComboBox* self, QKeyEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_KeyReleaseEvent_IsBase(true);
        vkcombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKComboBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnKeyReleaseEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_WheelEvent(KComboBox* self, QWheelEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->wheelEvent(e);
    } else {
        ((VirtualKComboBox*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseWheelEvent(KComboBox* self, QWheelEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_WheelEvent_IsBase(true);
        vkcombobox->wheelEvent(e);
    } else {
        ((VirtualKComboBox*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnWheelEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_WheelEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_ContextMenuEvent(KComboBox* self, QContextMenuEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->contextMenuEvent(e);
    } else {
        ((VirtualKComboBox*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void KComboBox_QBaseContextMenuEvent(KComboBox* self, QContextMenuEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ContextMenuEvent_IsBase(true);
        vkcombobox->contextMenuEvent(e);
    } else {
        ((VirtualKComboBox*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnContextMenuEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_InputMethodEvent(KComboBox* self, QInputMethodEvent* param1) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKComboBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KComboBox_QBaseInputMethodEvent(KComboBox* self, QInputMethodEvent* param1) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_InputMethodEvent_IsBase(true);
        vkcombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKComboBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnInputMethodEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_InitStyleOption(const KComboBox* self, QStyleOptionComboBox* option) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->initStyleOption(option);
    } else {
        ((VirtualKComboBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KComboBox_QBaseInitStyleOption(const KComboBox* self, QStyleOptionComboBox* option) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_InitStyleOption_IsBase(true);
        vkcombobox->initStyleOption(option);
    } else {
        ((VirtualKComboBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnInitStyleOption(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KComboBox_DevType(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->devType();
    } else {
        return self->KComboBox::devType();
    }
}

// Base class handler implementation
int KComboBox_QBaseDevType(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DevType_IsBase(true);
        return vkcombobox->devType();
    } else {
        return self->KComboBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDevType(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DevType_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_SetVisible(KComboBox* self, bool visible) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setVisible(visible);
    } else {
        self->KComboBox::setVisible(visible);
    }
}

// Base class handler implementation
void KComboBox_QBaseSetVisible(KComboBox* self, bool visible) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetVisible_IsBase(true);
        vkcombobox->setVisible(visible);
    } else {
        self->KComboBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetVisible(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetVisible_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KComboBox_HeightForWidth(const KComboBox* self, int param1) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KComboBox_QBaseHeightForWidth(const KComboBox* self, int param1) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_HeightForWidth_IsBase(true);
        return vkcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnHeightForWidth(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KComboBox_HasHeightForWidth(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->hasHeightForWidth();
    } else {
        return self->KComboBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KComboBox_QBaseHasHeightForWidth(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_HasHeightForWidth_IsBase(true);
        return vkcombobox->hasHeightForWidth();
    } else {
        return self->KComboBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnHasHeightForWidth(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KComboBox_PaintEngine(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->paintEngine();
    } else {
        return self->KComboBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KComboBox_QBasePaintEngine(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_PaintEngine_IsBase(true);
        return vkcombobox->paintEngine();
    } else {
        return self->KComboBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnPaintEngine(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_PaintEngine_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_MouseDoubleClickEvent(KComboBox* self, QMouseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseMouseDoubleClickEvent(KComboBox* self, QMouseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MouseDoubleClickEvent_IsBase(true);
        vkcombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMouseDoubleClickEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_MouseMoveEvent(KComboBox* self, QMouseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseMouseMoveEvent(KComboBox* self, QMouseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MouseMoveEvent_IsBase(true);
        vkcombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMouseMoveEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_EnterEvent(KComboBox* self, QEnterEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->enterEvent(event);
    } else {
        ((VirtualKComboBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseEnterEvent(KComboBox* self, QEnterEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_EnterEvent_IsBase(true);
        vkcombobox->enterEvent(event);
    } else {
        ((VirtualKComboBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnEnterEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_EnterEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_LeaveEvent(KComboBox* self, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->leaveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseLeaveEvent(KComboBox* self, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_LeaveEvent_IsBase(true);
        vkcombobox->leaveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnLeaveEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_MoveEvent(KComboBox* self, QMoveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->moveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseMoveEvent(KComboBox* self, QMoveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MoveEvent_IsBase(true);
        vkcombobox->moveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMoveEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_MoveEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_CloseEvent(KComboBox* self, QCloseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->closeEvent(event);
    } else {
        ((VirtualKComboBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseCloseEvent(KComboBox* self, QCloseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_CloseEvent_IsBase(true);
        vkcombobox->closeEvent(event);
    } else {
        ((VirtualKComboBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnCloseEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_CloseEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_TabletEvent(KComboBox* self, QTabletEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->tabletEvent(event);
    } else {
        ((VirtualKComboBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseTabletEvent(KComboBox* self, QTabletEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_TabletEvent_IsBase(true);
        vkcombobox->tabletEvent(event);
    } else {
        ((VirtualKComboBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnTabletEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_TabletEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_ActionEvent(KComboBox* self, QActionEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->actionEvent(event);
    } else {
        ((VirtualKComboBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseActionEvent(KComboBox* self, QActionEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ActionEvent_IsBase(true);
        vkcombobox->actionEvent(event);
    } else {
        ((VirtualKComboBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnActionEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ActionEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_DragEnterEvent(KComboBox* self, QDragEnterEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->dragEnterEvent(event);
    } else {
        ((VirtualKComboBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseDragEnterEvent(KComboBox* self, QDragEnterEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DragEnterEvent_IsBase(true);
        vkcombobox->dragEnterEvent(event);
    } else {
        ((VirtualKComboBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDragEnterEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_DragMoveEvent(KComboBox* self, QDragMoveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->dragMoveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseDragMoveEvent(KComboBox* self, QDragMoveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DragMoveEvent_IsBase(true);
        vkcombobox->dragMoveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDragMoveEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_DragLeaveEvent(KComboBox* self, QDragLeaveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseDragLeaveEvent(KComboBox* self, QDragLeaveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DragLeaveEvent_IsBase(true);
        vkcombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKComboBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDragLeaveEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_DropEvent(KComboBox* self, QDropEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->dropEvent(event);
    } else {
        ((VirtualKComboBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseDropEvent(KComboBox* self, QDropEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DropEvent_IsBase(true);
        vkcombobox->dropEvent(event);
    } else {
        ((VirtualKComboBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDropEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DropEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KComboBox_NativeEvent(KComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KComboBox_QBaseNativeEvent(KComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_NativeEvent_IsBase(true);
        return vkcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnNativeEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_NativeEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KComboBox_Metric(const KComboBox* self, int param1) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KComboBox_QBaseMetric(const KComboBox* self, int param1) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Metric_IsBase(true);
        return vkcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMetric(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Metric_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_InitPainter(const KComboBox* self, QPainter* painter) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->initPainter(painter);
    } else {
        ((VirtualKComboBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KComboBox_QBaseInitPainter(const KComboBox* self, QPainter* painter) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_InitPainter_IsBase(true);
        vkcombobox->initPainter(painter);
    } else {
        ((VirtualKComboBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnInitPainter(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_InitPainter_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KComboBox_Redirected(const KComboBox* self, QPoint* offset) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->redirected(offset);
    } else {
        return ((VirtualKComboBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KComboBox_QBaseRedirected(const KComboBox* self, QPoint* offset) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Redirected_IsBase(true);
        return vkcombobox->redirected(offset);
    } else {
        return ((VirtualKComboBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnRedirected(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Redirected_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KComboBox_SharedPainter(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->sharedPainter();
    } else {
        return ((VirtualKComboBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KComboBox_QBaseSharedPainter(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SharedPainter_IsBase(true);
        return vkcombobox->sharedPainter();
    } else {
        return ((VirtualKComboBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSharedPainter(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SharedPainter_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KComboBox_FocusNextPrevChild(KComboBox* self, bool next) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKComboBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KComboBox_QBaseFocusNextPrevChild(KComboBox* self, bool next) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusNextPrevChild_IsBase(true);
        return vkcombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKComboBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnFocusNextPrevChild(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KComboBox_EventFilter(KComboBox* self, QObject* watched, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->eventFilter(watched, event);
    } else {
        return self->KComboBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KComboBox_QBaseEventFilter(KComboBox* self, QObject* watched, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_EventFilter_IsBase(true);
        return vkcombobox->eventFilter(watched, event);
    } else {
        return self->KComboBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnEventFilter(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_EventFilter_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_TimerEvent(KComboBox* self, QTimerEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->timerEvent(event);
    } else {
        ((VirtualKComboBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseTimerEvent(KComboBox* self, QTimerEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_TimerEvent_IsBase(true);
        vkcombobox->timerEvent(event);
    } else {
        ((VirtualKComboBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnTimerEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_TimerEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_ChildEvent(KComboBox* self, QChildEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->childEvent(event);
    } else {
        ((VirtualKComboBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseChildEvent(KComboBox* self, QChildEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ChildEvent_IsBase(true);
        vkcombobox->childEvent(event);
    } else {
        ((VirtualKComboBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnChildEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ChildEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_CustomEvent(KComboBox* self, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->customEvent(event);
    } else {
        ((VirtualKComboBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KComboBox_QBaseCustomEvent(KComboBox* self, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_CustomEvent_IsBase(true);
        vkcombobox->customEvent(event);
    } else {
        ((VirtualKComboBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnCustomEvent(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_CustomEvent_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_ConnectNotify(KComboBox* self, const QMetaMethod* signal) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->connectNotify(*signal);
    } else {
        ((VirtualKComboBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KComboBox_QBaseConnectNotify(KComboBox* self, const QMetaMethod* signal) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ConnectNotify_IsBase(true);
        vkcombobox->connectNotify(*signal);
    } else {
        ((VirtualKComboBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnConnectNotify(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_DisconnectNotify(KComboBox* self, const QMetaMethod* signal) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKComboBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KComboBox_QBaseDisconnectNotify(KComboBox* self, const QMetaMethod* signal) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DisconnectNotify_IsBase(true);
        vkcombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKComboBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDisconnectNotify(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_SetCompletionObject(KComboBox* self, KCompletion* completionObject, bool handleSignals) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setCompletionObject(completionObject, handleSignals);
    } else {
        self->KComboBox::setCompletionObject(completionObject, handleSignals);
    }
}

// Base class handler implementation
void KComboBox_QBaseSetCompletionObject(KComboBox* self, KCompletion* completionObject, bool handleSignals) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletionObject_IsBase(true);
        vkcombobox->setCompletionObject(completionObject, handleSignals);
    } else {
        self->KComboBox::setCompletionObject(completionObject, handleSignals);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletionObject(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletionObject_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletionObject_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_SetHandleSignals(KComboBox* self, bool handle) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setHandleSignals(handle);
    } else {
        self->KComboBox::setHandleSignals(handle);
    }
}

// Base class handler implementation
void KComboBox_QBaseSetHandleSignals(KComboBox* self, bool handle) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetHandleSignals_IsBase(true);
        vkcombobox->setHandleSignals(handle);
    } else {
        self->KComboBox::setHandleSignals(handle);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetHandleSignals(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetHandleSignals_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetHandleSignals_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_SetCompletionMode(KComboBox* self, int mode) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Base class handler implementation
void KComboBox_QBaseSetCompletionMode(KComboBox* self, int mode) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletionMode_IsBase(true);
        vkcombobox->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletionMode(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetCompletionMode_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletionMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_VirtualHook(KComboBox* self, int id, void* data) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKComboBox*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KComboBox_QBaseVirtualHook(KComboBox* self, int id, void* data) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_VirtualHook_IsBase(true);
        vkcombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKComboBox*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnVirtualHook(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_VirtualHook_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_UpdateMicroFocus(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->updateMicroFocus();
    } else {
        ((VirtualKComboBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KComboBox_QBaseUpdateMicroFocus(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_UpdateMicroFocus_IsBase(true);
        vkcombobox->updateMicroFocus();
    } else {
        ((VirtualKComboBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnUpdateMicroFocus(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_Create(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->create();
    } else {
        ((VirtualKComboBox*)self)->create();
    }
}

// Base class handler implementation
void KComboBox_QBaseCreate(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Create_IsBase(true);
        vkcombobox->create();
    } else {
        ((VirtualKComboBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnCreate(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Create_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_Destroy(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->destroy();
    } else {
        ((VirtualKComboBox*)self)->destroy();
    }
}

// Base class handler implementation
void KComboBox_QBaseDestroy(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Destroy_IsBase(true);
        vkcombobox->destroy();
    } else {
        ((VirtualKComboBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDestroy(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Destroy_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KComboBox_FocusNextChild(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->focusNextChild();
    } else {
        return ((VirtualKComboBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KComboBox_QBaseFocusNextChild(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusNextChild_IsBase(true);
        return vkcombobox->focusNextChild();
    } else {
        return ((VirtualKComboBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnFocusNextChild(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KComboBox_FocusPreviousChild(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->focusPreviousChild();
    } else {
        return ((VirtualKComboBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KComboBox_QBaseFocusPreviousChild(KComboBox* self) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusPreviousChild_IsBase(true);
        return vkcombobox->focusPreviousChild();
    } else {
        return ((VirtualKComboBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnFocusPreviousChild(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KComboBox_Sender(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->sender();
    } else {
        return ((VirtualKComboBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KComboBox_QBaseSender(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Sender_IsBase(true);
        return vkcombobox->sender();
    } else {
        return ((VirtualKComboBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSender(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Sender_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KComboBox_SenderSignalIndex(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->senderSignalIndex();
    } else {
        return ((VirtualKComboBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KComboBox_QBaseSenderSignalIndex(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SenderSignalIndex_IsBase(true);
        return vkcombobox->senderSignalIndex();
    } else {
        return ((VirtualKComboBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSenderSignalIndex(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KComboBox_Receivers(const KComboBox* self, const char* signal) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->receivers(signal);
    } else {
        return ((VirtualKComboBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KComboBox_QBaseReceivers(const KComboBox* self, const char* signal) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Receivers_IsBase(true);
        return vkcombobox->receivers(signal);
    } else {
        return ((VirtualKComboBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnReceivers(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Receivers_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KComboBox_IsSignalConnected(const KComboBox* self, const QMetaMethod* signal) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKComboBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KComboBox_QBaseIsSignalConnected(const KComboBox* self, const QMetaMethod* signal) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_IsSignalConnected_IsBase(true);
        return vkcombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKComboBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnIsSignalConnected(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KComboBox_GetDecodedMetricF(const KComboBox* self, int metricA, int metricB) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KComboBox_QBaseGetDecodedMetricF(const KComboBox* self, int metricA, int metricB) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_GetDecodedMetricF_IsBase(true);
        return vkcombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnGetDecodedMetricF(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_GetDecodedMetricF_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KComboBox_KeyBindingMap(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkcombobox->keyBindingMap();
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
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKComboBox*)self)->keyBindingMap();
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
libqt_map /* of int to libqt_list  of QKeySequence*  */ KComboBox_QBaseKeyBindingMap(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_KeyBindingMap_IsBase(true);
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkcombobox->keyBindingMap();
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
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKComboBox*)self)->keyBindingMap();
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
void KComboBox_OnKeyBindingMap(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_KeyBindingMap_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_KeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_SetKeyBindingMap(KComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
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
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKComboBox*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Base class handler implementation
void KComboBox_QBaseSetKeyBindingMap(KComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
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
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetKeyBindingMap_IsBase(true);
        vkcombobox->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKComboBox*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetKeyBindingMap(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetKeyBindingMap_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetKeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KComboBox_SetDelegate(KComboBox* self, KCompletionBase* delegate) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setDelegate(delegate);
    } else {
        ((VirtualKComboBox*)self)->setDelegate(delegate);
    }
}

// Base class handler implementation
void KComboBox_QBaseSetDelegate(KComboBox* self, KCompletionBase* delegate) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetDelegate_IsBase(true);
        vkcombobox->setDelegate(delegate);
    } else {
        ((VirtualKComboBox*)self)->setDelegate(delegate);
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetDelegate(KComboBox* self, intptr_t slot) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_SetDelegate_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_SetDelegate_Callback>(slot));
    }
}

// Derived class handler implementation
KCompletionBase* KComboBox_Delegate(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        return vkcombobox->delegate();
    } else {
        return ((VirtualKComboBox*)self)->delegate();
    }
}

// Base class handler implementation
KCompletionBase* KComboBox_QBaseDelegate(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Delegate_IsBase(true);
        return vkcombobox->delegate();
    } else {
        return ((VirtualKComboBox*)self)->delegate();
    }
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDelegate(const KComboBox* self, intptr_t slot) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox && vkcombobox->isVirtualKComboBox) {
        vkcombobox->setKComboBox_Delegate_Callback(reinterpret_cast<VirtualKComboBox::KComboBox_Delegate_Callback>(slot));
    }
}

void KComboBox_Delete(KComboBox* self) {
    delete self;
}
