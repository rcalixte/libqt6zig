const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kcursor.html
pub const kcursor = struct {
    /// New constructs a new KCursor object.
    ///
    /// ``` other: QtC.KCursor ```
    pub fn New(other: ?*anyopaque) QtC.KCursor {
        return qtc.KCursor_new(@ptrCast(other));
    }

    /// New2 constructs a new KCursor object and invalidates the source KCursor object.
    ///
    /// ``` other: QtC.KCursor ```
    pub fn New2(other: ?*anyopaque) QtC.KCursor {
        return qtc.KCursor_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KCursor, other: QtC.KCursor ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KCursor_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KCursor, other: QtC.KCursor ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KCursor_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcursor.html#setAutoHideCursor)
    ///
    /// ``` w: QtC.QWidget, enable: bool ```
    pub fn SetAutoHideCursor(w: ?*anyopaque, enable: bool) void {
        qtc.KCursor_SetAutoHideCursor(@ptrCast(w), enable);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcursor.html#setHideCursorDelay)
    ///
    /// ``` ms: i32 ```
    pub fn SetHideCursorDelay(ms: i32) void {
        qtc.KCursor_SetHideCursorDelay(@intCast(ms));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcursor.html#hideCursorDelay)
    ///
    ///
    pub fn HideCursorDelay() i32 {
        return qtc.KCursor_HideCursorDelay();
    }

    /// [Qt documentation](https://api-staging.kde.org/kcursor.html#autoHideEventFilter)
    ///
    /// ``` param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn AutoHideEventFilter(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.KCursor_AutoHideEventFilter(@ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcursor.html#setAutoHideCursor)
    ///
    /// ``` w: QtC.QWidget, enable: bool, customEventFilter: bool ```
    pub fn SetAutoHideCursor3(w: ?*anyopaque, enable: bool, customEventFilter: bool) void {
        qtc.KCursor_SetAutoHideCursor3(@ptrCast(w), enable, customEventFilter);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcursor.html#dtor.KCursor)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCursor ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCursor_Delete(@ptrCast(self));
    }
};
