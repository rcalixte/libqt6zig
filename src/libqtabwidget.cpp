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
#include <QStyleOptionTabWidgetFrame>
#include <QTabBar>
#include <QTabWidget>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtabwidget.h>
#include "libqtabwidget.h"
#include "libqtabwidget.hxx"

QTabWidget* QTabWidget_new(QWidget* parent) {
    return new VirtualQTabWidget(parent);
}

QTabWidget* QTabWidget_new2() {
    return new VirtualQTabWidget();
}

QMetaObject* QTabWidget_MetaObject(const QTabWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTabWidget_Metacast(QTabWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTabWidget_Metacall(QTabWidget* self, int param1, int param2, void** param3) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTabWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnMetacall(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Metacall_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTabWidget_QBaseMetacall(QTabWidget* self, int param1, int param2, void** param3) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Metacall_IsBase(true);
        return vqtabwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTabWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTabWidget_Tr(const char* s) {
    QString _ret = QTabWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, const libqt_string param2) {
    QString param2_QString = QString::fromUtf8(param2.data, param2.len);
    return self->addTab(widget, param2_QString);
}

int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, const QIcon* icon, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->addTab(widget, *icon, label_QString);
}

int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, const libqt_string param3) {
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return self->insertTab(static_cast<int>(index), widget, param3_QString);
}

int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, const QIcon* icon, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return self->insertTab(static_cast<int>(index), widget, *icon, label_QString);
}

void QTabWidget_RemoveTab(QTabWidget* self, int index) {
    self->removeTab(static_cast<int>(index));
}

bool QTabWidget_IsTabEnabled(const QTabWidget* self, int index) {
    return self->isTabEnabled(static_cast<int>(index));
}

void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled) {
    self->setTabEnabled(static_cast<int>(index), enabled);
}

bool QTabWidget_IsTabVisible(const QTabWidget* self, int index) {
    return self->isTabVisible(static_cast<int>(index));
}

void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible) {
    self->setTabVisible(static_cast<int>(index), visible);
}

libqt_string QTabWidget_TabText(const QTabWidget* self, int index) {
    QString _ret = self->tabText(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTabWidget_SetTabText(QTabWidget* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTabText(static_cast<int>(index), text_QString);
}

QIcon* QTabWidget_TabIcon(const QTabWidget* self, int index) {
    return new QIcon(self->tabIcon(static_cast<int>(index)));
}

void QTabWidget_SetTabIcon(QTabWidget* self, int index, const QIcon* icon) {
    self->setTabIcon(static_cast<int>(index), *icon);
}

void QTabWidget_SetTabToolTip(QTabWidget* self, int index, const libqt_string tip) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    self->setTabToolTip(static_cast<int>(index), tip_QString);
}

libqt_string QTabWidget_TabToolTip(const QTabWidget* self, int index) {
    QString _ret = self->tabToolTip(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTabWhatsThis(static_cast<int>(index), text_QString);
}

libqt_string QTabWidget_TabWhatsThis(const QTabWidget* self, int index) {
    QString _ret = self->tabWhatsThis(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTabWidget_CurrentIndex(const QTabWidget* self) {
    return self->currentIndex();
}

QWidget* QTabWidget_CurrentWidget(const QTabWidget* self) {
    return self->currentWidget();
}

QWidget* QTabWidget_Widget(const QTabWidget* self, int index) {
    return self->widget(static_cast<int>(index));
}

int QTabWidget_IndexOf(const QTabWidget* self, const QWidget* widget) {
    return self->indexOf(widget);
}

int QTabWidget_Count(const QTabWidget* self) {
    return self->count();
}

int QTabWidget_TabPosition(const QTabWidget* self) {
    return static_cast<int>(self->tabPosition());
}

void QTabWidget_SetTabPosition(QTabWidget* self, int position) {
    self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

bool QTabWidget_TabsClosable(const QTabWidget* self) {
    return self->tabsClosable();
}

void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable) {
    self->setTabsClosable(closeable);
}

bool QTabWidget_IsMovable(const QTabWidget* self) {
    return self->isMovable();
}

void QTabWidget_SetMovable(QTabWidget* self, bool movable) {
    self->setMovable(movable);
}

int QTabWidget_TabShape(const QTabWidget* self) {
    return static_cast<int>(self->tabShape());
}

void QTabWidget_SetTabShape(QTabWidget* self, int s) {
    self->setTabShape(static_cast<QTabWidget::TabShape>(s));
}

QSize* QTabWidget_SizeHint(const QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQTabWidget*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnSizeHint(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SizeHint_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QTabWidget_QBaseSizeHint(const QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SizeHint_IsBase(true);
        return new QSize(vqtabwidget->sizeHint());
    } else {
        return new QSize(((VirtualQTabWidget*)self)->sizeHint());
    }
}

QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTabWidget*)self)->minimumSizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnMinimumSizeHint(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QTabWidget_QBaseMinimumSizeHint(const QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqtabwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTabWidget*)self)->minimumSizeHint());
    }
}

