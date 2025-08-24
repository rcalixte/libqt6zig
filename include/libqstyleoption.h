#pragma once
#ifndef SRCC_LIBQSTYLEOPTION_H
#define SRCC_LIBQSTYLEOPTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QFontMetrics QFontMetrics;
typedef struct QIcon QIcon;
typedef struct QLocale QLocale;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QSize QSize;
typedef struct QStyleHintReturn QStyleHintReturn;
typedef struct QStyleHintReturnMask QStyleHintReturnMask;
typedef struct QStyleHintReturnVariant QStyleHintReturnVariant;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionButton QStyleOptionButton;
typedef struct QStyleOptionComboBox QStyleOptionComboBox;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QStyleOptionDockWidget QStyleOptionDockWidget;
typedef struct QStyleOptionFocusRect QStyleOptionFocusRect;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QStyleOptionGroupBox QStyleOptionGroupBox;
typedef struct QStyleOptionHeader QStyleOptionHeader;
typedef struct QStyleOptionHeaderV2 QStyleOptionHeaderV2;
typedef struct QStyleOptionMenuItem QStyleOptionMenuItem;
typedef struct QStyleOptionProgressBar QStyleOptionProgressBar;
typedef struct QStyleOptionRubberBand QStyleOptionRubberBand;
typedef struct QStyleOptionSizeGrip QStyleOptionSizeGrip;
typedef struct QStyleOptionSlider QStyleOptionSlider;
typedef struct QStyleOptionSpinBox QStyleOptionSpinBox;
typedef struct QStyleOptionTab QStyleOptionTab;
typedef struct QStyleOptionTabBarBase QStyleOptionTabBarBase;
typedef struct QStyleOptionTabWidgetFrame QStyleOptionTabWidgetFrame;
typedef struct QStyleOptionTitleBar QStyleOptionTitleBar;
typedef struct QStyleOptionToolBar QStyleOptionToolBar;
typedef struct QStyleOptionToolBox QStyleOptionToolBox;
typedef struct QStyleOptionToolButton QStyleOptionToolButton;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QStyleOption* QStyleOption_new();
QStyleOption* QStyleOption_new2(const QStyleOption* other);
QStyleOption* QStyleOption_new3(int version);
QStyleOption* QStyleOption_new4(int version, int typeVal);
int QStyleOption_Version(const QStyleOption* self);
void QStyleOption_SetVersion(QStyleOption* self, int version);
int QStyleOption_Type(const QStyleOption* self);
void QStyleOption_SetType(QStyleOption* self, int type);
int QStyleOption_State(const QStyleOption* self);
void QStyleOption_SetState(QStyleOption* self, int state);
int QStyleOption_Direction(const QStyleOption* self);
void QStyleOption_SetDirection(QStyleOption* self, int direction);
QRect* QStyleOption_Rect(const QStyleOption* self);
void QStyleOption_SetRect(QStyleOption* self, QRect* rect);
QFontMetrics* QStyleOption_FontMetrics(const QStyleOption* self);
void QStyleOption_SetFontMetrics(QStyleOption* self, QFontMetrics* fontMetrics);
QPalette* QStyleOption_Palette(const QStyleOption* self);
void QStyleOption_SetPalette(QStyleOption* self, QPalette* palette);
QObject* QStyleOption_StyleObject(const QStyleOption* self);
void QStyleOption_SetStyleObject(QStyleOption* self, QObject* styleObject);
void QStyleOption_InitFrom(QStyleOption* self, const QWidget* w);
void QStyleOption_OperatorAssign(QStyleOption* self, const QStyleOption* other);
void QStyleOption_Delete(QStyleOption* self);

QStyleOptionFocusRect* QStyleOptionFocusRect_new();
QStyleOptionFocusRect* QStyleOptionFocusRect_new2(const QStyleOptionFocusRect* other);
QColor* QStyleOptionFocusRect_BackgroundColor(const QStyleOptionFocusRect* self);
void QStyleOptionFocusRect_SetBackgroundColor(QStyleOptionFocusRect* self, QColor* backgroundColor);
void QStyleOptionFocusRect_Delete(QStyleOptionFocusRect* self);

QStyleOptionFrame* QStyleOptionFrame_new();
QStyleOptionFrame* QStyleOptionFrame_new2(const QStyleOptionFrame* other);
int QStyleOptionFrame_LineWidth(const QStyleOptionFrame* self);
void QStyleOptionFrame_SetLineWidth(QStyleOptionFrame* self, int lineWidth);
int QStyleOptionFrame_MidLineWidth(const QStyleOptionFrame* self);
void QStyleOptionFrame_SetMidLineWidth(QStyleOptionFrame* self, int midLineWidth);
int QStyleOptionFrame_Features(const QStyleOptionFrame* self);
void QStyleOptionFrame_SetFeatures(QStyleOptionFrame* self, int features);
int QStyleOptionFrame_FrameShape(const QStyleOptionFrame* self);
void QStyleOptionFrame_SetFrameShape(QStyleOptionFrame* self, int frameShape);
void QStyleOptionFrame_Delete(QStyleOptionFrame* self);

QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new();
QStyleOptionTabWidgetFrame* QStyleOptionTabWidgetFrame_new2(const QStyleOptionTabWidgetFrame* other);
int QStyleOptionTabWidgetFrame_LineWidth(const QStyleOptionTabWidgetFrame* self);
void QStyleOptionTabWidgetFrame_SetLineWidth(QStyleOptionTabWidgetFrame* self, int lineWidth);
int QStyleOptionTabWidgetFrame_MidLineWidth(const QStyleOptionTabWidgetFrame* self);
void QStyleOptionTabWidgetFrame_SetMidLineWidth(QStyleOptionTabWidgetFrame* self, int midLineWidth);
int QStyleOptionTabWidgetFrame_Shape(const QStyleOptionTabWidgetFrame* self);
void QStyleOptionTabWidgetFrame_SetShape(QStyleOptionTabWidgetFrame* self, int shape);
QSize* QStyleOptionTabWidgetFrame_TabBarSize(const QStyleOptionTabWidgetFrame* self);
void QStyleOptionTabWidgetFrame_SetTabBarSize(QStyleOptionTabWidgetFrame* self, QSize* tabBarSize);
QSize* QStyleOptionTabWidgetFrame_RightCornerWidgetSize(const QStyleOptionTabWidgetFrame* self);
void QStyleOptionTabWidgetFrame_SetRightCornerWidgetSize(QStyleOptionTabWidgetFrame* self, QSize* rightCornerWidgetSize);
QSize* QStyleOptionTabWidgetFrame_LeftCornerWidgetSize(const QStyleOptionTabWidgetFrame* self);
void QStyleOptionTabWidgetFrame_SetLeftCornerWidgetSize(QStyleOptionTabWidgetFrame* self, QSize* leftCornerWidgetSize);
QRect* QStyleOptionTabWidgetFrame_TabBarRect(const QStyleOptionTabWidgetFrame* self);
void QStyleOptionTabWidgetFrame_SetTabBarRect(QStyleOptionTabWidgetFrame* self, QRect* tabBarRect);
QRect* QStyleOptionTabWidgetFrame_SelectedTabRect(const QStyleOptionTabWidgetFrame* self);
void QStyleOptionTabWidgetFrame_SetSelectedTabRect(QStyleOptionTabWidgetFrame* self, QRect* selectedTabRect);
void QStyleOptionTabWidgetFrame_Delete(QStyleOptionTabWidgetFrame* self);

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new();
QStyleOptionTabBarBase* QStyleOptionTabBarBase_new2(const QStyleOptionTabBarBase* other);
int QStyleOptionTabBarBase_Shape(const QStyleOptionTabBarBase* self);
void QStyleOptionTabBarBase_SetShape(QStyleOptionTabBarBase* self, int shape);
QRect* QStyleOptionTabBarBase_TabBarRect(const QStyleOptionTabBarBase* self);
void QStyleOptionTabBarBase_SetTabBarRect(QStyleOptionTabBarBase* self, QRect* tabBarRect);
QRect* QStyleOptionTabBarBase_SelectedTabRect(const QStyleOptionTabBarBase* self);
void QStyleOptionTabBarBase_SetSelectedTabRect(QStyleOptionTabBarBase* self, QRect* selectedTabRect);
bool QStyleOptionTabBarBase_DocumentMode(const QStyleOptionTabBarBase* self);
void QStyleOptionTabBarBase_SetDocumentMode(QStyleOptionTabBarBase* self, bool documentMode);
void QStyleOptionTabBarBase_Delete(QStyleOptionTabBarBase* self);

