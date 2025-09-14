#include <KComboBox>
#include <KCompletion>
#include <KCompletionBase>
#include <KUrlComboBox>
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
#include <kurlcombobox.h>
#include "libkurlcombobox.h"
#include "libkurlcombobox.hxx"

KUrlComboBox* KUrlComboBox_new(int mode) {
    return new VirtualKUrlComboBox(static_cast<KUrlComboBox::Mode>(mode));
}

KUrlComboBox* KUrlComboBox_new2(int mode, bool rw) {
    return new VirtualKUrlComboBox(static_cast<KUrlComboBox::Mode>(mode), rw);
}

KUrlComboBox* KUrlComboBox_new3(int mode, QWidget* parent) {
    return new VirtualKUrlComboBox(static_cast<KUrlComboBox::Mode>(mode), parent);
}

KUrlComboBox* KUrlComboBox_new4(int mode, bool rw, QWidget* parent) {
    return new VirtualKUrlComboBox(static_cast<KUrlComboBox::Mode>(mode), rw, parent);
}

QMetaObject* KUrlComboBox_MetaObject(const KUrlComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUrlComboBox_Metacast(KUrlComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUrlComboBox_Metacall(KUrlComboBox* self, int param1, int param2, void** param3) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUrlComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUrlComboBox_Tr(const char* s) {
    QString _ret = KUrlComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUrlComboBox_SetUrl(KUrlComboBox* self, const QUrl* url) {
    self->setUrl(*url);
}

void KUrlComboBox_SetUrls(KUrlComboBox* self, const libqt_list /* of libqt_string */ urls) {
    QList<QString> urls_QList;
    urls_QList.reserve(urls.len);
    libqt_string* urls_arr = static_cast<libqt_string*>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        QString urls_arr_i_QString = QString::fromUtf8(urls_arr[i].data, urls_arr[i].len);
        urls_QList.push_back(urls_arr_i_QString);
    }
    self->setUrls(urls_QList);
}

void KUrlComboBox_SetUrls2(KUrlComboBox* self, const libqt_list /* of libqt_string */ urls, int remove) {
    QList<QString> urls_QList;
    urls_QList.reserve(urls.len);
    libqt_string* urls_arr = static_cast<libqt_string*>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        QString urls_arr_i_QString = QString::fromUtf8(urls_arr[i].data, urls_arr[i].len);
        urls_QList.push_back(urls_arr_i_QString);
    }
    self->setUrls(urls_QList, static_cast<KUrlComboBox::OverLoadResolving>(remove));
}

libqt_list /* of libqt_string */ KUrlComboBox_Urls(const KUrlComboBox* self) {
    QList<QString> _ret = self->urls();
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

void KUrlComboBox_SetMaxItems(KUrlComboBox* self, int maxItems) {
    self->setMaxItems(static_cast<int>(maxItems));
}

int KUrlComboBox_MaxItems(const KUrlComboBox* self) {
    return self->maxItems();
}

void KUrlComboBox_AddDefaultUrl(KUrlComboBox* self, const QUrl* url) {
    self->addDefaultUrl(*url);
}

void KUrlComboBox_AddDefaultUrl2(KUrlComboBox* self, const QUrl* url, const QIcon* icon) {
    self->addDefaultUrl(*url, *icon);
}

void KUrlComboBox_SetDefaults(KUrlComboBox* self) {
    self->setDefaults();
}

void KUrlComboBox_RemoveUrl(KUrlComboBox* self, const QUrl* url) {
    self->removeUrl(*url);
}

void KUrlComboBox_SetCompletionObject(KUrlComboBox* self, KCompletion* compObj, bool hsig) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        self->setCompletionObject(compObj, hsig);
    } else {
        ((VirtualKUrlComboBox*)self)->setCompletionObject(compObj, hsig);
    }
}

void KUrlComboBox_UrlActivated(KUrlComboBox* self, const QUrl* url) {
    self->urlActivated(*url);
}