int QTabWidget_HeightForWidth(const QTabWidget* self, int width) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return self->heightForWidth(static_cast<int>(width));
    } else {
        return ((VirtualQTabWidget*)self)->heightForWidth(static_cast<int>(width));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnHeightForWidth(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_HeightForWidth_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTabWidget_QBaseHeightForWidth(const QTabWidget* self, int width) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_HeightForWidth_IsBase(true);
        return vqtabwidget->heightForWidth(static_cast<int>(width));
    } else {
        return ((VirtualQTabWidget*)self)->heightForWidth(static_cast<int>(width));
    }
}

bool QTabWidget_HasHeightForWidth(const QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return self->hasHeightForWidth();
    } else {
        return ((VirtualQTabWidget*)self)->hasHeightForWidth();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnHasHeightForWidth(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTabWidget_QBaseHasHeightForWidth(const QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_HasHeightForWidth_IsBase(true);
        return vqtabwidget->hasHeightForWidth();
    } else {
        return ((VirtualQTabWidget*)self)->hasHeightForWidth();
    }
}

void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w) {
    self->setCornerWidget(w);
}

QWidget* QTabWidget_CornerWidget(const QTabWidget* self) {
    return self->cornerWidget();
}

int QTabWidget_ElideMode(const QTabWidget* self) {
    return static_cast<int>(self->elideMode());
}

void QTabWidget_SetElideMode(QTabWidget* self, int mode) {
    self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

QSize* QTabWidget_IconSize(const QTabWidget* self) {
    return new QSize(self->iconSize());
}

void QTabWidget_SetIconSize(QTabWidget* self, const QSize* size) {
    self->setIconSize(*size);
}

bool QTabWidget_UsesScrollButtons(const QTabWidget* self) {
    return self->usesScrollButtons();
}

void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons) {
    self->setUsesScrollButtons(useButtons);
}

bool QTabWidget_DocumentMode(const QTabWidget* self) {
    return self->documentMode();
}

void QTabWidget_SetDocumentMode(QTabWidget* self, bool set) {
    self->setDocumentMode(set);
}

bool QTabWidget_TabBarAutoHide(const QTabWidget* self) {
    return self->tabBarAutoHide();
}

void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled) {
    self->setTabBarAutoHide(enabled);
}

void QTabWidget_Clear(QTabWidget* self) {
    self->clear();
}

QTabBar* QTabWidget_TabBar(const QTabWidget* self) {
    return self->tabBar();
}

void QTabWidget_SetCurrentIndex(QTabWidget* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget) {
    self->setCurrentWidget(widget);
}

void QTabWidget_CurrentChanged(QTabWidget* self, int index) {
    self->currentChanged(static_cast<int>(index));
}

