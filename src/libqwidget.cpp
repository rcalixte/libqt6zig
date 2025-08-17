#include <QAction>
#include <QActionEvent>
#include <QBackingStore>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWidgetData>
#include <QWindow>
#include <qwidget.h>
#include "libqwidget.h"
#include "libqwidget.hxx"

QWidgetData* QWidgetData_new(const QWidgetData* param1) {
    return new QWidgetData(*param1);
}

void QWidgetData_OperatorAssign(QWidgetData* self, const QWidgetData* param1) {
    self->operator=(*param1);
}

void QWidgetData_Delete(QWidgetData* self) {
    delete self;
}

QWidget* QWidget_new(QWidget* parent) {
    return new VirtualQWidget(parent);
}

QWidget* QWidget_new2() {
    return new VirtualQWidget();
}

QWidget* QWidget_new3(QWidget* parent, int f) {
    return new VirtualQWidget(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QWidget_MetaObject(const QWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWidget_Metacast(QWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWidget_Metacall(QWidget* self, int param1, int param2, void** param3) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWidget_OnMetacall(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Metacall_Callback(reinterpret_cast<VirtualQWidget::QWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWidget_QBaseMetacall(QWidget* self, int param1, int param2, void** param3) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Metacall_IsBase(true);
        return vqwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWidget_Tr(const char* s) {
    QString _ret = QWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uintptr_t QWidget_WinId(const QWidget* self) {
    return static_cast<uintptr_t>(self->winId());
}

void QWidget_CreateWinId(QWidget* self) {
    self->createWinId();
}

uintptr_t QWidget_InternalWinId(const QWidget* self) {
    return static_cast<uintptr_t>(self->internalWinId());
}

uintptr_t QWidget_EffectiveWinId(const QWidget* self) {
    return static_cast<uintptr_t>(self->effectiveWinId());
}

QStyle* QWidget_Style(const QWidget* self) {
    return self->style();
}

void QWidget_SetStyle(QWidget* self, QStyle* style) {
    self->setStyle(style);
}

bool QWidget_IsTopLevel(const QWidget* self) {
    return self->isTopLevel();
}

bool QWidget_IsWindow(const QWidget* self) {
    return self->isWindow();
}

bool QWidget_IsModal(const QWidget* self) {
    return self->isModal();
}

int QWidget_WindowModality(const QWidget* self) {
    return static_cast<int>(self->windowModality());
}

void QWidget_SetWindowModality(QWidget* self, int windowModality) {
    self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

bool QWidget_IsEnabled(const QWidget* self) {
    return self->isEnabled();
}

bool QWidget_IsEnabledTo(const QWidget* self, const QWidget* param1) {
    return self->isEnabledTo(param1);
}

void QWidget_SetEnabled(QWidget* self, bool enabled) {
    self->setEnabled(enabled);
}

void QWidget_SetDisabled(QWidget* self, bool disabled) {
    self->setDisabled(disabled);
}

void QWidget_SetWindowModified(QWidget* self, bool windowModified) {
    self->setWindowModified(windowModified);
}

QRect* QWidget_FrameGeometry(const QWidget* self) {
    return new QRect(self->frameGeometry());
}

QRect* QWidget_Geometry(const QWidget* self) {
    const QRect& _ret = self->geometry();
    // Cast returned reference into pointer
    return const_cast<QRect*>(&_ret);
}

QRect* QWidget_NormalGeometry(const QWidget* self) {
    return new QRect(self->normalGeometry());
}

int QWidget_X(const QWidget* self) {
    return self->x();
}

int QWidget_Y(const QWidget* self) {
    return self->y();
}

QPoint* QWidget_Pos(const QWidget* self) {
    return new QPoint(self->pos());
}

QSize* QWidget_FrameSize(const QWidget* self) {
    return new QSize(self->frameSize());
}

QSize* QWidget_Size(const QWidget* self) {
    return new QSize(self->size());
}

int QWidget_Width(const QWidget* self) {
    return self->width();
}

int QWidget_Height(const QWidget* self) {
    return self->height();
}

QRect* QWidget_Rect(const QWidget* self) {
    return new QRect(self->rect());
}

QRect* QWidget_ChildrenRect(const QWidget* self) {
    return new QRect(self->childrenRect());
}

QRegion* QWidget_ChildrenRegion(const QWidget* self) {
    return new QRegion(self->childrenRegion());
}

QSize* QWidget_MinimumSize(const QWidget* self) {
    return new QSize(self->minimumSize());
}

QSize* QWidget_MaximumSize(const QWidget* self) {
    return new QSize(self->maximumSize());
}

int QWidget_MinimumWidth(const QWidget* self) {
    return self->minimumWidth();
}

int QWidget_MinimumHeight(const QWidget* self) {
    return self->minimumHeight();
}

int QWidget_MaximumWidth(const QWidget* self) {
    return self->maximumWidth();
}

int QWidget_MaximumHeight(const QWidget* self) {
    return self->maximumHeight();
}

void QWidget_SetMinimumSize(QWidget* self, const QSize* minimumSize) {
    self->setMinimumSize(*minimumSize);
}

void QWidget_SetMinimumSize2(QWidget* self, int minw, int minh) {
    self->setMinimumSize(static_cast<int>(minw), static_cast<int>(minh));
}

void QWidget_SetMaximumSize(QWidget* self, const QSize* maximumSize) {
    self->setMaximumSize(*maximumSize);
}

void QWidget_SetMaximumSize2(QWidget* self, int maxw, int maxh) {
    self->setMaximumSize(static_cast<int>(maxw), static_cast<int>(maxh));
}

void QWidget_SetMinimumWidth(QWidget* self, int minw) {
    self->setMinimumWidth(static_cast<int>(minw));
}

void QWidget_SetMinimumHeight(QWidget* self, int minh) {
    self->setMinimumHeight(static_cast<int>(minh));
}

void QWidget_SetMaximumWidth(QWidget* self, int maxw) {
    self->setMaximumWidth(static_cast<int>(maxw));
}

void QWidget_SetMaximumHeight(QWidget* self, int maxh) {
    self->setMaximumHeight(static_cast<int>(maxh));
}

QSize* QWidget_SizeIncrement(const QWidget* self) {
    return new QSize(self->sizeIncrement());
}

void QWidget_SetSizeIncrement(QWidget* self, const QSize* sizeIncrement) {
    self->setSizeIncrement(*sizeIncrement);
}

void QWidget_SetSizeIncrement2(QWidget* self, int w, int h) {
    self->setSizeIncrement(static_cast<int>(w), static_cast<int>(h));
}

QSize* QWidget_BaseSize(const QWidget* self) {
    return new QSize(self->baseSize());
}

void QWidget_SetBaseSize(QWidget* self, const QSize* baseSize) {
    self->setBaseSize(*baseSize);
}

void QWidget_SetBaseSize2(QWidget* self, int basew, int baseh) {
    self->setBaseSize(static_cast<int>(basew), static_cast<int>(baseh));
}

void QWidget_SetFixedSize(QWidget* self, const QSize* fixedSize) {
    self->setFixedSize(*fixedSize);
}

void QWidget_SetFixedSize2(QWidget* self, int w, int h) {
    self->setFixedSize(static_cast<int>(w), static_cast<int>(h));
}

void QWidget_SetFixedWidth(QWidget* self, int w) {
    self->setFixedWidth(static_cast<int>(w));
}

void QWidget_SetFixedHeight(QWidget* self, int h) {
    self->setFixedHeight(static_cast<int>(h));
}

QPointF* QWidget_MapToGlobal(const QWidget* self, const QPointF* param1) {
    return new QPointF(self->mapToGlobal(*param1));
}

QPoint* QWidget_MapToGlobal2(const QWidget* self, const QPoint* param1) {
    return new QPoint(self->mapToGlobal(*param1));
}

QPointF* QWidget_MapFromGlobal(const QWidget* self, const QPointF* param1) {
    return new QPointF(self->mapFromGlobal(*param1));
}

QPoint* QWidget_MapFromGlobal2(const QWidget* self, const QPoint* param1) {
    return new QPoint(self->mapFromGlobal(*param1));
}

QPointF* QWidget_MapToParent(const QWidget* self, const QPointF* param1) {
    return new QPointF(self->mapToParent(*param1));
}

QPoint* QWidget_MapToParent2(const QWidget* self, const QPoint* param1) {
    return new QPoint(self->mapToParent(*param1));
}

QPointF* QWidget_MapFromParent(const QWidget* self, const QPointF* param1) {
    return new QPointF(self->mapFromParent(*param1));
}

QPoint* QWidget_MapFromParent2(const QWidget* self, const QPoint* param1) {
    return new QPoint(self->mapFromParent(*param1));
}

QPointF* QWidget_MapTo(const QWidget* self, const QWidget* param1, const QPointF* param2) {
    return new QPointF(self->mapTo(param1, *param2));
}

QPoint* QWidget_MapTo2(const QWidget* self, const QWidget* param1, const QPoint* param2) {
    return new QPoint(self->mapTo(param1, *param2));
}

QPointF* QWidget_MapFrom(const QWidget* self, const QWidget* param1, const QPointF* param2) {
    return new QPointF(self->mapFrom(param1, *param2));
}

QPoint* QWidget_MapFrom2(const QWidget* self, const QWidget* param1, const QPoint* param2) {
    return new QPoint(self->mapFrom(param1, *param2));
}

QWidget* QWidget_Window(const QWidget* self) {
    return self->window();
}

QWidget* QWidget_NativeParentWidget(const QWidget* self) {
    return self->nativeParentWidget();
}

QWidget* QWidget_TopLevelWidget(const QWidget* self) {
    return self->topLevelWidget();
}

QPalette* QWidget_Palette(const QWidget* self) {
    const QPalette& _ret = self->palette();
    // Cast returned reference into pointer
    return const_cast<QPalette*>(&_ret);
}

void QWidget_SetPalette(QWidget* self, const QPalette* palette) {
    self->setPalette(*palette);
}

void QWidget_SetBackgroundRole(QWidget* self, int backgroundRole) {
    self->setBackgroundRole(static_cast<QPalette::ColorRole>(backgroundRole));
}

int QWidget_BackgroundRole(const QWidget* self) {
    return static_cast<int>(self->backgroundRole());
}

void QWidget_SetForegroundRole(QWidget* self, int foregroundRole) {
    self->setForegroundRole(static_cast<QPalette::ColorRole>(foregroundRole));
}

int QWidget_ForegroundRole(const QWidget* self) {
    return static_cast<int>(self->foregroundRole());
}

QFont* QWidget_Font(const QWidget* self) {
    const QFont& _ret = self->font();
    // Cast returned reference into pointer
    return const_cast<QFont*>(&_ret);
}

void QWidget_SetFont(QWidget* self, const QFont* font) {
    self->setFont(*font);
}

QFontMetrics* QWidget_FontMetrics(const QWidget* self) {
    return new QFontMetrics(self->fontMetrics());
}

QFontInfo* QWidget_FontInfo(const QWidget* self) {
    return new QFontInfo(self->fontInfo());
}

QCursor* QWidget_Cursor(const QWidget* self) {
    return new QCursor(self->cursor());
}

void QWidget_SetCursor(QWidget* self, const QCursor* cursor) {
    self->setCursor(*cursor);
}

void QWidget_UnsetCursor(QWidget* self) {
    self->unsetCursor();
}

void QWidget_SetMouseTracking(QWidget* self, bool enable) {
    self->setMouseTracking(enable);
}

bool QWidget_HasMouseTracking(const QWidget* self) {
    return self->hasMouseTracking();
}

bool QWidget_UnderMouse(const QWidget* self) {
    return self->underMouse();
}

void QWidget_SetTabletTracking(QWidget* self, bool enable) {
    self->setTabletTracking(enable);
}

bool QWidget_HasTabletTracking(const QWidget* self) {
    return self->hasTabletTracking();
}

void QWidget_SetMask(QWidget* self, const QBitmap* mask) {
    self->setMask(*mask);
}

void QWidget_SetMask2(QWidget* self, const QRegion* mask) {
    self->setMask(*mask);
}

QRegion* QWidget_Mask(const QWidget* self) {
    return new QRegion(self->mask());
}

void QWidget_ClearMask(QWidget* self) {
    self->clearMask();
}

void QWidget_Render(QWidget* self, QPaintDevice* target) {
    self->render(target);
}

void QWidget_Render2(QWidget* self, QPainter* painter) {
    self->render(painter);
}

QPixmap* QWidget_Grab(QWidget* self) {
    return new QPixmap(self->grab());
}

QGraphicsEffect* QWidget_GraphicsEffect(const QWidget* self) {
    return self->graphicsEffect();
}

void QWidget_SetGraphicsEffect(QWidget* self, QGraphicsEffect* effect) {
    self->setGraphicsEffect(effect);
}

void QWidget_GrabGesture(QWidget* self, int typeVal) {
    self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QWidget_UngrabGesture(QWidget* self, int typeVal) {
    self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QWidget_SetWindowTitle(QWidget* self, const libqt_string windowTitle) {
    QString windowTitle_QString = QString::fromUtf8(windowTitle.data, windowTitle.len);
    self->setWindowTitle(windowTitle_QString);
}

void QWidget_SetStyleSheet(QWidget* self, const libqt_string styleSheet) {
    QString styleSheet_QString = QString::fromUtf8(styleSheet.data, styleSheet.len);
    self->setStyleSheet(styleSheet_QString);
}

libqt_string QWidget_StyleSheet(const QWidget* self) {
    QString _ret = self->styleSheet();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWidget_WindowTitle(const QWidget* self) {
    QString _ret = self->windowTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_SetWindowIcon(QWidget* self, const QIcon* icon) {
    self->setWindowIcon(*icon);
}

QIcon* QWidget_WindowIcon(const QWidget* self) {
    return new QIcon(self->windowIcon());
}

void QWidget_SetWindowIconText(QWidget* self, const libqt_string windowIconText) {
    QString windowIconText_QString = QString::fromUtf8(windowIconText.data, windowIconText.len);
    self->setWindowIconText(windowIconText_QString);
}

libqt_string QWidget_WindowIconText(const QWidget* self) {
    QString _ret = self->windowIconText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_SetWindowRole(QWidget* self, const libqt_string windowRole) {
    QString windowRole_QString = QString::fromUtf8(windowRole.data, windowRole.len);
    self->setWindowRole(windowRole_QString);
}

libqt_string QWidget_WindowRole(const QWidget* self) {
    QString _ret = self->windowRole();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_SetWindowFilePath(QWidget* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->setWindowFilePath(filePath_QString);
}

libqt_string QWidget_WindowFilePath(const QWidget* self) {
    QString _ret = self->windowFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_SetWindowOpacity(QWidget* self, double level) {
    self->setWindowOpacity(static_cast<qreal>(level));
}

double QWidget_WindowOpacity(const QWidget* self) {
    return static_cast<double>(self->windowOpacity());
}

bool QWidget_IsWindowModified(const QWidget* self) {
    return self->isWindowModified();
}

void QWidget_SetToolTip(QWidget* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QWidget_ToolTip(const QWidget* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_SetToolTipDuration(QWidget* self, int msec) {
    self->setToolTipDuration(static_cast<int>(msec));
}

int QWidget_ToolTipDuration(const QWidget* self) {
    return self->toolTipDuration();
}

void QWidget_SetStatusTip(QWidget* self, const libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QWidget_StatusTip(const QWidget* self) {
    QString _ret = self->statusTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_SetWhatsThis(QWidget* self, const libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(whatsThis_QString);
}

libqt_string QWidget_WhatsThis(const QWidget* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWidget_AccessibleName(const QWidget* self) {
    QString _ret = self->accessibleName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_SetAccessibleName(QWidget* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAccessibleName(name_QString);
}

libqt_string QWidget_AccessibleDescription(const QWidget* self) {
    QString _ret = self->accessibleDescription();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_SetAccessibleDescription(QWidget* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setAccessibleDescription(description_QString);
}

void QWidget_SetLayoutDirection(QWidget* self, int direction) {
    self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QWidget_LayoutDirection(const QWidget* self) {
    return static_cast<int>(self->layoutDirection());
}

void QWidget_UnsetLayoutDirection(QWidget* self) {
    self->unsetLayoutDirection();
}

void QWidget_SetLocale(QWidget* self, const QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QWidget_Locale(const QWidget* self) {
    return new QLocale(self->locale());
}

void QWidget_UnsetLocale(QWidget* self) {
    self->unsetLocale();
}

bool QWidget_IsRightToLeft(const QWidget* self) {
    return self->isRightToLeft();
}

bool QWidget_IsLeftToRight(const QWidget* self) {
    return self->isLeftToRight();
}

void QWidget_SetFocus(QWidget* self) {
    self->setFocus();
}

bool QWidget_IsActiveWindow(const QWidget* self) {
    return self->isActiveWindow();
}

void QWidget_ActivateWindow(QWidget* self) {
    self->activateWindow();
}

void QWidget_ClearFocus(QWidget* self) {
    self->clearFocus();
}

void QWidget_SetFocus2(QWidget* self, int reason) {
    self->setFocus(static_cast<Qt::FocusReason>(reason));
}

int QWidget_FocusPolicy(const QWidget* self) {
    return static_cast<int>(self->focusPolicy());
}

void QWidget_SetFocusPolicy(QWidget* self, int policy) {
    self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

bool QWidget_HasFocus(const QWidget* self) {
    return self->hasFocus();
}

void QWidget_SetTabOrder(QWidget* param1, QWidget* param2) {
    QWidget::setTabOrder(param1, param2);
}

void QWidget_SetFocusProxy(QWidget* self, QWidget* focusProxy) {
    self->setFocusProxy(focusProxy);
}

QWidget* QWidget_FocusProxy(const QWidget* self) {
    return self->focusProxy();
}

int QWidget_ContextMenuPolicy(const QWidget* self) {
    return static_cast<int>(self->contextMenuPolicy());
}

void QWidget_SetContextMenuPolicy(QWidget* self, int policy) {
    self->setContextMenuPolicy(static_cast<Qt::ContextMenuPolicy>(policy));
}

void QWidget_GrabMouse(QWidget* self) {
    self->grabMouse();
}

void QWidget_GrabMouse2(QWidget* self, const QCursor* param1) {
    self->grabMouse(*param1);
}

void QWidget_ReleaseMouse(QWidget* self) {
    self->releaseMouse();
}

void QWidget_GrabKeyboard(QWidget* self) {
    self->grabKeyboard();
}

void QWidget_ReleaseKeyboard(QWidget* self) {
    self->releaseKeyboard();
}

int QWidget_GrabShortcut(QWidget* self, const QKeySequence* key) {
    return self->grabShortcut(*key);
}

void QWidget_ReleaseShortcut(QWidget* self, int id) {
    self->releaseShortcut(static_cast<int>(id));
}

void QWidget_SetShortcutEnabled(QWidget* self, int id) {
    self->setShortcutEnabled(static_cast<int>(id));
}

void QWidget_SetShortcutAutoRepeat(QWidget* self, int id) {
    self->setShortcutAutoRepeat(static_cast<int>(id));
}

QWidget* QWidget_MouseGrabber() {
    return QWidget::mouseGrabber();
}

QWidget* QWidget_KeyboardGrabber() {
    return QWidget::keyboardGrabber();
}

bool QWidget_UpdatesEnabled(const QWidget* self) {
    return self->updatesEnabled();
}

void QWidget_SetUpdatesEnabled(QWidget* self, bool enable) {
    self->setUpdatesEnabled(enable);
}

QGraphicsProxyWidget* QWidget_GraphicsProxyWidget(const QWidget* self) {
    return self->graphicsProxyWidget();
}

void QWidget_Update(QWidget* self) {
    self->update();
}

void QWidget_Repaint(QWidget* self) {
    self->repaint();
}

void QWidget_Update2(QWidget* self, int x, int y, int w, int h) {
    self->update(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_Update3(QWidget* self, const QRect* param1) {
    self->update(*param1);
}

void QWidget_Update4(QWidget* self, const QRegion* param1) {
    self->update(*param1);
}

void QWidget_Repaint2(QWidget* self, int x, int y, int w, int h) {
    self->repaint(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_Repaint3(QWidget* self, const QRect* param1) {
    self->repaint(*param1);
}

void QWidget_Repaint4(QWidget* self, const QRegion* param1) {
    self->repaint(*param1);
}

void QWidget_SetHidden(QWidget* self, bool hidden) {
    self->setHidden(hidden);
}

void QWidget_Show(QWidget* self) {
    self->show();
}

void QWidget_Hide(QWidget* self) {
    self->hide();
}

void QWidget_ShowMinimized(QWidget* self) {
    self->showMinimized();
}

void QWidget_ShowMaximized(QWidget* self) {
    self->showMaximized();
}

void QWidget_ShowFullScreen(QWidget* self) {
    self->showFullScreen();
}

void QWidget_ShowNormal(QWidget* self) {
    self->showNormal();
}

bool QWidget_Close(QWidget* self) {
    return self->close();
}

void QWidget_Raise(QWidget* self) {
    self->raise();
}

void QWidget_Lower(QWidget* self) {
    self->lower();
}

void QWidget_StackUnder(QWidget* self, QWidget* param1) {
    self->stackUnder(param1);
}

void QWidget_Move(QWidget* self, int x, int y) {
    self->move(static_cast<int>(x), static_cast<int>(y));
}

void QWidget_Move2(QWidget* self, const QPoint* param1) {
    self->move(*param1);
}

void QWidget_Resize(QWidget* self, int w, int h) {
    self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWidget_Resize2(QWidget* self, const QSize* param1) {
    self->resize(*param1);
}

void QWidget_SetGeometry(QWidget* self, int x, int y, int w, int h) {
    self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_SetGeometry2(QWidget* self, const QRect* geometry) {
    self->setGeometry(*geometry);
}

libqt_string QWidget_SaveGeometry(const QWidget* self) {
    QByteArray _qb = self->saveGeometry();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QWidget_RestoreGeometry(QWidget* self, const libqt_string geometry) {
    QByteArray geometry_QByteArray(geometry.data, geometry.len);
    return self->restoreGeometry(geometry_QByteArray);
}

void QWidget_AdjustSize(QWidget* self) {
    self->adjustSize();
}

bool QWidget_IsVisible(const QWidget* self) {
    return self->isVisible();
}

bool QWidget_IsVisibleTo(const QWidget* self, const QWidget* param1) {
    return self->isVisibleTo(param1);
}

bool QWidget_IsHidden(const QWidget* self) {
    return self->isHidden();
}

bool QWidget_IsMinimized(const QWidget* self) {
    return self->isMinimized();
}

bool QWidget_IsMaximized(const QWidget* self) {
    return self->isMaximized();
}

bool QWidget_IsFullScreen(const QWidget* self) {
    return self->isFullScreen();
}

int QWidget_WindowState(const QWidget* self) {
    return static_cast<int>(self->windowState());
}

void QWidget_SetWindowState(QWidget* self, int state) {
    self->setWindowState(static_cast<Qt::WindowStates>(state));
}

void QWidget_OverrideWindowState(QWidget* self, int state) {
    self->overrideWindowState(static_cast<Qt::WindowStates>(state));
}

QSizePolicy* QWidget_SizePolicy(const QWidget* self) {
    return new QSizePolicy(self->sizePolicy());
}

void QWidget_SetSizePolicy(QWidget* self, QSizePolicy* sizePolicy) {
    self->setSizePolicy(*sizePolicy);
}

void QWidget_SetSizePolicy2(QWidget* self, int horizontal, int vertical) {
    self->setSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}

QRegion* QWidget_VisibleRegion(const QWidget* self) {
    return new QRegion(self->visibleRegion());
}

void QWidget_SetContentsMargins(QWidget* self, int left, int top, int right, int bottom) {
    self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QWidget_SetContentsMargins2(QWidget* self, const QMargins* margins) {
    self->setContentsMargins(*margins);
}

QMargins* QWidget_ContentsMargins(const QWidget* self) {
    return new QMargins(self->contentsMargins());
}

QRect* QWidget_ContentsRect(const QWidget* self) {
    return new QRect(self->contentsRect());
}

QLayout* QWidget_Layout(const QWidget* self) {
    return self->layout();
}

void QWidget_SetLayout(QWidget* self, QLayout* layout) {
    self->setLayout(layout);
}

void QWidget_UpdateGeometry(QWidget* self) {
    self->updateGeometry();
}

void QWidget_SetParent(QWidget* self, QWidget* parent) {
    self->setParent(parent);
}

void QWidget_SetParent2(QWidget* self, QWidget* parent, int f) {
    self->setParent(parent, static_cast<Qt::WindowFlags>(f));
}

void QWidget_Scroll(QWidget* self, int dx, int dy) {
    self->scroll(static_cast<int>(dx), static_cast<int>(dy));
}

void QWidget_Scroll2(QWidget* self, int dx, int dy, const QRect* param3) {
    self->scroll(static_cast<int>(dx), static_cast<int>(dy), *param3);
}

QWidget* QWidget_FocusWidget(const QWidget* self) {
    return self->focusWidget();
}

QWidget* QWidget_NextInFocusChain(const QWidget* self) {
    return self->nextInFocusChain();
}

QWidget* QWidget_PreviousInFocusChain(const QWidget* self) {
    return self->previousInFocusChain();
}

bool QWidget_AcceptDrops(const QWidget* self) {
    return self->acceptDrops();
}

void QWidget_SetAcceptDrops(QWidget* self, bool on) {
    self->setAcceptDrops(on);
}

void QWidget_AddAction(QWidget* self, QAction* action) {
    self->addAction(action);
}

void QWidget_AddActions(QWidget* self, const libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->addActions(actions_QList);
}

void QWidget_InsertActions(QWidget* self, QAction* before, const libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->insertActions(before, actions_QList);
}

void QWidget_InsertAction(QWidget* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
}

void QWidget_RemoveAction(QWidget* self, QAction* action) {
    self->removeAction(action);
}

libqt_list /* of QAction* */ QWidget_Actions(const QWidget* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAction* QWidget_AddAction2(QWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(text_QString);
}

QAction* QWidget_AddAction3(QWidget* self, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(*icon, text_QString);
}

QAction* QWidget_AddAction4(QWidget* self, const libqt_string text, const QKeySequence* shortcut) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(text_QString, *shortcut);
}

QAction* QWidget_AddAction5(QWidget* self, const QIcon* icon, const libqt_string text, const QKeySequence* shortcut) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addAction(*icon, text_QString, *shortcut);
}

QWidget* QWidget_ParentWidget(const QWidget* self) {
    return self->parentWidget();
}

void QWidget_SetWindowFlags(QWidget* self, int typeVal) {
    self->setWindowFlags(static_cast<Qt::WindowFlags>(typeVal));
}

int QWidget_WindowFlags(const QWidget* self) {
    return static_cast<int>(self->windowFlags());
}

void QWidget_SetWindowFlag(QWidget* self, int param1) {
    self->setWindowFlag(static_cast<Qt::WindowType>(param1));
}

void QWidget_OverrideWindowFlags(QWidget* self, int typeVal) {
    self->overrideWindowFlags(static_cast<Qt::WindowFlags>(typeVal));
}

int QWidget_WindowType(const QWidget* self) {
    return static_cast<int>(self->windowType());
}

QWidget* QWidget_Find(unsigned long long param1) {
    return QWidget::find(static_cast<unsigned long long>(param1));
}

QWidget* QWidget_ChildAt(const QWidget* self, int x, int y) {
    return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QWidget* QWidget_ChildAt2(const QWidget* self, const QPoint* p) {
    return self->childAt(*p);
}

QWidget* QWidget_ChildAt3(const QWidget* self, const QPointF* p) {
    return self->childAt(*p);
}

void QWidget_SetAttribute(QWidget* self, int param1) {
    self->setAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

bool QWidget_TestAttribute(const QWidget* self, int param1) {
    return self->testAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

void QWidget_EnsurePolished(const QWidget* self) {
    self->ensurePolished();
}

bool QWidget_IsAncestorOf(const QWidget* self, const QWidget* child) {
    return self->isAncestorOf(child);
}

bool QWidget_AutoFillBackground(const QWidget* self) {
    return self->autoFillBackground();
}

void QWidget_SetAutoFillBackground(QWidget* self, bool enabled) {
    self->setAutoFillBackground(enabled);
}

QBackingStore* QWidget_BackingStore(const QWidget* self) {
    return self->backingStore();
}

QWindow* QWidget_WindowHandle(const QWidget* self) {
    return self->windowHandle();
}

QScreen* QWidget_Screen(const QWidget* self) {
    return self->screen();
}

void QWidget_SetScreen(QWidget* self, QScreen* screen) {
    self->setScreen(screen);
}

QWidget* QWidget_CreateWindowContainer(QWindow* window) {
    return QWidget::createWindowContainer(window);
}

void QWidget_WindowTitleChanged(QWidget* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->windowTitleChanged(title_QString);
}

void QWidget_Connect_WindowTitleChanged(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, libqt_string) = reinterpret_cast<void (*)(QWidget*, libqt_string)>(slot);
    QWidget::connect(self, &QWidget::windowTitleChanged, [self, slotFunc](const QString& title) {
        const QString title_ret = title;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray title_b = title_ret.toUtf8();
        libqt_string title_str;
        title_str.len = title_b.length();
        title_str.data = static_cast<const char*>(malloc(title_str.len + 1));
        memcpy((void*)title_str.data, title_b.data(), title_str.len);
        ((char*)title_str.data)[title_str.len] = '\0';
        libqt_string sigval1 = title_str;
        slotFunc(self, sigval1);
    });
}

void QWidget_WindowIconChanged(QWidget* self, const QIcon* icon) {
    self->windowIconChanged(*icon);
}

void QWidget_Connect_WindowIconChanged(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, QIcon*) = reinterpret_cast<void (*)(QWidget*, QIcon*)>(slot);
    QWidget::connect(self, &QWidget::windowIconChanged, [self, slotFunc](const QIcon& icon) {
        const QIcon& icon_ret = icon;
        // Cast returned reference into pointer
        QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
        slotFunc(self, sigval1);
    });
}

void QWidget_WindowIconTextChanged(QWidget* self, const libqt_string iconText) {
    QString iconText_QString = QString::fromUtf8(iconText.data, iconText.len);
    self->windowIconTextChanged(iconText_QString);
}

void QWidget_Connect_WindowIconTextChanged(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, libqt_string) = reinterpret_cast<void (*)(QWidget*, libqt_string)>(slot);
    QWidget::connect(self, &QWidget::windowIconTextChanged, [self, slotFunc](const QString& iconText) {
        const QString iconText_ret = iconText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray iconText_b = iconText_ret.toUtf8();
        libqt_string iconText_str;
        iconText_str.len = iconText_b.length();
        iconText_str.data = static_cast<const char*>(malloc(iconText_str.len + 1));
        memcpy((void*)iconText_str.data, iconText_b.data(), iconText_str.len);
        ((char*)iconText_str.data)[iconText_str.len] = '\0';
        libqt_string sigval1 = iconText_str;
        slotFunc(self, sigval1);
    });
}

void QWidget_CustomContextMenuRequested(QWidget* self, const QPoint* pos) {
    self->customContextMenuRequested(*pos);
}

void QWidget_Connect_CustomContextMenuRequested(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, QPoint*) = reinterpret_cast<void (*)(QWidget*, QPoint*)>(slot);
    QWidget::connect(self, &QWidget::customContextMenuRequested, [self, slotFunc](const QPoint& pos) {
        const QPoint& pos_ret = pos;
        // Cast returned reference into pointer
        QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
        slotFunc(self, sigval1);
    });
}

int QWidget_InputMethodHints(const QWidget* self) {
    return static_cast<int>(self->inputMethodHints());
}

void QWidget_SetInputMethodHints(QWidget* self, int hints) {
    self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

libqt_string QWidget_Tr2(const char* s, const char* c) {
    QString _ret = QWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWidget_Render22(QWidget* self, QPaintDevice* target, const QPoint* targetOffset) {
    self->render(target, *targetOffset);
}

void QWidget_Render3(QWidget* self, QPaintDevice* target, const QPoint* targetOffset, const QRegion* sourceRegion) {
    self->render(target, *targetOffset, *sourceRegion);
}

void QWidget_Render4(QWidget* self, QPaintDevice* target, const QPoint* targetOffset, const QRegion* sourceRegion, int renderFlags) {
    self->render(target, *targetOffset, *sourceRegion, static_cast<QWidget::RenderFlags>(renderFlags));
}

void QWidget_Render23(QWidget* self, QPainter* painter, const QPoint* targetOffset) {
    self->render(painter, *targetOffset);
}

void QWidget_Render32(QWidget* self, QPainter* painter, const QPoint* targetOffset, const QRegion* sourceRegion) {
    self->render(painter, *targetOffset, *sourceRegion);
}

void QWidget_Render42(QWidget* self, QPainter* painter, const QPoint* targetOffset, const QRegion* sourceRegion, int renderFlags) {
    self->render(painter, *targetOffset, *sourceRegion, static_cast<QWidget::RenderFlags>(renderFlags));
}

QPixmap* QWidget_Grab1(QWidget* self, const QRect* rectangle) {
    return new QPixmap(self->grab(*rectangle));
}

void QWidget_GrabGesture2(QWidget* self, int typeVal, int flags) {
    self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

int QWidget_GrabShortcut2(QWidget* self, const QKeySequence* key, int context) {
    return self->grabShortcut(*key, static_cast<Qt::ShortcutContext>(context));
}

void QWidget_SetShortcutEnabled2(QWidget* self, int id, bool enable) {
    self->setShortcutEnabled(static_cast<int>(id), enable);
}

void QWidget_SetShortcutAutoRepeat2(QWidget* self, int id, bool enable) {
    self->setShortcutAutoRepeat(static_cast<int>(id), enable);
}

void QWidget_SetWindowFlag2(QWidget* self, int param1, bool on) {
    self->setWindowFlag(static_cast<Qt::WindowType>(param1), on);
}

void QWidget_SetAttribute2(QWidget* self, int param1, bool on) {
    self->setAttribute(static_cast<Qt::WidgetAttribute>(param1), on);
}

QWidget* QWidget_CreateWindowContainer2(QWindow* window, QWidget* parent) {
    return QWidget::createWindowContainer(window, parent);
}

QWidget* QWidget_CreateWindowContainer3(QWindow* window, QWidget* parent, int flags) {
    return QWidget::createWindowContainer(window, parent, static_cast<Qt::WindowFlags>(flags));
}

// Derived class handler implementation
int QWidget_DevType(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->devType();
    } else {
        return self->QWidget::devType();
    }
}

// Base class handler implementation
int QWidget_QBaseDevType(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DevType_IsBase(true);
        return vqwidget->devType();
    } else {
        return self->QWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDevType(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DevType_Callback(reinterpret_cast<VirtualQWidget::QWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_SetVisible(QWidget* self, bool visible) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setVisible(visible);
    } else {
        self->QWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QWidget_QBaseSetVisible(QWidget* self, bool visible) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_SetVisible_IsBase(true);
        vqwidget->setVisible(visible);
    } else {
        self->QWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSetVisible(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_SetVisible_Callback(reinterpret_cast<VirtualQWidget::QWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWidget_SizeHint(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return new QSize(vqwidget->sizeHint());
    } else {
        return new QSize(((VirtualQWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QWidget_QBaseSizeHint(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_SizeHint_IsBase(true);
        return new QSize(vqwidget->sizeHint());
    } else {
        return new QSize(((VirtualQWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSizeHint(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_SizeHint_Callback(reinterpret_cast<VirtualQWidget::QWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWidget_MinimumSizeHint(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return new QSize(vqwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QWidget_QBaseMinimumSizeHint(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMinimumSizeHint(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQWidget::QWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidget_HeightForWidth(const QWidget* self, int param1) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWidget_QBaseHeightForWidth(const QWidget* self, int param1) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_HeightForWidth_IsBase(true);
        return vqwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHeightForWidth(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQWidget::QWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidget_HasHeightForWidth(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->hasHeightForWidth();
    } else {
        return self->QWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QWidget_QBaseHasHeightForWidth(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_HasHeightForWidth_IsBase(true);
        return vqwidget->hasHeightForWidth();
    } else {
        return self->QWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHasHeightForWidth(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWidget::QWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QWidget_PaintEngine(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->paintEngine();
    } else {
        return self->QWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QWidget_QBasePaintEngine(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_PaintEngine_IsBase(true);
        return vqwidget->paintEngine();
    } else {
        return self->QWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnPaintEngine(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_PaintEngine_Callback(reinterpret_cast<VirtualQWidget::QWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidget_Event(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->event(event);
    } else {
        return ((VirtualQWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool QWidget_QBaseEvent(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Event_IsBase(true);
        return vqwidget->event(event);
    } else {
        return ((VirtualQWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Event_Callback(reinterpret_cast<VirtualQWidget::QWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_MousePressEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->mousePressEvent(event);
    } else {
        ((VirtualQWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseMousePressEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MousePressEvent_IsBase(true);
        vqwidget->mousePressEvent(event);
    } else {
        ((VirtualQWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMousePressEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_MouseReleaseEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseMouseReleaseEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MouseReleaseEvent_IsBase(true);
        vqwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseReleaseEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_MouseDoubleClickEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseMouseDoubleClickEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MouseDoubleClickEvent_IsBase(true);
        vqwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseDoubleClickEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_MouseMoveEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseMouseMoveEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MouseMoveEvent_IsBase(true);
        vqwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseMoveEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_WheelEvent(QWidget* self, QWheelEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->wheelEvent(event);
    } else {
        ((VirtualQWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseWheelEvent(QWidget* self, QWheelEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_WheelEvent_IsBase(true);
        vqwidget->wheelEvent(event);
    } else {
        ((VirtualQWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnWheelEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_WheelEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_KeyPressEvent(QWidget* self, QKeyEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->keyPressEvent(event);
    } else {
        ((VirtualQWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseKeyPressEvent(QWidget* self, QKeyEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_KeyPressEvent_IsBase(true);
        vqwidget->keyPressEvent(event);
    } else {
        ((VirtualQWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnKeyPressEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_KeyReleaseEvent(QWidget* self, QKeyEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseKeyReleaseEvent(QWidget* self, QKeyEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_KeyReleaseEvent_IsBase(true);
        vqwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnKeyReleaseEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_FocusInEvent(QWidget* self, QFocusEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->focusInEvent(event);
    } else {
        ((VirtualQWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseFocusInEvent(QWidget* self, QFocusEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusInEvent_IsBase(true);
        vqwidget->focusInEvent(event);
    } else {
        ((VirtualQWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusInEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_FocusOutEvent(QWidget* self, QFocusEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->focusOutEvent(event);
    } else {
        ((VirtualQWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseFocusOutEvent(QWidget* self, QFocusEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusOutEvent_IsBase(true);
        vqwidget->focusOutEvent(event);
    } else {
        ((VirtualQWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusOutEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_EnterEvent(QWidget* self, QEnterEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->enterEvent(event);
    } else {
        ((VirtualQWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseEnterEvent(QWidget* self, QEnterEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_EnterEvent_IsBase(true);
        vqwidget->enterEvent(event);
    } else {
        ((VirtualQWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnEnterEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_EnterEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_LeaveEvent(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->leaveEvent(event);
    } else {
        ((VirtualQWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseLeaveEvent(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_LeaveEvent_IsBase(true);
        vqwidget->leaveEvent(event);
    } else {
        ((VirtualQWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnLeaveEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_PaintEvent(QWidget* self, QPaintEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->paintEvent(event);
    } else {
        ((VirtualQWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBasePaintEvent(QWidget* self, QPaintEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_PaintEvent_IsBase(true);
        vqwidget->paintEvent(event);
    } else {
        ((VirtualQWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnPaintEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_PaintEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_MoveEvent(QWidget* self, QMoveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->moveEvent(event);
    } else {
        ((VirtualQWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseMoveEvent(QWidget* self, QMoveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MoveEvent_IsBase(true);
        vqwidget->moveEvent(event);
    } else {
        ((VirtualQWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMoveEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_MoveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_ResizeEvent(QWidget* self, QResizeEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->resizeEvent(event);
    } else {
        ((VirtualQWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseResizeEvent(QWidget* self, QResizeEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ResizeEvent_IsBase(true);
        vqwidget->resizeEvent(event);
    } else {
        ((VirtualQWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnResizeEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_CloseEvent(QWidget* self, QCloseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->closeEvent(event);
    } else {
        ((VirtualQWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseCloseEvent(QWidget* self, QCloseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_CloseEvent_IsBase(true);
        vqwidget->closeEvent(event);
    } else {
        ((VirtualQWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCloseEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_CloseEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_ContextMenuEvent(QWidget* self, QContextMenuEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->contextMenuEvent(event);
    } else {
        ((VirtualQWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseContextMenuEvent(QWidget* self, QContextMenuEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ContextMenuEvent_IsBase(true);
        vqwidget->contextMenuEvent(event);
    } else {
        ((VirtualQWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnContextMenuEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_TabletEvent(QWidget* self, QTabletEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->tabletEvent(event);
    } else {
        ((VirtualQWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseTabletEvent(QWidget* self, QTabletEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_TabletEvent_IsBase(true);
        vqwidget->tabletEvent(event);
    } else {
        ((VirtualQWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnTabletEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_TabletEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_ActionEvent(QWidget* self, QActionEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->actionEvent(event);
    } else {
        ((VirtualQWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseActionEvent(QWidget* self, QActionEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ActionEvent_IsBase(true);
        vqwidget->actionEvent(event);
    } else {
        ((VirtualQWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnActionEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ActionEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_DragEnterEvent(QWidget* self, QDragEnterEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->dragEnterEvent(event);
    } else {
        ((VirtualQWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseDragEnterEvent(QWidget* self, QDragEnterEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DragEnterEvent_IsBase(true);
        vqwidget->dragEnterEvent(event);
    } else {
        ((VirtualQWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragEnterEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_DragMoveEvent(QWidget* self, QDragMoveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->dragMoveEvent(event);
    } else {
        ((VirtualQWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseDragMoveEvent(QWidget* self, QDragMoveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DragMoveEvent_IsBase(true);
        vqwidget->dragMoveEvent(event);
    } else {
        ((VirtualQWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragMoveEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_DragLeaveEvent(QWidget* self, QDragLeaveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseDragLeaveEvent(QWidget* self, QDragLeaveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DragLeaveEvent_IsBase(true);
        vqwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragLeaveEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_DropEvent(QWidget* self, QDropEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->dropEvent(event);
    } else {
        ((VirtualQWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseDropEvent(QWidget* self, QDropEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DropEvent_IsBase(true);
        vqwidget->dropEvent(event);
    } else {
        ((VirtualQWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDropEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DropEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_ShowEvent(QWidget* self, QShowEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->showEvent(event);
    } else {
        ((VirtualQWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseShowEvent(QWidget* self, QShowEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ShowEvent_IsBase(true);
        vqwidget->showEvent(event);
    } else {
        ((VirtualQWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnShowEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ShowEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_HideEvent(QWidget* self, QHideEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->hideEvent(event);
    } else {
        ((VirtualQWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseHideEvent(QWidget* self, QHideEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_HideEvent_IsBase(true);
        vqwidget->hideEvent(event);
    } else {
        ((VirtualQWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHideEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_HideEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidget_NativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QWidget_QBaseNativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_NativeEvent_IsBase(true);
        return vqwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnNativeEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_NativeEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_ChangeEvent(QWidget* self, QEvent* param1) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->changeEvent(param1);
    } else {
        ((VirtualQWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QWidget_QBaseChangeEvent(QWidget* self, QEvent* param1) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ChangeEvent_IsBase(true);
        vqwidget->changeEvent(param1);
    } else {
        ((VirtualQWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnChangeEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidget_Metric(const QWidget* self, int param1) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QWidget_QBaseMetric(const QWidget* self, int param1) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Metric_IsBase(true);
        return vqwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMetric(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Metric_Callback(reinterpret_cast<VirtualQWidget::QWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_InitPainter(const QWidget* self, QPainter* painter) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->initPainter(painter);
    } else {
        ((VirtualQWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QWidget_QBaseInitPainter(const QWidget* self, QPainter* painter) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_InitPainter_IsBase(true);
        vqwidget->initPainter(painter);
    } else {
        ((VirtualQWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInitPainter(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_InitPainter_Callback(reinterpret_cast<VirtualQWidget::QWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QWidget_Redirected(const QWidget* self, QPoint* offset) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->redirected(offset);
    } else {
        return ((VirtualQWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QWidget_QBaseRedirected(const QWidget* self, QPoint* offset) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Redirected_IsBase(true);
        return vqwidget->redirected(offset);
    } else {
        return ((VirtualQWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnRedirected(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Redirected_Callback(reinterpret_cast<VirtualQWidget::QWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QWidget_SharedPainter(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->sharedPainter();
    } else {
        return ((VirtualQWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QWidget_QBaseSharedPainter(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_SharedPainter_IsBase(true);
        return vqwidget->sharedPainter();
    } else {
        return ((VirtualQWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSharedPainter(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_SharedPainter_Callback(reinterpret_cast<VirtualQWidget::QWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_InputMethodEvent(QWidget* self, QInputMethodEvent* param1) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QWidget_QBaseInputMethodEvent(QWidget* self, QInputMethodEvent* param1) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_InputMethodEvent_IsBase(true);
        vqwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInputMethodEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QWidget_InputMethodQuery(const QWidget* self, int param1) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return new QVariant(vqwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QWidget_QBaseInputMethodQuery(const QWidget* self, int param1) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInputMethodQuery(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQWidget::QWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidget_FocusNextPrevChild(QWidget* self, bool next) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QWidget_QBaseFocusNextPrevChild(QWidget* self, bool next) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusNextPrevChild_IsBase(true);
        return vqwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusNextPrevChild(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidget_EventFilter(QWidget* self, QObject* watched, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->eventFilter(watched, event);
    } else {
        return self->QWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWidget_QBaseEventFilter(QWidget* self, QObject* watched, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_EventFilter_IsBase(true);
        return vqwidget->eventFilter(watched, event);
    } else {
        return self->QWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnEventFilter(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_EventFilter_Callback(reinterpret_cast<VirtualQWidget::QWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_TimerEvent(QWidget* self, QTimerEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->timerEvent(event);
    } else {
        ((VirtualQWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseTimerEvent(QWidget* self, QTimerEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_TimerEvent_IsBase(true);
        vqwidget->timerEvent(event);
    } else {
        ((VirtualQWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnTimerEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_TimerEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_ChildEvent(QWidget* self, QChildEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->childEvent(event);
    } else {
        ((VirtualQWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseChildEvent(QWidget* self, QChildEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ChildEvent_IsBase(true);
        vqwidget->childEvent(event);
    } else {
        ((VirtualQWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnChildEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ChildEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_CustomEvent(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->customEvent(event);
    } else {
        ((VirtualQWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWidget_QBaseCustomEvent(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_CustomEvent_IsBase(true);
        vqwidget->customEvent(event);
    } else {
        ((VirtualQWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCustomEvent(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_CustomEvent_Callback(reinterpret_cast<VirtualQWidget::QWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_ConnectNotify(QWidget* self, const QMetaMethod* signal) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->connectNotify(*signal);
    } else {
        ((VirtualQWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWidget_QBaseConnectNotify(QWidget* self, const QMetaMethod* signal) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ConnectNotify_IsBase(true);
        vqwidget->connectNotify(*signal);
    } else {
        ((VirtualQWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnConnectNotify(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQWidget::QWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_DisconnectNotify(QWidget* self, const QMetaMethod* signal) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWidget_QBaseDisconnectNotify(QWidget* self, const QMetaMethod* signal) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DisconnectNotify_IsBase(true);
        vqwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDisconnectNotify(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQWidget::QWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_UpdateMicroFocus(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->updateMicroFocus();
    } else {
        ((VirtualQWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QWidget_QBaseUpdateMicroFocus(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_UpdateMicroFocus_IsBase(true);
        vqwidget->updateMicroFocus();
    } else {
        ((VirtualQWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnUpdateMicroFocus(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQWidget::QWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_Create(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->create();
    } else {
        ((VirtualQWidget*)self)->create();
    }
}

// Base class handler implementation
void QWidget_QBaseCreate(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Create_IsBase(true);
        vqwidget->create();
    } else {
        ((VirtualQWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCreate(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Create_Callback(reinterpret_cast<VirtualQWidget::QWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_Destroy(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->destroy();
    } else {
        ((VirtualQWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QWidget_QBaseDestroy(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Destroy_IsBase(true);
        vqwidget->destroy();
    } else {
        ((VirtualQWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDestroy(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Destroy_Callback(reinterpret_cast<VirtualQWidget::QWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidget_FocusNextChild(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->focusNextChild();
    } else {
        return ((VirtualQWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QWidget_QBaseFocusNextChild(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusNextChild_IsBase(true);
        return vqwidget->focusNextChild();
    } else {
        return ((VirtualQWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusNextChild(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidget_FocusPreviousChild(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->focusPreviousChild();
    } else {
        return ((VirtualQWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QWidget_QBaseFocusPreviousChild(QWidget* self) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusPreviousChild_IsBase(true);
        return vqwidget->focusPreviousChild();
    } else {
        return ((VirtualQWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusPreviousChild(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQWidget::QWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_UpdateMicroFocus1(QWidget* self, int query) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));
    } else {
        ((VirtualQWidget*)self)->updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));
    }
}

// Base class handler implementation
void QWidget_QBaseUpdateMicroFocus1(QWidget* self, int query) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_UpdateMicroFocus1_IsBase(true);
        vqwidget->updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));
    } else {
        ((VirtualQWidget*)self)->updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnUpdateMicroFocus1(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_UpdateMicroFocus1_Callback(reinterpret_cast<VirtualQWidget::QWidget_UpdateMicroFocus1_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_Create1(QWidget* self, unsigned long long param1) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->create(static_cast<unsigned long long>(param1));
    } else {
        ((VirtualQWidget*)self)->create(static_cast<unsigned long long>(param1));
    }
}

// Base class handler implementation
void QWidget_QBaseCreate1(QWidget* self, unsigned long long param1) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Create1_IsBase(true);
        vqwidget->create(static_cast<unsigned long long>(param1));
    } else {
        ((VirtualQWidget*)self)->create(static_cast<unsigned long long>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCreate1(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Create1_Callback(reinterpret_cast<VirtualQWidget::QWidget_Create1_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_Create2(QWidget* self, unsigned long long param1, bool initializeWindow) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->create(static_cast<unsigned long long>(param1), initializeWindow);
    } else {
        ((VirtualQWidget*)self)->create(static_cast<unsigned long long>(param1), initializeWindow);
    }
}

// Base class handler implementation
void QWidget_QBaseCreate2(QWidget* self, unsigned long long param1, bool initializeWindow) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Create2_IsBase(true);
        vqwidget->create(static_cast<unsigned long long>(param1), initializeWindow);
    } else {
        ((VirtualQWidget*)self)->create(static_cast<unsigned long long>(param1), initializeWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCreate2(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Create2_Callback(reinterpret_cast<VirtualQWidget::QWidget_Create2_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_Create3(QWidget* self, unsigned long long param1, bool initializeWindow, bool destroyOldWindow) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->create(static_cast<unsigned long long>(param1), initializeWindow, destroyOldWindow);
    } else {
        ((VirtualQWidget*)self)->create(static_cast<unsigned long long>(param1), initializeWindow, destroyOldWindow);
    }
}

// Base class handler implementation
void QWidget_QBaseCreate3(QWidget* self, unsigned long long param1, bool initializeWindow, bool destroyOldWindow) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Create3_IsBase(true);
        vqwidget->create(static_cast<unsigned long long>(param1), initializeWindow, destroyOldWindow);
    } else {
        ((VirtualQWidget*)self)->create(static_cast<unsigned long long>(param1), initializeWindow, destroyOldWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCreate3(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Create3_Callback(reinterpret_cast<VirtualQWidget::QWidget_Create3_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_Destroy1(QWidget* self, bool destroyWindow) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->destroy(destroyWindow);
    } else {
        ((VirtualQWidget*)self)->destroy(destroyWindow);
    }
}

// Base class handler implementation
void QWidget_QBaseDestroy1(QWidget* self, bool destroyWindow) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Destroy1_IsBase(true);
        vqwidget->destroy(destroyWindow);
    } else {
        ((VirtualQWidget*)self)->destroy(destroyWindow);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDestroy1(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Destroy1_Callback(reinterpret_cast<VirtualQWidget::QWidget_Destroy1_Callback>(slot));
    }
}

// Derived class handler implementation
void QWidget_Destroy2(QWidget* self, bool destroyWindow, bool destroySubWindows) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->destroy(destroyWindow, destroySubWindows);
    } else {
        ((VirtualQWidget*)self)->destroy(destroyWindow, destroySubWindows);
    }
}

// Base class handler implementation
void QWidget_QBaseDestroy2(QWidget* self, bool destroyWindow, bool destroySubWindows) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Destroy2_IsBase(true);
        vqwidget->destroy(destroyWindow, destroySubWindows);
    } else {
        ((VirtualQWidget*)self)->destroy(destroyWindow, destroySubWindows);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDestroy2(QWidget* self, intptr_t slot) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Destroy2_Callback(reinterpret_cast<VirtualQWidget::QWidget_Destroy2_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWidget_Sender(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->sender();
    } else {
        return ((VirtualQWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWidget_QBaseSender(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Sender_IsBase(true);
        return vqwidget->sender();
    } else {
        return ((VirtualQWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSender(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Sender_Callback(reinterpret_cast<VirtualQWidget::QWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidget_SenderSignalIndex(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->senderSignalIndex();
    } else {
        return ((VirtualQWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWidget_QBaseSenderSignalIndex(const QWidget* self) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_SenderSignalIndex_IsBase(true);
        return vqwidget->senderSignalIndex();
    } else {
        return ((VirtualQWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSenderSignalIndex(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWidget::QWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWidget_Receivers(const QWidget* self, const char* signal) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->receivers(signal);
    } else {
        return ((VirtualQWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWidget_QBaseReceivers(const QWidget* self, const char* signal) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Receivers_IsBase(true);
        return vqwidget->receivers(signal);
    } else {
        return ((VirtualQWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnReceivers(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_Receivers_Callback(reinterpret_cast<VirtualQWidget::QWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWidget_IsSignalConnected(const QWidget* self, const QMetaMethod* signal) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWidget_QBaseIsSignalConnected(const QWidget* self, const QMetaMethod* signal) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_IsSignalConnected_IsBase(true);
        return vqwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnIsSignalConnected(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQWidget::QWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QWidget_GetDecodedMetricF(const QWidget* self, int metricA, int metricB) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        return vqwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QWidget_QBaseGetDecodedMetricF(const QWidget* self, int metricA, int metricB) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_GetDecodedMetricF_IsBase(true);
        return vqwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnGetDecodedMetricF(const QWidget* self, intptr_t slot) {
    auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self));
    if (vqwidget && vqwidget->isVirtualQWidget) {
        vqwidget->setQWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQWidget::QWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QWidget_Delete(QWidget* self) {
    delete self;
}
