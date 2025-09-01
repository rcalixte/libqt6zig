#include <KComboBox>
#include <KCompletion>
#include <KCompletionBase>
#include <KHistoryComboBox>
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
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLineEdit>
#include <QList>
#include <QMap>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <khistorycombobox.h>
#include "libkhistorycombobox.h"
#include "libkhistorycombobox.hxx"

KHistoryComboBox* KHistoryComboBox_new(QWidget* parent) {
    return new VirtualKHistoryComboBox(parent);
}

KHistoryComboBox* KHistoryComboBox_new2() {
    return new VirtualKHistoryComboBox();
}

KHistoryComboBox* KHistoryComboBox_new3(bool useCompletion) {
    return new VirtualKHistoryComboBox(useCompletion);
}

KHistoryComboBox* KHistoryComboBox_new4(bool useCompletion, QWidget* parent) {
    return new VirtualKHistoryComboBox(useCompletion, parent);
}

QMetaObject* KHistoryComboBox_MetaObject(const KHistoryComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KHistoryComboBox_Metacast(KHistoryComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KHistoryComboBox_Metacall(KHistoryComboBox* self, int param1, int param2, void** param3) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKHistoryComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KHistoryComboBox_Tr(const char* s) {
    QString _ret = KHistoryComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KHistoryComboBox_SetHistoryItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setHistoryItems(items_QList);
}

void KHistoryComboBox_SetHistoryItems2(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items, bool setCompletionList) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setHistoryItems(items_QList, setCompletionList);
}

libqt_list /* of libqt_string */ KHistoryComboBox_HistoryItems(const KHistoryComboBox* self) {
    QList<QString> _ret = self->historyItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KHistoryComboBox_RemoveFromHistory(KHistoryComboBox* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    return self->removeFromHistory(item_QString);
}

void KHistoryComboBox_AddToHistory(KHistoryComboBox* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->addToHistory(item_QString);
}

void KHistoryComboBox_ClearHistory(KHistoryComboBox* self) {
    self->clearHistory();
}

void KHistoryComboBox_Reset(KHistoryComboBox* self) {
    self->reset();
}

void KHistoryComboBox_Cleared(KHistoryComboBox* self) {
    self->cleared();
}

void KHistoryComboBox_Connect_Cleared(KHistoryComboBox* self, intptr_t slot) {
    void (*slotFunc)(KHistoryComboBox*) = reinterpret_cast<void (*)(KHistoryComboBox*)>(slot);
    KHistoryComboBox::connect(self, &KHistoryComboBox::cleared, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KHistoryComboBox_KeyPressEvent(KHistoryComboBox* self, QKeyEvent* param1) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->keyPressEvent(param1);
    }
}

void KHistoryComboBox_WheelEvent(KHistoryComboBox* self, QWheelEvent* ev) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->wheelEvent(ev);
    }
}

