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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KMessageDialog_Tr(const char* s) {
    auto _ret = KMessageDialog::tr(s);
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
    if (vkmessagedialog) {
        vkmessagedialog->showEvent(event);
    }
}

libqt_string KMessageDialog_Tr2(const char* s, const char* c) {
    auto _ret = KMessageDialog::tr(s, c);
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
    auto _ret = KMessageDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KMessageDialog_SuperMetaObject(const KMessageDialog* self) {
    return (QMetaObject*)self->KMessageDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMetaObject(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_metaobject_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KMessageDialog_SuperMetacast(KMessageDialog* self, const char* param1) {
    return self->KMessageDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMetacast(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_metacast_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KMessageDialog_SuperMetacall(KMessageDialog* self, int param1, int param2, void** param3) {
    return self->KMessageDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMetacall(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_metacall_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KMessageDialog_SuperShowEvent(KMessageDialog* self, QShowEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnShowEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_showevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_SetVisible(KMessageDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KMessageDialog_SuperSetVisible(KMessageDialog* self, bool visible) {
    self->KMessageDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnSetVisible(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_setvisible_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KMessageDialog_SizeHint(const KMessageDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KMessageDialog_SuperSizeHint(const KMessageDialog* self) {
    return new QSize(self->KMessageDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnSizeHint(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_sizehint_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KMessageDialog_MinimumSizeHint(const KMessageDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KMessageDialog_SuperMinimumSizeHint(const KMessageDialog* self) {
    return new QSize(self->KMessageDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMinimumSizeHint(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_minimumsizehint_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_Open(KMessageDialog* self) {
    self->open();
}

// Base class handler implementation
void KMessageDialog_SuperOpen(KMessageDialog* self) {
    self->KMessageDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnOpen(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_open_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KMessageDialog_Exec(KMessageDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KMessageDialog_SuperExec(KMessageDialog* self) {
    return self->KMessageDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnExec(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_exec_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_Done(KMessageDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KMessageDialog_SuperDone(KMessageDialog* self, int param1) {
    self->KMessageDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDone(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_done_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_Accept(KMessageDialog* self) {
    self->accept();
}

// Base class handler implementation
void KMessageDialog_SuperAccept(KMessageDialog* self) {
    self->KMessageDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnAccept(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_accept_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_Reject(KMessageDialog* self) {
    self->reject();
}

// Base class handler implementation
void KMessageDialog_SuperReject(KMessageDialog* self) {
    self->KMessageDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnReject(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_reject_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_KeyPressEvent(KMessageDialog* self, QKeyEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperKeyPressEvent(KMessageDialog* self, QKeyEvent* param1) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnKeyPressEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_keypressevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_CloseEvent(KMessageDialog* self, QCloseEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperCloseEvent(KMessageDialog* self, QCloseEvent* param1) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnCloseEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_closeevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_ResizeEvent(KMessageDialog* self, QResizeEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperResizeEvent(KMessageDialog* self, QResizeEvent* param1) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnResizeEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_resizeevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_ContextMenuEvent(KMessageDialog* self, QContextMenuEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperContextMenuEvent(KMessageDialog* self, QContextMenuEvent* param1) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnContextMenuEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_contextmenuevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KMessageDialog_EventFilter(KMessageDialog* self, QObject* param1, QEvent* param2) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        return vkmessagedialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMessageDialog_SuperEventFilter(KMessageDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        return vkmessagedialog->KMessageDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnEventFilter(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_eventfilter_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KMessageDialog_DevType(const KMessageDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KMessageDialog_SuperDevType(const KMessageDialog* self) {
    return self->KMessageDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDevType(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_devtype_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KMessageDialog_HeightForWidth(const KMessageDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KMessageDialog_SuperHeightForWidth(const KMessageDialog* self, int param1) {
    return self->KMessageDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnHeightForWidth(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_heightforwidth_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KMessageDialog_HasHeightForWidth(const KMessageDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KMessageDialog_SuperHasHeightForWidth(const KMessageDialog* self) {
    return self->KMessageDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnHasHeightForWidth(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_hasheightforwidth_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KMessageDialog_PaintEngine(const KMessageDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KMessageDialog_SuperPaintEngine(const KMessageDialog* self) {
    return self->KMessageDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnPaintEngine(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_paintengine_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KMessageDialog_Event(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        return vkmessagedialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMessageDialog_SuperEvent(KMessageDialog* self, QEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        return vkmessagedialog->KMessageDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_event_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_MousePressEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperMousePressEvent(KMessageDialog* self, QMouseEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMousePressEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_mousepressevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_MouseReleaseEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperMouseReleaseEvent(KMessageDialog* self, QMouseEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMouseReleaseEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_mousereleaseevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_MouseDoubleClickEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperMouseDoubleClickEvent(KMessageDialog* self, QMouseEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMouseDoubleClickEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_MouseMoveEvent(KMessageDialog* self, QMouseEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperMouseMoveEvent(KMessageDialog* self, QMouseEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMouseMoveEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_mousemoveevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_WheelEvent(KMessageDialog* self, QWheelEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperWheelEvent(KMessageDialog* self, QWheelEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnWheelEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_wheelevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_KeyReleaseEvent(KMessageDialog* self, QKeyEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperKeyReleaseEvent(KMessageDialog* self, QKeyEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnKeyReleaseEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_keyreleaseevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_FocusInEvent(KMessageDialog* self, QFocusEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperFocusInEvent(KMessageDialog* self, QFocusEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnFocusInEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_focusinevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_FocusOutEvent(KMessageDialog* self, QFocusEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperFocusOutEvent(KMessageDialog* self, QFocusEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnFocusOutEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_focusoutevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_EnterEvent(KMessageDialog* self, QEnterEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperEnterEvent(KMessageDialog* self, QEnterEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnEnterEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_enterevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_LeaveEvent(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperLeaveEvent(KMessageDialog* self, QEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnLeaveEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_leaveevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_PaintEvent(KMessageDialog* self, QPaintEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperPaintEvent(KMessageDialog* self, QPaintEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnPaintEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_paintevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_MoveEvent(KMessageDialog* self, QMoveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperMoveEvent(KMessageDialog* self, QMoveEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMoveEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_moveevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_TabletEvent(KMessageDialog* self, QTabletEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperTabletEvent(KMessageDialog* self, QTabletEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnTabletEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_tabletevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_ActionEvent(KMessageDialog* self, QActionEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperActionEvent(KMessageDialog* self, QActionEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnActionEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_actionevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_DragEnterEvent(KMessageDialog* self, QDragEnterEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperDragEnterEvent(KMessageDialog* self, QDragEnterEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDragEnterEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_dragenterevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_DragMoveEvent(KMessageDialog* self, QDragMoveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperDragMoveEvent(KMessageDialog* self, QDragMoveEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDragMoveEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_dragmoveevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_DragLeaveEvent(KMessageDialog* self, QDragLeaveEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperDragLeaveEvent(KMessageDialog* self, QDragLeaveEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDragLeaveEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_dragleaveevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_DropEvent(KMessageDialog* self, QDropEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperDropEvent(KMessageDialog* self, QDropEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDropEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_dropevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_HideEvent(KMessageDialog* self, QHideEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperHideEvent(KMessageDialog* self, QHideEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnHideEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_hideevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KMessageDialog_NativeEvent(KMessageDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        return vkmessagedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMessageDialog_SuperNativeEvent(KMessageDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        return vkmessagedialog->KMessageDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KMessageDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnNativeEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_nativeevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_ChangeEvent(KMessageDialog* self, QEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperChangeEvent(KMessageDialog* self, QEvent* param1) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnChangeEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_changeevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KMessageDialog_Metric(const KMessageDialog* self, int param1) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog) {
        return vkmessagedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KMessageDialog_SuperMetric(const KMessageDialog* self, int param1) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        return vkmessagedialog->KMessageDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KMessageDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnMetric(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_metric_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_InitPainter(const KMessageDialog* self, QPainter* painter) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog) {
        vkmessagedialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperInitPainter(const KMessageDialog* self, QPainter* painter) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        vkmessagedialog->KMessageDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnInitPainter(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_initpainter_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KMessageDialog_Redirected(const KMessageDialog* self, QPoint* offset) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog) {
        return vkmessagedialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KMessageDialog_SuperRedirected(const KMessageDialog* self, QPoint* offset) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        return vkmessagedialog->KMessageDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnRedirected(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_redirected_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KMessageDialog_SharedPainter(const KMessageDialog* self) {
    auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self));
    if (vkmessagedialog) {
        return vkmessagedialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KMessageDialog_SuperSharedPainter(const KMessageDialog* self) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        return vkmessagedialog->KMessageDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KMessageDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnSharedPainter(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_sharedpainter_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_InputMethodEvent(KMessageDialog* self, QInputMethodEvent* param1) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperInputMethodEvent(KMessageDialog* self, QInputMethodEvent* param1) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnInputMethodEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_inputmethodevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KMessageDialog_InputMethodQuery(const KMessageDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KMessageDialog_SuperInputMethodQuery(const KMessageDialog* self, int param1) {
    return new QVariant(self->KMessageDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnInputMethodQuery(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self)))
        vkmessagedialog->kmessagedialog_inputmethodquery_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KMessageDialog_FocusNextPrevChild(KMessageDialog* self, bool next) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        return vkmessagedialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMessageDialog_SuperFocusNextPrevChild(KMessageDialog* self, bool next) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        return vkmessagedialog->KMessageDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnFocusNextPrevChild(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_focusnextprevchild_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_TimerEvent(KMessageDialog* self, QTimerEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperTimerEvent(KMessageDialog* self, QTimerEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnTimerEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_timerevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_ChildEvent(KMessageDialog* self, QChildEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperChildEvent(KMessageDialog* self, QChildEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnChildEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_childevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_CustomEvent(KMessageDialog* self, QEvent* event) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperCustomEvent(KMessageDialog* self, QEvent* event) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnCustomEvent(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_customevent_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_ConnectNotify(KMessageDialog* self, const QMetaMethod* signal) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperConnectNotify(KMessageDialog* self, const QMetaMethod* signal) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnConnectNotify(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_connectnotify_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KMessageDialog_DisconnectNotify(KMessageDialog* self, const QMetaMethod* signal) {
    auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self);
    if (vkmessagedialog) {
        vkmessagedialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMessageDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageDialog_SuperDisconnectNotify(KMessageDialog* self, const QMetaMethod* signal) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->KMessageDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMessageDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageDialog_OnDisconnectNotify(KMessageDialog* self, intptr_t slot) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self))
        vkmessagedialog->kmessagedialog_disconnectnotify_callback = reinterpret_cast<VirtualKMessageDialog::KMessageDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KMessageDialog_AdjustPosition(KMessageDialog* self, QWidget* param1) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->VirtualKMessageDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KMessageDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KMessageDialog_UpdateMicroFocus(KMessageDialog* self) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->VirtualKMessageDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KMessageDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KMessageDialog_Create(KMessageDialog* self) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->VirtualKMessageDialog::create();
    } else
        qFatal("Error: Protected method KMessageDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KMessageDialog_Destroy(KMessageDialog* self) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        vkmessagedialog->VirtualKMessageDialog::destroy();
    } else
        qFatal("Error: Protected method KMessageDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMessageDialog_FocusNextChild(KMessageDialog* self) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        return vkmessagedialog->VirtualKMessageDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KMessageDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMessageDialog_FocusPreviousChild(KMessageDialog* self) {
    if (auto* vkmessagedialog = dynamic_cast<VirtualKMessageDialog*>(self)) {
        return vkmessagedialog->VirtualKMessageDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KMessageDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KMessageDialog_Sender(const KMessageDialog* self) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        return vkmessagedialog->VirtualKMessageDialog::sender();
    } else
        qFatal("Error: Protected method KMessageDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KMessageDialog_SenderSignalIndex(const KMessageDialog* self) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        return vkmessagedialog->VirtualKMessageDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KMessageDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KMessageDialog_Receivers(const KMessageDialog* self, const char* signal) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        return vkmessagedialog->VirtualKMessageDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KMessageDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMessageDialog_IsSignalConnected(const KMessageDialog* self, const QMetaMethod* signal) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        return vkmessagedialog->VirtualKMessageDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KMessageDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KMessageDialog_GetDecodedMetricF(const KMessageDialog* self, int metricA, int metricB) {
    if (auto* vkmessagedialog = const_cast<VirtualKMessageDialog*>(dynamic_cast<const VirtualKMessageDialog*>(self))) {
        return vkmessagedialog->VirtualKMessageDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KMessageDialog::getDecodedMetricF called without a directly constructed type");
}

void KMessageDialog_Delete(KMessageDialog* self) {
    delete self;
}
