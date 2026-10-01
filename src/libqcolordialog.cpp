#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QColorDialog>
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
#include <qcolordialog.h>
#include "libqcolordialog.h"
#include "libqcolordialog.hxx"

QColorDialog* QColorDialog_new(QWidget* parent) {
    return new VirtualQColorDialog(parent);
}

QColorDialog* QColorDialog_new2() {
    return new VirtualQColorDialog();
}

QColorDialog* QColorDialog_new3(const QColor* initial) {
    return new VirtualQColorDialog(*initial);
}

QColorDialog* QColorDialog_new4(const QColor* initial, QWidget* parent) {
    return new VirtualQColorDialog(*initial, parent);
}

QMetaObject* QColorDialog_MetaObject(const QColorDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QColorDialog_Metacast(QColorDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QColorDialog_Metacall(QColorDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QColorDialog_Tr(const char* s) {
    auto _ret = QColorDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QColorDialog_SetCurrentColor(QColorDialog* self, const QColor* color) {
    self->setCurrentColor(*color);
}

QColor* QColorDialog_CurrentColor(const QColorDialog* self) {
    return new QColor(self->currentColor());
}

QColor* QColorDialog_SelectedColor(const QColorDialog* self) {
    return new QColor(self->selectedColor());
}

void QColorDialog_SetOption(QColorDialog* self, int option) {
    self->setOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

bool QColorDialog_TestOption(const QColorDialog* self, int option) {
    return self->testOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

void QColorDialog_SetOptions(QColorDialog* self, int options) {
    self->setOptions(static_cast<QColorDialog::ColorDialogOptions>(options));
}

int QColorDialog_Options(const QColorDialog* self) {
    return static_cast<int>(self->options());
}

void QColorDialog_SetVisible(QColorDialog* self, bool visible) {
    self->setVisible(visible);
}

QColor* QColorDialog_GetColor() {
    return new QColor(QColorDialog::getColor());
}

int QColorDialog_CustomCount() {
    return QColorDialog::customCount();
}

QColor* QColorDialog_CustomColor(int index) {
    return new QColor(QColorDialog::customColor(static_cast<int>(index)));
}

void QColorDialog_SetCustomColor(int index, QColor* color) {
    QColorDialog::setCustomColor(static_cast<int>(index), *color);
}

QColor* QColorDialog_StandardColor(int index) {
    return new QColor(QColorDialog::standardColor(static_cast<int>(index)));
}

void QColorDialog_SetStandardColor(int index, QColor* color) {
    QColorDialog::setStandardColor(static_cast<int>(index), *color);
}

void QColorDialog_CurrentColorChanged(QColorDialog* self, const QColor* color) {
    self->currentColorChanged(*color);
}

void QColorDialog_Connect_CurrentColorChanged(QColorDialog* self, intptr_t slot) {
    void (*slotFunc)(QColorDialog*, QColor*) = reinterpret_cast<void (*)(QColorDialog*, QColor*)>(slot);
    QColorDialog::connect(self,
                          static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::currentColorChanged),
                          [self, slotFunc](const QColor& color) {
                              const QColor& color_ret = color;
                              // Cast returned reference into pointer
                              QColor* sigval1 = const_cast<QColor*>(&color_ret);
                              slotFunc(self, sigval1);
                          });
}

void QColorDialog_ColorSelected(QColorDialog* self, const QColor* color) {
    self->colorSelected(*color);
}

void QColorDialog_Connect_ColorSelected(QColorDialog* self, intptr_t slot) {
    void (*slotFunc)(QColorDialog*, QColor*) = reinterpret_cast<void (*)(QColorDialog*, QColor*)>(slot);
    QColorDialog::connect(self,
                          static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::colorSelected),
                          [self, slotFunc](const QColor& color) {
                              const QColor& color_ret = color;
                              // Cast returned reference into pointer
                              QColor* sigval1 = const_cast<QColor*>(&color_ret);
                              slotFunc(self, sigval1);
                          });
}

void QColorDialog_ChangeEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->changeEvent(event);
    }
}

void QColorDialog_Done(QColorDialog* self, int result) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->done(static_cast<int>(result));
    }
}

