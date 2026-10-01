#include <KSslInfoDialog>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
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
#include <QSslCertificate>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ksslinfodialog.h>
#include "libksslinfodialog.h"
#include "libksslinfodialog.hxx"

KSslInfoDialog* KSslInfoDialog_new(QWidget* parent) {
    return new VirtualKSslInfoDialog(parent);
}

KSslInfoDialog* KSslInfoDialog_new2() {
    return new VirtualKSslInfoDialog();
}

QMetaObject* KSslInfoDialog_MetaObject(const KSslInfoDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSslInfoDialog_Metacast(KSslInfoDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSslInfoDialog_Metacall(KSslInfoDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSslInfoDialog_Tr(const char* s) {
    auto _ret = KSslInfoDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSslInfoDialog_SetSslInfo(KSslInfoDialog* self, const libqt_list /* of QSslCertificate* */ certificateChain, const libqt_string ip, const libqt_string host, const libqt_string sslProtocol, const libqt_string cipher, int usedBits, int bits, const libqt_list /* of libqt_list of int */ validationErrors) {
    QList<QSslCertificate> certificateChain_QList;
    certificateChain_QList.reserve(certificateChain.len);
    QSslCertificate** certificateChain_arr = static_cast<QSslCertificate**>(certificateChain.data);
    for (size_t i = 0; i < certificateChain.len; ++i) {
        certificateChain_QList.push_back(*(certificateChain_arr[i]));
    }
    QString ip_QString = QString::fromUtf8(ip.data, ip.len);
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString sslProtocol_QString = QString::fromUtf8(sslProtocol.data, sslProtocol.len);
    QString cipher_QString = QString::fromUtf8(cipher.data, cipher.len);
    QList<QList<QSslError::SslError>> validationErrors_QList;
    validationErrors_QList.reserve(validationErrors.len);
    libqt_list /* of int */* validationErrors_arr = static_cast<libqt_list /* of int */*>(validationErrors.data);
    for (size_t i = 0; i < validationErrors.len; ++i) {
        QList<QSslError::SslError> validationErrors_arr_i_QList;
        validationErrors_arr_i_QList.reserve(validationErrors_arr[i].len);
        int* validationErrors_arr_i_arr = static_cast<int*>(validationErrors_arr[i].data);
        for (size_t j = 0; j < validationErrors_arr[i].len; ++j) {
            validationErrors_arr_i_QList.push_back(static_cast<QSslError::SslError>(validationErrors_arr_i_arr[j]));
        }
        validationErrors_QList.push_back(validationErrors_arr_i_QList);
    }
    self->setSslInfo(certificateChain_QList, ip_QString, host_QString, sslProtocol_QString, cipher_QString, static_cast<int>(usedBits), static_cast<int>(bits), validationErrors_QList);
}

void KSslInfoDialog_SetMainPartEncrypted(KSslInfoDialog* self, bool mainPartEncrypted) {
    self->setMainPartEncrypted(mainPartEncrypted);
}

void KSslInfoDialog_SetAuxiliaryPartsEncrypted(KSslInfoDialog* self, bool auxiliaryPartsEncrypted) {
    self->setAuxiliaryPartsEncrypted(auxiliaryPartsEncrypted);
}

libqt_list /* of libqt_list of int */ KSslInfoDialog_CertificateErrorsFromString(const libqt_string errorsString) {
    QString errorsString_QString = QString::fromUtf8(errorsString.data, errorsString.len);
    QList<QList<QSslError::SslError>> _ret = KSslInfoDialog::certificateErrorsFromString(errorsString_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_list /* of int */* _arr = static_cast<libqt_list /* of int */*>(malloc(sizeof(libqt_list /* of int */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        const QList<QSslError::SslError>& _lv_ret = _ret[i];
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _lv_arr = static_cast<int*>(malloc(sizeof(int) * (_lv_ret.size())));
        for (qsizetype j = 0; j < _lv_ret.size(); ++j) {
            _lv_arr[j] = static_cast<int>(_lv_ret[j]);
        }
        libqt_list _lv_out;
        _lv_out.len = _lv_ret.size();
        _lv_out.data = static_cast<void*>(_lv_arr);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KSslInfoDialog_Tr2(const char* s, const char* c) {
    auto _ret = KSslInfoDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSslInfoDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSslInfoDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSslInfoDialog_SuperMetaObject(const KSslInfoDialog* self) {
    return (QMetaObject*)self->KSslInfoDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMetaObject(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_metaobject_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSslInfoDialog_SuperMetacast(KSslInfoDialog* self, const char* param1) {
    return self->KSslInfoDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMetacast(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_metacast_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSslInfoDialog_SuperMetacall(KSslInfoDialog* self, int param1, int param2, void** param3) {
    return self->KSslInfoDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMetacall(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_metacall_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_SetVisible(KSslInfoDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KSslInfoDialog_SuperSetVisible(KSslInfoDialog* self, bool visible) {
    self->KSslInfoDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnSetVisible(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_setvisible_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KSslInfoDialog_SizeHint(const KSslInfoDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KSslInfoDialog_SuperSizeHint(const KSslInfoDialog* self) {
    return new QSize(self->KSslInfoDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnSizeHint(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_sizehint_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KSslInfoDialog_MinimumSizeHint(const KSslInfoDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KSslInfoDialog_SuperMinimumSizeHint(const KSslInfoDialog* self) {
    return new QSize(self->KSslInfoDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMinimumSizeHint(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_minimumsizehint_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_Open(KSslInfoDialog* self) {
    self->open();
}

// Base class handler implementation
void KSslInfoDialog_SuperOpen(KSslInfoDialog* self) {
    self->KSslInfoDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnOpen(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_open_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KSslInfoDialog_Exec(KSslInfoDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KSslInfoDialog_SuperExec(KSslInfoDialog* self) {
    return self->KSslInfoDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnExec(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_exec_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_Done(KSslInfoDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KSslInfoDialog_SuperDone(KSslInfoDialog* self, int param1) {
    self->KSslInfoDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDone(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_done_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_Accept(KSslInfoDialog* self) {
    self->accept();
}

// Base class handler implementation
void KSslInfoDialog_SuperAccept(KSslInfoDialog* self) {
    self->KSslInfoDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnAccept(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_accept_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_Reject(KSslInfoDialog* self) {
    self->reject();
}

// Base class handler implementation
void KSslInfoDialog_SuperReject(KSslInfoDialog* self) {
    self->KSslInfoDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnReject(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_reject_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_KeyPressEvent(KSslInfoDialog* self, QKeyEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperKeyPressEvent(KSslInfoDialog* self, QKeyEvent* param1) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnKeyPressEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_keypressevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_CloseEvent(KSslInfoDialog* self, QCloseEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperCloseEvent(KSslInfoDialog* self, QCloseEvent* param1) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnCloseEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_closeevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_ShowEvent(KSslInfoDialog* self, QShowEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperShowEvent(KSslInfoDialog* self, QShowEvent* param1) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnShowEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_showevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_ResizeEvent(KSslInfoDialog* self, QResizeEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperResizeEvent(KSslInfoDialog* self, QResizeEvent* param1) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnResizeEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_resizeevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_ContextMenuEvent(KSslInfoDialog* self, QContextMenuEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperContextMenuEvent(KSslInfoDialog* self, QContextMenuEvent* param1) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnContextMenuEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_contextmenuevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSslInfoDialog_EventFilter(KSslInfoDialog* self, QObject* param1, QEvent* param2) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        return vksslinfodialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSslInfoDialog_SuperEventFilter(KSslInfoDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        return vksslinfodialog->KSslInfoDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnEventFilter(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_eventfilter_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KSslInfoDialog_DevType(const KSslInfoDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KSslInfoDialog_SuperDevType(const KSslInfoDialog* self) {
    return self->KSslInfoDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDevType(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_devtype_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KSslInfoDialog_HeightForWidth(const KSslInfoDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KSslInfoDialog_SuperHeightForWidth(const KSslInfoDialog* self, int param1) {
    return self->KSslInfoDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnHeightForWidth(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_heightforwidth_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KSslInfoDialog_HasHeightForWidth(const KSslInfoDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KSslInfoDialog_SuperHasHeightForWidth(const KSslInfoDialog* self) {
    return self->KSslInfoDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnHasHeightForWidth(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_hasheightforwidth_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KSslInfoDialog_PaintEngine(const KSslInfoDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KSslInfoDialog_SuperPaintEngine(const KSslInfoDialog* self) {
    return self->KSslInfoDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnPaintEngine(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_paintengine_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KSslInfoDialog_Event(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        return vksslinfodialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSslInfoDialog_SuperEvent(KSslInfoDialog* self, QEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        return vksslinfodialog->KSslInfoDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_event_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_MousePressEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperMousePressEvent(KSslInfoDialog* self, QMouseEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMousePressEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_mousepressevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_MouseReleaseEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperMouseReleaseEvent(KSslInfoDialog* self, QMouseEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMouseReleaseEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_mousereleaseevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_MouseDoubleClickEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperMouseDoubleClickEvent(KSslInfoDialog* self, QMouseEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMouseDoubleClickEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_MouseMoveEvent(KSslInfoDialog* self, QMouseEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperMouseMoveEvent(KSslInfoDialog* self, QMouseEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMouseMoveEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_mousemoveevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_WheelEvent(KSslInfoDialog* self, QWheelEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperWheelEvent(KSslInfoDialog* self, QWheelEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnWheelEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_wheelevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_KeyReleaseEvent(KSslInfoDialog* self, QKeyEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperKeyReleaseEvent(KSslInfoDialog* self, QKeyEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnKeyReleaseEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_keyreleaseevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_FocusInEvent(KSslInfoDialog* self, QFocusEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperFocusInEvent(KSslInfoDialog* self, QFocusEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnFocusInEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_focusinevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_FocusOutEvent(KSslInfoDialog* self, QFocusEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperFocusOutEvent(KSslInfoDialog* self, QFocusEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnFocusOutEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_focusoutevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_EnterEvent(KSslInfoDialog* self, QEnterEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperEnterEvent(KSslInfoDialog* self, QEnterEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnEnterEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_enterevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_LeaveEvent(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperLeaveEvent(KSslInfoDialog* self, QEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnLeaveEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_leaveevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_PaintEvent(KSslInfoDialog* self, QPaintEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperPaintEvent(KSslInfoDialog* self, QPaintEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnPaintEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_paintevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_MoveEvent(KSslInfoDialog* self, QMoveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperMoveEvent(KSslInfoDialog* self, QMoveEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMoveEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_moveevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_TabletEvent(KSslInfoDialog* self, QTabletEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperTabletEvent(KSslInfoDialog* self, QTabletEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnTabletEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_tabletevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_ActionEvent(KSslInfoDialog* self, QActionEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperActionEvent(KSslInfoDialog* self, QActionEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnActionEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_actionevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_DragEnterEvent(KSslInfoDialog* self, QDragEnterEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperDragEnterEvent(KSslInfoDialog* self, QDragEnterEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDragEnterEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_dragenterevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_DragMoveEvent(KSslInfoDialog* self, QDragMoveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperDragMoveEvent(KSslInfoDialog* self, QDragMoveEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDragMoveEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_dragmoveevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_DragLeaveEvent(KSslInfoDialog* self, QDragLeaveEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperDragLeaveEvent(KSslInfoDialog* self, QDragLeaveEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDragLeaveEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_dragleaveevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_DropEvent(KSslInfoDialog* self, QDropEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperDropEvent(KSslInfoDialog* self, QDropEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDropEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_dropevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_HideEvent(KSslInfoDialog* self, QHideEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperHideEvent(KSslInfoDialog* self, QHideEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnHideEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_hideevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSslInfoDialog_NativeEvent(KSslInfoDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        return vksslinfodialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSslInfoDialog_SuperNativeEvent(KSslInfoDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        return vksslinfodialog->KSslInfoDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnNativeEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_nativeevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_ChangeEvent(KSslInfoDialog* self, QEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperChangeEvent(KSslInfoDialog* self, QEvent* param1) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnChangeEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_changeevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KSslInfoDialog_Metric(const KSslInfoDialog* self, int param1) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog) {
        return vksslinfodialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KSslInfoDialog_SuperMetric(const KSslInfoDialog* self, int param1) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        return vksslinfodialog->KSslInfoDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnMetric(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_metric_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_InitPainter(const KSslInfoDialog* self, QPainter* painter) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog) {
        vksslinfodialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperInitPainter(const KSslInfoDialog* self, QPainter* painter) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        vksslinfodialog->KSslInfoDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnInitPainter(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_initpainter_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KSslInfoDialog_Redirected(const KSslInfoDialog* self, QPoint* offset) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog) {
        return vksslinfodialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KSslInfoDialog_SuperRedirected(const KSslInfoDialog* self, QPoint* offset) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        return vksslinfodialog->KSslInfoDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnRedirected(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_redirected_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KSslInfoDialog_SharedPainter(const KSslInfoDialog* self) {
    auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self));
    if (vksslinfodialog) {
        return vksslinfodialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KSslInfoDialog_SuperSharedPainter(const KSslInfoDialog* self) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        return vksslinfodialog->KSslInfoDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnSharedPainter(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_sharedpainter_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_InputMethodEvent(KSslInfoDialog* self, QInputMethodEvent* param1) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperInputMethodEvent(KSslInfoDialog* self, QInputMethodEvent* param1) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnInputMethodEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_inputmethodevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KSslInfoDialog_InputMethodQuery(const KSslInfoDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KSslInfoDialog_SuperInputMethodQuery(const KSslInfoDialog* self, int param1) {
    return new QVariant(self->KSslInfoDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnInputMethodQuery(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self)))
        vksslinfodialog->ksslinfodialog_inputmethodquery_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KSslInfoDialog_FocusNextPrevChild(KSslInfoDialog* self, bool next) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        return vksslinfodialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSslInfoDialog_SuperFocusNextPrevChild(KSslInfoDialog* self, bool next) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        return vksslinfodialog->KSslInfoDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnFocusNextPrevChild(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_focusnextprevchild_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_TimerEvent(KSslInfoDialog* self, QTimerEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperTimerEvent(KSslInfoDialog* self, QTimerEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnTimerEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_timerevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_ChildEvent(KSslInfoDialog* self, QChildEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperChildEvent(KSslInfoDialog* self, QChildEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnChildEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_childevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_CustomEvent(KSslInfoDialog* self, QEvent* event) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperCustomEvent(KSslInfoDialog* self, QEvent* event) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnCustomEvent(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_customevent_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_ConnectNotify(KSslInfoDialog* self, const QMetaMethod* signal) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperConnectNotify(KSslInfoDialog* self, const QMetaMethod* signal) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnConnectNotify(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_connectnotify_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSslInfoDialog_DisconnectNotify(KSslInfoDialog* self, const QMetaMethod* signal) {
    auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self);
    if (vksslinfodialog) {
        vksslinfodialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSslInfoDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslInfoDialog_SuperDisconnectNotify(KSslInfoDialog* self, const QMetaMethod* signal) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->KSslInfoDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSslInfoDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslInfoDialog_OnDisconnectNotify(KSslInfoDialog* self, intptr_t slot) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self))
        vksslinfodialog->ksslinfodialog_disconnectnotify_callback = reinterpret_cast<VirtualKSslInfoDialog::KSslInfoDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSslInfoDialog_AdjustPosition(KSslInfoDialog* self, QWidget* param1) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->VirtualKSslInfoDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KSslInfoDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KSslInfoDialog_UpdateMicroFocus(KSslInfoDialog* self) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->VirtualKSslInfoDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KSslInfoDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KSslInfoDialog_Create(KSslInfoDialog* self) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->VirtualKSslInfoDialog::create();
    } else
        qFatal("Error: Protected method KSslInfoDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KSslInfoDialog_Destroy(KSslInfoDialog* self) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        vksslinfodialog->VirtualKSslInfoDialog::destroy();
    } else
        qFatal("Error: Protected method KSslInfoDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSslInfoDialog_FocusNextChild(KSslInfoDialog* self) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        return vksslinfodialog->VirtualKSslInfoDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KSslInfoDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSslInfoDialog_FocusPreviousChild(KSslInfoDialog* self) {
    if (auto* vksslinfodialog = dynamic_cast<VirtualKSslInfoDialog*>(self)) {
        return vksslinfodialog->VirtualKSslInfoDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KSslInfoDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSslInfoDialog_Sender(const KSslInfoDialog* self) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        return vksslinfodialog->VirtualKSslInfoDialog::sender();
    } else
        qFatal("Error: Protected method KSslInfoDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSslInfoDialog_SenderSignalIndex(const KSslInfoDialog* self) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        return vksslinfodialog->VirtualKSslInfoDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSslInfoDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSslInfoDialog_Receivers(const KSslInfoDialog* self, const char* signal) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        return vksslinfodialog->VirtualKSslInfoDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KSslInfoDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSslInfoDialog_IsSignalConnected(const KSslInfoDialog* self, const QMetaMethod* signal) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        return vksslinfodialog->VirtualKSslInfoDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSslInfoDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KSslInfoDialog_GetDecodedMetricF(const KSslInfoDialog* self, int metricA, int metricB) {
    if (auto* vksslinfodialog = const_cast<VirtualKSslInfoDialog*>(dynamic_cast<const VirtualKSslInfoDialog*>(self))) {
        return vksslinfodialog->VirtualKSslInfoDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KSslInfoDialog::getDecodedMetricF called without a directly constructed type");
}

void KSslInfoDialog_Delete(KSslInfoDialog* self) {
    delete self;
}
