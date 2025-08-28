#include <KGuiItem>
#include <KMessageDialog>
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
#include <QIcon>
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
#include <kmessagedialog.h>
#include "libkmessagedialog.h"
#include "libkmessagedialog.hxx"

KMessageDialog* KMessageDialog_new(int typeVal, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKMessageDialog(static_cast<KMessageDialog::Type>(typeVal), text_QString);
}

KMessageDialog* KMessageDialog_new2(int typeVal, const libqt_string text, uintptr_t parent_id) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKMessageDialog(static_cast<KMessageDialog::Type>(typeVal), text_QString, static_cast<WId>(parent_id));
}

KMessageDialog* KMessageDialog_new3(int typeVal, const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKMessageDialog(static_cast<KMessageDialog::Type>(typeVal), text_QString, parent);
}

QMetaObject* KMessageDialog_MetaObject(const KMessageDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KMessageDialog_Metacast(KMessageDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KMessageDialog_Metacall(KMessageDialog* self, int param1, int param2, void** param3) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKMessageDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KMessageDialog_Tr(const char* s) {
    QString _ret = KMessageDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KMessageDialog_SetCaption(KMessageDialog* self, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    self->setCaption(caption_QString);
}

void KMessageDialog_SetIcon(KMessageDialog* self, const QIcon* icon) {
    self->setIcon(*icon);
}

void KMessageDialog_SetListWidgetItems(KMessageDialog* self, const libqt_list /* of libqt_string */ strlist) {
    QList<QString> strlist_QList;
    strlist_QList.reserve(strlist.len);
    libqt_string* strlist_arr = static_cast<libqt_string*>(strlist.data);
    for (size_t i = 0; i < strlist.len; ++i) {
        QString strlist_arr_i_QString = QString::fromUtf8(strlist_arr[i].data, strlist_arr[i].len);
        strlist_QList.push_back(strlist_arr_i_QString);
    }
    self->setListWidgetItems(strlist_QList);
}

void KMessageDialog_SetDetails(KMessageDialog* self, const libqt_string details) {
    QString details_QString = QString::fromUtf8(details.data, details.len);
    self->setDetails(details_QString);
}

void KMessageDialog_SetDontAskAgainText(KMessageDialog* self, const libqt_string dontAskAgainText) {
    QString dontAskAgainText_QString = QString::fromUtf8(dontAskAgainText.data, dontAskAgainText.len);
    self->setDontAskAgainText(dontAskAgainText_QString);
}

void KMessageDialog_SetDontAskAgainChecked(KMessageDialog* self, bool isChecked) {
    self->setDontAskAgainChecked(isChecked);
}

bool KMessageDialog_IsDontAskAgainChecked(const KMessageDialog* self) {
    return self->isDontAskAgainChecked();
}

void KMessageDialog_SetOpenExternalLinks(KMessageDialog* self, bool isAllowed) {
    self->setOpenExternalLinks(isAllowed);
}

bool KMessageDialog_IsNotifyEnabled(const KMessageDialog* self) {
    return self->isNotifyEnabled();
}

void KMessageDialog_SetNotifyEnabled(KMessageDialog* self, bool enable) {
    self->setNotifyEnabled(enable);
}

void KMessageDialog_SetButtons(KMessageDialog* self) {
    self->setButtons();
}

void KMessageDialog_Beep(int typeVal) {
    KMessageDialog::beep(static_cast<KMessageDialog::Type>(typeVal));
}

void KMessageDialog_ShowEvent(KMessageDialog* self, QShowEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->showEvent(event);
    }
}

libqt_string KMessageDialog_Tr2(const char* s, const char* c) {
    QString _ret = KMessageDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMessageDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KMessageDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KMessageDialog_SetButtons1(KMessageDialog* self, const KGuiItem* primaryAction) {
    self->setButtons(*primaryAction);
}

void KMessageDialog_SetButtons2(KMessageDialog* self, const KGuiItem* primaryAction, const KGuiItem* secondaryAction) {
    self->setButtons(*primaryAction, *secondaryAction);
}

void KMessageDialog_SetButtons3(KMessageDialog* self, const KGuiItem* primaryAction, const KGuiItem* secondaryAction, const KGuiItem* cancelAction) {
    self->setButtons(*primaryAction, *secondaryAction, *cancelAction);
}

void KMessageDialog_Beep2(int typeVal, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    KMessageDialog::beep(static_cast<KMessageDialog::Type>(typeVal), text_QString);
}

void KMessageDialog_Beep3(int typeVal, const libqt_string text, QWidget* dialog) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    KMessageDialog::beep(static_cast<KMessageDialog::Type>(typeVal), text_QString, dialog);
}

// Base class handler implementation
int KMessageDialog_QBaseMetacall(KMessageDialog* self, int param1, int param2, void** param3) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Metacall_IsBase(true);
        return vkmessagedialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KMessageDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMetacall(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Metacall_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KMessageDialog_QBaseShowEvent(KMessageDialog* self, QShowEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ShowEvent_IsBase(true);
        vkmessagedialog->showEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnShowEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ShowEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_SetVisible(KMessageDialog* self, bool visible) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setVisible(visible);
    } else {
        self->KMessageDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseSetVisible(KMessageDialog* self, bool visible) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_SetVisible_IsBase(true);
        vkmessagedialog->setVisible(visible);
    } else {
        self->KMessageDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnSetVisible(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_SetVisible_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMessageDialog_SizeHint(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return new QSize(vkmessagedialog->sizeHint());
    } else {
        return new QSize(((VirtualKMessageDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KMessageDialog_QBaseSizeHint(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_SizeHint_IsBase(true);
        return new QSize(vkmessagedialog->sizeHint());
    } else {
        return new QSize(((VirtualKMessageDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnSizeHint(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_SizeHint_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KMessageDialog_MinimumSizeHint(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return new QSize(vkmessagedialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMessageDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KMessageDialog_QBaseMinimumSizeHint(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkmessagedialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMessageDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMinimumSizeHint(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_Open(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->open();
    } else {
        self->KMessageDialog::open();
    }
}

// Base class handler implementation
void KMessageDialog_QBaseOpen(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Open_IsBase(true);
        vkmessagedialog->open();
    } else {
        self->KMessageDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnOpen(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Open_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageDialog_Exec(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->exec();
    } else {
        return self->KMessageDialog::exec();
    }
}

// Base class handler implementation
int KMessageDialog_QBaseExec(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Exec_IsBase(true);
        return vkmessagedialog->exec();
    } else {
        return self->KMessageDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnExec(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Exec_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_Done(KMessageDialog* self, int param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->done(static_cast<int>(param1));
    } else {
        self->KMessageDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KMessageDialog_QBaseDone(KMessageDialog* self, int param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Done_IsBase(true);
        vkmessagedialog->done(static_cast<int>(param1));
    } else {
        self->KMessageDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDone(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Done_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_Accept(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->accept();
    } else {
        self->KMessageDialog::accept();
    }
}

// Base class handler implementation
void KMessageDialog_QBaseAccept(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Accept_IsBase(true);
        vkmessagedialog->accept();
    } else {
        self->KMessageDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnAccept(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Accept_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_Reject(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->reject();
    } else {
        self->KMessageDialog::reject();
    }
}

// Base class handler implementation
void KMessageDialog_QBaseReject(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Reject_IsBase(true);
        vkmessagedialog->reject();
    } else {
        self->KMessageDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnReject(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Reject_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_KeyPressEvent(KMessageDialog* self, QKeyEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->keyPressEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseKeyPressEvent(KMessageDialog* self, QKeyEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_KeyPressEvent_IsBase(true);
        vkmessagedialog->keyPressEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnKeyPressEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_CloseEvent(KMessageDialog* self, QCloseEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->closeEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseCloseEvent(KMessageDialog* self, QCloseEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_CloseEvent_IsBase(true);
        vkmessagedialog->closeEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnCloseEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_CloseEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_ResizeEvent(KMessageDialog* self, QResizeEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->resizeEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseResizeEvent(KMessageDialog* self, QResizeEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ResizeEvent_IsBase(true);
        vkmessagedialog->resizeEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnResizeEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_ContextMenuEvent(KMessageDialog* self, QContextMenuEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->contextMenuEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseContextMenuEvent(KMessageDialog* self, QContextMenuEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ContextMenuEvent_IsBase(true);
        vkmessagedialog->contextMenuEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnContextMenuEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageDialog_EventFilter(KMessageDialog* self, QObject* param1, QEvent* param2) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKMessageDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KMessageDialog_QBaseEventFilter(KMessageDialog* self, QObject* param1, QEvent* param2) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_EventFilter_IsBase(true);
        return vkmessagedialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKMessageDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnEventFilter(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_EventFilter_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageDialog_DevType(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->devType();
    } else {
        return self->KMessageDialog::devType();
    }
}

// Base class handler implementation
int KMessageDialog_QBaseDevType(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DevType_IsBase(true);
        return vkmessagedialog->devType();
    } else {
        return self->KMessageDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDevType(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DevType_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageDialog_HeightForWidth(const KMessageDialog* self, int param1) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMessageDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KMessageDialog_QBaseHeightForWidth(const KMessageDialog* self, int param1) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_HeightForWidth_IsBase(true);
        return vkmessagedialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KMessageDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnHeightForWidth(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageDialog_HasHeightForWidth(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->hasHeightForWidth();
    } else {
        return self->KMessageDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KMessageDialog_QBaseHasHeightForWidth(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_HasHeightForWidth_IsBase(true);
        return vkmessagedialog->hasHeightForWidth();
    } else {
        return self->KMessageDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnHasHeightForWidth(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KMessageDialog_PaintEngine(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->paintEngine();
    } else {
        return self->KMessageDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KMessageDialog_QBasePaintEngine(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_PaintEngine_IsBase(true);
        return vkmessagedialog->paintEngine();
    } else {
        return self->KMessageDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnPaintEngine(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_PaintEngine_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageDialog_Event(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->event(event);
    } else {
        return ((VirtualKMessageDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KMessageDialog_QBaseEvent(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Event_IsBase(true);
        return vkmessagedialog->event(event);
    } else {
        return ((VirtualKMessageDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Event_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_MousePressEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->mousePressEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseMousePressEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MousePressEvent_IsBase(true);
        vkmessagedialog->mousePressEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMousePressEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_MouseReleaseEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseMouseReleaseEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MouseReleaseEvent_IsBase(true);
        vkmessagedialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMouseReleaseEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_MouseDoubleClickEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseMouseDoubleClickEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MouseDoubleClickEvent_IsBase(true);
        vkmessagedialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMouseDoubleClickEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_MouseMoveEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->mouseMoveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseMouseMoveEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MouseMoveEvent_IsBase(true);
        vkmessagedialog->mouseMoveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMouseMoveEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_WheelEvent(KMessageDialog* self, QWheelEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->wheelEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseWheelEvent(KMessageDialog* self, QWheelEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_WheelEvent_IsBase(true);
        vkmessagedialog->wheelEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnWheelEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_WheelEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_KeyReleaseEvent(KMessageDialog* self, QKeyEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->keyReleaseEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseKeyReleaseEvent(KMessageDialog* self, QKeyEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_KeyReleaseEvent_IsBase(true);
        vkmessagedialog->keyReleaseEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnKeyReleaseEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_FocusInEvent(KMessageDialog* self, QFocusEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->focusInEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseFocusInEvent(KMessageDialog* self, QFocusEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusInEvent_IsBase(true);
        vkmessagedialog->focusInEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnFocusInEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_FocusOutEvent(KMessageDialog* self, QFocusEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->focusOutEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseFocusOutEvent(KMessageDialog* self, QFocusEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusOutEvent_IsBase(true);
        vkmessagedialog->focusOutEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnFocusOutEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_EnterEvent(KMessageDialog* self, QEnterEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->enterEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseEnterEvent(KMessageDialog* self, QEnterEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_EnterEvent_IsBase(true);
        vkmessagedialog->enterEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnEnterEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_EnterEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_LeaveEvent(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->leaveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseLeaveEvent(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_LeaveEvent_IsBase(true);
        vkmessagedialog->leaveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnLeaveEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_PaintEvent(KMessageDialog* self, QPaintEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->paintEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBasePaintEvent(KMessageDialog* self, QPaintEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_PaintEvent_IsBase(true);
        vkmessagedialog->paintEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnPaintEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_PaintEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_MoveEvent(KMessageDialog* self, QMoveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->moveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseMoveEvent(KMessageDialog* self, QMoveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MoveEvent_IsBase(true);
        vkmessagedialog->moveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMoveEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_MoveEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_TabletEvent(KMessageDialog* self, QTabletEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->tabletEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseTabletEvent(KMessageDialog* self, QTabletEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_TabletEvent_IsBase(true);
        vkmessagedialog->tabletEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnTabletEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_TabletEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_ActionEvent(KMessageDialog* self, QActionEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->actionEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseActionEvent(KMessageDialog* self, QActionEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ActionEvent_IsBase(true);
        vkmessagedialog->actionEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnActionEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ActionEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_DragEnterEvent(KMessageDialog* self, QDragEnterEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->dragEnterEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseDragEnterEvent(KMessageDialog* self, QDragEnterEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DragEnterEvent_IsBase(true);
        vkmessagedialog->dragEnterEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDragEnterEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_DragMoveEvent(KMessageDialog* self, QDragMoveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->dragMoveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseDragMoveEvent(KMessageDialog* self, QDragMoveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DragMoveEvent_IsBase(true);
        vkmessagedialog->dragMoveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDragMoveEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_DragLeaveEvent(KMessageDialog* self, QDragLeaveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->dragLeaveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseDragLeaveEvent(KMessageDialog* self, QDragLeaveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DragLeaveEvent_IsBase(true);
        vkmessagedialog->dragLeaveEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDragLeaveEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_DropEvent(KMessageDialog* self, QDropEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->dropEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseDropEvent(KMessageDialog* self, QDropEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DropEvent_IsBase(true);
        vkmessagedialog->dropEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDropEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DropEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_HideEvent(KMessageDialog* self, QHideEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->hideEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseHideEvent(KMessageDialog* self, QHideEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_HideEvent_IsBase(true);
        vkmessagedialog->hideEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnHideEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_HideEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageDialog_NativeEvent(KMessageDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMessageDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KMessageDialog_QBaseNativeEvent(KMessageDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_NativeEvent_IsBase(true);
        return vkmessagedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMessageDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnNativeEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_NativeEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_ChangeEvent(KMessageDialog* self, QEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->changeEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseChangeEvent(KMessageDialog* self, QEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ChangeEvent_IsBase(true);
        vkmessagedialog->changeEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnChangeEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageDialog_Metric(const KMessageDialog* self, int param1) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMessageDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KMessageDialog_QBaseMetric(const KMessageDialog* self, int param1) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Metric_IsBase(true);
        return vkmessagedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMessageDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMetric(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Metric_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_InitPainter(const KMessageDialog* self, QPainter* painter) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->initPainter(painter);
    } else {
        ((VirtualKMessageDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseInitPainter(const KMessageDialog* self, QPainter* painter) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_InitPainter_IsBase(true);
        vkmessagedialog->initPainter(painter);
    } else {
        ((VirtualKMessageDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnInitPainter(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_InitPainter_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KMessageDialog_Redirected(const KMessageDialog* self, QPoint* offset) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->redirected(offset);
    } else {
        return ((VirtualKMessageDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KMessageDialog_QBaseRedirected(const KMessageDialog* self, QPoint* offset) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Redirected_IsBase(true);
        return vkmessagedialog->redirected(offset);
    } else {
        return ((VirtualKMessageDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnRedirected(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Redirected_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KMessageDialog_SharedPainter(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->sharedPainter();
    } else {
        return ((VirtualKMessageDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KMessageDialog_QBaseSharedPainter(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_SharedPainter_IsBase(true);
        return vkmessagedialog->sharedPainter();
    } else {
        return ((VirtualKMessageDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnSharedPainter(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_SharedPainter_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_InputMethodEvent(KMessageDialog* self, QInputMethodEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->inputMethodEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseInputMethodEvent(KMessageDialog* self, QInputMethodEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_InputMethodEvent_IsBase(true);
        vkmessagedialog->inputMethodEvent(param1);
    } else {
        ((VirtualKMessageDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnInputMethodEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KMessageDialog_InputMethodQuery(const KMessageDialog* self, int param1) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return new QVariant(vkmessagedialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMessageDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KMessageDialog_QBaseInputMethodQuery(const KMessageDialog* self, int param1) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkmessagedialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMessageDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnInputMethodQuery(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageDialog_FocusNextPrevChild(KMessageDialog* self, bool next) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKMessageDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KMessageDialog_QBaseFocusNextPrevChild(KMessageDialog* self, bool next) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusNextPrevChild_IsBase(true);
        return vkmessagedialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKMessageDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnFocusNextPrevChild(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_TimerEvent(KMessageDialog* self, QTimerEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->timerEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseTimerEvent(KMessageDialog* self, QTimerEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_TimerEvent_IsBase(true);
        vkmessagedialog->timerEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnTimerEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_TimerEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_ChildEvent(KMessageDialog* self, QChildEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->childEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseChildEvent(KMessageDialog* self, QChildEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ChildEvent_IsBase(true);
        vkmessagedialog->childEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnChildEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ChildEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_CustomEvent(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->customEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseCustomEvent(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_CustomEvent_IsBase(true);
        vkmessagedialog->customEvent(event);
    } else {
        ((VirtualKMessageDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnCustomEvent(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_CustomEvent_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_ConnectNotify(KMessageDialog* self, const QMetaMethod* signal) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->connectNotify(*signal);
    } else {
        ((VirtualKMessageDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseConnectNotify(KMessageDialog* self, const QMetaMethod* signal) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ConnectNotify_IsBase(true);
        vkmessagedialog->connectNotify(*signal);
    } else {
        ((VirtualKMessageDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnConnectNotify(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_DisconnectNotify(KMessageDialog* self, const QMetaMethod* signal) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->disconnectNotify(*signal);
    } else {
        ((VirtualKMessageDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseDisconnectNotify(KMessageDialog* self, const QMetaMethod* signal) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DisconnectNotify_IsBase(true);
        vkmessagedialog->disconnectNotify(*signal);
    } else {
        ((VirtualKMessageDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDisconnectNotify(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_AdjustPosition(KMessageDialog* self, QWidget* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->adjustPosition(param1);
    } else {
        ((VirtualKMessageDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KMessageDialog_QBaseAdjustPosition(KMessageDialog* self, QWidget* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_AdjustPosition_IsBase(true);
        vkmessagedialog->adjustPosition(param1);
    } else {
        ((VirtualKMessageDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnAdjustPosition(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_UpdateMicroFocus(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->updateMicroFocus();
    } else {
        ((VirtualKMessageDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KMessageDialog_QBaseUpdateMicroFocus(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_UpdateMicroFocus_IsBase(true);
        vkmessagedialog->updateMicroFocus();
    } else {
        ((VirtualKMessageDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnUpdateMicroFocus(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_Create(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->create();
    } else {
        ((VirtualKMessageDialog*)self)->create();
    }
}

// Base class handler implementation
void KMessageDialog_QBaseCreate(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Create_IsBase(true);
        vkmessagedialog->create();
    } else {
        ((VirtualKMessageDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnCreate(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Create_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageDialog_Destroy(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->destroy();
    } else {
        ((VirtualKMessageDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KMessageDialog_QBaseDestroy(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Destroy_IsBase(true);
        vkmessagedialog->destroy();
    } else {
        ((VirtualKMessageDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDestroy(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Destroy_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageDialog_FocusNextChild(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->focusNextChild();
    } else {
        return ((VirtualKMessageDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KMessageDialog_QBaseFocusNextChild(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusNextChild_IsBase(true);
        return vkmessagedialog->focusNextChild();
    } else {
        return ((VirtualKMessageDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnFocusNextChild(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageDialog_FocusPreviousChild(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->focusPreviousChild();
    } else {
        return ((VirtualKMessageDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KMessageDialog_QBaseFocusPreviousChild(KMessageDialog* self) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusPreviousChild_IsBase(true);
        return vkmessagedialog->focusPreviousChild();
    } else {
        return ((VirtualKMessageDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnFocusPreviousChild(KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KMessageDialog_Sender(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->sender();
    } else {
        return ((VirtualKMessageDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KMessageDialog_QBaseSender(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Sender_IsBase(true);
        return vkmessagedialog->sender();
    } else {
        return ((VirtualKMessageDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnSender(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Sender_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageDialog_SenderSignalIndex(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->senderSignalIndex();
    } else {
        return ((VirtualKMessageDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KMessageDialog_QBaseSenderSignalIndex(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_SenderSignalIndex_IsBase(true);
        return vkmessagedialog->senderSignalIndex();
    } else {
        return ((VirtualKMessageDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnSenderSignalIndex(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageDialog_Receivers(const KMessageDialog* self, const char* signal) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->receivers(signal);
    } else {
        return ((VirtualKMessageDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KMessageDialog_QBaseReceivers(const KMessageDialog* self, const char* signal) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Receivers_IsBase(true);
        return vkmessagedialog->receivers(signal);
    } else {
        return ((VirtualKMessageDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnReceivers(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_Receivers_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageDialog_IsSignalConnected(const KMessageDialog* self, const QMetaMethod* signal) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKMessageDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KMessageDialog_QBaseIsSignalConnected(const KMessageDialog* self, const QMetaMethod* signal) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_IsSignalConnected_IsBase(true);
        return vkmessagedialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKMessageDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnIsSignalConnected(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KMessageDialog_GetDecodedMetricF(const KMessageDialog* self, int metricA, int metricB) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        return vkmessagedialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMessageDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KMessageDialog_QBaseGetDecodedMetricF(const KMessageDialog* self, int metricA, int metricB) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_GetDecodedMetricF_IsBase(true);
        return vkmessagedialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMessageDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnGetDecodedMetricF(const KMessageDialog* self, intptr_t slot) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog && vkmessagedialog->isVirtualKMessageDialog) {
        vkmessagedialog->setKMessageDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKMessageDialog::KMessageDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KMessageDialog_Delete(KMessageDialog* self) {
    delete self;
}
