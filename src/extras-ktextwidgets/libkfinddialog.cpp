#include <KFindDialog>
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
#include <kfinddialog.h>
#include "libkfinddialog.h"
#include "libkfinddialog.hxx"

KFindDialog* KFindDialog_new(QWidget* parent) {
    return new VirtualKFindDialog(parent);
}

KFindDialog* KFindDialog_new2() {
    return new VirtualKFindDialog();
}

KFindDialog* KFindDialog_new3(QWidget* parent, long options) {
    return new VirtualKFindDialog(parent, static_cast<long>(options));
}

KFindDialog* KFindDialog_new4(QWidget* parent, long options, const libqt_list /* of libqt_string */ findStrings) {
    QList<QString> findStrings_QList;
    findStrings_QList.reserve(findStrings.len);
    libqt_string* findStrings_arr = static_cast<libqt_string*>(findStrings.data);
    for (size_t i = 0; i < findStrings.len; ++i) {
        QString findStrings_arr_i_QString = QString::fromUtf8(findStrings_arr[i].data, findStrings_arr[i].len);
        findStrings_QList.push_back(findStrings_arr_i_QString);
    }
    return new VirtualKFindDialog(parent, static_cast<long>(options), findStrings_QList);
}

KFindDialog* KFindDialog_new5(QWidget* parent, long options, const libqt_list /* of libqt_string */ findStrings, bool hasSelection) {
    QList<QString> findStrings_QList;
    findStrings_QList.reserve(findStrings.len);
    libqt_string* findStrings_arr = static_cast<libqt_string*>(findStrings.data);
    for (size_t i = 0; i < findStrings.len; ++i) {
        QString findStrings_arr_i_QString = QString::fromUtf8(findStrings_arr[i].data, findStrings_arr[i].len);
        findStrings_QList.push_back(findStrings_arr_i_QString);
    }
    return new VirtualKFindDialog(parent, static_cast<long>(options), findStrings_QList, hasSelection);
}

KFindDialog* KFindDialog_new6(QWidget* parent, long options, const libqt_list /* of libqt_string */ findStrings, bool hasSelection, bool replaceDialog) {
    QList<QString> findStrings_QList;
    findStrings_QList.reserve(findStrings.len);
    libqt_string* findStrings_arr = static_cast<libqt_string*>(findStrings.data);
    for (size_t i = 0; i < findStrings.len; ++i) {
        QString findStrings_arr_i_QString = QString::fromUtf8(findStrings_arr[i].data, findStrings_arr[i].len);
        findStrings_QList.push_back(findStrings_arr_i_QString);
    }
    return new VirtualKFindDialog(parent, static_cast<long>(options), findStrings_QList, hasSelection, replaceDialog);
}

