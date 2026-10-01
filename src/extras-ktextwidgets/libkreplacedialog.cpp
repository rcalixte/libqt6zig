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
    return (QMetaObject*)self->metaObject();
}

void* KReplaceDialog_Metacast(KReplaceDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KReplaceDialog_Metacall(KReplaceDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KReplaceDialog_Tr(const char* s) {
    auto _ret = KReplaceDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

void KReplaceDialog_SetOptions(KReplaceDialog* self, long options) {
    self->setOptions(static_cast<long>(options));
}

long KReplaceDialog_Options(const KReplaceDialog* self) {
    return self->options();
}

libqt_string KReplaceDialog_Replacement(const KReplaceDialog* self) {
    auto _ret = self->replacement();
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
    if (vkreplacedialog) {
        vkreplacedialog->showEvent(param1);
    }
}

libqt_string KReplaceDialog_Tr2(const char* s, const char* c) {
    auto _ret = KReplaceDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KReplaceDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KReplaceDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KReplaceDialog_SuperMetaObject(const KReplaceDialog* self) {
    return (QMetaObject*)self->KReplaceDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMetaObject(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_metaobject_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KReplaceDialog_SuperMetacast(KReplaceDialog* self, const char* param1) {
    return self->KReplaceDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMetacast(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_metacast_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KReplaceDialog_SuperMetacall(KReplaceDialog* self, int param1, int param2, void** param3) {
    return self->KReplaceDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMetacall(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_metacall_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KReplaceDialog_SuperShowEvent(KReplaceDialog* self, QShowEvent* param1) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnShowEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_showevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_SetVisible(KReplaceDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KReplaceDialog_SuperSetVisible(KReplaceDialog* self, bool visible) {
    self->KReplaceDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnSetVisible(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_setvisible_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KReplaceDialog_SizeHint(const KReplaceDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KReplaceDialog_SuperSizeHint(const KReplaceDialog* self) {
    return new QSize(self->KReplaceDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnSizeHint(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_sizehint_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KReplaceDialog_MinimumSizeHint(const KReplaceDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KReplaceDialog_SuperMinimumSizeHint(const KReplaceDialog* self) {
    return new QSize(self->KReplaceDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMinimumSizeHint(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_minimumsizehint_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_Open(KReplaceDialog* self) {
    self->open();
}

// Base class handler implementation
void KReplaceDialog_SuperOpen(KReplaceDialog* self) {
    self->KReplaceDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnOpen(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_open_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KReplaceDialog_Exec(KReplaceDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KReplaceDialog_SuperExec(KReplaceDialog* self) {
    return self->KReplaceDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnExec(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_exec_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_Done(KReplaceDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KReplaceDialog_SuperDone(KReplaceDialog* self, int param1) {
    self->KReplaceDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDone(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_done_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_Accept(KReplaceDialog* self) {
    self->accept();
}

// Base class handler implementation
void KReplaceDialog_SuperAccept(KReplaceDialog* self) {
    self->KReplaceDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnAccept(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_accept_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_Reject(KReplaceDialog* self) {
    self->reject();
}

// Base class handler implementation
void KReplaceDialog_SuperReject(KReplaceDialog* self) {
    self->KReplaceDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnReject(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_reject_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_KeyPressEvent(KReplaceDialog* self, QKeyEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperKeyPressEvent(KReplaceDialog* self, QKeyEvent* param1) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnKeyPressEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_keypressevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_CloseEvent(KReplaceDialog* self, QCloseEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperCloseEvent(KReplaceDialog* self, QCloseEvent* param1) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnCloseEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_closeevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_ResizeEvent(KReplaceDialog* self, QResizeEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperResizeEvent(KReplaceDialog* self, QResizeEvent* param1) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnResizeEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_resizeevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_ContextMenuEvent(KReplaceDialog* self, QContextMenuEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperContextMenuEvent(KReplaceDialog* self, QContextMenuEvent* param1) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnContextMenuEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_contextmenuevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KReplaceDialog_EventFilter(KReplaceDialog* self, QObject* param1, QEvent* param2) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        return vkreplacedialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperEventFilter(KReplaceDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        return vkreplacedialog->KReplaceDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnEventFilter(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_eventfilter_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KReplaceDialog_DevType(const KReplaceDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KReplaceDialog_SuperDevType(const KReplaceDialog* self) {
    return self->KReplaceDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDevType(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_devtype_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KReplaceDialog_HeightForWidth(const KReplaceDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KReplaceDialog_SuperHeightForWidth(const KReplaceDialog* self, int param1) {
    return self->KReplaceDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnHeightForWidth(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_heightforwidth_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KReplaceDialog_HasHeightForWidth(const KReplaceDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KReplaceDialog_SuperHasHeightForWidth(const KReplaceDialog* self) {
    return self->KReplaceDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnHasHeightForWidth(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_hasheightforwidth_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KReplaceDialog_PaintEngine(const KReplaceDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KReplaceDialog_SuperPaintEngine(const KReplaceDialog* self) {
    return self->KReplaceDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnPaintEngine(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_paintengine_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KReplaceDialog_Event(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        return vkreplacedialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperEvent(KReplaceDialog* self, QEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        return vkreplacedialog->KReplaceDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_event_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_MousePressEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMousePressEvent(KReplaceDialog* self, QMouseEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMousePressEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_mousepressevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_MouseReleaseEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMouseReleaseEvent(KReplaceDialog* self, QMouseEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMouseReleaseEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_mousereleaseevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_MouseDoubleClickEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMouseDoubleClickEvent(KReplaceDialog* self, QMouseEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMouseDoubleClickEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_MouseMoveEvent(KReplaceDialog* self, QMouseEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMouseMoveEvent(KReplaceDialog* self, QMouseEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMouseMoveEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_mousemoveevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_WheelEvent(KReplaceDialog* self, QWheelEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperWheelEvent(KReplaceDialog* self, QWheelEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnWheelEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_wheelevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_KeyReleaseEvent(KReplaceDialog* self, QKeyEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperKeyReleaseEvent(KReplaceDialog* self, QKeyEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnKeyReleaseEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_keyreleaseevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_FocusInEvent(KReplaceDialog* self, QFocusEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperFocusInEvent(KReplaceDialog* self, QFocusEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnFocusInEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_focusinevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_FocusOutEvent(KReplaceDialog* self, QFocusEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperFocusOutEvent(KReplaceDialog* self, QFocusEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnFocusOutEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_focusoutevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_EnterEvent(KReplaceDialog* self, QEnterEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperEnterEvent(KReplaceDialog* self, QEnterEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnEnterEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_enterevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_LeaveEvent(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperLeaveEvent(KReplaceDialog* self, QEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnLeaveEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_leaveevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_PaintEvent(KReplaceDialog* self, QPaintEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperPaintEvent(KReplaceDialog* self, QPaintEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnPaintEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_paintevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_MoveEvent(KReplaceDialog* self, QMoveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperMoveEvent(KReplaceDialog* self, QMoveEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMoveEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_moveevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_TabletEvent(KReplaceDialog* self, QTabletEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperTabletEvent(KReplaceDialog* self, QTabletEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnTabletEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_tabletevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_ActionEvent(KReplaceDialog* self, QActionEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperActionEvent(KReplaceDialog* self, QActionEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnActionEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_actionevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_DragEnterEvent(KReplaceDialog* self, QDragEnterEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDragEnterEvent(KReplaceDialog* self, QDragEnterEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDragEnterEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_dragenterevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_DragMoveEvent(KReplaceDialog* self, QDragMoveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDragMoveEvent(KReplaceDialog* self, QDragMoveEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDragMoveEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_dragmoveevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_DragLeaveEvent(KReplaceDialog* self, QDragLeaveEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDragLeaveEvent(KReplaceDialog* self, QDragLeaveEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDragLeaveEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_dragleaveevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_DropEvent(KReplaceDialog* self, QDropEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDropEvent(KReplaceDialog* self, QDropEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDropEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_dropevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_HideEvent(KReplaceDialog* self, QHideEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperHideEvent(KReplaceDialog* self, QHideEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnHideEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_hideevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KReplaceDialog_NativeEvent(KReplaceDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        return vkreplacedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperNativeEvent(KReplaceDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        return vkreplacedialog->KReplaceDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnNativeEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_nativeevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_ChangeEvent(KReplaceDialog* self, QEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperChangeEvent(KReplaceDialog* self, QEvent* param1) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnChangeEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_changeevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KReplaceDialog_Metric(const KReplaceDialog* self, int param1) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog) {
        return vkreplacedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KReplaceDialog_SuperMetric(const KReplaceDialog* self, int param1) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        return vkreplacedialog->KReplaceDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnMetric(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_metric_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_InitPainter(const KReplaceDialog* self, QPainter* painter) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog) {
        vkreplacedialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperInitPainter(const KReplaceDialog* self, QPainter* painter) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        vkreplacedialog->KReplaceDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnInitPainter(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_initpainter_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KReplaceDialog_Redirected(const KReplaceDialog* self, QPoint* offset) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog) {
        return vkreplacedialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KReplaceDialog_SuperRedirected(const KReplaceDialog* self, QPoint* offset) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        return vkreplacedialog->KReplaceDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnRedirected(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_redirected_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KReplaceDialog_SharedPainter(const KReplaceDialog* self) {
    auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self));
    if (vkreplacedialog) {
        return vkreplacedialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KReplaceDialog_SuperSharedPainter(const KReplaceDialog* self) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        return vkreplacedialog->KReplaceDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnSharedPainter(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_sharedpainter_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_InputMethodEvent(KReplaceDialog* self, QInputMethodEvent* param1) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperInputMethodEvent(KReplaceDialog* self, QInputMethodEvent* param1) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnInputMethodEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_inputmethodevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KReplaceDialog_InputMethodQuery(const KReplaceDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KReplaceDialog_SuperInputMethodQuery(const KReplaceDialog* self, int param1) {
    return new QVariant(self->KReplaceDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnInputMethodQuery(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self)))
        vkreplacedialog->kreplacedialog_inputmethodquery_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KReplaceDialog_FocusNextPrevChild(KReplaceDialog* self, bool next) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        return vkreplacedialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KReplaceDialog_SuperFocusNextPrevChild(KReplaceDialog* self, bool next) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        return vkreplacedialog->KReplaceDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnFocusNextPrevChild(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_focusnextprevchild_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_TimerEvent(KReplaceDialog* self, QTimerEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperTimerEvent(KReplaceDialog* self, QTimerEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnTimerEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_timerevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_ChildEvent(KReplaceDialog* self, QChildEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperChildEvent(KReplaceDialog* self, QChildEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnChildEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_childevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_CustomEvent(KReplaceDialog* self, QEvent* event) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperCustomEvent(KReplaceDialog* self, QEvent* event) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnCustomEvent(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_customevent_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_ConnectNotify(KReplaceDialog* self, const QMetaMethod* signal) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperConnectNotify(KReplaceDialog* self, const QMetaMethod* signal) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnConnectNotify(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_connectnotify_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KReplaceDialog_DisconnectNotify(KReplaceDialog* self, const QMetaMethod* signal) {
    auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self);
    if (vkreplacedialog) {
        vkreplacedialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KReplaceDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KReplaceDialog_SuperDisconnectNotify(KReplaceDialog* self, const QMetaMethod* signal) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->KReplaceDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KReplaceDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KReplaceDialog_OnDisconnectNotify(KReplaceDialog* self, intptr_t slot) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self))
        vkreplacedialog->kreplacedialog_disconnectnotify_callback = reinterpret_cast<VirtualKReplaceDialog::KReplaceDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KReplaceDialog_AdjustPosition(KReplaceDialog* self, QWidget* param1) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->VirtualKReplaceDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KReplaceDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KReplaceDialog_UpdateMicroFocus(KReplaceDialog* self) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->VirtualKReplaceDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KReplaceDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KReplaceDialog_Create(KReplaceDialog* self) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->VirtualKReplaceDialog::create();
    } else
        qFatal("Error: Protected method KReplaceDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KReplaceDialog_Destroy(KReplaceDialog* self) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        vkreplacedialog->VirtualKReplaceDialog::destroy();
    } else
        qFatal("Error: Protected method KReplaceDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KReplaceDialog_FocusNextChild(KReplaceDialog* self) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        return vkreplacedialog->VirtualKReplaceDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KReplaceDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KReplaceDialog_FocusPreviousChild(KReplaceDialog* self) {
    if (auto* vkreplacedialog = dynamic_cast<VirtualKReplaceDialog*>(self)) {
        return vkreplacedialog->VirtualKReplaceDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KReplaceDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KReplaceDialog_Sender(const KReplaceDialog* self) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        return vkreplacedialog->VirtualKReplaceDialog::sender();
    } else
        qFatal("Error: Protected method KReplaceDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KReplaceDialog_SenderSignalIndex(const KReplaceDialog* self) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        return vkreplacedialog->VirtualKReplaceDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KReplaceDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KReplaceDialog_Receivers(const KReplaceDialog* self, const char* signal) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        return vkreplacedialog->VirtualKReplaceDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KReplaceDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KReplaceDialog_IsSignalConnected(const KReplaceDialog* self, const QMetaMethod* signal) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        return vkreplacedialog->VirtualKReplaceDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KReplaceDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KReplaceDialog_GetDecodedMetricF(const KReplaceDialog* self, int metricA, int metricB) {
    if (auto* vkreplacedialog = const_cast<VirtualKReplaceDialog*>(dynamic_cast<const VirtualKReplaceDialog*>(self))) {
        return vkreplacedialog->VirtualKReplaceDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KReplaceDialog::getDecodedMetricF called without a directly constructed type");
}

void KReplaceDialog_Delete(KReplaceDialog* self) {
    delete self;
}
