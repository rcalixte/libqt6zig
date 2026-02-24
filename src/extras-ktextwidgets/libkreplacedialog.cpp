#include <KFindDialog>
#include <KReplaceDialog>
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
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kreplacedialog.h>
#include "libkreplacedialog.h"
#include "libkreplacedialog.hxx"

KReplaceDialog* KReplaceDialog_new(QWidget* parent) {
    return new VirtualKReplaceDialog(parent);
}

KReplaceDialog* KReplaceDialog_new2() {
    return new VirtualKReplaceDialog();
}

KReplaceDialog* KReplaceDialog_new3(QWidget* parent, long options) {
    return new VirtualKReplaceDialog(parent, static_cast<long>(options));
}

KReplaceDialog* KReplaceDialog_new4(QWidget* parent, long options, const libqt_list /* of libqt_string */ findStrings) {
    QList<QString> findStrings_QList;
    findStrings_QList.reserve(findStrings.len);
    libqt_string* findStrings_arr = static_cast<libqt_string*>(findStrings.data);
    for (size_t i = 0; i < findStrings.len; ++i) {
        QString findStrings_arr_i_QString = QString::fromUtf8(findStrings_arr[i].data, findStrings_arr[i].len);
        findStrings_QList.push_back(findStrings_arr_i_QString);
    }
    return new VirtualKReplaceDialog(parent, static_cast<long>(options), findStrings_QList);
}

KReplaceDialog* KReplaceDialog_new5(QWidget* parent, long options, const libqt_list /* of libqt_string */ findStrings, const libqt_list /* of libqt_string */ replaceStrings) {
    QList<QString> findStrings_QList;
    findStrings_QList.reserve(findStrings.len);
    libqt_string* findStrings_arr = static_cast<libqt_string*>(findStrings.data);
    for (size_t i = 0; i < findStrings.len; ++i) {
        QString findStrings_arr_i_QString = QString::fromUtf8(findStrings_arr[i].data, findStrings_arr[i].len);
        findStrings_QList.push_back(findStrings_arr_i_QString);
    }
    QList<QString> replaceStrings_QList;
    replaceStrings_QList.reserve(replaceStrings.len);
    libqt_string* replaceStrings_arr = static_cast<libqt_string*>(replaceStrings.data);
    for (size_t i = 0; i < replaceStrings.len; ++i) {
        QString replaceStrings_arr_i_QString = QString::fromUtf8(replaceStrings_arr[i].data, replaceStrings_arr[i].len);
        replaceStrings_QList.push_back(replaceStrings_arr_i_QString);
    }
    return new VirtualKReplaceDialog(parent, static_cast<long>(options), findStrings_QList, replaceStrings_QList);
}

KReplaceDialog* KReplaceDialog_new6(QWidget* parent, long options, const libqt_list /* of libqt_string */ findStrings, const libqt_list /* of libqt_string */ replaceStrings, bool hasSelection) {
    QList<QString> findStrings_QList;
    findStrings_QList.reserve(findStrings.len);
    libqt_string* findStrings_arr = static_cast<libqt_string*>(findStrings.data);
    for (size_t i = 0; i < findStrings.len; ++i) {
        QString findStrings_arr_i_QString = QString::fromUtf8(findStrings_arr[i].data, findStrings_arr[i].len);
        findStrings_QList.push_back(findStrings_arr_i_QString);
    }
    QList<QString> replaceStrings_QList;
    replaceStrings_QList.reserve(replaceStrings.len);
    libqt_string* replaceStrings_arr = static_cast<libqt_string*>(replaceStrings.data);
    for (size_t i = 0; i < replaceStrings.len; ++i) {
        QString replaceStrings_arr_i_QString = QString::fromUtf8(replaceStrings_arr[i].data, replaceStrings_arr[i].len);
        replaceStrings_QList.push_back(replaceStrings_arr_i_QString);
    }
    return new VirtualKReplaceDialog(parent, static_cast<long>(options), findStrings_QList, replaceStrings_QList, hasSelection);
}

