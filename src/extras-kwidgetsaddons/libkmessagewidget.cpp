#include <KMessageWidget>
#include <QAction>
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
#include <QFrame>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kmessagewidget.h>
#include "libkmessagewidget.h"
#include "libkmessagewidget.hxx"

KMessageWidget* KMessageWidget_new(QWidget* parent) {
    return new VirtualKMessageWidget(parent);
}

KMessageWidget* KMessageWidget_new2() {
    return new VirtualKMessageWidget();
}

KMessageWidget* KMessageWidget_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKMessageWidget(text_QString);
}

KMessageWidget* KMessageWidget_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKMessageWidget(text_QString, parent);
}

QMetaObject* KMessageWidget_MetaObject(const KMessageWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KMessageWidget_Metacast(KMessageWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KMessageWidget_Metacall(KMessageWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KMessageWidget_Tr(const char* s) {
    auto _ret = KMessageWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KMessageWidget_Position(const KMessageWidget* self) {
    return static_cast<int>(self->position());
}

libqt_string KMessageWidget_Text(const KMessageWidget* self) {
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

int KMessageWidget_TextFormat(const KMessageWidget* self) {
    return static_cast<int>(self->textFormat());
}

void KMessageWidget_SetTextFormat(KMessageWidget* self, int textFormat) {
    self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

bool KMessageWidget_WordWrap(const KMessageWidget* self) {
    return self->wordWrap();
}

bool KMessageWidget_IsCloseButtonVisible(const KMessageWidget* self) {
    return self->isCloseButtonVisible();
}

int KMessageWidget_MessageType(const KMessageWidget* self) {
    return static_cast<int>(self->messageType());
}

void KMessageWidget_AddAction(KMessageWidget* self, QAction* action) {
    self->addAction(action);
}

void KMessageWidget_RemoveAction(KMessageWidget* self, QAction* action) {
    self->removeAction(action);
}

void KMessageWidget_ClearActions(KMessageWidget* self) {
    self->clearActions();
}

QSize* KMessageWidget_SizeHint(const KMessageWidget* self) {
    return new QSize(self->sizeHint());
}

QSize* KMessageWidget_MinimumSizeHint(const KMessageWidget* self) {
    return new QSize(self->minimumSizeHint());
}

int KMessageWidget_HeightForWidth(const KMessageWidget* self, int width) {
    return self->heightForWidth(static_cast<int>(width));
}

QIcon* KMessageWidget_Icon(const KMessageWidget* self) {
    return new QIcon(self->icon());
}

bool KMessageWidget_IsHideAnimationRunning(const KMessageWidget* self) {
    return self->isHideAnimationRunning();
}

bool KMessageWidget_IsShowAnimationRunning(const KMessageWidget* self) {
    return self->isShowAnimationRunning();
}

void KMessageWidget_SetText(KMessageWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void KMessageWidget_SetPosition(KMessageWidget* self, int position) {
    self->setPosition(static_cast<KMessageWidget::Position>(position));
}

void KMessageWidget_SetWordWrap(KMessageWidget* self, bool wordWrap) {
    self->setWordWrap(wordWrap);
}

void KMessageWidget_SetCloseButtonVisible(KMessageWidget* self, bool visible) {
    self->setCloseButtonVisible(visible);
}

void KMessageWidget_SetMessageType(KMessageWidget* self, int typeVal) {
    self->setMessageType(static_cast<KMessageWidget::MessageType>(typeVal));
}

void KMessageWidget_AnimatedShow(KMessageWidget* self) {
    self->animatedShow();
}

void KMessageWidget_AnimatedHide(KMessageWidget* self) {
    self->animatedHide();
}

void KMessageWidget_SetIcon(KMessageWidget* self, const QIcon* icon) {
    self->setIcon(*icon);
}

void KMessageWidget_LinkActivated(KMessageWidget* self, const libqt_string contents) {
    QString contents_QString = QString::fromUtf8(contents.data, contents.len);
    self->linkActivated(contents_QString);
}

void KMessageWidget_Connect_LinkActivated(KMessageWidget* self, intptr_t slot) {
    void (*slotFunc)(KMessageWidget*, const char*) = reinterpret_cast<void (*)(KMessageWidget*, const char*)>(slot);
    KMessageWidget::connect(self,
                            static_cast<void (KMessageWidget::*)(const QString&)>(&KMessageWidget::linkActivated),
                            [self, slotFunc](const QString& contents) {
                                const auto contents_ret = contents;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray contents_b = contents_ret.toUtf8();
                                auto contents_str_len = contents_b.length();
                                const char* contents_str = static_cast<const char*>(malloc(contents_str_len + 1));
                                memcpy((void*)contents_str, contents_b.data(), contents_str_len);
                                ((char*)contents_str)[contents_str_len] = '\0';
                                const char* sigval1 = contents_str;
                                slotFunc(self, sigval1);
                                libqt_free(contents_str);
                            });
}

void KMessageWidget_LinkHovered(KMessageWidget* self, const libqt_string contents) {
    QString contents_QString = QString::fromUtf8(contents.data, contents.len);
    self->linkHovered(contents_QString);
}

void KMessageWidget_Connect_LinkHovered(KMessageWidget* self, intptr_t slot) {
    void (*slotFunc)(KMessageWidget*, const char*) = reinterpret_cast<void (*)(KMessageWidget*, const char*)>(slot);
    KMessageWidget::connect(self,
                            static_cast<void (KMessageWidget::*)(const QString&)>(&KMessageWidget::linkHovered),
                            [self, slotFunc](const QString& contents) {
                                const auto contents_ret = contents;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray contents_b = contents_ret.toUtf8();
                                auto contents_str_len = contents_b.length();
                                const char* contents_str = static_cast<const char*>(malloc(contents_str_len + 1));
                                memcpy((void*)contents_str, contents_b.data(), contents_str_len);
                                ((char*)contents_str)[contents_str_len] = '\0';
                                const char* sigval1 = contents_str;
                                slotFunc(self, sigval1);
                                libqt_free(contents_str);
                            });
}

void KMessageWidget_HideAnimationFinished(KMessageWidget* self) {
    self->hideAnimationFinished();
}

void KMessageWidget_Connect_HideAnimationFinished(KMessageWidget* self, intptr_t slot) {
    void (*slotFunc)(KMessageWidget*) = reinterpret_cast<void (*)(KMessageWidget*)>(slot);
    KMessageWidget::connect(self,
                            static_cast<void (KMessageWidget::*)()>(&KMessageWidget::hideAnimationFinished),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void KMessageWidget_ShowAnimationFinished(KMessageWidget* self) {
    self->showAnimationFinished();
}

void KMessageWidget_Connect_ShowAnimationFinished(KMessageWidget* self, intptr_t slot) {
    void (*slotFunc)(KMessageWidget*) = reinterpret_cast<void (*)(KMessageWidget*)>(slot);
    KMessageWidget::connect(self,
                            static_cast<void (KMessageWidget::*)()>(&KMessageWidget::showAnimationFinished),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void KMessageWidget_PaintEvent(KMessageWidget* self, QPaintEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->paintEvent(event);
    }
}

bool KMessageWidget_Event(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        return vkmessagewidget->event(event);
    }
    qFatal("Error: Protected method KMessageWidget::event called without a directly constructed type");
}

void KMessageWidget_ResizeEvent(KMessageWidget* self, QResizeEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->resizeEvent(event);
    }
}

libqt_string KMessageWidget_Tr2(const char* s, const char* c) {
    auto _ret = KMessageWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KMessageWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KMessageWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KMessageWidget_SuperMetaObject(const KMessageWidget* self) {
    return (QMetaObject*)self->KMessageWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMetaObject(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_metaobject_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KMessageWidget_SuperMetacast(KMessageWidget* self, const char* param1) {
    return self->KMessageWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMetacast(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_metacast_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KMessageWidget_SuperMetacall(KMessageWidget* self, int param1, int param2, void** param3) {
    return self->KMessageWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMetacall(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_metacall_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KMessageWidget_SuperSizeHint(const KMessageWidget* self) {
    return new QSize(self->KMessageWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnSizeHint(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_sizehint_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* KMessageWidget_SuperMinimumSizeHint(const KMessageWidget* self) {
    return new QSize(self->KMessageWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMinimumSizeHint(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_minimumsizehint_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
int KMessageWidget_SuperHeightForWidth(const KMessageWidget* self, int width) {
    return self->KMessageWidget::heightForWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnHeightForWidth(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_heightforwidth_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
void KMessageWidget_SuperPaintEvent(KMessageWidget* self, QPaintEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnPaintEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_paintevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
bool KMessageWidget_SuperEvent(KMessageWidget* self, QEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        return vkmessagewidget->KMessageWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_event_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Event_Callback>(slot);
}

// Base class handler implementation
void KMessageWidget_SuperResizeEvent(KMessageWidget* self, QResizeEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnResizeEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_resizeevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_ChangeEvent(KMessageWidget* self, QEvent* param1) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperChangeEvent(KMessageWidget* self, QEvent* param1) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnChangeEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_changeevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_InitStyleOption(const KMessageWidget* self, QStyleOptionFrame* option) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget) {
        vkmessagewidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperInitStyleOption(const KMessageWidget* self, QStyleOptionFrame* option) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        vkmessagewidget->KMessageWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnInitStyleOption(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_initstyleoption_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KMessageWidget_DevType(const KMessageWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KMessageWidget_SuperDevType(const KMessageWidget* self) {
    return self->KMessageWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDevType(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_devtype_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_SetVisible(KMessageWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KMessageWidget_SuperSetVisible(KMessageWidget* self, bool visible) {
    self->KMessageWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnSetVisible(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_setvisible_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
bool KMessageWidget_HasHeightForWidth(const KMessageWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KMessageWidget_SuperHasHeightForWidth(const KMessageWidget* self) {
    return self->KMessageWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnHasHeightForWidth(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_hasheightforwidth_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KMessageWidget_PaintEngine(const KMessageWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KMessageWidget_SuperPaintEngine(const KMessageWidget* self) {
    return self->KMessageWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnPaintEngine(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_paintengine_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_MousePressEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperMousePressEvent(KMessageWidget* self, QMouseEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMousePressEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_mousepressevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_MouseReleaseEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperMouseReleaseEvent(KMessageWidget* self, QMouseEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMouseReleaseEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_mousereleaseevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_MouseDoubleClickEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperMouseDoubleClickEvent(KMessageWidget* self, QMouseEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMouseDoubleClickEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_MouseMoveEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperMouseMoveEvent(KMessageWidget* self, QMouseEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMouseMoveEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_mousemoveevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_WheelEvent(KMessageWidget* self, QWheelEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperWheelEvent(KMessageWidget* self, QWheelEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnWheelEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_wheelevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_KeyPressEvent(KMessageWidget* self, QKeyEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperKeyPressEvent(KMessageWidget* self, QKeyEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnKeyPressEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_keypressevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_KeyReleaseEvent(KMessageWidget* self, QKeyEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperKeyReleaseEvent(KMessageWidget* self, QKeyEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnKeyReleaseEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_keyreleaseevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_FocusInEvent(KMessageWidget* self, QFocusEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperFocusInEvent(KMessageWidget* self, QFocusEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnFocusInEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_focusinevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_FocusOutEvent(KMessageWidget* self, QFocusEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperFocusOutEvent(KMessageWidget* self, QFocusEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnFocusOutEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_focusoutevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_EnterEvent(KMessageWidget* self, QEnterEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperEnterEvent(KMessageWidget* self, QEnterEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnEnterEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_enterevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_LeaveEvent(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperLeaveEvent(KMessageWidget* self, QEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnLeaveEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_leaveevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_MoveEvent(KMessageWidget* self, QMoveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperMoveEvent(KMessageWidget* self, QMoveEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMoveEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_moveevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_CloseEvent(KMessageWidget* self, QCloseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperCloseEvent(KMessageWidget* self, QCloseEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnCloseEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_closeevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_ContextMenuEvent(KMessageWidget* self, QContextMenuEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperContextMenuEvent(KMessageWidget* self, QContextMenuEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnContextMenuEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_contextmenuevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_TabletEvent(KMessageWidget* self, QTabletEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperTabletEvent(KMessageWidget* self, QTabletEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnTabletEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_tabletevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_ActionEvent(KMessageWidget* self, QActionEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperActionEvent(KMessageWidget* self, QActionEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnActionEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_actionevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_DragEnterEvent(KMessageWidget* self, QDragEnterEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperDragEnterEvent(KMessageWidget* self, QDragEnterEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDragEnterEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_dragenterevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_DragMoveEvent(KMessageWidget* self, QDragMoveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperDragMoveEvent(KMessageWidget* self, QDragMoveEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDragMoveEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_dragmoveevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_DragLeaveEvent(KMessageWidget* self, QDragLeaveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperDragLeaveEvent(KMessageWidget* self, QDragLeaveEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDragLeaveEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_dragleaveevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_DropEvent(KMessageWidget* self, QDropEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperDropEvent(KMessageWidget* self, QDropEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDropEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_dropevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_ShowEvent(KMessageWidget* self, QShowEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperShowEvent(KMessageWidget* self, QShowEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnShowEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_showevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_HideEvent(KMessageWidget* self, QHideEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperHideEvent(KMessageWidget* self, QHideEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnHideEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_hideevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KMessageWidget_NativeEvent(KMessageWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        return vkmessagewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMessageWidget_SuperNativeEvent(KMessageWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        return vkmessagewidget->KMessageWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KMessageWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnNativeEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_nativeevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KMessageWidget_Metric(const KMessageWidget* self, int param1) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget) {
        return vkmessagewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KMessageWidget_SuperMetric(const KMessageWidget* self, int param1) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        return vkmessagewidget->KMessageWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KMessageWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMetric(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_metric_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_InitPainter(const KMessageWidget* self, QPainter* painter) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget) {
        vkmessagewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperInitPainter(const KMessageWidget* self, QPainter* painter) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        vkmessagewidget->KMessageWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnInitPainter(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_initpainter_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KMessageWidget_Redirected(const KMessageWidget* self, QPoint* offset) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget) {
        return vkmessagewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KMessageWidget_SuperRedirected(const KMessageWidget* self, QPoint* offset) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        return vkmessagewidget->KMessageWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnRedirected(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_redirected_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KMessageWidget_SharedPainter(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget) {
        return vkmessagewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KMessageWidget_SuperSharedPainter(const KMessageWidget* self) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        return vkmessagewidget->KMessageWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KMessageWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnSharedPainter(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_sharedpainter_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_InputMethodEvent(KMessageWidget* self, QInputMethodEvent* param1) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperInputMethodEvent(KMessageWidget* self, QInputMethodEvent* param1) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnInputMethodEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_inputmethodevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KMessageWidget_InputMethodQuery(const KMessageWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KMessageWidget_SuperInputMethodQuery(const KMessageWidget* self, int param1) {
    return new QVariant(self->KMessageWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnInputMethodQuery(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self)))
        vkmessagewidget->kmessagewidget_inputmethodquery_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KMessageWidget_FocusNextPrevChild(KMessageWidget* self, bool next) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        return vkmessagewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KMessageWidget_SuperFocusNextPrevChild(KMessageWidget* self, bool next) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        return vkmessagewidget->KMessageWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnFocusNextPrevChild(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_focusnextprevchild_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KMessageWidget_EventFilter(KMessageWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KMessageWidget_SuperEventFilter(KMessageWidget* self, QObject* watched, QEvent* event) {
    return self->KMessageWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnEventFilter(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_eventfilter_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_TimerEvent(KMessageWidget* self, QTimerEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperTimerEvent(KMessageWidget* self, QTimerEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnTimerEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_timerevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_ChildEvent(KMessageWidget* self, QChildEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperChildEvent(KMessageWidget* self, QChildEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnChildEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_childevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_CustomEvent(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperCustomEvent(KMessageWidget* self, QEvent* event) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnCustomEvent(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_customevent_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_ConnectNotify(KMessageWidget* self, const QMetaMethod* signal) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperConnectNotify(KMessageWidget* self, const QMetaMethod* signal) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnConnectNotify(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_connectnotify_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KMessageWidget_DisconnectNotify(KMessageWidget* self, const QMetaMethod* signal) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget) {
        vkmessagewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KMessageWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KMessageWidget_SuperDisconnectNotify(KMessageWidget* self, const QMetaMethod* signal) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->KMessageWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KMessageWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDisconnectNotify(KMessageWidget* self, intptr_t slot) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self))
        vkmessagewidget->kmessagewidget_disconnectnotify_callback = reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KMessageWidget_DrawFrame(KMessageWidget* self, QPainter* param1) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->VirtualKMessageWidget::drawFrame(param1);
    } else
        qFatal("Error: Protected method KMessageWidget::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KMessageWidget_UpdateMicroFocus(KMessageWidget* self) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->VirtualKMessageWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KMessageWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KMessageWidget_Create(KMessageWidget* self) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->VirtualKMessageWidget::create();
    } else
        qFatal("Error: Protected method KMessageWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KMessageWidget_Destroy(KMessageWidget* self) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        vkmessagewidget->VirtualKMessageWidget::destroy();
    } else
        qFatal("Error: Protected method KMessageWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMessageWidget_FocusNextChild(KMessageWidget* self) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        return vkmessagewidget->VirtualKMessageWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KMessageWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMessageWidget_FocusPreviousChild(KMessageWidget* self) {
    if (auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self)) {
        return vkmessagewidget->VirtualKMessageWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KMessageWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KMessageWidget_Sender(const KMessageWidget* self) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        return vkmessagewidget->VirtualKMessageWidget::sender();
    } else
        qFatal("Error: Protected method KMessageWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KMessageWidget_SenderSignalIndex(const KMessageWidget* self) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        return vkmessagewidget->VirtualKMessageWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KMessageWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KMessageWidget_Receivers(const KMessageWidget* self, const char* signal) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        return vkmessagewidget->VirtualKMessageWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KMessageWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KMessageWidget_IsSignalConnected(const KMessageWidget* self, const QMetaMethod* signal) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        return vkmessagewidget->VirtualKMessageWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KMessageWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KMessageWidget_GetDecodedMetricF(const KMessageWidget* self, int metricA, int metricB) {
    if (auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self))) {
        return vkmessagewidget->VirtualKMessageWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KMessageWidget::getDecodedMetricF called without a directly constructed type");
}

void KMessageWidget_Delete(KMessageWidget* self) {
    delete self;
}
