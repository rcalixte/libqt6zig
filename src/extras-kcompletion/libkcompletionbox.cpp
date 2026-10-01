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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCompletionBox_Tr(const char* s) {
    auto _ret = KCompletionBox::tr(s);
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
    return new QSize(self->sizeHint());
}

bool KCompletionBox_ActivateOnSelect(const KCompletionBox* self) {
    return self->activateOnSelect();
}

libqt_list /* of libqt_string */ KCompletionBox_Items(const KCompletionBox* self) {
    QList<QString> _ret = self->items();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    auto _ret = self->cancelledText();
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
    self->popup();
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
    self->setVisible(visible);
}

void KCompletionBox_TextActivated(KCompletionBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textActivated(text_QString);
}

void KCompletionBox_Connect_TextActivated(KCompletionBox* self, intptr_t slot) {
    void (*slotFunc)(KCompletionBox*, const char*) = reinterpret_cast<void (*)(KCompletionBox*, const char*)>(slot);
    KCompletionBox::connect(self,
                            static_cast<void (KCompletionBox::*)(const QString&)>(&KCompletionBox::textActivated),
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

void KCompletionBox_UserCancelled(KCompletionBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->userCancelled(param1_QString);
}

void KCompletionBox_Connect_UserCancelled(KCompletionBox* self, intptr_t slot) {
    void (*slotFunc)(KCompletionBox*, const char*) = reinterpret_cast<void (*)(KCompletionBox*, const char*)>(slot);
    KCompletionBox::connect(self,
                            static_cast<void (KCompletionBox::*)(const QString&)>(&KCompletionBox::userCancelled),
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

bool KCompletionBox_EventFilter(KCompletionBox* self, QObject* param1, QEvent* param2) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        return vkcompletionbox->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method KCompletionBox::eventFilter called without a directly constructed type");
}

QPoint* KCompletionBox_GlobalPositionHint(const KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<const VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        return new QPoint(vkcompletionbox->globalPositionHint());
    }
    qFatal("Error: Protected method KCompletionBox::globalPositionHint called without a directly constructed type");
}

void KCompletionBox_SlotActivated(KCompletionBox* self, QListWidgetItem* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->slotActivated(param1);
    }
}

libqt_string KCompletionBox_Tr2(const char* s, const char* c) {
    auto _ret = KCompletionBox::tr(s, c);
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
    auto _ret = KCompletionBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCompletionBox_SuperMetaObject(const KCompletionBox* self) {
    return (QMetaObject*)self->KCompletionBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMetaObject(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_metaobject_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCompletionBox_SuperMetacast(KCompletionBox* self, const char* param1) {
    return self->KCompletionBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMetacast(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_metacast_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCompletionBox_SuperMetacall(KCompletionBox* self, int param1, int param2, void** param3) {
    return self->KCompletionBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMetacall(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_metacall_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KCompletionBox_SuperSizeHint(const KCompletionBox* self) {
    return new QSize(self->KCompletionBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSizeHint(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_sizehint_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KCompletionBox_SuperPopup(KCompletionBox* self) {
    self->KCompletionBox::popup();
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnPopup(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_popup_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Popup_Callback>(slot);
}

// Base class handler implementation
void KCompletionBox_SuperSetVisible(KCompletionBox* self, bool visible) {
    self->KCompletionBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetVisible(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_setvisible_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetVisible_Callback>(slot);
}

// Base class handler implementation
bool KCompletionBox_SuperEventFilter(KCompletionBox* self, QObject* param1, QEvent* param2) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->KCompletionBox::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEventFilter(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_eventfilter_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_EventFilter_Callback>(slot);
}

// Base class handler implementation
QPoint* KCompletionBox_SuperGlobalPositionHint(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        return new QPoint(vkcompletionbox->KCompletionBox::globalPositionHint());
    qFatal("Error: Protected virtual method KCompletionBox::globalPositionHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnGlobalPositionHint(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_globalpositionhint_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_GlobalPositionHint_Callback>(slot);
}

// Base class handler implementation
void KCompletionBox_SuperSlotActivated(KCompletionBox* self, QListWidgetItem* param1) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::slotActivated(param1);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::slotActivated called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSlotActivated(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_slotactivated_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SlotActivated_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_SetSelectionModel(KCompletionBox* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

// Base class handler implementation
void KCompletionBox_SuperSetSelectionModel(KCompletionBox* self, QItemSelectionModel* selectionModel) {
    self->KCompletionBox::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetSelectionModel(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_setselectionmodel_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetSelectionModel_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_DropEvent(KCompletionBox* self, QDropEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperDropEvent(KCompletionBox* self, QDropEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDropEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_dropevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KCompletionBox_Event(KCompletionBox* self, QEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        return vkcompletionbox->event(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompletionBox_SuperEvent(KCompletionBox* self, QEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->KCompletionBox::event(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_event_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Event_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KCompletionBox_MimeTypes(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        QList<QString> _ret = vkcompletionbox->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            auto _lv_ret = _ret[i];
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
        qFatal("Error: Protected virtual method KCompletionBox::mimeTypes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KCompletionBox_SuperMimeTypes(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        QList<QString> _ret = vkcompletionbox->KCompletionBox::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            auto _lv_ret = _ret[i];
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
    } else
        qFatal("Error: Protected virtual method KCompletionBox::mimeTypes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMimeTypes(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_mimetypes_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MimeTypes_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KCompletionBox_MimeData(const KCompletionBox* self, const libqt_list /* of QListWidgetItem* */ items) {
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return vkcompletionbox->mimeData(items_QList);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::mimeData called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* KCompletionBox_SuperMimeData(const KCompletionBox* self, const libqt_list /* of QListWidgetItem* */ items) {
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->KCompletionBox::mimeData(items_QList);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::mimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMimeData(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_mimedata_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MimeData_Callback>(slot);
}

// Derived class handler implementation
bool KCompletionBox_DropMimeData(KCompletionBox* self, int index, const QMimeData* data, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        return vkcompletionbox->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::dropMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompletionBox_SuperDropMimeData(KCompletionBox* self, int index, const QMimeData* data, int action) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->KCompletionBox::dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::dropMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDropMimeData(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_dropmimedata_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DropMimeData_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_SupportedDropActions(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return static_cast<int>(vkcompletionbox->supportedDropActions());
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::supportedDropActions called without a directly constructed type");
    }
}

// Base class handler implementation
int KCompletionBox_SuperSupportedDropActions(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return static_cast<int>(vkcompletionbox->KCompletionBox::supportedDropActions());
    } else
        qFatal("Error: Protected virtual method KCompletionBox::supportedDropActions called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSupportedDropActions(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_supporteddropactions_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
QRect* KCompletionBox_VisualRect(const KCompletionBox* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

// Base class handler implementation
QRect* KCompletionBox_SuperVisualRect(const KCompletionBox* self, const QModelIndex* index) {
    return new QRect(self->KCompletionBox::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVisualRect(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_visualrect_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VisualRect_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ScrollTo(KCompletionBox* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void KCompletionBox_SuperScrollTo(KCompletionBox* self, const QModelIndex* index, int hint) {
    self->KCompletionBox::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnScrollTo(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_scrollto_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ScrollTo_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCompletionBox_IndexAt(const KCompletionBox* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

// Base class handler implementation
QModelIndex* KCompletionBox_SuperIndexAt(const KCompletionBox* self, const QPoint* p) {
    return new QModelIndex(self->KCompletionBox::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnIndexAt(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_indexat_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_IndexAt_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_DoItemsLayout(KCompletionBox* self) {
    self->doItemsLayout();
}

// Base class handler implementation
void KCompletionBox_SuperDoItemsLayout(KCompletionBox* self) {
    self->KCompletionBox::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDoItemsLayout(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_doitemslayout_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DoItemsLayout_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_Reset(KCompletionBox* self) {
    self->reset();
}

// Base class handler implementation
void KCompletionBox_SuperReset(KCompletionBox* self) {
    self->KCompletionBox::reset();
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnReset(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_reset_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Reset_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_SetRootIndex(KCompletionBox* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

// Base class handler implementation
void KCompletionBox_SuperSetRootIndex(KCompletionBox* self, const QModelIndex* index) {
    self->KCompletionBox::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetRootIndex(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_setrootindex_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetRootIndex_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ScrollContentsBy(KCompletionBox* self, int dx, int dy) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperScrollContentsBy(KCompletionBox* self, int dx, int dy) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnScrollContentsBy(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_scrollcontentsby_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_DataChanged(KCompletionBox* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::dataChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperDataChanged(KCompletionBox* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDataChanged(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_datachanged_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DataChanged_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_RowsInserted(KCompletionBox* self, const QModelIndex* parent, int start, int end) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::rowsInserted called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperRowsInserted(KCompletionBox* self, const QModelIndex* parent, int start, int end) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnRowsInserted(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_rowsinserted_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_RowsInserted_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_RowsAboutToBeRemoved(KCompletionBox* self, const QModelIndex* parent, int start, int end) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperRowsAboutToBeRemoved(KCompletionBox* self, const QModelIndex* parent, int start, int end) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnRowsAboutToBeRemoved(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_rowsabouttoberemoved_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_MouseMoveEvent(KCompletionBox* self, QMouseEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperMouseMoveEvent(KCompletionBox* self, QMouseEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMouseMoveEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_mousemoveevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_MouseReleaseEvent(KCompletionBox* self, QMouseEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperMouseReleaseEvent(KCompletionBox* self, QMouseEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMouseReleaseEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_mousereleaseevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_WheelEvent(KCompletionBox* self, QWheelEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperWheelEvent(KCompletionBox* self, QWheelEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnWheelEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_wheelevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_TimerEvent(KCompletionBox* self, QTimerEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperTimerEvent(KCompletionBox* self, QTimerEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnTimerEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_timerevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ResizeEvent(KCompletionBox* self, QResizeEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperResizeEvent(KCompletionBox* self, QResizeEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnResizeEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_resizeevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_DragMoveEvent(KCompletionBox* self, QDragMoveEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperDragMoveEvent(KCompletionBox* self, QDragMoveEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDragMoveEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_dragmoveevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_DragLeaveEvent(KCompletionBox* self, QDragLeaveEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperDragLeaveEvent(KCompletionBox* self, QDragLeaveEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDragLeaveEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_dragleaveevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_StartDrag(KCompletionBox* self, int supportedActions) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperStartDrag(KCompletionBox* self, int supportedActions) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnStartDrag(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_startdrag_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_StartDrag_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_InitViewItemOption(const KCompletionBox* self, QStyleOptionViewItem* option) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        vkcompletionbox->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperInitViewItemOption(const KCompletionBox* self, QStyleOptionViewItem* option) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        vkcompletionbox->KCompletionBox::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInitViewItemOption(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_initviewitemoption_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_PaintEvent(KCompletionBox* self, QPaintEvent* e) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperPaintEvent(KCompletionBox* self, QPaintEvent* e) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnPaintEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_paintevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_HorizontalOffset(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return vkcompletionbox->horizontalOffset();
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::horizontalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int KCompletionBox_SuperHorizontalOffset(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->KCompletionBox::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method KCompletionBox::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHorizontalOffset(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_horizontaloffset_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HorizontalOffset_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_VerticalOffset(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return vkcompletionbox->verticalOffset();
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::verticalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int KCompletionBox_SuperVerticalOffset(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->KCompletionBox::verticalOffset();
    } else
        qFatal("Error: Protected virtual method KCompletionBox::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVerticalOffset(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_verticaloffset_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VerticalOffset_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* KCompletionBox_MoveCursor(KCompletionBox* self, int cursorAction, int modifiers) {
    return new QModelIndex((self->*&VirtualKCompletionBox::Base::moveCursor)(static_cast<VirtualKCompletionBox::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

// Base class handler implementation
QModelIndex* KCompletionBox_SuperMoveCursor(KCompletionBox* self, int cursorAction, int modifiers) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        return new QModelIndex(vkcompletionbox->moveCursor(static_cast<VirtualKCompletionBox::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method KCompletionBox::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMoveCursor(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_movecursor_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MoveCursor_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_SetSelection(KCompletionBox* self, const QRect* rect, int command) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::setSelection called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperSetSelection(KCompletionBox* self, const QRect* rect, int command) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetSelection(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_setselection_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetSelection_Callback>(slot);
}

// Derived class handler implementation
QRegion* KCompletionBox_VisualRegionForSelection(const KCompletionBox* self, const QItemSelection* selection) {
    return new QRegion((self->*&VirtualKCompletionBox::Base::visualRegionForSelection)(*selection));
}

// Base class handler implementation
QRegion* KCompletionBox_SuperVisualRegionForSelection(const KCompletionBox* self, const QItemSelection* selection) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        return new QRegion(vkcompletionbox->visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method KCompletionBox::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVisualRegionForSelection(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_visualregionforselection_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VisualRegionForSelection_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCompletionBox_SelectedIndexes(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        QList<QModelIndex> _ret = vkcompletionbox->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KCompletionBox_SuperSelectedIndexes(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        QList<QModelIndex> _ret = vkcompletionbox->KCompletionBox::selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected virtual method KCompletionBox::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSelectedIndexes(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_selectedindexes_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_UpdateGeometries(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->updateGeometries();
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::updateGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperUpdateGeometries(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::updateGeometries();
    } else
        qFatal("Error: Protected virtual method KCompletionBox::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnUpdateGeometries(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_updategeometries_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_UpdateGeometries_Callback>(slot);
}

// Derived class handler implementation
bool KCompletionBox_IsIndexHidden(const KCompletionBox* self, const QModelIndex* index) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return vkcompletionbox->isIndexHidden(*index);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::isIndexHidden called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompletionBox_SuperIsIndexHidden(const KCompletionBox* self, const QModelIndex* index) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->KCompletionBox::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnIsIndexHidden(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_isindexhidden_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_IsIndexHidden_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_SelectionChanged(KCompletionBox* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperSelectionChanged(KCompletionBox* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSelectionChanged(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_selectionchanged_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_CurrentChanged(KCompletionBox* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->currentChanged(*current, *previous);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::currentChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperCurrentChanged(KCompletionBox* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCurrentChanged(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_currentchanged_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CurrentChanged_Callback>(slot);
}

// Derived class handler implementation
QSize* KCompletionBox_ViewportSizeHint(const KCompletionBox* self) {
    return new QSize((self->*&VirtualKCompletionBox::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* KCompletionBox_SuperViewportSizeHint(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        return new QSize(vkcompletionbox->viewportSizeHint());
    qFatal("Error: Protected virtual method KCompletionBox::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnViewportSizeHint(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_viewportsizehint_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_KeyboardSearch(KCompletionBox* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void KCompletionBox_SuperKeyboardSearch(KCompletionBox* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->KCompletionBox::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnKeyboardSearch(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_keyboardsearch_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_SizeHintForRow(const KCompletionBox* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int KCompletionBox_SuperSizeHintForRow(const KCompletionBox* self, int row) {
    return self->KCompletionBox::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSizeHintForRow(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_sizehintforrow_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_SizeHintForColumn(const KCompletionBox* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
}

// Base class handler implementation
int KCompletionBox_SuperSizeHintForColumn(const KCompletionBox* self, int column) {
    return self->KCompletionBox::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSizeHintForColumn(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_sizehintforcolumn_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* KCompletionBox_ItemDelegateForIndex(const KCompletionBox* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* KCompletionBox_SuperItemDelegateForIndex(const KCompletionBox* self, const QModelIndex* index) {
    return self->KCompletionBox::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnItemDelegateForIndex(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_itemdelegateforindex_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCompletionBox_InputMethodQuery(const KCompletionBox* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* KCompletionBox_SuperInputMethodQuery(const KCompletionBox* self, int query) {
    return new QVariant(self->KCompletionBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInputMethodQuery(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_inputmethodquery_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_SelectAll(KCompletionBox* self) {
    self->selectAll();
}

// Base class handler implementation
void KCompletionBox_SuperSelectAll(KCompletionBox* self) {
    self->KCompletionBox::selectAll();
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSelectAll(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_selectall_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_UpdateEditorData(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperUpdateEditorData(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::updateEditorData();
    } else
        qFatal("Error: Protected virtual method KCompletionBox::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnUpdateEditorData(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_updateeditordata_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_UpdateEditorGeometries(KCompletionBox* self) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperUpdateEditorGeometries(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method KCompletionBox::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnUpdateEditorGeometries(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_updateeditorgeometries_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_VerticalScrollbarAction(KCompletionBox* self, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperVerticalScrollbarAction(KCompletionBox* self, int action) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVerticalScrollbarAction(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_verticalscrollbaraction_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_HorizontalScrollbarAction(KCompletionBox* self, int action) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperHorizontalScrollbarAction(KCompletionBox* self, int action) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHorizontalScrollbarAction(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_horizontalscrollbaraction_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_VerticalScrollbarValueChanged(KCompletionBox* self, int value) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperVerticalScrollbarValueChanged(KCompletionBox* self, int value) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnVerticalScrollbarValueChanged(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_HorizontalScrollbarValueChanged(KCompletionBox* self, int value) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperHorizontalScrollbarValueChanged(KCompletionBox* self, int value) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHorizontalScrollbarValueChanged(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_CloseEditor(KCompletionBox* self, QWidget* editor, int hint) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperCloseEditor(KCompletionBox* self, QWidget* editor, int hint) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCloseEditor(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_closeeditor_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_CommitData(KCompletionBox* self, QWidget* editor) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperCommitData(KCompletionBox* self, QWidget* editor) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::commitData(editor);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCommitData(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_commitdata_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CommitData_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_EditorDestroyed(KCompletionBox* self, QObject* editor) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperEditorDestroyed(KCompletionBox* self, QObject* editor) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEditorDestroyed(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_editordestroyed_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool KCompletionBox_Edit2(KCompletionBox* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        return vkcompletionbox->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompletionBox_SuperEdit2(KCompletionBox* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->KCompletionBox::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEdit2(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_edit2_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Edit2_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_SelectionCommand(const KCompletionBox* self, const QModelIndex* index, const QEvent* event) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return static_cast<int>(vkcompletionbox->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int KCompletionBox_SuperSelectionCommand(const KCompletionBox* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return static_cast<int>(vkcompletionbox->KCompletionBox::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSelectionCommand(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_selectioncommand_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
bool KCompletionBox_FocusNextPrevChild(KCompletionBox* self, bool next) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        return vkcompletionbox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompletionBox_SuperFocusNextPrevChild(KCompletionBox* self, bool next) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->KCompletionBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnFocusNextPrevChild(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_focusnextprevchild_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KCompletionBox_ViewportEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        return vkcompletionbox->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompletionBox_SuperViewportEvent(KCompletionBox* self, QEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->KCompletionBox::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnViewportEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_viewportevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_MousePressEvent(KCompletionBox* self, QMouseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperMousePressEvent(KCompletionBox* self, QMouseEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMousePressEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_mousepressevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_MouseDoubleClickEvent(KCompletionBox* self, QMouseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperMouseDoubleClickEvent(KCompletionBox* self, QMouseEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMouseDoubleClickEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_DragEnterEvent(KCompletionBox* self, QDragEnterEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperDragEnterEvent(KCompletionBox* self, QDragEnterEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDragEnterEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_dragenterevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_FocusInEvent(KCompletionBox* self, QFocusEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperFocusInEvent(KCompletionBox* self, QFocusEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnFocusInEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_focusinevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_FocusOutEvent(KCompletionBox* self, QFocusEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperFocusOutEvent(KCompletionBox* self, QFocusEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnFocusOutEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_focusoutevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_KeyPressEvent(KCompletionBox* self, QKeyEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperKeyPressEvent(KCompletionBox* self, QKeyEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnKeyPressEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_keypressevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_InputMethodEvent(KCompletionBox* self, QInputMethodEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperInputMethodEvent(KCompletionBox* self, QInputMethodEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInputMethodEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_inputmethodevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* KCompletionBox_MinimumSizeHint(const KCompletionBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KCompletionBox_SuperMinimumSizeHint(const KCompletionBox* self) {
    return new QSize(self->KCompletionBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMinimumSizeHint(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_minimumsizehint_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_SetupViewport(KCompletionBox* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void KCompletionBox_SuperSetupViewport(KCompletionBox* self, QWidget* viewport) {
    self->KCompletionBox::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSetupViewport(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_setupviewport_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ContextMenuEvent(KCompletionBox* self, QContextMenuEvent* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperContextMenuEvent(KCompletionBox* self, QContextMenuEvent* param1) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnContextMenuEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_contextmenuevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ChangeEvent(KCompletionBox* self, QEvent* param1) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperChangeEvent(KCompletionBox* self, QEvent* param1) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnChangeEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_changeevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_InitStyleOption(const KCompletionBox* self, QStyleOptionFrame* option) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        vkcompletionbox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperInitStyleOption(const KCompletionBox* self, QStyleOptionFrame* option) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        vkcompletionbox->KCompletionBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInitStyleOption(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_initstyleoption_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_DevType(const KCompletionBox* self) {
    return self->devType();
}

// Base class handler implementation
int KCompletionBox_SuperDevType(const KCompletionBox* self) {
    return self->KCompletionBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDevType(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_devtype_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DevType_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_HeightForWidth(const KCompletionBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KCompletionBox_SuperHeightForWidth(const KCompletionBox* self, int param1) {
    return self->KCompletionBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHeightForWidth(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_heightforwidth_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KCompletionBox_HasHeightForWidth(const KCompletionBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KCompletionBox_SuperHasHeightForWidth(const KCompletionBox* self) {
    return self->KCompletionBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHasHeightForWidth(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_hasheightforwidth_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KCompletionBox_PaintEngine(const KCompletionBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KCompletionBox_SuperPaintEngine(const KCompletionBox* self) {
    return self->KCompletionBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnPaintEngine(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_paintengine_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_KeyReleaseEvent(KCompletionBox* self, QKeyEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperKeyReleaseEvent(KCompletionBox* self, QKeyEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnKeyReleaseEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_keyreleaseevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_EnterEvent(KCompletionBox* self, QEnterEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperEnterEvent(KCompletionBox* self, QEnterEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnEnterEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_enterevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_LeaveEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperLeaveEvent(KCompletionBox* self, QEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnLeaveEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_leaveevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_MoveEvent(KCompletionBox* self, QMoveEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperMoveEvent(KCompletionBox* self, QMoveEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMoveEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_moveevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_CloseEvent(KCompletionBox* self, QCloseEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperCloseEvent(KCompletionBox* self, QCloseEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCloseEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_closeevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_TabletEvent(KCompletionBox* self, QTabletEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperTabletEvent(KCompletionBox* self, QTabletEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnTabletEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_tabletevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ActionEvent(KCompletionBox* self, QActionEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperActionEvent(KCompletionBox* self, QActionEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnActionEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_actionevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ShowEvent(KCompletionBox* self, QShowEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperShowEvent(KCompletionBox* self, QShowEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnShowEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_showevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_HideEvent(KCompletionBox* self, QHideEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperHideEvent(KCompletionBox* self, QHideEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnHideEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_hideevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KCompletionBox_NativeEvent(KCompletionBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        return vkcompletionbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCompletionBox_SuperNativeEvent(KCompletionBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->KCompletionBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnNativeEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_nativeevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KCompletionBox_Metric(const KCompletionBox* self, int param1) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return vkcompletionbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KCompletionBox_SuperMetric(const KCompletionBox* self, int param1) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->KCompletionBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KCompletionBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnMetric(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_metric_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_InitPainter(const KCompletionBox* self, QPainter* painter) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        vkcompletionbox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperInitPainter(const KCompletionBox* self, QPainter* painter) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        vkcompletionbox->KCompletionBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnInitPainter(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_initpainter_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KCompletionBox_Redirected(const KCompletionBox* self, QPoint* offset) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return vkcompletionbox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KCompletionBox_SuperRedirected(const KCompletionBox* self, QPoint* offset) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->KCompletionBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnRedirected(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_redirected_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KCompletionBox_SharedPainter(const KCompletionBox* self) {
    auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self));
    if (vkcompletionbox) {
        return vkcompletionbox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KCompletionBox_SuperSharedPainter(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->KCompletionBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KCompletionBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnSharedPainter(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        vkcompletionbox->kcompletionbox_sharedpainter_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ChildEvent(KCompletionBox* self, QChildEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperChildEvent(KCompletionBox* self, QChildEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnChildEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_childevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_CustomEvent(KCompletionBox* self, QEvent* event) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperCustomEvent(KCompletionBox* self, QEvent* event) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnCustomEvent(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_customevent_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_ConnectNotify(KCompletionBox* self, const QMetaMethod* signal) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperConnectNotify(KCompletionBox* self, const QMetaMethod* signal) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnConnectNotify(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_connectnotify_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCompletionBox_DisconnectNotify(KCompletionBox* self, const QMetaMethod* signal) {
    auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self);
    if (vkcompletionbox) {
        vkcompletionbox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCompletionBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCompletionBox_SuperDisconnectNotify(KCompletionBox* self, const QMetaMethod* signal) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->KCompletionBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCompletionBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCompletionBox_OnDisconnectNotify(KCompletionBox* self, intptr_t slot) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self))
        vkcompletionbox->kcompletionbox_disconnectnotify_callback = reinterpret_cast<VirtualKCompletionBox::KCompletionBox_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QRect* KCompletionBox_CalculateGeometry(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        return new QRect(vkcompletionbox->calculateGeometry());
    qFatal("Error: Protected method KCompletionBox::calculateGeometry called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_ResizeAndReposition(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::resizeAndReposition();
    } else
        qFatal("Error: Protected method KCompletionBox::resizeAndReposition called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_ResizeContents(KCompletionBox* self, int width, int height) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else
        qFatal("Error: Protected method KCompletionBox::resizeContents called without a directly constructed type");
}

// Derived class handler implementation
QSize* KCompletionBox_ContentsSize(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        return new QSize(vkcompletionbox->contentsSize());
    qFatal("Error: Protected method KCompletionBox::contentsSize called without a directly constructed type");
}

// Derived class handler implementation
QRect* KCompletionBox_RectForIndex(const KCompletionBox* self, const QModelIndex* index) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        return new QRect(vkcompletionbox->rectForIndex(*index));
    qFatal("Error: Protected method KCompletionBox::rectForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_SetPositionForIndex(KCompletionBox* self, const QPoint* position, const QModelIndex* index) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::setPositionForIndex(*position, *index);
    } else
        qFatal("Error: Protected method KCompletionBox::setPositionForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompletionBox_State(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return static_cast<int>(vkcompletionbox->VirtualKCompletionBox::state());
    } else
        qFatal("Error: Protected method KCompletionBox::state called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_SetState(KCompletionBox* self, int state) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::setState(static_cast<VirtualKCompletionBox::State>(state));
    } else
        qFatal("Error: Protected method KCompletionBox::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_ScheduleDelayedItemsLayout(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method KCompletionBox::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_ExecuteDelayedItemsLayout(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method KCompletionBox::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_SetDirtyRegion(KCompletionBox* self, const QRegion* region) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method KCompletionBox::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_ScrollDirtyRegion(KCompletionBox* self, int dx, int dy) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method KCompletionBox::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* KCompletionBox_DirtyRegionOffset(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        return new QPoint(vkcompletionbox->dirtyRegionOffset());
    qFatal("Error: Protected method KCompletionBox::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_StartAutoScroll(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::startAutoScroll();
    } else
        qFatal("Error: Protected method KCompletionBox::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_StopAutoScroll(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::stopAutoScroll();
    } else
        qFatal("Error: Protected method KCompletionBox::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_DoAutoScroll(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::doAutoScroll();
    } else
        qFatal("Error: Protected method KCompletionBox::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompletionBox_DropIndicatorPosition(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return static_cast<int>(vkcompletionbox->VirtualKCompletionBox::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method KCompletionBox::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_SetViewportMargins(KCompletionBox* self, int left, int top, int right, int bottom) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method KCompletionBox::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* KCompletionBox_ViewportMargins(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self)))
        return new QMargins(vkcompletionbox->viewportMargins());
    qFatal("Error: Protected method KCompletionBox::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_DrawFrame(KCompletionBox* self, QPainter* param1) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::drawFrame(param1);
    } else
        qFatal("Error: Protected method KCompletionBox::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_UpdateMicroFocus(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KCompletionBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_Create(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::create();
    } else
        qFatal("Error: Protected method KCompletionBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KCompletionBox_Destroy(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        vkcompletionbox->VirtualKCompletionBox::destroy();
    } else
        qFatal("Error: Protected method KCompletionBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCompletionBox_FocusNextChild(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->VirtualKCompletionBox::focusNextChild();
    } else
        qFatal("Error: Protected method KCompletionBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCompletionBox_FocusPreviousChild(KCompletionBox* self) {
    if (auto* vkcompletionbox = dynamic_cast<VirtualKCompletionBox*>(self)) {
        return vkcompletionbox->VirtualKCompletionBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KCompletionBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCompletionBox_Sender(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->VirtualKCompletionBox::sender();
    } else
        qFatal("Error: Protected method KCompletionBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompletionBox_SenderSignalIndex(const KCompletionBox* self) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->VirtualKCompletionBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCompletionBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCompletionBox_Receivers(const KCompletionBox* self, const char* signal) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->VirtualKCompletionBox::receivers(signal);
    } else
        qFatal("Error: Protected method KCompletionBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCompletionBox_IsSignalConnected(const KCompletionBox* self, const QMetaMethod* signal) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->VirtualKCompletionBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCompletionBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KCompletionBox_GetDecodedMetricF(const KCompletionBox* self, int metricA, int metricB) {
    if (auto* vkcompletionbox = const_cast<VirtualKCompletionBox*>(dynamic_cast<const VirtualKCompletionBox*>(self))) {
        return vkcompletionbox->VirtualKCompletionBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KCompletionBox::getDecodedMetricF called without a directly constructed type");
}

void KCompletionBox_Delete(KCompletionBox* self) {
    delete self;
}
