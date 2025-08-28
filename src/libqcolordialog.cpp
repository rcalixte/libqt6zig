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
#include <QByteArray>
#include <cstring>
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
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQColorDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColorDialog_OnMetacall(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Metacall_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QColorDialog_QBaseMetacall(QColorDialog* self, int param1, int param2, void** param3) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Metacall_IsBase(true);
        return vqcolordialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQColorDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QColorDialog_Tr(const char* s) {
    QString _ret = QColorDialog::tr(s);
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
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        self->setVisible(visible);
    } else {
        ((VirtualQColorDialog*)self)->setVisible(visible);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColorDialog_OnSetVisible(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_SetVisible_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_SetVisible_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColorDialog_QBaseSetVisible(QColorDialog* self, bool visible) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_SetVisible_IsBase(true);
        vqcolordialog->setVisible(visible);
    } else {
        ((VirtualQColorDialog*)self)->setVisible(visible);
    }
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
    QColorDialog::connect(self, &QColorDialog::currentColorChanged, [self, slotFunc](const QColor& color) {
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
    QColorDialog::connect(self, &QColorDialog::colorSelected, [self, slotFunc](const QColor& color) {
        const QColor& color_ret = color;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&color_ret);
        slotFunc(self, sigval1);
    });
}

void QColorDialog_ChangeEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->changeEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColorDialog_OnChangeEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_ChangeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColorDialog_QBaseChangeEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ChangeEvent_IsBase(true);
        vqcolordialog->changeEvent(event);
    }
}

void QColorDialog_Done(QColorDialog* self, int result) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->done(static_cast<int>(result));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColorDialog_OnDone(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Done_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Done_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColorDialog_QBaseDone(QColorDialog* self, int result) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Done_IsBase(true);
        vqcolordialog->done(static_cast<int>(result));
    }
}

