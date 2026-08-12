const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QEvent = @import("libqt6").QEvent;
const QObject = @import("libqt6").QObject;
const QWidget = @import("libqt6").QWidget;

/// ### [Upstream resources](https://api.kde.org/kcursor.html)
pub const KCursor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcursor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCursor,

    pub const _is_KCursor = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KCursor `
    ///
    pub fn new(other: anytype) KCursor {
        comptime _ = @TypeOf(other)._is_KCursor;
        return .{ .ptr = qtc.KCursor_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCursor object and invalidate the source KCursor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KCursor `
    ///
    pub fn new2(other: anytype) KCursor {
        comptime _ = @TypeOf(other)._is_KCursor;
        return .{ .ptr = qtc.KCursor_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KCursor `
    ///
    /// ` other: KCursor `
    ///
    pub fn copyAssign(self: KCursor, other: KCursor) void {
        qtc.KCursor_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: KCursor `
    ///
    /// ` other: KCursor `
    ///
    pub fn moveAssign(self: KCursor, other: KCursor) void {
        qtc.KCursor_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setAutoHideCursor` instead
    ///
    pub const SetAutoHideCursor = setAutoHideCursor;

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#setAutoHideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoHideCursor(w: anytype, enable: bool) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.KCursor_SetAutoHideCursor(@ptrCast(w.ptr), enable);
    }

    /// ### DEPRECATED: Use `setHideCursorDelay` instead
    ///
    pub const SetHideCursorDelay = setHideCursorDelay;

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#setHideCursorDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` ms: i32 `
    ///
    pub fn setHideCursorDelay(ms: i32) void {
        qtc.KCursor_SetHideCursorDelay(@bitCast(ms));
    }

    /// ### DEPRECATED: Use `hideCursorDelay` instead
    ///
    pub const HideCursorDelay = hideCursorDelay;

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#hideCursorDelay)
    ///
    pub fn hideCursorDelay() i32 {
        return qtc.KCursor_HideCursorDelay();
    }

    /// ### DEPRECATED: Use `autoHideEventFilter` instead
    ///
    pub const AutoHideEventFilter = autoHideEventFilter;

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#autoHideEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn autoHideEventFilter(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        qtc.KCursor_AutoHideEventFilter(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `setAutoHideCursor3` instead
    ///
    pub const SetAutoHideCursor3 = setAutoHideCursor3;

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#setAutoHideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    /// ` enable: bool `
    ///
    /// ` customEventFilter: bool `
    ///
    pub fn setAutoHideCursor3(w: anytype, enable: bool, customEventFilter: bool) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.KCursor_SetAutoHideCursor3(@ptrCast(w.ptr), enable, customEventFilter);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#dtor.KCursor)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCursor `
    ///
    pub fn delete(self: KCursor) void {
        qtc.KCursor_Delete(@ptrCast(self.ptr));
    }
};
