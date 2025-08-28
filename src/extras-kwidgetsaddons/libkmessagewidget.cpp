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
#include <QByteArray>
#include <cstring>
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
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKMessageWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMessageWidget_OnMetacall(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Metacall_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KMessageWidget_QBaseMetacall(KMessageWidget* self, int param1, int param2, void** param3) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Metacall_IsBase(true);
        return vkmessagewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKMessageWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KMessageWidget_Tr(const char* s) {
    QString _ret = KMessageWidget::tr(s);
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
    auto* vkmessagewidget = dynamic_cast<const VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKMessageWidget*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMessageWidget_OnSizeHint(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_SizeHint_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* KMessageWidget_QBaseSizeHint(const KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<const VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_SizeHint_IsBase(true);
        return new QSize(vkmessagewidget->sizeHint());
    } else {
        return new QSize(((VirtualKMessageWidget*)self)->sizeHint());
    }
}

QSize* KMessageWidget_MinimumSizeHint(const KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<const VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMessageWidget*)self)->minimumSizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMessageWidget_OnMinimumSizeHint(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* KMessageWidget_QBaseMinimumSizeHint(const KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<const VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkmessagewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKMessageWidget*)self)->minimumSizeHint());
    }
}

int KMessageWidget_HeightForWidth(const KMessageWidget* self, int width) {
    auto* vkmessagewidget = dynamic_cast<const VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return self->heightForWidth(static_cast<int>(width));
    } else {
        return ((VirtualKMessageWidget*)self)->heightForWidth(static_cast<int>(width));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMessageWidget_OnHeightForWidth(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_HeightForWidth_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KMessageWidget_QBaseHeightForWidth(const KMessageWidget* self, int width) {
    auto* vkmessagewidget = dynamic_cast<const VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_HeightForWidth_IsBase(true);
        return vkmessagewidget->heightForWidth(static_cast<int>(width));
    } else {
        return ((VirtualKMessageWidget*)self)->heightForWidth(static_cast<int>(width));
    }
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
    KMessageWidget::connect(self, &KMessageWidget::linkActivated, [self, slotFunc](const QString& contents) {
        const QString contents_ret = contents;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray contents_b = contents_ret.toUtf8();
        const char* contents_str = static_cast<const char*>(malloc(contents_b.length() + 1));
        memcpy((void*)contents_str, contents_b.data(), contents_b.length());
        ((char*)contents_str)[contents_b.length()] = '\0';
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
    KMessageWidget::connect(self, &KMessageWidget::linkHovered, [self, slotFunc](const QString& contents) {
        const QString contents_ret = contents;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray contents_b = contents_ret.toUtf8();
        const char* contents_str = static_cast<const char*>(malloc(contents_b.length() + 1));
        memcpy((void*)contents_str, contents_b.data(), contents_b.length());
        ((char*)contents_str)[contents_b.length()] = '\0';
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
    KMessageWidget::connect(self, &KMessageWidget::hideAnimationFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KMessageWidget_ShowAnimationFinished(KMessageWidget* self) {
    self->showAnimationFinished();
}

void KMessageWidget_Connect_ShowAnimationFinished(KMessageWidget* self, intptr_t slot) {
    void (*slotFunc)(KMessageWidget*) = reinterpret_cast<void (*)(KMessageWidget*)>(slot);
    KMessageWidget::connect(self, &KMessageWidget::showAnimationFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KMessageWidget_PaintEvent(KMessageWidget* self, QPaintEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->paintEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMessageWidget_OnPaintEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_PaintEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KMessageWidget_QBasePaintEvent(KMessageWidget* self, QPaintEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_PaintEvent_IsBase(true);
        vkmessagewidget->paintEvent(event);
    }
}

bool KMessageWidget_Event(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->event(event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KMessageWidget_OnEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Event_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KMessageWidget_QBaseEvent(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Event_IsBase(true);
        return vkmessagewidget->event(event);
    }
    return {};
}

void KMessageWidget_ResizeEvent(KMessageWidget* self, QResizeEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->resizeEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KMessageWidget_OnResizeEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KMessageWidget_QBaseResizeEvent(KMessageWidget* self, QResizeEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ResizeEvent_IsBase(true);
        vkmessagewidget->resizeEvent(event);
    }
}

libqt_string KMessageWidget_Tr2(const char* s, const char* c) {
    QString _ret = KMessageWidget::tr(s, c);
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
    QString _ret = KMessageWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void KMessageWidget_ChangeEvent(KMessageWidget* self, QEvent* param1) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->changeEvent(param1);
    } else {
        ((VirtualKMessageWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseChangeEvent(KMessageWidget* self, QEvent* param1) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ChangeEvent_IsBase(true);
        vkmessagewidget->changeEvent(param1);
    } else {
        ((VirtualKMessageWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnChangeEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_InitStyleOption(const KMessageWidget* self, QStyleOptionFrame* option) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->initStyleOption(option);
    } else {
        ((VirtualKMessageWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseInitStyleOption(const KMessageWidget* self, QStyleOptionFrame* option) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_InitStyleOption_IsBase(true);
        vkmessagewidget->initStyleOption(option);
    } else {
        ((VirtualKMessageWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnInitStyleOption(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_InitStyleOption_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageWidget_DevType(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->devType();
    } else {
        return self->KMessageWidget::devType();
    }
}

// Base class handler implementation
int KMessageWidget_QBaseDevType(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DevType_IsBase(true);
        return vkmessagewidget->devType();
    } else {
        return self->KMessageWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDevType(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DevType_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_SetVisible(KMessageWidget* self, bool visible) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setVisible(visible);
    } else {
        self->KMessageWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseSetVisible(KMessageWidget* self, bool visible) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_SetVisible_IsBase(true);
        vkmessagewidget->setVisible(visible);
    } else {
        self->KMessageWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnSetVisible(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_SetVisible_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageWidget_HasHeightForWidth(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->hasHeightForWidth();
    } else {
        return self->KMessageWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KMessageWidget_QBaseHasHeightForWidth(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_HasHeightForWidth_IsBase(true);
        return vkmessagewidget->hasHeightForWidth();
    } else {
        return self->KMessageWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnHasHeightForWidth(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KMessageWidget_PaintEngine(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->paintEngine();
    } else {
        return self->KMessageWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KMessageWidget_QBasePaintEngine(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_PaintEngine_IsBase(true);
        return vkmessagewidget->paintEngine();
    } else {
        return self->KMessageWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnPaintEngine(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_PaintEngine_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_MousePressEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->mousePressEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseMousePressEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MousePressEvent_IsBase(true);
        vkmessagewidget->mousePressEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMousePressEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_MouseReleaseEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseMouseReleaseEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MouseReleaseEvent_IsBase(true);
        vkmessagewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMouseReleaseEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_MouseDoubleClickEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseMouseDoubleClickEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MouseDoubleClickEvent_IsBase(true);
        vkmessagewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMouseDoubleClickEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_MouseMoveEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseMouseMoveEvent(KMessageWidget* self, QMouseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MouseMoveEvent_IsBase(true);
        vkmessagewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMouseMoveEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_WheelEvent(KMessageWidget* self, QWheelEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->wheelEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseWheelEvent(KMessageWidget* self, QWheelEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_WheelEvent_IsBase(true);
        vkmessagewidget->wheelEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnWheelEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_WheelEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_KeyPressEvent(KMessageWidget* self, QKeyEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->keyPressEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseKeyPressEvent(KMessageWidget* self, QKeyEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_KeyPressEvent_IsBase(true);
        vkmessagewidget->keyPressEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnKeyPressEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_KeyReleaseEvent(KMessageWidget* self, QKeyEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseKeyReleaseEvent(KMessageWidget* self, QKeyEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_KeyReleaseEvent_IsBase(true);
        vkmessagewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnKeyReleaseEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_FocusInEvent(KMessageWidget* self, QFocusEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->focusInEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseFocusInEvent(KMessageWidget* self, QFocusEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusInEvent_IsBase(true);
        vkmessagewidget->focusInEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnFocusInEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_FocusOutEvent(KMessageWidget* self, QFocusEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->focusOutEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseFocusOutEvent(KMessageWidget* self, QFocusEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusOutEvent_IsBase(true);
        vkmessagewidget->focusOutEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnFocusOutEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_EnterEvent(KMessageWidget* self, QEnterEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->enterEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseEnterEvent(KMessageWidget* self, QEnterEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_EnterEvent_IsBase(true);
        vkmessagewidget->enterEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnEnterEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_EnterEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_LeaveEvent(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->leaveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseLeaveEvent(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_LeaveEvent_IsBase(true);
        vkmessagewidget->leaveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnLeaveEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_MoveEvent(KMessageWidget* self, QMoveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->moveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseMoveEvent(KMessageWidget* self, QMoveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MoveEvent_IsBase(true);
        vkmessagewidget->moveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMoveEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_MoveEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_CloseEvent(KMessageWidget* self, QCloseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->closeEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseCloseEvent(KMessageWidget* self, QCloseEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_CloseEvent_IsBase(true);
        vkmessagewidget->closeEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnCloseEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_CloseEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_ContextMenuEvent(KMessageWidget* self, QContextMenuEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->contextMenuEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseContextMenuEvent(KMessageWidget* self, QContextMenuEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ContextMenuEvent_IsBase(true);
        vkmessagewidget->contextMenuEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnContextMenuEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_TabletEvent(KMessageWidget* self, QTabletEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->tabletEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseTabletEvent(KMessageWidget* self, QTabletEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_TabletEvent_IsBase(true);
        vkmessagewidget->tabletEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnTabletEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_TabletEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_ActionEvent(KMessageWidget* self, QActionEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->actionEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseActionEvent(KMessageWidget* self, QActionEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ActionEvent_IsBase(true);
        vkmessagewidget->actionEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnActionEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ActionEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_DragEnterEvent(KMessageWidget* self, QDragEnterEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->dragEnterEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseDragEnterEvent(KMessageWidget* self, QDragEnterEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DragEnterEvent_IsBase(true);
        vkmessagewidget->dragEnterEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDragEnterEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_DragMoveEvent(KMessageWidget* self, QDragMoveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->dragMoveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseDragMoveEvent(KMessageWidget* self, QDragMoveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DragMoveEvent_IsBase(true);
        vkmessagewidget->dragMoveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDragMoveEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_DragLeaveEvent(KMessageWidget* self, QDragLeaveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseDragLeaveEvent(KMessageWidget* self, QDragLeaveEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DragLeaveEvent_IsBase(true);
        vkmessagewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDragLeaveEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_DropEvent(KMessageWidget* self, QDropEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->dropEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseDropEvent(KMessageWidget* self, QDropEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DropEvent_IsBase(true);
        vkmessagewidget->dropEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDropEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DropEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_ShowEvent(KMessageWidget* self, QShowEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->showEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseShowEvent(KMessageWidget* self, QShowEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ShowEvent_IsBase(true);
        vkmessagewidget->showEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnShowEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ShowEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_HideEvent(KMessageWidget* self, QHideEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->hideEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseHideEvent(KMessageWidget* self, QHideEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_HideEvent_IsBase(true);
        vkmessagewidget->hideEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnHideEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_HideEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageWidget_NativeEvent(KMessageWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMessageWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KMessageWidget_QBaseNativeEvent(KMessageWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_NativeEvent_IsBase(true);
        return vkmessagewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKMessageWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnNativeEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_NativeEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageWidget_Metric(const KMessageWidget* self, int param1) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMessageWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KMessageWidget_QBaseMetric(const KMessageWidget* self, int param1) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Metric_IsBase(true);
        return vkmessagewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKMessageWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnMetric(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Metric_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_InitPainter(const KMessageWidget* self, QPainter* painter) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->initPainter(painter);
    } else {
        ((VirtualKMessageWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseInitPainter(const KMessageWidget* self, QPainter* painter) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_InitPainter_IsBase(true);
        vkmessagewidget->initPainter(painter);
    } else {
        ((VirtualKMessageWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnInitPainter(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_InitPainter_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KMessageWidget_Redirected(const KMessageWidget* self, QPoint* offset) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->redirected(offset);
    } else {
        return ((VirtualKMessageWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KMessageWidget_QBaseRedirected(const KMessageWidget* self, QPoint* offset) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Redirected_IsBase(true);
        return vkmessagewidget->redirected(offset);
    } else {
        return ((VirtualKMessageWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnRedirected(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Redirected_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KMessageWidget_SharedPainter(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->sharedPainter();
    } else {
        return ((VirtualKMessageWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KMessageWidget_QBaseSharedPainter(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_SharedPainter_IsBase(true);
        return vkmessagewidget->sharedPainter();
    } else {
        return ((VirtualKMessageWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnSharedPainter(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_SharedPainter_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_InputMethodEvent(KMessageWidget* self, QInputMethodEvent* param1) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKMessageWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseInputMethodEvent(KMessageWidget* self, QInputMethodEvent* param1) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_InputMethodEvent_IsBase(true);
        vkmessagewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKMessageWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnInputMethodEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KMessageWidget_InputMethodQuery(const KMessageWidget* self, int param1) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return new QVariant(vkmessagewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMessageWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KMessageWidget_QBaseInputMethodQuery(const KMessageWidget* self, int param1) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkmessagewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKMessageWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnInputMethodQuery(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageWidget_FocusNextPrevChild(KMessageWidget* self, bool next) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKMessageWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KMessageWidget_QBaseFocusNextPrevChild(KMessageWidget* self, bool next) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusNextPrevChild_IsBase(true);
        return vkmessagewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKMessageWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnFocusNextPrevChild(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageWidget_EventFilter(KMessageWidget* self, QObject* watched, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->eventFilter(watched, event);
    } else {
        return self->KMessageWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KMessageWidget_QBaseEventFilter(KMessageWidget* self, QObject* watched, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_EventFilter_IsBase(true);
        return vkmessagewidget->eventFilter(watched, event);
    } else {
        return self->KMessageWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnEventFilter(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_EventFilter_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_TimerEvent(KMessageWidget* self, QTimerEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->timerEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseTimerEvent(KMessageWidget* self, QTimerEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_TimerEvent_IsBase(true);
        vkmessagewidget->timerEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnTimerEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_TimerEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_ChildEvent(KMessageWidget* self, QChildEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->childEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseChildEvent(KMessageWidget* self, QChildEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ChildEvent_IsBase(true);
        vkmessagewidget->childEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnChildEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ChildEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_CustomEvent(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->customEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseCustomEvent(KMessageWidget* self, QEvent* event) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_CustomEvent_IsBase(true);
        vkmessagewidget->customEvent(event);
    } else {
        ((VirtualKMessageWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnCustomEvent(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_CustomEvent_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_ConnectNotify(KMessageWidget* self, const QMetaMethod* signal) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->connectNotify(*signal);
    } else {
        ((VirtualKMessageWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseConnectNotify(KMessageWidget* self, const QMetaMethod* signal) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ConnectNotify_IsBase(true);
        vkmessagewidget->connectNotify(*signal);
    } else {
        ((VirtualKMessageWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnConnectNotify(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_DisconnectNotify(KMessageWidget* self, const QMetaMethod* signal) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKMessageWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseDisconnectNotify(KMessageWidget* self, const QMetaMethod* signal) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DisconnectNotify_IsBase(true);
        vkmessagewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKMessageWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDisconnectNotify(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_DrawFrame(KMessageWidget* self, QPainter* param1) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->drawFrame(param1);
    } else {
        ((VirtualKMessageWidget*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KMessageWidget_QBaseDrawFrame(KMessageWidget* self, QPainter* param1) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DrawFrame_IsBase(true);
        vkmessagewidget->drawFrame(param1);
    } else {
        ((VirtualKMessageWidget*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDrawFrame(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_DrawFrame_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_UpdateMicroFocus(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->updateMicroFocus();
    } else {
        ((VirtualKMessageWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KMessageWidget_QBaseUpdateMicroFocus(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_UpdateMicroFocus_IsBase(true);
        vkmessagewidget->updateMicroFocus();
    } else {
        ((VirtualKMessageWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnUpdateMicroFocus(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_Create(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->create();
    } else {
        ((VirtualKMessageWidget*)self)->create();
    }
}

// Base class handler implementation
void KMessageWidget_QBaseCreate(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Create_IsBase(true);
        vkmessagewidget->create();
    } else {
        ((VirtualKMessageWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnCreate(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Create_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KMessageWidget_Destroy(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->destroy();
    } else {
        ((VirtualKMessageWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KMessageWidget_QBaseDestroy(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Destroy_IsBase(true);
        vkmessagewidget->destroy();
    } else {
        ((VirtualKMessageWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnDestroy(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Destroy_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageWidget_FocusNextChild(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->focusNextChild();
    } else {
        return ((VirtualKMessageWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KMessageWidget_QBaseFocusNextChild(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusNextChild_IsBase(true);
        return vkmessagewidget->focusNextChild();
    } else {
        return ((VirtualKMessageWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnFocusNextChild(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageWidget_FocusPreviousChild(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->focusPreviousChild();
    } else {
        return ((VirtualKMessageWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KMessageWidget_QBaseFocusPreviousChild(KMessageWidget* self) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusPreviousChild_IsBase(true);
        return vkmessagewidget->focusPreviousChild();
    } else {
        return ((VirtualKMessageWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnFocusPreviousChild(KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = dynamic_cast<VirtualKMessageWidget*>(self);
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KMessageWidget_Sender(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->sender();
    } else {
        return ((VirtualKMessageWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KMessageWidget_QBaseSender(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Sender_IsBase(true);
        return vkmessagewidget->sender();
    } else {
        return ((VirtualKMessageWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnSender(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Sender_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageWidget_SenderSignalIndex(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->senderSignalIndex();
    } else {
        return ((VirtualKMessageWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KMessageWidget_QBaseSenderSignalIndex(const KMessageWidget* self) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_SenderSignalIndex_IsBase(true);
        return vkmessagewidget->senderSignalIndex();
    } else {
        return ((VirtualKMessageWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnSenderSignalIndex(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KMessageWidget_Receivers(const KMessageWidget* self, const char* signal) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->receivers(signal);
    } else {
        return ((VirtualKMessageWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KMessageWidget_QBaseReceivers(const KMessageWidget* self, const char* signal) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Receivers_IsBase(true);
        return vkmessagewidget->receivers(signal);
    } else {
        return ((VirtualKMessageWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnReceivers(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_Receivers_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KMessageWidget_IsSignalConnected(const KMessageWidget* self, const QMetaMethod* signal) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKMessageWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KMessageWidget_QBaseIsSignalConnected(const KMessageWidget* self, const QMetaMethod* signal) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_IsSignalConnected_IsBase(true);
        return vkmessagewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKMessageWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnIsSignalConnected(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KMessageWidget_GetDecodedMetricF(const KMessageWidget* self, int metricA, int metricB) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        return vkmessagewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMessageWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KMessageWidget_QBaseGetDecodedMetricF(const KMessageWidget* self, int metricA, int metricB) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_GetDecodedMetricF_IsBase(true);
        return vkmessagewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKMessageWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KMessageWidget_OnGetDecodedMetricF(const KMessageWidget* self, intptr_t slot) {
    auto* vkmessagewidget = const_cast<VirtualKMessageWidget*>(dynamic_cast<const VirtualKMessageWidget*>(self));
    if (vkmessagewidget && vkmessagewidget->isVirtualKMessageWidget) {
        vkmessagewidget->setKMessageWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKMessageWidget::KMessageWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KMessageWidget_Delete(KMessageWidget* self) {
    delete self;
}
