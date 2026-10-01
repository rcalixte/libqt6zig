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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerFormWindowCursorInterface object in C++ memory
    ///
    pub fn new() QDesignerFormWindowCursorInterface {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_new() };
    }

    /// ### DEPRECATED: Use `formWindow` instead
    ///
    pub const FormWindow = formWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
    ///
    /// This method must be implemented with `onFormWindow` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn formWindow(self: QDesignerFormWindowCursorInterface) QDesignerFormWindowInterface {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_FormWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFormWindow` instead
    ///
    pub const OnFormWindow = onFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface) callconv(.c) QDesignerFormWindowInterface `
    ///
    pub fn onFormWindow(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface) callconv(.c) QDesignerFormWindowInterface) void {
        qtc.QDesignerFormWindowCursorInterface_OnFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `movePosition` instead
    ///
    pub const MovePosition = movePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
    ///
    /// This method must be implemented with `onMovePosition` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` op: abstractformwindowcursor_enums.MoveOperation `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn movePosition(self: QDesignerFormWindowCursorInterface, op: i32, mode: i32) bool {
        return qtc.QDesignerFormWindowCursorInterface_MovePosition(@ptrCast(self.ptr), @bitCast(op), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onMovePosition` instead
    ///
    pub const OnMovePosition = onMovePosition;

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
    pub fn onMovePosition(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, i32, i32) callconv(.c) bool) void {
        qtc.QDesignerFormWindowCursorInterface_OnMovePosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
    ///
    /// This method must be implemented with `onPosition` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn position(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPosition` instead
    ///
    pub const OnPosition = onPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface) callconv(.c) i32 `
    ///
    pub fn onPosition(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface) callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
    ///
    /// This method must be implemented with `onSetPosition` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` pos: i32 `
    ///
    /// ` mode: abstractformwindowcursor_enums.MoveMode `
    ///
    pub fn setPosition(self: QDesignerFormWindowCursorInterface, pos: i32, mode: i32) void {
        qtc.QDesignerFormWindowCursorInterface_SetPosition(@ptrCast(self.ptr), @bitCast(pos), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSetPosition` instead
    ///
    pub const OnSetPosition = onSetPosition;

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
    pub fn onSetPosition(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, i32, i32) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `current` instead
    ///
    pub const Current = current;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
    ///
    /// This method must be implemented with `onCurrent` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn current(self: QDesignerFormWindowCursorInterface) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_Current(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrent` instead
    ///
    pub const OnCurrent = onCurrent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface) callconv(.c) QWidget `
    ///
    pub fn onCurrent(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface) callconv(.c) QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnCurrent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widgetCount` instead
    ///
    pub const WidgetCount = widgetCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
    ///
    /// This method must be implemented with `onWidgetCount` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn widgetCount(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_WidgetCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidgetCount` instead
    ///
    pub const OnWidgetCount = onWidgetCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface) callconv(.c) i32 `
    ///
    pub fn onWidgetCount(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface) callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnWidgetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
    ///
    /// This method must be implemented with `onWidget` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn widget(self: QDesignerFormWindowCursorInterface, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_Widget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

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
    pub fn onWidget(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, i32) callconv(.c) QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasSelection` instead
    ///
    pub const HasSelection = hasSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
    ///
    /// This method must be implemented with `onHasSelection` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn hasSelection(self: QDesignerFormWindowCursorInterface) bool {
        return qtc.QDesignerFormWindowCursorInterface_HasSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasSelection` instead
    ///
    pub const OnHasSelection = onHasSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface) callconv(.c) bool `
    ///
    pub fn onHasSelection(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface) callconv(.c) bool) void {
        qtc.QDesignerFormWindowCursorInterface_OnHasSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedWidgetCount` instead
    ///
    pub const SelectedWidgetCount = selectedWidgetCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
    ///
    /// This method must be implemented with `onSelectedWidgetCount` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn selectedWidgetCount(self: QDesignerFormWindowCursorInterface) i32 {
        return qtc.QDesignerFormWindowCursorInterface_SelectedWidgetCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectedWidgetCount` instead
    ///
    pub const OnSelectedWidgetCount = onSelectedWidgetCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` callback: *const fn (self: QDesignerFormWindowCursorInterface) callconv(.c) i32 `
    ///
    pub fn onSelectedWidgetCount(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface) callconv(.c) i32) void {
        qtc.QDesignerFormWindowCursorInterface_OnSelectedWidgetCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedWidget` instead
    ///
    pub const SelectedWidget = selectedWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
    ///
    /// This method must be implemented with `onSelectedWidget` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn selectedWidget(self: QDesignerFormWindowCursorInterface, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerFormWindowCursorInterface_SelectedWidget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onSelectedWidget` instead
    ///
    pub const OnSelectedWidget = onSelectedWidget;

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
    pub fn onSelectedWidget(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, i32) callconv(.c) QWidget) void {
        qtc.QDesignerFormWindowCursorInterface_OnSelectedWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
    ///
    /// This method must be implemented with `onSetProperty` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDesignerFormWindowCursorInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerFormWindowCursorInterface_SetProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

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
    pub fn onSetProperty(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setWidgetProperty` instead
    ///
    pub const SetWidgetProperty = setWidgetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
    ///
    /// This method must be implemented with `onSetWidgetProperty` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setWidgetProperty(self: QDesignerFormWindowCursorInterface, _widget: anytype, name: []const u8, value: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerFormWindowCursorInterface_SetWidgetProperty(@ptrCast(self.ptr), @ptrCast(_widget.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetWidgetProperty` instead
    ///
    pub const OnSetWidgetProperty = onSetWidgetProperty;

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
    pub fn onSetWidgetProperty(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, QWidget, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnSetWidgetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resetWidgetProperty` instead
    ///
    pub const ResetWidgetProperty = resetWidgetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
    ///
    /// This method must be implemented with `onResetWidgetProperty` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn resetWidgetProperty(self: QDesignerFormWindowCursorInterface, _widget: anytype, name: []const u8) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerFormWindowCursorInterface_ResetWidgetProperty(@ptrCast(self.ptr), @ptrCast(_widget.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onResetWidgetProperty` instead
    ///
    pub const OnResetWidgetProperty = onResetWidgetProperty;

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
    pub fn onResetWidgetProperty(self: QDesignerFormWindowCursorInterface, callback: *const fn (QDesignerFormWindowCursorInterface, QWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerFormWindowCursorInterface_OnResetWidgetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isWidgetSelected` instead
    ///
    pub const IsWidgetSelected = isWidgetSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#isWidgetSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn isWidgetSelected(self: QDesignerFormWindowCursorInterface, _widget: anytype) bool {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        return qtc.QDesignerFormWindowCursorInterface_IsWidgetSelected(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#dtor.QDesignerFormWindowCursorInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerFormWindowCursorInterface `
    ///
    pub fn delete(self: QDesignerFormWindowCursorInterface) void {
        qtc.QDesignerFormWindowCursorInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractformwindowcursor.html#public-types)
pub const enums = struct {
    pub const MoveOperation = enum {
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

    pub const MoveMode = enum {
        pub const MoveAnchor: i32 = 0;
        pub const KeepAnchor: i32 = 1;
    };
};
