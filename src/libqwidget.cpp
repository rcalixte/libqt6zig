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
#include <QStyle>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qwidget.h>
#include "libqwidget.h"
#include "libqwidget.hxx"

QWidget* QWidget_new(QWidget* parent) {
    return new VirtualQWidget(parent);
}

QWidget* QWidget_new2() {
    return new VirtualQWidget();
}

QWidget* QWidget_new3(QWidget* parent, int f) {
    return new VirtualQWidget(parent, static_cast<Qt::WindowFlags>(f));
}

QPaintDevice* QWidget_AsQPaintDevice(const QWidget* self) {
    return const_cast<QWidget*>(self);
}

QWidget* QWidget_FromQPaintDevice(const QPaintDevice* _qpaintdevice) {
    return dynamic_cast<QWidget*>(const_cast<QPaintDevice*>(_qpaintdevice));
}

QMetaObject* QWidget_MetaObject(const QWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWidget_Metacast(QWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWidget_Metacall(QWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWidget_Tr(const char* s) {
    auto _ret = QWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QWidget_DevType(const QWidget* self) {
    return self->devType();
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
    auto _ret = self->styleSheet();
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
    auto _ret = self->windowTitle();
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
    auto _ret = self->windowIconText();
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
    auto _ret = self->windowRole();
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
    auto _ret = self->windowFilePath();
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
    auto _ret = self->toolTip();
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
    auto _ret = self->statusTip();
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
    auto _ret = self->whatsThis();
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
    auto _ret = self->accessibleName();
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
    auto _ret = self->accessibleDescription();
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

void QWidget_SetVisible(QWidget* self, bool visible) {
    self->setVisible(visible);
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
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

QSize* QWidget_SizeHint(const QWidget* self) {
    return new QSize(self->sizeHint());
}

QSize* QWidget_MinimumSizeHint(const QWidget* self) {
    return new QSize(self->minimumSizeHint());
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

int QWidget_HeightForWidth(const QWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

bool QWidget_HasHeightForWidth(const QWidget* self) {
    return self->hasHeightForWidth();
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
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
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
    return QWidget::find(static_cast<WId>(param1));
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

QPaintEngine* QWidget_PaintEngine(const QWidget* self) {
    return self->paintEngine();
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
    void (*slotFunc)(QWidget*, const char*) = reinterpret_cast<void (*)(QWidget*, const char*)>(slot);
    QWidget::connect(self,
                     static_cast<void (QWidget::*)(const QString&)>(&QWidget::windowTitleChanged),
                     [self, slotFunc](const QString& title) {
                         const auto title_ret = title;
                         // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                         QByteArray title_b = title_ret.toUtf8();
                         auto title_str_len = title_b.length();
                         const char* title_str = static_cast<const char*>(malloc(title_str_len + 1));
                         memcpy((void*)title_str, title_b.data(), title_str_len);
                         ((char*)title_str)[title_str_len] = '\0';
                         const char* sigval1 = title_str;
                         slotFunc(self, sigval1);
                         libqt_free(title_str);
                     });
}

void QWidget_WindowIconChanged(QWidget* self, const QIcon* icon) {
    self->windowIconChanged(*icon);
}

void QWidget_Connect_WindowIconChanged(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, QIcon*) = reinterpret_cast<void (*)(QWidget*, QIcon*)>(slot);
    QWidget::connect(self,
                     static_cast<void (QWidget::*)(const QIcon&)>(&QWidget::windowIconChanged),
                     [self, slotFunc](const QIcon& icon) {
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
    void (*slotFunc)(QWidget*, const char*) = reinterpret_cast<void (*)(QWidget*, const char*)>(slot);
    QWidget::connect(self,
                     static_cast<void (QWidget::*)(const QString&)>(&QWidget::windowIconTextChanged),
                     [self, slotFunc](const QString& iconText) {
                         const auto iconText_ret = iconText;
                         // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                         QByteArray iconText_b = iconText_ret.toUtf8();
                         auto iconText_str_len = iconText_b.length();
                         const char* iconText_str = static_cast<const char*>(malloc(iconText_str_len + 1));
                         memcpy((void*)iconText_str, iconText_b.data(), iconText_str_len);
                         ((char*)iconText_str)[iconText_str_len] = '\0';
                         const char* sigval1 = iconText_str;
                         slotFunc(self, sigval1);
                         libqt_free(iconText_str);
                     });
}

void QWidget_CustomContextMenuRequested(QWidget* self, const QPoint* pos) {
    self->customContextMenuRequested(*pos);
}

void QWidget_Connect_CustomContextMenuRequested(QWidget* self, intptr_t slot) {
    void (*slotFunc)(QWidget*, QPoint*) = reinterpret_cast<void (*)(QWidget*, QPoint*)>(slot);
    QWidget::connect(self,
                     static_cast<void (QWidget::*)(const QPoint&)>(&QWidget::customContextMenuRequested),
                     [self, slotFunc](const QPoint& pos) {
                         const QPoint& pos_ret = pos;
                         // Cast returned reference into pointer
                         QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
                         slotFunc(self, sigval1);
                     });
}

bool QWidget_Event(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        return vqwidget->event(event);
    }
    qFatal("Error: Protected method QWidget::event called without a directly constructed type");
}

void QWidget_MousePressEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->mousePressEvent(event);
    }
}

void QWidget_MouseReleaseEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->mouseReleaseEvent(event);
    }
}

void QWidget_MouseDoubleClickEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->mouseDoubleClickEvent(event);
    }
}

void QWidget_MouseMoveEvent(QWidget* self, QMouseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->mouseMoveEvent(event);
    }
}

void QWidget_WheelEvent(QWidget* self, QWheelEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->wheelEvent(event);
    }
}

void QWidget_KeyPressEvent(QWidget* self, QKeyEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->keyPressEvent(event);
    }
}