void QTabWidget_Connect_CurrentChanged(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::currentChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabWidget_TabCloseRequested(QTabWidget* self, int index) {
    self->tabCloseRequested(static_cast<int>(index));
}

void QTabWidget_Connect_TabCloseRequested(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabCloseRequested, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabWidget_TabBarClicked(QTabWidget* self, int index) {
    self->tabBarClicked(static_cast<int>(index));
}

void QTabWidget_Connect_TabBarClicked(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabBarClicked, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index) {
    self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabWidget_Connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self, &QTabWidget::tabBarDoubleClicked, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QTabWidget_TabInserted(QTabWidget* self, int index) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->tabInserted(static_cast<int>(index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnTabInserted(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_TabInserted_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TabInserted_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabWidget_QBaseTabInserted(QTabWidget* self, int index) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_TabInserted_IsBase(true);
        vqtabwidget->tabInserted(static_cast<int>(index));
    }
}

void QTabWidget_TabRemoved(QTabWidget* self, int index) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->tabRemoved(static_cast<int>(index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnTabRemoved(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_TabRemoved_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TabRemoved_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabWidget_QBaseTabRemoved(QTabWidget* self, int index) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_TabRemoved_IsBase(true);
        vqtabwidget->tabRemoved(static_cast<int>(index));
    }
}

void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->showEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnShowEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ShowEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ShowEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabWidget_QBaseShowEvent(QTabWidget* self, QShowEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ShowEvent_IsBase(true);
        vqtabwidget->showEvent(param1);
    }
}

void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->resizeEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnResizeEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabWidget_QBaseResizeEvent(QTabWidget* self, QResizeEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ResizeEvent_IsBase(true);
        vqtabwidget->resizeEvent(param1);
    }
}

void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->keyPressEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnKeyPressEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_KeyPressEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabWidget_QBaseKeyPressEvent(QTabWidget* self, QKeyEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_KeyPressEvent_IsBase(true);
        vqtabwidget->keyPressEvent(param1);
    }
}

void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->paintEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnPaintEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_PaintEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_PaintEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabWidget_QBasePaintEvent(QTabWidget* self, QPaintEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_PaintEvent_IsBase(true);
        vqtabwidget->paintEvent(param1);
    }
}

void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->changeEvent(param1);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnChangeEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ChangeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabWidget_QBaseChangeEvent(QTabWidget* self, QEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ChangeEvent_IsBase(true);
        vqtabwidget->changeEvent(param1);
    }
}

bool QTabWidget_Event(QTabWidget* self, QEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->event(param1);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Event_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QTabWidget_QBaseEvent(QTabWidget* self, QEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Event_IsBase(true);
        return vqtabwidget->event(param1);
    }
    return {};
}

void QTabWidget_InitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->initStyleOption(option);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTabWidget_OnInitStyleOption(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InitStyleOption_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QTabWidget_QBaseInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_InitStyleOption_IsBase(true);
        vqtabwidget->initStyleOption(option);
    }
}

