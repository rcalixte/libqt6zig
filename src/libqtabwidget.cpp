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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTabWidget_Tr(const char* s) {
    auto _ret = QTabWidget::tr(s);
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
    auto _ret = self->tabText(static_cast<int>(index));
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
    auto _ret = self->tabToolTip(static_cast<int>(index));
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
    auto _ret = self->tabWhatsThis(static_cast<int>(index));
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
    return new QSize(self->sizeHint());
}

QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self) {
    return new QSize(self->minimumSizeHint());
}

int QTabWidget_HeightForWidth(const QTabWidget* self, int width) {
    return self->heightForWidth(static_cast<int>(width));
}

bool QTabWidget_HasHeightForWidth(const QTabWidget* self) {
    return self->hasHeightForWidth();
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
    QTabWidget::connect(self,
                        static_cast<void (QTabWidget::*)(int)>(&QTabWidget::currentChanged),
                        [self, slotFunc](int index) {
                            int sigval1 = index;
                            slotFunc(self, sigval1);
                        });
}

void QTabWidget_TabCloseRequested(QTabWidget* self, int index) {
    self->tabCloseRequested(static_cast<int>(index));
}

void QTabWidget_Connect_TabCloseRequested(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self,
                        static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabCloseRequested),
                        [self, slotFunc](int index) {
                            int sigval1 = index;
                            slotFunc(self, sigval1);
                        });
}

void QTabWidget_TabBarClicked(QTabWidget* self, int index) {
    self->tabBarClicked(static_cast<int>(index));
}

void QTabWidget_Connect_TabBarClicked(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self,
                        static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabBarClicked),
                        [self, slotFunc](int index) {
                            int sigval1 = index;
                            slotFunc(self, sigval1);
                        });
}

void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index) {
    self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabWidget_Connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot) {
    void (*slotFunc)(QTabWidget*, int) = reinterpret_cast<void (*)(QTabWidget*, int)>(slot);
    QTabWidget::connect(self,
                        static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabBarDoubleClicked),
                        [self, slotFunc](int index) {
                            int sigval1 = index;
                            slotFunc(self, sigval1);
                        });
}

void QTabWidget_TabInserted(QTabWidget* self, int index) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->tabInserted(static_cast<int>(index));
    }
}

void QTabWidget_TabRemoved(QTabWidget* self, int index) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->tabRemoved(static_cast<int>(index));
    }
}

void QTabWidget_ShowEvent(QTabWidget* self, QShowEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->showEvent(param1);
    }
}

void QTabWidget_ResizeEvent(QTabWidget* self, QResizeEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->resizeEvent(param1);
    }
}

void QTabWidget_KeyPressEvent(QTabWidget* self, QKeyEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->keyPressEvent(param1);
    }
}

void QTabWidget_PaintEvent(QTabWidget* self, QPaintEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->paintEvent(param1);
    }
}

void QTabWidget_ChangeEvent(QTabWidget* self, QEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->changeEvent(param1);
    }
}

bool QTabWidget_Event(QTabWidget* self, QEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        return vqtabwidget->event(param1);
    }
    qFatal("Error: Protected method QTabWidget::event called without a directly constructed type");
}

void QTabWidget_InitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option) {
    auto* vqtabwidget = dynamic_cast<const VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->initStyleOption(option);
    }
}

