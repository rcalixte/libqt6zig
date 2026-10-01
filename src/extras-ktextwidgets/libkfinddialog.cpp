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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFindDialog_Tr(const char* s) {
    auto _ret = KFindDialog::tr(s);
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
    auto _ret = self->pattern();
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
    KFindDialog::connect(self,
                         static_cast<void (KFindDialog::*)()>(&KFindDialog::optionsChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void KFindDialog_OkClicked(KFindDialog* self) {
    self->okClicked();
}

void KFindDialog_Connect_OkClicked(KFindDialog* self, intptr_t slot) {
    void (*slotFunc)(KFindDialog*) = reinterpret_cast<void (*)(KFindDialog*)>(slot);
    KFindDialog::connect(self,
                         static_cast<void (KFindDialog::*)()>(&KFindDialog::okClicked),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void KFindDialog_CancelClicked(KFindDialog* self) {
    self->cancelClicked();
}

void KFindDialog_Connect_CancelClicked(KFindDialog* self, intptr_t slot) {
    void (*slotFunc)(KFindDialog*) = reinterpret_cast<void (*)(KFindDialog*)>(slot);
    KFindDialog::connect(self,
                         static_cast<void (KFindDialog::*)()>(&KFindDialog::cancelClicked),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void KFindDialog_ShowEvent(KFindDialog* self, QShowEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->showEvent(param1);
    }
}

libqt_string KFindDialog_Tr2(const char* s, const char* c) {
    auto _ret = KFindDialog::tr(s, c);
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
    auto _ret = KFindDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFindDialog_SuperMetaObject(const KFindDialog* self) {
    return (QMetaObject*)self->KFindDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMetaObject(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_metaobject_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFindDialog_SuperMetacast(KFindDialog* self, const char* param1) {
    return self->KFindDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMetacast(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_metacast_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFindDialog_SuperMetacall(KFindDialog* self, int param1, int param2, void** param3) {
    return self->KFindDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMetacall(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_metacall_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KFindDialog_SuperShowEvent(KFindDialog* self, QShowEvent* param1) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFindDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnShowEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_showevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_SetVisible(KFindDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFindDialog_SuperSetVisible(KFindDialog* self, bool visible) {
    self->KFindDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnSetVisible(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_setvisible_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KFindDialog_SizeHint(const KFindDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KFindDialog_SuperSizeHint(const KFindDialog* self) {
    return new QSize(self->KFindDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnSizeHint(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_sizehint_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KFindDialog_MinimumSizeHint(const KFindDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFindDialog_SuperMinimumSizeHint(const KFindDialog* self) {
    return new QSize(self->KFindDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMinimumSizeHint(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_minimumsizehint_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_Open(KFindDialog* self) {
    self->open();
}

// Base class handler implementation
void KFindDialog_SuperOpen(KFindDialog* self) {
    self->KFindDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnOpen(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_open_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KFindDialog_Exec(KFindDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KFindDialog_SuperExec(KFindDialog* self) {
    return self->KFindDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnExec(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_exec_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_Done(KFindDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KFindDialog_SuperDone(KFindDialog* self, int param1) {
    self->KFindDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDone(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_done_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_Accept(KFindDialog* self) {
    self->accept();
}

// Base class handler implementation
void KFindDialog_SuperAccept(KFindDialog* self) {
    self->KFindDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnAccept(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_accept_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_Reject(KFindDialog* self) {
    self->reject();
}

// Base class handler implementation
void KFindDialog_SuperReject(KFindDialog* self) {
    self->KFindDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnReject(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_reject_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_KeyPressEvent(KFindDialog* self, QKeyEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperKeyPressEvent(KFindDialog* self, QKeyEvent* param1) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFindDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnKeyPressEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_keypressevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_CloseEvent(KFindDialog* self, QCloseEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperCloseEvent(KFindDialog* self, QCloseEvent* param1) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFindDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnCloseEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_closeevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_ResizeEvent(KFindDialog* self, QResizeEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperResizeEvent(KFindDialog* self, QResizeEvent* param1) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFindDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnResizeEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_resizeevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_ContextMenuEvent(KFindDialog* self, QContextMenuEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperContextMenuEvent(KFindDialog* self, QContextMenuEvent* param1) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFindDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnContextMenuEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_contextmenuevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFindDialog_EventFilter(KFindDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        return vkfinddialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFindDialog_SuperEventFilter(KFindDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        return vkfinddialog->KFindDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KFindDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnEventFilter(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_eventfilter_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KFindDialog_DevType(const KFindDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KFindDialog_SuperDevType(const KFindDialog* self) {
    return self->KFindDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDevType(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_devtype_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KFindDialog_HeightForWidth(const KFindDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFindDialog_SuperHeightForWidth(const KFindDialog* self, int param1) {
    return self->KFindDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnHeightForWidth(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_heightforwidth_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFindDialog_HasHeightForWidth(const KFindDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFindDialog_SuperHasHeightForWidth(const KFindDialog* self) {
    return self->KFindDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnHasHeightForWidth(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_hasheightforwidth_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFindDialog_PaintEngine(const KFindDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFindDialog_SuperPaintEngine(const KFindDialog* self) {
    return self->KFindDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnPaintEngine(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_paintengine_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KFindDialog_Event(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        return vkfinddialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFindDialog_SuperEvent(KFindDialog* self, QEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        return vkfinddialog->KFindDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_event_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_MousePressEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperMousePressEvent(KFindDialog* self, QMouseEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMousePressEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_mousepressevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_MouseReleaseEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperMouseReleaseEvent(KFindDialog* self, QMouseEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMouseReleaseEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_mousereleaseevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_MouseDoubleClickEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperMouseDoubleClickEvent(KFindDialog* self, QMouseEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMouseDoubleClickEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_MouseMoveEvent(KFindDialog* self, QMouseEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperMouseMoveEvent(KFindDialog* self, QMouseEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMouseMoveEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_mousemoveevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_WheelEvent(KFindDialog* self, QWheelEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperWheelEvent(KFindDialog* self, QWheelEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnWheelEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_wheelevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_KeyReleaseEvent(KFindDialog* self, QKeyEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperKeyReleaseEvent(KFindDialog* self, QKeyEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnKeyReleaseEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_keyreleaseevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_FocusInEvent(KFindDialog* self, QFocusEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperFocusInEvent(KFindDialog* self, QFocusEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnFocusInEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_focusinevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_FocusOutEvent(KFindDialog* self, QFocusEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperFocusOutEvent(KFindDialog* self, QFocusEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnFocusOutEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_focusoutevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_EnterEvent(KFindDialog* self, QEnterEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperEnterEvent(KFindDialog* self, QEnterEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnEnterEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_enterevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_LeaveEvent(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperLeaveEvent(KFindDialog* self, QEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnLeaveEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_leaveevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_PaintEvent(KFindDialog* self, QPaintEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperPaintEvent(KFindDialog* self, QPaintEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnPaintEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_paintevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_MoveEvent(KFindDialog* self, QMoveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperMoveEvent(KFindDialog* self, QMoveEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMoveEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_moveevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_TabletEvent(KFindDialog* self, QTabletEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperTabletEvent(KFindDialog* self, QTabletEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnTabletEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_tabletevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_ActionEvent(KFindDialog* self, QActionEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperActionEvent(KFindDialog* self, QActionEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnActionEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_actionevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_DragEnterEvent(KFindDialog* self, QDragEnterEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperDragEnterEvent(KFindDialog* self, QDragEnterEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDragEnterEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_dragenterevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_DragMoveEvent(KFindDialog* self, QDragMoveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperDragMoveEvent(KFindDialog* self, QDragMoveEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDragMoveEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_dragmoveevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_DragLeaveEvent(KFindDialog* self, QDragLeaveEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperDragLeaveEvent(KFindDialog* self, QDragLeaveEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDragLeaveEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_dragleaveevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_DropEvent(KFindDialog* self, QDropEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperDropEvent(KFindDialog* self, QDropEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDropEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_dropevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_HideEvent(KFindDialog* self, QHideEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperHideEvent(KFindDialog* self, QHideEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnHideEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_hideevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFindDialog_NativeEvent(KFindDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        return vkfinddialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFindDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFindDialog_SuperNativeEvent(KFindDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        return vkfinddialog->KFindDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFindDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnNativeEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_nativeevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_ChangeEvent(KFindDialog* self, QEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperChangeEvent(KFindDialog* self, QEvent* param1) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFindDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnChangeEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_changeevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFindDialog_Metric(const KFindDialog* self, int param1) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog) {
        return vkfinddialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFindDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFindDialog_SuperMetric(const KFindDialog* self, int param1) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        return vkfinddialog->KFindDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFindDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnMetric(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_metric_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_InitPainter(const KFindDialog* self, QPainter* painter) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog) {
        vkfinddialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperInitPainter(const KFindDialog* self, QPainter* painter) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        vkfinddialog->KFindDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFindDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnInitPainter(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_initpainter_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFindDialog_Redirected(const KFindDialog* self, QPoint* offset) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog) {
        return vkfinddialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFindDialog_SuperRedirected(const KFindDialog* self, QPoint* offset) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        return vkfinddialog->KFindDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFindDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnRedirected(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_redirected_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFindDialog_SharedPainter(const KFindDialog* self) {
    auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self));
    if (vkfinddialog) {
        return vkfinddialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFindDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFindDialog_SuperSharedPainter(const KFindDialog* self) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        return vkfinddialog->KFindDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFindDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnSharedPainter(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_sharedpainter_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_InputMethodEvent(KFindDialog* self, QInputMethodEvent* param1) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperInputMethodEvent(KFindDialog* self, QInputMethodEvent* param1) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFindDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnInputMethodEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_inputmethodevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFindDialog_InputMethodQuery(const KFindDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KFindDialog_SuperInputMethodQuery(const KFindDialog* self, int param1) {
    return new QVariant(self->KFindDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnInputMethodQuery(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self)))
        vkfinddialog->kfinddialog_inputmethodquery_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KFindDialog_FocusNextPrevChild(KFindDialog* self, bool next) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        return vkfinddialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFindDialog_SuperFocusNextPrevChild(KFindDialog* self, bool next) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        return vkfinddialog->KFindDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFindDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnFocusNextPrevChild(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_focusnextprevchild_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_TimerEvent(KFindDialog* self, QTimerEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperTimerEvent(KFindDialog* self, QTimerEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnTimerEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_timerevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_ChildEvent(KFindDialog* self, QChildEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperChildEvent(KFindDialog* self, QChildEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnChildEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_childevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_CustomEvent(KFindDialog* self, QEvent* event) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperCustomEvent(KFindDialog* self, QEvent* event) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFindDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnCustomEvent(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_customevent_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_ConnectNotify(KFindDialog* self, const QMetaMethod* signal) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperConnectNotify(KFindDialog* self, const QMetaMethod* signal) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFindDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnConnectNotify(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_connectnotify_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFindDialog_DisconnectNotify(KFindDialog* self, const QMetaMethod* signal) {
    auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self);
    if (vkfinddialog) {
        vkfinddialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFindDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFindDialog_SuperDisconnectNotify(KFindDialog* self, const QMetaMethod* signal) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->KFindDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFindDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFindDialog_OnDisconnectNotify(KFindDialog* self, intptr_t slot) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self))
        vkfinddialog->kfinddialog_disconnectnotify_callback = reinterpret_cast<VirtualKFindDialog::KFindDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFindDialog_AdjustPosition(KFindDialog* self, QWidget* param1) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->VirtualKFindDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KFindDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KFindDialog_UpdateMicroFocus(KFindDialog* self) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->VirtualKFindDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFindDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFindDialog_Create(KFindDialog* self) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->VirtualKFindDialog::create();
    } else
        qFatal("Error: Protected method KFindDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFindDialog_Destroy(KFindDialog* self) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        vkfinddialog->VirtualKFindDialog::destroy();
    } else
        qFatal("Error: Protected method KFindDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFindDialog_FocusNextChild(KFindDialog* self) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        return vkfinddialog->VirtualKFindDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KFindDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFindDialog_FocusPreviousChild(KFindDialog* self) {
    if (auto* vkfinddialog = dynamic_cast<VirtualKFindDialog*>(self)) {
        return vkfinddialog->VirtualKFindDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFindDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFindDialog_Sender(const KFindDialog* self) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        return vkfinddialog->VirtualKFindDialog::sender();
    } else
        qFatal("Error: Protected method KFindDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFindDialog_SenderSignalIndex(const KFindDialog* self) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        return vkfinddialog->VirtualKFindDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFindDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFindDialog_Receivers(const KFindDialog* self, const char* signal) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        return vkfinddialog->VirtualKFindDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KFindDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFindDialog_IsSignalConnected(const KFindDialog* self, const QMetaMethod* signal) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        return vkfinddialog->VirtualKFindDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFindDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFindDialog_GetDecodedMetricF(const KFindDialog* self, int metricA, int metricB) {
    if (auto* vkfinddialog = const_cast<VirtualKFindDialog*>(dynamic_cast<const VirtualKFindDialog*>(self))) {
        return vkfinddialog->VirtualKFindDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFindDialog::getDecodedMetricF called without a directly constructed type");
}

void KFindDialog_Delete(KFindDialog* self) {
    delete self;
}