QStyleOptionHeader* QStyleOptionHeader_new();
QStyleOptionHeader* QStyleOptionHeader_new2(const QStyleOptionHeader* other);
int QStyleOptionHeader_Section(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetSection(QStyleOptionHeader* self, int section);
libqt_string QStyleOptionHeader_Text(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetText(QStyleOptionHeader* self, libqt_string text);
int QStyleOptionHeader_TextAlignment(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetTextAlignment(QStyleOptionHeader* self, int textAlignment);
QIcon* QStyleOptionHeader_Icon(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetIcon(QStyleOptionHeader* self, QIcon* icon);
int QStyleOptionHeader_IconAlignment(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetIconAlignment(QStyleOptionHeader* self, int iconAlignment);
int QStyleOptionHeader_Position(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetPosition(QStyleOptionHeader* self, int position);
int QStyleOptionHeader_SelectedPosition(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetSelectedPosition(QStyleOptionHeader* self, int selectedPosition);
int QStyleOptionHeader_SortIndicator(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetSortIndicator(QStyleOptionHeader* self, int sortIndicator);
int QStyleOptionHeader_Orientation(const QStyleOptionHeader* self);
void QStyleOptionHeader_SetOrientation(QStyleOptionHeader* self, int orientation);
void QStyleOptionHeader_Delete(QStyleOptionHeader* self);

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new();
QStyleOptionHeaderV2* QStyleOptionHeaderV2_new2(const QStyleOptionHeaderV2* other);
int QStyleOptionHeaderV2_TextElideMode(const QStyleOptionHeaderV2* self);
void QStyleOptionHeaderV2_SetTextElideMode(QStyleOptionHeaderV2* self, int textElideMode);
bool QStyleOptionHeaderV2_IsSectionDragTarget(const QStyleOptionHeaderV2* self);
void QStyleOptionHeaderV2_SetIsSectionDragTarget(QStyleOptionHeaderV2* self, bool isSectionDragTarget);
int QStyleOptionHeaderV2_Unused(const QStyleOptionHeaderV2* self);
void QStyleOptionHeaderV2_SetUnused(QStyleOptionHeaderV2* self, int unused);
void QStyleOptionHeaderV2_Delete(QStyleOptionHeaderV2* self);

QStyleOptionButton* QStyleOptionButton_new();
QStyleOptionButton* QStyleOptionButton_new2(const QStyleOptionButton* other);
int QStyleOptionButton_Features(const QStyleOptionButton* self);
void QStyleOptionButton_SetFeatures(QStyleOptionButton* self, int features);
libqt_string QStyleOptionButton_Text(const QStyleOptionButton* self);
void QStyleOptionButton_SetText(QStyleOptionButton* self, libqt_string text);
QIcon* QStyleOptionButton_Icon(const QStyleOptionButton* self);
void QStyleOptionButton_SetIcon(QStyleOptionButton* self, QIcon* icon);
QSize* QStyleOptionButton_IconSize(const QStyleOptionButton* self);
void QStyleOptionButton_SetIconSize(QStyleOptionButton* self, QSize* iconSize);
void QStyleOptionButton_Delete(QStyleOptionButton* self);

QStyleOptionTab* QStyleOptionTab_new();
QStyleOptionTab* QStyleOptionTab_new2(const QStyleOptionTab* other);
int QStyleOptionTab_Shape(const QStyleOptionTab* self);
void QStyleOptionTab_SetShape(QStyleOptionTab* self, int shape);
libqt_string QStyleOptionTab_Text(const QStyleOptionTab* self);
void QStyleOptionTab_SetText(QStyleOptionTab* self, libqt_string text);
QIcon* QStyleOptionTab_Icon(const QStyleOptionTab* self);
void QStyleOptionTab_SetIcon(QStyleOptionTab* self, QIcon* icon);
int QStyleOptionTab_Row(const QStyleOptionTab* self);
void QStyleOptionTab_SetRow(QStyleOptionTab* self, int row);
int QStyleOptionTab_Position(const QStyleOptionTab* self);
void QStyleOptionTab_SetPosition(QStyleOptionTab* self, int position);
int QStyleOptionTab_SelectedPosition(const QStyleOptionTab* self);
void QStyleOptionTab_SetSelectedPosition(QStyleOptionTab* self, int selectedPosition);
int QStyleOptionTab_CornerWidgets(const QStyleOptionTab* self);
void QStyleOptionTab_SetCornerWidgets(QStyleOptionTab* self, int cornerWidgets);
QSize* QStyleOptionTab_IconSize(const QStyleOptionTab* self);
void QStyleOptionTab_SetIconSize(QStyleOptionTab* self, QSize* iconSize);
bool QStyleOptionTab_DocumentMode(const QStyleOptionTab* self);
void QStyleOptionTab_SetDocumentMode(QStyleOptionTab* self, bool documentMode);
QSize* QStyleOptionTab_LeftButtonSize(const QStyleOptionTab* self);
void QStyleOptionTab_SetLeftButtonSize(QStyleOptionTab* self, QSize* leftButtonSize);
QSize* QStyleOptionTab_RightButtonSize(const QStyleOptionTab* self);
void QStyleOptionTab_SetRightButtonSize(QStyleOptionTab* self, QSize* rightButtonSize);
int QStyleOptionTab_Features(const QStyleOptionTab* self);
void QStyleOptionTab_SetFeatures(QStyleOptionTab* self, int features);
int QStyleOptionTab_TabIndex(const QStyleOptionTab* self);
void QStyleOptionTab_SetTabIndex(QStyleOptionTab* self, int tabIndex);
void QStyleOptionTab_Delete(QStyleOptionTab* self);

QStyleOptionToolBar* QStyleOptionToolBar_new();
QStyleOptionToolBar* QStyleOptionToolBar_new2(const QStyleOptionToolBar* other);
int QStyleOptionToolBar_PositionOfLine(const QStyleOptionToolBar* self);
void QStyleOptionToolBar_SetPositionOfLine(QStyleOptionToolBar* self, int positionOfLine);
int QStyleOptionToolBar_PositionWithinLine(const QStyleOptionToolBar* self);
void QStyleOptionToolBar_SetPositionWithinLine(QStyleOptionToolBar* self, int positionWithinLine);
int QStyleOptionToolBar_ToolBarArea(const QStyleOptionToolBar* self);
void QStyleOptionToolBar_SetToolBarArea(QStyleOptionToolBar* self, int toolBarArea);
int QStyleOptionToolBar_Features(const QStyleOptionToolBar* self);
void QStyleOptionToolBar_SetFeatures(QStyleOptionToolBar* self, int features);
int QStyleOptionToolBar_LineWidth(const QStyleOptionToolBar* self);
void QStyleOptionToolBar_SetLineWidth(QStyleOptionToolBar* self, int lineWidth);
int QStyleOptionToolBar_MidLineWidth(const QStyleOptionToolBar* self);
void QStyleOptionToolBar_SetMidLineWidth(QStyleOptionToolBar* self, int midLineWidth);
void QStyleOptionToolBar_Delete(QStyleOptionToolBar* self);

QStyleOptionProgressBar* QStyleOptionProgressBar_new();
QStyleOptionProgressBar* QStyleOptionProgressBar_new2(const QStyleOptionProgressBar* other);
int QStyleOptionProgressBar_Minimum(const QStyleOptionProgressBar* self);
void QStyleOptionProgressBar_SetMinimum(QStyleOptionProgressBar* self, int minimum);
int QStyleOptionProgressBar_Maximum(const QStyleOptionProgressBar* self);
void QStyleOptionProgressBar_SetMaximum(QStyleOptionProgressBar* self, int maximum);
int QStyleOptionProgressBar_Progress(const QStyleOptionProgressBar* self);
void QStyleOptionProgressBar_SetProgress(QStyleOptionProgressBar* self, int progress);
libqt_string QStyleOptionProgressBar_Text(const QStyleOptionProgressBar* self);
void QStyleOptionProgressBar_SetText(QStyleOptionProgressBar* self, libqt_string text);
int QStyleOptionProgressBar_TextAlignment(const QStyleOptionProgressBar* self);
void QStyleOptionProgressBar_SetTextAlignment(QStyleOptionProgressBar* self, int textAlignment);
bool QStyleOptionProgressBar_TextVisible(const QStyleOptionProgressBar* self);
void QStyleOptionProgressBar_SetTextVisible(QStyleOptionProgressBar* self, bool textVisible);
bool QStyleOptionProgressBar_InvertedAppearance(const QStyleOptionProgressBar* self);
void QStyleOptionProgressBar_SetInvertedAppearance(QStyleOptionProgressBar* self, bool invertedAppearance);
bool QStyleOptionProgressBar_BottomToTop(const QStyleOptionProgressBar* self);
void QStyleOptionProgressBar_SetBottomToTop(QStyleOptionProgressBar* self, bool bottomToTop);
void QStyleOptionProgressBar_Delete(QStyleOptionProgressBar* self);

QStyleOptionMenuItem* QStyleOptionMenuItem_new();
QStyleOptionMenuItem* QStyleOptionMenuItem_new2(const QStyleOptionMenuItem* other);
int QStyleOptionMenuItem_MenuItemType(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetMenuItemType(QStyleOptionMenuItem* self, int menuItemType);
int QStyleOptionMenuItem_CheckType(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetCheckType(QStyleOptionMenuItem* self, int checkType);
bool QStyleOptionMenuItem_Checked(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetChecked(QStyleOptionMenuItem* self, bool checked);
bool QStyleOptionMenuItem_MenuHasCheckableItems(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetMenuHasCheckableItems(QStyleOptionMenuItem* self, bool menuHasCheckableItems);
QRect* QStyleOptionMenuItem_MenuRect(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetMenuRect(QStyleOptionMenuItem* self, QRect* menuRect);
libqt_string QStyleOptionMenuItem_Text(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetText(QStyleOptionMenuItem* self, libqt_string text);
QIcon* QStyleOptionMenuItem_Icon(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetIcon(QStyleOptionMenuItem* self, QIcon* icon);
int QStyleOptionMenuItem_MaxIconWidth(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetMaxIconWidth(QStyleOptionMenuItem* self, int maxIconWidth);
int QStyleOptionMenuItem_ReservedShortcutWidth(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetReservedShortcutWidth(QStyleOptionMenuItem* self, int reservedShortcutWidth);
QFont* QStyleOptionMenuItem_Font(const QStyleOptionMenuItem* self);
void QStyleOptionMenuItem_SetFont(QStyleOptionMenuItem* self, QFont* font);
void QStyleOptionMenuItem_Delete(QStyleOptionMenuItem* self);

QStyleOptionDockWidget* QStyleOptionDockWidget_new();
QStyleOptionDockWidget* QStyleOptionDockWidget_new2(const QStyleOptionDockWidget* other);
libqt_string QStyleOptionDockWidget_Title(const QStyleOptionDockWidget* self);
void QStyleOptionDockWidget_SetTitle(QStyleOptionDockWidget* self, libqt_string title);
bool QStyleOptionDockWidget_Closable(const QStyleOptionDockWidget* self);
void QStyleOptionDockWidget_SetClosable(QStyleOptionDockWidget* self, bool closable);
bool QStyleOptionDockWidget_Movable(const QStyleOptionDockWidget* self);
void QStyleOptionDockWidget_SetMovable(QStyleOptionDockWidget* self, bool movable);
bool QStyleOptionDockWidget_Floatable(const QStyleOptionDockWidget* self);
void QStyleOptionDockWidget_SetFloatable(QStyleOptionDockWidget* self, bool floatable);
bool QStyleOptionDockWidget_VerticalTitleBar(const QStyleOptionDockWidget* self);
void QStyleOptionDockWidget_SetVerticalTitleBar(QStyleOptionDockWidget* self, bool verticalTitleBar);
void QStyleOptionDockWidget_Delete(QStyleOptionDockWidget* self);

QStyleOptionViewItem* QStyleOptionViewItem_new();
QStyleOptionViewItem* QStyleOptionViewItem_new2(const QStyleOptionViewItem* other);
int QStyleOptionViewItem_DisplayAlignment(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetDisplayAlignment(QStyleOptionViewItem* self, int displayAlignment);
int QStyleOptionViewItem_DecorationAlignment(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetDecorationAlignment(QStyleOptionViewItem* self, int decorationAlignment);
int QStyleOptionViewItem_TextElideMode(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetTextElideMode(QStyleOptionViewItem* self, int textElideMode);
int QStyleOptionViewItem_DecorationPosition(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetDecorationPosition(QStyleOptionViewItem* self, int decorationPosition);
QSize* QStyleOptionViewItem_DecorationSize(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetDecorationSize(QStyleOptionViewItem* self, QSize* decorationSize);
QFont* QStyleOptionViewItem_Font(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetFont(QStyleOptionViewItem* self, QFont* font);
bool QStyleOptionViewItem_ShowDecorationSelected(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetShowDecorationSelected(QStyleOptionViewItem* self, bool showDecorationSelected);
int QStyleOptionViewItem_Features(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetFeatures(QStyleOptionViewItem* self, int features);
QLocale* QStyleOptionViewItem_Locale(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetLocale(QStyleOptionViewItem* self, QLocale* locale);
QWidget* QStyleOptionViewItem_Widget(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetWidget(QStyleOptionViewItem* self, const QWidget* widget);
QModelIndex* QStyleOptionViewItem_Index(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetIndex(QStyleOptionViewItem* self, QModelIndex* index);
int QStyleOptionViewItem_CheckState(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetCheckState(QStyleOptionViewItem* self, int checkState);
QIcon* QStyleOptionViewItem_Icon(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetIcon(QStyleOptionViewItem* self, QIcon* icon);
libqt_string QStyleOptionViewItem_Text(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetText(QStyleOptionViewItem* self, libqt_string text);
int QStyleOptionViewItem_ViewItemPosition(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetViewItemPosition(QStyleOptionViewItem* self, int viewItemPosition);
QBrush* QStyleOptionViewItem_BackgroundBrush(const QStyleOptionViewItem* self);
void QStyleOptionViewItem_SetBackgroundBrush(QStyleOptionViewItem* self, QBrush* backgroundBrush);
void QStyleOptionViewItem_Delete(QStyleOptionViewItem* self);

QStyleOptionToolBox* QStyleOptionToolBox_new();
QStyleOptionToolBox* QStyleOptionToolBox_new2(const QStyleOptionToolBox* other);
libqt_string QStyleOptionToolBox_Text(const QStyleOptionToolBox* self);
void QStyleOptionToolBox_SetText(QStyleOptionToolBox* self, libqt_string text);
QIcon* QStyleOptionToolBox_Icon(const QStyleOptionToolBox* self);
void QStyleOptionToolBox_SetIcon(QStyleOptionToolBox* self, QIcon* icon);
int QStyleOptionToolBox_Position(const QStyleOptionToolBox* self);
void QStyleOptionToolBox_SetPosition(QStyleOptionToolBox* self, int position);
int QStyleOptionToolBox_SelectedPosition(const QStyleOptionToolBox* self);
void QStyleOptionToolBox_SetSelectedPosition(QStyleOptionToolBox* self, int selectedPosition);
void QStyleOptionToolBox_Delete(QStyleOptionToolBox* self);

QStyleOptionRubberBand* QStyleOptionRubberBand_new();
QStyleOptionRubberBand* QStyleOptionRubberBand_new2(const QStyleOptionRubberBand* other);
int QStyleOptionRubberBand_Shape(const QStyleOptionRubberBand* self);
void QStyleOptionRubberBand_SetShape(QStyleOptionRubberBand* self, int shape);
bool QStyleOptionRubberBand_Opaque(const QStyleOptionRubberBand* self);
void QStyleOptionRubberBand_SetOpaque(QStyleOptionRubberBand* self, bool opaque);
void QStyleOptionRubberBand_Delete(QStyleOptionRubberBand* self);

QStyleOptionComplex* QStyleOptionComplex_new();
QStyleOptionComplex* QStyleOptionComplex_new2(const QStyleOptionComplex* other);
QStyleOptionComplex* QStyleOptionComplex_new3(int version);
QStyleOptionComplex* QStyleOptionComplex_new4(int version, int typeVal);
int QStyleOptionComplex_SubControls(const QStyleOptionComplex* self);
void QStyleOptionComplex_SetSubControls(QStyleOptionComplex* self, int subControls);
int QStyleOptionComplex_ActiveSubControls(const QStyleOptionComplex* self);
void QStyleOptionComplex_SetActiveSubControls(QStyleOptionComplex* self, int activeSubControls);
void QStyleOptionComplex_Delete(QStyleOptionComplex* self);

QStyleOptionSlider* QStyleOptionSlider_new();
QStyleOptionSlider* QStyleOptionSlider_new2(const QStyleOptionSlider* other);
int QStyleOptionSlider_Orientation(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetOrientation(QStyleOptionSlider* self, int orientation);
int QStyleOptionSlider_Minimum(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetMinimum(QStyleOptionSlider* self, int minimum);
int QStyleOptionSlider_Maximum(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetMaximum(QStyleOptionSlider* self, int maximum);
int QStyleOptionSlider_TickPosition(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetTickPosition(QStyleOptionSlider* self, int tickPosition);
int QStyleOptionSlider_TickInterval(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetTickInterval(QStyleOptionSlider* self, int tickInterval);
bool QStyleOptionSlider_UpsideDown(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetUpsideDown(QStyleOptionSlider* self, bool upsideDown);
int QStyleOptionSlider_SliderPosition(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetSliderPosition(QStyleOptionSlider* self, int sliderPosition);
int QStyleOptionSlider_SliderValue(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetSliderValue(QStyleOptionSlider* self, int sliderValue);
int QStyleOptionSlider_SingleStep(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetSingleStep(QStyleOptionSlider* self, int singleStep);
int QStyleOptionSlider_PageStep(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetPageStep(QStyleOptionSlider* self, int pageStep);
double QStyleOptionSlider_NotchTarget(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetNotchTarget(QStyleOptionSlider* self, double notchTarget);
bool QStyleOptionSlider_DialWrapping(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetDialWrapping(QStyleOptionSlider* self, bool dialWrapping);
int QStyleOptionSlider_KeyboardModifiers(const QStyleOptionSlider* self);
void QStyleOptionSlider_SetKeyboardModifiers(QStyleOptionSlider* self, int keyboardModifiers);
void QStyleOptionSlider_Delete(QStyleOptionSlider* self);

QStyleOptionSpinBox* QStyleOptionSpinBox_new();
QStyleOptionSpinBox* QStyleOptionSpinBox_new2(const QStyleOptionSpinBox* other);
int QStyleOptionSpinBox_ButtonSymbols(const QStyleOptionSpinBox* self);
void QStyleOptionSpinBox_SetButtonSymbols(QStyleOptionSpinBox* self, int buttonSymbols);
int QStyleOptionSpinBox_StepEnabled(const QStyleOptionSpinBox* self);
void QStyleOptionSpinBox_SetStepEnabled(QStyleOptionSpinBox* self, int stepEnabled);
bool QStyleOptionSpinBox_Frame(const QStyleOptionSpinBox* self);
void QStyleOptionSpinBox_SetFrame(QStyleOptionSpinBox* self, bool frame);
void QStyleOptionSpinBox_Delete(QStyleOptionSpinBox* self);

QStyleOptionToolButton* QStyleOptionToolButton_new();
QStyleOptionToolButton* QStyleOptionToolButton_new2(const QStyleOptionToolButton* other);
int QStyleOptionToolButton_Features(const QStyleOptionToolButton* self);
void QStyleOptionToolButton_SetFeatures(QStyleOptionToolButton* self, int features);
QIcon* QStyleOptionToolButton_Icon(const QStyleOptionToolButton* self);
void QStyleOptionToolButton_SetIcon(QStyleOptionToolButton* self, QIcon* icon);
QSize* QStyleOptionToolButton_IconSize(const QStyleOptionToolButton* self);
void QStyleOptionToolButton_SetIconSize(QStyleOptionToolButton* self, QSize* iconSize);
libqt_string QStyleOptionToolButton_Text(const QStyleOptionToolButton* self);
void QStyleOptionToolButton_SetText(QStyleOptionToolButton* self, libqt_string text);
int QStyleOptionToolButton_ArrowType(const QStyleOptionToolButton* self);
void QStyleOptionToolButton_SetArrowType(QStyleOptionToolButton* self, int arrowType);
int QStyleOptionToolButton_ToolButtonStyle(const QStyleOptionToolButton* self);
void QStyleOptionToolButton_SetToolButtonStyle(QStyleOptionToolButton* self, int toolButtonStyle);
QPoint* QStyleOptionToolButton_Pos(const QStyleOptionToolButton* self);
void QStyleOptionToolButton_SetPos(QStyleOptionToolButton* self, QPoint* pos);
QFont* QStyleOptionToolButton_Font(const QStyleOptionToolButton* self);
void QStyleOptionToolButton_SetFont(QStyleOptionToolButton* self, QFont* font);
void QStyleOptionToolButton_Delete(QStyleOptionToolButton* self);

QStyleOptionComboBox* QStyleOptionComboBox_new();
QStyleOptionComboBox* QStyleOptionComboBox_new2(const QStyleOptionComboBox* other);
bool QStyleOptionComboBox_Editable(const QStyleOptionComboBox* self);
void QStyleOptionComboBox_SetEditable(QStyleOptionComboBox* self, bool editable);
QRect* QStyleOptionComboBox_PopupRect(const QStyleOptionComboBox* self);
void QStyleOptionComboBox_SetPopupRect(QStyleOptionComboBox* self, QRect* popupRect);
bool QStyleOptionComboBox_Frame(const QStyleOptionComboBox* self);
void QStyleOptionComboBox_SetFrame(QStyleOptionComboBox* self, bool frame);
libqt_string QStyleOptionComboBox_CurrentText(const QStyleOptionComboBox* self);
void QStyleOptionComboBox_SetCurrentText(QStyleOptionComboBox* self, libqt_string currentText);
QIcon* QStyleOptionComboBox_CurrentIcon(const QStyleOptionComboBox* self);
void QStyleOptionComboBox_SetCurrentIcon(QStyleOptionComboBox* self, QIcon* currentIcon);
QSize* QStyleOptionComboBox_IconSize(const QStyleOptionComboBox* self);
void QStyleOptionComboBox_SetIconSize(QStyleOptionComboBox* self, QSize* iconSize);
int QStyleOptionComboBox_TextAlignment(const QStyleOptionComboBox* self);
void QStyleOptionComboBox_SetTextAlignment(QStyleOptionComboBox* self, int textAlignment);
void QStyleOptionComboBox_Delete(QStyleOptionComboBox* self);

QStyleOptionTitleBar* QStyleOptionTitleBar_new();
QStyleOptionTitleBar* QStyleOptionTitleBar_new2(const QStyleOptionTitleBar* other);
libqt_string QStyleOptionTitleBar_Text(const QStyleOptionTitleBar* self);
void QStyleOptionTitleBar_SetText(QStyleOptionTitleBar* self, libqt_string text);
QIcon* QStyleOptionTitleBar_Icon(const QStyleOptionTitleBar* self);
void QStyleOptionTitleBar_SetIcon(QStyleOptionTitleBar* self, QIcon* icon);
int QStyleOptionTitleBar_TitleBarState(const QStyleOptionTitleBar* self);
void QStyleOptionTitleBar_SetTitleBarState(QStyleOptionTitleBar* self, int titleBarState);
int QStyleOptionTitleBar_TitleBarFlags(const QStyleOptionTitleBar* self);
void QStyleOptionTitleBar_SetTitleBarFlags(QStyleOptionTitleBar* self, int titleBarFlags);
void QStyleOptionTitleBar_Delete(QStyleOptionTitleBar* self);

QStyleOptionGroupBox* QStyleOptionGroupBox_new();
QStyleOptionGroupBox* QStyleOptionGroupBox_new2(const QStyleOptionGroupBox* other);
int QStyleOptionGroupBox_Features(const QStyleOptionGroupBox* self);
void QStyleOptionGroupBox_SetFeatures(QStyleOptionGroupBox* self, int features);
libqt_string QStyleOptionGroupBox_Text(const QStyleOptionGroupBox* self);
void QStyleOptionGroupBox_SetText(QStyleOptionGroupBox* self, libqt_string text);
int QStyleOptionGroupBox_TextAlignment(const QStyleOptionGroupBox* self);
void QStyleOptionGroupBox_SetTextAlignment(QStyleOptionGroupBox* self, int textAlignment);
QColor* QStyleOptionGroupBox_TextColor(const QStyleOptionGroupBox* self);
void QStyleOptionGroupBox_SetTextColor(QStyleOptionGroupBox* self, QColor* textColor);
int QStyleOptionGroupBox_LineWidth(const QStyleOptionGroupBox* self);
void QStyleOptionGroupBox_SetLineWidth(QStyleOptionGroupBox* self, int lineWidth);
int QStyleOptionGroupBox_MidLineWidth(const QStyleOptionGroupBox* self);
void QStyleOptionGroupBox_SetMidLineWidth(QStyleOptionGroupBox* self, int midLineWidth);
void QStyleOptionGroupBox_Delete(QStyleOptionGroupBox* self);

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new();
QStyleOptionSizeGrip* QStyleOptionSizeGrip_new2(const QStyleOptionSizeGrip* other);
int QStyleOptionSizeGrip_Corner(const QStyleOptionSizeGrip* self);
void QStyleOptionSizeGrip_SetCorner(QStyleOptionSizeGrip* self, int corner);
void QStyleOptionSizeGrip_Delete(QStyleOptionSizeGrip* self);

QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new();
QStyleOptionGraphicsItem* QStyleOptionGraphicsItem_new2(const QStyleOptionGraphicsItem* other);
QRectF* QStyleOptionGraphicsItem_ExposedRect(const QStyleOptionGraphicsItem* self);
void QStyleOptionGraphicsItem_SetExposedRect(QStyleOptionGraphicsItem* self, QRectF* exposedRect);
double QStyleOptionGraphicsItem_LevelOfDetailFromTransform(const QTransform* worldTransform);
void QStyleOptionGraphicsItem_Delete(QStyleOptionGraphicsItem* self);

QStyleHintReturn* QStyleHintReturn_new();
QStyleHintReturn* QStyleHintReturn_new2(const QStyleHintReturn* param1);
QStyleHintReturn* QStyleHintReturn_new3(int version);
QStyleHintReturn* QStyleHintReturn_new4(int version, int typeVal);
int QStyleHintReturn_Version(const QStyleHintReturn* self);
void QStyleHintReturn_SetVersion(QStyleHintReturn* self, int version);
int QStyleHintReturn_Type(const QStyleHintReturn* self);
void QStyleHintReturn_SetType(QStyleHintReturn* self, int type);
void QStyleHintReturn_OperatorAssign(QStyleHintReturn* self, const QStyleHintReturn* param1);
void QStyleHintReturn_Delete(QStyleHintReturn* self);

QStyleHintReturnMask* QStyleHintReturnMask_new();
QStyleHintReturnMask* QStyleHintReturnMask_new2(const QStyleHintReturnMask* param1);
QRegion* QStyleHintReturnMask_Region(const QStyleHintReturnMask* self);
void QStyleHintReturnMask_SetRegion(QStyleHintReturnMask* self, QRegion* region);
void QStyleHintReturnMask_OperatorAssign(QStyleHintReturnMask* self, const QStyleHintReturnMask* param1);
void QStyleHintReturnMask_Delete(QStyleHintReturnMask* self);

QStyleHintReturnVariant* QStyleHintReturnVariant_new();
QStyleHintReturnVariant* QStyleHintReturnVariant_new2(const QStyleHintReturnVariant* param1);
QVariant* QStyleHintReturnVariant_Variant(const QStyleHintReturnVariant* self);
void QStyleHintReturnVariant_SetVariant(QStyleHintReturnVariant* self, QVariant* variant);
void QStyleHintReturnVariant_OperatorAssign(QStyleHintReturnVariant* self, const QStyleHintReturnVariant* param1);
void QStyleHintReturnVariant_Delete(QStyleHintReturnVariant* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