libqt_string QTabWidget_Tr2(const char* s, const char* c) {
    QString _ret = QTabWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTabWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTabWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, int corner) {
    self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QTabWidget_CornerWidget1(const QTabWidget* self, int corner) {
    return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

// Derived class handler implementation
int QTabWidget_DevType(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->devType();
    } else {
        return self->QTabWidget::devType();
    }
}

// Base class handler implementation
int QTabWidget_QBaseDevType(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DevType_IsBase(true);
        return vqtabwidget->devType();
    } else {
        return self->QTabWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDevType(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DevType_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_SetVisible(QTabWidget* self, bool visible) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setVisible(visible);
    } else {
        self->QTabWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QTabWidget_QBaseSetVisible(QTabWidget* self, bool visible) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SetVisible_IsBase(true);
        vqtabwidget->setVisible(visible);
    } else {
        self->QTabWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSetVisible(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SetVisible_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTabWidget_PaintEngine(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->paintEngine();
    } else {
        return self->QTabWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTabWidget_QBasePaintEngine(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_PaintEngine_IsBase(true);
        return vqtabwidget->paintEngine();
    } else {
        return self->QTabWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnPaintEngine(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_PaintEngine_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MousePressEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->mousePressEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMousePressEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MousePressEvent_IsBase(true);
        vqtabwidget->mousePressEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMousePressEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MouseReleaseEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMouseReleaseEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MouseReleaseEvent_IsBase(true);
        vqtabwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseReleaseEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MouseDoubleClickEvent_IsBase(true);
        vqtabwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseDoubleClickEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MouseMoveEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMouseMoveEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MouseMoveEvent_IsBase(true);
        vqtabwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseMoveEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_WheelEvent(QTabWidget* self, QWheelEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->wheelEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseWheelEvent(QTabWidget* self, QWheelEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_WheelEvent_IsBase(true);
        vqtabwidget->wheelEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnWheelEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_WheelEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_KeyReleaseEvent(QTabWidget* self, QKeyEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseKeyReleaseEvent(QTabWidget* self, QKeyEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_KeyReleaseEvent_IsBase(true);
        vqtabwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnKeyReleaseEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_FocusInEvent(QTabWidget* self, QFocusEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->focusInEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseFocusInEvent(QTabWidget* self, QFocusEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusInEvent_IsBase(true);
        vqtabwidget->focusInEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusInEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_FocusOutEvent(QTabWidget* self, QFocusEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->focusOutEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseFocusOutEvent(QTabWidget* self, QFocusEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusOutEvent_IsBase(true);
        vqtabwidget->focusOutEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusOutEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_EnterEvent(QTabWidget* self, QEnterEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->enterEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseEnterEvent(QTabWidget* self, QEnterEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_EnterEvent_IsBase(true);
        vqtabwidget->enterEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEnterEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_EnterEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_LeaveEvent(QTabWidget* self, QEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->leaveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseLeaveEvent(QTabWidget* self, QEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_LeaveEvent_IsBase(true);
        vqtabwidget->leaveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnLeaveEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_MoveEvent(QTabWidget* self, QMoveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->moveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseMoveEvent(QTabWidget* self, QMoveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MoveEvent_IsBase(true);
        vqtabwidget->moveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMoveEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_MoveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_CloseEvent(QTabWidget* self, QCloseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->closeEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseCloseEvent(QTabWidget* self, QCloseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_CloseEvent_IsBase(true);
        vqtabwidget->closeEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnCloseEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_CloseEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ContextMenuEvent(QTabWidget* self, QContextMenuEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->contextMenuEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseContextMenuEvent(QTabWidget* self, QContextMenuEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ContextMenuEvent_IsBase(true);
        vqtabwidget->contextMenuEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnContextMenuEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_TabletEvent(QTabWidget* self, QTabletEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->tabletEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseTabletEvent(QTabWidget* self, QTabletEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_TabletEvent_IsBase(true);
        vqtabwidget->tabletEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabletEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_TabletEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ActionEvent(QTabWidget* self, QActionEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->actionEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseActionEvent(QTabWidget* self, QActionEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ActionEvent_IsBase(true);
        vqtabwidget->actionEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnActionEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ActionEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DragEnterEvent(QTabWidget* self, QDragEnterEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->dragEnterEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDragEnterEvent(QTabWidget* self, QDragEnterEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DragEnterEvent_IsBase(true);
        vqtabwidget->dragEnterEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragEnterEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DragMoveEvent(QTabWidget* self, QDragMoveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->dragMoveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDragMoveEvent(QTabWidget* self, QDragMoveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DragMoveEvent_IsBase(true);
        vqtabwidget->dragMoveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragMoveEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DragLeaveEvent_IsBase(true);
        vqtabwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragLeaveEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DropEvent(QTabWidget* self, QDropEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->dropEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDropEvent(QTabWidget* self, QDropEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DropEvent_IsBase(true);
        vqtabwidget->dropEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDropEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DropEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_HideEvent(QTabWidget* self, QHideEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->hideEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseHideEvent(QTabWidget* self, QHideEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_HideEvent_IsBase(true);
        vqtabwidget->hideEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHideEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_HideEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_NativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTabWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTabWidget_QBaseNativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_NativeEvent_IsBase(true);
        return vqtabwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTabWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnNativeEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_NativeEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabWidget_Metric(const QTabWidget* self, int param1) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTabWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTabWidget_QBaseMetric(const QTabWidget* self, int param1) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Metric_IsBase(true);
        return vqtabwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTabWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMetric(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Metric_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_InitPainter(const QTabWidget* self, QPainter* painter) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->initPainter(painter);
    } else {
        ((VirtualQTabWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QTabWidget_QBaseInitPainter(const QTabWidget* self, QPainter* painter) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_InitPainter_IsBase(true);
        vqtabwidget->initPainter(painter);
    } else {
        ((VirtualQTabWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInitPainter(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_InitPainter_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTabWidget_Redirected(const QTabWidget* self, QPoint* offset) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->redirected(offset);
    } else {
        return ((VirtualQTabWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTabWidget_QBaseRedirected(const QTabWidget* self, QPoint* offset) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Redirected_IsBase(true);
        return vqtabwidget->redirected(offset);
    } else {
        return ((VirtualQTabWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnRedirected(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Redirected_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTabWidget_SharedPainter(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->sharedPainter();
    } else {
        return ((VirtualQTabWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTabWidget_QBaseSharedPainter(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SharedPainter_IsBase(true);
        return vqtabwidget->sharedPainter();
    } else {
        return ((VirtualQTabWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSharedPainter(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SharedPainter_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_InputMethodEvent(QTabWidget* self, QInputMethodEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQTabWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTabWidget_QBaseInputMethodEvent(QTabWidget* self, QInputMethodEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_InputMethodEvent_IsBase(true);
        vqtabwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQTabWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInputMethodEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTabWidget_InputMethodQuery(const QTabWidget* self, int param1) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return new QVariant(vqtabwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQTabWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QTabWidget_QBaseInputMethodQuery(const QTabWidget* self, int param1) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqtabwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQTabWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInputMethodQuery(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_FocusNextPrevChild(QTabWidget* self, bool next) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQTabWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTabWidget_QBaseFocusNextPrevChild(QTabWidget* self, bool next) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusNextPrevChild_IsBase(true);
        return vqtabwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQTabWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusNextPrevChild(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_EventFilter(QTabWidget* self, QObject* watched, QEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->eventFilter(watched, event);
    } else {
        return self->QTabWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTabWidget_QBaseEventFilter(QTabWidget* self, QObject* watched, QEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_EventFilter_IsBase(true);
        return vqtabwidget->eventFilter(watched, event);
    } else {
        return self->QTabWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEventFilter(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_EventFilter_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_TimerEvent(QTabWidget* self, QTimerEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->timerEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseTimerEvent(QTabWidget* self, QTimerEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_TimerEvent_IsBase(true);
        vqtabwidget->timerEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTimerEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_TimerEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ChildEvent(QTabWidget* self, QChildEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->childEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseChildEvent(QTabWidget* self, QChildEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ChildEvent_IsBase(true);
        vqtabwidget->childEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnChildEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ChildEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_CustomEvent(QTabWidget* self, QEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->customEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTabWidget_QBaseCustomEvent(QTabWidget* self, QEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_CustomEvent_IsBase(true);
        vqtabwidget->customEvent(event);
    } else {
        ((VirtualQTabWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnCustomEvent(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_CustomEvent_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_ConnectNotify(QTabWidget* self, const QMetaMethod* signal) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->connectNotify(*signal);
    } else {
        ((VirtualQTabWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTabWidget_QBaseConnectNotify(QTabWidget* self, const QMetaMethod* signal) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ConnectNotify_IsBase(true);
        vqtabwidget->connectNotify(*signal);
    } else {
        ((VirtualQTabWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnConnectNotify(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_DisconnectNotify(QTabWidget* self, const QMetaMethod* signal) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQTabWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTabWidget_QBaseDisconnectNotify(QTabWidget* self, const QMetaMethod* signal) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DisconnectNotify_IsBase(true);
        vqtabwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQTabWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDisconnectNotify(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_SetTabBar(QTabWidget* self, QTabBar* tabBar) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setTabBar(tabBar);
    } else {
        ((VirtualQTabWidget*)self)->setTabBar(tabBar);
    }
}

// Base class handler implementation
void QTabWidget_QBaseSetTabBar(QTabWidget* self, QTabBar* tabBar) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SetTabBar_IsBase(true);
        vqtabwidget->setTabBar(tabBar);
    } else {
        ((VirtualQTabWidget*)self)->setTabBar(tabBar);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSetTabBar(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SetTabBar_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SetTabBar_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_UpdateMicroFocus(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->updateMicroFocus();
    } else {
        ((VirtualQTabWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QTabWidget_QBaseUpdateMicroFocus(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_UpdateMicroFocus_IsBase(true);
        vqtabwidget->updateMicroFocus();
    } else {
        ((VirtualQTabWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnUpdateMicroFocus(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_Create(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->create();
    } else {
        ((VirtualQTabWidget*)self)->create();
    }
}

// Base class handler implementation
void QTabWidget_QBaseCreate(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Create_IsBase(true);
        vqtabwidget->create();
    } else {
        ((VirtualQTabWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnCreate(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Create_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTabWidget_Destroy(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->destroy();
    } else {
        ((VirtualQTabWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QTabWidget_QBaseDestroy(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Destroy_IsBase(true);
        vqtabwidget->destroy();
    } else {
        ((VirtualQTabWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDestroy(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Destroy_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_FocusNextChild(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->focusNextChild();
    } else {
        return ((VirtualQTabWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QTabWidget_QBaseFocusNextChild(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusNextChild_IsBase(true);
        return vqtabwidget->focusNextChild();
    } else {
        return ((VirtualQTabWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusNextChild(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_FocusPreviousChild(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->focusPreviousChild();
    } else {
        return ((VirtualQTabWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTabWidget_QBaseFocusPreviousChild(QTabWidget* self) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusPreviousChild_IsBase(true);
        return vqtabwidget->focusPreviousChild();
    } else {
        return ((VirtualQTabWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusPreviousChild(QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTabWidget_Sender(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->sender();
    } else {
        return ((VirtualQTabWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTabWidget_QBaseSender(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Sender_IsBase(true);
        return vqtabwidget->sender();
    } else {
        return ((VirtualQTabWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSender(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Sender_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabWidget_SenderSignalIndex(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->senderSignalIndex();
    } else {
        return ((VirtualQTabWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTabWidget_QBaseSenderSignalIndex(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SenderSignalIndex_IsBase(true);
        return vqtabwidget->senderSignalIndex();
    } else {
        return ((VirtualQTabWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSenderSignalIndex(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTabWidget_Receivers(const QTabWidget* self, const char* signal) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->receivers(signal);
    } else {
        return ((VirtualQTabWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTabWidget_QBaseReceivers(const QTabWidget* self, const char* signal) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Receivers_IsBase(true);
        return vqtabwidget->receivers(signal);
    } else {
        return ((VirtualQTabWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnReceivers(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_Receivers_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTabWidget_IsSignalConnected(const QTabWidget* self, const QMetaMethod* signal) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQTabWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTabWidget_QBaseIsSignalConnected(const QTabWidget* self, const QMetaMethod* signal) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_IsSignalConnected_IsBase(true);
        return vqtabwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQTabWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnIsSignalConnected(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QTabWidget_GetDecodedMetricF(const QTabWidget* self, int metricA, int metricB) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        return vqtabwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTabWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QTabWidget_QBaseGetDecodedMetricF(const QTabWidget* self, int metricA, int metricB) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_GetDecodedMetricF_IsBase(true);
        return vqtabwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTabWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnGetDecodedMetricF(const QTabWidget* self, intptr_t slot) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget && vqtabwidget->isVirtualQTabWidget) {
        vqtabwidget->setQTabWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQTabWidget::QTabWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QTabWidget_Delete(QTabWidget* self) {
    delete self;
}
