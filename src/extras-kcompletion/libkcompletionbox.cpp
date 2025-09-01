#include <KCompletionBox>
#include <QAbstractItemDelegate>
#include <QAbstractItemView>
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
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcompletionbox.h>
#include "libkcompletionbox.h"
#include "libkcompletionbox.hxx"

KCompletionBox* KCompletionBox_new(QWidget* parent) {
    return new VirtualKCompletionBox(parent);
}

KCompletionBox* KCompletionBox_new2() {
    return new VirtualKCompletionBox();
}

QMetaObject* KCompletionBox_MetaObject(const KCompletionBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCompletionBox_Metacast(KCompletionBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCompletionBox_Metacall(KCompletionBox* self, int param1, int param2, void** param3) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCompletionBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCompletionBox_Tr(const char* s) {
    QString _ret = KCompletionBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KCompletionBox_SizeHint(const KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<const VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKCompletionBox*)self)->sizeHint());
    }
}

bool KCompletionBox_ActivateOnSelect(const KCompletionBox* self) {
    return self->activateOnSelect();
}

libqt_list /* of libqt_string */ KCompletionBox_Items(const KCompletionBox* self) {
    QList<QString> _ret = self->items();
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

bool KCompletionBox_IsTabHandling(const KCompletionBox* self) {
    return self->isTabHandling();
}

libqt_string KCompletionBox_CancelledText(const KCompletionBox* self) {
    QString _ret = self->cancelledText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCompletionBox_InsertItems(KCompletionBox* self, const libqt_list /* of libqt_string */ items) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->insertItems(items_QList);
}

void KCompletionBox_SetItems(KCompletionBox* self, const libqt_list /* of libqt_string */ items) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setItems(items_QList);
}

void KCompletionBox_Popup(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        self->popup();
    } else {
        ((VirtualKCompletionBox*)self)->popup();
    }
}

void KCompletionBox_SetTabHandling(KCompletionBox* self, bool enable) {
    self->setTabHandling(enable);
}

void KCompletionBox_SetCancelledText(KCompletionBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setCancelledText(text_QString);
}

void KCompletionBox_SetActivateOnSelect(KCompletionBox* self, bool doEmit) {
    self->setActivateOnSelect(doEmit);
}

void KCompletionBox_Down(KCompletionBox* self) {
    self->down();
}

void KCompletionBox_Up(KCompletionBox* self) {
    self->up();
}

void KCompletionBox_PageDown(KCompletionBox* self) {
    self->pageDown();
}

void KCompletionBox_PageUp(KCompletionBox* self) {
    self->pageUp();
}

void KCompletionBox_Home(KCompletionBox* self) {
    self->home();
}

void KCompletionBox_End(KCompletionBox* self) {
    self->end();
}

void KCompletionBox_SetVisible(KCompletionBox* self, bool visible) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        self->setVisible(visible);
    } else {
        ((VirtualKCompletionBox*)self)->setVisible(visible);
    }
}

void KCompletionBox_TextActivated(KCompletionBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textActivated(text_QString);
}

