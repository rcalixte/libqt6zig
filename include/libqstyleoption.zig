const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qstyleoption.html
pub const qstyleoption = struct {
    /// New constructs a new QStyleOption object.
    ///
    ///
    pub fn New() QtC.QStyleOption {
        return qtc.QStyleOption_new();
    }

    /// New2 constructs a new QStyleOption object.
    ///
    /// ``` other: QtC.QStyleOption ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOption {
        return qtc.QStyleOption_new2(@ptrCast(other));
    }

    /// New3 constructs a new QStyleOption object.
    ///
    /// ``` version: i32 ```
    pub fn New3(version: i32) QtC.QStyleOption {
        return qtc.QStyleOption_new3(@intCast(version));
    }

    /// New4 constructs a new QStyleOption object.
    ///
    /// ``` version: i32, typeVal: i32 ```
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleOption {
        return qtc.QStyleOption_new4(@intCast(version), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOption, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOption, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#dtor.QStyleOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOption ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOption_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionfocusrect.html
pub const qstyleoptionfocusrect = struct {
    /// New constructs a new QStyleOptionFocusRect object.
    ///
    ///
    pub fn New() QtC.QStyleOptionFocusRect {
        return qtc.QStyleOptionFocusRect_new();
    }

    /// New2 constructs a new QStyleOptionFocusRect object.
    ///
    /// ``` other: QtC.QStyleOptionFocusRect ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionFocusRect {
        return qtc.QStyleOptionFocusRect_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionFocusRect, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#dtor.QStyleOptionFocusRect)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionFocusRect ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionFocusRect_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionframe.html
pub const qstyleoptionframe = struct {
    /// New constructs a new QStyleOptionFrame object.
    ///
    ///
    pub fn New() QtC.QStyleOptionFrame {
        return qtc.QStyleOptionFrame_new();
    }

    /// New2 constructs a new QStyleOptionFrame object.
    ///
    /// ``` other: QtC.QStyleOptionFrame ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionFrame {
        return qtc.QStyleOptionFrame_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionFrame, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionFrame, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#dtor.QStyleOptionFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionFrame ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html
pub const qstyleoptiontabwidgetframe = struct {
    /// New constructs a new QStyleOptionTabWidgetFrame object.
    ///
    ///
    pub fn New() QtC.QStyleOptionTabWidgetFrame {
        return qtc.QStyleOptionTabWidgetFrame_new();
    }

    /// New2 constructs a new QStyleOptionTabWidgetFrame object.
    ///
    /// ``` other: QtC.QStyleOptionTabWidgetFrame ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTabWidgetFrame {
        return qtc.QStyleOptionTabWidgetFrame_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#dtor.QStyleOptionTabWidgetFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionTabWidgetFrame ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTabWidgetFrame_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html
pub const qstyleoptiontabbarbase = struct {
    /// New constructs a new QStyleOptionTabBarBase object.
    ///
    ///
    pub fn New() QtC.QStyleOptionTabBarBase {
        return qtc.QStyleOptionTabBarBase_new();
    }

    /// New2 constructs a new QStyleOptionTabBarBase object.
    ///
    /// ``` other: QtC.QStyleOptionTabBarBase ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTabBarBase {
        return qtc.QStyleOptionTabBarBase_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#dtor.QStyleOptionTabBarBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionTabBarBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTabBarBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionheader.html
pub const qstyleoptionheader = struct {
    /// New constructs a new QStyleOptionHeader object.
    ///
    ///
    pub fn New() QtC.QStyleOptionHeader {
        return qtc.QStyleOptionHeader_new();
    }

    /// New2 constructs a new QStyleOptionHeader object.
    ///
    /// ``` other: QtC.QStyleOptionHeader ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionHeader {
        return qtc.QStyleOptionHeader_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionHeader, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionHeader, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#dtor.QStyleOptionHeader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionHeader ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionHeader_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionheaderv2.html
pub const qstyleoptionheaderv2 = struct {
    /// New constructs a new QStyleOptionHeaderV2 object.
    ///
    ///
    pub fn New() QtC.QStyleOptionHeaderV2 {
        return qtc.QStyleOptionHeaderV2_new();
    }

    /// New2 constructs a new QStyleOptionHeaderV2 object.
    ///
    /// ``` other: QtC.QStyleOptionHeaderV2 ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionHeaderV2 {
        return qtc.QStyleOptionHeaderV2_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#dtor.QStyleOptionHeaderV2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionHeaderV2 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionHeaderV2_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionbutton.html
pub const qstyleoptionbutton = struct {
    /// New constructs a new QStyleOptionButton object.
    ///
    ///
    pub fn New() QtC.QStyleOptionButton {
        return qtc.QStyleOptionButton_new();
    }

    /// New2 constructs a new QStyleOptionButton object.
    ///
    /// ``` other: QtC.QStyleOptionButton ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionButton {
        return qtc.QStyleOptionButton_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionButton, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionButton, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#dtor.QStyleOptionButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionButton ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionButton_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontab.html
pub const qstyleoptiontab = struct {
    /// New constructs a new QStyleOptionTab object.
    ///
    ///
    pub fn New() QtC.QStyleOptionTab {
        return qtc.QStyleOptionTab_new();
    }

    /// New2 constructs a new QStyleOptionTab object.
    ///
    /// ``` other: QtC.QStyleOptionTab ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTab {
        return qtc.QStyleOptionTab_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionTab, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionTab, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#dtor.QStyleOptionTab)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionTab ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTab_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbar.html
pub const qstyleoptiontoolbar = struct {
    /// New constructs a new QStyleOptionToolBar object.
    ///
    ///
    pub fn New() QtC.QStyleOptionToolBar {
        return qtc.QStyleOptionToolBar_new();
    }

    /// New2 constructs a new QStyleOptionToolBar object.
    ///
    /// ``` other: QtC.QStyleOptionToolBar ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolBar {
        return qtc.QStyleOptionToolBar_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionToolBar, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#dtor.QStyleOptionToolBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionToolBar ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionprogressbar.html
pub const qstyleoptionprogressbar = struct {
    /// New constructs a new QStyleOptionProgressBar object.
    ///
    ///
    pub fn New() QtC.QStyleOptionProgressBar {
        return qtc.QStyleOptionProgressBar_new();
    }

    /// New2 constructs a new QStyleOptionProgressBar object.
    ///
    /// ``` other: QtC.QStyleOptionProgressBar ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionProgressBar {
        return qtc.QStyleOptionProgressBar_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionProgressBar, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#dtor.QStyleOptionProgressBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionProgressBar ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionProgressBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionmenuitem.html
pub const qstyleoptionmenuitem = struct {
    /// New constructs a new QStyleOptionMenuItem object.
    ///
    ///
    pub fn New() QtC.QStyleOptionMenuItem {
        return qtc.QStyleOptionMenuItem_new();
    }

    /// New2 constructs a new QStyleOptionMenuItem object.
    ///
    /// ``` other: QtC.QStyleOptionMenuItem ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionMenuItem {
        return qtc.QStyleOptionMenuItem_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionMenuItem, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#dtor.QStyleOptionMenuItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionMenuItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionMenuItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiondockwidget.html
pub const qstyleoptiondockwidget = struct {
    /// New constructs a new QStyleOptionDockWidget object.
    ///
    ///
    pub fn New() QtC.QStyleOptionDockWidget {
        return qtc.QStyleOptionDockWidget_new();
    }

    /// New2 constructs a new QStyleOptionDockWidget object.
    ///
    /// ``` other: QtC.QStyleOptionDockWidget ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionDockWidget {
        return qtc.QStyleOptionDockWidget_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionDockWidget, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#dtor.QStyleOptionDockWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionDockWidget ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionDockWidget_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionviewitem.html
pub const qstyleoptionviewitem = struct {
    /// New constructs a new QStyleOptionViewItem object.
    ///
    ///
    pub fn New() QtC.QStyleOptionViewItem {
        return qtc.QStyleOptionViewItem_new();
    }

    /// New2 constructs a new QStyleOptionViewItem object.
    ///
    /// ``` other: QtC.QStyleOptionViewItem ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionViewItem {
        return qtc.QStyleOptionViewItem_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionViewItem, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#dtor.QStyleOptionViewItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionViewItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionViewItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbox.html
pub const qstyleoptiontoolbox = struct {
    /// New constructs a new QStyleOptionToolBox object.
    ///
    ///
    pub fn New() QtC.QStyleOptionToolBox {
        return qtc.QStyleOptionToolBox_new();
    }

    /// New2 constructs a new QStyleOptionToolBox object.
    ///
    /// ``` other: QtC.QStyleOptionToolBox ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolBox {
        return qtc.QStyleOptionToolBox_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionToolBox, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#dtor.QStyleOptionToolBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionToolBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionrubberband.html
pub const qstyleoptionrubberband = struct {
    /// New constructs a new QStyleOptionRubberBand object.
    ///
    ///
    pub fn New() QtC.QStyleOptionRubberBand {
        return qtc.QStyleOptionRubberBand_new();
    }

    /// New2 constructs a new QStyleOptionRubberBand object.
    ///
    /// ``` other: QtC.QStyleOptionRubberBand ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionRubberBand {
        return qtc.QStyleOptionRubberBand_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionRubberBand, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#dtor.QStyleOptionRubberBand)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionRubberBand ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionRubberBand_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptioncomplex.html
pub const qstyleoptioncomplex = struct {
    /// New constructs a new QStyleOptionComplex object.
    ///
    ///
    pub fn New() QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new();
    }

    /// New2 constructs a new QStyleOptionComplex object.
    ///
    /// ``` other: QtC.QStyleOptionComplex ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new2(@ptrCast(other));
    }

    /// New3 constructs a new QStyleOptionComplex object.
    ///
    /// ``` version: i32 ```
    pub fn New3(version: i32) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new3(@intCast(version));
    }

    /// New4 constructs a new QStyleOptionComplex object.
    ///
    /// ``` version: i32, typeVal: i32 ```
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleOptionComplex {
        return qtc.QStyleOptionComplex_new4(@intCast(version), @intCast(typeVal));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionComplex, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionComplex, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#dtor.QStyleOptionComplex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionComplex ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionComplex_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionslider.html
pub const qstyleoptionslider = struct {
    /// New constructs a new QStyleOptionSlider object.
    ///
    ///
    pub fn New() QtC.QStyleOptionSlider {
        return qtc.QStyleOptionSlider_new();
    }

    /// New2 constructs a new QStyleOptionSlider object.
    ///
    /// ``` other: QtC.QStyleOptionSlider ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSlider {
        return qtc.QStyleOptionSlider_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionSlider, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionSlider, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#dtor.QStyleOptionSlider)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionSlider ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSlider_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionspinbox.html
pub const qstyleoptionspinbox = struct {
    /// New constructs a new QStyleOptionSpinBox object.
    ///
    ///
    pub fn New() QtC.QStyleOptionSpinBox {
        return qtc.QStyleOptionSpinBox_new();
    }

    /// New2 constructs a new QStyleOptionSpinBox object.
    ///
    /// ``` other: QtC.QStyleOptionSpinBox ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSpinBox {
        return qtc.QStyleOptionSpinBox_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionSpinBox, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#dtor.QStyleOptionSpinBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionSpinBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSpinBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html
pub const qstyleoptiontoolbutton = struct {
    /// New constructs a new QStyleOptionToolButton object.
    ///
    ///
    pub fn New() QtC.QStyleOptionToolButton {
        return qtc.QStyleOptionToolButton_new();
    }

    /// New2 constructs a new QStyleOptionToolButton object.
    ///
    /// ``` other: QtC.QStyleOptionToolButton ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionToolButton {
        return qtc.QStyleOptionToolButton_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionToolButton, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#dtor.QStyleOptionToolButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionToolButton ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionToolButton_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptioncombobox.html
pub const qstyleoptioncombobox = struct {
    /// New constructs a new QStyleOptionComboBox object.
    ///
    ///
    pub fn New() QtC.QStyleOptionComboBox {
        return qtc.QStyleOptionComboBox_new();
    }

    /// New2 constructs a new QStyleOptionComboBox object.
    ///
    /// ``` other: QtC.QStyleOptionComboBox ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionComboBox {
        return qtc.QStyleOptionComboBox_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionComboBox, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#dtor.QStyleOptionComboBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionComboBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionComboBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiontitlebar.html
pub const qstyleoptiontitlebar = struct {
    /// New constructs a new QStyleOptionTitleBar object.
    ///
    ///
    pub fn New() QtC.QStyleOptionTitleBar {
        return qtc.QStyleOptionTitleBar_new();
    }

    /// New2 constructs a new QStyleOptionTitleBar object.
    ///
    /// ``` other: QtC.QStyleOptionTitleBar ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionTitleBar {
        return qtc.QStyleOptionTitleBar_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionTitleBar, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#dtor.QStyleOptionTitleBar)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionTitleBar ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionTitleBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiongroupbox.html
pub const qstyleoptiongroupbox = struct {
    /// New constructs a new QStyleOptionGroupBox object.
    ///
    ///
    pub fn New() QtC.QStyleOptionGroupBox {
        return qtc.QStyleOptionGroupBox_new();
    }

    /// New2 constructs a new QStyleOptionGroupBox object.
    ///
    /// ``` other: QtC.QStyleOptionGroupBox ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionGroupBox {
        return qtc.QStyleOptionGroupBox_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionGroupBox, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#dtor.QStyleOptionGroupBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionGroupBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionGroupBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptionsizegrip.html
pub const qstyleoptionsizegrip = struct {
    /// New constructs a new QStyleOptionSizeGrip object.
    ///
    ///
    pub fn New() QtC.QStyleOptionSizeGrip {
        return qtc.QStyleOptionSizeGrip_new();
    }

    /// New2 constructs a new QStyleOptionSizeGrip object.
    ///
    /// ``` other: QtC.QStyleOptionSizeGrip ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionSizeGrip {
        return qtc.QStyleOptionSizeGrip_new2(@ptrCast(other));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#dtor.QStyleOptionSizeGrip)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionSizeGrip ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionSizeGrip_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html
pub const qstyleoptiongraphicsitem = struct {
    /// New constructs a new QStyleOptionGraphicsItem object.
    ///
    ///
    pub fn New() QtC.QStyleOptionGraphicsItem {
        return qtc.QStyleOptionGraphicsItem_new();
    }

    /// New2 constructs a new QStyleOptionGraphicsItem object.
    ///
    /// ``` other: QtC.QStyleOptionGraphicsItem ```
    pub fn New2(other: ?*anyopaque) QtC.QStyleOptionGraphicsItem {
        return qtc.QStyleOptionGraphicsItem_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
    ///
    /// ``` worldTransform: QtC.QTransform ```
    pub fn LevelOfDetailFromTransform(worldTransform: ?*anyopaque) f64 {
        return qtc.QStyleOptionGraphicsItem_LevelOfDetailFromTransform(@ptrCast(worldTransform));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, w: QtC.QWidget ```
    pub fn InitFrom(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStyleOption_InitFrom(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QStyleOption
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem, other: QtC.QStyleOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStyleOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#dtor.QStyleOptionGraphicsItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleOptionGraphicsItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleOptionGraphicsItem_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturn.html
pub const qstylehintreturn = struct {
    /// New constructs a new QStyleHintReturn object.
    ///
    ///
    pub fn New() QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new();
    }

    /// New2 constructs a new QStyleHintReturn object.
    ///
    /// ``` param1: QtC.QStyleHintReturn ```
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QStyleHintReturn object.
    ///
    /// ``` version: i32 ```
    pub fn New3(version: i32) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new3(@intCast(version));
    }

    /// New4 constructs a new QStyleHintReturn object.
    ///
    /// ``` version: i32, typeVal: i32 ```
    pub fn New4(version: i32, typeVal: i32) QtC.QStyleHintReturn {
        return qtc.QStyleHintReturn_new4(@intCast(version), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#operator=)
    ///
    /// ``` self: QtC.QStyleHintReturn, param1: QtC.QStyleHintReturn ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturn_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#dtor.QStyleHintReturn)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleHintReturn ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturn_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturnmask.html
pub const qstylehintreturnmask = struct {
    /// New constructs a new QStyleHintReturnMask object.
    ///
    ///
    pub fn New() QtC.QStyleHintReturnMask {
        return qtc.QStyleHintReturnMask_new();
    }

    /// New2 constructs a new QStyleHintReturnMask object.
    ///
    /// ``` param1: QtC.QStyleHintReturnMask ```
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturnMask {
        return qtc.QStyleHintReturnMask_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator=)
    ///
    /// ``` self: QtC.QStyleHintReturnMask, param1: QtC.QStyleHintReturnMask ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturnMask_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#dtor.QStyleHintReturnMask)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleHintReturnMask ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturnMask_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstylehintreturnvariant.html
pub const qstylehintreturnvariant = struct {
    /// New constructs a new QStyleHintReturnVariant object.
    ///
    ///
    pub fn New() QtC.QStyleHintReturnVariant {
        return qtc.QStyleHintReturnVariant_new();
    }

    /// New2 constructs a new QStyleHintReturnVariant object.
    ///
    /// ``` param1: QtC.QStyleHintReturnVariant ```
    pub fn New2(param1: ?*anyopaque) QtC.QStyleHintReturnVariant {
        return qtc.QStyleHintReturnVariant_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator=)
    ///
    /// ``` self: QtC.QStyleHintReturnVariant, param1: QtC.QStyleHintReturnVariant ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStyleHintReturnVariant_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#dtor.QStyleHintReturnVariant)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStyleHintReturnVariant ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStyleHintReturnVariant_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qstyleoption.html#types
pub const enums = struct {
    pub const QStyleOption__OptionType = enum {
        pub const SO_Default: i32 = 0;
        pub const SO_FocusRect: i32 = 1;
        pub const SO_Button: i32 = 2;
        pub const SO_Tab: i32 = 3;
        pub const SO_MenuItem: i32 = 4;
        pub const SO_Frame: i32 = 5;
        pub const SO_ProgressBar: i32 = 6;
        pub const SO_ToolBox: i32 = 7;
        pub const SO_Header: i32 = 8;
        pub const SO_DockWidget: i32 = 9;
        pub const SO_ViewItem: i32 = 10;
        pub const SO_TabWidgetFrame: i32 = 11;
        pub const SO_TabBarBase: i32 = 12;
        pub const SO_RubberBand: i32 = 13;
        pub const SO_ToolBar: i32 = 14;
        pub const SO_GraphicsItem: i32 = 15;
        pub const SO_Complex: i32 = 983040;
        pub const SO_Slider: i32 = 983041;
        pub const SO_SpinBox: i32 = 983042;
        pub const SO_ToolButton: i32 = 983043;
        pub const SO_ComboBox: i32 = 983044;
        pub const SO_TitleBar: i32 = 983045;
        pub const SO_GroupBox: i32 = 983046;
        pub const SO_SizeGrip: i32 = 983047;
        pub const SO_CustomBase: i32 = 3840;
        pub const SO_ComplexCustomBase: i32 = 251658240;
    };

    pub const QStyleOption__StyleOptionType = enum {
        pub const Type: i32 = 0;
    };

    pub const QStyleOption__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFocusRect__StyleOptionType = enum {
        pub const Type: i32 = 1;
    };

    pub const QStyleOptionFocusRect__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFrame__StyleOptionType = enum {
        pub const Type: i32 = 5;
    };

    pub const QStyleOptionFrame__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionFrame__FrameFeature = enum {
        pub const None: i32 = 0;
        pub const Flat: i32 = 1;
        pub const Rounded: i32 = 2;
    };

    pub const QStyleOptionTabWidgetFrame__StyleOptionType = enum {
        pub const Type: i32 = 11;
    };

    pub const QStyleOptionTabWidgetFrame__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTabBarBase__StyleOptionType = enum {
        pub const Type: i32 = 12;
    };

    pub const QStyleOptionTabBarBase__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionHeader__StyleOptionType = enum {
        pub const Type: i32 = 8;
    };

    pub const QStyleOptionHeader__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionHeader__SectionPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneSection: i32 = 3;
    };

    pub const QStyleOptionHeader__SelectedPosition = enum {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
        pub const NextAndPreviousAreSelected: i32 = 3;
    };

    pub const QStyleOptionHeader__SortIndicator = enum {
        pub const None: i32 = 0;
        pub const SortUp: i32 = 1;
        pub const SortDown: i32 = 2;
    };

    pub const QStyleOptionHeaderV2__StyleOptionType = enum {
        pub const Type: i32 = 8;
    };

    pub const QStyleOptionHeaderV2__StyleOptionVersion = enum {
        pub const Version: i32 = 2;
    };

    pub const QStyleOptionButton__StyleOptionType = enum {
        pub const Type: i32 = 2;
    };

    pub const QStyleOptionButton__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionButton__ButtonFeature = enum {
        pub const None: i32 = 0;
        pub const Flat: i32 = 1;
        pub const HasMenu: i32 = 2;
        pub const DefaultButton: i32 = 4;
        pub const AutoDefaultButton: i32 = 8;
        pub const CommandLinkButton: i32 = 16;
    };

    pub const QStyleOptionTab__StyleOptionType = enum {
        pub const Type: i32 = 3;
    };

    pub const QStyleOptionTab__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTab__TabPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneTab: i32 = 3;
    };

    pub const QStyleOptionTab__SelectedPosition = enum {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
    };

    pub const QStyleOptionTab__CornerWidget = enum {
        pub const NoCornerWidgets: i32 = 0;
        pub const LeftCornerWidget: i32 = 1;
        pub const RightCornerWidget: i32 = 2;
    };

    pub const QStyleOptionTab__TabFeature = enum {
        pub const None: i32 = 0;
        pub const HasFrame: i32 = 1;
    };

    pub const QStyleOptionToolBar__StyleOptionType = enum {
        pub const Type: i32 = 14;
    };

    pub const QStyleOptionToolBar__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolBar__ToolBarPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOne: i32 = 3;
    };

    pub const QStyleOptionToolBar__ToolBarFeature = enum {
        pub const None: i32 = 0;
        pub const Movable: i32 = 1;
    };

    pub const QStyleOptionProgressBar__StyleOptionType = enum {
        pub const Type: i32 = 6;
    };

    pub const QStyleOptionProgressBar__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionMenuItem__StyleOptionType = enum {
        pub const Type: i32 = 4;
    };

    pub const QStyleOptionMenuItem__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionMenuItem__MenuItemType = enum {
        pub const Normal: i32 = 0;
        pub const DefaultItem: i32 = 1;
        pub const Separator: i32 = 2;
        pub const SubMenu: i32 = 3;
        pub const Scroller: i32 = 4;
        pub const TearOff: i32 = 5;
        pub const Margin: i32 = 6;
        pub const EmptyArea: i32 = 7;
    };

    pub const QStyleOptionMenuItem__CheckType = enum {
        pub const NotCheckable: i32 = 0;
        pub const Exclusive: i32 = 1;
        pub const NonExclusive: i32 = 2;
    };

    pub const QStyleOptionDockWidget__StyleOptionType = enum {
        pub const Type: i32 = 9;
    };

    pub const QStyleOptionDockWidget__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionViewItem__StyleOptionType = enum {
        pub const Type: i32 = 10;
    };

    pub const QStyleOptionViewItem__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionViewItem__Position = enum {
        pub const Left: i32 = 0;
        pub const Right: i32 = 1;
        pub const Top: i32 = 2;
        pub const Bottom: i32 = 3;
    };

    pub const QStyleOptionViewItem__ViewItemFeature = enum {
        pub const None: i32 = 0;
        pub const WrapText: i32 = 1;
        pub const Alternate: i32 = 2;
        pub const HasCheckIndicator: i32 = 4;
        pub const HasDisplay: i32 = 8;
        pub const HasDecoration: i32 = 16;
    };

    pub const QStyleOptionViewItem__ViewItemPosition = enum {
        pub const Invalid: i32 = 0;
        pub const Beginning: i32 = 1;
        pub const Middle: i32 = 2;
        pub const End: i32 = 3;
        pub const OnlyOne: i32 = 4;
    };

    pub const QStyleOptionToolBox__StyleOptionType = enum {
        pub const Type: i32 = 7;
    };

    pub const QStyleOptionToolBox__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolBox__TabPosition = enum {
        pub const Beginning: i32 = 0;
        pub const Middle: i32 = 1;
        pub const End: i32 = 2;
        pub const OnlyOneTab: i32 = 3;
    };

    pub const QStyleOptionToolBox__SelectedPosition = enum {
        pub const NotAdjacent: i32 = 0;
        pub const NextIsSelected: i32 = 1;
        pub const PreviousIsSelected: i32 = 2;
    };

    pub const QStyleOptionRubberBand__StyleOptionType = enum {
        pub const Type: i32 = 13;
    };

    pub const QStyleOptionRubberBand__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionComplex__StyleOptionType = enum {
        pub const Type: i32 = 983040;
    };

    pub const QStyleOptionComplex__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSlider__StyleOptionType = enum {
        pub const Type: i32 = 983041;
    };

    pub const QStyleOptionSlider__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSpinBox__StyleOptionType = enum {
        pub const Type: i32 = 983042;
    };

    pub const QStyleOptionSpinBox__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolButton__StyleOptionType = enum {
        pub const Type: i32 = 983043;
    };

    pub const QStyleOptionToolButton__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionToolButton__ToolButtonFeature = enum {
        pub const None: i32 = 0;
        pub const Arrow: i32 = 1;
        pub const Menu: i32 = 4;
        pub const MenuButtonPopup: i32 = 4;
        pub const PopupDelay: i32 = 8;
        pub const HasMenu: i32 = 16;
    };

    pub const QStyleOptionComboBox__StyleOptionType = enum {
        pub const Type: i32 = 983044;
    };

    pub const QStyleOptionComboBox__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionTitleBar__StyleOptionType = enum {
        pub const Type: i32 = 983045;
    };

    pub const QStyleOptionTitleBar__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionGroupBox__StyleOptionType = enum {
        pub const Type: i32 = 983046;
    };

    pub const QStyleOptionGroupBox__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionSizeGrip__StyleOptionType = enum {
        pub const Type: i32 = 983047;
    };

    pub const QStyleOptionSizeGrip__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleOptionGraphicsItem__StyleOptionType = enum {
        pub const Type: i32 = 15;
    };

    pub const QStyleOptionGraphicsItem__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturn__HintReturnType = enum {
        pub const SH_Default: i32 = 61440;
        pub const SH_Mask: i32 = 61441;
        pub const SH_Variant: i32 = 61442;
    };

    pub const QStyleHintReturn__StyleOptionType = enum {
        pub const Type: i32 = 61440;
    };

    pub const QStyleHintReturn__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturnMask__StyleOptionType = enum {
        pub const Type: i32 = 61441;
    };

    pub const QStyleHintReturnMask__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };

    pub const QStyleHintReturnVariant__StyleOptionType = enum {
        pub const Type: i32 = 61442;
    };

    pub const QStyleHintReturnVariant__StyleOptionVersion = enum {
        pub const Version: i32 = 1;
    };
};
