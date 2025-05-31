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

void QStyleOptionFocusRect_Delete(QStyleOptionFocusRect* self) {
    delete self;
}

QStyleOptionFrame* QStyleOptionFrame_new() {
    return new QStyleOptionFrame();
}

QStyleOptionFrame* QStyleOptionFrame_new2(const QStyleOptionFrame* other) {
    return new QStyleOptionFrame(*other);
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

void QStyleOptionTabWidgetFrame_Delete(QStyleOptionTabWidgetFrame* self) {
    delete self;
}

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new() {
    return new QStyleOptionTabBarBase();
}

QStyleOptionTabBarBase* QStyleOptionTabBarBase_new2(const QStyleOptionTabBarBase* other) {
    return new QStyleOptionTabBarBase(*other);
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

void QStyleOptionHeader_Delete(QStyleOptionHeader* self) {
    delete self;
}

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new() {
    return new QStyleOptionHeaderV2();
}

QStyleOptionHeaderV2* QStyleOptionHeaderV2_new2(const QStyleOptionHeaderV2* other) {
    return new QStyleOptionHeaderV2(*other);
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

void QStyleOptionButton_Delete(QStyleOptionButton* self) {
    delete self;
}

QStyleOptionTab* QStyleOptionTab_new() {
    return new QStyleOptionTab();
}

QStyleOptionTab* QStyleOptionTab_new2(const QStyleOptionTab* other) {
    return new QStyleOptionTab(*other);
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

void QStyleOptionToolBar_Delete(QStyleOptionToolBar* self) {
    delete self;
}

QStyleOptionProgressBar* QStyleOptionProgressBar_new() {
    return new QStyleOptionProgressBar();
}

QStyleOptionProgressBar* QStyleOptionProgressBar_new2(const QStyleOptionProgressBar* other) {
    return new QStyleOptionProgressBar(*other);
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

void QStyleOptionMenuItem_Delete(QStyleOptionMenuItem* self) {
    delete self;
}

QStyleOptionDockWidget* QStyleOptionDockWidget_new() {
    return new QStyleOptionDockWidget();
}

QStyleOptionDockWidget* QStyleOptionDockWidget_new2(const QStyleOptionDockWidget* other) {
    return new QStyleOptionDockWidget(*other);
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

void QStyleOptionViewItem_Delete(QStyleOptionViewItem* self) {
    delete self;
}

QStyleOptionToolBox* QStyleOptionToolBox_new() {
    return new QStyleOptionToolBox();
}

QStyleOptionToolBox* QStyleOptionToolBox_new2(const QStyleOptionToolBox* other) {
    return new QStyleOptionToolBox(*other);
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

void QStyleOptionComplex_Delete(QStyleOptionComplex* self) {
    delete self;
}

QStyleOptionSlider* QStyleOptionSlider_new() {
    return new QStyleOptionSlider();
}

QStyleOptionSlider* QStyleOptionSlider_new2(const QStyleOptionSlider* other) {
    return new QStyleOptionSlider(*other);
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

void QStyleOptionSpinBox_Delete(QStyleOptionSpinBox* self) {
    delete self;
}

QStyleOptionToolButton* QStyleOptionToolButton_new() {
    return new QStyleOptionToolButton();
}

QStyleOptionToolButton* QStyleOptionToolButton_new2(const QStyleOptionToolButton* other) {
    return new QStyleOptionToolButton(*other);
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

void QStyleOptionComboBox_Delete(QStyleOptionComboBox* self) {
    delete self;
}

QStyleOptionTitleBar* QStyleOptionTitleBar_new() {
    return new QStyleOptionTitleBar();
}

QStyleOptionTitleBar* QStyleOptionTitleBar_new2(const QStyleOptionTitleBar* other) {
    return new QStyleOptionTitleBar(*other);
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

void QStyleOptionGroupBox_Delete(QStyleOptionGroupBox* self) {
    delete self;
}

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new() {
    return new QStyleOptionSizeGrip();
}

QStyleOptionSizeGrip* QStyleOptionSizeGrip_new2(const QStyleOptionSizeGrip* other) {
    return new QStyleOptionSizeGrip(*other);
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

void QStyleHintReturnVariant_OperatorAssign(QStyleHintReturnVariant* self, const QStyleHintReturnVariant* param1) {
    self->operator=(*param1);
}

void QStyleHintReturnVariant_Delete(QStyleHintReturnVariant* self) {
    delete self;
}