void KCompletionBox_Connect_TextActivated(KCompletionBox* self, intptr_t slot) {
    void (*slotFunc)(KCompletionBox*, const char*) = reinterpret_cast<void (*)(KCompletionBox*, const char*)>(slot);
    KCompletionBox::connect(self, &KCompletionBox::textActivated, [self, slotFunc](const QString& text) {
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

void KCompletionBox_UserCancelled(KCompletionBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->userCancelled(param1_QString);
}

void KCompletionBox_Connect_UserCancelled(KCompletionBox* self, intptr_t slot) {
    void (*slotFunc)(KCompletionBox*, const char*) = reinterpret_cast<void (*)(KCompletionBox*, const char*)>(slot);
    KCompletionBox::connect(self, &KCompletionBox::userCancelled, [self, slotFunc](const QString& param1) {
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

bool KCompletionBox_EventFilter(KCompletionBox* self, QObject* param1, QEvent* param2) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->eventFilter(param1, param2);
    }
    return {};
}

QPoint* KCompletionBox_GlobalPositionHint(const KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<const VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QPoint(vkcompletionbox->globalPositionHint());
    }
    return {};
}

void KCompletionBox_SlotActivated(KCompletionBox* self, QListWidgetItem* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->slotActivated(param1);
    }
}

libqt_string KCompletionBox_Tr2(const char* s, const char* c) {
    QString _ret = KCompletionBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCompletionBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCompletionBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCompletionBox_InsertItems2(KCompletionBox* self, const libqt_list /* of libqt_string */ items, int index) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->insertItems(items_QList, static_cast<int>(index));
}

// Base class handler implementation
int KCompletionBox_QBaseMetacall(KCompletionBox* self, int param1, int param2, void** param3) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Metacall_IsBase(true);
        return vkcompletionbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCompletionBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMetacall(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Metacall_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KCompletionBox_QBaseSizeHint(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SizeHint_IsBase(true);
        return new QSize(vkcompletionbox->sizeHint());
    } else {
        return new QSize(((VirtualKCompletionBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSizeHint(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SizeHint_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletionBox_QBasePopup(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Popup_IsBase(true);
        vkcompletionbox->popup();
    } else {
        self->KCompletionBox::popup();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnPopup(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Popup_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Popup_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetVisible(KCompletionBox* self, bool visible) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetVisible_IsBase(true);
        vkcompletionbox->setVisible(visible);
    } else {
        self->KCompletionBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetVisible(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetVisible_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetVisible_Callback>(slot));
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseEventFilter(KCompletionBox* self, QObject* param1, QEvent* param2) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_EventFilter_IsBase(true);
        return vkcompletionbox->eventFilter(param1, param2);
    } else {
        return ((VirtualKCompletionBox*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEventFilter(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_EventFilter_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
QPoint* KCompletionBox_QBaseGlobalPositionHint(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_GlobalPositionHint_IsBase(true);
        return new QPoint(vkcompletionbox->globalPositionHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnGlobalPositionHint(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_GlobalPositionHint_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_GlobalPositionHint_Callback>(slot));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSlotActivated(KCompletionBox* self, QListWidgetItem* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SlotActivated_IsBase(true);
        vkcompletionbox->slotActivated(param1);
    } else {
        ((VirtualKCompletionBox*)self)->slotActivated(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSlotActivated(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SlotActivated_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SlotActivated_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SetSelectionModel(KCompletionBox* self, QItemSelectionModel* selectionModel) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setSelectionModel(selectionModel);
    } else {
        self->KCompletionBox::setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetSelectionModel(KCompletionBox* self, QItemSelectionModel* selectionModel) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetSelectionModel_IsBase(true);
        vkcompletionbox->setSelectionModel(selectionModel);
    } else {
        self->KCompletionBox::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetSelectionModel(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetSelectionModel_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DropEvent(KCompletionBox* self, QDropEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->dropEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDropEvent(KCompletionBox* self, QDropEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DropEvent_IsBase(true);
        vkcompletionbox->dropEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDropEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DropEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_Event(KCompletionBox* self, QEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->event(e);
    } else {
        return ((VirtualKCompletionBox*)self)->event(e);
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseEvent(KCompletionBox* self, QEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Event_IsBase(true);
        return vkcompletionbox->event(e);
    } else {
        return ((VirtualKCompletionBox*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Event_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KCompletionBox_MimeTypes(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        QList<QString> _ret = vkcompletionbox->mimeTypes();
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
    } else {
        QList<QString> _ret = ((VirtualKCompletionBox*)self)->mimeTypes();
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ KCompletionBox_QBaseMimeTypes(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MimeTypes_IsBase(true);
        QList<QString> _ret = vkcompletionbox->mimeTypes();
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
    } else {
        QList<QString> _ret = ((VirtualKCompletionBox*)self)->mimeTypes();
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
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMimeTypes(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MimeTypes_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KCompletionBox_MimeData(const KCompletionBox* self, const libqt_list /* of QListWidgetItem* */ items) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->mimeData(items_QList);
    } else {
        return ((VirtualKCompletionBox*)self)->mimeData(items_QList);
    }
}

// Base class handler implementation
QMimeData* KCompletionBox_QBaseMimeData(const KCompletionBox* self, const libqt_list /* of QListWidgetItem* */ items) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MimeData_IsBase(true);
        return vkcompletionbox->mimeData(items_QList);
    } else {
        return ((VirtualKCompletionBox*)self)->mimeData(items_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMimeData(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MimeData_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_DropMimeData(KCompletionBox* self, int index, const QMimeData* data, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return ((VirtualKCompletionBox*)self)->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseDropMimeData(KCompletionBox* self, int index, const QMimeData* data, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DropMimeData_IsBase(true);
        return vkcompletionbox->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return ((VirtualKCompletionBox*)self)->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDropMimeData(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DropMimeData_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_SupportedDropActions(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return static_cast<int>(vkcompletionbox->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualKCompletionBox*)self)->supportedDropActions());
    }
}

// Base class handler implementation
int KCompletionBox_QBaseSupportedDropActions(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkcompletionbox->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualKCompletionBox*)self)->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSupportedDropActions(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SupportedDropActions_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KCompletionBox_VisualRect(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QRect(vkcompletionbox->visualRect(*index));
    } else {
        return new QRect(((VirtualKCompletionBox*)self)->visualRect(*index));
    }
}

// Base class handler implementation
QRect* KCompletionBox_QBaseVisualRect(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VisualRect_IsBase(true);
        return new QRect(vkcompletionbox->visualRect(*index));
    } else {
        return new QRect(((VirtualKCompletionBox*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVisualRect(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VisualRect_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ScrollTo(KCompletionBox* self, const QModelIndex* index, int hint) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->KCompletionBox::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseScrollTo(KCompletionBox* self, const QModelIndex* index, int hint) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ScrollTo_IsBase(true);
        vkcompletionbox->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->KCompletionBox::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnScrollTo(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ScrollTo_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCompletionBox_IndexAt(const KCompletionBox* self, const QPoint* p) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QModelIndex(vkcompletionbox->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualKCompletionBox*)self)->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* KCompletionBox_QBaseIndexAt(const KCompletionBox* self, const QPoint* p) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_IndexAt_IsBase(true);
        return new QModelIndex(vkcompletionbox->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualKCompletionBox*)self)->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnIndexAt(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_IndexAt_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DoItemsLayout(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->doItemsLayout();
    } else {
        self->KCompletionBox::doItemsLayout();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDoItemsLayout(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DoItemsLayout_IsBase(true);
        vkcompletionbox->doItemsLayout();
    } else {
        self->KCompletionBox::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDoItemsLayout(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DoItemsLayout_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_Reset(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->reset();
    } else {
        self->KCompletionBox::reset();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseReset(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Reset_IsBase(true);
        vkcompletionbox->reset();
    } else {
        self->KCompletionBox::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnReset(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Reset_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SetRootIndex(KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setRootIndex(*index);
    } else {
        self->KCompletionBox::setRootIndex(*index);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetRootIndex(KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetRootIndex_IsBase(true);
        vkcompletionbox->setRootIndex(*index);
    } else {
        self->KCompletionBox::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetRootIndex(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetRootIndex_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ScrollContentsBy(KCompletionBox* self, int dx, int dy) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKCompletionBox*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseScrollContentsBy(KCompletionBox* self, int dx, int dy) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ScrollContentsBy_IsBase(true);
        vkcompletionbox->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKCompletionBox*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnScrollContentsBy(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ScrollContentsBy_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DataChanged(KCompletionBox* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualKCompletionBox*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDataChanged(KCompletionBox* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DataChanged_IsBase(true);
        vkcompletionbox->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualKCompletionBox*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDataChanged(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DataChanged_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_RowsInserted(KCompletionBox* self, const QModelIndex* parent, int start, int end) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKCompletionBox*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseRowsInserted(KCompletionBox* self, const QModelIndex* parent, int start, int end) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_RowsInserted_IsBase(true);
        vkcompletionbox->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKCompletionBox*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnRowsInserted(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_RowsInserted_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_RowsAboutToBeRemoved(KCompletionBox* self, const QModelIndex* parent, int start, int end) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKCompletionBox*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseRowsAboutToBeRemoved(KCompletionBox* self, const QModelIndex* parent, int start, int end) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_RowsAboutToBeRemoved_IsBase(true);
        vkcompletionbox->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKCompletionBox*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnRowsAboutToBeRemoved(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_MouseMoveEvent(KCompletionBox* self, QMouseEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->mouseMoveEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseMouseMoveEvent(KCompletionBox* self, QMouseEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MouseMoveEvent_IsBase(true);
        vkcompletionbox->mouseMoveEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMouseMoveEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_MouseReleaseEvent(KCompletionBox* self, QMouseEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->mouseReleaseEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseMouseReleaseEvent(KCompletionBox* self, QMouseEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MouseReleaseEvent_IsBase(true);
        vkcompletionbox->mouseReleaseEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMouseReleaseEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_WheelEvent(KCompletionBox* self, QWheelEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->wheelEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseWheelEvent(KCompletionBox* self, QWheelEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_WheelEvent_IsBase(true);
        vkcompletionbox->wheelEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnWheelEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_WheelEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_TimerEvent(KCompletionBox* self, QTimerEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->timerEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseTimerEvent(KCompletionBox* self, QTimerEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_TimerEvent_IsBase(true);
        vkcompletionbox->timerEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnTimerEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_TimerEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ResizeEvent(KCompletionBox* self, QResizeEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->resizeEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseResizeEvent(KCompletionBox* self, QResizeEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ResizeEvent_IsBase(true);
        vkcompletionbox->resizeEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnResizeEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ResizeEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DragMoveEvent(KCompletionBox* self, QDragMoveEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->dragMoveEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDragMoveEvent(KCompletionBox* self, QDragMoveEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DragMoveEvent_IsBase(true);
        vkcompletionbox->dragMoveEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDragMoveEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DragLeaveEvent(KCompletionBox* self, QDragLeaveEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->dragLeaveEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDragLeaveEvent(KCompletionBox* self, QDragLeaveEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DragLeaveEvent_IsBase(true);
        vkcompletionbox->dragLeaveEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDragLeaveEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_StartDrag(KCompletionBox* self, int supportedActions) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualKCompletionBox*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseStartDrag(KCompletionBox* self, int supportedActions) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_StartDrag_IsBase(true);
        vkcompletionbox->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualKCompletionBox*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnStartDrag(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_StartDrag_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_InitViewItemOption(const KCompletionBox* self, QStyleOptionViewItem* option) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->initViewItemOption(option);
    } else {
        ((VirtualKCompletionBox*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseInitViewItemOption(const KCompletionBox* self, QStyleOptionViewItem* option) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InitViewItemOption_IsBase(true);
        vkcompletionbox->initViewItemOption(option);
    } else {
        ((VirtualKCompletionBox*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInitViewItemOption(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InitViewItemOption_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_PaintEvent(KCompletionBox* self, QPaintEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->paintEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KCompletionBox_QBasePaintEvent(KCompletionBox* self, QPaintEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_PaintEvent_IsBase(true);
        vkcompletionbox->paintEvent(e);
    } else {
        ((VirtualKCompletionBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnPaintEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_PaintEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_HorizontalOffset(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->horizontalOffset();
    } else {
        return ((VirtualKCompletionBox*)self)->horizontalOffset();
    }
}

// Base class handler implementation
int KCompletionBox_QBaseHorizontalOffset(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HorizontalOffset_IsBase(true);
        return vkcompletionbox->horizontalOffset();
    } else {
        return ((VirtualKCompletionBox*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHorizontalOffset(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HorizontalOffset_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_VerticalOffset(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->verticalOffset();
    } else {
        return ((VirtualKCompletionBox*)self)->verticalOffset();
    }
}

// Base class handler implementation
int KCompletionBox_QBaseVerticalOffset(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VerticalOffset_IsBase(true);
        return vkcompletionbox->verticalOffset();
    } else {
        return ((VirtualKCompletionBox*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVerticalOffset(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VerticalOffset_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCompletionBox_MoveCursor(KCompletionBox* self, int cursorAction, int modifiers) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QModelIndex(vkcompletionbox->moveCursor(static_cast<VirtualKCompletionBox::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KCompletionBox_QBaseMoveCursor(KCompletionBox* self, int cursorAction, int modifiers) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MoveCursor_IsBase(true);
        return new QModelIndex(vkcompletionbox->moveCursor(static_cast<VirtualKCompletionBox::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMoveCursor(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MoveCursor_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SetSelection(KCompletionBox* self, const QRect* rect, int command) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualKCompletionBox*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetSelection(KCompletionBox* self, const QRect* rect, int command) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetSelection_IsBase(true);
        vkcompletionbox->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualKCompletionBox*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetSelection(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetSelection_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* KCompletionBox_VisualRegionForSelection(const KCompletionBox* self, const QItemSelection* selection) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QRegion(vkcompletionbox->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* KCompletionBox_QBaseVisualRegionForSelection(const KCompletionBox* self, const QItemSelection* selection) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VisualRegionForSelection_IsBase(true);
        return new QRegion(vkcompletionbox->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVisualRegionForSelection(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VisualRegionForSelection_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCompletionBox_SelectedIndexes(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        QList<QModelIndex> _ret = vkcompletionbox->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKCompletionBox*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KCompletionBox_QBaseSelectedIndexes(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vkcompletionbox->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKCompletionBox*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSelectedIndexes(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SelectedIndexes_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_UpdateGeometries(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->updateGeometries();
    } else {
        ((VirtualKCompletionBox*)self)->updateGeometries();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseUpdateGeometries(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_UpdateGeometries_IsBase(true);
        vkcompletionbox->updateGeometries();
    } else {
        ((VirtualKCompletionBox*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnUpdateGeometries(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_UpdateGeometries_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_IsIndexHidden(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->isIndexHidden(*index);
    } else {
        return ((VirtualKCompletionBox*)self)->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseIsIndexHidden(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_IsIndexHidden_IsBase(true);
        return vkcompletionbox->isIndexHidden(*index);
    } else {
        return ((VirtualKCompletionBox*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnIsIndexHidden(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_IsIndexHidden_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SelectionChanged(KCompletionBox* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualKCompletionBox*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSelectionChanged(KCompletionBox* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SelectionChanged_IsBase(true);
        vkcompletionbox->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualKCompletionBox*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSelectionChanged(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SelectionChanged_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_CurrentChanged(KCompletionBox* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->currentChanged(*current, *previous);
    } else {
        ((VirtualKCompletionBox*)self)->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseCurrentChanged(KCompletionBox* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CurrentChanged_IsBase(true);
        vkcompletionbox->currentChanged(*current, *previous);
    } else {
        ((VirtualKCompletionBox*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCurrentChanged(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CurrentChanged_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCompletionBox_ViewportSizeHint(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QSize(vkcompletionbox->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* KCompletionBox_QBaseViewportSizeHint(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ViewportSizeHint_IsBase(true);
        return new QSize(vkcompletionbox->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnViewportSizeHint(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ViewportSizeHint_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_KeyboardSearch(KCompletionBox* self, const libqt_string search) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->keyboardSearch(search_QString);
    } else {
        self->KCompletionBox::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseKeyboardSearch(KCompletionBox* self, const libqt_string search) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_KeyboardSearch_IsBase(true);
        vkcompletionbox->keyboardSearch(search_QString);
    } else {
        self->KCompletionBox::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnKeyboardSearch(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_KeyboardSearch_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_SizeHintForRow(const KCompletionBox* self, int row) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->KCompletionBox::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int KCompletionBox_QBaseSizeHintForRow(const KCompletionBox* self, int row) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SizeHintForRow_IsBase(true);
        return vkcompletionbox->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->KCompletionBox::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSizeHintForRow(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SizeHintForRow_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_SizeHintForColumn(const KCompletionBox* self, int column) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->KCompletionBox::sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int KCompletionBox_QBaseSizeHintForColumn(const KCompletionBox* self, int column) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SizeHintForColumn_IsBase(true);
        return vkcompletionbox->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->KCompletionBox::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSizeHintForColumn(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SizeHintForColumn_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* KCompletionBox_ItemDelegateForIndex(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->itemDelegateForIndex(*index);
    } else {
        return self->KCompletionBox::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* KCompletionBox_QBaseItemDelegateForIndex(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ItemDelegateForIndex_IsBase(true);
        return vkcompletionbox->itemDelegateForIndex(*index);
    } else {
        return self->KCompletionBox::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnItemDelegateForIndex(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCompletionBox_InputMethodQuery(const KCompletionBox* self, int query) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QVariant(vkcompletionbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualKCompletionBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* KCompletionBox_QBaseInputMethodQuery(const KCompletionBox* self, int query) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InputMethodQuery_IsBase(true);
        return new QVariant(vkcompletionbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualKCompletionBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInputMethodQuery(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SelectAll(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->selectAll();
    } else {
        self->KCompletionBox::selectAll();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSelectAll(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SelectAll_IsBase(true);
        vkcompletionbox->selectAll();
    } else {
        self->KCompletionBox::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSelectAll(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SelectAll_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_UpdateEditorData(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->updateEditorData();
    } else {
        ((VirtualKCompletionBox*)self)->updateEditorData();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseUpdateEditorData(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_UpdateEditorData_IsBase(true);
        vkcompletionbox->updateEditorData();
    } else {
        ((VirtualKCompletionBox*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnUpdateEditorData(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_UpdateEditorData_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_UpdateEditorGeometries(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->updateEditorGeometries();
    } else {
        ((VirtualKCompletionBox*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseUpdateEditorGeometries(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_UpdateEditorGeometries_IsBase(true);
        vkcompletionbox->updateEditorGeometries();
    } else {
        ((VirtualKCompletionBox*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnUpdateEditorGeometries(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_VerticalScrollbarAction(KCompletionBox* self, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKCompletionBox*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseVerticalScrollbarAction(KCompletionBox* self, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VerticalScrollbarAction_IsBase(true);
        vkcompletionbox->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKCompletionBox*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVerticalScrollbarAction(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_HorizontalScrollbarAction(KCompletionBox* self, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKCompletionBox*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseHorizontalScrollbarAction(KCompletionBox* self, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HorizontalScrollbarAction_IsBase(true);
        vkcompletionbox->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKCompletionBox*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHorizontalScrollbarAction(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_VerticalScrollbarValueChanged(KCompletionBox* self, int value) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKCompletionBox*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseVerticalScrollbarValueChanged(KCompletionBox* self, int value) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VerticalScrollbarValueChanged_IsBase(true);
        vkcompletionbox->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKCompletionBox*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVerticalScrollbarValueChanged(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_HorizontalScrollbarValueChanged(KCompletionBox* self, int value) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKCompletionBox*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseHorizontalScrollbarValueChanged(KCompletionBox* self, int value) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HorizontalScrollbarValueChanged_IsBase(true);
        vkcompletionbox->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKCompletionBox*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHorizontalScrollbarValueChanged(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_CloseEditor(KCompletionBox* self, QWidget* editor, int hint) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualKCompletionBox*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseCloseEditor(KCompletionBox* self, QWidget* editor, int hint) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CloseEditor_IsBase(true);
        vkcompletionbox->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualKCompletionBox*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCloseEditor(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CloseEditor_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_CommitData(KCompletionBox* self, QWidget* editor) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->commitData(editor);
    } else {
        ((VirtualKCompletionBox*)self)->commitData(editor);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseCommitData(KCompletionBox* self, QWidget* editor) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CommitData_IsBase(true);
        vkcompletionbox->commitData(editor);
    } else {
        ((VirtualKCompletionBox*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCommitData(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CommitData_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_EditorDestroyed(KCompletionBox* self, QObject* editor) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->editorDestroyed(editor);
    } else {
        ((VirtualKCompletionBox*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseEditorDestroyed(KCompletionBox* self, QObject* editor) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_EditorDestroyed_IsBase(true);
        vkcompletionbox->editorDestroyed(editor);
    } else {
        ((VirtualKCompletionBox*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEditorDestroyed(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_EditorDestroyed_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_Edit2(KCompletionBox* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualKCompletionBox*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseEdit2(KCompletionBox* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Edit2_IsBase(true);
        return vkcompletionbox->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualKCompletionBox*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEdit2(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Edit2_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_SelectionCommand(const KCompletionBox* self, const QModelIndex* index, const QEvent* event) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return static_cast<int>(vkcompletionbox->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualKCompletionBox*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int KCompletionBox_QBaseSelectionCommand(const KCompletionBox* self, const QModelIndex* index, const QEvent* event) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SelectionCommand_IsBase(true);
        return static_cast<int>(vkcompletionbox->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualKCompletionBox*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSelectionCommand(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SelectionCommand_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_FocusNextPrevChild(KCompletionBox* self, bool next) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->focusNextPrevChild(next);
    } else {
        return ((VirtualKCompletionBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseFocusNextPrevChild(KCompletionBox* self, bool next) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusNextPrevChild_IsBase(true);
        return vkcompletionbox->focusNextPrevChild(next);
    } else {
        return ((VirtualKCompletionBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnFocusNextPrevChild(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_ViewportEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->viewportEvent(event);
    } else {
        return ((VirtualKCompletionBox*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseViewportEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ViewportEvent_IsBase(true);
        return vkcompletionbox->viewportEvent(event);
    } else {
        return ((VirtualKCompletionBox*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnViewportEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ViewportEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_MousePressEvent(KCompletionBox* self, QMouseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->mousePressEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseMousePressEvent(KCompletionBox* self, QMouseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MousePressEvent_IsBase(true);
        vkcompletionbox->mousePressEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMousePressEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MousePressEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_MouseDoubleClickEvent(KCompletionBox* self, QMouseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseMouseDoubleClickEvent(KCompletionBox* self, QMouseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MouseDoubleClickEvent_IsBase(true);
        vkcompletionbox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMouseDoubleClickEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DragEnterEvent(KCompletionBox* self, QDragEnterEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->dragEnterEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDragEnterEvent(KCompletionBox* self, QDragEnterEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DragEnterEvent_IsBase(true);
        vkcompletionbox->dragEnterEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDragEnterEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_FocusInEvent(KCompletionBox* self, QFocusEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->focusInEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseFocusInEvent(KCompletionBox* self, QFocusEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusInEvent_IsBase(true);
        vkcompletionbox->focusInEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnFocusInEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusInEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_FocusOutEvent(KCompletionBox* self, QFocusEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->focusOutEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseFocusOutEvent(KCompletionBox* self, QFocusEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusOutEvent_IsBase(true);
        vkcompletionbox->focusOutEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnFocusOutEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_KeyPressEvent(KCompletionBox* self, QKeyEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->keyPressEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseKeyPressEvent(KCompletionBox* self, QKeyEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_KeyPressEvent_IsBase(true);
        vkcompletionbox->keyPressEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnKeyPressEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_InputMethodEvent(KCompletionBox* self, QInputMethodEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->inputMethodEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseInputMethodEvent(KCompletionBox* self, QInputMethodEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InputMethodEvent_IsBase(true);
        vkcompletionbox->inputMethodEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInputMethodEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCompletionBox_MinimumSizeHint(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QSize(vkcompletionbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCompletionBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KCompletionBox_QBaseMinimumSizeHint(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MinimumSizeHint_IsBase(true);
        return new QSize(vkcompletionbox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCompletionBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMinimumSizeHint(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SetupViewport(KCompletionBox* self, QWidget* viewport) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setupViewport(viewport);
    } else {
        self->KCompletionBox::setupViewport(viewport);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetupViewport(KCompletionBox* self, QWidget* viewport) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetupViewport_IsBase(true);
        vkcompletionbox->setupViewport(viewport);
    } else {
        self->KCompletionBox::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetupViewport(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetupViewport_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ContextMenuEvent(KCompletionBox* self, QContextMenuEvent* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->contextMenuEvent(param1);
    } else {
        ((VirtualKCompletionBox*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseContextMenuEvent(KCompletionBox* self, QContextMenuEvent* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ContextMenuEvent_IsBase(true);
        vkcompletionbox->contextMenuEvent(param1);
    } else {
        ((VirtualKCompletionBox*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnContextMenuEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ChangeEvent(KCompletionBox* self, QEvent* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->changeEvent(param1);
    } else {
        ((VirtualKCompletionBox*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseChangeEvent(KCompletionBox* self, QEvent* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ChangeEvent_IsBase(true);
        vkcompletionbox->changeEvent(param1);
    } else {
        ((VirtualKCompletionBox*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnChangeEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ChangeEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_InitStyleOption(const KCompletionBox* self, QStyleOptionFrame* option) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->initStyleOption(option);
    } else {
        ((VirtualKCompletionBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseInitStyleOption(const KCompletionBox* self, QStyleOptionFrame* option) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InitStyleOption_IsBase(true);
        vkcompletionbox->initStyleOption(option);
    } else {
        ((VirtualKCompletionBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInitStyleOption(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InitStyleOption_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_DevType(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->devType();
    } else {
        return self->KCompletionBox::devType();
    }
}

// Base class handler implementation
int KCompletionBox_QBaseDevType(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DevType_IsBase(true);
        return vkcompletionbox->devType();
    } else {
        return self->KCompletionBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDevType(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DevType_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_HeightForWidth(const KCompletionBox* self, int param1) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCompletionBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KCompletionBox_QBaseHeightForWidth(const KCompletionBox* self, int param1) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HeightForWidth_IsBase(true);
        return vkcompletionbox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCompletionBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHeightForWidth(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HeightForWidth_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_HasHeightForWidth(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->hasHeightForWidth();
    } else {
        return self->KCompletionBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseHasHeightForWidth(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HasHeightForWidth_IsBase(true);
        return vkcompletionbox->hasHeightForWidth();
    } else {
        return self->KCompletionBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHasHeightForWidth(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KCompletionBox_PaintEngine(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->paintEngine();
    } else {
        return self->KCompletionBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KCompletionBox_QBasePaintEngine(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_PaintEngine_IsBase(true);
        return vkcompletionbox->paintEngine();
    } else {
        return self->KCompletionBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnPaintEngine(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_PaintEngine_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_KeyReleaseEvent(KCompletionBox* self, QKeyEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->keyReleaseEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseKeyReleaseEvent(KCompletionBox* self, QKeyEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_KeyReleaseEvent_IsBase(true);
        vkcompletionbox->keyReleaseEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnKeyReleaseEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_EnterEvent(KCompletionBox* self, QEnterEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->enterEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseEnterEvent(KCompletionBox* self, QEnterEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_EnterEvent_IsBase(true);
        vkcompletionbox->enterEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEnterEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_EnterEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_LeaveEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->leaveEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseLeaveEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_LeaveEvent_IsBase(true);
        vkcompletionbox->leaveEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnLeaveEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_LeaveEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_MoveEvent(KCompletionBox* self, QMoveEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->moveEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseMoveEvent(KCompletionBox* self, QMoveEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MoveEvent_IsBase(true);
        vkcompletionbox->moveEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMoveEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_MoveEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_CloseEvent(KCompletionBox* self, QCloseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->closeEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseCloseEvent(KCompletionBox* self, QCloseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CloseEvent_IsBase(true);
        vkcompletionbox->closeEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCloseEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CloseEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_TabletEvent(KCompletionBox* self, QTabletEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->tabletEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseTabletEvent(KCompletionBox* self, QTabletEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_TabletEvent_IsBase(true);
        vkcompletionbox->tabletEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnTabletEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_TabletEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ActionEvent(KCompletionBox* self, QActionEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->actionEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseActionEvent(KCompletionBox* self, QActionEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ActionEvent_IsBase(true);
        vkcompletionbox->actionEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnActionEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ActionEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ShowEvent(KCompletionBox* self, QShowEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->showEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseShowEvent(KCompletionBox* self, QShowEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ShowEvent_IsBase(true);
        vkcompletionbox->showEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnShowEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ShowEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_HideEvent(KCompletionBox* self, QHideEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->hideEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseHideEvent(KCompletionBox* self, QHideEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HideEvent_IsBase(true);
        vkcompletionbox->hideEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHideEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_HideEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_NativeEvent(KCompletionBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCompletionBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseNativeEvent(KCompletionBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_NativeEvent_IsBase(true);
        return vkcompletionbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCompletionBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnNativeEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_NativeEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_Metric(const KCompletionBox* self, int param1) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCompletionBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KCompletionBox_QBaseMetric(const KCompletionBox* self, int param1) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Metric_IsBase(true);
        return vkcompletionbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCompletionBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMetric(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Metric_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_InitPainter(const KCompletionBox* self, QPainter* painter) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->initPainter(painter);
    } else {
        ((VirtualKCompletionBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseInitPainter(const KCompletionBox* self, QPainter* painter) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InitPainter_IsBase(true);
        vkcompletionbox->initPainter(painter);
    } else {
        ((VirtualKCompletionBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInitPainter(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_InitPainter_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KCompletionBox_Redirected(const KCompletionBox* self, QPoint* offset) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->redirected(offset);
    } else {
        return ((VirtualKCompletionBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KCompletionBox_QBaseRedirected(const KCompletionBox* self, QPoint* offset) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Redirected_IsBase(true);
        return vkcompletionbox->redirected(offset);
    } else {
        return ((VirtualKCompletionBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnRedirected(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Redirected_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KCompletionBox_SharedPainter(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->sharedPainter();
    } else {
        return ((VirtualKCompletionBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KCompletionBox_QBaseSharedPainter(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SharedPainter_IsBase(true);
        return vkcompletionbox->sharedPainter();
    } else {
        return ((VirtualKCompletionBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSharedPainter(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SharedPainter_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ChildEvent(KCompletionBox* self, QChildEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->childEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseChildEvent(KCompletionBox* self, QChildEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ChildEvent_IsBase(true);
        vkcompletionbox->childEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnChildEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ChildEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_CustomEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->customEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseCustomEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CustomEvent_IsBase(true);
        vkcompletionbox->customEvent(event);
    } else {
        ((VirtualKCompletionBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCustomEvent(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CustomEvent_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ConnectNotify(KCompletionBox* self, const QMetaMethod* signal) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->connectNotify(*signal);
    } else {
        ((VirtualKCompletionBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseConnectNotify(KCompletionBox* self, const QMetaMethod* signal) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ConnectNotify_IsBase(true);
        vkcompletionbox->connectNotify(*signal);
    } else {
        ((VirtualKCompletionBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnConnectNotify(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ConnectNotify_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DisconnectNotify(KCompletionBox* self, const QMetaMethod* signal) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->disconnectNotify(*signal);
    } else {
        ((VirtualKCompletionBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDisconnectNotify(KCompletionBox* self, const QMetaMethod* signal) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DisconnectNotify_IsBase(true);
        vkcompletionbox->disconnectNotify(*signal);
    } else {
        ((VirtualKCompletionBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDisconnectNotify(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KCompletionBox_CalculateGeometry(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QRect(vkcompletionbox->calculateGeometry());
    }
    return {};
}

// Base class handler implementation
QRect* KCompletionBox_QBaseCalculateGeometry(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CalculateGeometry_IsBase(true);
        return new QRect(vkcompletionbox->calculateGeometry());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCalculateGeometry(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_CalculateGeometry_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CalculateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ResizeAndReposition(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->resizeAndReposition();
    } else {
        ((VirtualKCompletionBox*)self)->resizeAndReposition();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseResizeAndReposition(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ResizeAndReposition_IsBase(true);
        vkcompletionbox->resizeAndReposition();
    } else {
        ((VirtualKCompletionBox*)self)->resizeAndReposition();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnResizeAndReposition(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ResizeAndReposition_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ResizeAndReposition_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ResizeContents(KCompletionBox* self, int width, int height) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualKCompletionBox*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseResizeContents(KCompletionBox* self, int width, int height) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ResizeContents_IsBase(true);
        vkcompletionbox->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualKCompletionBox*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnResizeContents(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ResizeContents_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ResizeContents_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCompletionBox_ContentsSize(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QSize(vkcompletionbox->contentsSize());
    }
    return {};
}

// Base class handler implementation
QSize* KCompletionBox_QBaseContentsSize(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ContentsSize_IsBase(true);
        return new QSize(vkcompletionbox->contentsSize());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnContentsSize(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ContentsSize_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ContentsSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KCompletionBox_RectForIndex(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QRect(vkcompletionbox->rectForIndex(*index));
    }
    return {};
}

// Base class handler implementation
QRect* KCompletionBox_QBaseRectForIndex(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_RectForIndex_IsBase(true);
        return new QRect(vkcompletionbox->rectForIndex(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnRectForIndex(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_RectForIndex_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_RectForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SetPositionForIndex(KCompletionBox* self, const QPoint* position, const QModelIndex* index) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setPositionForIndex(*position, *index);
    } else {
        ((VirtualKCompletionBox*)self)->setPositionForIndex(*position, *index);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetPositionForIndex(KCompletionBox* self, const QPoint* position, const QModelIndex* index) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetPositionForIndex_IsBase(true);
        vkcompletionbox->setPositionForIndex(*position, *index);
    } else {
        ((VirtualKCompletionBox*)self)->setPositionForIndex(*position, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetPositionForIndex(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetPositionForIndex_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetPositionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_State(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return static_cast<int>(vkcompletionbox->state());
    } else {
        return static_cast<int>(((VirtualKCompletionBox*)self)->state());
    }
}

// Base class handler implementation
int KCompletionBox_QBaseState(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_State_IsBase(true);
        return static_cast<int>(vkcompletionbox->state());
    } else {
        return static_cast<int>(((VirtualKCompletionBox*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnState(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_State_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_State_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SetState(KCompletionBox* self, int state) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setState(static_cast<VirtualKCompletionBox::State>(state));
    } else {
        ((VirtualKCompletionBox*)self)->setState(static_cast<VirtualKCompletionBox::State>(state));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetState(KCompletionBox* self, int state) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetState_IsBase(true);
        vkcompletionbox->setState(static_cast<VirtualKCompletionBox::State>(state));
    } else {
        ((VirtualKCompletionBox*)self)->setState(static_cast<VirtualKCompletionBox::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetState(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetState_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ScheduleDelayedItemsLayout(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->scheduleDelayedItemsLayout();
    } else {
        ((VirtualKCompletionBox*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseScheduleDelayedItemsLayout(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ScheduleDelayedItemsLayout_IsBase(true);
        vkcompletionbox->scheduleDelayedItemsLayout();
    } else {
        ((VirtualKCompletionBox*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnScheduleDelayedItemsLayout(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ExecuteDelayedItemsLayout(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->executeDelayedItemsLayout();
    } else {
        ((VirtualKCompletionBox*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseExecuteDelayedItemsLayout(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ExecuteDelayedItemsLayout_IsBase(true);
        vkcompletionbox->executeDelayedItemsLayout();
    } else {
        ((VirtualKCompletionBox*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnExecuteDelayedItemsLayout(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SetDirtyRegion(KCompletionBox* self, const QRegion* region) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setDirtyRegion(*region);
    } else {
        ((VirtualKCompletionBox*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetDirtyRegion(KCompletionBox* self, const QRegion* region) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetDirtyRegion_IsBase(true);
        vkcompletionbox->setDirtyRegion(*region);
    } else {
        ((VirtualKCompletionBox*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetDirtyRegion(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetDirtyRegion_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_ScrollDirtyRegion(KCompletionBox* self, int dx, int dy) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKCompletionBox*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseScrollDirtyRegion(KCompletionBox* self, int dx, int dy) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ScrollDirtyRegion_IsBase(true);
        vkcompletionbox->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKCompletionBox*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnScrollDirtyRegion(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* KCompletionBox_DirtyRegionOffset(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QPoint(vkcompletionbox->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* KCompletionBox_QBaseDirtyRegionOffset(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DirtyRegionOffset_IsBase(true);
        return new QPoint(vkcompletionbox->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDirtyRegionOffset(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DirtyRegionOffset_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_StartAutoScroll(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->startAutoScroll();
    } else {
        ((VirtualKCompletionBox*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseStartAutoScroll(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_StartAutoScroll_IsBase(true);
        vkcompletionbox->startAutoScroll();
    } else {
        ((VirtualKCompletionBox*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnStartAutoScroll(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_StartAutoScroll_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_StopAutoScroll(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->stopAutoScroll();
    } else {
        ((VirtualKCompletionBox*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseStopAutoScroll(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_StopAutoScroll_IsBase(true);
        vkcompletionbox->stopAutoScroll();
    } else {
        ((VirtualKCompletionBox*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnStopAutoScroll(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_StopAutoScroll_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DoAutoScroll(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->doAutoScroll();
    } else {
        ((VirtualKCompletionBox*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDoAutoScroll(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DoAutoScroll_IsBase(true);
        vkcompletionbox->doAutoScroll();
    } else {
        ((VirtualKCompletionBox*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDoAutoScroll(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DoAutoScroll_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_DropIndicatorPosition(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return static_cast<int>(vkcompletionbox->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualKCompletionBox*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int KCompletionBox_QBaseDropIndicatorPosition(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vkcompletionbox->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualKCompletionBox*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDropIndicatorPosition(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DropIndicatorPosition_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_SetViewportMargins(KCompletionBox* self, int left, int top, int right, int bottom) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKCompletionBox*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void KCompletionBox_QBaseSetViewportMargins(KCompletionBox* self, int left, int top, int right, int bottom) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetViewportMargins_IsBase(true);
        vkcompletionbox->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKCompletionBox*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetViewportMargins(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SetViewportMargins_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* KCompletionBox_ViewportMargins(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return new QMargins(vkcompletionbox->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* KCompletionBox_QBaseViewportMargins(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ViewportMargins_IsBase(true);
        return new QMargins(vkcompletionbox->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnViewportMargins(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_ViewportMargins_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_DrawFrame(KCompletionBox* self, QPainter* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->drawFrame(param1);
    } else {
        ((VirtualKCompletionBox*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDrawFrame(KCompletionBox* self, QPainter* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DrawFrame_IsBase(true);
        vkcompletionbox->drawFrame(param1);
    } else {
        ((VirtualKCompletionBox*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDrawFrame(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_DrawFrame_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_UpdateMicroFocus(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->updateMicroFocus();
    } else {
        ((VirtualKCompletionBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseUpdateMicroFocus(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_UpdateMicroFocus_IsBase(true);
        vkcompletionbox->updateMicroFocus();
    } else {
        ((VirtualKCompletionBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnUpdateMicroFocus(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_Create(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->create();
    } else {
        ((VirtualKCompletionBox*)self)->create();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseCreate(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Create_IsBase(true);
        vkcompletionbox->create();
    } else {
        ((VirtualKCompletionBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCreate(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Create_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KCompletionBox_Destroy(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->destroy();
    } else {
        ((VirtualKCompletionBox*)self)->destroy();
    }
}

// Base class handler implementation
void KCompletionBox_QBaseDestroy(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Destroy_IsBase(true);
        vkcompletionbox->destroy();
    } else {
        ((VirtualKCompletionBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDestroy(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Destroy_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_FocusNextChild(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->focusNextChild();
    } else {
        return ((VirtualKCompletionBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseFocusNextChild(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusNextChild_IsBase(true);
        return vkcompletionbox->focusNextChild();
    } else {
        return ((VirtualKCompletionBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnFocusNextChild(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusNextChild_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_FocusPreviousChild(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->focusPreviousChild();
    } else {
        return ((VirtualKCompletionBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseFocusPreviousChild(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusPreviousChild_IsBase(true);
        return vkcompletionbox->focusPreviousChild();
    } else {
        return ((VirtualKCompletionBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnFocusPreviousChild(KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCompletionBox_Sender(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->sender();
    } else {
        return ((VirtualKCompletionBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCompletionBox_QBaseSender(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Sender_IsBase(true);
        return vkcompletionbox->sender();
    } else {
        return ((VirtualKCompletionBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSender(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Sender_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_SenderSignalIndex(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->senderSignalIndex();
    } else {
        return ((VirtualKCompletionBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCompletionBox_QBaseSenderSignalIndex(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SenderSignalIndex_IsBase(true);
        return vkcompletionbox->senderSignalIndex();
    } else {
        return ((VirtualKCompletionBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSenderSignalIndex(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCompletionBox_Receivers(const KCompletionBox* self, const char* signal) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->receivers(signal);
    } else {
        return ((VirtualKCompletionBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCompletionBox_QBaseReceivers(const KCompletionBox* self, const char* signal) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Receivers_IsBase(true);
        return vkcompletionbox->receivers(signal);
    } else {
        return ((VirtualKCompletionBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnReceivers(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_Receivers_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCompletionBox_IsSignalConnected(const KCompletionBox* self, const QMetaMethod* signal) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->isSignalConnected(*signal);
    } else {
        return ((VirtualKCompletionBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCompletionBox_QBaseIsSignalConnected(const KCompletionBox* self, const QMetaMethod* signal) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_IsSignalConnected_IsBase(true);
        return vkcompletionbox->isSignalConnected(*signal);
    } else {
        return ((VirtualKCompletionBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnIsSignalConnected(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KCompletionBox_GetDecodedMetricF(const KCompletionBox* self, int metricA, int metricB) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        return vkcompletionbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCompletionBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KCompletionBox_QBaseGetDecodedMetricF(const KCompletionBox* self, int metricA, int metricB) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_GetDecodedMetricF_IsBase(true);
        return vkcompletionbox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCompletionBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnGetDecodedMetricF(const KCompletionBox* self, intptr_t slot) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox && vkcompletionbox->isVirtualKCompletionBox) {
        vkcompletionbox->setKCompletionBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKCompletionBox::KCompletionBox_GetDecodedMetricF_Callback>(slot));
    }
}

void KCompletionBox_Delete(KCompletionBox* self) {
    delete self;
}
