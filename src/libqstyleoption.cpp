#include <QBrush>
#include <QColor>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QLocale>
#include <QModelIndex>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleHintReturn>
#include <QStyleHintReturnMask>
#include <QStyleHintReturnVariant>
#include <QStyleOption>
#include <QStyleOptionButton>
#include <QStyleOptionComboBox>
#include <QStyleOptionComplex>
#include <QStyleOptionDockWidget>
#include <QStyleOptionFocusRect>
#include <QStyleOptionFrame>
#include <QStyleOptionGraphicsItem>
#include <QStyleOptionGroupBox>
#include <QStyleOptionHeader>
#include <QStyleOptionHeaderV2>
#include <QStyleOptionMenuItem>
#include <QStyleOptionProgressBar>
#include <QStyleOptionRubberBand>
#include <QStyleOptionSizeGrip>
#include <QStyleOptionSlider>
#include <QStyleOptionSpinBox>
#include <QStyleOptionTab>
#include <QStyleOptionTabBarBase>
#include <QStyleOptionTabWidgetFrame>
#include <QStyleOptionTitleBar>
#include <QStyleOptionToolBar>
#include <QStyleOptionToolBox>
#include <QStyleOptionToolButton>
#include <QStyleOptionViewItem>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qstyleoption.h>
#include "libqstyleoption.h"
#include "libqstyleoption.hxx"

QStyleOption* QStyleOption_new() {
    return new QStyleOption();
}

QStyleOption* QStyleOption_new2(const QStyleOption* other) {
    return new QStyleOption(*other);
}

QStyleOption* QStyleOption_new3(int version) {
    return new QStyleOption(static_cast<int>(version));
}

QStyleOption* QStyleOption_new4(int version, int typeVal) {
    return new QStyleOption(static_cast<int>(version), static_cast<int>(typeVal));
}

int QStyleOption_Version(const QStyleOption* self) {
    return self->version;
}

void QStyleOption_SetVersion(QStyleOption* self, int version) {
    self->version = static_cast<int>(version);
}

int QStyleOption_Type(const QStyleOption* self) {
    return self->type;
}

void QStyleOption_SetType(QStyleOption* self, int type) {
    self->type = static_cast<int>(type);
}

int QStyleOption_State(const QStyleOption* self) {
    return static_cast<int>(self->state);
}

void QStyleOption_SetState(QStyleOption* self, int state) {
    self->state = static_cast<QFlags<QStyle::StateFlag>>(state);
}

int QStyleOption_Direction(const QStyleOption* self) {
    return static_cast<int>(self->direction);
}

void QStyleOption_SetDirection(QStyleOption* self, int direction) {
    self->direction = static_cast<Qt::LayoutDirection>(direction);
}

QRect* QStyleOption_Rect(const QStyleOption* self) {
    return new QRect(self->rect);
}

void QStyleOption_SetRect(QStyleOption* self, QRect* rect) {
    self->rect = *rect;
}

QFontMetrics* QStyleOption_FontMetrics(const QStyleOption* self) {
    return new QFontMetrics(self->fontMetrics);
}

void QStyleOption_SetFontMetrics(QStyleOption* self, QFontMetrics* fontMetrics) {
    self->fontMetrics = *fontMetrics;
}

QPalette* QStyleOption_Palette(const QStyleOption* self) {
    return new QPalette(self->palette);
}

void QStyleOption_SetPalette(QStyleOption* self, QPalette* palette) {
    self->palette = *palette;
}

QObject* QStyleOption_StyleObject(const QStyleOption* self) {
    return self->styleObject;
}

void QStyleOption_SetStyleObject(QStyleOption* self, QObject* styleObject) {
    self->styleObject = styleObject;
}

void QStyleOption_InitFrom(QStyleOption* self, const QWidget* w) {
    self->initFrom(w);
}

void QStyleOption_OperatorAssign(QStyleOption* self, const QStyleOption* other) {
    self->operator=(*other);
}

void QStyleOption_Delete(QStyleOption* self) {
    delete self;
}

QStyleOptionFocusRect* QStyleOptionFocusRect_new() {
    return new QStyleOptionFocusRect();
}

QStyleOptionFocusRect* QStyleOptionFocusRect_new2(const QStyleOptionFocusRect* other) {
    return new QStyleOptionFocusRect(*other);
}

QColor* QStyleOptionFocusRect_BackgroundColor(const QStyleOptionFocusRect* self) {
    return new QColor(self->backgroundColor);
}

void QStyleOptionFocusRect_SetBackgroundColor(QStyleOptionFocusRect* self, QColor* backgroundColor) {
    self->backgroundColor = *backgroundColor;
}

void QStyleOptionFocusRect_Delete(QStyleOptionFocusRect* self) {
    delete self;
}

QStyleOptionFrame* QStyleOptionFrame_new() {
    return new QStyleOptionFrame();
}

QStyleOptionFrame* QStyleOptionFrame_new2(const QStyleOptionFrame* other) {
    return new QStyleOptionFrame(*other);
}

int QStyleOptionFrame_LineWidth(const QStyleOptionFrame* self) {
    return self->lineWidth;
}

void QStyleOptionFrame_SetLineWidth(QStyleOptionFrame* self, int lineWidth) {
    self->lineWidth = static_cast<int>(lineWidth);
}

int QStyleOptionFrame_MidLineWidth(const QStyleOptionFrame* self) {
    return self->midLineWidth;
}

void QStyleOptionFrame_SetMidLineWidth(QStyleOptionFrame* self, int midLineWidth) {
    self->midLineWidth = static_cast<int>(midLineWidth);
}

int QStyleOptionFrame_Features(const QStyleOptionFrame* self) {
    return static_cast<int>(self->features);
}

void QStyleOptionFrame_SetFeatures(QStyleOptionFrame* self, int features) {
    self->features = static_cast<QFlags<QStyleOptionFrame::FrameFeature>>(features);
}

int QStyleOptionFrame_FrameShape(const QStyleOptionFrame* self) {
    return static_cast<int>(self->frameShape);
}

void QStyleOptionFrame_SetFrameShape(QStyleOptionFrame* self, int frameShape) {
    self->frameShape = static_cast<QFrame::Shape>(frameShape);
}

void QStyleOptionFrame_Delete(QStyleOptionFrame* self) {
    delete self;
}

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new() {
    return new QStyleOptionTabWidgetFrame();
}

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new2(const QStyleOptionTabWidgetFrame* other) {
    return new QStyleOptionTabWidgetFrame(*other);
}

int QStyleOptionTabWidgetFrame_LineWidth(const QStyleOptionTabWidgetFrame* self) {
    return self->lineWidth;
}

void QStyleOptionTabWidgetFrame_SetLineWidth(QStyleOptionTabWidgetFrame* self, int lineWidth) {
    self->lineWidth = static_cast<int>(lineWidth);
}

int QStyleOptionTabWidgetFrame_MidLineWidth(const QStyleOptionTabWidgetFrame* self) {
    return self->midLineWidth;
}

void QStyleOptionTabWidgetFrame_SetMidLineWidth(QStyleOptionTabWidgetFrame* self, int midLineWidth) {
    self->midLineWidth = static_cast<int>(midLineWidth);
}

int QStyleOptionTabWidgetFrame_Shape(const QStyleOptionTabWidgetFrame* self) {
    return static_cast<int>(self->shape);
}

void QStyleOptionTabWidgetFrame_SetShape(QStyleOptionTabWidgetFrame* self, int shape) {
    self->shape = static_cast<QTabBar::Shape>(shape);
}

