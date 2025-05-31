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
#include <QByteArray>
#include <cstring>
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
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFontDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFontDialog_OnMetacall(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Metacall_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFontDialog_QBaseMetacall(QFontDialog* self, int param1, int param2, void** param3) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Metacall_IsBase(true);
        return vqfontdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQFontDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFontDialog_Tr(const char* s) {
    QString _ret = QFontDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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
    QFontDialog::connect(self, &QFontDialog::currentFontChanged, [self, slotFunc](const QFont& font) {
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
    QFontDialog::connect(self, &QFontDialog::fontSelected, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QFontDialog_Tr2(const char* s, const char* c) {
    QString _ret = QFontDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFontDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFontDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
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

// Derived class handler implementation
void QFontDialog_SetVisible(QFontDialog* self, bool visible) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setVisible(visible);
    } else {
        self->QFontDialog::setVisible(visible);
    }
}

// Base class handler implementation
void QFontDialog_QBaseSetVisible(QFontDialog* self, bool visible) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_SetVisible_IsBase(true);
        vqfontdialog->setVisible(visible);
    } else {
        self->QFontDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSetVisible(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_SetVisible_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->changeEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseChangeEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ChangeEvent_IsBase(true);
        vqfontdialog->changeEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnChangeEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Done(QFontDialog* self, int result) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->done(static_cast<int>(result));
    } else {
        ((VirtualQFontDialog*)self)->done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QFontDialog_QBaseDone(QFontDialog* self, int result) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Done_IsBase(true);
        vqfontdialog->done(static_cast<int>(result));
    } else {
        ((VirtualQFontDialog*)self)->done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDone(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Done_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->eventFilter(object, event);
    } else {
        return ((VirtualQFontDialog*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QFontDialog_QBaseEventFilter(QFontDialog* self, QObject* object, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_EventFilter_IsBase(true);
        return vqfontdialog->eventFilter(object, event);
    } else {
        return ((VirtualQFontDialog*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEventFilter(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_EventFilter_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFontDialog_SizeHint(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return new QSize(vqfontdialog->sizeHint());
    } else {
        return new QSize(((VirtualQFontDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QFontDialog_QBaseSizeHint(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_SizeHint_IsBase(true);
        return new QSize(vqfontdialog->sizeHint());
    } else {
        return new QSize(((VirtualQFontDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSizeHint(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_SizeHint_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFontDialog_MinimumSizeHint(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return new QSize(vqfontdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQFontDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QFontDialog_QBaseMinimumSizeHint(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqfontdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQFontDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMinimumSizeHint(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Open(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->open();
    } else {
        self->QFontDialog::open();
    }
}

// Base class handler implementation
void QFontDialog_QBaseOpen(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Open_IsBase(true);
        vqfontdialog->open();
    } else {
        self->QFontDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnOpen(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Open_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_Exec(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->exec();
    } else {
        return self->QFontDialog::exec();
    }
}

// Base class handler implementation
int QFontDialog_QBaseExec(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Exec_IsBase(true);
        return vqfontdialog->exec();
    } else {
        return self->QFontDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnExec(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Exec_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Accept(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->accept();
    } else {
        self->QFontDialog::accept();
    }
}

// Base class handler implementation
void QFontDialog_QBaseAccept(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Accept_IsBase(true);
        vqfontdialog->accept();
    } else {
        self->QFontDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnAccept(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Accept_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Reject(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->reject();
    } else {
        self->QFontDialog::reject();
    }
}

// Base class handler implementation
void QFontDialog_QBaseReject(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Reject_IsBase(true);
        vqfontdialog->reject();
    } else {
        self->QFontDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnReject(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Reject_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_KeyPressEvent(QFontDialog* self, QKeyEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->keyPressEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseKeyPressEvent(QFontDialog* self, QKeyEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_KeyPressEvent_IsBase(true);
        vqfontdialog->keyPressEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnKeyPressEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_CloseEvent(QFontDialog* self, QCloseEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->closeEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseCloseEvent(QFontDialog* self, QCloseEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_CloseEvent_IsBase(true);
        vqfontdialog->closeEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnCloseEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_CloseEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ShowEvent(QFontDialog* self, QShowEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->showEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseShowEvent(QFontDialog* self, QShowEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ShowEvent_IsBase(true);
        vqfontdialog->showEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnShowEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ShowEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ResizeEvent(QFontDialog* self, QResizeEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->resizeEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseResizeEvent(QFontDialog* self, QResizeEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ResizeEvent_IsBase(true);
        vqfontdialog->resizeEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnResizeEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ContextMenuEvent_IsBase(true);
        vqfontdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnContextMenuEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_DevType(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->devType();
    } else {
        return self->QFontDialog::devType();
    }
}

// Base class handler implementation
int QFontDialog_QBaseDevType(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DevType_IsBase(true);
        return vqfontdialog->devType();
    } else {
        return self->QFontDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDevType(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DevType_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_HeightForWidth(const QFontDialog* self, int param1) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QFontDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFontDialog_QBaseHeightForWidth(const QFontDialog* self, int param1) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_HeightForWidth_IsBase(true);
        return vqfontdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QFontDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHeightForWidth(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_HasHeightForWidth(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->hasHeightForWidth();
    } else {
        return self->QFontDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFontDialog_QBaseHasHeightForWidth(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_HasHeightForWidth_IsBase(true);
        return vqfontdialog->hasHeightForWidth();
    } else {
        return self->QFontDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHasHeightForWidth(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QFontDialog_PaintEngine(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->paintEngine();
    } else {
        return self->QFontDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QFontDialog_QBasePaintEngine(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_PaintEngine_IsBase(true);
        return vqfontdialog->paintEngine();
    } else {
        return self->QFontDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnPaintEngine(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_PaintEngine_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_Event(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->event(event);
    } else {
        return ((VirtualQFontDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool QFontDialog_QBaseEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Event_IsBase(true);
        return vqfontdialog->event(event);
    } else {
        return ((VirtualQFontDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Event_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MousePressEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->mousePressEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMousePressEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MousePressEvent_IsBase(true);
        vqfontdialog->mousePressEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMousePressEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MouseReleaseEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMouseReleaseEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MouseReleaseEvent_IsBase(true);
        vqfontdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseReleaseEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MouseDoubleClickEvent_IsBase(true);
        vqfontdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseDoubleClickEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MouseMoveEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMouseMoveEvent(QFontDialog* self, QMouseEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MouseMoveEvent_IsBase(true);
        vqfontdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseMoveEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_WheelEvent(QFontDialog* self, QWheelEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->wheelEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseWheelEvent(QFontDialog* self, QWheelEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_WheelEvent_IsBase(true);
        vqfontdialog->wheelEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnWheelEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_WheelEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_KeyReleaseEvent(QFontDialog* self, QKeyEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseKeyReleaseEvent(QFontDialog* self, QKeyEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_KeyReleaseEvent_IsBase(true);
        vqfontdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnKeyReleaseEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_FocusInEvent(QFontDialog* self, QFocusEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->focusInEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseFocusInEvent(QFontDialog* self, QFocusEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusInEvent_IsBase(true);
        vqfontdialog->focusInEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusInEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_FocusOutEvent(QFontDialog* self, QFocusEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->focusOutEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseFocusOutEvent(QFontDialog* self, QFocusEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusOutEvent_IsBase(true);
        vqfontdialog->focusOutEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusOutEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_EnterEvent(QFontDialog* self, QEnterEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->enterEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseEnterEvent(QFontDialog* self, QEnterEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_EnterEvent_IsBase(true);
        vqfontdialog->enterEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEnterEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_EnterEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_LeaveEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->leaveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseLeaveEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_LeaveEvent_IsBase(true);
        vqfontdialog->leaveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnLeaveEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_PaintEvent(QFontDialog* self, QPaintEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->paintEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBasePaintEvent(QFontDialog* self, QPaintEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_PaintEvent_IsBase(true);
        vqfontdialog->paintEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnPaintEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_PaintEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MoveEvent(QFontDialog* self, QMoveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->moveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMoveEvent(QFontDialog* self, QMoveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MoveEvent_IsBase(true);
        vqfontdialog->moveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMoveEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_MoveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_TabletEvent(QFontDialog* self, QTabletEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->tabletEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseTabletEvent(QFontDialog* self, QTabletEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_TabletEvent_IsBase(true);
        vqfontdialog->tabletEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnTabletEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_TabletEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ActionEvent(QFontDialog* self, QActionEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->actionEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseActionEvent(QFontDialog* self, QActionEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ActionEvent_IsBase(true);
        vqfontdialog->actionEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnActionEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ActionEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DragEnterEvent(QFontDialog* self, QDragEnterEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->dragEnterEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDragEnterEvent(QFontDialog* self, QDragEnterEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DragEnterEvent_IsBase(true);
        vqfontdialog->dragEnterEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragEnterEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DragMoveEvent(QFontDialog* self, QDragMoveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->dragMoveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDragMoveEvent(QFontDialog* self, QDragMoveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DragMoveEvent_IsBase(true);
        vqfontdialog->dragMoveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragMoveEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DragLeaveEvent_IsBase(true);
        vqfontdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragLeaveEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DropEvent(QFontDialog* self, QDropEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->dropEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDropEvent(QFontDialog* self, QDropEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DropEvent_IsBase(true);
        vqfontdialog->dropEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDropEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DropEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_HideEvent(QFontDialog* self, QHideEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->hideEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseHideEvent(QFontDialog* self, QHideEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_HideEvent_IsBase(true);
        vqfontdialog->hideEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHideEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_HideEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_NativeEvent(QFontDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQFontDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QFontDialog_QBaseNativeEvent(QFontDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_NativeEvent_IsBase(true);
        return vqfontdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQFontDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnNativeEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_NativeEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_Metric(const QFontDialog* self, int param1) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQFontDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QFontDialog_QBaseMetric(const QFontDialog* self, int param1) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Metric_IsBase(true);
        return vqfontdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQFontDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMetric(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Metric_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_InitPainter(const QFontDialog* self, QPainter* painter) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->initPainter(painter);
    } else {
        ((VirtualQFontDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QFontDialog_QBaseInitPainter(const QFontDialog* self, QPainter* painter) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_InitPainter_IsBase(true);
        vqfontdialog->initPainter(painter);
    } else {
        ((VirtualQFontDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInitPainter(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_InitPainter_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QFontDialog_Redirected(const QFontDialog* self, QPoint* offset) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->redirected(offset);
    } else {
        return ((VirtualQFontDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QFontDialog_QBaseRedirected(const QFontDialog* self, QPoint* offset) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Redirected_IsBase(true);
        return vqfontdialog->redirected(offset);
    } else {
        return ((VirtualQFontDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnRedirected(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Redirected_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QFontDialog_SharedPainter(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->sharedPainter();
    } else {
        return ((VirtualQFontDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QFontDialog_QBaseSharedPainter(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_SharedPainter_IsBase(true);
        return vqfontdialog->sharedPainter();
    } else {
        return ((VirtualQFontDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSharedPainter(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_SharedPainter_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_InputMethodEvent(QFontDialog* self, QInputMethodEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseInputMethodEvent(QFontDialog* self, QInputMethodEvent* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_InputMethodEvent_IsBase(true);
        vqfontdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQFontDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInputMethodEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QFontDialog_InputMethodQuery(const QFontDialog* self, int param1) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return new QVariant(vqfontdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQFontDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QFontDialog_QBaseInputMethodQuery(const QFontDialog* self, int param1) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqfontdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQFontDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInputMethodQuery(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_FocusNextPrevChild(QFontDialog* self, bool next) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQFontDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QFontDialog_QBaseFocusNextPrevChild(QFontDialog* self, bool next) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusNextPrevChild_IsBase(true);
        return vqfontdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQFontDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusNextPrevChild(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_TimerEvent(QFontDialog* self, QTimerEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->timerEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseTimerEvent(QFontDialog* self, QTimerEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_TimerEvent_IsBase(true);
        vqfontdialog->timerEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnTimerEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_TimerEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ChildEvent(QFontDialog* self, QChildEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->childEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseChildEvent(QFontDialog* self, QChildEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ChildEvent_IsBase(true);
        vqfontdialog->childEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnChildEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ChildEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_CustomEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->customEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseCustomEvent(QFontDialog* self, QEvent* event) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_CustomEvent_IsBase(true);
        vqfontdialog->customEvent(event);
    } else {
        ((VirtualQFontDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnCustomEvent(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_CustomEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ConnectNotify(QFontDialog* self, const QMetaMethod* signal) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->connectNotify(*signal);
    } else {
        ((VirtualQFontDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFontDialog_QBaseConnectNotify(QFontDialog* self, const QMetaMethod* signal) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ConnectNotify_IsBase(true);
        vqfontdialog->connectNotify(*signal);
    } else {
        ((VirtualQFontDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnConnectNotify(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DisconnectNotify(QFontDialog* self, const QMetaMethod* signal) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQFontDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDisconnectNotify(QFontDialog* self, const QMetaMethod* signal) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DisconnectNotify_IsBase(true);
        vqfontdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQFontDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDisconnectNotify(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_AdjustPosition(QFontDialog* self, QWidget* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->adjustPosition(param1);
    } else {
        ((VirtualQFontDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseAdjustPosition(QFontDialog* self, QWidget* param1) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_AdjustPosition_IsBase(true);
        vqfontdialog->adjustPosition(param1);
    } else {
        ((VirtualQFontDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnAdjustPosition(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_UpdateMicroFocus(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->updateMicroFocus();
    } else {
        ((VirtualQFontDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QFontDialog_QBaseUpdateMicroFocus(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_UpdateMicroFocus_IsBase(true);
        vqfontdialog->updateMicroFocus();
    } else {
        ((VirtualQFontDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnUpdateMicroFocus(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Create(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->create();
    } else {
        ((VirtualQFontDialog*)self)->create();
    }
}

// Base class handler implementation
void QFontDialog_QBaseCreate(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Create_IsBase(true);
        vqfontdialog->create();
    } else {
        ((VirtualQFontDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnCreate(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Create_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Destroy(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->destroy();
    } else {
        ((VirtualQFontDialog*)self)->destroy();
    }
}

// Base class handler implementation
void QFontDialog_QBaseDestroy(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Destroy_IsBase(true);
        vqfontdialog->destroy();
    } else {
        ((VirtualQFontDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDestroy(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Destroy_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_FocusNextChild(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->focusNextChild();
    } else {
        return ((VirtualQFontDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QFontDialog_QBaseFocusNextChild(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusNextChild_IsBase(true);
        return vqfontdialog->focusNextChild();
    } else {
        return ((VirtualQFontDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusNextChild(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_FocusPreviousChild(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->focusPreviousChild();
    } else {
        return ((VirtualQFontDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QFontDialog_QBaseFocusPreviousChild(QFontDialog* self) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusPreviousChild_IsBase(true);
        return vqfontdialog->focusPreviousChild();
    } else {
        return ((VirtualQFontDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusPreviousChild(QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self);
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFontDialog_Sender(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->sender();
    } else {
        return ((VirtualQFontDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* QFontDialog_QBaseSender(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Sender_IsBase(true);
        return vqfontdialog->sender();
    } else {
        return ((VirtualQFontDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSender(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Sender_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_SenderSignalIndex(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->senderSignalIndex();
    } else {
        return ((VirtualQFontDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QFontDialog_QBaseSenderSignalIndex(const QFontDialog* self) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_SenderSignalIndex_IsBase(true);
        return vqfontdialog->senderSignalIndex();
    } else {
        return ((VirtualQFontDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSenderSignalIndex(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_Receivers(const QFontDialog* self, const char* signal) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->receivers(signal);
    } else {
        return ((VirtualQFontDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QFontDialog_QBaseReceivers(const QFontDialog* self, const char* signal) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Receivers_IsBase(true);
        return vqfontdialog->receivers(signal);
    } else {
        return ((VirtualQFontDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnReceivers(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_Receivers_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_IsSignalConnected(const QFontDialog* self, const QMetaMethod* signal) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        return vqfontdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQFontDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFontDialog_QBaseIsSignalConnected(const QFontDialog* self, const QMetaMethod* signal) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_IsSignalConnected_IsBase(true);
        return vqfontdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQFontDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnIsSignalConnected(const QFontDialog* self, intptr_t slot) {
    auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self));
    if (vqfontdialog && vqfontdialog->isVirtualQFontDialog) {
        vqfontdialog->setQFontDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_IsSignalConnected_Callback>(slot));
    }
}

void QFontDialog_Delete(QFontDialog* self) {
    delete self;
}
