#include <KTitleWidget>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <ktitlewidget.h>
#include "libktitlewidget.h"
#include "libktitlewidget.hxx"

KTitleWidget* KTitleWidget_new(QWidget* parent) {
    return new VirtualKTitleWidget(parent);
}

KTitleWidget* KTitleWidget_new2() {
    return new VirtualKTitleWidget();
}

QMetaObject* KTitleWidget_MetaObject(const KTitleWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTitleWidget_Metacast(KTitleWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTitleWidget_Metacall(KTitleWidget* self, int param1, int param2, void** param3) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTitleWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KTitleWidget_OnMetacall(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Metacall_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KTitleWidget_QBaseMetacall(KTitleWidget* self, int param1, int param2, void** param3) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Metacall_IsBase(true);
        return vktitlewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTitleWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTitleWidget_Tr(const char* s) {
    QString _ret = KTitleWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTitleWidget_SetWidget(KTitleWidget* self, QWidget* widget) {
    self->setWidget(widget);
}

libqt_string KTitleWidget_Text(const KTitleWidget* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTitleWidget_Comment(const KTitleWidget* self) {
    QString _ret = self->comment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIcon* KTitleWidget_Icon(const KTitleWidget* self) {
    return new QIcon(self->icon());
}

QSize* KTitleWidget_IconSize(const KTitleWidget* self) {
    return new QSize(self->iconSize());
}

void KTitleWidget_SetBuddy(KTitleWidget* self, QWidget* buddy) {
    self->setBuddy(buddy);
}

int KTitleWidget_AutoHideTimeout(const KTitleWidget* self) {
    return self->autoHideTimeout();
}

int KTitleWidget_Level(KTitleWidget* self) {
    return self->level();
}

void KTitleWidget_SetText(KTitleWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void KTitleWidget_SetText2(KTitleWidget* self, const libqt_string text, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString, static_cast<KTitleWidget::MessageType>(typeVal));
}

void KTitleWidget_SetComment(KTitleWidget* self, const libqt_string comment) {
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    self->setComment(comment_QString);
}

void KTitleWidget_SetIcon(KTitleWidget* self, const QIcon* icon) {
    self->setIcon(*icon);
}

void KTitleWidget_SetIcon2(KTitleWidget* self, int typeVal) {
    self->setIcon(static_cast<KTitleWidget::MessageType>(typeVal));
}

void KTitleWidget_SetIconSize(KTitleWidget* self, const QSize* iconSize) {
    self->setIconSize(*iconSize);
}

void KTitleWidget_SetAutoHideTimeout(KTitleWidget* self, int msecs) {
    self->setAutoHideTimeout(static_cast<int>(msecs));
}

void KTitleWidget_SetLevel(KTitleWidget* self, int level) {
    self->setLevel(static_cast<int>(level));
}

libqt_string KTitleWidget_Tr2(const char* s, const char* c) {
    QString _ret = KTitleWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTitleWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTitleWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTitleWidget_SetText22(KTitleWidget* self, const libqt_string text, int alignment) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString, static_cast<Qt::Alignment>(alignment));
}

void KTitleWidget_SetComment2(KTitleWidget* self, const libqt_string comment, int typeVal) {
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    self->setComment(comment_QString, static_cast<KTitleWidget::MessageType>(typeVal));
}

void KTitleWidget_SetIcon22(KTitleWidget* self, const QIcon* icon, int alignment) {
    self->setIcon(*icon, static_cast<KTitleWidget::ImageAlignment>(alignment));
}

void KTitleWidget_SetIcon23(KTitleWidget* self, int typeVal, int alignment) {
    self->setIcon(static_cast<KTitleWidget::MessageType>(typeVal), static_cast<KTitleWidget::ImageAlignment>(alignment));
}

// Derived class handler implementation
void KTitleWidget_ChangeEvent(KTitleWidget* self, QEvent* e) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->changeEvent(e);
    } else {
        ((VirtualKTitleWidget*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseChangeEvent(KTitleWidget* self, QEvent* e) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ChangeEvent_IsBase(true);
        vktitlewidget->changeEvent(e);
    } else {
        ((VirtualKTitleWidget*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnChangeEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_ShowEvent(KTitleWidget* self, QShowEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->showEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseShowEvent(KTitleWidget* self, QShowEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ShowEvent_IsBase(true);
        vktitlewidget->showEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnShowEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ShowEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTitleWidget_EventFilter(KTitleWidget* self, QObject* object, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->eventFilter(object, event);
    } else {
        return ((VirtualKTitleWidget*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool KTitleWidget_QBaseEventFilter(KTitleWidget* self, QObject* object, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_EventFilter_IsBase(true);
        return vktitlewidget->eventFilter(object, event);
    } else {
        return ((VirtualKTitleWidget*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnEventFilter(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_EventFilter_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KTitleWidget_DevType(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->devType();
    } else {
        return self->KTitleWidget::devType();
    }
}

// Base class handler implementation
int KTitleWidget_QBaseDevType(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DevType_IsBase(true);
        return vktitlewidget->devType();
    } else {
        return self->KTitleWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDevType(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DevType_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_SetVisible(KTitleWidget* self, bool visible) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setVisible(visible);
    } else {
        self->KTitleWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseSetVisible(KTitleWidget* self, bool visible) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_SetVisible_IsBase(true);
        vktitlewidget->setVisible(visible);
    } else {
        self->KTitleWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnSetVisible(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_SetVisible_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTitleWidget_SizeHint(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return new QSize(vktitlewidget->sizeHint());
    } else {
        return new QSize(((VirtualKTitleWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KTitleWidget_QBaseSizeHint(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_SizeHint_IsBase(true);
        return new QSize(vktitlewidget->sizeHint());
    } else {
        return new QSize(((VirtualKTitleWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnSizeHint(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_SizeHint_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTitleWidget_MinimumSizeHint(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return new QSize(vktitlewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTitleWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KTitleWidget_QBaseMinimumSizeHint(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vktitlewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTitleWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMinimumSizeHint(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KTitleWidget_HeightForWidth(const KTitleWidget* self, int param1) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTitleWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KTitleWidget_QBaseHeightForWidth(const KTitleWidget* self, int param1) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_HeightForWidth_IsBase(true);
        return vktitlewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTitleWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnHeightForWidth(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTitleWidget_HasHeightForWidth(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->hasHeightForWidth();
    } else {
        return self->KTitleWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KTitleWidget_QBaseHasHeightForWidth(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_HasHeightForWidth_IsBase(true);
        return vktitlewidget->hasHeightForWidth();
    } else {
        return self->KTitleWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnHasHeightForWidth(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KTitleWidget_PaintEngine(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->paintEngine();
    } else {
        return self->KTitleWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KTitleWidget_QBasePaintEngine(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_PaintEngine_IsBase(true);
        return vktitlewidget->paintEngine();
    } else {
        return self->KTitleWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnPaintEngine(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_PaintEngine_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTitleWidget_Event(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->event(event);
    } else {
        return ((VirtualKTitleWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KTitleWidget_QBaseEvent(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Event_IsBase(true);
        return vktitlewidget->event(event);
    } else {
        return ((VirtualKTitleWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Event_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_MousePressEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->mousePressEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseMousePressEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MousePressEvent_IsBase(true);
        vktitlewidget->mousePressEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMousePressEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_MouseReleaseEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseMouseReleaseEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MouseReleaseEvent_IsBase(true);
        vktitlewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMouseReleaseEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_MouseDoubleClickEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseMouseDoubleClickEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MouseDoubleClickEvent_IsBase(true);
        vktitlewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMouseDoubleClickEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_MouseMoveEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseMouseMoveEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MouseMoveEvent_IsBase(true);
        vktitlewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMouseMoveEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_WheelEvent(KTitleWidget* self, QWheelEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->wheelEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseWheelEvent(KTitleWidget* self, QWheelEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_WheelEvent_IsBase(true);
        vktitlewidget->wheelEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnWheelEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_WheelEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_KeyPressEvent(KTitleWidget* self, QKeyEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->keyPressEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseKeyPressEvent(KTitleWidget* self, QKeyEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_KeyPressEvent_IsBase(true);
        vktitlewidget->keyPressEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnKeyPressEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_KeyReleaseEvent(KTitleWidget* self, QKeyEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseKeyReleaseEvent(KTitleWidget* self, QKeyEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_KeyReleaseEvent_IsBase(true);
        vktitlewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnKeyReleaseEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_FocusInEvent(KTitleWidget* self, QFocusEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->focusInEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseFocusInEvent(KTitleWidget* self, QFocusEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusInEvent_IsBase(true);
        vktitlewidget->focusInEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnFocusInEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_FocusOutEvent(KTitleWidget* self, QFocusEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->focusOutEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseFocusOutEvent(KTitleWidget* self, QFocusEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusOutEvent_IsBase(true);
        vktitlewidget->focusOutEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnFocusOutEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_EnterEvent(KTitleWidget* self, QEnterEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->enterEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseEnterEvent(KTitleWidget* self, QEnterEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_EnterEvent_IsBase(true);
        vktitlewidget->enterEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnEnterEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_EnterEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_LeaveEvent(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->leaveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseLeaveEvent(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_LeaveEvent_IsBase(true);
        vktitlewidget->leaveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnLeaveEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_PaintEvent(KTitleWidget* self, QPaintEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->paintEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBasePaintEvent(KTitleWidget* self, QPaintEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_PaintEvent_IsBase(true);
        vktitlewidget->paintEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnPaintEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_PaintEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_MoveEvent(KTitleWidget* self, QMoveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->moveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseMoveEvent(KTitleWidget* self, QMoveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MoveEvent_IsBase(true);
        vktitlewidget->moveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMoveEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_MoveEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_ResizeEvent(KTitleWidget* self, QResizeEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->resizeEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseResizeEvent(KTitleWidget* self, QResizeEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ResizeEvent_IsBase(true);
        vktitlewidget->resizeEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnResizeEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_CloseEvent(KTitleWidget* self, QCloseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->closeEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseCloseEvent(KTitleWidget* self, QCloseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_CloseEvent_IsBase(true);
        vktitlewidget->closeEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnCloseEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_CloseEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_ContextMenuEvent(KTitleWidget* self, QContextMenuEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->contextMenuEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseContextMenuEvent(KTitleWidget* self, QContextMenuEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ContextMenuEvent_IsBase(true);
        vktitlewidget->contextMenuEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnContextMenuEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_TabletEvent(KTitleWidget* self, QTabletEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->tabletEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseTabletEvent(KTitleWidget* self, QTabletEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_TabletEvent_IsBase(true);
        vktitlewidget->tabletEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnTabletEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_TabletEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_ActionEvent(KTitleWidget* self, QActionEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->actionEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseActionEvent(KTitleWidget* self, QActionEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ActionEvent_IsBase(true);
        vktitlewidget->actionEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnActionEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ActionEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_DragEnterEvent(KTitleWidget* self, QDragEnterEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->dragEnterEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseDragEnterEvent(KTitleWidget* self, QDragEnterEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DragEnterEvent_IsBase(true);
        vktitlewidget->dragEnterEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDragEnterEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_DragMoveEvent(KTitleWidget* self, QDragMoveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->dragMoveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseDragMoveEvent(KTitleWidget* self, QDragMoveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DragMoveEvent_IsBase(true);
        vktitlewidget->dragMoveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDragMoveEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_DragLeaveEvent(KTitleWidget* self, QDragLeaveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseDragLeaveEvent(KTitleWidget* self, QDragLeaveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DragLeaveEvent_IsBase(true);
        vktitlewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDragLeaveEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_DropEvent(KTitleWidget* self, QDropEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->dropEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseDropEvent(KTitleWidget* self, QDropEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DropEvent_IsBase(true);
        vktitlewidget->dropEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDropEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DropEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_HideEvent(KTitleWidget* self, QHideEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->hideEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseHideEvent(KTitleWidget* self, QHideEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_HideEvent_IsBase(true);
        vktitlewidget->hideEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnHideEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_HideEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTitleWidget_NativeEvent(KTitleWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTitleWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KTitleWidget_QBaseNativeEvent(KTitleWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_NativeEvent_IsBase(true);
        return vktitlewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTitleWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnNativeEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_NativeEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KTitleWidget_Metric(const KTitleWidget* self, int param1) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTitleWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KTitleWidget_QBaseMetric(const KTitleWidget* self, int param1) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Metric_IsBase(true);
        return vktitlewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTitleWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMetric(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Metric_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_InitPainter(const KTitleWidget* self, QPainter* painter) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->initPainter(painter);
    } else {
        ((VirtualKTitleWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseInitPainter(const KTitleWidget* self, QPainter* painter) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_InitPainter_IsBase(true);
        vktitlewidget->initPainter(painter);
    } else {
        ((VirtualKTitleWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnInitPainter(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_InitPainter_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KTitleWidget_Redirected(const KTitleWidget* self, QPoint* offset) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->redirected(offset);
    } else {
        return ((VirtualKTitleWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KTitleWidget_QBaseRedirected(const KTitleWidget* self, QPoint* offset) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Redirected_IsBase(true);
        return vktitlewidget->redirected(offset);
    } else {
        return ((VirtualKTitleWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnRedirected(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Redirected_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KTitleWidget_SharedPainter(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->sharedPainter();
    } else {
        return ((VirtualKTitleWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KTitleWidget_QBaseSharedPainter(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_SharedPainter_IsBase(true);
        return vktitlewidget->sharedPainter();
    } else {
        return ((VirtualKTitleWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnSharedPainter(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_SharedPainter_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_InputMethodEvent(KTitleWidget* self, QInputMethodEvent* param1) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKTitleWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseInputMethodEvent(KTitleWidget* self, QInputMethodEvent* param1) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_InputMethodEvent_IsBase(true);
        vktitlewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKTitleWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnInputMethodEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTitleWidget_InputMethodQuery(const KTitleWidget* self, int param1) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return new QVariant(vktitlewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTitleWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KTitleWidget_QBaseInputMethodQuery(const KTitleWidget* self, int param1) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vktitlewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKTitleWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnInputMethodQuery(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTitleWidget_FocusNextPrevChild(KTitleWidget* self, bool next) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKTitleWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KTitleWidget_QBaseFocusNextPrevChild(KTitleWidget* self, bool next) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusNextPrevChild_IsBase(true);
        return vktitlewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKTitleWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnFocusNextPrevChild(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_TimerEvent(KTitleWidget* self, QTimerEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->timerEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseTimerEvent(KTitleWidget* self, QTimerEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_TimerEvent_IsBase(true);
        vktitlewidget->timerEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnTimerEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_TimerEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_ChildEvent(KTitleWidget* self, QChildEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->childEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseChildEvent(KTitleWidget* self, QChildEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ChildEvent_IsBase(true);
        vktitlewidget->childEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnChildEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ChildEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_CustomEvent(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->customEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseCustomEvent(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_CustomEvent_IsBase(true);
        vktitlewidget->customEvent(event);
    } else {
        ((VirtualKTitleWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnCustomEvent(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_CustomEvent_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_ConnectNotify(KTitleWidget* self, const QMetaMethod* signal) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->connectNotify(*signal);
    } else {
        ((VirtualKTitleWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseConnectNotify(KTitleWidget* self, const QMetaMethod* signal) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ConnectNotify_IsBase(true);
        vktitlewidget->connectNotify(*signal);
    } else {
        ((VirtualKTitleWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnConnectNotify(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_DisconnectNotify(KTitleWidget* self, const QMetaMethod* signal) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKTitleWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTitleWidget_QBaseDisconnectNotify(KTitleWidget* self, const QMetaMethod* signal) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DisconnectNotify_IsBase(true);
        vktitlewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKTitleWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDisconnectNotify(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_UpdateMicroFocus(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->updateMicroFocus();
    } else {
        ((VirtualKTitleWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KTitleWidget_QBaseUpdateMicroFocus(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_UpdateMicroFocus_IsBase(true);
        vktitlewidget->updateMicroFocus();
    } else {
        ((VirtualKTitleWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnUpdateMicroFocus(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_Create(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->create();
    } else {
        ((VirtualKTitleWidget*)self)->create();
    }
}

// Base class handler implementation
void KTitleWidget_QBaseCreate(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Create_IsBase(true);
        vktitlewidget->create();
    } else {
        ((VirtualKTitleWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnCreate(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Create_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KTitleWidget_Destroy(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->destroy();
    } else {
        ((VirtualKTitleWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KTitleWidget_QBaseDestroy(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Destroy_IsBase(true);
        vktitlewidget->destroy();
    } else {
        ((VirtualKTitleWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDestroy(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Destroy_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTitleWidget_FocusNextChild(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->focusNextChild();
    } else {
        return ((VirtualKTitleWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KTitleWidget_QBaseFocusNextChild(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusNextChild_IsBase(true);
        return vktitlewidget->focusNextChild();
    } else {
        return ((VirtualKTitleWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnFocusNextChild(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTitleWidget_FocusPreviousChild(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->focusPreviousChild();
    } else {
        return ((VirtualKTitleWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KTitleWidget_QBaseFocusPreviousChild(KTitleWidget* self) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusPreviousChild_IsBase(true);
        return vktitlewidget->focusPreviousChild();
    } else {
        return ((VirtualKTitleWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnFocusPreviousChild(KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTitleWidget_Sender(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->sender();
    } else {
        return ((VirtualKTitleWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTitleWidget_QBaseSender(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Sender_IsBase(true);
        return vktitlewidget->sender();
    } else {
        return ((VirtualKTitleWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnSender(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Sender_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTitleWidget_SenderSignalIndex(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->senderSignalIndex();
    } else {
        return ((VirtualKTitleWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTitleWidget_QBaseSenderSignalIndex(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_SenderSignalIndex_IsBase(true);
        return vktitlewidget->senderSignalIndex();
    } else {
        return ((VirtualKTitleWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnSenderSignalIndex(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTitleWidget_Receivers(const KTitleWidget* self, const char* signal) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->receivers(signal);
    } else {
        return ((VirtualKTitleWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTitleWidget_QBaseReceivers(const KTitleWidget* self, const char* signal) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Receivers_IsBase(true);
        return vktitlewidget->receivers(signal);
    } else {
        return ((VirtualKTitleWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnReceivers(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_Receivers_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTitleWidget_IsSignalConnected(const KTitleWidget* self, const QMetaMethod* signal) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKTitleWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTitleWidget_QBaseIsSignalConnected(const KTitleWidget* self, const QMetaMethod* signal) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_IsSignalConnected_IsBase(true);
        return vktitlewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKTitleWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnIsSignalConnected(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KTitleWidget_GetDecodedMetricF(const KTitleWidget* self, int metricA, int metricB) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        return vktitlewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTitleWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KTitleWidget_QBaseGetDecodedMetricF(const KTitleWidget* self, int metricA, int metricB) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_GetDecodedMetricF_IsBase(true);
        return vktitlewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTitleWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnGetDecodedMetricF(const KTitleWidget* self, intptr_t slot) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget && vktitlewidget->isVirtualKTitleWidget) {
        vktitlewidget->setKTitleWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKTitleWidget::KTitleWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KTitleWidget_Delete(KTitleWidget* self) {
    delete self;
}