libqt_string QColorDialog_Tr2(const char* s, const char* c) {
    QString _ret = QColorDialog::tr(s, c);
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
    QString _ret = QColorDialog::tr(s, c, static_cast<int>(n));
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

// Derived class handler implementation
QSize* QColorDialog_SizeHint(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return new QSize(vqcolordialog->sizeHint());
    } else {
        return new QSize(((VirtualQColorDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QColorDialog_QBaseSizeHint(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_SizeHint_IsBase(true);
        return new QSize(vqcolordialog->sizeHint());
    } else {
        return new QSize(((VirtualQColorDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnSizeHint(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_SizeHint_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QColorDialog_MinimumSizeHint(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return new QSize(vqcolordialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQColorDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QColorDialog_QBaseMinimumSizeHint(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqcolordialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQColorDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMinimumSizeHint(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_Open(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->open();
    } else {
        self->QColorDialog::open();
    }
}

// Base class handler implementation
void QColorDialog_QBaseOpen(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Open_IsBase(true);
        vqcolordialog->open();
    } else {
        self->QColorDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnOpen(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Open_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QColorDialog_Exec(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->exec();
    } else {
        return self->QColorDialog::exec();
    }
}

// Base class handler implementation
int QColorDialog_QBaseExec(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Exec_IsBase(true);
        return vqcolordialog->exec();
    } else {
        return self->QColorDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnExec(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Exec_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_Accept(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->accept();
    } else {
        self->QColorDialog::accept();
    }
}

// Base class handler implementation
void QColorDialog_QBaseAccept(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Accept_IsBase(true);
        vqcolordialog->accept();
    } else {
        self->QColorDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnAccept(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Accept_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_Reject(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->reject();
    } else {
        self->QColorDialog::reject();
    }
}

// Base class handler implementation
void QColorDialog_QBaseReject(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Reject_IsBase(true);
        vqcolordialog->reject();
    } else {
        self->QColorDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnReject(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Reject_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_KeyPressEvent(QColorDialog* self, QKeyEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->keyPressEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QColorDialog_QBaseKeyPressEvent(QColorDialog* self, QKeyEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_KeyPressEvent_IsBase(true);
        vqcolordialog->keyPressEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnKeyPressEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_CloseEvent(QColorDialog* self, QCloseEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->closeEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QColorDialog_QBaseCloseEvent(QColorDialog* self, QCloseEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_CloseEvent_IsBase(true);
        vqcolordialog->closeEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnCloseEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_CloseEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_ShowEvent(QColorDialog* self, QShowEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->showEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QColorDialog_QBaseShowEvent(QColorDialog* self, QShowEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ShowEvent_IsBase(true);
        vqcolordialog->showEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnShowEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ShowEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_ResizeEvent(QColorDialog* self, QResizeEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->resizeEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QColorDialog_QBaseResizeEvent(QColorDialog* self, QResizeEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ResizeEvent_IsBase(true);
        vqcolordialog->resizeEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnResizeEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_ContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->contextMenuEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QColorDialog_QBaseContextMenuEvent(QColorDialog* self, QContextMenuEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ContextMenuEvent_IsBase(true);
        vqcolordialog->contextMenuEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnContextMenuEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorDialog_EventFilter(QColorDialog* self, QObject* param1, QEvent* param2) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQColorDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QColorDialog_QBaseEventFilter(QColorDialog* self, QObject* param1, QEvent* param2) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_EventFilter_IsBase(true);
        return vqcolordialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQColorDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnEventFilter(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_EventFilter_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QColorDialog_DevType(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->devType();
    } else {
        return self->QColorDialog::devType();
    }
}

// Base class handler implementation
int QColorDialog_QBaseDevType(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DevType_IsBase(true);
        return vqcolordialog->devType();
    } else {
        return self->QColorDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDevType(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DevType_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QColorDialog_HeightForWidth(const QColorDialog* self, int param1) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QColorDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QColorDialog_QBaseHeightForWidth(const QColorDialog* self, int param1) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_HeightForWidth_IsBase(true);
        return vqcolordialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QColorDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnHeightForWidth(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorDialog_HasHeightForWidth(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->hasHeightForWidth();
    } else {
        return self->QColorDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QColorDialog_QBaseHasHeightForWidth(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_HasHeightForWidth_IsBase(true);
        return vqcolordialog->hasHeightForWidth();
    } else {
        return self->QColorDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnHasHeightForWidth(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QColorDialog_PaintEngine(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->paintEngine();
    } else {
        return self->QColorDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QColorDialog_QBasePaintEngine(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_PaintEngine_IsBase(true);
        return vqcolordialog->paintEngine();
    } else {
        return self->QColorDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnPaintEngine(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_PaintEngine_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorDialog_Event(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->event(event);
    } else {
        return ((VirtualQColorDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool QColorDialog_QBaseEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Event_IsBase(true);
        return vqcolordialog->event(event);
    } else {
        return ((VirtualQColorDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Event_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_MousePressEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->mousePressEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseMousePressEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MousePressEvent_IsBase(true);
        vqcolordialog->mousePressEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMousePressEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_MouseReleaseEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseMouseReleaseEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MouseReleaseEvent_IsBase(true);
        vqcolordialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMouseReleaseEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_MouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseMouseDoubleClickEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MouseDoubleClickEvent_IsBase(true);
        vqcolordialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMouseDoubleClickEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_MouseMoveEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->mouseMoveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseMouseMoveEvent(QColorDialog* self, QMouseEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MouseMoveEvent_IsBase(true);
        vqcolordialog->mouseMoveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMouseMoveEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_WheelEvent(QColorDialog* self, QWheelEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->wheelEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseWheelEvent(QColorDialog* self, QWheelEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_WheelEvent_IsBase(true);
        vqcolordialog->wheelEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnWheelEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_WheelEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_KeyReleaseEvent(QColorDialog* self, QKeyEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->keyReleaseEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseKeyReleaseEvent(QColorDialog* self, QKeyEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_KeyReleaseEvent_IsBase(true);
        vqcolordialog->keyReleaseEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnKeyReleaseEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_FocusInEvent(QColorDialog* self, QFocusEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->focusInEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseFocusInEvent(QColorDialog* self, QFocusEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusInEvent_IsBase(true);
        vqcolordialog->focusInEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnFocusInEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_FocusOutEvent(QColorDialog* self, QFocusEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->focusOutEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseFocusOutEvent(QColorDialog* self, QFocusEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusOutEvent_IsBase(true);
        vqcolordialog->focusOutEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnFocusOutEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_EnterEvent(QColorDialog* self, QEnterEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->enterEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseEnterEvent(QColorDialog* self, QEnterEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_EnterEvent_IsBase(true);
        vqcolordialog->enterEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnEnterEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_EnterEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_LeaveEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->leaveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseLeaveEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_LeaveEvent_IsBase(true);
        vqcolordialog->leaveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnLeaveEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_PaintEvent(QColorDialog* self, QPaintEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->paintEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBasePaintEvent(QColorDialog* self, QPaintEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_PaintEvent_IsBase(true);
        vqcolordialog->paintEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnPaintEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_PaintEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_MoveEvent(QColorDialog* self, QMoveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->moveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseMoveEvent(QColorDialog* self, QMoveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MoveEvent_IsBase(true);
        vqcolordialog->moveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMoveEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_MoveEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_TabletEvent(QColorDialog* self, QTabletEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->tabletEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseTabletEvent(QColorDialog* self, QTabletEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_TabletEvent_IsBase(true);
        vqcolordialog->tabletEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnTabletEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_TabletEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_ActionEvent(QColorDialog* self, QActionEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->actionEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseActionEvent(QColorDialog* self, QActionEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ActionEvent_IsBase(true);
        vqcolordialog->actionEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnActionEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ActionEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_DragEnterEvent(QColorDialog* self, QDragEnterEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->dragEnterEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseDragEnterEvent(QColorDialog* self, QDragEnterEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DragEnterEvent_IsBase(true);
        vqcolordialog->dragEnterEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDragEnterEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_DragMoveEvent(QColorDialog* self, QDragMoveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->dragMoveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseDragMoveEvent(QColorDialog* self, QDragMoveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DragMoveEvent_IsBase(true);
        vqcolordialog->dragMoveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDragMoveEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_DragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->dragLeaveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseDragLeaveEvent(QColorDialog* self, QDragLeaveEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DragLeaveEvent_IsBase(true);
        vqcolordialog->dragLeaveEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDragLeaveEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_DropEvent(QColorDialog* self, QDropEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->dropEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseDropEvent(QColorDialog* self, QDropEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DropEvent_IsBase(true);
        vqcolordialog->dropEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDropEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DropEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_HideEvent(QColorDialog* self, QHideEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->hideEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseHideEvent(QColorDialog* self, QHideEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_HideEvent_IsBase(true);
        vqcolordialog->hideEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnHideEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_HideEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorDialog_NativeEvent(QColorDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQColorDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QColorDialog_QBaseNativeEvent(QColorDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_NativeEvent_IsBase(true);
        return vqcolordialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQColorDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnNativeEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_NativeEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QColorDialog_Metric(const QColorDialog* self, int param1) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQColorDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QColorDialog_QBaseMetric(const QColorDialog* self, int param1) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Metric_IsBase(true);
        return vqcolordialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQColorDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnMetric(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Metric_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_InitPainter(const QColorDialog* self, QPainter* painter) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->initPainter(painter);
    } else {
        ((VirtualQColorDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QColorDialog_QBaseInitPainter(const QColorDialog* self, QPainter* painter) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_InitPainter_IsBase(true);
        vqcolordialog->initPainter(painter);
    } else {
        ((VirtualQColorDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnInitPainter(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_InitPainter_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QColorDialog_Redirected(const QColorDialog* self, QPoint* offset) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->redirected(offset);
    } else {
        return ((VirtualQColorDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QColorDialog_QBaseRedirected(const QColorDialog* self, QPoint* offset) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Redirected_IsBase(true);
        return vqcolordialog->redirected(offset);
    } else {
        return ((VirtualQColorDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnRedirected(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Redirected_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QColorDialog_SharedPainter(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->sharedPainter();
    } else {
        return ((VirtualQColorDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QColorDialog_QBaseSharedPainter(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_SharedPainter_IsBase(true);
        return vqcolordialog->sharedPainter();
    } else {
        return ((VirtualQColorDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnSharedPainter(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_SharedPainter_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_InputMethodEvent(QColorDialog* self, QInputMethodEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->inputMethodEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QColorDialog_QBaseInputMethodEvent(QColorDialog* self, QInputMethodEvent* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_InputMethodEvent_IsBase(true);
        vqcolordialog->inputMethodEvent(param1);
    } else {
        ((VirtualQColorDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnInputMethodEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QColorDialog_InputMethodQuery(const QColorDialog* self, int param1) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return new QVariant(vqcolordialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQColorDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QColorDialog_QBaseInputMethodQuery(const QColorDialog* self, int param1) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqcolordialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQColorDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnInputMethodQuery(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorDialog_FocusNextPrevChild(QColorDialog* self, bool next) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQColorDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QColorDialog_QBaseFocusNextPrevChild(QColorDialog* self, bool next) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusNextPrevChild_IsBase(true);
        return vqcolordialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQColorDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnFocusNextPrevChild(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_TimerEvent(QColorDialog* self, QTimerEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->timerEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseTimerEvent(QColorDialog* self, QTimerEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_TimerEvent_IsBase(true);
        vqcolordialog->timerEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnTimerEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_TimerEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_ChildEvent(QColorDialog* self, QChildEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->childEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseChildEvent(QColorDialog* self, QChildEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ChildEvent_IsBase(true);
        vqcolordialog->childEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnChildEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ChildEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_CustomEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->customEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QColorDialog_QBaseCustomEvent(QColorDialog* self, QEvent* event) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_CustomEvent_IsBase(true);
        vqcolordialog->customEvent(event);
    } else {
        ((VirtualQColorDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnCustomEvent(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_CustomEvent_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_ConnectNotify(QColorDialog* self, const QMetaMethod* signal) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->connectNotify(*signal);
    } else {
        ((VirtualQColorDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QColorDialog_QBaseConnectNotify(QColorDialog* self, const QMetaMethod* signal) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ConnectNotify_IsBase(true);
        vqcolordialog->connectNotify(*signal);
    } else {
        ((VirtualQColorDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnConnectNotify(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_DisconnectNotify(QColorDialog* self, const QMetaMethod* signal) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->disconnectNotify(*signal);
    } else {
        ((VirtualQColorDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QColorDialog_QBaseDisconnectNotify(QColorDialog* self, const QMetaMethod* signal) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DisconnectNotify_IsBase(true);
        vqcolordialog->disconnectNotify(*signal);
    } else {
        ((VirtualQColorDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDisconnectNotify(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_AdjustPosition(QColorDialog* self, QWidget* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->adjustPosition(param1);
    } else {
        ((VirtualQColorDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QColorDialog_QBaseAdjustPosition(QColorDialog* self, QWidget* param1) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_AdjustPosition_IsBase(true);
        vqcolordialog->adjustPosition(param1);
    } else {
        ((VirtualQColorDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnAdjustPosition(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_UpdateMicroFocus(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->updateMicroFocus();
    } else {
        ((VirtualQColorDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QColorDialog_QBaseUpdateMicroFocus(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_UpdateMicroFocus_IsBase(true);
        vqcolordialog->updateMicroFocus();
    } else {
        ((VirtualQColorDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnUpdateMicroFocus(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_Create(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->create();
    } else {
        ((VirtualQColorDialog*)self)->create();
    }
}

// Base class handler implementation
void QColorDialog_QBaseCreate(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Create_IsBase(true);
        vqcolordialog->create();
    } else {
        ((VirtualQColorDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnCreate(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Create_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorDialog_Destroy(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->destroy();
    } else {
        ((VirtualQColorDialog*)self)->destroy();
    }
}

// Base class handler implementation
void QColorDialog_QBaseDestroy(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Destroy_IsBase(true);
        vqcolordialog->destroy();
    } else {
        ((VirtualQColorDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnDestroy(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Destroy_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorDialog_FocusNextChild(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->focusNextChild();
    } else {
        return ((VirtualQColorDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QColorDialog_QBaseFocusNextChild(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusNextChild_IsBase(true);
        return vqcolordialog->focusNextChild();
    } else {
        return ((VirtualQColorDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnFocusNextChild(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorDialog_FocusPreviousChild(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->focusPreviousChild();
    } else {
        return ((VirtualQColorDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QColorDialog_QBaseFocusPreviousChild(QColorDialog* self) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusPreviousChild_IsBase(true);
        return vqcolordialog->focusPreviousChild();
    } else {
        return ((VirtualQColorDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnFocusPreviousChild(QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = dynamic_cast<VirtualQColorDialog*>(self);
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QColorDialog_Sender(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->sender();
    } else {
        return ((VirtualQColorDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* QColorDialog_QBaseSender(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Sender_IsBase(true);
        return vqcolordialog->sender();
    } else {
        return ((VirtualQColorDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnSender(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Sender_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QColorDialog_SenderSignalIndex(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->senderSignalIndex();
    } else {
        return ((VirtualQColorDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QColorDialog_QBaseSenderSignalIndex(const QColorDialog* self) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_SenderSignalIndex_IsBase(true);
        return vqcolordialog->senderSignalIndex();
    } else {
        return ((VirtualQColorDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnSenderSignalIndex(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QColorDialog_Receivers(const QColorDialog* self, const char* signal) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->receivers(signal);
    } else {
        return ((VirtualQColorDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QColorDialog_QBaseReceivers(const QColorDialog* self, const char* signal) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Receivers_IsBase(true);
        return vqcolordialog->receivers(signal);
    } else {
        return ((VirtualQColorDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnReceivers(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_Receivers_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorDialog_IsSignalConnected(const QColorDialog* self, const QMetaMethod* signal) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQColorDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QColorDialog_QBaseIsSignalConnected(const QColorDialog* self, const QMetaMethod* signal) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_IsSignalConnected_IsBase(true);
        return vqcolordialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQColorDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnIsSignalConnected(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QColorDialog_GetDecodedMetricF(const QColorDialog* self, int metricA, int metricB) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        return vqcolordialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQColorDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QColorDialog_QBaseGetDecodedMetricF(const QColorDialog* self, int metricA, int metricB) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_GetDecodedMetricF_IsBase(true);
        return vqcolordialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQColorDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QColorDialog_OnGetDecodedMetricF(const QColorDialog* self, intptr_t slot) {
    auto* vqcolordialog = const_cast<VirtualQColorDialog*>(dynamic_cast<const VirtualQColorDialog*>(self));
    if (vqcolordialog && vqcolordialog->isVirtualQColorDialog) {
        vqcolordialog->setQColorDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQColorDialog::QColorDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void QColorDialog_Delete(QColorDialog* self) {
    delete self;
}
