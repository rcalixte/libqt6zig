#include <KFileItem>
#include <KPageDialog>
#include <KPageWidget>
#include <KPropertiesDialog>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDialogButtonBox>
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
#include <QList>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kpropertiesdialog.h>
#include "libkpropertiesdialog.h"
#include "libkpropertiesdialog.hxx"

KPropertiesDialog* KPropertiesDialog_new(const KFileItem* item) {
    return new VirtualKPropertiesDialog(*item);
}

KPropertiesDialog* KPropertiesDialog_new2(const KFileItemList* _items) {
    return new VirtualKPropertiesDialog(*_items);
}

KPropertiesDialog* KPropertiesDialog_new3(const QUrl* url) {
    return new VirtualKPropertiesDialog(*url);
}

KPropertiesDialog* KPropertiesDialog_new4(const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return new VirtualKPropertiesDialog(urls_QList);
}

KPropertiesDialog* KPropertiesDialog_new5(const QUrl* _tempUrl, const QUrl* _currentDir, const libqt_string _defaultName) {
    QString _defaultName_QString = QString::fromUtf8(_defaultName.data, _defaultName.len);
    return new VirtualKPropertiesDialog(*_tempUrl, *_currentDir, _defaultName_QString);
}

KPropertiesDialog* KPropertiesDialog_new6(const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKPropertiesDialog(title_QString);
}

KPropertiesDialog* KPropertiesDialog_new7(const KFileItem* item, QWidget* parent) {
    return new VirtualKPropertiesDialog(*item, parent);
}

KPropertiesDialog* KPropertiesDialog_new8(const KFileItemList* _items, QWidget* parent) {
    return new VirtualKPropertiesDialog(*_items, parent);
}

KPropertiesDialog* KPropertiesDialog_new9(const QUrl* url, QWidget* parent) {
    return new VirtualKPropertiesDialog(*url, parent);
}

KPropertiesDialog* KPropertiesDialog_new10(const libqt_list /* of QUrl* */ urls, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return new VirtualKPropertiesDialog(urls_QList, parent);
}

KPropertiesDialog* KPropertiesDialog_new11(const QUrl* _tempUrl, const QUrl* _currentDir, const libqt_string _defaultName, QWidget* parent) {
    QString _defaultName_QString = QString::fromUtf8(_defaultName.data, _defaultName.len);
    return new VirtualKPropertiesDialog(*_tempUrl, *_currentDir, _defaultName_QString, parent);
}

KPropertiesDialog* KPropertiesDialog_new12(const libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualKPropertiesDialog(title_QString, parent);
}

