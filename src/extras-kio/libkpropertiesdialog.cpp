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
#include <QByteArray>
#include <cstring>
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
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPropertiesDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPropertiesDialog_Tr(const char* s) {
    QString _ret = KPropertiesDialog::tr(s);
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
    QString _ret = self->defaultName();
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
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        self->accept();
    } else {
        ((VirtualKPropertiesDialog*)self)->accept();
    }
}

void KPropertiesDialog_Reject(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        self->reject();
    } else {
        ((VirtualKPropertiesDialog*)self)->reject();
    }
}

void KPropertiesDialog_PropertiesClosed(KPropertiesDialog* self) {
    self->propertiesClosed();
}

void KPropertiesDialog_Connect_PropertiesClosed(KPropertiesDialog* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialog*) = reinterpret_cast<void (*)(KPropertiesDialog*)>(slot);
    KPropertiesDialog::connect(self, &KPropertiesDialog::propertiesClosed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KPropertiesDialog_Applied(KPropertiesDialog* self) {
    self->applied();
}

void KPropertiesDialog_Connect_Applied(KPropertiesDialog* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialog*) = reinterpret_cast<void (*)(KPropertiesDialog*)>(slot);
    KPropertiesDialog::connect(self, &KPropertiesDialog::applied, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KPropertiesDialog_Canceled(KPropertiesDialog* self) {
    self->canceled();
}

void KPropertiesDialog_Connect_Canceled(KPropertiesDialog* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialog*) = reinterpret_cast<void (*)(KPropertiesDialog*)>(slot);
    KPropertiesDialog::connect(self, &KPropertiesDialog::canceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KPropertiesDialog_SaveAs(KPropertiesDialog* self, const QUrl* oldUrl, QUrl* newUrl) {
    self->saveAs(*oldUrl, *newUrl);
}

void KPropertiesDialog_Connect_SaveAs(KPropertiesDialog* self, intptr_t slot) {
    void (*slotFunc)(KPropertiesDialog*, QUrl*, QUrl*) = reinterpret_cast<void (*)(KPropertiesDialog*, QUrl*, QUrl*)>(slot);
    KPropertiesDialog::connect(self, &KPropertiesDialog::saveAs, [self, slotFunc](const QUrl& oldUrl, QUrl& newUrl) {
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
    QString _ret = KPropertiesDialog::tr(s, c);
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
    QString _ret = KPropertiesDialog::tr(s, c, static_cast<int>(n));
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
int KPropertiesDialog_QBaseMetacall(KPropertiesDialog* self, int param1, int param2, void** param3) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Metacall_IsBase(true);
        return vkpropertiesdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPropertiesDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMetacall(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Metacall_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseAccept(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Accept_IsBase(true);
        vkpropertiesdialog->accept();
    } else {
        self->KPropertiesDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnAccept(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Accept_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Accept_Callback>(slot));
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseReject(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Reject_IsBase(true);
        vkpropertiesdialog->reject();
    } else {
        self->KPropertiesDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnReject(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Reject_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_SetVisible(KPropertiesDialog* self, bool visible) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setVisible(visible);
    } else {
        self->KPropertiesDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseSetVisible(KPropertiesDialog* self, bool visible) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SetVisible_IsBase(true);
        vkpropertiesdialog->setVisible(visible);
    } else {
        self->KPropertiesDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSetVisible(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SetVisible_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPropertiesDialog_SizeHint(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return new QSize(vkpropertiesdialog->sizeHint());
    } else {
        return new QSize(((VirtualKPropertiesDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPropertiesDialog_QBaseSizeHint(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SizeHint_IsBase(true);
        return new QSize(vkpropertiesdialog->sizeHint());
    } else {
        return new QSize(((VirtualKPropertiesDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSizeHint(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SizeHint_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPropertiesDialog_MinimumSizeHint(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return new QSize(vkpropertiesdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPropertiesDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPropertiesDialog_QBaseMinimumSizeHint(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkpropertiesdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPropertiesDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMinimumSizeHint(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_Open(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->open();
    } else {
        self->KPropertiesDialog::open();
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseOpen(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Open_IsBase(true);
        vkpropertiesdialog->open();
    } else {
        self->KPropertiesDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnOpen(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Open_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialog_Exec(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->exec();
    } else {
        return self->KPropertiesDialog::exec();
    }
}

// Base class handler implementation
int KPropertiesDialog_QBaseExec(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Exec_IsBase(true);
        return vkpropertiesdialog->exec();
    } else {
        return self->KPropertiesDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnExec(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Exec_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_Done(KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->done(static_cast<int>(param1));
    } else {
        self->KPropertiesDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseDone(KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Done_IsBase(true);
        vkpropertiesdialog->done(static_cast<int>(param1));
    } else {
        self->KPropertiesDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDone(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Done_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_KeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->keyPressEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseKeyPressEvent(KPropertiesDialog* self, QKeyEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_KeyPressEvent_IsBase(true);
        vkpropertiesdialog->keyPressEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnKeyPressEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_CloseEvent(KPropertiesDialog* self, QCloseEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->closeEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseCloseEvent(KPropertiesDialog* self, QCloseEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_CloseEvent_IsBase(true);
        vkpropertiesdialog->closeEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnCloseEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_CloseEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_ShowEvent(KPropertiesDialog* self, QShowEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->showEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseShowEvent(KPropertiesDialog* self, QShowEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ShowEvent_IsBase(true);
        vkpropertiesdialog->showEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnShowEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ShowEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_ResizeEvent(KPropertiesDialog* self, QResizeEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->resizeEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseResizeEvent(KPropertiesDialog* self, QResizeEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ResizeEvent_IsBase(true);
        vkpropertiesdialog->resizeEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnResizeEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_ContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseContextMenuEvent(KPropertiesDialog* self, QContextMenuEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ContextMenuEvent_IsBase(true);
        vkpropertiesdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnContextMenuEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialog_EventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKPropertiesDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KPropertiesDialog_QBaseEventFilter(KPropertiesDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_EventFilter_IsBase(true);
        return vkpropertiesdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKPropertiesDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnEventFilter(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_EventFilter_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialog_DevType(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->devType();
    } else {
        return self->KPropertiesDialog::devType();
    }
}

// Base class handler implementation
int KPropertiesDialog_QBaseDevType(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DevType_IsBase(true);
        return vkpropertiesdialog->devType();
    } else {
        return self->KPropertiesDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDevType(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DevType_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialog_HeightForWidth(const KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPropertiesDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPropertiesDialog_QBaseHeightForWidth(const KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_HeightForWidth_IsBase(true);
        return vkpropertiesdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPropertiesDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnHeightForWidth(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialog_HasHeightForWidth(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->hasHeightForWidth();
    } else {
        return self->KPropertiesDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPropertiesDialog_QBaseHasHeightForWidth(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_HasHeightForWidth_IsBase(true);
        return vkpropertiesdialog->hasHeightForWidth();
    } else {
        return self->KPropertiesDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnHasHeightForWidth(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPropertiesDialog_PaintEngine(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->paintEngine();
    } else {
        return self->KPropertiesDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPropertiesDialog_QBasePaintEngine(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_PaintEngine_IsBase(true);
        return vkpropertiesdialog->paintEngine();
    } else {
        return self->KPropertiesDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnPaintEngine(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_PaintEngine_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialog_Event(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->event(event);
    } else {
        return ((VirtualKPropertiesDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KPropertiesDialog_QBaseEvent(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Event_IsBase(true);
        return vkpropertiesdialog->event(event);
    } else {
        return ((VirtualKPropertiesDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Event_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_MousePressEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->mousePressEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseMousePressEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MousePressEvent_IsBase(true);
        vkpropertiesdialog->mousePressEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMousePressEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_MouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseMouseReleaseEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MouseReleaseEvent_IsBase(true);
        vkpropertiesdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMouseReleaseEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_MouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseMouseDoubleClickEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MouseDoubleClickEvent_IsBase(true);
        vkpropertiesdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMouseDoubleClickEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_MouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseMouseMoveEvent(KPropertiesDialog* self, QMouseEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MouseMoveEvent_IsBase(true);
        vkpropertiesdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMouseMoveEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_WheelEvent(KPropertiesDialog* self, QWheelEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->wheelEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseWheelEvent(KPropertiesDialog* self, QWheelEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_WheelEvent_IsBase(true);
        vkpropertiesdialog->wheelEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnWheelEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_WheelEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_KeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseKeyReleaseEvent(KPropertiesDialog* self, QKeyEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_KeyReleaseEvent_IsBase(true);
        vkpropertiesdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnKeyReleaseEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_FocusInEvent(KPropertiesDialog* self, QFocusEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->focusInEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseFocusInEvent(KPropertiesDialog* self, QFocusEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusInEvent_IsBase(true);
        vkpropertiesdialog->focusInEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnFocusInEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_FocusOutEvent(KPropertiesDialog* self, QFocusEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->focusOutEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseFocusOutEvent(KPropertiesDialog* self, QFocusEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusOutEvent_IsBase(true);
        vkpropertiesdialog->focusOutEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnFocusOutEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_EnterEvent(KPropertiesDialog* self, QEnterEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->enterEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseEnterEvent(KPropertiesDialog* self, QEnterEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_EnterEvent_IsBase(true);
        vkpropertiesdialog->enterEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnEnterEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_EnterEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_LeaveEvent(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->leaveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseLeaveEvent(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_LeaveEvent_IsBase(true);
        vkpropertiesdialog->leaveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnLeaveEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_PaintEvent(KPropertiesDialog* self, QPaintEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->paintEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBasePaintEvent(KPropertiesDialog* self, QPaintEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_PaintEvent_IsBase(true);
        vkpropertiesdialog->paintEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnPaintEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_PaintEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_MoveEvent(KPropertiesDialog* self, QMoveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->moveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseMoveEvent(KPropertiesDialog* self, QMoveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MoveEvent_IsBase(true);
        vkpropertiesdialog->moveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMoveEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_MoveEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_TabletEvent(KPropertiesDialog* self, QTabletEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->tabletEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseTabletEvent(KPropertiesDialog* self, QTabletEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_TabletEvent_IsBase(true);
        vkpropertiesdialog->tabletEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnTabletEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_TabletEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_ActionEvent(KPropertiesDialog* self, QActionEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->actionEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseActionEvent(KPropertiesDialog* self, QActionEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ActionEvent_IsBase(true);
        vkpropertiesdialog->actionEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnActionEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ActionEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_DragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->dragEnterEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseDragEnterEvent(KPropertiesDialog* self, QDragEnterEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DragEnterEvent_IsBase(true);
        vkpropertiesdialog->dragEnterEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDragEnterEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_DragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->dragMoveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseDragMoveEvent(KPropertiesDialog* self, QDragMoveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DragMoveEvent_IsBase(true);
        vkpropertiesdialog->dragMoveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDragMoveEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_DragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseDragLeaveEvent(KPropertiesDialog* self, QDragLeaveEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DragLeaveEvent_IsBase(true);
        vkpropertiesdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDragLeaveEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_DropEvent(KPropertiesDialog* self, QDropEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->dropEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseDropEvent(KPropertiesDialog* self, QDropEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DropEvent_IsBase(true);
        vkpropertiesdialog->dropEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDropEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DropEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_HideEvent(KPropertiesDialog* self, QHideEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->hideEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseHideEvent(KPropertiesDialog* self, QHideEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_HideEvent_IsBase(true);
        vkpropertiesdialog->hideEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnHideEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_HideEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialog_NativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPropertiesDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPropertiesDialog_QBaseNativeEvent(KPropertiesDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_NativeEvent_IsBase(true);
        return vkpropertiesdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPropertiesDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnNativeEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_NativeEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_ChangeEvent(KPropertiesDialog* self, QEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->changeEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseChangeEvent(KPropertiesDialog* self, QEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ChangeEvent_IsBase(true);
        vkpropertiesdialog->changeEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnChangeEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialog_Metric(const KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPropertiesDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPropertiesDialog_QBaseMetric(const KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Metric_IsBase(true);
        return vkpropertiesdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPropertiesDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnMetric(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Metric_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_InitPainter(const KPropertiesDialog* self, QPainter* painter) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->initPainter(painter);
    } else {
        ((VirtualKPropertiesDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseInitPainter(const KPropertiesDialog* self, QPainter* painter) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_InitPainter_IsBase(true);
        vkpropertiesdialog->initPainter(painter);
    } else {
        ((VirtualKPropertiesDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnInitPainter(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_InitPainter_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPropertiesDialog_Redirected(const KPropertiesDialog* self, QPoint* offset) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->redirected(offset);
    } else {
        return ((VirtualKPropertiesDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPropertiesDialog_QBaseRedirected(const KPropertiesDialog* self, QPoint* offset) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Redirected_IsBase(true);
        return vkpropertiesdialog->redirected(offset);
    } else {
        return ((VirtualKPropertiesDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnRedirected(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Redirected_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPropertiesDialog_SharedPainter(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->sharedPainter();
    } else {
        return ((VirtualKPropertiesDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPropertiesDialog_QBaseSharedPainter(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SharedPainter_IsBase(true);
        return vkpropertiesdialog->sharedPainter();
    } else {
        return ((VirtualKPropertiesDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSharedPainter(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SharedPainter_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_InputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseInputMethodEvent(KPropertiesDialog* self, QInputMethodEvent* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_InputMethodEvent_IsBase(true);
        vkpropertiesdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnInputMethodEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPropertiesDialog_InputMethodQuery(const KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return new QVariant(vkpropertiesdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPropertiesDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPropertiesDialog_QBaseInputMethodQuery(const KPropertiesDialog* self, int param1) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkpropertiesdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPropertiesDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnInputMethodQuery(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialog_FocusNextPrevChild(KPropertiesDialog* self, bool next) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKPropertiesDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPropertiesDialog_QBaseFocusNextPrevChild(KPropertiesDialog* self, bool next) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusNextPrevChild_IsBase(true);
        return vkpropertiesdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKPropertiesDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnFocusNextPrevChild(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_TimerEvent(KPropertiesDialog* self, QTimerEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->timerEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseTimerEvent(KPropertiesDialog* self, QTimerEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_TimerEvent_IsBase(true);
        vkpropertiesdialog->timerEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnTimerEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_TimerEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_ChildEvent(KPropertiesDialog* self, QChildEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->childEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseChildEvent(KPropertiesDialog* self, QChildEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ChildEvent_IsBase(true);
        vkpropertiesdialog->childEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnChildEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ChildEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_CustomEvent(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->customEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseCustomEvent(KPropertiesDialog* self, QEvent* event) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_CustomEvent_IsBase(true);
        vkpropertiesdialog->customEvent(event);
    } else {
        ((VirtualKPropertiesDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnCustomEvent(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_CustomEvent_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_ConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->connectNotify(*signal);
    } else {
        ((VirtualKPropertiesDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseConnectNotify(KPropertiesDialog* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ConnectNotify_IsBase(true);
        vkpropertiesdialog->connectNotify(*signal);
    } else {
        ((VirtualKPropertiesDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnConnectNotify(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_DisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKPropertiesDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseDisconnectNotify(KPropertiesDialog* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DisconnectNotify_IsBase(true);
        vkpropertiesdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKPropertiesDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDisconnectNotify(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
KPageWidget* KPropertiesDialog_PageWidget(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->pageWidget();
    } else {
        return ((VirtualKPropertiesDialog*)self)->pageWidget();
    }
}

// Base class handler implementation
KPageWidget* KPropertiesDialog_QBasePageWidget(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_PageWidget_IsBase(true);
        return vkpropertiesdialog->pageWidget();
    } else {
        return ((VirtualKPropertiesDialog*)self)->pageWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnPageWidget(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_PageWidget_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_PageWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_SetPageWidget(KPropertiesDialog* self, KPageWidget* widget) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setPageWidget(widget);
    } else {
        ((VirtualKPropertiesDialog*)self)->setPageWidget(widget);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseSetPageWidget(KPropertiesDialog* self, KPageWidget* widget) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SetPageWidget_IsBase(true);
        vkpropertiesdialog->setPageWidget(widget);
    } else {
        ((VirtualKPropertiesDialog*)self)->setPageWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSetPageWidget(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SetPageWidget_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SetPageWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QDialogButtonBox* KPropertiesDialog_ButtonBox(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->buttonBox();
    } else {
        return ((VirtualKPropertiesDialog*)self)->buttonBox();
    }
}

// Base class handler implementation
QDialogButtonBox* KPropertiesDialog_QBaseButtonBox(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ButtonBox_IsBase(true);
        return vkpropertiesdialog->buttonBox();
    } else {
        return ((VirtualKPropertiesDialog*)self)->buttonBox();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnButtonBox(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_ButtonBox_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_ButtonBox_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_SetButtonBox(KPropertiesDialog* self, QDialogButtonBox* box) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setButtonBox(box);
    } else {
        ((VirtualKPropertiesDialog*)self)->setButtonBox(box);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseSetButtonBox(KPropertiesDialog* self, QDialogButtonBox* box) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SetButtonBox_IsBase(true);
        vkpropertiesdialog->setButtonBox(box);
    } else {
        ((VirtualKPropertiesDialog*)self)->setButtonBox(box);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSetButtonBox(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SetButtonBox_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SetButtonBox_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_AdjustPosition(KPropertiesDialog* self, QWidget* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->adjustPosition(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseAdjustPosition(KPropertiesDialog* self, QWidget* param1) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_AdjustPosition_IsBase(true);
        vkpropertiesdialog->adjustPosition(param1);
    } else {
        ((VirtualKPropertiesDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnAdjustPosition(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_UpdateMicroFocus(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->updateMicroFocus();
    } else {
        ((VirtualKPropertiesDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseUpdateMicroFocus(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_UpdateMicroFocus_IsBase(true);
        vkpropertiesdialog->updateMicroFocus();
    } else {
        ((VirtualKPropertiesDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnUpdateMicroFocus(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_Create(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->create();
    } else {
        ((VirtualKPropertiesDialog*)self)->create();
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseCreate(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Create_IsBase(true);
        vkpropertiesdialog->create();
    } else {
        ((VirtualKPropertiesDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnCreate(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Create_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPropertiesDialog_Destroy(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->destroy();
    } else {
        ((VirtualKPropertiesDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KPropertiesDialog_QBaseDestroy(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Destroy_IsBase(true);
        vkpropertiesdialog->destroy();
    } else {
        ((VirtualKPropertiesDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnDestroy(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Destroy_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialog_FocusNextChild(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->focusNextChild();
    } else {
        return ((VirtualKPropertiesDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPropertiesDialog_QBaseFocusNextChild(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusNextChild_IsBase(true);
        return vkpropertiesdialog->focusNextChild();
    } else {
        return ((VirtualKPropertiesDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnFocusNextChild(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialog_FocusPreviousChild(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->focusPreviousChild();
    } else {
        return ((VirtualKPropertiesDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPropertiesDialog_QBaseFocusPreviousChild(KPropertiesDialog* self) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusPreviousChild_IsBase(true);
        return vkpropertiesdialog->focusPreviousChild();
    } else {
        return ((VirtualKPropertiesDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnFocusPreviousChild(KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = dynamic_cast<VirtualKPropertiesDialog*>(self);
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPropertiesDialog_Sender(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->sender();
    } else {
        return ((VirtualKPropertiesDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPropertiesDialog_QBaseSender(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Sender_IsBase(true);
        return vkpropertiesdialog->sender();
    } else {
        return ((VirtualKPropertiesDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSender(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Sender_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialog_SenderSignalIndex(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->senderSignalIndex();
    } else {
        return ((VirtualKPropertiesDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPropertiesDialog_QBaseSenderSignalIndex(const KPropertiesDialog* self) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SenderSignalIndex_IsBase(true);
        return vkpropertiesdialog->senderSignalIndex();
    } else {
        return ((VirtualKPropertiesDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnSenderSignalIndex(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPropertiesDialog_Receivers(const KPropertiesDialog* self, const char* signal) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->receivers(signal);
    } else {
        return ((VirtualKPropertiesDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPropertiesDialog_QBaseReceivers(const KPropertiesDialog* self, const char* signal) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Receivers_IsBase(true);
        return vkpropertiesdialog->receivers(signal);
    } else {
        return ((VirtualKPropertiesDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnReceivers(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_Receivers_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPropertiesDialog_IsSignalConnected(const KPropertiesDialog* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKPropertiesDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPropertiesDialog_QBaseIsSignalConnected(const KPropertiesDialog* self, const QMetaMethod* signal) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_IsSignalConnected_IsBase(true);
        return vkpropertiesdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKPropertiesDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnIsSignalConnected(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPropertiesDialog_GetDecodedMetricF(const KPropertiesDialog* self, int metricA, int metricB) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        return vkpropertiesdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPropertiesDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPropertiesDialog_QBaseGetDecodedMetricF(const KPropertiesDialog* self, int metricA, int metricB) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_GetDecodedMetricF_IsBase(true);
        return vkpropertiesdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPropertiesDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPropertiesDialog_OnGetDecodedMetricF(const KPropertiesDialog* self, intptr_t slot) {
    auto* vkpropertiesdialog = const_cast<VirtualKPropertiesDialog*>(dynamic_cast<const VirtualKPropertiesDialog*>(self));
    if (vkpropertiesdialog && vkpropertiesdialog->isVirtualKPropertiesDialog) {
        vkpropertiesdialog->setKPropertiesDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPropertiesDialog::KPropertiesDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KPropertiesDialog_Delete(KPropertiesDialog* self) {
    delete self;
}