QSize* QStyleOptionTabWidgetFrame_TabBarSize(const QStyleOptionTabWidgetFrame* self) {
    return new QSize(self->tabBarSize);
}

void QStyleOptionTabWidgetFrame_SetTabBarSize(QStyleOptionTabWidgetFrame* self, QSize* tabBarSize) {
    self->tabBarSize = *tabBarSize;
}

QSize* QStyleOptionTabWidgetFrame_RightCornerWidgetSize(const QStyleOptionTabWidgetFrame* self) {
    return new QSize(self->rightCornerWidgetSize);
}

void QStyleOptionTabWidgetFrame_SetRightCornerWidgetSize(QStyleOptionTabWidgetFrame* self, QSize* rightCornerWidgetSize) {
    self->rightCornerWidgetSize = *rightCornerWidgetSize;
}

QSize* QStyleOptionTabWidgetFrame_LeftCornerWidgetSize(const QStyleOptionTabWidgetFrame* self) {
    return new QSize(self->leftCornerWidgetSize);
}

void QStyleOptionTabWidgetFrame_SetLeftCornerWidgetSize(QStyleOptionTabWidgetFrame* self, QSize* leftCornerWidgetSize) {
    self->leftCornerWidgetSize = *leftCornerWidgetSize;
}

QRect* QStyleOptionTabWidgetFrame_TabBarRect(const QStyleOptionTabWidgetFrame* self) {
    return new QRect(self->tabBarRect);
}

void QStyleOptionTabWidgetFrame_SetTabBarRect(QStyleOptionTabWidgetFrame* self, QRect* tabBarRect) {
    self->tabBarRect = *tabBarRect;
}

QRect* QStyleOptionTabWidgetFrame_SelectedTabRect(const QStyleOptionTabWidgetFrame* self) {
    return new QRect(self->selectedTabRect);
}

void QStyleOptionTabWidgetFrame_SetSelectedTabRect(QStyleOptionTabWidgetFrame* self, QRect* selectedTabRect) {
    self->selectedTabRect = *selectedTabRect;
}

void QStyleOptionTabWidgetFrame_Delete(QStyleOptionTabWidgetFrame* self) {
    delete self;
}

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new() {
    return new QStyleOptionTabBarBase();
}

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new2(const QStyleOptionTabBarBase* other) {
    return new QStyleOptionTabBarBase(*other);
}

int QStyleOptionTabBarBase_Shape(const QStyleOptionTabBarBase* self) {
    return static_cast<int>(self->shape);
}

void QStyleOptionTabBarBase_SetShape(QStyleOptionTabBarBase* self, int shape) {
    self->shape = static_cast<QTabBar::Shape>(shape);
}

QRect* QStyleOptionTabBarBase_TabBarRect(const QStyleOptionTabBarBase* self) {
    return new QRect(self->tabBarRect);
}

void QStyleOptionTabBarBase_SetTabBarRect(QStyleOptionTabBarBase* self, QRect* tabBarRect) {
    self->tabBarRect = *tabBarRect;
}

QRect* QStyleOptionTabBarBase_SelectedTabRect(const QStyleOptionTabBarBase* self) {
    return new QRect(self->selectedTabRect);
}

void QStyleOptionTabBarBase_SetSelectedTabRect(QStyleOptionTabBarBase* self, QRect* selectedTabRect) {
    self->selectedTabRect = *selectedTabRect;
}

bool QStyleOptionTabBarBase_DocumentMode(const QStyleOptionTabBarBase* self) {
    return self->documentMode;
}

void QStyleOptionTabBarBase_SetDocumentMode(QStyleOptionTabBarBase* self, bool documentMode) {
    self->documentMode = documentMode;
}

void QStyleOptionTabBarBase_Delete(QStyleOptionTabBarBase* self) {
    delete self;
}

QStyleOptionHeader* QStyleOptionHeader_new() {
    return new QStyleOptionHeader();
}

QStyleOptionHeader* QStyleOptionHeader_new2(const QStyleOptionHeader* other) {
    return new QStyleOptionHeader(*other);
}

int QStyleOptionHeader_Section(const QStyleOptionHeader* self) {
    return self->section;
}

void QStyleOptionHeader_SetSection(QStyleOptionHeader* self, int section) {
    self->section = static_cast<int>(section);
}