QMetaObject* KReplaceDialog_MetaObject(const KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<const VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualKReplaceDialog*)self)->metaObject();
    }
}

void* KReplaceDialog_Metacast(KReplaceDialog* self, const char* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualKReplaceDialog*)self)->qt_metacast(param1);
    }
}

int KReplaceDialog_Metacall(KReplaceDialog* self, int param1, int param2, void** param3) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKReplaceDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void KReplaceDialog_SetReplacementHistory(KReplaceDialog* self, const libqt_list /* of libqt_string */ history) {
    QList<QString> history_QList;
    history_QList.reserve(history.len);
    libqt_string* history_arr = static_cast<libqt_string*>(history.data);
    for (size_t i = 0; i < history.len; ++i) {
        QString history_arr_i_QString = QString::fromUtf8(history_arr[i].data, history_arr[i].len);
        history_QList.push_back(history_arr_i_QString);
    }
    self->setReplacementHistory(history_QList);
}

libqt_list /* of libqt_string */ KReplaceDialog_ReplacementHistory(const KReplaceDialog* self) {
    QList<QString> _ret = self->replacementHistory();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

void KReplaceDialog_SetOptions(KReplaceDialog* self, long options) {
    self->setOptions(static_cast<long>(options));
}

long KReplaceDialog_Options(const KReplaceDialog* self) {
    return self->options();
}

libqt_string KReplaceDialog_Replacement(const KReplaceDialog* self) {
    QString _ret = self->replacement();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KReplaceDialog_ReplaceExtension(const KReplaceDialog* self) {
    return self->replaceExtension();
}

void KReplaceDialog_ShowEvent(KReplaceDialog* self, QShowEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->showEvent(param1);
    }
}

// Base class handler implementation
QMetaObject* KReplaceDialog_SuperMetaObject(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MetaObject_IsBase(true);
        return (QMetaObject*)vkreplacedialog->metaObject();
    } else {
        return (QMetaObject*)self->KReplaceDialog::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMetaObject(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MetaObject_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* KReplaceDialog_SuperMetacast(KReplaceDialog* self, const char* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Metacast_IsBase(true);
        return vkreplacedialog->qt_metacast(param1);
    } else {
        return self->KReplaceDialog::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMetacast(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Metacast_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int KReplaceDialog_SuperMetacall(KReplaceDialog* self, int param1, int param2, void** param3) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Metacall_IsBase(true);
        return vkreplacedialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KReplaceDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMetacall(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Metacall_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KReplaceDialog_SuperShowEvent(KReplaceDialog* self, QShowEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ShowEvent_IsBase(true);
        vkreplacedialog->showEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnShowEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ShowEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_SetVisible(KReplaceDialog* self, bool visible) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setVisible(visible);
    } else {
        self->KReplaceDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperSetVisible(KReplaceDialog* self, bool visible) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_SetVisible_IsBase(true);
        vkreplacedialog->setVisible(visible);
    } else {
        self->KReplaceDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnSetVisible(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_SetVisible_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KReplaceDialog_SizeHint(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return new QSize(vkreplacedialog->sizeHint());
    } else {
        return new QSize(((VirtualKReplaceDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KReplaceDialog_SuperSizeHint(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_SizeHint_IsBase(true);
        return new QSize(vkreplacedialog->sizeHint());
    } else {
        return new QSize(((VirtualKReplaceDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnSizeHint(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_SizeHint_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KReplaceDialog_MinimumSizeHint(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return new QSize(vkreplacedialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKReplaceDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KReplaceDialog_SuperMinimumSizeHint(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkreplacedialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKReplaceDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMinimumSizeHint(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_Open(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->open();
    } else {
        self->KReplaceDialog::open();
    }
}

// Base class handler implementation
void KReplaceDialog_SuperOpen(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Open_IsBase(true);
        vkreplacedialog->open();
    } else {
        self->KReplaceDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnOpen(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Open_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KReplaceDialog_Exec(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->exec();
    } else {
        return self->KReplaceDialog::exec();
    }
}

// Base class handler implementation
int KReplaceDialog_SuperExec(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Exec_IsBase(true);
        return vkreplacedialog->exec();
    } else {
        return self->KReplaceDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnExec(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Exec_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_Done(KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->done(static_cast<int>(param1));
    } else {
        self->KReplaceDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDone(KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Done_IsBase(true);
        vkreplacedialog->done(static_cast<int>(param1));
    } else {
        self->KReplaceDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDone(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Done_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_Accept(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->accept();
    } else {
        self->KReplaceDialog::accept();
    }
}

// Base class handler implementation
void KReplaceDialog_SuperAccept(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Accept_IsBase(true);
        vkreplacedialog->accept();
    } else {
        self->KReplaceDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnAccept(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Accept_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_Reject(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->reject();
    } else {
        self->KReplaceDialog::reject();
    }
}

// Base class handler implementation
void KReplaceDialog_SuperReject(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Reject_IsBase(true);
        vkreplacedialog->reject();
    } else {
        self->KReplaceDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnReject(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Reject_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_KeyPressEvent(KReplaceDialog* self, QKeyEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->keyPressEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperKeyPressEvent(KReplaceDialog* self, QKeyEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_KeyPressEvent_IsBase(true);
        vkreplacedialog->keyPressEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnKeyPressEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_CloseEvent(KReplaceDialog* self, QCloseEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->closeEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperCloseEvent(KReplaceDialog* self, QCloseEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_CloseEvent_IsBase(true);
        vkreplacedialog->closeEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnCloseEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_CloseEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_ResizeEvent(KReplaceDialog* self, QResizeEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->resizeEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperResizeEvent(KReplaceDialog* self, QResizeEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ResizeEvent_IsBase(true);
        vkreplacedialog->resizeEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnResizeEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_ContextMenuEvent(KReplaceDialog* self, QContextMenuEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->contextMenuEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperContextMenuEvent(KReplaceDialog* self, QContextMenuEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ContextMenuEvent_IsBase(true);
        vkreplacedialog->contextMenuEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnContextMenuEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplaceDialog_EventFilter(KReplaceDialog* self, QObject* param1, QEvent* param2) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKReplaceDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperEventFilter(KReplaceDialog* self, QObject* param1, QEvent* param2) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_EventFilter_IsBase(true);
        return vkreplacedialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKReplaceDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnEventFilter(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_EventFilter_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KReplaceDialog_DevType(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->devType();
    } else {
        return self->KReplaceDialog::devType();
    }
}

// Base class handler implementation
int KReplaceDialog_SuperDevType(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DevType_IsBase(true);
        return vkreplacedialog->devType();
    } else {
        return self->KReplaceDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDevType(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DevType_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KReplaceDialog_HeightForWidth(const KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KReplaceDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KReplaceDialog_SuperHeightForWidth(const KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_HeightForWidth_IsBase(true);
        return vkreplacedialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KReplaceDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnHeightForWidth(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplaceDialog_HasHeightForWidth(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->hasHeightForWidth();
    } else {
        return self->KReplaceDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperHasHeightForWidth(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_HasHeightForWidth_IsBase(true);
        return vkreplacedialog->hasHeightForWidth();
    } else {
        return self->KReplaceDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnHasHeightForWidth(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KReplaceDialog_PaintEngine(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->paintEngine();
    } else {
        return self->KReplaceDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KReplaceDialog_SuperPaintEngine(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_PaintEngine_IsBase(true);
        return vkreplacedialog->paintEngine();
    } else {
        return self->KReplaceDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnPaintEngine(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_PaintEngine_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplaceDialog_Event(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->event(event);
    } else {
        return ((VirtualKReplaceDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperEvent(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Event_IsBase(true);
        return vkreplacedialog->event(event);
    } else {
        return ((VirtualKReplaceDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Event_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_MousePressEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->mousePressEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMousePressEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MousePressEvent_IsBase(true);
        vkreplacedialog->mousePressEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMousePressEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_MouseReleaseEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMouseReleaseEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MouseReleaseEvent_IsBase(true);
        vkreplacedialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMouseReleaseEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_MouseDoubleClickEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMouseDoubleClickEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MouseDoubleClickEvent_IsBase(true);
        vkreplacedialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMouseDoubleClickEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_MouseMoveEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->mouseMoveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMouseMoveEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MouseMoveEvent_IsBase(true);
        vkreplacedialog->mouseMoveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMouseMoveEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_WheelEvent(KReplaceDialog* self, QWheelEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->wheelEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperWheelEvent(KReplaceDialog* self, QWheelEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_WheelEvent_IsBase(true);
        vkreplacedialog->wheelEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnWheelEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_WheelEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_KeyReleaseEvent(KReplaceDialog* self, QKeyEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->keyReleaseEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperKeyReleaseEvent(KReplaceDialog* self, QKeyEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_KeyReleaseEvent_IsBase(true);
        vkreplacedialog->keyReleaseEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnKeyReleaseEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_FocusInEvent(KReplaceDialog* self, QFocusEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->focusInEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperFocusInEvent(KReplaceDialog* self, QFocusEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusInEvent_IsBase(true);
        vkreplacedialog->focusInEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnFocusInEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_FocusOutEvent(KReplaceDialog* self, QFocusEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->focusOutEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperFocusOutEvent(KReplaceDialog* self, QFocusEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusOutEvent_IsBase(true);
        vkreplacedialog->focusOutEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnFocusOutEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_EnterEvent(KReplaceDialog* self, QEnterEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->enterEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperEnterEvent(KReplaceDialog* self, QEnterEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_EnterEvent_IsBase(true);
        vkreplacedialog->enterEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnEnterEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_EnterEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_LeaveEvent(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->leaveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperLeaveEvent(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_LeaveEvent_IsBase(true);
        vkreplacedialog->leaveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnLeaveEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_PaintEvent(KReplaceDialog* self, QPaintEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->paintEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperPaintEvent(KReplaceDialog* self, QPaintEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_PaintEvent_IsBase(true);
        vkreplacedialog->paintEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnPaintEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_PaintEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_MoveEvent(KReplaceDialog* self, QMoveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->moveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMoveEvent(KReplaceDialog* self, QMoveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MoveEvent_IsBase(true);
        vkreplacedialog->moveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMoveEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_MoveEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_TabletEvent(KReplaceDialog* self, QTabletEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->tabletEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperTabletEvent(KReplaceDialog* self, QTabletEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_TabletEvent_IsBase(true);
        vkreplacedialog->tabletEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnTabletEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_TabletEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_ActionEvent(KReplaceDialog* self, QActionEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->actionEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperActionEvent(KReplaceDialog* self, QActionEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ActionEvent_IsBase(true);
        vkreplacedialog->actionEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnActionEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ActionEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_DragEnterEvent(KReplaceDialog* self, QDragEnterEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->dragEnterEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDragEnterEvent(KReplaceDialog* self, QDragEnterEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DragEnterEvent_IsBase(true);
        vkreplacedialog->dragEnterEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDragEnterEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_DragMoveEvent(KReplaceDialog* self, QDragMoveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->dragMoveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDragMoveEvent(KReplaceDialog* self, QDragMoveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DragMoveEvent_IsBase(true);
        vkreplacedialog->dragMoveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDragMoveEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_DragLeaveEvent(KReplaceDialog* self, QDragLeaveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->dragLeaveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDragLeaveEvent(KReplaceDialog* self, QDragLeaveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DragLeaveEvent_IsBase(true);
        vkreplacedialog->dragLeaveEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDragLeaveEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_DropEvent(KReplaceDialog* self, QDropEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->dropEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDropEvent(KReplaceDialog* self, QDropEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DropEvent_IsBase(true);
        vkreplacedialog->dropEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDropEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DropEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_HideEvent(KReplaceDialog* self, QHideEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->hideEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperHideEvent(KReplaceDialog* self, QHideEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_HideEvent_IsBase(true);
        vkreplacedialog->hideEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnHideEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_HideEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplaceDialog_NativeEvent(KReplaceDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKReplaceDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperNativeEvent(KReplaceDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_NativeEvent_IsBase(true);
        return vkreplacedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKReplaceDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnNativeEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_NativeEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_ChangeEvent(KReplaceDialog* self, QEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->changeEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperChangeEvent(KReplaceDialog* self, QEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ChangeEvent_IsBase(true);
        vkreplacedialog->changeEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnChangeEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KReplaceDialog_Metric(const KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKReplaceDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KReplaceDialog_SuperMetric(const KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Metric_IsBase(true);
        return vkreplacedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKReplaceDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMetric(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Metric_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_InitPainter(const KReplaceDialog* self, QPainter* painter) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->initPainter(painter);
    } else {
        ((VirtualKReplaceDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperInitPainter(const KReplaceDialog* self, QPainter* painter) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_InitPainter_IsBase(true);
        vkreplacedialog->initPainter(painter);
    } else {
        ((VirtualKReplaceDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnInitPainter(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_InitPainter_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KReplaceDialog_Redirected(const KReplaceDialog* self, QPoint* offset) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->redirected(offset);
    } else {
        return ((VirtualKReplaceDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KReplaceDialog_SuperRedirected(const KReplaceDialog* self, QPoint* offset) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Redirected_IsBase(true);
        return vkreplacedialog->redirected(offset);
    } else {
        return ((VirtualKReplaceDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnRedirected(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Redirected_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KReplaceDialog_SharedPainter(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->sharedPainter();
    } else {
        return ((VirtualKReplaceDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KReplaceDialog_SuperSharedPainter(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_SharedPainter_IsBase(true);
        return vkreplacedialog->sharedPainter();
    } else {
        return ((VirtualKReplaceDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnSharedPainter(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_SharedPainter_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_InputMethodEvent(KReplaceDialog* self, QInputMethodEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->inputMethodEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperInputMethodEvent(KReplaceDialog* self, QInputMethodEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_InputMethodEvent_IsBase(true);
        vkreplacedialog->inputMethodEvent(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnInputMethodEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KReplaceDialog_InputMethodQuery(const KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return new QVariant(vkreplacedialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKReplaceDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KReplaceDialog_SuperInputMethodQuery(const KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkreplacedialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKReplaceDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnInputMethodQuery(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplaceDialog_FocusNextPrevChild(KReplaceDialog* self, bool next) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKReplaceDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperFocusNextPrevChild(KReplaceDialog* self, bool next) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusNextPrevChild_IsBase(true);
        return vkreplacedialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKReplaceDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnFocusNextPrevChild(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_TimerEvent(KReplaceDialog* self, QTimerEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->timerEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperTimerEvent(KReplaceDialog* self, QTimerEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_TimerEvent_IsBase(true);
        vkreplacedialog->timerEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnTimerEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_TimerEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_ChildEvent(KReplaceDialog* self, QChildEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->childEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperChildEvent(KReplaceDialog* self, QChildEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ChildEvent_IsBase(true);
        vkreplacedialog->childEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnChildEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ChildEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_CustomEvent(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->customEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperCustomEvent(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_CustomEvent_IsBase(true);
        vkreplacedialog->customEvent(event);
    } else {
        ((VirtualKReplaceDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnCustomEvent(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_CustomEvent_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_ConnectNotify(KReplaceDialog* self, const QMetaMethod* signal) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->connectNotify(*signal);
    } else {
        ((VirtualKReplaceDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperConnectNotify(KReplaceDialog* self, const QMetaMethod* signal) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ConnectNotify_IsBase(true);
        vkreplacedialog->connectNotify(*signal);
    } else {
        ((VirtualKReplaceDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnConnectNotify(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_DisconnectNotify(KReplaceDialog* self, const QMetaMethod* signal) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->disconnectNotify(*signal);
    } else {
        ((VirtualKReplaceDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDisconnectNotify(KReplaceDialog* self, const QMetaMethod* signal) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DisconnectNotify_IsBase(true);
        vkreplacedialog->disconnectNotify(*signal);
    } else {
        ((VirtualKReplaceDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDisconnectNotify(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_AdjustPosition(KReplaceDialog* self, QWidget* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->adjustPosition(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KReplaceDialog_SuperAdjustPosition(KReplaceDialog* self, QWidget* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_AdjustPosition_IsBase(true);
        vkreplacedialog->adjustPosition(param1);
    } else {
        ((VirtualKReplaceDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnAdjustPosition(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_UpdateMicroFocus(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->updateMicroFocus();
    } else {
        ((VirtualKReplaceDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KReplaceDialog_SuperUpdateMicroFocus(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_UpdateMicroFocus_IsBase(true);
        vkreplacedialog->updateMicroFocus();
    } else {
        ((VirtualKReplaceDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnUpdateMicroFocus(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_Create(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->create();
    } else {
        ((VirtualKReplaceDialog*)self)->create();
    }
}

// Base class handler implementation
void KReplaceDialog_SuperCreate(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Create_IsBase(true);
        vkreplacedialog->create();
    } else {
        ((VirtualKReplaceDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnCreate(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Create_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KReplaceDialog_Destroy(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->destroy();
    } else {
        ((VirtualKReplaceDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDestroy(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Destroy_IsBase(true);
        vkreplacedialog->destroy();
    } else {
        ((VirtualKReplaceDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDestroy(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Destroy_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplaceDialog_FocusNextChild(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->focusNextChild();
    } else {
        return ((VirtualKReplaceDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperFocusNextChild(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusNextChild_IsBase(true);
        return vkreplacedialog->focusNextChild();
    } else {
        return ((VirtualKReplaceDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnFocusNextChild(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplaceDialog_FocusPreviousChild(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->focusPreviousChild();
    } else {
        return ((VirtualKReplaceDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperFocusPreviousChild(KReplaceDialog* self) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusPreviousChild_IsBase(true);
        return vkreplacedialog->focusPreviousChild();
    } else {
        return ((VirtualKReplaceDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnFocusPreviousChild(KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KReplaceDialog_Sender(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->sender();
    } else {
        return ((VirtualKReplaceDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KReplaceDialog_SuperSender(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Sender_IsBase(true);
        return vkreplacedialog->sender();
    } else {
        return ((VirtualKReplaceDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnSender(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Sender_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KReplaceDialog_SenderSignalIndex(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->senderSignalIndex();
    } else {
        return ((VirtualKReplaceDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KReplaceDialog_SuperSenderSignalIndex(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_SenderSignalIndex_IsBase(true);
        return vkreplacedialog->senderSignalIndex();
    } else {
        return ((VirtualKReplaceDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnSenderSignalIndex(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KReplaceDialog_Receivers(const KReplaceDialog* self, const char* signal) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->receivers(signal);
    } else {
        return ((VirtualKReplaceDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KReplaceDialog_SuperReceivers(const KReplaceDialog* self, const char* signal) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Receivers_IsBase(true);
        return vkreplacedialog->receivers(signal);
    } else {
        return ((VirtualKReplaceDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnReceivers(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_Receivers_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KReplaceDialog_IsSignalConnected(const KReplaceDialog* self, const QMetaMethod* signal) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKReplaceDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperIsSignalConnected(const KReplaceDialog* self, const QMetaMethod* signal) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_IsSignalConnected_IsBase(true);
        return vkreplacedialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKReplaceDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnIsSignalConnected(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KReplaceDialog_GetDecodedMetricF(const KReplaceDialog* self, int metricA, int metricB) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        return vkreplacedialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKReplaceDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KReplaceDialog_SuperGetDecodedMetricF(const KReplaceDialog* self, int metricA, int metricB) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_GetDecodedMetricF_IsBase(true);
        return vkreplacedialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKReplaceDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnGetDecodedMetricF(const KReplaceDialog* self, intptr_t slot) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog && vkreplacedialog->isVirtualKReplaceDialog) {
        vkreplacedialog->setKReplaceDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KReplaceDialog_Delete(KReplaceDialog* self) {
    delete self;
}
