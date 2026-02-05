const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const abstractformwindowcursor_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html)
pub const qdesignerformwindowcursorinterface = struct {
    /// New constructs a new QDesignerFormWindowCursorInterface object.
    ///
    pub fn New() QtC.QDesignerFormWindowCursorInterface {
        return qtc.QDesignerFormWindowCursorInterface_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn FormWindow(self: ?*anyopaque) QtC.QDesignerFormWindowInterface {
        return qtc.QDesignerFormWindowCursorInterface_FormWindow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDesignerFormWindowInterface `
    ///
    pub fn OnFormWindow(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowCursorInterface_OnFormWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn QBaseFormWindow(self: ?*anyopaque) QtC.QDesignerFormWindowInterface {
        return qtc.QDesignerFormWindowCursorInterface_QBaseFormWindow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` op: abstractformwindowcursor_enums.MoveOperation `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn MovePosition(self: ?*anyopaque, op: i32, mode: i32) bool {
        return qtc.QDesignerFormWindowCursorInterface_MovePosition(@ptrCast(self), @intCast(op), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowCursorInterface, op: abstractformwindowcursor_enums.MoveOperation, mode: abstractformwindowcursor_enums.MoveMode) callconv(.c) bool `
    ///
    pub fn OnMovePosition(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) bool) void {
        qtc.QDesignerFormWindowCursorInterface_OnMovePosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` op: abstractformwindowcursor_enums.MoveOperation `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn QBaseMovePosition(self: ?*anyopaque, op: i32, mode: i32) bool {
        return qtc.QDesignerFormWindowCursorInterface_QBaseMovePosition(@ptrCast(self), @intCast(op), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn Position(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowCursorInterface_Position(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPosition(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn QBasePosition(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowCursorInterface_QBasePosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` pos: i32 `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn SetPosition(self: ?*anyopaque, pos: i32, mode: i32) void {
        qtc.QDesignerFormWindowCursorInterface_SetPosition(@ptrCast(self), @intCast(pos), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowCursorInterface, pos: i32, mode: abstractformwindowcursor_enums.MoveMode) callconv(.c) void `
    ///
    pub fn OnSetPosition(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetPosition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` pos: i32 `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn QBaseSetPosition(self: ?*anyopaque, pos: i32, mode: i32) void {
        qtc.QDesignerFormWindowCursorInterface_QBaseSetPosition(@ptrCast(self), @intCast(pos), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn Current(self: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerFormWindowCursorInterface_Current(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWidget `
    ///
    pub fn OnCurrent(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnCurrent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn QBaseCurrent(self: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerFormWindowCursorInterface_QBaseCurrent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn WidgetCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowCursorInterface_WidgetCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnWidgetCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnWidgetCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn QBaseWidgetCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowCursorInterface_QBaseWidgetCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn Widget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QDesignerFormWindowCursorInterface_Widget(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowCursorInterface, index: i32) callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn QBaseWidget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QDesignerFormWindowCursorInterface_QBaseWidget(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn HasSelection(self: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowCursorInterface_HasSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasSelection(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerFormWindowCursorInterface_OnHasSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn QBaseHasSelection(self: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowCursorInterface_QBaseHasSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn SelectedWidgetCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowCursorInterface_SelectedWidgetCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSelectedWidgetCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnSelectedWidgetCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn QBaseSelectedWidgetCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerFormWindowCursorInterface_QBaseSelectedWidgetCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn SelectedWidget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QDesignerFormWindowCursorInterface_SelectedWidget(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowCursorInterface, index: i32) callconv(.c) QtC.QWidget `
    ///
    pub fn OnSelectedWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnSelectedWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn QBaseSelectedWidget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QDesignerFormWindowCursorInterface_QBaseSelectedWidget(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_SetProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowCursorInterface, name: [*:0]const u8, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseSetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_QBaseSetProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetWidgetProperty(self: ?*anyopaque, widget: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_SetWidgetProperty(@ptrCast(self), @ptrCast(widget), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowCursorInterface, widget: QtC.QWidget, name: [*:0]const u8, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetWidgetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetWidgetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseSetWidgetProperty(self: ?*anyopaque, widget: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_QBaseSetWidgetProperty(@ptrCast(self), @ptrCast(widget), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ResetWidgetProperty(self: ?*anyopaque, widget: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_ResetWidgetProperty(@ptrCast(self), @ptrCast(widget), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerFormWindowCursorInterface, widget: QtC.QWidget, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnResetWidgetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnResetWidgetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QtC.QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseResetWidgetProperty(self: ?*anyopaque, widget: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_QBaseResetWidgetProperty(@ptrCast(self), @ptrCast(widget), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#isWidgetSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn IsWidgetSelected(self: ?*anyopaque, widget: ?*anyopaque) bool {
        return qtc.QDesignerFormWindowCursorInterface_IsWidgetSelected(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#dtor.QDesignerFormWindowCursorInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerFormWindowCursorInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerFormWindowCursorInterface_Delete(@ptrCast(self));
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