libqt_string QColorDialog_Tr2(const char* s, const char* c) {
    auto _ret = QColorDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QColorDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QColorDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QColorDialog_SetOption2(QColorDialog* self, int option, bool on) {
    self->setOption(static_cast<QColorDialog::ColorDialogOption>(option), on);
}

QColor* QColorDialog_GetColor1(const QColor* initial) {
    return new QColor(QColorDialog::getColor(*initial));
}

QColor* QColorDialog_GetColor2(const QColor* initial, QWidget* parent) {
    return new QColor(QColorDialog::getColor(*initial, parent));
}

QColor* QColorDialog_GetColor3(const QColor* initial, QWidget* parent, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new QColor(QColorDialog::getColor(*initial, parent, title_QString));
}

QColor* QColorDialog_GetColor4(const QColor* initial, QWidget* parent, const libqt_string title, int options) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new QColor(QColorDialog::getColor(*initial, parent, title_QString, static_cast<QColorDialog::ColorDialogOptions>(options)));
}

// Base class handler implementation
QMetaObject* QColorDialog_SuperMetaObject(const QColorDialog* self) {
    return (QMetaObject*)self->QColorDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMetaObject(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_metaobject_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QColorDialog_SuperMetacast(QColorDialog* self, const char* param1) {
    return self->QColorDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMetacast(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_metacast_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QColorDialog_SuperMetacall(QColorDialog* self, int param1, int param2, void** param3) {
    return self->QColorDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMetacall(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_metacall_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void QColorDialog_SuperSetVisible(QColorDialog* self, bool visible) {
    self->QColorDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnSetVisible(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_setvisible_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_SetVisible_Callback>(slot);
}

// Base class handler implementation
void QColorDialog_SuperChangeEvent(QColorDialog* self, QEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnChangeEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_changeevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QColorDialog_SuperDone(QColorDialog* self, int result) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::done(static_cast<int>(result));
    } else
        qFatal("Error: Protected virtual method QColorDialog::done called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDone(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_done_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Done_Callback>(slot);
}

// Derived class handler implementation
QSize* QColorDialog_SizeHint(const QColorDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QColorDialog_SuperSizeHint(const QColorDialog* self) {
    return new QSize(self->QColorDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnSizeHint(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_sizehint_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QColorDialog_MinimumSizeHint(const QColorDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QColorDialog_SuperMinimumSizeHint(const QColorDialog* self) {
    return new QSize(self->QColorDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMinimumSizeHint(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_minimumsizehint_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_Open(QColorDialog* self) {
    self->open();
}

// Base class handler implementation
void QColorDialog_SuperOpen(QColorDialog* self) {
    self->QColorDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnOpen(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_open_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int QColorDialog_Exec(QColorDialog* self) {
    return self->exec();
}

// Base class handler implementation
int QColorDialog_SuperExec(QColorDialog* self) {
    return self->QColorDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnExec(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_exec_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_Accept(QColorDialog* self) {
    self->accept();
}

// Base class handler implementation
void QColorDialog_SuperAccept(QColorDialog* self) {
    self->QColorDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnAccept(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_accept_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_Reject(QColorDialog* self) {
    self->reject();
}

// Base class handler implementation
void QColorDialog_SuperReject(QColorDialog* self) {
    self->QColorDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnReject(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_reject_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_KeyPressEvent(QColorDialog* self, QKeyEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperKeyPressEvent(QColorDialog* self, QKeyEvent* param1) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColorDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnKeyPressEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_keypressevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_CloseEvent(QColorDialog* self, QCloseEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperCloseEvent(QColorDialog* self, QCloseEvent* param1) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColorDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnCloseEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_closeevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_ShowEvent(QColorDialog* self, QShowEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperShowEvent(QColorDialog* self, QShowEvent* param1) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColorDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnShowEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_showevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_ResizeEvent(QColorDialog* self, QResizeEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperResizeEvent(QColorDialog* self, QResizeEvent* param1) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColorDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnResizeEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_resizeevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_ContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColorDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnContextMenuEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_contextmenuevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QColorDialog_EventFilter(QColorDialog* self, QObject* param1, QEvent* param2) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        return vqcolordialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColorDialog_SuperEventFilter(QColorDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        return vqcolordialog->QColorDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QColorDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnEventFilter(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_eventfilter_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QColorDialog_DevType(const QColorDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QColorDialog_SuperDevType(const QColorDialog* self) {
    return self->QColorDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDevType(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_devtype_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QColorDialog_HeightForWidth(const QColorDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QColorDialog_SuperHeightForWidth(const QColorDialog* self, int param1) {
    return self->QColorDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnHeightForWidth(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_heightforwidth_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QColorDialog_HasHeightForWidth(const QColorDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QColorDialog_SuperHasHeightForWidth(const QColorDialog* self) {
    return self->QColorDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnHasHeightForWidth(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_hasheightforwidth_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QColorDialog_PaintEngine(const QColorDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QColorDialog_SuperPaintEngine(const QColorDialog* self) {
    return self->QColorDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnPaintEngine(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_paintengine_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QColorDialog_Event(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        return vqcolordialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColorDialog_SuperEvent(QColorDialog* self, QEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        return vqcolordialog->QColorDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_event_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_MousePressEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperMousePressEvent(QColorDialog* self, QMouseEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMousePressEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_mousepressevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_MouseReleaseEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperMouseReleaseEvent(QColorDialog* self, QMouseEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMouseReleaseEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_mousereleaseevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_MouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperMouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMouseDoubleClickEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_MouseMoveEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperMouseMoveEvent(QColorDialog* self, QMouseEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMouseMoveEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_mousemoveevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_WheelEvent(QColorDialog* self, QWheelEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperWheelEvent(QColorDialog* self, QWheelEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnWheelEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_wheelevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_KeyReleaseEvent(QColorDialog* self, QKeyEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperKeyReleaseEvent(QColorDialog* self, QKeyEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnKeyReleaseEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_keyreleaseevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_FocusInEvent(QColorDialog* self, QFocusEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperFocusInEvent(QColorDialog* self, QFocusEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnFocusInEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_focusinevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_FocusOutEvent(QColorDialog* self, QFocusEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperFocusOutEvent(QColorDialog* self, QFocusEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnFocusOutEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_focusoutevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_EnterEvent(QColorDialog* self, QEnterEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperEnterEvent(QColorDialog* self, QEnterEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnEnterEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_enterevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_LeaveEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperLeaveEvent(QColorDialog* self, QEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnLeaveEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_leaveevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_PaintEvent(QColorDialog* self, QPaintEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperPaintEvent(QColorDialog* self, QPaintEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnPaintEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_paintevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_MoveEvent(QColorDialog* self, QMoveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperMoveEvent(QColorDialog* self, QMoveEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMoveEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_moveevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_TabletEvent(QColorDialog* self, QTabletEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperTabletEvent(QColorDialog* self, QTabletEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnTabletEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_tabletevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_ActionEvent(QColorDialog* self, QActionEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperActionEvent(QColorDialog* self, QActionEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnActionEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_actionevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_DragEnterEvent(QColorDialog* self, QDragEnterEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperDragEnterEvent(QColorDialog* self, QDragEnterEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDragEnterEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_dragenterevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_DragMoveEvent(QColorDialog* self, QDragMoveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperDragMoveEvent(QColorDialog* self, QDragMoveEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDragMoveEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_dragmoveevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_DragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperDragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDragLeaveEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_dragleaveevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_DropEvent(QColorDialog* self, QDropEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperDropEvent(QColorDialog* self, QDropEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDropEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_dropevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_HideEvent(QColorDialog* self, QHideEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperHideEvent(QColorDialog* self, QHideEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnHideEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_hideevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QColorDialog_NativeEvent(QColorDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        return vqcolordialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QColorDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColorDialog_SuperNativeEvent(QColorDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        return vqcolordialog->QColorDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QColorDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnNativeEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_nativeevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QColorDialog_Metric(const QColorDialog* self, int param1) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog) {
        return vqcolordialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QColorDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QColorDialog_SuperMetric(const QColorDialog* self, int param1) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        return vqcolordialog->QColorDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QColorDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMetric(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_metric_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_InitPainter(const QColorDialog* self, QPainter* painter) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog) {
        vqcolordialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperInitPainter(const QColorDialog* self, QPainter* painter) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        vqcolordialog->QColorDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QColorDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnInitPainter(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_initpainter_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QColorDialog_Redirected(const QColorDialog* self, QPoint* offset) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog) {
        return vqcolordialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QColorDialog_SuperRedirected(const QColorDialog* self, QPoint* offset) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        return vqcolordialog->QColorDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QColorDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnRedirected(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_redirected_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QColorDialog_SharedPainter(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog) {
        return vqcolordialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QColorDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QColorDialog_SuperSharedPainter(const QColorDialog* self) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        return vqcolordialog->QColorDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QColorDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnSharedPainter(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_sharedpainter_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_InputMethodEvent(QColorDialog* self, QInputMethodEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperInputMethodEvent(QColorDialog* self, QInputMethodEvent* param1) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColorDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnInputMethodEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_inputmethodevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QColorDialog_InputMethodQuery(const QColorDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QColorDialog_SuperInputMethodQuery(const QColorDialog* self, int param1) {
    return new QVariant(self->QColorDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnInputMethodQuery(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self)))
        vqcolordialog->qcolordialog_inputmethodquery_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QColorDialog_FocusNextPrevChild(QColorDialog* self, bool next) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        return vqcolordialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColorDialog_SuperFocusNextPrevChild(QColorDialog* self, bool next) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        return vqcolordialog->QColorDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QColorDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnFocusNextPrevChild(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_focusnextprevchild_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_TimerEvent(QColorDialog* self, QTimerEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperTimerEvent(QColorDialog* self, QTimerEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnTimerEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_timerevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_ChildEvent(QColorDialog* self, QChildEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperChildEvent(QColorDialog* self, QChildEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnChildEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_childevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_CustomEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperCustomEvent(QColorDialog* self, QEvent* event) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnCustomEvent(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_customevent_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_ConnectNotify(QColorDialog* self, const QMetaMethod* signal) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperConnectNotify(QColorDialog* self, const QMetaMethod* signal) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QColorDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnConnectNotify(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_connectnotify_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QColorDialog_DisconnectNotify(QColorDialog* self, const QMetaMethod* signal) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog) {
        vqcolordialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QColorDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorDialog_SuperDisconnectNotify(QColorDialog* self, const QMetaMethod* signal) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->QColorDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QColorDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDisconnectNotify(QColorDialog* self, intptr_t slot) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self))
        vqcolordialog->qcolordialog_disconnectnotify_callback = reinterpret_cast<VirtualQColorDialog::QColorDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QColorDialog_AdjustPosition(QColorDialog* self, QWidget* param1) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->VirtualQColorDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QColorDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QColorDialog_UpdateMicroFocus(QColorDialog* self) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->VirtualQColorDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QColorDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QColorDialog_Create(QColorDialog* self) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->VirtualQColorDialog::create();
    } else
        qFatal("Error: Protected method QColorDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QColorDialog_Destroy(QColorDialog* self) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        vqcolordialog->VirtualQColorDialog::destroy();
    } else
        qFatal("Error: Protected method QColorDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QColorDialog_FocusNextChild(QColorDialog* self) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        return vqcolordialog->VirtualQColorDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QColorDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QColorDialog_FocusPreviousChild(QColorDialog* self) {
    if (auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self)) {
        return vqcolordialog->VirtualQColorDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QColorDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QColorDialog_Sender(const QColorDialog* self) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        return vqcolordialog->VirtualQColorDialog::sender();
    } else
        qFatal("Error: Protected method QColorDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QColorDialog_SenderSignalIndex(const QColorDialog* self) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        return vqcolordialog->VirtualQColorDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QColorDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QColorDialog_Receivers(const QColorDialog* self, const char* signal) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        return vqcolordialog->VirtualQColorDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QColorDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QColorDialog_IsSignalConnected(const QColorDialog* self, const QMetaMethod* signal) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        return vqcolordialog->VirtualQColorDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QColorDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QColorDialog_GetDecodedMetricF(const QColorDialog* self, int metricA, int metricB) {
    if (auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self))) {
        return vqcolordialog->VirtualQColorDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QColorDialog::getDecodedMetricF called without a directly constructed type");
}

void QColorDialog_Delete(QColorDialog* self) {
    delete self;
}