libqt_string KHistoryComboBox_Tr2(const char* s, const char* c) {
    QString _ret = KHistoryComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KHistoryComboBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = KHistoryComboBox::tr(s, c, static_cast<int>(n));
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
int KHistoryComboBox_QBaseMetacall(KHistoryComboBox* self, int param1, int param2, void** param3) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Metacall_IsBase(true);
        return vkhistorycombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KHistoryComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMetacall(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Metacall_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseKeyPressEvent(KHistoryComboBox* self, QKeyEvent* param1) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_KeyPressEvent_IsBase(true);
        vkhistorycombobox->keyPressEvent(param1);
    } else {
        ((VirtualKHistoryComboBox*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnKeyPressEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseWheelEvent(KHistoryComboBox* self, QWheelEvent* ev) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_WheelEvent_IsBase(true);
        vkhistorycombobox->wheelEvent(ev);
    } else {
        ((VirtualKHistoryComboBox*)self)->wheelEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnWheelEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_WheelEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetAutoCompletion(KHistoryComboBox* self, bool autocomplete) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setAutoCompletion(autocomplete);
    } else {
        self->KHistoryComboBox::setAutoCompletion(autocomplete);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetAutoCompletion(KHistoryComboBox* self, bool autocomplete) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetAutoCompletion_IsBase(true);
        vkhistorycombobox->setAutoCompletion(autocomplete);
    } else {
        self->KHistoryComboBox::setAutoCompletion(autocomplete);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetAutoCompletion(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetAutoCompletion_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetAutoCompletion_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetLineEdit(KHistoryComboBox* self, QLineEdit* lineEdit) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setLineEdit(lineEdit);
    } else {
        self->KHistoryComboBox::setLineEdit(lineEdit);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetLineEdit(KHistoryComboBox* self, QLineEdit* lineEdit) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetLineEdit_IsBase(true);
        vkhistorycombobox->setLineEdit(lineEdit);
    } else {
        self->KHistoryComboBox::setLineEdit(lineEdit);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetLineEdit(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetLineEdit_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KHistoryComboBox_MinimumSizeHint(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return new QSize(vkhistorycombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKHistoryComboBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KHistoryComboBox_QBaseMinimumSizeHint(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vkhistorycombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKHistoryComboBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMinimumSizeHint(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetCompletedText(KHistoryComboBox* self, const libqt_string completedText) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setCompletedText(completedText_QString);
    } else {
        self->KHistoryComboBox::setCompletedText(completedText_QString);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetCompletedText(KHistoryComboBox* self, const libqt_string completedText) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetCompletedText_IsBase(true);
        vkhistorycombobox->setCompletedText(completedText_QString);
    } else {
        self->KHistoryComboBox::setCompletedText(completedText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetCompletedText(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetCompletedText_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetCompletedText_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetCompletedItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setCompletedItems(items_QList, autoSuggest);
    } else {
        self->KHistoryComboBox::setCompletedItems(items_QList, autoSuggest);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetCompletedItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetCompletedItems_IsBase(true);
        vkhistorycombobox->setCompletedItems(items_QList, autoSuggest);
    } else {
        self->KHistoryComboBox::setCompletedItems(items_QList, autoSuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetCompletedItems(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetCompletedItems_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetCompletedItems_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_MakeCompletion(KHistoryComboBox* self, const libqt_string param1) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->makeCompletion(param1_QString);
    } else {
        ((VirtualKHistoryComboBox*)self)->makeCompletion(param1_QString);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseMakeCompletion(KHistoryComboBox* self, const libqt_string param1) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MakeCompletion_IsBase(true);
        vkhistorycombobox->makeCompletion(param1_QString);
    } else {
        ((VirtualKHistoryComboBox*)self)->makeCompletion(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMakeCompletion(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MakeCompletion_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MakeCompletion_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetModel(KHistoryComboBox* self, QAbstractItemModel* model) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setModel(model);
    } else {
        self->KHistoryComboBox::setModel(model);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetModel(KHistoryComboBox* self, QAbstractItemModel* model) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetModel_IsBase(true);
        vkhistorycombobox->setModel(model);
    } else {
        self->KHistoryComboBox::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetModel(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetModel_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KHistoryComboBox_SizeHint(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return new QSize(vkhistorycombobox->sizeHint());
    } else {
        return new QSize(((VirtualKHistoryComboBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KHistoryComboBox_QBaseSizeHint(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SizeHint_IsBase(true);
        return new QSize(vkhistorycombobox->sizeHint());
    } else {
        return new QSize(((VirtualKHistoryComboBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSizeHint(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SizeHint_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_ShowPopup(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->showPopup();
    } else {
        self->KHistoryComboBox::showPopup();
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseShowPopup(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ShowPopup_IsBase(true);
        vkhistorycombobox->showPopup();
    } else {
        self->KHistoryComboBox::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnShowPopup(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ShowPopup_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_HidePopup(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->hidePopup();
    } else {
        self->KHistoryComboBox::hidePopup();
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseHidePopup(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_HidePopup_IsBase(true);
        vkhistorycombobox->hidePopup();
    } else {
        self->KHistoryComboBox::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnHidePopup(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_HidePopup_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_Event(KHistoryComboBox* self, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->event(event);
    } else {
        return self->KHistoryComboBox::event(event);
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseEvent(KHistoryComboBox* self, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Event_IsBase(true);
        return vkhistorycombobox->event(event);
    } else {
        return self->KHistoryComboBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Event_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KHistoryComboBox_InputMethodQuery(const KHistoryComboBox* self, int param1) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return new QVariant(vkhistorycombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKHistoryComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KHistoryComboBox_QBaseInputMethodQuery(const KHistoryComboBox* self, int param1) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vkhistorycombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKHistoryComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInputMethodQuery(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_FocusInEvent(KHistoryComboBox* self, QFocusEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->focusInEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseFocusInEvent(KHistoryComboBox* self, QFocusEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusInEvent_IsBase(true);
        vkhistorycombobox->focusInEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnFocusInEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_FocusOutEvent(KHistoryComboBox* self, QFocusEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->focusOutEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseFocusOutEvent(KHistoryComboBox* self, QFocusEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusOutEvent_IsBase(true);
        vkhistorycombobox->focusOutEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnFocusOutEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_ChangeEvent(KHistoryComboBox* self, QEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->changeEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseChangeEvent(KHistoryComboBox* self, QEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ChangeEvent_IsBase(true);
        vkhistorycombobox->changeEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnChangeEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_ResizeEvent(KHistoryComboBox* self, QResizeEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->resizeEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseResizeEvent(KHistoryComboBox* self, QResizeEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ResizeEvent_IsBase(true);
        vkhistorycombobox->resizeEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnResizeEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_PaintEvent(KHistoryComboBox* self, QPaintEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->paintEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBasePaintEvent(KHistoryComboBox* self, QPaintEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_PaintEvent_IsBase(true);
        vkhistorycombobox->paintEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnPaintEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_PaintEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_ShowEvent(KHistoryComboBox* self, QShowEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->showEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseShowEvent(KHistoryComboBox* self, QShowEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ShowEvent_IsBase(true);
        vkhistorycombobox->showEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnShowEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ShowEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_HideEvent(KHistoryComboBox* self, QHideEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->hideEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseHideEvent(KHistoryComboBox* self, QHideEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_HideEvent_IsBase(true);
        vkhistorycombobox->hideEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnHideEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_HideEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_MousePressEvent(KHistoryComboBox* self, QMouseEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->mousePressEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseMousePressEvent(KHistoryComboBox* self, QMouseEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MousePressEvent_IsBase(true);
        vkhistorycombobox->mousePressEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMousePressEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_MouseReleaseEvent(KHistoryComboBox* self, QMouseEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseMouseReleaseEvent(KHistoryComboBox* self, QMouseEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MouseReleaseEvent_IsBase(true);
        vkhistorycombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMouseReleaseEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_KeyReleaseEvent(KHistoryComboBox* self, QKeyEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseKeyReleaseEvent(KHistoryComboBox* self, QKeyEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_KeyReleaseEvent_IsBase(true);
        vkhistorycombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnKeyReleaseEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_ContextMenuEvent(KHistoryComboBox* self, QContextMenuEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->contextMenuEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseContextMenuEvent(KHistoryComboBox* self, QContextMenuEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ContextMenuEvent_IsBase(true);
        vkhistorycombobox->contextMenuEvent(e);
    } else {
        ((VirtualKHistoryComboBox*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnContextMenuEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_InputMethodEvent(KHistoryComboBox* self, QInputMethodEvent* param1) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKHistoryComboBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseInputMethodEvent(KHistoryComboBox* self, QInputMethodEvent* param1) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InputMethodEvent_IsBase(true);
        vkhistorycombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKHistoryComboBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInputMethodEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_InitStyleOption(const KHistoryComboBox* self, QStyleOptionComboBox* option) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->initStyleOption(option);
    } else {
        ((VirtualKHistoryComboBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseInitStyleOption(const KHistoryComboBox* self, QStyleOptionComboBox* option) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InitStyleOption_IsBase(true);
        vkhistorycombobox->initStyleOption(option);
    } else {
        ((VirtualKHistoryComboBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInitStyleOption(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KHistoryComboBox_DevType(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->devType();
    } else {
        return self->KHistoryComboBox::devType();
    }
}

// Base class handler implementation
int KHistoryComboBox_QBaseDevType(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DevType_IsBase(true);
        return vkhistorycombobox->devType();
    } else {
        return self->KHistoryComboBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDevType(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DevType_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetVisible(KHistoryComboBox* self, bool visible) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setVisible(visible);
    } else {
        self->KHistoryComboBox::setVisible(visible);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetVisible(KHistoryComboBox* self, bool visible) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetVisible_IsBase(true);
        vkhistorycombobox->setVisible(visible);
    } else {
        self->KHistoryComboBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetVisible(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetVisible_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KHistoryComboBox_HeightForWidth(const KHistoryComboBox* self, int param1) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KHistoryComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KHistoryComboBox_QBaseHeightForWidth(const KHistoryComboBox* self, int param1) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_HeightForWidth_IsBase(true);
        return vkhistorycombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KHistoryComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnHeightForWidth(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_HasHeightForWidth(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->hasHeightForWidth();
    } else {
        return self->KHistoryComboBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseHasHeightForWidth(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_HasHeightForWidth_IsBase(true);
        return vkhistorycombobox->hasHeightForWidth();
    } else {
        return self->KHistoryComboBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnHasHeightForWidth(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KHistoryComboBox_PaintEngine(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->paintEngine();
    } else {
        return self->KHistoryComboBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KHistoryComboBox_QBasePaintEngine(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_PaintEngine_IsBase(true);
        return vkhistorycombobox->paintEngine();
    } else {
        return self->KHistoryComboBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnPaintEngine(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_PaintEngine_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_MouseDoubleClickEvent(KHistoryComboBox* self, QMouseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseMouseDoubleClickEvent(KHistoryComboBox* self, QMouseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MouseDoubleClickEvent_IsBase(true);
        vkhistorycombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMouseDoubleClickEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_MouseMoveEvent(KHistoryComboBox* self, QMouseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseMouseMoveEvent(KHistoryComboBox* self, QMouseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MouseMoveEvent_IsBase(true);
        vkhistorycombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMouseMoveEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_EnterEvent(KHistoryComboBox* self, QEnterEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->enterEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseEnterEvent(KHistoryComboBox* self, QEnterEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_EnterEvent_IsBase(true);
        vkhistorycombobox->enterEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnEnterEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_EnterEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_LeaveEvent(KHistoryComboBox* self, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->leaveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseLeaveEvent(KHistoryComboBox* self, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_LeaveEvent_IsBase(true);
        vkhistorycombobox->leaveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnLeaveEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_MoveEvent(KHistoryComboBox* self, QMoveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->moveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseMoveEvent(KHistoryComboBox* self, QMoveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MoveEvent_IsBase(true);
        vkhistorycombobox->moveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMoveEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_MoveEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_CloseEvent(KHistoryComboBox* self, QCloseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->closeEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseCloseEvent(KHistoryComboBox* self, QCloseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_CloseEvent_IsBase(true);
        vkhistorycombobox->closeEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnCloseEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_CloseEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_TabletEvent(KHistoryComboBox* self, QTabletEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->tabletEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseTabletEvent(KHistoryComboBox* self, QTabletEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_TabletEvent_IsBase(true);
        vkhistorycombobox->tabletEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnTabletEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_TabletEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_ActionEvent(KHistoryComboBox* self, QActionEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->actionEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseActionEvent(KHistoryComboBox* self, QActionEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ActionEvent_IsBase(true);
        vkhistorycombobox->actionEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnActionEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ActionEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_DragEnterEvent(KHistoryComboBox* self, QDragEnterEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->dragEnterEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseDragEnterEvent(KHistoryComboBox* self, QDragEnterEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DragEnterEvent_IsBase(true);
        vkhistorycombobox->dragEnterEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDragEnterEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_DragMoveEvent(KHistoryComboBox* self, QDragMoveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->dragMoveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseDragMoveEvent(KHistoryComboBox* self, QDragMoveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DragMoveEvent_IsBase(true);
        vkhistorycombobox->dragMoveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDragMoveEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_DragLeaveEvent(KHistoryComboBox* self, QDragLeaveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseDragLeaveEvent(KHistoryComboBox* self, QDragLeaveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DragLeaveEvent_IsBase(true);
        vkhistorycombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDragLeaveEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_DropEvent(KHistoryComboBox* self, QDropEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->dropEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseDropEvent(KHistoryComboBox* self, QDropEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DropEvent_IsBase(true);
        vkhistorycombobox->dropEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDropEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DropEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_NativeEvent(KHistoryComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKHistoryComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseNativeEvent(KHistoryComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_NativeEvent_IsBase(true);
        return vkhistorycombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKHistoryComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnNativeEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_NativeEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KHistoryComboBox_Metric(const KHistoryComboBox* self, int param1) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKHistoryComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KHistoryComboBox_QBaseMetric(const KHistoryComboBox* self, int param1) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Metric_IsBase(true);
        return vkhistorycombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKHistoryComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMetric(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Metric_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_InitPainter(const KHistoryComboBox* self, QPainter* painter) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->initPainter(painter);
    } else {
        ((VirtualKHistoryComboBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseInitPainter(const KHistoryComboBox* self, QPainter* painter) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InitPainter_IsBase(true);
        vkhistorycombobox->initPainter(painter);
    } else {
        ((VirtualKHistoryComboBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInitPainter(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InitPainter_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KHistoryComboBox_Redirected(const KHistoryComboBox* self, QPoint* offset) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->redirected(offset);
    } else {
        return ((VirtualKHistoryComboBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KHistoryComboBox_QBaseRedirected(const KHistoryComboBox* self, QPoint* offset) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Redirected_IsBase(true);
        return vkhistorycombobox->redirected(offset);
    } else {
        return ((VirtualKHistoryComboBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnRedirected(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Redirected_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KHistoryComboBox_SharedPainter(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->sharedPainter();
    } else {
        return ((VirtualKHistoryComboBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KHistoryComboBox_QBaseSharedPainter(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SharedPainter_IsBase(true);
        return vkhistorycombobox->sharedPainter();
    } else {
        return ((VirtualKHistoryComboBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSharedPainter(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SharedPainter_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_FocusNextPrevChild(KHistoryComboBox* self, bool next) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKHistoryComboBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseFocusNextPrevChild(KHistoryComboBox* self, bool next) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusNextPrevChild_IsBase(true);
        return vkhistorycombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKHistoryComboBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnFocusNextPrevChild(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_EventFilter(KHistoryComboBox* self, QObject* watched, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->eventFilter(watched, event);
    } else {
        return self->KHistoryComboBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseEventFilter(KHistoryComboBox* self, QObject* watched, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_EventFilter_IsBase(true);
        return vkhistorycombobox->eventFilter(watched, event);
    } else {
        return self->KHistoryComboBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnEventFilter(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_EventFilter_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_TimerEvent(KHistoryComboBox* self, QTimerEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->timerEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseTimerEvent(KHistoryComboBox* self, QTimerEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_TimerEvent_IsBase(true);
        vkhistorycombobox->timerEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnTimerEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_TimerEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_ChildEvent(KHistoryComboBox* self, QChildEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->childEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseChildEvent(KHistoryComboBox* self, QChildEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ChildEvent_IsBase(true);
        vkhistorycombobox->childEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnChildEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ChildEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_CustomEvent(KHistoryComboBox* self, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->customEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseCustomEvent(KHistoryComboBox* self, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_CustomEvent_IsBase(true);
        vkhistorycombobox->customEvent(event);
    } else {
        ((VirtualKHistoryComboBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnCustomEvent(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_CustomEvent_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_ConnectNotify(KHistoryComboBox* self, const QMetaMethod* signal) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->connectNotify(*signal);
    } else {
        ((VirtualKHistoryComboBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseConnectNotify(KHistoryComboBox* self, const QMetaMethod* signal) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ConnectNotify_IsBase(true);
        vkhistorycombobox->connectNotify(*signal);
    } else {
        ((VirtualKHistoryComboBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnConnectNotify(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_DisconnectNotify(KHistoryComboBox* self, const QMetaMethod* signal) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKHistoryComboBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseDisconnectNotify(KHistoryComboBox* self, const QMetaMethod* signal) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DisconnectNotify_IsBase(true);
        vkhistorycombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKHistoryComboBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDisconnectNotify(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetCompletionObject(KHistoryComboBox* self, KCompletion* completionObject, bool handleSignals) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setCompletionObject(completionObject, handleSignals);
    } else {
        self->KHistoryComboBox::setCompletionObject(completionObject, handleSignals);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetCompletionObject(KHistoryComboBox* self, KCompletion* completionObject, bool handleSignals) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetCompletionObject_IsBase(true);
        vkhistorycombobox->setCompletionObject(completionObject, handleSignals);
    } else {
        self->KHistoryComboBox::setCompletionObject(completionObject, handleSignals);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetCompletionObject(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetCompletionObject_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetCompletionObject_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetHandleSignals(KHistoryComboBox* self, bool handle) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setHandleSignals(handle);
    } else {
        self->KHistoryComboBox::setHandleSignals(handle);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetHandleSignals(KHistoryComboBox* self, bool handle) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetHandleSignals_IsBase(true);
        vkhistorycombobox->setHandleSignals(handle);
    } else {
        self->KHistoryComboBox::setHandleSignals(handle);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetHandleSignals(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetHandleSignals_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetHandleSignals_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetCompletionMode(KHistoryComboBox* self, int mode) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KHistoryComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetCompletionMode(KHistoryComboBox* self, int mode) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetCompletionMode_IsBase(true);
        vkhistorycombobox->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KHistoryComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetCompletionMode(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetCompletionMode_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetCompletionMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_VirtualHook(KHistoryComboBox* self, int id, void* data) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKHistoryComboBox*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseVirtualHook(KHistoryComboBox* self, int id, void* data) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_VirtualHook_IsBase(true);
        vkhistorycombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKHistoryComboBox*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnVirtualHook(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_VirtualHook_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_InsertItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->insertItems(items_QList);
    } else {
        ((VirtualKHistoryComboBox*)self)->insertItems(items_QList);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseInsertItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InsertItems_IsBase(true);
        vkhistorycombobox->insertItems(items_QList);
    } else {
        ((VirtualKHistoryComboBox*)self)->insertItems(items_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInsertItems(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_InsertItems_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InsertItems_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_UseCompletion(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->useCompletion();
    } else {
        return ((VirtualKHistoryComboBox*)self)->useCompletion();
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseUseCompletion(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_UseCompletion_IsBase(true);
        return vkhistorycombobox->useCompletion();
    } else {
        return ((VirtualKHistoryComboBox*)self)->useCompletion();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnUseCompletion(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_UseCompletion_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_UseCompletion_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_UpdateMicroFocus(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->updateMicroFocus();
    } else {
        ((VirtualKHistoryComboBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseUpdateMicroFocus(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_UpdateMicroFocus_IsBase(true);
        vkhistorycombobox->updateMicroFocus();
    } else {
        ((VirtualKHistoryComboBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnUpdateMicroFocus(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_Create(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->create();
    } else {
        ((VirtualKHistoryComboBox*)self)->create();
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseCreate(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Create_IsBase(true);
        vkhistorycombobox->create();
    } else {
        ((VirtualKHistoryComboBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnCreate(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Create_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_Destroy(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->destroy();
    } else {
        ((VirtualKHistoryComboBox*)self)->destroy();
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseDestroy(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Destroy_IsBase(true);
        vkhistorycombobox->destroy();
    } else {
        ((VirtualKHistoryComboBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDestroy(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Destroy_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_FocusNextChild(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->focusNextChild();
    } else {
        return ((VirtualKHistoryComboBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseFocusNextChild(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusNextChild_IsBase(true);
        return vkhistorycombobox->focusNextChild();
    } else {
        return ((VirtualKHistoryComboBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnFocusNextChild(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_FocusPreviousChild(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->focusPreviousChild();
    } else {
        return ((VirtualKHistoryComboBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseFocusPreviousChild(KHistoryComboBox* self) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusPreviousChild_IsBase(true);
        return vkhistorycombobox->focusPreviousChild();
    } else {
        return ((VirtualKHistoryComboBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnFocusPreviousChild(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KHistoryComboBox_Sender(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->sender();
    } else {
        return ((VirtualKHistoryComboBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KHistoryComboBox_QBaseSender(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Sender_IsBase(true);
        return vkhistorycombobox->sender();
    } else {
        return ((VirtualKHistoryComboBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSender(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Sender_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KHistoryComboBox_SenderSignalIndex(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->senderSignalIndex();
    } else {
        return ((VirtualKHistoryComboBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KHistoryComboBox_QBaseSenderSignalIndex(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SenderSignalIndex_IsBase(true);
        return vkhistorycombobox->senderSignalIndex();
    } else {
        return ((VirtualKHistoryComboBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSenderSignalIndex(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KHistoryComboBox_Receivers(const KHistoryComboBox* self, const char* signal) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->receivers(signal);
    } else {
        return ((VirtualKHistoryComboBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KHistoryComboBox_QBaseReceivers(const KHistoryComboBox* self, const char* signal) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Receivers_IsBase(true);
        return vkhistorycombobox->receivers(signal);
    } else {
        return ((VirtualKHistoryComboBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnReceivers(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Receivers_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KHistoryComboBox_IsSignalConnected(const KHistoryComboBox* self, const QMetaMethod* signal) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKHistoryComboBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KHistoryComboBox_QBaseIsSignalConnected(const KHistoryComboBox* self, const QMetaMethod* signal) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_IsSignalConnected_IsBase(true);
        return vkhistorycombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKHistoryComboBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnIsSignalConnected(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KHistoryComboBox_GetDecodedMetricF(const KHistoryComboBox* self, int metricA, int metricB) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKHistoryComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KHistoryComboBox_QBaseGetDecodedMetricF(const KHistoryComboBox* self, int metricA, int metricB) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_GetDecodedMetricF_IsBase(true);
        return vkhistorycombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKHistoryComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnGetDecodedMetricF(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_GetDecodedMetricF_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KHistoryComboBox_KeyBindingMap(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkhistorycombobox->keyBindingMap();
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
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKHistoryComboBox*)self)->keyBindingMap();
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
libqt_map /* of int to libqt_list  of QKeySequence*  */ KHistoryComboBox_QBaseKeyBindingMap(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_KeyBindingMap_IsBase(true);
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkhistorycombobox->keyBindingMap();
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
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKHistoryComboBox*)self)->keyBindingMap();
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
void KHistoryComboBox_OnKeyBindingMap(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_KeyBindingMap_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_KeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetKeyBindingMap(KHistoryComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
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
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKHistoryComboBox*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetKeyBindingMap(KHistoryComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
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
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetKeyBindingMap_IsBase(true);
        vkhistorycombobox->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKHistoryComboBox*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetKeyBindingMap(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetKeyBindingMap_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetKeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KHistoryComboBox_SetDelegate(KHistoryComboBox* self, KCompletionBase* delegate) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setDelegate(delegate);
    } else {
        ((VirtualKHistoryComboBox*)self)->setDelegate(delegate);
    }
}

// Base class handler implementation
void KHistoryComboBox_QBaseSetDelegate(KHistoryComboBox* self, KCompletionBase* delegate) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetDelegate_IsBase(true);
        vkhistorycombobox->setDelegate(delegate);
    } else {
        ((VirtualKHistoryComboBox*)self)->setDelegate(delegate);
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetDelegate(KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_SetDelegate_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetDelegate_Callback>(slot));
    }
}

// Derived class handler implementation
KCompletionBase* KHistoryComboBox_Delegate(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        return vkhistorycombobox->delegate();
    } else {
        return ((VirtualKHistoryComboBox*)self)->delegate();
    }
}

// Base class handler implementation
KCompletionBase* KHistoryComboBox_QBaseDelegate(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Delegate_IsBase(true);
        return vkhistorycombobox->delegate();
    } else {
        return ((VirtualKHistoryComboBox*)self)->delegate();
    }
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDelegate(const KHistoryComboBox* self, intptr_t slot) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox && vkhistorycombobox->isVirtualKHistoryComboBox) {
        vkhistorycombobox->setKHistoryComboBox_Delegate_Callback(reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Delegate_Callback>(slot));
    }
}

void KHistoryComboBox_Delete(KHistoryComboBox* self) {
    delete self;
}