libqt_string QStyleOptionHeader_Text(const QStyleOptionHeader* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionHeader_SetText(QStyleOptionHeader* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

int QStyleOptionHeader_TextAlignment(const QStyleOptionHeader* self) {
    return static_cast<int>(self->textAlignment);
}

void QStyleOptionHeader_SetTextAlignment(QStyleOptionHeader* self, int textAlignment) {
    self->textAlignment = static_cast<QFlags<Qt::AlignmentFlag>>(textAlignment);
}

QIcon* QStyleOptionHeader_Icon(const QStyleOptionHeader* self) {
    return new QIcon(self->icon);
}

void QStyleOptionHeader_SetIcon(QStyleOptionHeader* self, QIcon* icon) {
    self->icon = *icon;
}

int QStyleOptionHeader_IconAlignment(const QStyleOptionHeader* self) {
    return static_cast<int>(self->iconAlignment);
}

void QStyleOptionHeader_SetIconAlignment(QStyleOptionHeader* self, int iconAlignment) {
    self->iconAlignment = static_cast<QFlags<Qt::AlignmentFlag>>(iconAlignment);
}

int QStyleOptionHeader_Position(const QStyleOptionHeader* self) {
    return static_cast<int>(self->position);
}

void QStyleOptionHeader_SetPosition(QStyleOptionHeader* self, int position) {
    self->position = static_cast<QStyleOptionHeader::SectionPosition>(position);
}

int QStyleOptionHeader_SelectedPosition(const QStyleOptionHeader* self) {
    return static_cast<int>(self->selectedPosition);
}

void QStyleOptionHeader_SetSelectedPosition(QStyleOptionHeader* self, int selectedPosition) {
    self->selectedPosition = static_cast<QStyleOptionHeader::SelectedPosition>(selectedPosition);
}

int QStyleOptionHeader_SortIndicator(const QStyleOptionHeader* self) {
    return static_cast<int>(self->sortIndicator);
}

void QStyleOptionHeader_SetSortIndicator(QStyleOptionHeader* self, int sortIndicator) {
    self->sortIndicator = static_cast<QStyleOptionHeader::SortIndicator>(sortIndicator);
}

int QStyleOptionHeader_Orientation(const QStyleOptionHeader* self) {
    return static_cast<int>(self->orientation);
}

void QStyleOptionHeader_SetOrientation(QStyleOptionHeader* self, int orientation) {
    self->orientation = static_cast<Qt::Orientation>(orientation);
}

void QStyleOptionHeader_Delete(QStyleOptionHeader* self) {
    delete self;
}

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new() {
    return new QStyleOptionHeaderV2();
}

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new2(const QStyleOptionHeaderV2* other) {
    return new QStyleOptionHeaderV2(*other);
}

int QStyleOptionHeaderV2_TextElideMode(const QStyleOptionHeaderV2* self) {
    return static_cast<int>(self->textElideMode);
}

void QStyleOptionHeaderV2_SetTextElideMode(QStyleOptionHeaderV2* self, int textElideMode) {
    self->textElideMode = static_cast<Qt::TextElideMode>(textElideMode);
}

bool QStyleOptionHeaderV2_IsSectionDragTarget(const QStyleOptionHeaderV2* self) {
    return self->isSectionDragTarget;
}

void QStyleOptionHeaderV2_SetIsSectionDragTarget(QStyleOptionHeaderV2* self, bool isSectionDragTarget) {
    self->isSectionDragTarget = isSectionDragTarget;
}

int QStyleOptionHeaderV2_Unused(const QStyleOptionHeaderV2* self) {
    return self->unused;
}

void QStyleOptionHeaderV2_SetUnused(QStyleOptionHeaderV2* self, int unused) {
    self->unused = static_cast<int>(unused);
}

void QStyleOptionHeaderV2_Delete(QStyleOptionHeaderV2* self) {
    delete self;
}

QStyleOptionButton* QStyleOptionButton_new() {
    return new QStyleOptionButton();
}

QStyleOptionButton* QStyleOptionButton_new2(const QStyleOptionButton* other) {
    return new QStyleOptionButton(*other);
}

int QStyleOptionButton_Features(const QStyleOptionButton* self) {
    return static_cast<int>(self->features);
}

void QStyleOptionButton_SetFeatures(QStyleOptionButton* self, int features) {
    self->features = static_cast<QFlags<QStyleOptionButton::ButtonFeature>>(features);
}

libqt_string QStyleOptionButton_Text(const QStyleOptionButton* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionButton_SetText(QStyleOptionButton* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

QIcon* QStyleOptionButton_Icon(const QStyleOptionButton* self) {
    return new QIcon(self->icon);
}

void QStyleOptionButton_SetIcon(QStyleOptionButton* self, QIcon* icon) {
    self->icon = *icon;
}

QSize* QStyleOptionButton_IconSize(const QStyleOptionButton* self) {
    return new QSize(self->iconSize);
}

void QStyleOptionButton_SetIconSize(QStyleOptionButton* self, QSize* iconSize) {
    self->iconSize = *iconSize;
}

void QStyleOptionButton_Delete(QStyleOptionButton* self) {
    delete self;
}

QStyleOptionTab* QStyleOptionTab_new() {
    return new QStyleOptionTab();
}

QStyleOptionTab* QStyleOptionTab_new2(const QStyleOptionTab* other) {
    return new QStyleOptionTab(*other);
}

int QStyleOptionTab_Shape(const QStyleOptionTab* self) {
    return static_cast<int>(self->shape);
}

void QStyleOptionTab_SetShape(QStyleOptionTab* self, int shape) {
    self->shape = static_cast<QTabBar::Shape>(shape);
}

libqt_string QStyleOptionTab_Text(const QStyleOptionTab* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionTab_SetText(QStyleOptionTab* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

QIcon* QStyleOptionTab_Icon(const QStyleOptionTab* self) {
    return new QIcon(self->icon);
}

void QStyleOptionTab_SetIcon(QStyleOptionTab* self, QIcon* icon) {
    self->icon = *icon;
}

int QStyleOptionTab_Row(const QStyleOptionTab* self) {
    return self->row;
}

void QStyleOptionTab_SetRow(QStyleOptionTab* self, int row) {
    self->row = static_cast<int>(row);
}

int QStyleOptionTab_Position(const QStyleOptionTab* self) {
    return static_cast<int>(self->position);
}

void QStyleOptionTab_SetPosition(QStyleOptionTab* self, int position) {
    self->position = static_cast<QStyleOptionTab::TabPosition>(position);
}

int QStyleOptionTab_SelectedPosition(const QStyleOptionTab* self) {
    return static_cast<int>(self->selectedPosition);
}

void QStyleOptionTab_SetSelectedPosition(QStyleOptionTab* self, int selectedPosition) {
    self->selectedPosition = static_cast<QStyleOptionTab::SelectedPosition>(selectedPosition);
}

int QStyleOptionTab_CornerWidgets(const QStyleOptionTab* self) {
    return static_cast<int>(self->cornerWidgets);
}

void QStyleOptionTab_SetCornerWidgets(QStyleOptionTab* self, int cornerWidgets) {
    self->cornerWidgets = static_cast<QFlags<QStyleOptionTab::CornerWidget>>(cornerWidgets);
}

QSize* QStyleOptionTab_IconSize(const QStyleOptionTab* self) {
    return new QSize(self->iconSize);
}

void QStyleOptionTab_SetIconSize(QStyleOptionTab* self, QSize* iconSize) {
    self->iconSize = *iconSize;
}

bool QStyleOptionTab_DocumentMode(const QStyleOptionTab* self) {
    return self->documentMode;
}

void QStyleOptionTab_SetDocumentMode(QStyleOptionTab* self, bool documentMode) {
    self->documentMode = documentMode;
}

QSize* QStyleOptionTab_LeftButtonSize(const QStyleOptionTab* self) {
    return new QSize(self->leftButtonSize);
}

void QStyleOptionTab_SetLeftButtonSize(QStyleOptionTab* self, QSize* leftButtonSize) {
    self->leftButtonSize = *leftButtonSize;
}

QSize* QStyleOptionTab_RightButtonSize(const QStyleOptionTab* self) {
    return new QSize(self->rightButtonSize);
}

void QStyleOptionTab_SetRightButtonSize(QStyleOptionTab* self, QSize* rightButtonSize) {
    self->rightButtonSize = *rightButtonSize;
}

int QStyleOptionTab_Features(const QStyleOptionTab* self) {
    return static_cast<int>(self->features);
}

void QStyleOptionTab_SetFeatures(QStyleOptionTab* self, int features) {
    self->features = static_cast<QFlags<QStyleOptionTab::TabFeature>>(features);
}

int QStyleOptionTab_TabIndex(const QStyleOptionTab* self) {
    return self->tabIndex;
}

void QStyleOptionTab_SetTabIndex(QStyleOptionTab* self, int tabIndex) {
    self->tabIndex = static_cast<int>(tabIndex);
}

void QStyleOptionTab_Delete(QStyleOptionTab* self) {
    delete self;
}

QStyleOptionToolBar* QStyleOptionToolBar_new() {
    return new QStyleOptionToolBar();
}

QStyleOptionToolBar* QStyleOptionToolBar_new2(const QStyleOptionToolBar* other) {
    return new QStyleOptionToolBar(*other);
}

int QStyleOptionToolBar_PositionOfLine(const QStyleOptionToolBar* self) {
    return static_cast<int>(self->positionOfLine);
}

void QStyleOptionToolBar_SetPositionOfLine(QStyleOptionToolBar* self, int positionOfLine) {
    self->positionOfLine = static_cast<QStyleOptionToolBar::ToolBarPosition>(positionOfLine);
}

int QStyleOptionToolBar_PositionWithinLine(const QStyleOptionToolBar* self) {
    return static_cast<int>(self->positionWithinLine);
}

void QStyleOptionToolBar_SetPositionWithinLine(QStyleOptionToolBar* self, int positionWithinLine) {
    self->positionWithinLine = static_cast<QStyleOptionToolBar::ToolBarPosition>(positionWithinLine);
}

int QStyleOptionToolBar_ToolBarArea(const QStyleOptionToolBar* self) {
    return static_cast<int>(self->toolBarArea);
}

void QStyleOptionToolBar_SetToolBarArea(QStyleOptionToolBar* self, int toolBarArea) {
    self->toolBarArea = static_cast<Qt::ToolBarArea>(toolBarArea);
}

int QStyleOptionToolBar_Features(const QStyleOptionToolBar* self) {
    return static_cast<int>(self->features);
}

void QStyleOptionToolBar_SetFeatures(QStyleOptionToolBar* self, int features) {
    self->features = static_cast<QFlags<QStyleOptionToolBar::ToolBarFeature>>(features);
}

int QStyleOptionToolBar_LineWidth(const QStyleOptionToolBar* self) {
    return self->lineWidth;
}

void QStyleOptionToolBar_SetLineWidth(QStyleOptionToolBar* self, int lineWidth) {
    self->lineWidth = static_cast<int>(lineWidth);
}

int QStyleOptionToolBar_MidLineWidth(const QStyleOptionToolBar* self) {
    return self->midLineWidth;
}

void QStyleOptionToolBar_SetMidLineWidth(QStyleOptionToolBar* self, int midLineWidth) {
    self->midLineWidth = static_cast<int>(midLineWidth);
}

void QStyleOptionToolBar_Delete(QStyleOptionToolBar* self) {
    delete self;
}

QStyleOptionProgressBar* QStyleOptionProgressBar_new() {
    return new QStyleOptionProgressBar();
}

QStyleOptionProgressBar* QStyleOptionProgressBar_new2(const QStyleOptionProgressBar* other) {
    return new QStyleOptionProgressBar(*other);
}

int QStyleOptionProgressBar_Minimum(const QStyleOptionProgressBar* self) {
    return self->minimum;
}

void QStyleOptionProgressBar_SetMinimum(QStyleOptionProgressBar* self, int minimum) {
    self->minimum = static_cast<int>(minimum);
}

int QStyleOptionProgressBar_Maximum(const QStyleOptionProgressBar* self) {
    return self->maximum;
}

void QStyleOptionProgressBar_SetMaximum(QStyleOptionProgressBar* self, int maximum) {
    self->maximum = static_cast<int>(maximum);
}

int QStyleOptionProgressBar_Progress(const QStyleOptionProgressBar* self) {
    return self->progress;
}

void QStyleOptionProgressBar_SetProgress(QStyleOptionProgressBar* self, int progress) {
    self->progress = static_cast<int>(progress);
}

libqt_string QStyleOptionProgressBar_Text(const QStyleOptionProgressBar* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionProgressBar_SetText(QStyleOptionProgressBar* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

int QStyleOptionProgressBar_TextAlignment(const QStyleOptionProgressBar* self) {
    return static_cast<int>(self->textAlignment);
}

void QStyleOptionProgressBar_SetTextAlignment(QStyleOptionProgressBar* self, int textAlignment) {
    self->textAlignment = static_cast<QFlags<Qt::AlignmentFlag>>(textAlignment);
}

bool QStyleOptionProgressBar_TextVisible(const QStyleOptionProgressBar* self) {
    return self->textVisible;
}

void QStyleOptionProgressBar_SetTextVisible(QStyleOptionProgressBar* self, bool textVisible) {
    self->textVisible = textVisible;
}

bool QStyleOptionProgressBar_InvertedAppearance(const QStyleOptionProgressBar* self) {
    return self->invertedAppearance;
}

void QStyleOptionProgressBar_SetInvertedAppearance(QStyleOptionProgressBar* self, bool invertedAppearance) {
    self->invertedAppearance = invertedAppearance;
}

bool QStyleOptionProgressBar_BottomToTop(const QStyleOptionProgressBar* self) {
    return self->bottomToTop;
}

void QStyleOptionProgressBar_SetBottomToTop(QStyleOptionProgressBar* self, bool bottomToTop) {
    self->bottomToTop = bottomToTop;
}

void QStyleOptionProgressBar_Delete(QStyleOptionProgressBar* self) {
    delete self;
}

QStyleOptionMenuItem* QStyleOptionMenuItem_new() {
    return new QStyleOptionMenuItem();
}

QStyleOptionMenuItem* QStyleOptionMenuItem_new2(const QStyleOptionMenuItem* other) {
    return new QStyleOptionMenuItem(*other);
}

int QStyleOptionMenuItem_MenuItemType(const QStyleOptionMenuItem* self) {
    return static_cast<int>(self->menuItemType);
}

void QStyleOptionMenuItem_SetMenuItemType(QStyleOptionMenuItem* self, int menuItemType) {
    self->menuItemType = static_cast<QStyleOptionMenuItem::MenuItemType>(menuItemType);
}

int QStyleOptionMenuItem_CheckType(const QStyleOptionMenuItem* self) {
    return static_cast<int>(self->checkType);
}

void QStyleOptionMenuItem_SetCheckType(QStyleOptionMenuItem* self, int checkType) {
    self->checkType = static_cast<QStyleOptionMenuItem::CheckType>(checkType);
}

bool QStyleOptionMenuItem_Checked(const QStyleOptionMenuItem* self) {
    return self->checked;
}

void QStyleOptionMenuItem_SetChecked(QStyleOptionMenuItem* self, bool checked) {
    self->checked = checked;
}

bool QStyleOptionMenuItem_MenuHasCheckableItems(const QStyleOptionMenuItem* self) {
    return self->menuHasCheckableItems;
}

void QStyleOptionMenuItem_SetMenuHasCheckableItems(QStyleOptionMenuItem* self, bool menuHasCheckableItems) {
    self->menuHasCheckableItems = menuHasCheckableItems;
}

QRect* QStyleOptionMenuItem_MenuRect(const QStyleOptionMenuItem* self) {
    return new QRect(self->menuRect);
}

void QStyleOptionMenuItem_SetMenuRect(QStyleOptionMenuItem* self, QRect* menuRect) {
    self->menuRect = *menuRect;
}

libqt_string QStyleOptionMenuItem_Text(const QStyleOptionMenuItem* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionMenuItem_SetText(QStyleOptionMenuItem* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

QIcon* QStyleOptionMenuItem_Icon(const QStyleOptionMenuItem* self) {
    return new QIcon(self->icon);
}

void QStyleOptionMenuItem_SetIcon(QStyleOptionMenuItem* self, QIcon* icon) {
    self->icon = *icon;
}

int QStyleOptionMenuItem_MaxIconWidth(const QStyleOptionMenuItem* self) {
    return self->maxIconWidth;
}

void QStyleOptionMenuItem_SetMaxIconWidth(QStyleOptionMenuItem* self, int maxIconWidth) {
    self->maxIconWidth = static_cast<int>(maxIconWidth);
}

int QStyleOptionMenuItem_ReservedShortcutWidth(const QStyleOptionMenuItem* self) {
    return self->reservedShortcutWidth;
}

void QStyleOptionMenuItem_SetReservedShortcutWidth(QStyleOptionMenuItem* self, int reservedShortcutWidth) {
    self->reservedShortcutWidth = static_cast<int>(reservedShortcutWidth);
}

QFont* QStyleOptionMenuItem_Font(const QStyleOptionMenuItem* self) {
    return new QFont(self->font);
}

void QStyleOptionMenuItem_SetFont(QStyleOptionMenuItem* self, QFont* font) {
    self->font = *font;
}

void QStyleOptionMenuItem_Delete(QStyleOptionMenuItem* self) {
    delete self;
}

QStyleOptionDockWidget* QStyleOptionDockWidget_new() {
    return new QStyleOptionDockWidget();
}

QStyleOptionDockWidget* QStyleOptionDockWidget_new2(const QStyleOptionDockWidget* other) {
    return new QStyleOptionDockWidget(*other);
}

libqt_string QStyleOptionDockWidget_Title(const QStyleOptionDockWidget* self) {
    QString title_ret = self->title;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray title_b = title_ret.toUtf8();
    libqt_string title_str;
    title_str.len = title_b.length();
    title_str.data = static_cast<const char*>(malloc(title_str.len + 1));
    memcpy((void*)title_str.data, title_b.data(), title_str.len);
    ((char*)title_str.data)[title_str.len] = '\0';
    return title_str;
}

void QStyleOptionDockWidget_SetTitle(QStyleOptionDockWidget* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->title = title_QString;
}

bool QStyleOptionDockWidget_Closable(const QStyleOptionDockWidget* self) {
    return self->closable;
}

void QStyleOptionDockWidget_SetClosable(QStyleOptionDockWidget* self, bool closable) {
    self->closable = closable;
}

bool QStyleOptionDockWidget_Movable(const QStyleOptionDockWidget* self) {
    return self->movable;
}

void QStyleOptionDockWidget_SetMovable(QStyleOptionDockWidget* self, bool movable) {
    self->movable = movable;
}

bool QStyleOptionDockWidget_Floatable(const QStyleOptionDockWidget* self) {
    return self->floatable;
}

void QStyleOptionDockWidget_SetFloatable(QStyleOptionDockWidget* self, bool floatable) {
    self->floatable = floatable;
}

bool QStyleOptionDockWidget_VerticalTitleBar(const QStyleOptionDockWidget* self) {
    return self->verticalTitleBar;
}

void QStyleOptionDockWidget_SetVerticalTitleBar(QStyleOptionDockWidget* self, bool verticalTitleBar) {
    self->verticalTitleBar = verticalTitleBar;
}

void QStyleOptionDockWidget_Delete(QStyleOptionDockWidget* self) {
    delete self;
}

QStyleOptionViewItem* QStyleOptionViewItem_new() {
    return new QStyleOptionViewItem();
}

QStyleOptionViewItem* QStyleOptionViewItem_new2(const QStyleOptionViewItem* other) {
    return new QStyleOptionViewItem(*other);
}

int QStyleOptionViewItem_DisplayAlignment(const QStyleOptionViewItem* self) {
    return static_cast<int>(self->displayAlignment);
}

void QStyleOptionViewItem_SetDisplayAlignment(QStyleOptionViewItem* self, int displayAlignment) {
    self->displayAlignment = static_cast<QFlags<Qt::AlignmentFlag>>(displayAlignment);
}

int QStyleOptionViewItem_DecorationAlignment(const QStyleOptionViewItem* self) {
    return static_cast<int>(self->decorationAlignment);
}

void QStyleOptionViewItem_SetDecorationAlignment(QStyleOptionViewItem* self, int decorationAlignment) {
    self->decorationAlignment = static_cast<QFlags<Qt::AlignmentFlag>>(decorationAlignment);
}

int QStyleOptionViewItem_TextElideMode(const QStyleOptionViewItem* self) {
    return static_cast<int>(self->textElideMode);
}

void QStyleOptionViewItem_SetTextElideMode(QStyleOptionViewItem* self, int textElideMode) {
    self->textElideMode = static_cast<Qt::TextElideMode>(textElideMode);
}

int QStyleOptionViewItem_DecorationPosition(const QStyleOptionViewItem* self) {
    return static_cast<int>(self->decorationPosition);
}

void QStyleOptionViewItem_SetDecorationPosition(QStyleOptionViewItem* self, int decorationPosition) {
    self->decorationPosition = static_cast<QStyleOptionViewItem::Position>(decorationPosition);
}

QSize* QStyleOptionViewItem_DecorationSize(const QStyleOptionViewItem* self) {
    return new QSize(self->decorationSize);
}

void QStyleOptionViewItem_SetDecorationSize(QStyleOptionViewItem* self, QSize* decorationSize) {
    self->decorationSize = *decorationSize;
}

QFont* QStyleOptionViewItem_Font(const QStyleOptionViewItem* self) {
    return new QFont(self->font);
}

void QStyleOptionViewItem_SetFont(QStyleOptionViewItem* self, QFont* font) {
    self->font = *font;
}

bool QStyleOptionViewItem_ShowDecorationSelected(const QStyleOptionViewItem* self) {
    return self->showDecorationSelected;
}

void QStyleOptionViewItem_SetShowDecorationSelected(QStyleOptionViewItem* self, bool showDecorationSelected) {
    self->showDecorationSelected = showDecorationSelected;
}

int QStyleOptionViewItem_Features(const QStyleOptionViewItem* self) {
    return static_cast<int>(self->features);
}

void QStyleOptionViewItem_SetFeatures(QStyleOptionViewItem* self, int features) {
    self->features = static_cast<QFlags<QStyleOptionViewItem::ViewItemFeature>>(features);
}

QLocale* QStyleOptionViewItem_Locale(const QStyleOptionViewItem* self) {
    return new QLocale(self->locale);
}

void QStyleOptionViewItem_SetLocale(QStyleOptionViewItem* self, QLocale* locale) {
    self->locale = *locale;
}

QWidget* QStyleOptionViewItem_Widget(const QStyleOptionViewItem* self) {
    return (QWidget*)self->widget;
}

void QStyleOptionViewItem_SetWidget(QStyleOptionViewItem* self, const QWidget* widget) {
    self->widget = widget;
}

QModelIndex* QStyleOptionViewItem_Index(const QStyleOptionViewItem* self) {
    return new QModelIndex(self->index);
}

void QStyleOptionViewItem_SetIndex(QStyleOptionViewItem* self, QModelIndex* index) {
    self->index = *index;
}

int QStyleOptionViewItem_CheckState(const QStyleOptionViewItem* self) {
    return static_cast<int>(self->checkState);
}

void QStyleOptionViewItem_SetCheckState(QStyleOptionViewItem* self, int checkState) {
    self->checkState = static_cast<Qt::CheckState>(checkState);
}

QIcon* QStyleOptionViewItem_Icon(const QStyleOptionViewItem* self) {
    return new QIcon(self->icon);
}

void QStyleOptionViewItem_SetIcon(QStyleOptionViewItem* self, QIcon* icon) {
    self->icon = *icon;
}

libqt_string QStyleOptionViewItem_Text(const QStyleOptionViewItem* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionViewItem_SetText(QStyleOptionViewItem* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

int QStyleOptionViewItem_ViewItemPosition(const QStyleOptionViewItem* self) {
    return static_cast<int>(self->viewItemPosition);
}

void QStyleOptionViewItem_SetViewItemPosition(QStyleOptionViewItem* self, int viewItemPosition) {
    self->viewItemPosition = static_cast<QStyleOptionViewItem::ViewItemPosition>(viewItemPosition);
}

QBrush* QStyleOptionViewItem_BackgroundBrush(const QStyleOptionViewItem* self) {
    return new QBrush(self->backgroundBrush);
}

void QStyleOptionViewItem_SetBackgroundBrush(QStyleOptionViewItem* self, QBrush* backgroundBrush) {
    self->backgroundBrush = *backgroundBrush;
}

void QStyleOptionViewItem_Delete(QStyleOptionViewItem* self) {
    delete self;
}

QStyleOptionToolBox* QStyleOptionToolBox_new() {
    return new QStyleOptionToolBox();
}

QStyleOptionToolBox* QStyleOptionToolBox_new2(const QStyleOptionToolBox* other) {
    return new QStyleOptionToolBox(*other);
}

libqt_string QStyleOptionToolBox_Text(const QStyleOptionToolBox* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionToolBox_SetText(QStyleOptionToolBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

QIcon* QStyleOptionToolBox_Icon(const QStyleOptionToolBox* self) {
    return new QIcon(self->icon);
}

void QStyleOptionToolBox_SetIcon(QStyleOptionToolBox* self, QIcon* icon) {
    self->icon = *icon;
}

int QStyleOptionToolBox_Position(const QStyleOptionToolBox* self) {
    return static_cast<int>(self->position);
}

void QStyleOptionToolBox_SetPosition(QStyleOptionToolBox* self, int position) {
    self->position = static_cast<QStyleOptionToolBox::TabPosition>(position);
}

int QStyleOptionToolBox_SelectedPosition(const QStyleOptionToolBox* self) {
    return static_cast<int>(self->selectedPosition);
}

void QStyleOptionToolBox_SetSelectedPosition(QStyleOptionToolBox* self, int selectedPosition) {
    self->selectedPosition = static_cast<QStyleOptionToolBox::SelectedPosition>(selectedPosition);
}

void QStyleOptionToolBox_Delete(QStyleOptionToolBox* self) {
    delete self;
}

QStyleOptionRubberBand* QStyleOptionRubberBand_new() {
    return new QStyleOptionRubberBand();
}

QStyleOptionRubberBand* QStyleOptionRubberBand_new2(const QStyleOptionRubberBand* other) {
    return new QStyleOptionRubberBand(*other);
}

int QStyleOptionRubberBand_Shape(const QStyleOptionRubberBand* self) {
    return static_cast<int>(self->shape);
}

void QStyleOptionRubberBand_SetShape(QStyleOptionRubberBand* self, int shape) {
    self->shape = static_cast<QRubberBand::Shape>(shape);
}

bool QStyleOptionRubberBand_Opaque(const QStyleOptionRubberBand* self) {
    return self->opaque;
}

void QStyleOptionRubberBand_SetOpaque(QStyleOptionRubberBand* self, bool opaque) {
    self->opaque = opaque;
}

void QStyleOptionRubberBand_Delete(QStyleOptionRubberBand* self) {
    delete self;
}

QStyleOptionComplex* QStyleOptionComplex_new() {
    return new QStyleOptionComplex();
}

QStyleOptionComplex* QStyleOptionComplex_new2(const QStyleOptionComplex* other) {
    return new QStyleOptionComplex(*other);
}

QStyleOptionComplex* QStyleOptionComplex_new3(int version) {
    return new QStyleOptionComplex(static_cast<int>(version));
}

QStyleOptionComplex* QStyleOptionComplex_new4(int version, int typeVal) {
    return new QStyleOptionComplex(static_cast<int>(version), static_cast<int>(typeVal));
}

int QStyleOptionComplex_SubControls(const QStyleOptionComplex* self) {
    return static_cast<int>(self->subControls);
}

void QStyleOptionComplex_SetSubControls(QStyleOptionComplex* self, int subControls) {
    self->subControls = static_cast<QFlags<QStyle::SubControl>>(subControls);
}

int QStyleOptionComplex_ActiveSubControls(const QStyleOptionComplex* self) {
    return static_cast<int>(self->activeSubControls);
}

void QStyleOptionComplex_SetActiveSubControls(QStyleOptionComplex* self, int activeSubControls) {
    self->activeSubControls = static_cast<QFlags<QStyle::SubControl>>(activeSubControls);
}

void QStyleOptionComplex_Delete(QStyleOptionComplex* self) {
    delete self;
}

QStyleOptionSlider* QStyleOptionSlider_new() {
    return new QStyleOptionSlider();
}

QStyleOptionSlider* QStyleOptionSlider_new2(const QStyleOptionSlider* other) {
    return new QStyleOptionSlider(*other);
}

int QStyleOptionSlider_Orientation(const QStyleOptionSlider* self) {
    return static_cast<int>(self->orientation);
}

void QStyleOptionSlider_SetOrientation(QStyleOptionSlider* self, int orientation) {
    self->orientation = static_cast<Qt::Orientation>(orientation);
}

int QStyleOptionSlider_Minimum(const QStyleOptionSlider* self) {
    return self->minimum;
}

void QStyleOptionSlider_SetMinimum(QStyleOptionSlider* self, int minimum) {
    self->minimum = static_cast<int>(minimum);
}

int QStyleOptionSlider_Maximum(const QStyleOptionSlider* self) {
    return self->maximum;
}

void QStyleOptionSlider_SetMaximum(QStyleOptionSlider* self, int maximum) {
    self->maximum = static_cast<int>(maximum);
}

int QStyleOptionSlider_TickPosition(const QStyleOptionSlider* self) {
    return static_cast<int>(self->tickPosition);
}

void QStyleOptionSlider_SetTickPosition(QStyleOptionSlider* self, int tickPosition) {
    self->tickPosition = static_cast<QSlider::TickPosition>(tickPosition);
}

int QStyleOptionSlider_TickInterval(const QStyleOptionSlider* self) {
    return self->tickInterval;
}

void QStyleOptionSlider_SetTickInterval(QStyleOptionSlider* self, int tickInterval) {
    self->tickInterval = static_cast<int>(tickInterval);
}

bool QStyleOptionSlider_UpsideDown(const QStyleOptionSlider* self) {
    return self->upsideDown;
}

void QStyleOptionSlider_SetUpsideDown(QStyleOptionSlider* self, bool upsideDown) {
    self->upsideDown = upsideDown;
}

int QStyleOptionSlider_SliderPosition(const QStyleOptionSlider* self) {
    return self->sliderPosition;
}

void QStyleOptionSlider_SetSliderPosition(QStyleOptionSlider* self, int sliderPosition) {
    self->sliderPosition = static_cast<int>(sliderPosition);
}

int QStyleOptionSlider_SliderValue(const QStyleOptionSlider* self) {
    return self->sliderValue;
}

void QStyleOptionSlider_SetSliderValue(QStyleOptionSlider* self, int sliderValue) {
    self->sliderValue = static_cast<int>(sliderValue);
}

int QStyleOptionSlider_SingleStep(const QStyleOptionSlider* self) {
    return self->singleStep;
}

void QStyleOptionSlider_SetSingleStep(QStyleOptionSlider* self, int singleStep) {
    self->singleStep = static_cast<int>(singleStep);
}

int QStyleOptionSlider_PageStep(const QStyleOptionSlider* self) {
    return self->pageStep;
}

void QStyleOptionSlider_SetPageStep(QStyleOptionSlider* self, int pageStep) {
    self->pageStep = static_cast<int>(pageStep);
}

double QStyleOptionSlider_NotchTarget(const QStyleOptionSlider* self) {
    return self->notchTarget;
}

void QStyleOptionSlider_SetNotchTarget(QStyleOptionSlider* self, double notchTarget) {
    self->notchTarget = static_cast<double>(notchTarget);
}

bool QStyleOptionSlider_DialWrapping(const QStyleOptionSlider* self) {
    return self->dialWrapping;
}

void QStyleOptionSlider_SetDialWrapping(QStyleOptionSlider* self, bool dialWrapping) {
    self->dialWrapping = dialWrapping;
}

int QStyleOptionSlider_KeyboardModifiers(const QStyleOptionSlider* self) {
    return static_cast<int>(self->keyboardModifiers);
}

void QStyleOptionSlider_SetKeyboardModifiers(QStyleOptionSlider* self, int keyboardModifiers) {
    self->keyboardModifiers = static_cast<QFlags<Qt::KeyboardModifier>>(keyboardModifiers);
}

void QStyleOptionSlider_Delete(QStyleOptionSlider* self) {
    delete self;
}

QStyleOptionSpinBox* QStyleOptionSpinBox_new() {
    return new QStyleOptionSpinBox();
}

QStyleOptionSpinBox* QStyleOptionSpinBox_new2(const QStyleOptionSpinBox* other) {
    return new QStyleOptionSpinBox(*other);
}

int QStyleOptionSpinBox_ButtonSymbols(const QStyleOptionSpinBox* self) {
    return static_cast<int>(self->buttonSymbols);
}

void QStyleOptionSpinBox_SetButtonSymbols(QStyleOptionSpinBox* self, int buttonSymbols) {
    self->buttonSymbols = static_cast<QAbstractSpinBox::ButtonSymbols>(buttonSymbols);
}

int QStyleOptionSpinBox_StepEnabled(const QStyleOptionSpinBox* self) {
    return static_cast<int>(self->stepEnabled);
}

void QStyleOptionSpinBox_SetStepEnabled(QStyleOptionSpinBox* self, int stepEnabled) {
    self->stepEnabled = static_cast<QFlags<QAbstractSpinBox::StepEnabledFlag>>(stepEnabled);
}

bool QStyleOptionSpinBox_Frame(const QStyleOptionSpinBox* self) {
    return self->frame;
}

void QStyleOptionSpinBox_SetFrame(QStyleOptionSpinBox* self, bool frame) {
    self->frame = frame;
}

void QStyleOptionSpinBox_Delete(QStyleOptionSpinBox* self) {
    delete self;
}

QStyleOptionToolButton* QStyleOptionToolButton_new() {
    return new QStyleOptionToolButton();
}

QStyleOptionToolButton* QStyleOptionToolButton_new2(const QStyleOptionToolButton* other) {
    return new QStyleOptionToolButton(*other);
}

int QStyleOptionToolButton_Features(const QStyleOptionToolButton* self) {
    return static_cast<int>(self->features);
}

void QStyleOptionToolButton_SetFeatures(QStyleOptionToolButton* self, int features) {
    self->features = static_cast<QFlags<QStyleOptionToolButton::ToolButtonFeature>>(features);
}

QIcon* QStyleOptionToolButton_Icon(const QStyleOptionToolButton* self) {
    return new QIcon(self->icon);
}

void QStyleOptionToolButton_SetIcon(QStyleOptionToolButton* self, QIcon* icon) {
    self->icon = *icon;
}

QSize* QStyleOptionToolButton_IconSize(const QStyleOptionToolButton* self) {
    return new QSize(self->iconSize);
}

void QStyleOptionToolButton_SetIconSize(QStyleOptionToolButton* self, QSize* iconSize) {
    self->iconSize = *iconSize;
}

libqt_string QStyleOptionToolButton_Text(const QStyleOptionToolButton* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionToolButton_SetText(QStyleOptionToolButton* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

int QStyleOptionToolButton_ArrowType(const QStyleOptionToolButton* self) {
    return static_cast<int>(self->arrowType);
}

void QStyleOptionToolButton_SetArrowType(QStyleOptionToolButton* self, int arrowType) {
    self->arrowType = static_cast<Qt::ArrowType>(arrowType);
}

int QStyleOptionToolButton_ToolButtonStyle(const QStyleOptionToolButton* self) {
    return static_cast<int>(self->toolButtonStyle);
}

void QStyleOptionToolButton_SetToolButtonStyle(QStyleOptionToolButton* self, int toolButtonStyle) {
    self->toolButtonStyle = static_cast<Qt::ToolButtonStyle>(toolButtonStyle);
}

QPoint* QStyleOptionToolButton_Pos(const QStyleOptionToolButton* self) {
    return new QPoint(self->pos);
}

void QStyleOptionToolButton_SetPos(QStyleOptionToolButton* self, QPoint* pos) {
    self->pos = *pos;
}

QFont* QStyleOptionToolButton_Font(const QStyleOptionToolButton* self) {
    return new QFont(self->font);
}

void QStyleOptionToolButton_SetFont(QStyleOptionToolButton* self, QFont* font) {
    self->font = *font;
}

void QStyleOptionToolButton_Delete(QStyleOptionToolButton* self) {
    delete self;
}

QStyleOptionComboBox* QStyleOptionComboBox_new() {
    return new QStyleOptionComboBox();
}

QStyleOptionComboBox* QStyleOptionComboBox_new2(const QStyleOptionComboBox* other) {
    return new QStyleOptionComboBox(*other);
}

bool QStyleOptionComboBox_Editable(const QStyleOptionComboBox* self) {
    return self->editable;
}

void QStyleOptionComboBox_SetEditable(QStyleOptionComboBox* self, bool editable) {
    self->editable = editable;
}

QRect* QStyleOptionComboBox_PopupRect(const QStyleOptionComboBox* self) {
    return new QRect(self->popupRect);
}

void QStyleOptionComboBox_SetPopupRect(QStyleOptionComboBox* self, QRect* popupRect) {
    self->popupRect = *popupRect;
}

bool QStyleOptionComboBox_Frame(const QStyleOptionComboBox* self) {
    return self->frame;
}

void QStyleOptionComboBox_SetFrame(QStyleOptionComboBox* self, bool frame) {
    self->frame = frame;
}

libqt_string QStyleOptionComboBox_CurrentText(const QStyleOptionComboBox* self) {
    QString currentText_ret = self->currentText;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray currentText_b = currentText_ret.toUtf8();
    libqt_string currentText_str;
    currentText_str.len = currentText_b.length();
    currentText_str.data = static_cast<const char*>(malloc(currentText_str.len + 1));
    memcpy((void*)currentText_str.data, currentText_b.data(), currentText_str.len);
    ((char*)currentText_str.data)[currentText_str.len] = '\0';
    return currentText_str;
}

void QStyleOptionComboBox_SetCurrentText(QStyleOptionComboBox* self, libqt_string currentText) {
    QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
    self->currentText = currentText_QString;
}

QIcon* QStyleOptionComboBox_CurrentIcon(const QStyleOptionComboBox* self) {
    return new QIcon(self->currentIcon);
}

void QStyleOptionComboBox_SetCurrentIcon(QStyleOptionComboBox* self, QIcon* currentIcon) {
    self->currentIcon = *currentIcon;
}

QSize* QStyleOptionComboBox_IconSize(const QStyleOptionComboBox* self) {
    return new QSize(self->iconSize);
}

void QStyleOptionComboBox_SetIconSize(QStyleOptionComboBox* self, QSize* iconSize) {
    self->iconSize = *iconSize;
}

int QStyleOptionComboBox_TextAlignment(const QStyleOptionComboBox* self) {
    return static_cast<int>(self->textAlignment);
}

void QStyleOptionComboBox_SetTextAlignment(QStyleOptionComboBox* self, int textAlignment) {
    self->textAlignment = static_cast<QFlags<Qt::AlignmentFlag>>(textAlignment);
}

void QStyleOptionComboBox_Delete(QStyleOptionComboBox* self) {
    delete self;
}

QStyleOptionTitleBar* QStyleOptionTitleBar_new() {
    return new QStyleOptionTitleBar();
}

QStyleOptionTitleBar* QStyleOptionTitleBar_new2(const QStyleOptionTitleBar* other) {
    return new QStyleOptionTitleBar(*other);
}

libqt_string QStyleOptionTitleBar_Text(const QStyleOptionTitleBar* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionTitleBar_SetText(QStyleOptionTitleBar* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

QIcon* QStyleOptionTitleBar_Icon(const QStyleOptionTitleBar* self) {
    return new QIcon(self->icon);
}

void QStyleOptionTitleBar_SetIcon(QStyleOptionTitleBar* self, QIcon* icon) {
    self->icon = *icon;
}

int QStyleOptionTitleBar_TitleBarState(const QStyleOptionTitleBar* self) {
    return self->titleBarState;
}

void QStyleOptionTitleBar_SetTitleBarState(QStyleOptionTitleBar* self, int titleBarState) {
    self->titleBarState = static_cast<int>(titleBarState);
}

int QStyleOptionTitleBar_TitleBarFlags(const QStyleOptionTitleBar* self) {
    return static_cast<int>(self->titleBarFlags);
}

void QStyleOptionTitleBar_SetTitleBarFlags(QStyleOptionTitleBar* self, int titleBarFlags) {
    self->titleBarFlags = static_cast<QFlags<Qt::WindowType>>(titleBarFlags);
}

void QStyleOptionTitleBar_Delete(QStyleOptionTitleBar* self) {
    delete self;
}

QStyleOptionGroupBox* QStyleOptionGroupBox_new() {
    return new QStyleOptionGroupBox();
}

QStyleOptionGroupBox* QStyleOptionGroupBox_new2(const QStyleOptionGroupBox* other) {
    return new QStyleOptionGroupBox(*other);
}

int QStyleOptionGroupBox_Features(const QStyleOptionGroupBox* self) {
    return static_cast<int>(self->features);
}

void QStyleOptionGroupBox_SetFeatures(QStyleOptionGroupBox* self, int features) {
    self->features = static_cast<QFlags<QStyleOptionFrame::FrameFeature>>(features);
}

libqt_string QStyleOptionGroupBox_Text(const QStyleOptionGroupBox* self) {
    QString text_ret = self->text;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray text_b = text_ret.toUtf8();
    libqt_string text_str;
    text_str.len = text_b.length();
    text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
    memcpy((void*)text_str.data, text_b.data(), text_str.len);
    ((char*)text_str.data)[text_str.len] = '\0';
    return text_str;
}

void QStyleOptionGroupBox_SetText(QStyleOptionGroupBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->text = text_QString;
}

int QStyleOptionGroupBox_TextAlignment(const QStyleOptionGroupBox* self) {
    return static_cast<int>(self->textAlignment);
}

void QStyleOptionGroupBox_SetTextAlignment(QStyleOptionGroupBox* self, int textAlignment) {
    self->textAlignment = static_cast<QFlags<Qt::AlignmentFlag>>(textAlignment);
}

QColor* QStyleOptionGroupBox_TextColor(const QStyleOptionGroupBox* self) {
    return new QColor(self->textColor);
}

void QStyleOptionGroupBox_SetTextColor(QStyleOptionGroupBox* self, QColor* textColor) {
    self->textColor = *textColor;
}

int QStyleOptionGroupBox_LineWidth(const QStyleOptionGroupBox* self) {
    return self->lineWidth;
}

void QStyleOptionGroupBox_SetLineWidth(QStyleOptionGroupBox* self, int lineWidth) {
    self->lineWidth = static_cast<int>(lineWidth);
}

int QStyleOptionGroupBox_MidLineWidth(const QStyleOptionGroupBox* self) {
    return self->midLineWidth;
}

void QStyleOptionGroupBox_SetMidLineWidth(QStyleOptionGroupBox* self, int midLineWidth) {
    self->midLineWidth = static_cast<int>(midLineWidth);
}

void QStyleOptionGroupBox_Delete(QStyleOptionGroupBox* self) {
    delete self;
}

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new() {
    return new QStyleOptionSizeGrip();
}

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new2(const QStyleOptionSizeGrip* other) {
    return new QStyleOptionSizeGrip(*other);
}

int QStyleOptionSizeGrip_Corner(const QStyleOptionSizeGrip* self) {
    return static_cast<int>(self->corner);
}

void QStyleOptionSizeGrip_SetCorner(QStyleOptionSizeGrip* self, int corner) {
    self->corner = static_cast<Qt::Corner>(corner);
}

void QStyleOptionSizeGrip_Delete(QStyleOptionSizeGrip* self) {
    delete self;
}

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new() {
    return new QStyleOptionGraphicsItem();
}

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new2(const QStyleOptionGraphicsItem* other) {
    return new QStyleOptionGraphicsItem(*other);
}

QRectF* QStyleOptionGraphicsItem_ExposedRect(const QStyleOptionGraphicsItem* self) {
    return new QRectF(self->exposedRect);
}

void QStyleOptionGraphicsItem_SetExposedRect(QStyleOptionGraphicsItem* self, QRectF* exposedRect) {
    self->exposedRect = *exposedRect;
}

double QStyleOptionGraphicsItem_LevelOfDetailFromTransform(const QTransform* worldTransform) {
    return static_cast<double>(QStyleOptionGraphicsItem::levelOfDetailFromTransform(*worldTransform));
}

void QStyleOptionGraphicsItem_Delete(QStyleOptionGraphicsItem* self) {
    delete self;
}

QStyleHintReturn* QStyleHintReturn_new() {
    return new QStyleHintReturn();
}

QStyleHintReturn* QStyleHintReturn_new2(const QStyleHintReturn* param1) {
    return new QStyleHintReturn(*param1);
}

QStyleHintReturn* QStyleHintReturn_new3(int version) {
    return new QStyleHintReturn(static_cast<int>(version));
}

QStyleHintReturn* QStyleHintReturn_new4(int version, int typeVal) {
    return new QStyleHintReturn(static_cast<int>(version), static_cast<int>(typeVal));
}

int QStyleHintReturn_Version(const QStyleHintReturn* self) {
    return self->version;
}

void QStyleHintReturn_SetVersion(QStyleHintReturn* self, int version) {
    self->version = static_cast<int>(version);
}

int QStyleHintReturn_Type(const QStyleHintReturn* self) {
    return self->type;
}

void QStyleHintReturn_SetType(QStyleHintReturn* self, int type) {
    self->type = static_cast<int>(type);
}

void QStyleHintReturn_OperatorAssign(QStyleHintReturn* self, const QStyleHintReturn* param1) {
    self->operator=(*param1);
}

void QStyleHintReturn_Delete(QStyleHintReturn* self) {
    delete self;
}

QStyleHintReturnMask* QStyleHintReturnMask_new() {
    return new QStyleHintReturnMask();
}

QStyleHintReturnMask* QStyleHintReturnMask_new2(const QStyleHintReturnMask* param1) {
    return new QStyleHintReturnMask(*param1);
}

QRegion* QStyleHintReturnMask_Region(const QStyleHintReturnMask* self) {
    return new QRegion(self->region);
}

void QStyleHintReturnMask_SetRegion(QStyleHintReturnMask* self, QRegion* region) {
    self->region = *region;
}

void QStyleHintReturnMask_OperatorAssign(QStyleHintReturnMask* self, const QStyleHintReturnMask* param1) {
    self->operator=(*param1);
}

void QStyleHintReturnMask_Delete(QStyleHintReturnMask* self) {
    delete self;
}

QStyleHintReturnVariant* QStyleHintReturnVariant_new() {
    return new QStyleHintReturnVariant();
}

QStyleHintReturnVariant* QStyleHintReturnVariant_new2(const QStyleHintReturnVariant* param1) {
    return new QStyleHintReturnVariant(*param1);
}

QVariant* QStyleHintReturnVariant_Variant(const QStyleHintReturnVariant* self) {
    return new QVariant(self->variant);
}

void QStyleHintReturnVariant_SetVariant(QStyleHintReturnVariant* self, QVariant* variant) {
    self->variant = *variant;
}

void QStyleHintReturnVariant_OperatorAssign(QStyleHintReturnVariant* self, const QStyleHintReturnVariant* param1) {
    self->operator=(*param1);
}

void QStyleHintReturnVariant_Delete(QStyleHintReturnVariant* self) {
    delete self;
}