QMetaObject* KFindDialog_MetaObject(const KFindDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFindDialog_Metacast(KFindDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFindDialog_Metacall(KFindDialog* self, int param1, int param2, void** param3) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFindDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFindDialog_Tr(const char* s) {
    QString _ret = KFindDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFindDialog_SetFindHistory(KFindDialog* self, const libqt_list /* of libqt_string */ history) {
    QList<QString> history_QList;
    history_QList.reserve(history.len);
    libqt_string* history_arr = static_cast<libqt_string*>(history.data);
    for (size_t i = 0; i < history.len; ++i) {
        QString history_arr_i_QString = QString::fromUtf8(history_arr[i].data, history_arr[i].len);
        history_QList.push_back(history_arr_i_QString);
    }
    self->setFindHistory(history_QList);
}

libqt_list /* of libqt_string */ KFindDialog_FindHistory(const KFindDialog* self) {
    QList<QString> _ret = self->findHistory();
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

void KFindDialog_SetHasSelection(KFindDialog* self, bool hasSelection) {
    self->setHasSelection(hasSelection);
}

void KFindDialog_SetHasCursor(KFindDialog* self, bool hasCursor) {
    self->setHasCursor(hasCursor);
}

void KFindDialog_SetSupportsBackwardsFind(KFindDialog* self, bool supports) {
    self->setSupportsBackwardsFind(supports);
}

void KFindDialog_SetSupportsCaseSensitiveFind(KFindDialog* self, bool supports) {
    self->setSupportsCaseSensitiveFind(supports);
}

void KFindDialog_SetSupportsWholeWordsFind(KFindDialog* self, bool supports) {
    self->setSupportsWholeWordsFind(supports);
}

void KFindDialog_SetSupportsRegularExpressionFind(KFindDialog* self, bool supports) {
    self->setSupportsRegularExpressionFind(supports);
}

void KFindDialog_SetOptions(KFindDialog* self, long options) {
    self->setOptions(static_cast<long>(options));
}

long KFindDialog_Options(const KFindDialog* self) {
    return self->options();
}

libqt_string KFindDialog_Pattern(const KFindDialog* self) {
    QString _ret = self->pattern();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFindDialog_SetPattern(KFindDialog* self, const libqt_string pattern) {
    QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
    self->setPattern(pattern_QString);
}

QWidget* KFindDialog_FindExtension(const KFindDialog* self) {
    return self->findExtension();
}

void KFindDialog_OptionsChanged(KFindDialog* self) {
    self->optionsChanged();
}

void KFindDialog_Connect_OptionsChanged(KFindDialog* self, intptr_t slot) {
    void (*slotFunc)(KFindDialog*) = reinterpret_cast<void (*)(KFindDialog*)>(slot);
    KFindDialog::connect(self, &KFindDialog::optionsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KFindDialog_OkClicked(KFindDialog* self) {
    self->okClicked();
}

void KFindDialog_Connect_OkClicked(KFindDialog* self, intptr_t slot) {
    void (*slotFunc)(KFindDialog*) = reinterpret_cast<void (*)(KFindDialog*)>(slot);
    KFindDialog::connect(self, &KFindDialog::okClicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KFindDialog_CancelClicked(KFindDialog* self) {
    self->cancelClicked();
}

void KFindDialog_Connect_CancelClicked(KFindDialog* self, intptr_t slot) {
    void (*slotFunc)(KFindDialog*) = reinterpret_cast<void (*)(KFindDialog*)>(slot);
    KFindDialog::connect(self, &KFindDialog::cancelClicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KFindDialog_ShowEvent(KFindDialog* self, QShowEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->showEvent(param1);
    }
}

libqt_string KFindDialog_Tr2(const char* s, const char* c) {
    QString _ret = KFindDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFindDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFindDialog::tr(s, c, static_cast<int>(n));
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
int KFindDialog_QBaseMetacall(KFindDialog* self, int param1, int param2, void** param3) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Metacall_IsBase(true);
        return vkfinddialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFindDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMetacall(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Metacall_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KFindDialog_QBaseShowEvent(KFindDialog* self, QShowEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ShowEvent_IsBase(true);
        vkfinddialog->showEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnShowEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ShowEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_SetVisible(KFindDialog* self, bool visible) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setVisible(visible);
    } else {
        self->KFindDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KFindDialog_QBaseSetVisible(KFindDialog* self, bool visible) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_SetVisible_IsBase(true);
        vkfinddialog->setVisible(visible);
    } else {
        self->KFindDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnSetVisible(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_SetVisible_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFindDialog_SizeHint(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return new QSize(vkfinddialog->sizeHint());
    } else {
        return new QSize(((VirtualKFindDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KFindDialog_QBaseSizeHint(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_SizeHint_IsBase(true);
        return new QSize(vkfinddialog->sizeHint());
    } else {
        return new QSize(((VirtualKFindDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnSizeHint(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_SizeHint_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFindDialog_MinimumSizeHint(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return new QSize(vkfinddialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFindDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFindDialog_QBaseMinimumSizeHint(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkfinddialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFindDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMinimumSizeHint(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_Open(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->open();
    } else {
        self->KFindDialog::open();
    }
}

// Base class handler implementation
void KFindDialog_QBaseOpen(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Open_IsBase(true);
        vkfinddialog->open();
    } else {
        self->KFindDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnOpen(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Open_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KFindDialog_Exec(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->exec();
    } else {
        return self->KFindDialog::exec();
    }
}

// Base class handler implementation
int KFindDialog_QBaseExec(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Exec_IsBase(true);
        return vkfinddialog->exec();
    } else {
        return self->KFindDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnExec(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Exec_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_Done(KFindDialog* self, int param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->done(static_cast<int>(param1));
    } else {
        self->KFindDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KFindDialog_QBaseDone(KFindDialog* self, int param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Done_IsBase(true);
        vkfinddialog->done(static_cast<int>(param1));
    } else {
        self->KFindDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDone(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Done_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_Accept(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->accept();
    } else {
        self->KFindDialog::accept();
    }
}

// Base class handler implementation
void KFindDialog_QBaseAccept(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Accept_IsBase(true);
        vkfinddialog->accept();
    } else {
        self->KFindDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnAccept(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Accept_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_Reject(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->reject();
    } else {
        self->KFindDialog::reject();
    }
}

// Base class handler implementation
void KFindDialog_QBaseReject(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Reject_IsBase(true);
        vkfinddialog->reject();
    } else {
        self->KFindDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnReject(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Reject_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_KeyPressEvent(KFindDialog* self, QKeyEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->keyPressEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KFindDialog_QBaseKeyPressEvent(KFindDialog* self, QKeyEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_KeyPressEvent_IsBase(true);
        vkfinddialog->keyPressEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnKeyPressEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_CloseEvent(KFindDialog* self, QCloseEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->closeEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KFindDialog_QBaseCloseEvent(KFindDialog* self, QCloseEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_CloseEvent_IsBase(true);
        vkfinddialog->closeEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnCloseEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_CloseEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_ResizeEvent(KFindDialog* self, QResizeEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->resizeEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KFindDialog_QBaseResizeEvent(KFindDialog* self, QResizeEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ResizeEvent_IsBase(true);
        vkfinddialog->resizeEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnResizeEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_ContextMenuEvent(KFindDialog* self, QContextMenuEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->contextMenuEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KFindDialog_QBaseContextMenuEvent(KFindDialog* self, QContextMenuEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ContextMenuEvent_IsBase(true);
        vkfinddialog->contextMenuEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnContextMenuEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFindDialog_EventFilter(KFindDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKFindDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KFindDialog_QBaseEventFilter(KFindDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_EventFilter_IsBase(true);
        return vkfinddialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKFindDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnEventFilter(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_EventFilter_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KFindDialog_DevType(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->devType();
    } else {
        return self->KFindDialog::devType();
    }
}

// Base class handler implementation
int KFindDialog_QBaseDevType(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DevType_IsBase(true);
        return vkfinddialog->devType();
    } else {
        return self->KFindDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDevType(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DevType_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KFindDialog_HeightForWidth(const KFindDialog* self, int param1) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFindDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFindDialog_QBaseHeightForWidth(const KFindDialog* self, int param1) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_HeightForWidth_IsBase(true);
        return vkfinddialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFindDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnHeightForWidth(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFindDialog_HasHeightForWidth(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->hasHeightForWidth();
    } else {
        return self->KFindDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFindDialog_QBaseHasHeightForWidth(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_HasHeightForWidth_IsBase(true);
        return vkfinddialog->hasHeightForWidth();
    } else {
        return self->KFindDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnHasHeightForWidth(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFindDialog_PaintEngine(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->paintEngine();
    } else {
        return self->KFindDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFindDialog_QBasePaintEngine(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_PaintEngine_IsBase(true);
        return vkfinddialog->paintEngine();
    } else {
        return self->KFindDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnPaintEngine(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_PaintEngine_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFindDialog_Event(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->event(event);
    } else {
        return ((VirtualKFindDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KFindDialog_QBaseEvent(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Event_IsBase(true);
        return vkfinddialog->event(event);
    } else {
        return ((VirtualKFindDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Event_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_MousePressEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->mousePressEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseMousePressEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MousePressEvent_IsBase(true);
        vkfinddialog->mousePressEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMousePressEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_MouseReleaseEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseMouseReleaseEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MouseReleaseEvent_IsBase(true);
        vkfinddialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMouseReleaseEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_MouseDoubleClickEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseMouseDoubleClickEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MouseDoubleClickEvent_IsBase(true);
        vkfinddialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMouseDoubleClickEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_MouseMoveEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->mouseMoveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseMouseMoveEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MouseMoveEvent_IsBase(true);
        vkfinddialog->mouseMoveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMouseMoveEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_WheelEvent(KFindDialog* self, QWheelEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->wheelEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseWheelEvent(KFindDialog* self, QWheelEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_WheelEvent_IsBase(true);
        vkfinddialog->wheelEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnWheelEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_WheelEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_KeyReleaseEvent(KFindDialog* self, QKeyEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->keyReleaseEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseKeyReleaseEvent(KFindDialog* self, QKeyEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_KeyReleaseEvent_IsBase(true);
        vkfinddialog->keyReleaseEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnKeyReleaseEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_FocusInEvent(KFindDialog* self, QFocusEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->focusInEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseFocusInEvent(KFindDialog* self, QFocusEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusInEvent_IsBase(true);
        vkfinddialog->focusInEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnFocusInEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_FocusOutEvent(KFindDialog* self, QFocusEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->focusOutEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseFocusOutEvent(KFindDialog* self, QFocusEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusOutEvent_IsBase(true);
        vkfinddialog->focusOutEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnFocusOutEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_EnterEvent(KFindDialog* self, QEnterEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->enterEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseEnterEvent(KFindDialog* self, QEnterEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_EnterEvent_IsBase(true);
        vkfinddialog->enterEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnEnterEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_EnterEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_LeaveEvent(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->leaveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseLeaveEvent(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_LeaveEvent_IsBase(true);
        vkfinddialog->leaveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnLeaveEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_PaintEvent(KFindDialog* self, QPaintEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->paintEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBasePaintEvent(KFindDialog* self, QPaintEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_PaintEvent_IsBase(true);
        vkfinddialog->paintEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnPaintEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_PaintEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_MoveEvent(KFindDialog* self, QMoveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->moveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseMoveEvent(KFindDialog* self, QMoveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MoveEvent_IsBase(true);
        vkfinddialog->moveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMoveEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_MoveEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_TabletEvent(KFindDialog* self, QTabletEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->tabletEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseTabletEvent(KFindDialog* self, QTabletEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_TabletEvent_IsBase(true);
        vkfinddialog->tabletEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnTabletEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_TabletEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_ActionEvent(KFindDialog* self, QActionEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->actionEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseActionEvent(KFindDialog* self, QActionEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ActionEvent_IsBase(true);
        vkfinddialog->actionEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnActionEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ActionEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_DragEnterEvent(KFindDialog* self, QDragEnterEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->dragEnterEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseDragEnterEvent(KFindDialog* self, QDragEnterEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DragEnterEvent_IsBase(true);
        vkfinddialog->dragEnterEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDragEnterEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_DragMoveEvent(KFindDialog* self, QDragMoveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->dragMoveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseDragMoveEvent(KFindDialog* self, QDragMoveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DragMoveEvent_IsBase(true);
        vkfinddialog->dragMoveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDragMoveEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_DragLeaveEvent(KFindDialog* self, QDragLeaveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->dragLeaveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseDragLeaveEvent(KFindDialog* self, QDragLeaveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DragLeaveEvent_IsBase(true);
        vkfinddialog->dragLeaveEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDragLeaveEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_DropEvent(KFindDialog* self, QDropEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->dropEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseDropEvent(KFindDialog* self, QDropEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DropEvent_IsBase(true);
        vkfinddialog->dropEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDropEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DropEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_HideEvent(KFindDialog* self, QHideEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->hideEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseHideEvent(KFindDialog* self, QHideEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_HideEvent_IsBase(true);
        vkfinddialog->hideEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnHideEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_HideEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFindDialog_NativeEvent(KFindDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFindDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFindDialog_QBaseNativeEvent(KFindDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_NativeEvent_IsBase(true);
        return vkfinddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFindDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnNativeEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_NativeEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_ChangeEvent(KFindDialog* self, QEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->changeEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KFindDialog_QBaseChangeEvent(KFindDialog* self, QEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ChangeEvent_IsBase(true);
        vkfinddialog->changeEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnChangeEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFindDialog_Metric(const KFindDialog* self, int param1) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFindDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFindDialog_QBaseMetric(const KFindDialog* self, int param1) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Metric_IsBase(true);
        return vkfinddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFindDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMetric(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Metric_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_InitPainter(const KFindDialog* self, QPainter* painter) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->initPainter(painter);
    } else {
        ((VirtualKFindDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFindDialog_QBaseInitPainter(const KFindDialog* self, QPainter* painter) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_InitPainter_IsBase(true);
        vkfinddialog->initPainter(painter);
    } else {
        ((VirtualKFindDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnInitPainter(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_InitPainter_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFindDialog_Redirected(const KFindDialog* self, QPoint* offset) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->redirected(offset);
    } else {
        return ((VirtualKFindDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFindDialog_QBaseRedirected(const KFindDialog* self, QPoint* offset) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Redirected_IsBase(true);
        return vkfinddialog->redirected(offset);
    } else {
        return ((VirtualKFindDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnRedirected(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Redirected_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFindDialog_SharedPainter(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->sharedPainter();
    } else {
        return ((VirtualKFindDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFindDialog_QBaseSharedPainter(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_SharedPainter_IsBase(true);
        return vkfinddialog->sharedPainter();
    } else {
        return ((VirtualKFindDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnSharedPainter(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_SharedPainter_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_InputMethodEvent(KFindDialog* self, QInputMethodEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->inputMethodEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KFindDialog_QBaseInputMethodEvent(KFindDialog* self, QInputMethodEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_InputMethodEvent_IsBase(true);
        vkfinddialog->inputMethodEvent(param1);
    } else {
        ((VirtualKFindDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnInputMethodEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFindDialog_InputMethodQuery(const KFindDialog* self, int param1) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return new QVariant(vkfinddialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFindDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KFindDialog_QBaseInputMethodQuery(const KFindDialog* self, int param1) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkfinddialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFindDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnInputMethodQuery(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFindDialog_FocusNextPrevChild(KFindDialog* self, bool next) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKFindDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFindDialog_QBaseFocusNextPrevChild(KFindDialog* self, bool next) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusNextPrevChild_IsBase(true);
        return vkfinddialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKFindDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnFocusNextPrevChild(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_TimerEvent(KFindDialog* self, QTimerEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->timerEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseTimerEvent(KFindDialog* self, QTimerEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_TimerEvent_IsBase(true);
        vkfinddialog->timerEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnTimerEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_TimerEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_ChildEvent(KFindDialog* self, QChildEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->childEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseChildEvent(KFindDialog* self, QChildEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ChildEvent_IsBase(true);
        vkfinddialog->childEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnChildEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ChildEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_CustomEvent(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->customEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFindDialog_QBaseCustomEvent(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_CustomEvent_IsBase(true);
        vkfinddialog->customEvent(event);
    } else {
        ((VirtualKFindDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnCustomEvent(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_CustomEvent_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_ConnectNotify(KFindDialog* self, const QMetaMethod* signal) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->connectNotify(*signal);
    } else {
        ((VirtualKFindDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFindDialog_QBaseConnectNotify(KFindDialog* self, const QMetaMethod* signal) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ConnectNotify_IsBase(true);
        vkfinddialog->connectNotify(*signal);
    } else {
        ((VirtualKFindDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnConnectNotify(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_DisconnectNotify(KFindDialog* self, const QMetaMethod* signal) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->disconnectNotify(*signal);
    } else {
        ((VirtualKFindDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFindDialog_QBaseDisconnectNotify(KFindDialog* self, const QMetaMethod* signal) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DisconnectNotify_IsBase(true);
        vkfinddialog->disconnectNotify(*signal);
    } else {
        ((VirtualKFindDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDisconnectNotify(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_AdjustPosition(KFindDialog* self, QWidget* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->adjustPosition(param1);
    } else {
        ((VirtualKFindDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KFindDialog_QBaseAdjustPosition(KFindDialog* self, QWidget* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_AdjustPosition_IsBase(true);
        vkfinddialog->adjustPosition(param1);
    } else {
        ((VirtualKFindDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnAdjustPosition(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_UpdateMicroFocus(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->updateMicroFocus();
    } else {
        ((VirtualKFindDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFindDialog_QBaseUpdateMicroFocus(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_UpdateMicroFocus_IsBase(true);
        vkfinddialog->updateMicroFocus();
    } else {
        ((VirtualKFindDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnUpdateMicroFocus(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_Create(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->create();
    } else {
        ((VirtualKFindDialog*)self)->create();
    }
}

// Base class handler implementation
void KFindDialog_QBaseCreate(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Create_IsBase(true);
        vkfinddialog->create();
    } else {
        ((VirtualKFindDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnCreate(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Create_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFindDialog_Destroy(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->destroy();
    } else {
        ((VirtualKFindDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KFindDialog_QBaseDestroy(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Destroy_IsBase(true);
        vkfinddialog->destroy();
    } else {
        ((VirtualKFindDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDestroy(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Destroy_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFindDialog_FocusNextChild(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->focusNextChild();
    } else {
        return ((VirtualKFindDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFindDialog_QBaseFocusNextChild(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusNextChild_IsBase(true);
        return vkfinddialog->focusNextChild();
    } else {
        return ((VirtualKFindDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnFocusNextChild(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFindDialog_FocusPreviousChild(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->focusPreviousChild();
    } else {
        return ((VirtualKFindDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFindDialog_QBaseFocusPreviousChild(KFindDialog* self) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusPreviousChild_IsBase(true);
        return vkfinddialog->focusPreviousChild();
    } else {
        return ((VirtualKFindDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnFocusPreviousChild(KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFindDialog_Sender(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->sender();
    } else {
        return ((VirtualKFindDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFindDialog_QBaseSender(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Sender_IsBase(true);
        return vkfinddialog->sender();
    } else {
        return ((VirtualKFindDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnSender(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Sender_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFindDialog_SenderSignalIndex(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->senderSignalIndex();
    } else {
        return ((VirtualKFindDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFindDialog_QBaseSenderSignalIndex(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_SenderSignalIndex_IsBase(true);
        return vkfinddialog->senderSignalIndex();
    } else {
        return ((VirtualKFindDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnSenderSignalIndex(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFindDialog_Receivers(const KFindDialog* self, const char* signal) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->receivers(signal);
    } else {
        return ((VirtualKFindDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFindDialog_QBaseReceivers(const KFindDialog* self, const char* signal) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Receivers_IsBase(true);
        return vkfinddialog->receivers(signal);
    } else {
        return ((VirtualKFindDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnReceivers(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_Receivers_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFindDialog_IsSignalConnected(const KFindDialog* self, const QMetaMethod* signal) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKFindDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFindDialog_QBaseIsSignalConnected(const KFindDialog* self, const QMetaMethod* signal) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_IsSignalConnected_IsBase(true);
        return vkfinddialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKFindDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnIsSignalConnected(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFindDialog_GetDecodedMetricF(const KFindDialog* self, int metricA, int metricB) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        return vkfinddialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFindDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFindDialog_QBaseGetDecodedMetricF(const KFindDialog* self, int metricA, int metricB) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_GetDecodedMetricF_IsBase(true);
        return vkfinddialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFindDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnGetDecodedMetricF(const KFindDialog* self, intptr_t slot) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog && vkfinddialog->isVirtualKFindDialog) {
        vkfinddialog->setKFindDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFindDialog::KFindDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KFindDialog_Delete(KFindDialog* self) {
    delete self;
}