void QWidget_KeyReleaseEvent(QWidget* self, QKeyEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->keyReleaseEvent(event);
    }
}

void QWidget_FocusInEvent(QWidget* self, QFocusEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->focusInEvent(event);
    }
}

void QWidget_FocusOutEvent(QWidget* self, QFocusEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->focusOutEvent(event);
    }
}

void QWidget_EnterEvent(QWidget* self, QEnterEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->enterEvent(event);
    }
}

void QWidget_LeaveEvent(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->leaveEvent(event);
    }
}

void QWidget_PaintEvent(QWidget* self, QPaintEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->paintEvent(event);
    }
}

void QWidget_MoveEvent(QWidget* self, QMoveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->moveEvent(event);
    }
}

void QWidget_ResizeEvent(QWidget* self, QResizeEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->resizeEvent(event);
    }
}

void QWidget_CloseEvent(QWidget* self, QCloseEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->closeEvent(event);
    }
}

void QWidget_ContextMenuEvent(QWidget* self, QContextMenuEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->contextMenuEvent(event);
    }
}

void QWidget_TabletEvent(QWidget* self, QTabletEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->tabletEvent(event);
    }
}

void QWidget_ActionEvent(QWidget* self, QActionEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->actionEvent(event);
    }
}

void QWidget_DragEnterEvent(QWidget* self, QDragEnterEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->dragEnterEvent(event);
    }
}

void QWidget_DragMoveEvent(QWidget* self, QDragMoveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->dragMoveEvent(event);
    }
}

void QWidget_DragLeaveEvent(QWidget* self, QDragLeaveEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->dragLeaveEvent(event);
    }
}

void QWidget_DropEvent(QWidget* self, QDropEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->dropEvent(event);
    }
}

void QWidget_ShowEvent(QWidget* self, QShowEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->showEvent(event);
    }
}

void QWidget_HideEvent(QWidget* self, QHideEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->hideEvent(event);
    }
}

bool QWidget_NativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        return vqwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
    qFatal("Error: Protected method QWidget::nativeEvent called without a directly constructed type");
}

void QWidget_ChangeEvent(QWidget* self, QEvent* param1) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->changeEvent(param1);
    }
}

int QWidget_Metric(const QWidget* self, int param1) {
    auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
    if (vqwidget) {
        return vqwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
    qFatal("Error: Protected method QWidget::metric called without a directly constructed type");
}

void QWidget_InitPainter(const QWidget* self, QPainter* painter) {
    auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->initPainter(painter);
    }
}

QPaintDevice* QWidget_Redirected(const QWidget* self, QPoint* offset) {
    auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
    if (vqwidget) {
        return vqwidget->redirected(offset);
    }
    qFatal("Error: Protected method QWidget::redirected called without a directly constructed type");
}

QPainter* QWidget_SharedPainter(const QWidget* self) {
    auto* vqwidget = dynamic_cast<const VirtualQWidget*>(self);
    if (vqwidget) {
        return vqwidget->sharedPainter();
    }
    qFatal("Error: Protected method QWidget::sharedPainter called without a directly constructed type");
}

