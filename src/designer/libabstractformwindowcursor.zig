const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDesignerFormWindowInterface = @import("libqt6").QDesignerFormWindowInterface;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const abstractformwindowcursor_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html)
pub const QDesignerFormWindowCursorInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerFormWindowCursorInterface,

    pub const _is_QDesignerFormWindowCursorInterface = {};

    /// New constructs a new QDesignerFormWindowCursorInterface object.
    ///
    pub fn New() QDesignerFormWindowCursorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn FormWindow(self: QDesignerFormWindowCursorInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_FormWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormWindowInterface `
    ///
    pub fn OnFormWindow(self: QDesignerFormWindowCursorInterface, callback: *const fn () callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowCursorInterface_OnFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFormWindow` instead
    ///
    pub const QBaseFormWindow = SuperFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn SuperFormWindow(self: QDesignerFormWindowCursorInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_SuperFormWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` op: abstractformwindowcursor_enums.MoveOperation `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn MovePosition(self: QDesignerFormWindowCursorInterface, op: i32, mode: i32) bool {
        return qtc.QDesignerFormWindowCursorInterface_MovePosition(@ptrCast(self.ptr), @bitCast(op), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface, op: abstractformwindowcursor_enums.MoveOperation, mode: abstractformwindowcursor_enums.MoveMode) callconv(.c) bool `
    ///
    pub fn OnMovePosition(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, i32, i32) callconv(.c) bool) void {
        qtc.QDesignerFormWindowCursorInterface_OnMovePosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMovePosition` instead
    ///
    pub const QBaseMovePosition = SuperMovePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` op: abstractformwindowcursor_enums.MoveOperation `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn SuperMovePosition(self: QDesignerFormWindowCursorInterface, op: i32, mode: i32) bool {
        return qtc.QDesignerFormWindowCursorInterface_SuperMovePosition(@ptrCast(self.ptr), @bitCast(op), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn Position(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPosition(self: QDesignerFormWindowCursorInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPosition` instead
    ///
    pub const QBasePosition = SuperPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn SuperPosition(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_SuperPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` pos: i32 `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn SetPosition(self: QDesignerFormWindowCursorInterface, pos: i32, mode: i32) void {
        qtc.QDesignerFormWindowCursorInterface_SetPosition(@ptrCast(self.ptr), @bitCast(pos), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface, pos: i32, mode: abstractformwindowcursor_enums.MoveMode) callconv(.c) void `
    ///
    pub fn OnSetPosition(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, i32, i32) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPosition` instead
    ///
    pub const QBaseSetPosition = SuperSetPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` pos: i32 `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn SuperSetPosition(self: QDesignerFormWindowCursorInterface, pos: i32, mode: i32) void {
        qtc.QDesignerFormWindowCursorInterface_SuperSetPosition(@ptrCast(self.ptr), @bitCast(pos), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn Current(self: QDesignerFormWindowCursorInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_Current(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn OnCurrent(self: QDesignerFormWindowCursorInterface, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnCurrent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrent` instead
    ///
    pub const QBaseCurrent = SuperCurrent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn SuperCurrent(self: QDesignerFormWindowCursorInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_SuperCurrent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn WidgetCount(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_WidgetCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnWidgetCount(self: QDesignerFormWindowCursorInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnWidgetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidgetCount` instead
    ///
    pub const QBaseWidgetCount = SuperWidgetCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn SuperWidgetCount(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_SuperWidgetCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn Widget(self: QDesignerFormWindowCursorInterface, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_Widget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface, index: i32) callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, i32) callconv(.c) QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperWidget(self: QDesignerFormWindowCursorInterface, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_SuperWidget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn HasSelection(self: QDesignerFormWindowCursorInterface) bool {
        return qtc.QDesignerFormWindowCursorInterface_HasSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasSelection(self: QDesignerFormWindowCursorInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerFormWindowCursorInterface_OnHasSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasSelection` instead
    ///
    pub const QBaseHasSelection = SuperHasSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn SuperHasSelection(self: QDesignerFormWindowCursorInterface) bool {
        return qtc.QDesignerFormWindowCursorInterface_SuperHasSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn SelectedWidgetCount(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_SelectedWidgetCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSelectedWidgetCount(self: QDesignerFormWindowCursorInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnSelectedWidgetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectedWidgetCount` instead
    ///
    pub const QBaseSelectedWidgetCount = SuperSelectedWidgetCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn SuperSelectedWidgetCount(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_SuperSelectedWidgetCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectedWidget(self: QDesignerFormWindowCursorInterface, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_SelectedWidget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface, index: i32) callconv(.c) QWidget `
    ///
    pub fn OnSelectedWidget(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, i32) callconv(.c) QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnSelectedWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectedWidget` instead
    ///
    pub const QBaseSelectedWidget = SuperSelectedWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperSelectedWidget(self: QDesignerFormWindowCursorInterface, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_SuperSelectedWidget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDesignerFormWindowCursorInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerFormWindowCursorInterface_SetProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface, name: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetProperty(self: QDesignerFormWindowCursorInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerFormWindowCursorInterface_SuperSetProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetWidgetProperty(self: QDesignerFormWindowCursorInterface, widget: anytype, name: []const u8, value: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerFormWindowCursorInterface_SetWidgetProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface, widget: QWidget, name: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn OnSetWidgetProperty(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, QWidget, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetWidgetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWidgetProperty` instead
    ///
    pub const QBaseSetWidgetProperty = SuperSetWidgetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetWidgetProperty(self: QDesignerFormWindowCursorInterface, widget: anytype, name: []const u8, value: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerFormWindowCursorInterface_SuperSetWidgetProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ResetWidgetProperty(self: QDesignerFormWindowCursorInterface, widget: anytype, name: []const u8) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_ResetWidgetProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface, widget: QWidget, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnResetWidgetProperty(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, QWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnResetWidgetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetWidgetProperty` instead
    ///
    pub const QBaseResetWidgetProperty = SuperResetWidgetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperResetWidgetProperty(self: QDesignerFormWindowCursorInterface, widget: anytype, name: []const u8) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_SuperResetWidgetProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#isWidgetSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn IsWidgetSelected(self: QDesignerFormWindowCursorInterface, widget: anytype) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.QDesignerFormWindowCursorInterface_IsWidgetSelected(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#dtor.QDesignerFormWindowCursorInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn Delete(self: QDesignerFormWindowCursorInterface) void {
        qtc.QDesignerFormWindowCursorInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractformwindowcursor.html#public-types)
pub const enums = struct {
    pub const MoveOperation = enum(i32) {
        pub const NoMove: i32 = 0;
        pub const Start: i32 = 1;
        pub const End: i32 = 2;
        pub const Next: i32 = 3;
        pub const Prev: i32 = 4;
        pub const Left: i32 = 5;
        pub const Right: i32 = 6;
        pub const Up: i32 = 7;
        pub const Down: i32 = 8;
    };

    pub const MoveMode = enum(i32) {
        pub const MoveAnchor: i32 = 0;
        pub const KeepAnchor: i32 = 1;
    };
};
