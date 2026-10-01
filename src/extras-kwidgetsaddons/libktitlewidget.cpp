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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTitleWidget_Tr(const char* s) {
    auto _ret = KTitleWidget::tr(s);
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
    auto _ret = self->text();
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
    auto _ret = self->comment();
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

void KTitleWidget_ChangeEvent(KTitleWidget* self, QEvent* e) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->changeEvent(e);
    }
}

void KTitleWidget_ShowEvent(KTitleWidget* self, QShowEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->showEvent(event);
    }
}

bool KTitleWidget_EventFilter(KTitleWidget* self, QObject* object, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        return vktitlewidget->eventFilter(object, event);
    }
    qFatal("Error: Protected method KTitleWidget::eventFilter called without a directly constructed type");
}

libqt_string KTitleWidget_Tr2(const char* s, const char* c) {
    auto _ret = KTitleWidget::tr(s, c);
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
    auto _ret = KTitleWidget::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* KTitleWidget_SuperMetaObject(const KTitleWidget* self) {
    return (QMetaObject*)self->KTitleWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMetaObject(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_metaobject_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTitleWidget_SuperMetacast(KTitleWidget* self, const char* param1) {
    return self->KTitleWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMetacast(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_metacast_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTitleWidget_SuperMetacall(KTitleWidget* self, int param1, int param2, void** param3) {
    return self->KTitleWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMetacall(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_metacall_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void KTitleWidget_SuperChangeEvent(KTitleWidget* self, QEvent* e) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnChangeEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_changeevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void KTitleWidget_SuperShowEvent(KTitleWidget* self, QShowEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnShowEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_showevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
bool KTitleWidget_SuperEventFilter(KTitleWidget* self, QObject* object, QEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        return vktitlewidget->KTitleWidget::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnEventFilter(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_eventfilter_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KTitleWidget_DevType(const KTitleWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KTitleWidget_SuperDevType(const KTitleWidget* self) {
    return self->KTitleWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDevType(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_devtype_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_SetVisible(KTitleWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KTitleWidget_SuperSetVisible(KTitleWidget* self, bool visible) {
    self->KTitleWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnSetVisible(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_setvisible_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KTitleWidget_SizeHint(const KTitleWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KTitleWidget_SuperSizeHint(const KTitleWidget* self) {
    return new QSize(self->KTitleWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnSizeHint(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_sizehint_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KTitleWidget_MinimumSizeHint(const KTitleWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KTitleWidget_SuperMinimumSizeHint(const KTitleWidget* self) {
    return new QSize(self->KTitleWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMinimumSizeHint(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_minimumsizehint_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KTitleWidget_HeightForWidth(const KTitleWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KTitleWidget_SuperHeightForWidth(const KTitleWidget* self, int param1) {
    return self->KTitleWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnHeightForWidth(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_heightforwidth_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KTitleWidget_HasHeightForWidth(const KTitleWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KTitleWidget_SuperHasHeightForWidth(const KTitleWidget* self) {
    return self->KTitleWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnHasHeightForWidth(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_hasheightforwidth_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KTitleWidget_PaintEngine(const KTitleWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KTitleWidget_SuperPaintEngine(const KTitleWidget* self) {
    return self->KTitleWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnPaintEngine(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_paintengine_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KTitleWidget_Event(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        return vktitlewidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTitleWidget_SuperEvent(KTitleWidget* self, QEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        return vktitlewidget->KTitleWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_event_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_MousePressEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperMousePressEvent(KTitleWidget* self, QMouseEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMousePressEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_mousepressevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_MouseReleaseEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperMouseReleaseEvent(KTitleWidget* self, QMouseEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMouseReleaseEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_mousereleaseevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_MouseDoubleClickEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperMouseDoubleClickEvent(KTitleWidget* self, QMouseEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMouseDoubleClickEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_MouseMoveEvent(KTitleWidget* self, QMouseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperMouseMoveEvent(KTitleWidget* self, QMouseEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMouseMoveEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_mousemoveevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_WheelEvent(KTitleWidget* self, QWheelEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperWheelEvent(KTitleWidget* self, QWheelEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnWheelEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_wheelevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_KeyPressEvent(KTitleWidget* self, QKeyEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperKeyPressEvent(KTitleWidget* self, QKeyEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnKeyPressEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_keypressevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_KeyReleaseEvent(KTitleWidget* self, QKeyEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperKeyReleaseEvent(KTitleWidget* self, QKeyEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnKeyReleaseEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_keyreleaseevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_FocusInEvent(KTitleWidget* self, QFocusEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperFocusInEvent(KTitleWidget* self, QFocusEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnFocusInEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_focusinevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_FocusOutEvent(KTitleWidget* self, QFocusEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperFocusOutEvent(KTitleWidget* self, QFocusEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnFocusOutEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_focusoutevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_EnterEvent(KTitleWidget* self, QEnterEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperEnterEvent(KTitleWidget* self, QEnterEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnEnterEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_enterevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_LeaveEvent(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperLeaveEvent(KTitleWidget* self, QEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnLeaveEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_leaveevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_PaintEvent(KTitleWidget* self, QPaintEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperPaintEvent(KTitleWidget* self, QPaintEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnPaintEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_paintevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_MoveEvent(KTitleWidget* self, QMoveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperMoveEvent(KTitleWidget* self, QMoveEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMoveEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_moveevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_ResizeEvent(KTitleWidget* self, QResizeEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperResizeEvent(KTitleWidget* self, QResizeEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnResizeEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_resizeevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_CloseEvent(KTitleWidget* self, QCloseEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperCloseEvent(KTitleWidget* self, QCloseEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnCloseEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_closeevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_ContextMenuEvent(KTitleWidget* self, QContextMenuEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperContextMenuEvent(KTitleWidget* self, QContextMenuEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnContextMenuEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_contextmenuevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_TabletEvent(KTitleWidget* self, QTabletEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperTabletEvent(KTitleWidget* self, QTabletEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnTabletEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_tabletevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_ActionEvent(KTitleWidget* self, QActionEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperActionEvent(KTitleWidget* self, QActionEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnActionEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_actionevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_DragEnterEvent(KTitleWidget* self, QDragEnterEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperDragEnterEvent(KTitleWidget* self, QDragEnterEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDragEnterEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_dragenterevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_DragMoveEvent(KTitleWidget* self, QDragMoveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperDragMoveEvent(KTitleWidget* self, QDragMoveEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDragMoveEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_dragmoveevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_DragLeaveEvent(KTitleWidget* self, QDragLeaveEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperDragLeaveEvent(KTitleWidget* self, QDragLeaveEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDragLeaveEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_dragleaveevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_DropEvent(KTitleWidget* self, QDropEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperDropEvent(KTitleWidget* self, QDropEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDropEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_dropevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_HideEvent(KTitleWidget* self, QHideEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperHideEvent(KTitleWidget* self, QHideEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnHideEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_hideevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KTitleWidget_NativeEvent(KTitleWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        return vktitlewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTitleWidget_SuperNativeEvent(KTitleWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        return vktitlewidget->KTitleWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KTitleWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnNativeEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_nativeevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KTitleWidget_Metric(const KTitleWidget* self, int param1) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget) {
        return vktitlewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KTitleWidget_SuperMetric(const KTitleWidget* self, int param1) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        return vktitlewidget->KTitleWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KTitleWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnMetric(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_metric_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_InitPainter(const KTitleWidget* self, QPainter* painter) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget) {
        vktitlewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperInitPainter(const KTitleWidget* self, QPainter* painter) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        vktitlewidget->KTitleWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnInitPainter(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_initpainter_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KTitleWidget_Redirected(const KTitleWidget* self, QPoint* offset) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget) {
        return vktitlewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KTitleWidget_SuperRedirected(const KTitleWidget* self, QPoint* offset) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        return vktitlewidget->KTitleWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnRedirected(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_redirected_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KTitleWidget_SharedPainter(const KTitleWidget* self) {
    auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self));
    if (vktitlewidget) {
        return vktitlewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KTitleWidget_SuperSharedPainter(const KTitleWidget* self) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        return vktitlewidget->KTitleWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KTitleWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnSharedPainter(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_sharedpainter_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_InputMethodEvent(KTitleWidget* self, QInputMethodEvent* param1) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperInputMethodEvent(KTitleWidget* self, QInputMethodEvent* param1) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnInputMethodEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_inputmethodevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTitleWidget_InputMethodQuery(const KTitleWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KTitleWidget_SuperInputMethodQuery(const KTitleWidget* self, int param1) {
    return new QVariant(self->KTitleWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnInputMethodQuery(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self)))
        vktitlewidget->ktitlewidget_inputmethodquery_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KTitleWidget_FocusNextPrevChild(KTitleWidget* self, bool next) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        return vktitlewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTitleWidget_SuperFocusNextPrevChild(KTitleWidget* self, bool next) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        return vktitlewidget->KTitleWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnFocusNextPrevChild(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_focusnextprevchild_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_TimerEvent(KTitleWidget* self, QTimerEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperTimerEvent(KTitleWidget* self, QTimerEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnTimerEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_timerevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_ChildEvent(KTitleWidget* self, QChildEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperChildEvent(KTitleWidget* self, QChildEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnChildEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_childevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_CustomEvent(KTitleWidget* self, QEvent* event) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperCustomEvent(KTitleWidget* self, QEvent* event) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnCustomEvent(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_customevent_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_ConnectNotify(KTitleWidget* self, const QMetaMethod* signal) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperConnectNotify(KTitleWidget* self, const QMetaMethod* signal) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnConnectNotify(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_connectnotify_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTitleWidget_DisconnectNotify(KTitleWidget* self, const QMetaMethod* signal) {
    auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self);
    if (vktitlewidget) {
        vktitlewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTitleWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTitleWidget_SuperDisconnectNotify(KTitleWidget* self, const QMetaMethod* signal) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->KTitleWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTitleWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTitleWidget_OnDisconnectNotify(KTitleWidget* self, intptr_t slot) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self))
        vktitlewidget->ktitlewidget_disconnectnotify_callback = reinterpret_cast<VirtualKTitleWidget::KTitleWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KTitleWidget_UpdateMicroFocus(KTitleWidget* self) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->VirtualKTitleWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KTitleWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KTitleWidget_Create(KTitleWidget* self) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->VirtualKTitleWidget::create();
    } else
        qFatal("Error: Protected method KTitleWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KTitleWidget_Destroy(KTitleWidget* self) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        vktitlewidget->VirtualKTitleWidget::destroy();
    } else
        qFatal("Error: Protected method KTitleWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTitleWidget_FocusNextChild(KTitleWidget* self) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        return vktitlewidget->VirtualKTitleWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KTitleWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTitleWidget_FocusPreviousChild(KTitleWidget* self) {
    if (auto* vktitlewidget = dynamic_cast<VirtualKTitleWidget*>(self)) {
        return vktitlewidget->VirtualKTitleWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KTitleWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KTitleWidget_Sender(const KTitleWidget* self) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        return vktitlewidget->VirtualKTitleWidget::sender();
    } else
        qFatal("Error: Protected method KTitleWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTitleWidget_SenderSignalIndex(const KTitleWidget* self) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        return vktitlewidget->VirtualKTitleWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTitleWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTitleWidget_Receivers(const KTitleWidget* self, const char* signal) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        return vktitlewidget->VirtualKTitleWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KTitleWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTitleWidget_IsSignalConnected(const KTitleWidget* self, const QMetaMethod* signal) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        return vktitlewidget->VirtualKTitleWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTitleWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KTitleWidget_GetDecodedMetricF(const KTitleWidget* self, int metricA, int metricB) {
    if (auto* vktitlewidget = const_cast<VirtualKTitleWidget*>(dynamic_cast<const VirtualKTitleWidget*>(self))) {
        return vktitlewidget->VirtualKTitleWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KTitleWidget::getDecodedMetricF called without a directly constructed type");
}

void KTitleWidget_Delete(KTitleWidget* self) {
    delete self;
}
