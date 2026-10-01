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
#include <QFont>
#include <QFontDialog>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <qfontdialog.h>
#include "libqfontdialog.h"
#include "libqfontdialog.hxx"

QFontDialog* QFontDialog_new(QWidget* parent) {
    return new VirtualQFontDialog(parent);
}

QFontDialog* QFontDialog_new2() {
    return new VirtualQFontDialog();
}

QFontDialog* QFontDialog_new3(const QFont* initial) {
    return new VirtualQFontDialog(*initial);
}

QFontDialog* QFontDialog_new4(const QFont* initial, QWidget* parent) {
    return new VirtualQFontDialog(*initial, parent);
}

QMetaObject* QFontDialog_MetaObject(const QFontDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFontDialog_Metacast(QFontDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFontDialog_Metacall(QFontDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFontDialog_Tr(const char* s) {
    auto _ret = QFontDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontDialog_SetCurrentFont(QFontDialog* self, const QFont* font) {
    self->setCurrentFont(*font);
}

QFont* QFontDialog_CurrentFont(const QFontDialog* self) {
    return new QFont(self->currentFont());
}

QFont* QFontDialog_SelectedFont(const QFontDialog* self) {
    return new QFont(self->selectedFont());
}

void QFontDialog_SetOption(QFontDialog* self, int option) {
    self->setOption(static_cast<QFontDialog::FontDialogOption>(option));
}

bool QFontDialog_TestOption(const QFontDialog* self, int option) {
    return self->testOption(static_cast<QFontDialog::FontDialogOption>(option));
}

void QFontDialog_SetOptions(QFontDialog* self, int options) {
    self->setOptions(static_cast<QFontDialog::FontDialogOptions>(options));
}

int QFontDialog_Options(const QFontDialog* self) {
    return static_cast<int>(self->options());
}

void QFontDialog_SetVisible(QFontDialog* self, bool visible) {
    self->setVisible(visible);
}

QFont* QFontDialog_GetFont(bool* ok) {
    return new QFont(QFontDialog::getFont(ok));
}

QFont* QFontDialog_GetFont2(bool* ok, const QFont* initial) {
    return new QFont(QFontDialog::getFont(ok, *initial));
}

void QFontDialog_CurrentFontChanged(QFontDialog* self, const QFont* font) {
    self->currentFontChanged(*font);
}

void QFontDialog_Connect_CurrentFontChanged(QFontDialog* self, intptr_t slot) {
    void (*slotFunc)(QFontDialog*, QFont*) = reinterpret_cast<void (*)(QFontDialog*, QFont*)>(slot);
    QFontDialog::connect(self,
                         static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::currentFontChanged),
                         [self, slotFunc](const QFont& font) {
                             const QFont& font_ret = font;
                             // Cast returned reference into pointer
                             QFont* sigval1 = const_cast<QFont*>(&font_ret);
                             slotFunc(self, sigval1);
                         });
}

void QFontDialog_FontSelected(QFontDialog* self, const QFont* font) {
    self->fontSelected(*font);
}

void QFontDialog_Connect_FontSelected(QFontDialog* self, intptr_t slot) {
    void (*slotFunc)(QFontDialog*, QFont*) = reinterpret_cast<void (*)(QFontDialog*, QFont*)>(slot);
    QFontDialog::connect(self,
                         static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::fontSelected),
                         [self, slotFunc](const QFont& font) {
                             const QFont& font_ret = font;
                             // Cast returned reference into pointer
                             QFont* sigval1 = const_cast<QFont*>(&font_ret);
                             slotFunc(self, sigval1);
                         });
}

void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->changeEvent(event);
    }
}

void QFontDialog_Done(QFontDialog* self, int result) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->done(static_cast<int>(result));
    }
}

bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        return vqfontdialog->eventFilter(object, event);
    }
    qFatal("Error: Protected method QFontDialog::eventFilter called without a directly constructed type");
}

libqt_string QFontDialog_Tr2(const char* s, const char* c) {
    auto _ret = QFontDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFontDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFontDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontDialog_SetOption2(QFontDialog* self, int option, bool on) {
    self->setOption(static_cast<QFontDialog::FontDialogOption>(option), on);
}

QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent) {
    return new QFont(QFontDialog::getFont(ok, parent));
}

QFont* QFontDialog_GetFont3(bool* ok, const QFont* initial, QWidget* parent) {
    return new QFont(QFontDialog::getFont(ok, *initial, parent));
}

QFont* QFontDialog_GetFont4(bool* ok, const QFont* initial, QWidget* parent, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString));
}

QFont* QFontDialog_GetFont5(bool* ok, const QFont* initial, QWidget* parent, const libqt_string title, int options) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString, static_cast<QFontDialog::FontDialogOptions>(options)));
}