void QWidget_InputMethodEvent(QWidget* self, QInputMethodEvent* param1) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->inputMethodEvent(param1);
    }
}

QVariant* QWidget_InputMethodQuery(const QWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

int QWidget_InputMethodHints(const QWidget* self) {
    return static_cast<int>(self->inputMethodHints());
}

void QWidget_SetInputMethodHints(QWidget* self, int hints) {
    self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

bool QWidget_FocusNextPrevChild(QWidget* self, bool next) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        return vqwidget->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QWidget::focusNextPrevChild called without a directly constructed type");
}

libqt_string QWidget_Tr2(const char* s, const char* c) {
    auto _ret = QWidget::tr(s, c);
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
    auto _ret = QWidget::tr(s, c, static_cast<int>(n));
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

// Base class handler implementation
QMetaObject* QWidget_SuperMetaObject(const QWidget* self) {
    return (QMetaObject*)self->QWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMetaObject(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_metaobject_callback = reinterpret_cast<VirtualQWidget::QWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWidget_SuperMetacast(QWidget* self, const char* param1) {
    return self->QWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMetacast(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_metacast_callback = reinterpret_cast<VirtualQWidget::QWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWidget_SuperMetacall(QWidget* self, int param1, int param2, void** param3) {
    return self->QWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMetacall(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_metacall_callback = reinterpret_cast<VirtualQWidget::QWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
int QWidget_SuperDevType(const QWidget* self) {
    return self->QWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDevType(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_devtype_callback = reinterpret_cast<VirtualQWidget::QWidget_DevType_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperSetVisible(QWidget* self, bool visible) {
    self->QWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSetVisible(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_setvisible_callback = reinterpret_cast<VirtualQWidget::QWidget_SetVisible_Callback>(slot);
}

// Base class handler implementation
QSize* QWidget_SuperSizeHint(const QWidget* self) {
    return new QSize(self->QWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSizeHint(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_sizehint_callback = reinterpret_cast<VirtualQWidget::QWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QWidget_SuperMinimumSizeHint(const QWidget* self) {
    return new QSize(self->QWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMinimumSizeHint(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_minimumsizehint_callback = reinterpret_cast<VirtualQWidget::QWidget_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
int QWidget_SuperHeightForWidth(const QWidget* self, int param1) {
    return self->QWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHeightForWidth(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_heightforwidth_callback = reinterpret_cast<VirtualQWidget::QWidget_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
bool QWidget_SuperHasHeightForWidth(const QWidget* self) {
    return self->QWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHasHeightForWidth(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQWidget::QWidget_HasHeightForWidth_Callback>(slot);
}

// Base class handler implementation
QPaintEngine* QWidget_SuperPaintEngine(const QWidget* self) {
    return self->QWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnPaintEngine(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_paintengine_callback = reinterpret_cast<VirtualQWidget::QWidget_PaintEngine_Callback>(slot);
}

// Base class handler implementation
bool QWidget_SuperEvent(QWidget* self, QEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        return vqwidget->QWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_event_callback = reinterpret_cast<VirtualQWidget::QWidget_Event_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperMousePressEvent(QWidget* self, QMouseEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMousePressEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_mousepressevent_callback = reinterpret_cast<VirtualQWidget::QWidget_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperMouseReleaseEvent(QWidget* self, QMouseEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseReleaseEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQWidget::QWidget_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperMouseDoubleClickEvent(QWidget* self, QMouseEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseDoubleClickEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQWidget::QWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperMouseMoveEvent(QWidget* self, QMouseEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMouseMoveEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_mousemoveevent_callback = reinterpret_cast<VirtualQWidget::QWidget_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperWheelEvent(QWidget* self, QWheelEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnWheelEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_wheelevent_callback = reinterpret_cast<VirtualQWidget::QWidget_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperKeyPressEvent(QWidget* self, QKeyEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnKeyPressEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_keypressevent_callback = reinterpret_cast<VirtualQWidget::QWidget_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperKeyReleaseEvent(QWidget* self, QKeyEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnKeyReleaseEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQWidget::QWidget_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperFocusInEvent(QWidget* self, QFocusEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusInEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_focusinevent_callback = reinterpret_cast<VirtualQWidget::QWidget_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperFocusOutEvent(QWidget* self, QFocusEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusOutEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_focusoutevent_callback = reinterpret_cast<VirtualQWidget::QWidget_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperEnterEvent(QWidget* self, QEnterEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnEnterEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_enterevent_callback = reinterpret_cast<VirtualQWidget::QWidget_EnterEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperLeaveEvent(QWidget* self, QEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnLeaveEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_leaveevent_callback = reinterpret_cast<VirtualQWidget::QWidget_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperPaintEvent(QWidget* self, QPaintEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnPaintEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_paintevent_callback = reinterpret_cast<VirtualQWidget::QWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperMoveEvent(QWidget* self, QMoveEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMoveEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_moveevent_callback = reinterpret_cast<VirtualQWidget::QWidget_MoveEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperResizeEvent(QWidget* self, QResizeEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnResizeEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_resizeevent_callback = reinterpret_cast<VirtualQWidget::QWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperCloseEvent(QWidget* self, QCloseEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCloseEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_closeevent_callback = reinterpret_cast<VirtualQWidget::QWidget_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperContextMenuEvent(QWidget* self, QContextMenuEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnContextMenuEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_contextmenuevent_callback = reinterpret_cast<VirtualQWidget::QWidget_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperTabletEvent(QWidget* self, QTabletEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnTabletEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_tabletevent_callback = reinterpret_cast<VirtualQWidget::QWidget_TabletEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperActionEvent(QWidget* self, QActionEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnActionEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_actionevent_callback = reinterpret_cast<VirtualQWidget::QWidget_ActionEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperDragEnterEvent(QWidget* self, QDragEnterEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragEnterEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_dragenterevent_callback = reinterpret_cast<VirtualQWidget::QWidget_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperDragMoveEvent(QWidget* self, QDragMoveEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragMoveEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_dragmoveevent_callback = reinterpret_cast<VirtualQWidget::QWidget_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperDragLeaveEvent(QWidget* self, QDragLeaveEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDragLeaveEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_dragleaveevent_callback = reinterpret_cast<VirtualQWidget::QWidget_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperDropEvent(QWidget* self, QDropEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDropEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_dropevent_callback = reinterpret_cast<VirtualQWidget::QWidget_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperShowEvent(QWidget* self, QShowEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnShowEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_showevent_callback = reinterpret_cast<VirtualQWidget::QWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperHideEvent(QWidget* self, QHideEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnHideEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_hideevent_callback = reinterpret_cast<VirtualQWidget::QWidget_HideEvent_Callback>(slot);
}

// Base class handler implementation
bool QWidget_SuperNativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        return vqwidget->QWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnNativeEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_nativeevent_callback = reinterpret_cast<VirtualQWidget::QWidget_NativeEvent_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperChangeEvent(QWidget* self, QEvent* param1) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnChangeEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_changeevent_callback = reinterpret_cast<VirtualQWidget::QWidget_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
int QWidget_SuperMetric(const QWidget* self, int param1) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        return vqwidget->QWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnMetric(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_metric_callback = reinterpret_cast<VirtualQWidget::QWidget_Metric_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperInitPainter(const QWidget* self, QPainter* painter) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        vqwidget->QWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInitPainter(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_initpainter_callback = reinterpret_cast<VirtualQWidget::QWidget_InitPainter_Callback>(slot);
}

// Base class handler implementation
QPaintDevice* QWidget_SuperRedirected(const QWidget* self, QPoint* offset) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        return vqwidget->QWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnRedirected(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_redirected_callback = reinterpret_cast<VirtualQWidget::QWidget_Redirected_Callback>(slot);
}

// Base class handler implementation
QPainter* QWidget_SuperSharedPainter(const QWidget* self) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        return vqwidget->QWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnSharedPainter(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_sharedpainter_callback = reinterpret_cast<VirtualQWidget::QWidget_SharedPainter_Callback>(slot);
}

// Base class handler implementation
void QWidget_SuperInputMethodEvent(QWidget* self, QInputMethodEvent* param1) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInputMethodEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_inputmethodevent_callback = reinterpret_cast<VirtualQWidget::QWidget_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
QVariant* QWidget_SuperInputMethodQuery(const QWidget* self, int param1) {
    return new QVariant(self->QWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnInputMethodQuery(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self)))
        vqwidget->qwidget_inputmethodquery_callback = reinterpret_cast<VirtualQWidget::QWidget_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
bool QWidget_SuperFocusNextPrevChild(QWidget* self, bool next) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        return vqwidget->QWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnFocusNextPrevChild(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQWidget::QWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QWidget_EventFilter(QWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWidget_SuperEventFilter(QWidget* self, QObject* watched, QEvent* event) {
    return self->QWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnEventFilter(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_eventfilter_callback = reinterpret_cast<VirtualQWidget::QWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWidget_TimerEvent(QWidget* self, QTimerEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidget_SuperTimerEvent(QWidget* self, QTimerEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnTimerEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_timerevent_callback = reinterpret_cast<VirtualQWidget::QWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWidget_ChildEvent(QWidget* self, QChildEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidget_SuperChildEvent(QWidget* self, QChildEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnChildEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_childevent_callback = reinterpret_cast<VirtualQWidget::QWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWidget_CustomEvent(QWidget* self, QEvent* event) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidget_SuperCustomEvent(QWidget* self, QEvent* event) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnCustomEvent(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_customevent_callback = reinterpret_cast<VirtualQWidget::QWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWidget_ConnectNotify(QWidget* self, const QMetaMethod* signal) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidget_SuperConnectNotify(QWidget* self, const QMetaMethod* signal) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnConnectNotify(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_connectnotify_callback = reinterpret_cast<VirtualQWidget::QWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWidget_DisconnectNotify(QWidget* self, const QMetaMethod* signal) {
    auto* vqwidget = dynamic_cast<VirtualQWidget*>(self);
    if (vqwidget) {
        vqwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWidget_SuperDisconnectNotify(QWidget* self, const QMetaMethod* signal) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->QWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWidget_OnDisconnectNotify(QWidget* self, intptr_t slot) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self))
        vqwidget->qwidget_disconnectnotify_callback = reinterpret_cast<VirtualQWidget::QWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QWidget_UpdateMicroFocus(QWidget* self) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QWidget_Create(QWidget* self) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::create();
    } else
        qFatal("Error: Protected method QWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QWidget_Destroy(QWidget* self) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::destroy();
    } else
        qFatal("Error: Protected method QWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWidget_FocusNextChild(QWidget* self) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        return vqwidget->VirtualQWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWidget_FocusPreviousChild(QWidget* self) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        return vqwidget->VirtualQWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
void QWidget_UpdateMicroFocus1(QWidget* self, int query) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::updateMicroFocus(static_cast<Qt::InputMethodQuery>(query));
    } else
        qFatal("Error: Protected method QWidget::updateMicroFocus1 called without a directly constructed type");
}

// Derived class protected handler implementation
void QWidget_Create1(QWidget* self, unsigned long long param1) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::create(static_cast<WId>(param1));
    } else
        qFatal("Error: Protected method QWidget::create1 called without a directly constructed type");
}

// Derived class protected handler implementation
void QWidget_Create2(QWidget* self, unsigned long long param1, bool initializeWindow) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::create(static_cast<WId>(param1), initializeWindow);
    } else
        qFatal("Error: Protected method QWidget::create2 called without a directly constructed type");
}

// Derived class protected handler implementation
void QWidget_Create3(QWidget* self, unsigned long long param1, bool initializeWindow, bool destroyOldWindow) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::create(static_cast<WId>(param1), initializeWindow, destroyOldWindow);
    } else
        qFatal("Error: Protected method QWidget::create3 called without a directly constructed type");
}

// Derived class protected handler implementation
void QWidget_Destroy1(QWidget* self, bool destroyWindow) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::destroy(destroyWindow);
    } else
        qFatal("Error: Protected method QWidget::destroy1 called without a directly constructed type");
}

// Derived class protected handler implementation
void QWidget_Destroy2(QWidget* self, bool destroyWindow, bool destroySubWindows) {
    if (auto* vqwidget = dynamic_cast<VirtualQWidget*>(self)) {
        vqwidget->VirtualQWidget::destroy(destroyWindow, destroySubWindows);
    } else
        qFatal("Error: Protected method QWidget::destroy2 called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QWidget_Sender(const QWidget* self) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        return vqwidget->VirtualQWidget::sender();
    } else
        qFatal("Error: Protected method QWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWidget_SenderSignalIndex(const QWidget* self) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        return vqwidget->VirtualQWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWidget_Receivers(const QWidget* self, const char* signal) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        return vqwidget->VirtualQWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWidget_IsSignalConnected(const QWidget* self, const QMetaMethod* signal) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        return vqwidget->VirtualQWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QWidget_GetDecodedMetricF(const QWidget* self, int metricA, int metricB) {
    if (auto* vqwidget = const_cast<VirtualQWidget*>(dynamic_cast<const VirtualQWidget*>(self))) {
        return vqwidget->VirtualQWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QWidget::getDecodedMetricF called without a directly constructed type");
}

void QWidget_Delete(QWidget* self) {
    delete self;
}