void KUrlComboBox_Connect_UrlActivated(KUrlComboBox* self, intptr_t slot) {
    void (*slotFunc)(KUrlComboBox*, QUrl*) = reinterpret_cast<void (*)(KUrlComboBox*, QUrl*)>(slot);
    KUrlComboBox::connect(self, &KUrlComboBox::urlActivated, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void KUrlComboBox_MousePressEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->mousePressEvent(event);
    }
}

void KUrlComboBox_MouseMoveEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->mouseMoveEvent(event);
    }
}

libqt_string KUrlComboBox_Tr2(const char* s, const char* c) {
    QString _ret = KUrlComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlComboBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUrlComboBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUrlComboBox_AddDefaultUrl22(KUrlComboBox* self, const QUrl* url, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addDefaultUrl(*url, text_QString);
}

void KUrlComboBox_AddDefaultUrl3(KUrlComboBox* self, const QUrl* url, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addDefaultUrl(*url, *icon, text_QString);
}

void KUrlComboBox_RemoveUrl2(KUrlComboBox* self, const QUrl* url, bool checkDefaultURLs) {
    self->removeUrl(*url, checkDefaultURLs);
}

// Base class handler implementation
int KUrlComboBox_QBaseMetacall(KUrlComboBox* self, int param1, int param2, void** param3) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Metacall_IsBase(true);
        return vkurlcombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUrlComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMetacall(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Metacall_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetCompletionObject(KUrlComboBox* self, KCompletion* compObj, bool hsig) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetCompletionObject_IsBase(true);
        vkurlcombobox->setCompletionObject(compObj, hsig);
    } else {
        self->KUrlComboBox::setCompletionObject(compObj, hsig);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetCompletionObject(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetCompletionObject_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetCompletionObject_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseMousePressEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MousePressEvent_IsBase(true);
        vkurlcombobox->mousePressEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMousePressEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseMouseMoveEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MouseMoveEvent_IsBase(true);
        vkurlcombobox->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMouseMoveEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetAutoCompletion(KUrlComboBox* self, bool autocomplete) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setAutoCompletion(autocomplete);
    } else {
        self->KUrlComboBox::setAutoCompletion(autocomplete);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetAutoCompletion(KUrlComboBox* self, bool autocomplete) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetAutoCompletion_IsBase(true);
        vkurlcombobox->setAutoCompletion(autocomplete);
    } else {
        self->KUrlComboBox::setAutoCompletion(autocomplete);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetAutoCompletion(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetAutoCompletion_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetAutoCompletion_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetLineEdit(KUrlComboBox* self, QLineEdit* lineEdit) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setLineEdit(lineEdit);
    } else {
        self->KUrlComboBox::setLineEdit(lineEdit);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetLineEdit(KUrlComboBox* self, QLineEdit* lineEdit) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetLineEdit_IsBase(true);
        vkurlcombobox->setLineEdit(lineEdit);
    } else {
        self->KUrlComboBox::setLineEdit(lineEdit);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetLineEdit(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetLineEdit_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlComboBox_MinimumSizeHint(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return new QSize(vkurlcombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlComboBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KUrlComboBox_QBaseMinimumSizeHint(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vkurlcombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlComboBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMinimumSizeHint(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetCompletedText(KUrlComboBox* self, const libqt_string completedText) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setCompletedText(completedText_QString);
    } else {
        self->KUrlComboBox::setCompletedText(completedText_QString);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetCompletedText(KUrlComboBox* self, const libqt_string completedText) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetCompletedText_IsBase(true);
        vkurlcombobox->setCompletedText(completedText_QString);
    } else {
        self->KUrlComboBox::setCompletedText(completedText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetCompletedText(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetCompletedText_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetCompletedText_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetCompletedItems(KUrlComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setCompletedItems(items_QList, autoSuggest);
    } else {
        self->KUrlComboBox::setCompletedItems(items_QList, autoSuggest);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetCompletedItems(KUrlComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetCompletedItems_IsBase(true);
        vkurlcombobox->setCompletedItems(items_QList, autoSuggest);
    } else {
        self->KUrlComboBox::setCompletedItems(items_QList, autoSuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetCompletedItems(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetCompletedItems_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetCompletedItems_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_MakeCompletion(KUrlComboBox* self, const libqt_string param1) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->makeCompletion(param1_QString);
    } else {
        ((VirtualKUrlComboBox*)self)->makeCompletion(param1_QString);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseMakeCompletion(KUrlComboBox* self, const libqt_string param1) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MakeCompletion_IsBase(true);
        vkurlcombobox->makeCompletion(param1_QString);
    } else {
        ((VirtualKUrlComboBox*)self)->makeCompletion(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMakeCompletion(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MakeCompletion_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MakeCompletion_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetModel(KUrlComboBox* self, QAbstractItemModel* model) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setModel(model);
    } else {
        self->KUrlComboBox::setModel(model);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetModel(KUrlComboBox* self, QAbstractItemModel* model) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetModel_IsBase(true);
        vkurlcombobox->setModel(model);
    } else {
        self->KUrlComboBox::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetModel(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetModel_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlComboBox_SizeHint(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return new QSize(vkurlcombobox->sizeHint());
    } else {
        return new QSize(((VirtualKUrlComboBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KUrlComboBox_QBaseSizeHint(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SizeHint_IsBase(true);
        return new QSize(vkurlcombobox->sizeHint());
    } else {
        return new QSize(((VirtualKUrlComboBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSizeHint(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SizeHint_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_ShowPopup(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->showPopup();
    } else {
        self->KUrlComboBox::showPopup();
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseShowPopup(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ShowPopup_IsBase(true);
        vkurlcombobox->showPopup();
    } else {
        self->KUrlComboBox::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnShowPopup(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ShowPopup_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_HidePopup(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->hidePopup();
    } else {
        self->KUrlComboBox::hidePopup();
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseHidePopup(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_HidePopup_IsBase(true);
        vkurlcombobox->hidePopup();
    } else {
        self->KUrlComboBox::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnHidePopup(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_HidePopup_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboBox_Event(KUrlComboBox* self, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->event(event);
    } else {
        return self->KUrlComboBox::event(event);
    }
}

// Base class handler implementation
bool KUrlComboBox_QBaseEvent(KUrlComboBox* self, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Event_IsBase(true);
        return vkurlcombobox->event(event);
    } else {
        return self->KUrlComboBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Event_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KUrlComboBox_InputMethodQuery(const KUrlComboBox* self, int param1) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return new QVariant(vkurlcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KUrlComboBox_QBaseInputMethodQuery(const KUrlComboBox* self, int param1) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vkurlcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnInputMethodQuery(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_FocusInEvent(KUrlComboBox* self, QFocusEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->focusInEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseFocusInEvent(KUrlComboBox* self, QFocusEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusInEvent_IsBase(true);
        vkurlcombobox->focusInEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnFocusInEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_FocusOutEvent(KUrlComboBox* self, QFocusEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->focusOutEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseFocusOutEvent(KUrlComboBox* self, QFocusEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusOutEvent_IsBase(true);
        vkurlcombobox->focusOutEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnFocusOutEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_ChangeEvent(KUrlComboBox* self, QEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->changeEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseChangeEvent(KUrlComboBox* self, QEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ChangeEvent_IsBase(true);
        vkurlcombobox->changeEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnChangeEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_ResizeEvent(KUrlComboBox* self, QResizeEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->resizeEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseResizeEvent(KUrlComboBox* self, QResizeEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ResizeEvent_IsBase(true);
        vkurlcombobox->resizeEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnResizeEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_PaintEvent(KUrlComboBox* self, QPaintEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->paintEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBasePaintEvent(KUrlComboBox* self, QPaintEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_PaintEvent_IsBase(true);
        vkurlcombobox->paintEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnPaintEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_PaintEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_ShowEvent(KUrlComboBox* self, QShowEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->showEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseShowEvent(KUrlComboBox* self, QShowEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ShowEvent_IsBase(true);
        vkurlcombobox->showEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnShowEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ShowEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_HideEvent(KUrlComboBox* self, QHideEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->hideEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseHideEvent(KUrlComboBox* self, QHideEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_HideEvent_IsBase(true);
        vkurlcombobox->hideEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnHideEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_HideEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_MouseReleaseEvent(KUrlComboBox* self, QMouseEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseMouseReleaseEvent(KUrlComboBox* self, QMouseEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MouseReleaseEvent_IsBase(true);
        vkurlcombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMouseReleaseEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_KeyPressEvent(KUrlComboBox* self, QKeyEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->keyPressEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseKeyPressEvent(KUrlComboBox* self, QKeyEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_KeyPressEvent_IsBase(true);
        vkurlcombobox->keyPressEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnKeyPressEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_KeyReleaseEvent(KUrlComboBox* self, QKeyEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseKeyReleaseEvent(KUrlComboBox* self, QKeyEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_KeyReleaseEvent_IsBase(true);
        vkurlcombobox->keyReleaseEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnKeyReleaseEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_WheelEvent(KUrlComboBox* self, QWheelEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->wheelEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseWheelEvent(KUrlComboBox* self, QWheelEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_WheelEvent_IsBase(true);
        vkurlcombobox->wheelEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnWheelEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_WheelEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_ContextMenuEvent(KUrlComboBox* self, QContextMenuEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->contextMenuEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseContextMenuEvent(KUrlComboBox* self, QContextMenuEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ContextMenuEvent_IsBase(true);
        vkurlcombobox->contextMenuEvent(e);
    } else {
        ((VirtualKUrlComboBox*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnContextMenuEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_InputMethodEvent(KUrlComboBox* self, QInputMethodEvent* param1) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlComboBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseInputMethodEvent(KUrlComboBox* self, QInputMethodEvent* param1) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_InputMethodEvent_IsBase(true);
        vkurlcombobox->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlComboBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnInputMethodEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_InitStyleOption(const KUrlComboBox* self, QStyleOptionComboBox* option) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->initStyleOption(option);
    } else {
        ((VirtualKUrlComboBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseInitStyleOption(const KUrlComboBox* self, QStyleOptionComboBox* option) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_InitStyleOption_IsBase(true);
        vkurlcombobox->initStyleOption(option);
    } else {
        ((VirtualKUrlComboBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnInitStyleOption(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboBox_DevType(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->devType();
    } else {
        return self->KUrlComboBox::devType();
    }
}

// Base class handler implementation
int KUrlComboBox_QBaseDevType(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DevType_IsBase(true);
        return vkurlcombobox->devType();
    } else {
        return self->KUrlComboBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDevType(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DevType_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetVisible(KUrlComboBox* self, bool visible) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setVisible(visible);
    } else {
        self->KUrlComboBox::setVisible(visible);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetVisible(KUrlComboBox* self, bool visible) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetVisible_IsBase(true);
        vkurlcombobox->setVisible(visible);
    } else {
        self->KUrlComboBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetVisible(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetVisible_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboBox_HeightForWidth(const KUrlComboBox* self, int param1) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KUrlComboBox_QBaseHeightForWidth(const KUrlComboBox* self, int param1) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_HeightForWidth_IsBase(true);
        return vkurlcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnHeightForWidth(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboBox_HasHeightForWidth(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->hasHeightForWidth();
    } else {
        return self->KUrlComboBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KUrlComboBox_QBaseHasHeightForWidth(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_HasHeightForWidth_IsBase(true);
        return vkurlcombobox->hasHeightForWidth();
    } else {
        return self->KUrlComboBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnHasHeightForWidth(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KUrlComboBox_PaintEngine(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->paintEngine();
    } else {
        return self->KUrlComboBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KUrlComboBox_QBasePaintEngine(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_PaintEngine_IsBase(true);
        return vkurlcombobox->paintEngine();
    } else {
        return self->KUrlComboBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnPaintEngine(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_PaintEngine_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_MouseDoubleClickEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseMouseDoubleClickEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MouseDoubleClickEvent_IsBase(true);
        vkurlcombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMouseDoubleClickEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_EnterEvent(KUrlComboBox* self, QEnterEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->enterEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseEnterEvent(KUrlComboBox* self, QEnterEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_EnterEvent_IsBase(true);
        vkurlcombobox->enterEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnEnterEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_EnterEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_LeaveEvent(KUrlComboBox* self, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->leaveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseLeaveEvent(KUrlComboBox* self, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_LeaveEvent_IsBase(true);
        vkurlcombobox->leaveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnLeaveEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_MoveEvent(KUrlComboBox* self, QMoveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->moveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseMoveEvent(KUrlComboBox* self, QMoveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MoveEvent_IsBase(true);
        vkurlcombobox->moveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMoveEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_MoveEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_CloseEvent(KUrlComboBox* self, QCloseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->closeEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseCloseEvent(KUrlComboBox* self, QCloseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_CloseEvent_IsBase(true);
        vkurlcombobox->closeEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnCloseEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_CloseEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_TabletEvent(KUrlComboBox* self, QTabletEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->tabletEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseTabletEvent(KUrlComboBox* self, QTabletEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_TabletEvent_IsBase(true);
        vkurlcombobox->tabletEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnTabletEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_TabletEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_ActionEvent(KUrlComboBox* self, QActionEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->actionEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseActionEvent(KUrlComboBox* self, QActionEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ActionEvent_IsBase(true);
        vkurlcombobox->actionEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnActionEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ActionEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_DragEnterEvent(KUrlComboBox* self, QDragEnterEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->dragEnterEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseDragEnterEvent(KUrlComboBox* self, QDragEnterEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DragEnterEvent_IsBase(true);
        vkurlcombobox->dragEnterEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDragEnterEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_DragMoveEvent(KUrlComboBox* self, QDragMoveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->dragMoveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseDragMoveEvent(KUrlComboBox* self, QDragMoveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DragMoveEvent_IsBase(true);
        vkurlcombobox->dragMoveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDragMoveEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_DragLeaveEvent(KUrlComboBox* self, QDragLeaveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseDragLeaveEvent(KUrlComboBox* self, QDragLeaveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DragLeaveEvent_IsBase(true);
        vkurlcombobox->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDragLeaveEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_DropEvent(KUrlComboBox* self, QDropEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->dropEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseDropEvent(KUrlComboBox* self, QDropEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DropEvent_IsBase(true);
        vkurlcombobox->dropEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDropEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DropEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboBox_NativeEvent(KUrlComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KUrlComboBox_QBaseNativeEvent(KUrlComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_NativeEvent_IsBase(true);
        return vkurlcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnNativeEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_NativeEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboBox_Metric(const KUrlComboBox* self, int param1) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KUrlComboBox_QBaseMetric(const KUrlComboBox* self, int param1) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Metric_IsBase(true);
        return vkurlcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMetric(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Metric_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_InitPainter(const KUrlComboBox* self, QPainter* painter) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->initPainter(painter);
    } else {
        ((VirtualKUrlComboBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseInitPainter(const KUrlComboBox* self, QPainter* painter) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_InitPainter_IsBase(true);
        vkurlcombobox->initPainter(painter);
    } else {
        ((VirtualKUrlComboBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnInitPainter(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_InitPainter_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KUrlComboBox_Redirected(const KUrlComboBox* self, QPoint* offset) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->redirected(offset);
    } else {
        return ((VirtualKUrlComboBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KUrlComboBox_QBaseRedirected(const KUrlComboBox* self, QPoint* offset) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Redirected_IsBase(true);
        return vkurlcombobox->redirected(offset);
    } else {
        return ((VirtualKUrlComboBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnRedirected(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Redirected_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KUrlComboBox_SharedPainter(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->sharedPainter();
    } else {
        return ((VirtualKUrlComboBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KUrlComboBox_QBaseSharedPainter(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SharedPainter_IsBase(true);
        return vkurlcombobox->sharedPainter();
    } else {
        return ((VirtualKUrlComboBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSharedPainter(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SharedPainter_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboBox_FocusNextPrevChild(KUrlComboBox* self, bool next) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlComboBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KUrlComboBox_QBaseFocusNextPrevChild(KUrlComboBox* self, bool next) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusNextPrevChild_IsBase(true);
        return vkurlcombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlComboBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnFocusNextPrevChild(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboBox_EventFilter(KUrlComboBox* self, QObject* watched, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->eventFilter(watched, event);
    } else {
        return self->KUrlComboBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KUrlComboBox_QBaseEventFilter(KUrlComboBox* self, QObject* watched, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_EventFilter_IsBase(true);
        return vkurlcombobox->eventFilter(watched, event);
    } else {
        return self->KUrlComboBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnEventFilter(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_EventFilter_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_TimerEvent(KUrlComboBox* self, QTimerEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->timerEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseTimerEvent(KUrlComboBox* self, QTimerEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_TimerEvent_IsBase(true);
        vkurlcombobox->timerEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnTimerEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_TimerEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_ChildEvent(KUrlComboBox* self, QChildEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->childEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseChildEvent(KUrlComboBox* self, QChildEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ChildEvent_IsBase(true);
        vkurlcombobox->childEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnChildEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ChildEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_CustomEvent(KUrlComboBox* self, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->customEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseCustomEvent(KUrlComboBox* self, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_CustomEvent_IsBase(true);
        vkurlcombobox->customEvent(event);
    } else {
        ((VirtualKUrlComboBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnCustomEvent(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_CustomEvent_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_ConnectNotify(KUrlComboBox* self, const QMetaMethod* signal) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->connectNotify(*signal);
    } else {
        ((VirtualKUrlComboBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseConnectNotify(KUrlComboBox* self, const QMetaMethod* signal) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ConnectNotify_IsBase(true);
        vkurlcombobox->connectNotify(*signal);
    } else {
        ((VirtualKUrlComboBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnConnectNotify(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_DisconnectNotify(KUrlComboBox* self, const QMetaMethod* signal) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlComboBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseDisconnectNotify(KUrlComboBox* self, const QMetaMethod* signal) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DisconnectNotify_IsBase(true);
        vkurlcombobox->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlComboBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDisconnectNotify(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetHandleSignals(KUrlComboBox* self, bool handle) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setHandleSignals(handle);
    } else {
        self->KUrlComboBox::setHandleSignals(handle);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetHandleSignals(KUrlComboBox* self, bool handle) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetHandleSignals_IsBase(true);
        vkurlcombobox->setHandleSignals(handle);
    } else {
        self->KUrlComboBox::setHandleSignals(handle);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetHandleSignals(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetHandleSignals_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetHandleSignals_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetCompletionMode(KUrlComboBox* self, int mode) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KUrlComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetCompletionMode(KUrlComboBox* self, int mode) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetCompletionMode_IsBase(true);
        vkurlcombobox->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KUrlComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetCompletionMode(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetCompletionMode_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetCompletionMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_VirtualHook(KUrlComboBox* self, int id, void* data) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKUrlComboBox*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseVirtualHook(KUrlComboBox* self, int id, void* data) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_VirtualHook_IsBase(true);
        vkurlcombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKUrlComboBox*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnVirtualHook(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_VirtualHook_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_UpdateMicroFocus(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->updateMicroFocus();
    } else {
        ((VirtualKUrlComboBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseUpdateMicroFocus(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_UpdateMicroFocus_IsBase(true);
        vkurlcombobox->updateMicroFocus();
    } else {
        ((VirtualKUrlComboBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnUpdateMicroFocus(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_Create(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->create();
    } else {
        ((VirtualKUrlComboBox*)self)->create();
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseCreate(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Create_IsBase(true);
        vkurlcombobox->create();
    } else {
        ((VirtualKUrlComboBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnCreate(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Create_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_Destroy(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->destroy();
    } else {
        ((VirtualKUrlComboBox*)self)->destroy();
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseDestroy(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Destroy_IsBase(true);
        vkurlcombobox->destroy();
    } else {
        ((VirtualKUrlComboBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDestroy(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Destroy_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboBox_FocusNextChild(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->focusNextChild();
    } else {
        return ((VirtualKUrlComboBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KUrlComboBox_QBaseFocusNextChild(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusNextChild_IsBase(true);
        return vkurlcombobox->focusNextChild();
    } else {
        return ((VirtualKUrlComboBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnFocusNextChild(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboBox_FocusPreviousChild(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->focusPreviousChild();
    } else {
        return ((VirtualKUrlComboBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KUrlComboBox_QBaseFocusPreviousChild(KUrlComboBox* self) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusPreviousChild_IsBase(true);
        return vkurlcombobox->focusPreviousChild();
    } else {
        return ((VirtualKUrlComboBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnFocusPreviousChild(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUrlComboBox_Sender(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->sender();
    } else {
        return ((VirtualKUrlComboBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUrlComboBox_QBaseSender(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Sender_IsBase(true);
        return vkurlcombobox->sender();
    } else {
        return ((VirtualKUrlComboBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSender(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Sender_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboBox_SenderSignalIndex(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->senderSignalIndex();
    } else {
        return ((VirtualKUrlComboBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUrlComboBox_QBaseSenderSignalIndex(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SenderSignalIndex_IsBase(true);
        return vkurlcombobox->senderSignalIndex();
    } else {
        return ((VirtualKUrlComboBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSenderSignalIndex(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboBox_Receivers(const KUrlComboBox* self, const char* signal) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->receivers(signal);
    } else {
        return ((VirtualKUrlComboBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUrlComboBox_QBaseReceivers(const KUrlComboBox* self, const char* signal) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Receivers_IsBase(true);
        return vkurlcombobox->receivers(signal);
    } else {
        return ((VirtualKUrlComboBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnReceivers(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Receivers_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboBox_IsSignalConnected(const KUrlComboBox* self, const QMetaMethod* signal) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlComboBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUrlComboBox_QBaseIsSignalConnected(const KUrlComboBox* self, const QMetaMethod* signal) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_IsSignalConnected_IsBase(true);
        return vkurlcombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlComboBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnIsSignalConnected(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KUrlComboBox_GetDecodedMetricF(const KUrlComboBox* self, int metricA, int metricB) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KUrlComboBox_QBaseGetDecodedMetricF(const KUrlComboBox* self, int metricA, int metricB) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_GetDecodedMetricF_IsBase(true);
        return vkurlcombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnGetDecodedMetricF(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_GetDecodedMetricF_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KUrlComboBox_KeyBindingMap(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkurlcombobox->keyBindingMap();
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
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKUrlComboBox*)self)->keyBindingMap();
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
libqt_map /* of int to libqt_list  of QKeySequence*  */ KUrlComboBox_QBaseKeyBindingMap(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_KeyBindingMap_IsBase(true);
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkurlcombobox->keyBindingMap();
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
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKUrlComboBox*)self)->keyBindingMap();
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
void KUrlComboBox_OnKeyBindingMap(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_KeyBindingMap_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_KeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetKeyBindingMap(KUrlComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
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
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKUrlComboBox*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetKeyBindingMap(KUrlComboBox* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
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
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetKeyBindingMap_IsBase(true);
        vkurlcombobox->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKUrlComboBox*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetKeyBindingMap(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetKeyBindingMap_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetKeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboBox_SetDelegate(KUrlComboBox* self, KCompletionBase* delegate) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setDelegate(delegate);
    } else {
        ((VirtualKUrlComboBox*)self)->setDelegate(delegate);
    }
}

// Base class handler implementation
void KUrlComboBox_QBaseSetDelegate(KUrlComboBox* self, KCompletionBase* delegate) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetDelegate_IsBase(true);
        vkurlcombobox->setDelegate(delegate);
    } else {
        ((VirtualKUrlComboBox*)self)->setDelegate(delegate);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetDelegate(KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_SetDelegate_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetDelegate_Callback>(slot));
    }
}

// Derived class handler implementation
KCompletionBase* KUrlComboBox_Delegate(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        return vkurlcombobox->delegate();
    } else {
        return ((VirtualKUrlComboBox*)self)->delegate();
    }
}

// Base class handler implementation
KCompletionBase* KUrlComboBox_QBaseDelegate(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Delegate_IsBase(true);
        return vkurlcombobox->delegate();
    } else {
        return ((VirtualKUrlComboBox*)self)->delegate();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDelegate(const KUrlComboBox* self, intptr_t slot) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox && vkurlcombobox->isVirtualKUrlComboBox) {
        vkurlcombobox->setKUrlComboBox_Delegate_Callback(reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Delegate_Callback>(slot));
    }
}

void KUrlComboBox_Delete(KUrlComboBox* self) {
    delete self;
}