libqt_string QTabWidget_Tr2(const char* s, const char* c) {
    auto _ret = QTabWidget::tr(s, c);
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
    auto _ret = QTabWidget::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* QTabWidget_SuperMetaObject(const QTabWidget* self) {
    return (QMetaObject*)self->QTabWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMetaObject(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_metaobject_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTabWidget_SuperMetacast(QTabWidget* self, const char* param1) {
    return self->QTabWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMetacast(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_metacast_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTabWidget_SuperMetacall(QTabWidget* self, int param1, int param2, void** param3) {
    return self->QTabWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMetacall(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_metacall_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QTabWidget_SuperSizeHint(const QTabWidget* self) {
    return new QSize(self->QTabWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSizeHint(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_sizehint_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QTabWidget_SuperMinimumSizeHint(const QTabWidget* self) {
    return new QSize(self->QTabWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMinimumSizeHint(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_minimumsizehint_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
int QTabWidget_SuperHeightForWidth(const QTabWidget* self, int width) {
    return self->QTabWidget::heightForWidth(static_cast<int>(width));
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHeightForWidth(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_heightforwidth_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
bool QTabWidget_SuperHasHeightForWidth(const QTabWidget* self) {
    return self->QTabWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHasHeightForWidth(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_HasHeightForWidth_Callback>(slot);
}

// Base class handler implementation
void QTabWidget_SuperTabInserted(QTabWidget* self, int index) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::tabInserted(static_cast<int>(index));
    } else
        qFatal("Error: Protected virtual method QTabWidget::tabInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabInserted(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_tabinserted_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_TabInserted_Callback>(slot);
}

// Base class handler implementation
void QTabWidget_SuperTabRemoved(QTabWidget* self, int index) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::tabRemoved(static_cast<int>(index));
    } else
        qFatal("Error: Protected virtual method QTabWidget::tabRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabRemoved(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_tabremoved_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_TabRemoved_Callback>(slot);
}

// Base class handler implementation
void QTabWidget_SuperShowEvent(QTabWidget* self, QShowEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnShowEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_showevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QTabWidget_SuperResizeEvent(QTabWidget* self, QResizeEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnResizeEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_resizeevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QTabWidget_SuperKeyPressEvent(QTabWidget* self, QKeyEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnKeyPressEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_keypressevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QTabWidget_SuperPaintEvent(QTabWidget* self, QPaintEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnPaintEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_paintevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QTabWidget_SuperChangeEvent(QTabWidget* self, QEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnChangeEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_changeevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
bool QTabWidget_SuperEvent(QTabWidget* self, QEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->QTabWidget::event(param1);
    } else
        qFatal("Error: Protected virtual method QTabWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_event_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_Event_Callback>(slot);
}

// Base class handler implementation
void QTabWidget_SuperInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->QTabWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QTabWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInitStyleOption(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_initstyleoption_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QTabWidget_DevType(const QTabWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QTabWidget_SuperDevType(const QTabWidget* self) {
    return self->QTabWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDevType(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_devtype_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_SetVisible(QTabWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTabWidget_SuperSetVisible(QTabWidget* self, bool visible) {
    self->QTabWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSetVisible(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_setvisible_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTabWidget_PaintEngine(const QTabWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTabWidget_SuperPaintEngine(const QTabWidget* self) {
    return self->QTabWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnPaintEngine(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_paintengine_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_MousePressEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperMousePressEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMousePressEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_mousepressevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_MouseReleaseEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperMouseReleaseEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseReleaseEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_MouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperMouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseDoubleClickEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_MouseMoveEvent(QTabWidget* self, QMouseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperMouseMoveEvent(QTabWidget* self, QMouseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMouseMoveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_mousemoveevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_WheelEvent(QTabWidget* self, QWheelEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperWheelEvent(QTabWidget* self, QWheelEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnWheelEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_wheelevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_KeyReleaseEvent(QTabWidget* self, QKeyEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperKeyReleaseEvent(QTabWidget* self, QKeyEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnKeyReleaseEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_FocusInEvent(QTabWidget* self, QFocusEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperFocusInEvent(QTabWidget* self, QFocusEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusInEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_focusinevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_FocusOutEvent(QTabWidget* self, QFocusEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperFocusOutEvent(QTabWidget* self, QFocusEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusOutEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_focusoutevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_EnterEvent(QTabWidget* self, QEnterEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperEnterEvent(QTabWidget* self, QEnterEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEnterEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_enterevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_LeaveEvent(QTabWidget* self, QEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperLeaveEvent(QTabWidget* self, QEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnLeaveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_leaveevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_MoveEvent(QTabWidget* self, QMoveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperMoveEvent(QTabWidget* self, QMoveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMoveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_moveevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_CloseEvent(QTabWidget* self, QCloseEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperCloseEvent(QTabWidget* self, QCloseEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnCloseEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_closeevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_ContextMenuEvent(QTabWidget* self, QContextMenuEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperContextMenuEvent(QTabWidget* self, QContextMenuEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnContextMenuEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_contextmenuevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_TabletEvent(QTabWidget* self, QTabletEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperTabletEvent(QTabWidget* self, QTabletEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTabletEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_tabletevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_ActionEvent(QTabWidget* self, QActionEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperActionEvent(QTabWidget* self, QActionEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnActionEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_actionevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_DragEnterEvent(QTabWidget* self, QDragEnterEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperDragEnterEvent(QTabWidget* self, QDragEnterEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragEnterEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_dragenterevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_DragMoveEvent(QTabWidget* self, QDragMoveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperDragMoveEvent(QTabWidget* self, QDragMoveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragMoveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_dragmoveevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_DragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperDragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDragLeaveEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_dragleaveevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_DropEvent(QTabWidget* self, QDropEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperDropEvent(QTabWidget* self, QDropEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDropEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_dropevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_HideEvent(QTabWidget* self, QHideEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperHideEvent(QTabWidget* self, QHideEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnHideEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_hideevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTabWidget_NativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        return vqtabwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTabWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTabWidget_SuperNativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->QTabWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTabWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnNativeEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_nativeevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTabWidget_Metric(const QTabWidget* self, int param1) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget) {
        return vqtabwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTabWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTabWidget_SuperMetric(const QTabWidget* self, int param1) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->QTabWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTabWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnMetric(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_metric_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_InitPainter(const QTabWidget* self, QPainter* painter) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget) {
        vqtabwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperInitPainter(const QTabWidget* self, QPainter* painter) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        vqtabwidget->QTabWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTabWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInitPainter(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_initpainter_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTabWidget_Redirected(const QTabWidget* self, QPoint* offset) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget) {
        return vqtabwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTabWidget_SuperRedirected(const QTabWidget* self, QPoint* offset) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->QTabWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTabWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnRedirected(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_redirected_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTabWidget_SharedPainter(const QTabWidget* self) {
    auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self));
    if (vqtabwidget) {
        return vqtabwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTabWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTabWidget_SuperSharedPainter(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->QTabWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTabWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnSharedPainter(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_sharedpainter_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_InputMethodEvent(QTabWidget* self, QInputMethodEvent* param1) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperInputMethodEvent(QTabWidget* self, QInputMethodEvent* param1) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTabWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInputMethodEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_inputmethodevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTabWidget_InputMethodQuery(const QTabWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QTabWidget_SuperInputMethodQuery(const QTabWidget* self, int param1) {
    return new QVariant(self->QTabWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnInputMethodQuery(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self)))
        vqtabwidget->qtabwidget_inputmethodquery_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QTabWidget_FocusNextPrevChild(QTabWidget* self, bool next) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        return vqtabwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTabWidget_SuperFocusNextPrevChild(QTabWidget* self, bool next) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->QTabWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTabWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnFocusNextPrevChild(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QTabWidget_EventFilter(QTabWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTabWidget_SuperEventFilter(QTabWidget* self, QObject* watched, QEvent* event) {
    return self->QTabWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnEventFilter(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_eventfilter_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_TimerEvent(QTabWidget* self, QTimerEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperTimerEvent(QTabWidget* self, QTimerEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnTimerEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_timerevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_ChildEvent(QTabWidget* self, QChildEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperChildEvent(QTabWidget* self, QChildEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnChildEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_childevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_CustomEvent(QTabWidget* self, QEvent* event) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperCustomEvent(QTabWidget* self, QEvent* event) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTabWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnCustomEvent(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_customevent_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_ConnectNotify(QTabWidget* self, const QMetaMethod* signal) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperConnectNotify(QTabWidget* self, const QMetaMethod* signal) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTabWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnConnectNotify(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_connectnotify_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTabWidget_DisconnectNotify(QTabWidget* self, const QMetaMethod* signal) {
    auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self);
    if (vqtabwidget) {
        vqtabwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTabWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTabWidget_SuperDisconnectNotify(QTabWidget* self, const QMetaMethod* signal) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->QTabWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTabWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTabWidget_OnDisconnectNotify(QTabWidget* self, intptr_t slot) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self))
        vqtabwidget->qtabwidget_disconnectnotify_callback = reinterpret_cast<VirtualQTabWidget::QTabWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTabWidget_SetTabBar(QTabWidget* self, QTabBar* tabBar) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->VirtualQTabWidget::setTabBar(tabBar);
    } else
        qFatal("Error: Protected method QTabWidget::setTabBar called without a directly constructed type");
}

// Derived class protected handler implementation
void QTabWidget_UpdateMicroFocus(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->VirtualQTabWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTabWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTabWidget_Create(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->VirtualQTabWidget::create();
    } else
        qFatal("Error: Protected method QTabWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTabWidget_Destroy(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        vqtabwidget->VirtualQTabWidget::destroy();
    } else
        qFatal("Error: Protected method QTabWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTabWidget_FocusNextChild(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->VirtualQTabWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QTabWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTabWidget_FocusPreviousChild(QTabWidget* self) {
    if (auto* vqtabwidget = dynamic_cast<VirtualQTabWidget*>(self)) {
        return vqtabwidget->VirtualQTabWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTabWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTabWidget_Sender(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->VirtualQTabWidget::sender();
    } else
        qFatal("Error: Protected method QTabWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTabWidget_SenderSignalIndex(const QTabWidget* self) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->VirtualQTabWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTabWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTabWidget_Receivers(const QTabWidget* self, const char* signal) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->VirtualQTabWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QTabWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTabWidget_IsSignalConnected(const QTabWidget* self, const QMetaMethod* signal) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->VirtualQTabWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTabWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTabWidget_GetDecodedMetricF(const QTabWidget* self, int metricA, int metricB) {
    if (auto* vqtabwidget = const_cast<VirtualQTabWidget*>(dynamic_cast<const VirtualQTabWidget*>(self))) {
        return vqtabwidget->VirtualQTabWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTabWidget::getDecodedMetricF called without a directly constructed type");
}

void QTabWidget_Delete(QTabWidget* self) {
    delete self;
}