QMetaObject* KPropertiesDialog_MetaObject(const KPropertiesDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPropertiesDialog_Metacast(KPropertiesDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPropertiesDialog_Metacall(KPropertiesDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPropertiesDialog_Tr(const char* s) {
    auto _ret = KPropertiesDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KPropertiesDialog_CanDisplay(const KFileItemList* _items) {
    return KPropertiesDialog::canDisplay(*_items);
}

bool KPropertiesDialog_ShowDialog(const KFileItem* item) {
    return KPropertiesDialog::showDialog(*item);
}

bool KPropertiesDialog_ShowDialog2(const QUrl* _url) {
    return KPropertiesDialog::showDialog(*_url);
}

bool KPropertiesDialog_ShowDialog3(const KFileItemList* _items) {
    return KPropertiesDialog::showDialog(*_items);
}

bool KPropertiesDialog_ShowDialog4(const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return KPropertiesDialog::showDialog(urls_QList);
}

QUrl* KPropertiesDialog_Url(const KPropertiesDialog* self) {
    return new QUrl(self->url());
}

KFileItem* KPropertiesDialog_Item(KPropertiesDialog* self) {
    KFileItem& _ret = self->item();
    // Cast returned reference into pointer
    return &_ret;
}

KFileItemList* KPropertiesDialog_Items(const KPropertiesDialog* self) {
    return new KFileItemList(self->items());
}

QUrl* KPropertiesDialog_CurrentDir(const KPropertiesDialog* self) {
    return new QUrl(self->currentDir());
}

libqt_string KPropertiesDialog_DefaultName(const KPropertiesDialog* self) {
    auto _ret = self->defaultName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPropertiesDialog_UpdateUrl(KPropertiesDialog* self, const QUrl* newUrl) {
    self->updateUrl(*newUrl);
}

void KPropertiesDialog_Rename(KPropertiesDialog* self, const libqt_string _name) {
    QString _name_QString = QString::fromUtf8(_name.data, _name.len);
    self->rename(_name_QString);
}

void KPropertiesDialog_AbortApplying(KPropertiesDialog* self) {
    self->abortApplying();
}

void KPropertiesDialog_ShowFileSharingPage(KPropertiesDialog* self) {
    self->showFileSharingPage();
}

void KPropertiesDialog_SetFileSharingPage(KPropertiesDialog* self, QWidget* page) {
    self->setFileSharingPage(page);
}

void KPropertiesDialog_SetFileNameReadOnly(KPropertiesDialog* self, bool ro) {
    self->setFileNameReadOnly(ro);
}

void KPropertiesDialog_Accept(KPropertiesDialog* self) {
    self->accept();
}

void KPropertiesDialog_Reject(KPropertiesDialog* self) {
    self->reject();
}

void KPropertiesDialog_PropertiesClosed(KPropertiesDialog* self) {
    self->propertiesClosed();
}

void KPropertiesDialog_Connect_PropertiesClosed(KPropertiesDialog* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialog*) = reinterpret_cast<void (*)(KPropertiesDialog*)>(slot);
    KPropertiesDialog::connect(self,
                               static_cast<void (KPropertiesDialog::*)()>(&KPropertiesDialog::propertiesClosed),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void KPropertiesDialog_Applied(KPropertiesDialog* self) {
    self->applied();
}

void KPropertiesDialog_Connect_Applied(KPropertiesDialog* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialog*) = reinterpret_cast<void (*)(KPropertiesDialog*)>(slot);
    KPropertiesDialog::connect(self,
                               static_cast<void (KPropertiesDialog::*)()>(&KPropertiesDialog::applied),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void KPropertiesDialog_Canceled(KPropertiesDialog* self) {
    self->canceled();
}

void KPropertiesDialog_Connect_Canceled(KPropertiesDialog* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialog*) = reinterpret_cast<void (*)(KPropertiesDialog*)>(slot);
    KPropertiesDialog::connect(self,
                               static_cast<void (KPropertiesDialog::*)()>(&KPropertiesDialog::canceled),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void KPropertiesDialog_SaveAs(KPropertiesDialog* self, const QUrl* oldUrl, QUrl* newUrl) {
    self->saveAs(*oldUrl, *newUrl);
}

void KPropertiesDialog_Connect_SaveAs(KPropertiesDialog* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialog*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KPropertiesDialog*, QUrl*, QUrl*)>(slot);
    KPropertiesDialog::connect(self,
                               static_cast<void (KPropertiesDialog::*)(const QUrl&, QUrl&)>(&KPropertiesDialog::saveAs),
                               [self, slotFunc](const QUrl& oldUrl, QUrl& newUrl) {
                                   const QUrl& oldUrl_ret = oldUrl;
                                   // Cast returned reference into pointer
                                   QUrl* sigval1 = const_cast<QUrl*>(&oldUrl_ret);
                                   QUrl& newUrl_ret = newUrl;
                                   // Cast returned reference into pointer
                                   QUrl* sigval2 = &newUrl_ret;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

libqt_string KPropertiesDialog_Tr2(const char* s, const char* c) {
    auto _ret = KPropertiesDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPropertiesDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPropertiesDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KPropertiesDialog_ShowDialog22(const KFileItem* item, QWidget* parent) {
    return KPropertiesDialog::showDialog(*item, parent);
}

bool KPropertiesDialog_ShowDialog32(const KFileItem* item, QWidget* parent, bool modal) {
    return KPropertiesDialog::showDialog(*item, parent, modal);
}

bool KPropertiesDialog_ShowDialog23(const QUrl* _url, QWidget* parent) {
    return KPropertiesDialog::showDialog(*_url, parent);
}

bool KPropertiesDialog_ShowDialog33(const QUrl* _url, QWidget* parent, bool modal) {
    return KPropertiesDialog::showDialog(*_url, parent, modal);
}

bool KPropertiesDialog_ShowDialog24(const KFileItemList* _items, QWidget* parent) {
    return KPropertiesDialog::showDialog(*_items, parent);
}

bool KPropertiesDialog_ShowDialog34(const KFileItemList* _items, QWidget* parent, bool modal) {
    return KPropertiesDialog::showDialog(*_items, parent, modal);
}

bool KPropertiesDialog_ShowDialog25(const libqt_list /* of QUrl* */ urls, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return KPropertiesDialog::showDialog(urls_QList, parent);
}

bool KPropertiesDialog_ShowDialog35(const libqt_list /* of QUrl* */ urls, QWidget* parent, bool modal) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return KPropertiesDialog::showDialog(urls_QList, parent, modal);
}

// Base class handler implementation
QMetaObject* KPropertiesDialog_SuperMetaObject(const KPropertiesDialog* self) {
    return (QMetaObject*)self->KPropertiesDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMetaObject(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_metaobject_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPropertiesDialog_SuperMetacast(KPropertiesDialog* self, const char* param1) {
    return self->KPropertiesDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMetacast(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_metacast_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPropertiesDialog_SuperMetacall(KPropertiesDialog* self, int param1, int param2, void** param3) {
    return self->KPropertiesDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMetacall(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_metacall_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KPropertiesDialog_SuperAccept(KPropertiesDialog* self) {
    self->KPropertiesDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnAccept(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_accept_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Accept_Callback>(slot);
}

// Base class handler implementation
void KPropertiesDialog_SuperReject(KPropertiesDialog* self) {
    self->KPropertiesDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnReject(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_reject_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_SetVisible(KPropertiesDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPropertiesDialog_SuperSetVisible(KPropertiesDialog* self, bool visible) {
    self->KPropertiesDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSetVisible(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_setvisible_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPropertiesDialog_SizeHint(const KPropertiesDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPropertiesDialog_SuperSizeHint(const KPropertiesDialog* self) {
    return new QSize(self->KPropertiesDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSizeHint(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_sizehint_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPropertiesDialog_MinimumSizeHint(const KPropertiesDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPropertiesDialog_SuperMinimumSizeHint(const KPropertiesDialog* self) {
    return new QSize(self->KPropertiesDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMinimumSizeHint(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_minimumsizehint_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_Open(KPropertiesDialog* self) {
    self->open();
}

// Base class handler implementation
void KPropertiesDialog_SuperOpen(KPropertiesDialog* self) {
    self->KPropertiesDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnOpen(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_open_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KPropertiesDialog_Exec(KPropertiesDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KPropertiesDialog_SuperExec(KPropertiesDialog* self) {
    return self->KPropertiesDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnExec(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_exec_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_Done(KPropertiesDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KPropertiesDialog_SuperDone(KPropertiesDialog* self, int param1) {
    self->KPropertiesDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDone(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_done_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_KeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperKeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnKeyPressEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_keypressevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_CloseEvent(KPropertiesDialog* self, QCloseEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperCloseEvent(KPropertiesDialog* self, QCloseEvent* param1) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnCloseEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_closeevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_ShowEvent(KPropertiesDialog* self, QShowEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperShowEvent(KPropertiesDialog* self, QShowEvent* param1) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnShowEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_showevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_ResizeEvent(KPropertiesDialog* self, QResizeEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperResizeEvent(KPropertiesDialog* self, QResizeEvent* param1) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnResizeEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_resizeevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_ContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnContextMenuEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_contextmenuevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPropertiesDialog_EventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        return vkpropertiesdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPropertiesDialog_SuperEventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        return vkpropertiesdialog->KPropertiesDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnEventFilter(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_eventfilter_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KPropertiesDialog_DevType(const KPropertiesDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KPropertiesDialog_SuperDevType(const KPropertiesDialog* self) {
    return self->KPropertiesDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDevType(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_devtype_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KPropertiesDialog_HeightForWidth(const KPropertiesDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPropertiesDialog_SuperHeightForWidth(const KPropertiesDialog* self, int param1) {
    return self->KPropertiesDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnHeightForWidth(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_heightforwidth_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPropertiesDialog_HasHeightForWidth(const KPropertiesDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPropertiesDialog_SuperHasHeightForWidth(const KPropertiesDialog* self) {
    return self->KPropertiesDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnHasHeightForWidth(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPropertiesDialog_PaintEngine(const KPropertiesDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPropertiesDialog_SuperPaintEngine(const KPropertiesDialog* self) {
    return self->KPropertiesDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnPaintEngine(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_paintengine_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPropertiesDialog_Event(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        return vkpropertiesdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPropertiesDialog_SuperEvent(KPropertiesDialog* self, QEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        return vkpropertiesdialog->KPropertiesDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_event_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_MousePressEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperMousePressEvent(KPropertiesDialog* self, QMouseEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMousePressEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_mousepressevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_MouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperMouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMouseReleaseEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_MouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperMouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMouseDoubleClickEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_MouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperMouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMouseMoveEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_mousemoveevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_WheelEvent(KPropertiesDialog* self, QWheelEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperWheelEvent(KPropertiesDialog* self, QWheelEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnWheelEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_wheelevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_KeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperKeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnKeyReleaseEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_FocusInEvent(KPropertiesDialog* self, QFocusEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperFocusInEvent(KPropertiesDialog* self, QFocusEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnFocusInEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_focusinevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_FocusOutEvent(KPropertiesDialog* self, QFocusEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperFocusOutEvent(KPropertiesDialog* self, QFocusEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnFocusOutEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_focusoutevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_EnterEvent(KPropertiesDialog* self, QEnterEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperEnterEvent(KPropertiesDialog* self, QEnterEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnEnterEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_enterevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_LeaveEvent(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperLeaveEvent(KPropertiesDialog* self, QEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnLeaveEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_leaveevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_PaintEvent(KPropertiesDialog* self, QPaintEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperPaintEvent(KPropertiesDialog* self, QPaintEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnPaintEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_paintevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_MoveEvent(KPropertiesDialog* self, QMoveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperMoveEvent(KPropertiesDialog* self, QMoveEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMoveEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_moveevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_TabletEvent(KPropertiesDialog* self, QTabletEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperTabletEvent(KPropertiesDialog* self, QTabletEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnTabletEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_tabletevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_ActionEvent(KPropertiesDialog* self, QActionEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperActionEvent(KPropertiesDialog* self, QActionEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnActionEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_actionevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_DragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperDragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDragEnterEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_dragenterevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_DragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperDragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDragMoveEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_dragmoveevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_DragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperDragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDragLeaveEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_dragleaveevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_DropEvent(KPropertiesDialog* self, QDropEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperDropEvent(KPropertiesDialog* self, QDropEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDropEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_dropevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_HideEvent(KPropertiesDialog* self, QHideEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperHideEvent(KPropertiesDialog* self, QHideEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnHideEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_hideevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPropertiesDialog_NativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        return vkpropertiesdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPropertiesDialog_SuperNativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        return vkpropertiesdialog->KPropertiesDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnNativeEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_nativeevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_ChangeEvent(KPropertiesDialog* self, QEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperChangeEvent(KPropertiesDialog* self, QEvent* param1) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnChangeEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_changeevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPropertiesDialog_Metric(const KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog) {
        return vkpropertiesdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPropertiesDialog_SuperMetric(const KPropertiesDialog* self, int param1) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        return vkpropertiesdialog->KPropertiesDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMetric(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_metric_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_InitPainter(const KPropertiesDialog* self, QPainter* painter) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog) {
        vkpropertiesdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperInitPainter(const KPropertiesDialog* self, QPainter* painter) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        vkpropertiesdialog->KPropertiesDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnInitPainter(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_initpainter_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPropertiesDialog_Redirected(const KPropertiesDialog* self, QPoint* offset) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog) {
        return vkpropertiesdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPropertiesDialog_SuperRedirected(const KPropertiesDialog* self, QPoint* offset) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        return vkpropertiesdialog->KPropertiesDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnRedirected(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_redirected_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPropertiesDialog_SharedPainter(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog) {
        return vkpropertiesdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPropertiesDialog_SuperSharedPainter(const KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        return vkpropertiesdialog->KPropertiesDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSharedPainter(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_sharedpainter_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_InputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperInputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnInputMethodEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_inputmethodevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPropertiesDialog_InputMethodQuery(const KPropertiesDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPropertiesDialog_SuperInputMethodQuery(const KPropertiesDialog* self, int param1) {
    return new QVariant(self->KPropertiesDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnInputMethodQuery(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self)))
        vkpropertiesdialog->kpropertiesdialog_inputmethodquery_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPropertiesDialog_FocusNextPrevChild(KPropertiesDialog* self, bool next) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        return vkpropertiesdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPropertiesDialog_SuperFocusNextPrevChild(KPropertiesDialog* self, bool next) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        return vkpropertiesdialog->KPropertiesDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnFocusNextPrevChild(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_TimerEvent(KPropertiesDialog* self, QTimerEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperTimerEvent(KPropertiesDialog* self, QTimerEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnTimerEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_timerevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_ChildEvent(KPropertiesDialog* self, QChildEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperChildEvent(KPropertiesDialog* self, QChildEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnChildEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_childevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_CustomEvent(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperCustomEvent(KPropertiesDialog* self, QEvent* event) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnCustomEvent(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_customevent_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_ConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnConnectNotify(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_connectnotify_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPropertiesDialog_DisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog) {
        vkpropertiesdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPropertiesDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPropertiesDialog_SuperDisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->KPropertiesDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPropertiesDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDisconnectNotify(KPropertiesDialog* self, intptr_t slot) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self))
        vkpropertiesdialog->kpropertiesdialog_disconnectnotify_callback = reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
KPageWidget* KPropertiesDialog_PageWidget(KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::pageWidget();
    } else
        qFatal("Error: Protected method KPropertiesDialog::pageWidget called without a directly constructed type");
}

// Derived class protected handler implementation
void KPropertiesDialog_SetPageWidget(KPropertiesDialog* self, KPageWidget* widget) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->VirtualKPropertiesDialog::setPageWidget(widget);
    } else
        qFatal("Error: Protected method KPropertiesDialog::setPageWidget called without a directly constructed type");
}

// Derived class protected handler implementation
QDialogButtonBox* KPropertiesDialog_ButtonBox(KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::buttonBox();
    } else
        qFatal("Error: Protected method KPropertiesDialog::buttonBox called without a directly constructed type");
}

// Derived class protected handler implementation
void KPropertiesDialog_SetButtonBox(KPropertiesDialog* self, QDialogButtonBox* box) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->VirtualKPropertiesDialog::setButtonBox(box);
    } else
        qFatal("Error: Protected method KPropertiesDialog::setButtonBox called without a directly constructed type");
}

// Derived class protected handler implementation
void KPropertiesDialog_AdjustPosition(KPropertiesDialog* self, QWidget* param1) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->VirtualKPropertiesDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KPropertiesDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KPropertiesDialog_UpdateMicroFocus(KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->VirtualKPropertiesDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPropertiesDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPropertiesDialog_Create(KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->VirtualKPropertiesDialog::create();
    } else
        qFatal("Error: Protected method KPropertiesDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPropertiesDialog_Destroy(KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        vkpropertiesdialog->VirtualKPropertiesDialog::destroy();
    } else
        qFatal("Error: Protected method KPropertiesDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPropertiesDialog_FocusNextChild(KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KPropertiesDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPropertiesDialog_FocusPreviousChild(KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self)) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPropertiesDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPropertiesDialog_Sender(const KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::sender();
    } else
        qFatal("Error: Protected method KPropertiesDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPropertiesDialog_SenderSignalIndex(const KPropertiesDialog* self) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPropertiesDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPropertiesDialog_Receivers(const KPropertiesDialog* self, const char* signal) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KPropertiesDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPropertiesDialog_IsSignalConnected(const KPropertiesDialog* self, const QMetaMethod* signal) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPropertiesDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPropertiesDialog_GetDecodedMetricF(const KPropertiesDialog* self, int metricA, int metricB) {
    if (auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self))) {
        return vkpropertiesdialog->VirtualKPropertiesDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPropertiesDialog::getDecodedMetricF called without a directly constructed type");
}

void KPropertiesDialog_Delete(KPropertiesDialog* self) {
    delete self;
}
