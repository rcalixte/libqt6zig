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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUrlComboBox_Tr(const char* s) {
    auto _ret = KUrlComboBox::tr(s);
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
    self->setCompletionObject(compObj, hsig);
}

void KUrlComboBox_UrlActivated(KUrlComboBox* self, const QUrl* url) {
    self->urlActivated(*url);
}

void KUrlComboBox_Connect_UrlActivated(KUrlComboBox* self, intptr_t slot) {
    void (*slotFunc)(KUrlComboBox*, QUrl*) = reinterpret_cast<void (*)(KUrlComboBox*, QUrl*)>(slot);
    KUrlComboBox::connect(self,
                          static_cast<void (KUrlComboBox::*)(const QUrl&)>(&KUrlComboBox::urlActivated),
                          [self, slotFunc](const QUrl& url) {
                              const QUrl& url_ret = url;
                              // Cast returned reference into pointer
                              QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                              slotFunc(self, sigval1);
                          });
}

void KUrlComboBox_MousePressEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->mousePressEvent(event);
    }
}

void KUrlComboBox_MouseMoveEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->mouseMoveEvent(event);
    }
}

libqt_string KUrlComboBox_Tr2(const char* s, const char* c) {
    auto _ret = KUrlComboBox::tr(s, c);
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
    auto _ret = KUrlComboBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* KUrlComboBox_SuperMetaObject(const KUrlComboBox* self) {
    return (QMetaObject*)self->KUrlComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMetaObject(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_metaobject_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KUrlComboBox_SuperMetacast(KUrlComboBox* self, const char* param1) {
    return self->KUrlComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMetacast(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_metacast_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KUrlComboBox_SuperMetacall(KUrlComboBox* self, int param1, int param2, void** param3) {
    return self->KUrlComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMetacall(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_metacall_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Metacall_Callback>(slot);
}

// Base class handler implementation
void KUrlComboBox_SuperSetCompletionObject(KUrlComboBox* self, KCompletion* compObj, bool hsig) {
    self->KUrlComboBox::setCompletionObject(compObj, hsig);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetCompletionObject(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_setcompletionobject_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetCompletionObject_Callback>(slot);
}

// Base class handler implementation
void KUrlComboBox_SuperMousePressEvent(KUrlComboBox* self, QMouseEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMousePressEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_mousepressevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlComboBox_SuperMouseMoveEvent(KUrlComboBox* self, QMouseEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMouseMoveEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_mousemoveevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_SetAutoCompletion(KUrlComboBox* self, bool autocomplete) {
    self->setAutoCompletion(autocomplete);
}

// Base class handler implementation
void KUrlComboBox_SuperSetAutoCompletion(KUrlComboBox* self, bool autocomplete) {
    self->KUrlComboBox::setAutoCompletion(autocomplete);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetAutoCompletion(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_setautocompletion_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetAutoCompletion_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_SetLineEdit(KUrlComboBox* self, QLineEdit* lineEdit) {
    self->setLineEdit(lineEdit);
}

// Base class handler implementation
void KUrlComboBox_SuperSetLineEdit(KUrlComboBox* self, QLineEdit* lineEdit) {
    self->KUrlComboBox::setLineEdit(lineEdit);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetLineEdit(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_setlineedit_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetLineEdit_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlComboBox_MinimumSizeHint(const KUrlComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KUrlComboBox_SuperMinimumSizeHint(const KUrlComboBox* self) {
    return new QSize(self->KUrlComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMinimumSizeHint(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_minimumsizehint_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_SetCompletedText(KUrlComboBox* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->setCompletedText(completedText_QString);
}

// Base class handler implementation
void KUrlComboBox_SuperSetCompletedText(KUrlComboBox* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->KUrlComboBox::setCompletedText(completedText_QString);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetCompletedText(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_setcompletedtext_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetCompletedText_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_SetCompletedItems(KUrlComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setCompletedItems(items_QList, autoSuggest);
}

// Base class handler implementation
void KUrlComboBox_SuperSetCompletedItems(KUrlComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->KUrlComboBox::setCompletedItems(items_QList, autoSuggest);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetCompletedItems(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_setcompleteditems_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetCompletedItems_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_MakeCompletion(KUrlComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->makeCompletion(param1_QString);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::makeCompletion called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperMakeCompletion(KUrlComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::makeCompletion(param1_QString);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::makeCompletion called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMakeCompletion(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_makecompletion_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MakeCompletion_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_SetModel(KUrlComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void KUrlComboBox_SuperSetModel(KUrlComboBox* self, QAbstractItemModel* model) {
    self->KUrlComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetModel(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_setmodel_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlComboBox_SizeHint(const KUrlComboBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KUrlComboBox_SuperSizeHint(const KUrlComboBox* self) {
    return new QSize(self->KUrlComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSizeHint(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_sizehint_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_ShowPopup(KUrlComboBox* self) {
    self->showPopup();
}

// Base class handler implementation
void KUrlComboBox_SuperShowPopup(KUrlComboBox* self) {
    self->KUrlComboBox::showPopup();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnShowPopup(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_showpopup_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_HidePopup(KUrlComboBox* self) {
    self->hidePopup();
}

// Base class handler implementation
void KUrlComboBox_SuperHidePopup(KUrlComboBox* self) {
    self->KUrlComboBox::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnHidePopup(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_hidepopup_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_HidePopup_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboBox_Event(KUrlComboBox* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KUrlComboBox_SuperEvent(KUrlComboBox* self, QEvent* event) {
    return self->KUrlComboBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_event_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* KUrlComboBox_InputMethodQuery(const KUrlComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KUrlComboBox_SuperInputMethodQuery(const KUrlComboBox* self, int param1) {
    return new QVariant(self->KUrlComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnInputMethodQuery(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_inputmethodquery_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_FocusInEvent(KUrlComboBox* self, QFocusEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperFocusInEvent(KUrlComboBox* self, QFocusEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnFocusInEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_focusinevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_FocusOutEvent(KUrlComboBox* self, QFocusEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperFocusOutEvent(KUrlComboBox* self, QFocusEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnFocusOutEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_focusoutevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_ChangeEvent(KUrlComboBox* self, QEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperChangeEvent(KUrlComboBox* self, QEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnChangeEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_changeevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_ResizeEvent(KUrlComboBox* self, QResizeEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperResizeEvent(KUrlComboBox* self, QResizeEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnResizeEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_resizeevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_PaintEvent(KUrlComboBox* self, QPaintEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperPaintEvent(KUrlComboBox* self, QPaintEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnPaintEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_paintevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_ShowEvent(KUrlComboBox* self, QShowEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperShowEvent(KUrlComboBox* self, QShowEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnShowEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_showevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_HideEvent(KUrlComboBox* self, QHideEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperHideEvent(KUrlComboBox* self, QHideEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnHideEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_hideevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_MouseReleaseEvent(KUrlComboBox* self, QMouseEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperMouseReleaseEvent(KUrlComboBox* self, QMouseEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMouseReleaseEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_mousereleaseevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_KeyPressEvent(KUrlComboBox* self, QKeyEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperKeyPressEvent(KUrlComboBox* self, QKeyEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnKeyPressEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_keypressevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_KeyReleaseEvent(KUrlComboBox* self, QKeyEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperKeyReleaseEvent(KUrlComboBox* self, QKeyEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnKeyReleaseEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_keyreleaseevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_WheelEvent(KUrlComboBox* self, QWheelEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperWheelEvent(KUrlComboBox* self, QWheelEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnWheelEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_wheelevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_ContextMenuEvent(KUrlComboBox* self, QContextMenuEvent* e) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperContextMenuEvent(KUrlComboBox* self, QContextMenuEvent* e) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnContextMenuEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_contextmenuevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_InputMethodEvent(KUrlComboBox* self, QInputMethodEvent* param1) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperInputMethodEvent(KUrlComboBox* self, QInputMethodEvent* param1) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnInputMethodEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_inputmethodevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_InitStyleOption(const KUrlComboBox* self, QStyleOptionComboBox* option) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox) {
        vkurlcombobox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperInitStyleOption(const KUrlComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        vkurlcombobox->KUrlComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnInitStyleOption(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_initstyleoption_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KUrlComboBox_DevType(const KUrlComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int KUrlComboBox_SuperDevType(const KUrlComboBox* self) {
    return self->KUrlComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDevType(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_devtype_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_SetVisible(KUrlComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KUrlComboBox_SuperSetVisible(KUrlComboBox* self, bool visible) {
    self->KUrlComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetVisible(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_setvisible_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KUrlComboBox_HeightForWidth(const KUrlComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KUrlComboBox_SuperHeightForWidth(const KUrlComboBox* self, int param1) {
    return self->KUrlComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnHeightForWidth(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_heightforwidth_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboBox_HasHeightForWidth(const KUrlComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KUrlComboBox_SuperHasHeightForWidth(const KUrlComboBox* self) {
    return self->KUrlComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnHasHeightForWidth(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_hasheightforwidth_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KUrlComboBox_PaintEngine(const KUrlComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KUrlComboBox_SuperPaintEngine(const KUrlComboBox* self) {
    return self->KUrlComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnPaintEngine(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_paintengine_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_MouseDoubleClickEvent(KUrlComboBox* self, QMouseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperMouseDoubleClickEvent(KUrlComboBox* self, QMouseEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMouseDoubleClickEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_EnterEvent(KUrlComboBox* self, QEnterEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperEnterEvent(KUrlComboBox* self, QEnterEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnEnterEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_enterevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_LeaveEvent(KUrlComboBox* self, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperLeaveEvent(KUrlComboBox* self, QEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnLeaveEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_leaveevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_MoveEvent(KUrlComboBox* self, QMoveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperMoveEvent(KUrlComboBox* self, QMoveEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMoveEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_moveevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_CloseEvent(KUrlComboBox* self, QCloseEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperCloseEvent(KUrlComboBox* self, QCloseEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnCloseEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_closeevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_TabletEvent(KUrlComboBox* self, QTabletEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperTabletEvent(KUrlComboBox* self, QTabletEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnTabletEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_tabletevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_ActionEvent(KUrlComboBox* self, QActionEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperActionEvent(KUrlComboBox* self, QActionEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnActionEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_actionevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_DragEnterEvent(KUrlComboBox* self, QDragEnterEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperDragEnterEvent(KUrlComboBox* self, QDragEnterEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDragEnterEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_dragenterevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_DragMoveEvent(KUrlComboBox* self, QDragMoveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperDragMoveEvent(KUrlComboBox* self, QDragMoveEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDragMoveEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_dragmoveevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_DragLeaveEvent(KUrlComboBox* self, QDragLeaveEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperDragLeaveEvent(KUrlComboBox* self, QDragLeaveEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDragLeaveEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_dragleaveevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_DropEvent(KUrlComboBox* self, QDropEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperDropEvent(KUrlComboBox* self, QDropEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDropEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_dropevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboBox_NativeEvent(KUrlComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        return vkurlcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlComboBox_SuperNativeEvent(KUrlComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        return vkurlcombobox->KUrlComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnNativeEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_nativeevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KUrlComboBox_Metric(const KUrlComboBox* self, int param1) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox) {
        return vkurlcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KUrlComboBox_SuperMetric(const KUrlComboBox* self, int param1) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->KUrlComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnMetric(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_metric_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_InitPainter(const KUrlComboBox* self, QPainter* painter) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox) {
        vkurlcombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperInitPainter(const KUrlComboBox* self, QPainter* painter) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        vkurlcombobox->KUrlComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnInitPainter(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_initpainter_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KUrlComboBox_Redirected(const KUrlComboBox* self, QPoint* offset) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox) {
        return vkurlcombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KUrlComboBox_SuperRedirected(const KUrlComboBox* self, QPoint* offset) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->KUrlComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnRedirected(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_redirected_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KUrlComboBox_SharedPainter(const KUrlComboBox* self) {
    auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self));
    if (vkurlcombobox) {
        return vkurlcombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KUrlComboBox_SuperSharedPainter(const KUrlComboBox* self) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->KUrlComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSharedPainter(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self)))
        vkurlcombobox->kurlcombobox_sharedpainter_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboBox_FocusNextPrevChild(KUrlComboBox* self, bool next) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        return vkurlcombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlComboBox_SuperFocusNextPrevChild(KUrlComboBox* self, bool next) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        return vkurlcombobox->KUrlComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnFocusNextPrevChild(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_focusnextprevchild_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboBox_EventFilter(KUrlComboBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KUrlComboBox_SuperEventFilter(KUrlComboBox* self, QObject* watched, QEvent* event) {
    return self->KUrlComboBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnEventFilter(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_eventfilter_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_TimerEvent(KUrlComboBox* self, QTimerEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperTimerEvent(KUrlComboBox* self, QTimerEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnTimerEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_timerevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_ChildEvent(KUrlComboBox* self, QChildEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperChildEvent(KUrlComboBox* self, QChildEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnChildEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_childevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_CustomEvent(KUrlComboBox* self, QEvent* event) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperCustomEvent(KUrlComboBox* self, QEvent* event) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnCustomEvent(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_customevent_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_ConnectNotify(KUrlComboBox* self, const QMetaMethod* signal) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperConnectNotify(KUrlComboBox* self, const QMetaMethod* signal) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnConnectNotify(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_connectnotify_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_DisconnectNotify(KUrlComboBox* self, const QMetaMethod* signal) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperDisconnectNotify(KUrlComboBox* self, const QMetaMethod* signal) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnDisconnectNotify(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_disconnectnotify_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_SetHandleSignals(KUrlComboBox* self, bool handle) {
    self->setHandleSignals(handle);
}

// Base class handler implementation
void KUrlComboBox_SuperSetHandleSignals(KUrlComboBox* self, bool handle) {
    self->KUrlComboBox::setHandleSignals(handle);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetHandleSignals(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_sethandlesignals_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetHandleSignals_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_SetCompletionMode(KUrlComboBox* self, int mode) {
    self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Base class handler implementation
void KUrlComboBox_SuperSetCompletionMode(KUrlComboBox* self, int mode) {
    self->KUrlComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnSetCompletionMode(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_setcompletionmode_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_SetCompletionMode_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboBox_VirtualHook(KUrlComboBox* self, int id, void* data) {
    auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self);
    if (vkurlcombobox) {
        vkurlcombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        qFatal("Error: Protected virtual method KUrlComboBox::virtual_hook called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboBox_SuperVirtualHook(KUrlComboBox* self, int id, void* data) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->KUrlComboBox::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KUrlComboBox::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboBox_OnVirtualHook(KUrlComboBox* self, intptr_t slot) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self))
        vkurlcombobox->kurlcombobox_virtualhook_callback = reinterpret_cast<VirtualKUrlComboBox::KUrlComboBox_VirtualHook_Callback>(slot);
}

// Derived class protected handler implementation
void KUrlComboBox_UpdateMicroFocus(KUrlComboBox* self) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->VirtualKUrlComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KUrlComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlComboBox_Create(KUrlComboBox* self) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->VirtualKUrlComboBox::create();
    } else
        qFatal("Error: Protected method KUrlComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlComboBox_Destroy(KUrlComboBox* self) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->VirtualKUrlComboBox::destroy();
    } else
        qFatal("Error: Protected method KUrlComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlComboBox_FocusNextChild(KUrlComboBox* self) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        return vkurlcombobox->VirtualKUrlComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method KUrlComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlComboBox_FocusPreviousChild(KUrlComboBox* self) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        return vkurlcombobox->VirtualKUrlComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KUrlComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KUrlComboBox_Sender(const KUrlComboBox* self) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->VirtualKUrlComboBox::sender();
    } else
        qFatal("Error: Protected method KUrlComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlComboBox_SenderSignalIndex(const KUrlComboBox* self) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->VirtualKUrlComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KUrlComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlComboBox_Receivers(const KUrlComboBox* self, const char* signal) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->VirtualKUrlComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method KUrlComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlComboBox_IsSignalConnected(const KUrlComboBox* self, const QMetaMethod* signal) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->VirtualKUrlComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KUrlComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KUrlComboBox_GetDecodedMetricF(const KUrlComboBox* self, int metricA, int metricB) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->VirtualKUrlComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KUrlComboBox::getDecodedMetricF called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_map /* of int to libqt_list of QKeySequence* */ KUrlComboBox_KeyBindingMap(const KUrlComboBox* self) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkurlcombobox->VirtualKUrlComboBox::keyBindingMap();
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
        qFatal("Error: Protected method KUrlComboBox::keyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlComboBox_SetKeyBindingMap(KUrlComboBox* self, libqt_map /* of int to libqt_list of QKeySequence* */ keyBindingMap) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
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
        vkurlcombobox->VirtualKUrlComboBox::setKeyBindingMap(keyBindingMap_QMap);
    } else
        qFatal("Error: Protected method KUrlComboBox::setKeyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlComboBox_SetDelegate(KUrlComboBox* self, KCompletionBase* delegate) {
    if (auto* vkurlcombobox = dynamic_cast<VirtualKUrlComboBox*>(self)) {
        vkurlcombobox->VirtualKUrlComboBox::setDelegate(delegate);
    } else
        qFatal("Error: Protected method KUrlComboBox::setDelegate called without a directly constructed type");
}

// Derived class protected handler implementation
KCompletionBase* KUrlComboBox_Delegate(const KUrlComboBox* self) {
    if (auto* vkurlcombobox = const_cast<VirtualKUrlComboBox*>(dynamic_cast<const VirtualKUrlComboBox*>(self))) {
        return vkurlcombobox->VirtualKUrlComboBox::delegate();
    } else
        qFatal("Error: Protected method KUrlComboBox::delegate called without a directly constructed type");
}

void KUrlComboBox_Delete(KUrlComboBox* self) {
    delete self;
}
