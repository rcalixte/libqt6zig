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

    /// New constructs a new KCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KCursor `
    ///
    pub fn New(other: anytype) KCursor {
        comptime _ = @TypeOf(other)._is_KCursor;
        return .{ .ptr = qtc.KCursor_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KCursor object and invalidates the source KCursor object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KCursor `
    ///
    pub fn New2(other: anytype) KCursor {
        comptime _ = @TypeOf(other)._is_KCursor;
        return .{ .ptr = qtc.KCursor_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCursor `
    ///
    /// ` other: KCursor `
    ///
    pub fn CopyAssign(self: KCursor, other: KCursor) void {
        qtc.KCursor_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KCursor `
    ///
    /// ` other: KCursor `
    ///
    pub fn MoveAssign(self: KCursor, other: KCursor) void {
        qtc.KCursor_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#setAutoHideCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoHideCursor(w: anytype, enable: bool) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.KCursor_SetAutoHideCursor(@ptrCast(w.ptr), enable);
    }

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#setHideCursorDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` ms: i32 `
    ///
    pub fn SetHideCursorDelay(ms: i32) void {
        qtc.KCursor_SetHideCursorDelay(@bitCast(ms));
    }

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#hideCursorDelay)
    ///
    pub fn HideCursorDelay() i32 {
        return qtc.KCursor_HideCursorDelay();
    }

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#autoHideEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn AutoHideEventFilter(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        qtc.KCursor_AutoHideEventFilter(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

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
    pub fn SetAutoHideCursor3(w: anytype, enable: bool, customEventFilter: bool) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.KCursor_SetAutoHideCursor3(@ptrCast(w.ptr), enable, customEventFilter);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcursor.html#dtor.KCursor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCursor `
    ///
    pub fn Delete(self: KCursor) void {
        qtc.KCursor_Delete(@ptrCast(self.ptr));
    }
};