// Base class handler implementation
QMetaObject* QFontDialog_SuperMetaObject(const QFontDialog* self) {
    return (QMetaObject*)self->QFontDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMetaObject(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_metaobject_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFontDialog_SuperMetacast(QFontDialog* self, const char* param1) {
    return self->QFontDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMetacast(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_metacast_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFontDialog_SuperMetacall(QFontDialog* self, int param1, int param2, void** param3) {
    return self->QFontDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMetacall(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_metacall_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void QFontDialog_SuperSetVisible(QFontDialog* self, bool visible) {
    self->QFontDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSetVisible(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_setvisible_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_SetVisible_Callback>(slot);
}

// Base class handler implementation
void QFontDialog_SuperChangeEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnChangeEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_changeevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QFontDialog_SuperDone(QFontDialog* self, int result) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::done(static_cast<int>(result));
    } else
        qFatal("Error: Protected virtual method QFontDialog::done called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDone(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_done_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Done_Callback>(slot);
}

// Base class handler implementation
bool QFontDialog_SuperEventFilter(QFontDialog* self, QObject* object, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->QFontDialog::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEventFilter(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_eventfilter_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QFontDialog_SizeHint(const QFontDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QFontDialog_SuperSizeHint(const QFontDialog* self) {
    return new QSize(self->QFontDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSizeHint(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_sizehint_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QFontDialog_MinimumSizeHint(const QFontDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QFontDialog_SuperMinimumSizeHint(const QFontDialog* self) {
    return new QSize(self->QFontDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMinimumSizeHint(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_minimumsizehint_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_Open(QFontDialog* self) {
    self->open();
}

// Base class handler implementation
void QFontDialog_SuperOpen(QFontDialog* self) {
    self->QFontDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnOpen(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_open_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int QFontDialog_Exec(QFontDialog* self) {
    return self->exec();
}

// Base class handler implementation
int QFontDialog_SuperExec(QFontDialog* self) {
    return self->QFontDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnExec(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_exec_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_Accept(QFontDialog* self) {
    self->accept();
}

// Base class handler implementation
void QFontDialog_SuperAccept(QFontDialog* self) {
    self->QFontDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnAccept(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_accept_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_Reject(QFontDialog* self) {
    self->reject();
}

// Base class handler implementation
void QFontDialog_SuperReject(QFontDialog* self) {
    self->QFontDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnReject(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_reject_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_KeyPressEvent(QFontDialog* self, QKeyEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperKeyPressEvent(QFontDialog* self, QKeyEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFontDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnKeyPressEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_keypressevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_CloseEvent(QFontDialog* self, QCloseEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperCloseEvent(QFontDialog* self, QCloseEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFontDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnCloseEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_closeevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_ShowEvent(QFontDialog* self, QShowEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperShowEvent(QFontDialog* self, QShowEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFontDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnShowEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_showevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_ResizeEvent(QFontDialog* self, QResizeEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperResizeEvent(QFontDialog* self, QResizeEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFontDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnResizeEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_resizeevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_ContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFontDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnContextMenuEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_contextmenuevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
int QFontDialog_DevType(const QFontDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QFontDialog_SuperDevType(const QFontDialog* self) {
    return self->QFontDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDevType(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_devtype_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QFontDialog_HeightForWidth(const QFontDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QFontDialog_SuperHeightForWidth(const QFontDialog* self, int param1) {
    return self->QFontDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHeightForWidth(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_heightforwidth_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QFontDialog_HasHeightForWidth(const QFontDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QFontDialog_SuperHasHeightForWidth(const QFontDialog* self) {
    return self->QFontDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHasHeightForWidth(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_hasheightforwidth_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QFontDialog_PaintEngine(const QFontDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QFontDialog_SuperPaintEngine(const QFontDialog* self) {
    return self->QFontDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnPaintEngine(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_paintengine_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QFontDialog_Event(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        return vqfontdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFontDialog_SuperEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->QFontDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_event_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_MousePressEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperMousePressEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMousePressEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_mousepressevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_MouseReleaseEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperMouseReleaseEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseReleaseEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_mousereleaseevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_MouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperMouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseDoubleClickEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_MouseMoveEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperMouseMoveEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseMoveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_mousemoveevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_WheelEvent(QFontDialog* self, QWheelEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperWheelEvent(QFontDialog* self, QWheelEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnWheelEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_wheelevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_KeyReleaseEvent(QFontDialog* self, QKeyEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperKeyReleaseEvent(QFontDialog* self, QKeyEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnKeyReleaseEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_keyreleaseevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_FocusInEvent(QFontDialog* self, QFocusEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperFocusInEvent(QFontDialog* self, QFocusEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusInEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_focusinevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_FocusOutEvent(QFontDialog* self, QFocusEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperFocusOutEvent(QFontDialog* self, QFocusEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusOutEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_focusoutevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_EnterEvent(QFontDialog* self, QEnterEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperEnterEvent(QFontDialog* self, QEnterEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEnterEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_enterevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_LeaveEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperLeaveEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnLeaveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_leaveevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_PaintEvent(QFontDialog* self, QPaintEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperPaintEvent(QFontDialog* self, QPaintEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnPaintEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_paintevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_MoveEvent(QFontDialog* self, QMoveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperMoveEvent(QFontDialog* self, QMoveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMoveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_moveevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_TabletEvent(QFontDialog* self, QTabletEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperTabletEvent(QFontDialog* self, QTabletEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnTabletEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_tabletevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_ActionEvent(QFontDialog* self, QActionEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperActionEvent(QFontDialog* self, QActionEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnActionEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_actionevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_DragEnterEvent(QFontDialog* self, QDragEnterEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperDragEnterEvent(QFontDialog* self, QDragEnterEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragEnterEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_dragenterevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_DragMoveEvent(QFontDialog* self, QDragMoveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperDragMoveEvent(QFontDialog* self, QDragMoveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragMoveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_dragmoveevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_DragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperDragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragLeaveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_dragleaveevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_DropEvent(QFontDialog* self, QDropEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperDropEvent(QFontDialog* self, QDropEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDropEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_dropevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_HideEvent(QFontDialog* self, QHideEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperHideEvent(QFontDialog* self, QHideEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHideEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_hideevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QFontDialog_NativeEvent(QFontDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        return vqfontdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QFontDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFontDialog_SuperNativeEvent(QFontDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->QFontDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QFontDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnNativeEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_nativeevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QFontDialog_Metric(const QFontDialog* self, int param1) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog) {
        return vqfontdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QFontDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QFontDialog_SuperMetric(const QFontDialog* self, int param1) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->QFontDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QFontDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMetric(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_metric_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_InitPainter(const QFontDialog* self, QPainter* painter) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog) {
        vqfontdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperInitPainter(const QFontDialog* self, QPainter* painter) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->QFontDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QFontDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInitPainter(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_initpainter_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QFontDialog_Redirected(const QFontDialog* self, QPoint* offset) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog) {
        return vqfontdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QFontDialog_SuperRedirected(const QFontDialog* self, QPoint* offset) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->QFontDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QFontDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnRedirected(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_redirected_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QFontDialog_SharedPainter(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog) {
        return vqfontdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QFontDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QFontDialog_SuperSharedPainter(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->QFontDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QFontDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSharedPainter(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_sharedpainter_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_InputMethodEvent(QFontDialog* self, QInputMethodEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperInputMethodEvent(QFontDialog* self, QInputMethodEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFontDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInputMethodEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_inputmethodevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QFontDialog_InputMethodQuery(const QFontDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QFontDialog_SuperInputMethodQuery(const QFontDialog* self, int param1) {
    return new QVariant(self->QFontDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInputMethodQuery(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self)))
        vqfontdialog->qfontdialog_inputmethodquery_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QFontDialog_FocusNextPrevChild(QFontDialog* self, bool next) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        return vqfontdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFontDialog_SuperFocusNextPrevChild(QFontDialog* self, bool next) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->QFontDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QFontDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusNextPrevChild(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_focusnextprevchild_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_TimerEvent(QFontDialog* self, QTimerEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperTimerEvent(QFontDialog* self, QTimerEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnTimerEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_timerevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_ChildEvent(QFontDialog* self, QChildEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperChildEvent(QFontDialog* self, QChildEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnChildEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_childevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_CustomEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperCustomEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnCustomEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_customevent_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_ConnectNotify(QFontDialog* self, const QMetaMethod* signal) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperConnectNotify(QFontDialog* self, const QMetaMethod* signal) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFontDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnConnectNotify(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_connectnotify_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFontDialog_DisconnectNotify(QFontDialog* self, const QMetaMethod* signal) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog) {
        vqfontdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFontDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontDialog_SuperDisconnectNotify(QFontDialog* self, const QMetaMethod* signal) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->QFontDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFontDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDisconnectNotify(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self))
        vqfontdialog->qfontdialog_disconnectnotify_callback = reinterpret_cast<VirtualQFontDialog::QFontDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QFontDialog_AdjustPosition(QFontDialog* self, QWidget* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->VirtualQFontDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QFontDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QFontDialog_UpdateMicroFocus(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->VirtualQFontDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QFontDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QFontDialog_Create(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->VirtualQFontDialog::create();
    } else
        qFatal("Error: Protected method QFontDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QFontDialog_Destroy(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->VirtualQFontDialog::destroy();
    } else
        qFatal("Error: Protected method QFontDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFontDialog_FocusNextChild(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->VirtualQFontDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QFontDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFontDialog_FocusPreviousChild(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->VirtualQFontDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QFontDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QFontDialog_Sender(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->VirtualQFontDialog::sender();
    } else
        qFatal("Error: Protected method QFontDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFontDialog_SenderSignalIndex(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->VirtualQFontDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFontDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFontDialog_Receivers(const QFontDialog* self, const char* signal) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->VirtualQFontDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QFontDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFontDialog_IsSignalConnected(const QFontDialog* self, const QMetaMethod* signal) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->VirtualQFontDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFontDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QFontDialog_GetDecodedMetricF(const QFontDialog* self, int metricA, int metricB) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->VirtualQFontDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QFontDialog::getDecodedMetricF called without a directly constructed type");
}

void QFontDialog_Delete(QFontDialog* self) {
    delete self;
}
