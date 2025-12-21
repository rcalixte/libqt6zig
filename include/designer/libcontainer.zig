const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html)
pub const qdesignercontainerextension = struct {
    /// New constructs a new QDesignerContainerExtension object.
    ///
    pub fn New() QtC.QDesignerContainerExtension {
        return qtc.QDesignerContainerExtension_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QDesignerContainerExtension_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerContainerExtension_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerContainerExtension_QBaseCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn Widget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QDesignerContainerExtension_Widget(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerContainerExtension, index: i32) callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QWidget) void {
        qtc.QDesignerContainerExtension_OnWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn QBaseWidget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QDesignerContainerExtension_QBaseWidget(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    pub fn CurrentIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerContainerExtension_CurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerContainerExtension_OnCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    pub fn QBaseCurrentIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerContainerExtension_QBaseCurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QDesignerContainerExtension_SetCurrentIndex(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerContainerExtension, index: i32) callconv(.c) void `
    ///
    pub fn OnSetCurrentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnSetCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn QBaseSetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QDesignerContainerExtension_QBaseSetCurrentIndex(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    pub fn CanAddWidget(self: ?*anyopaque) bool {
        return qtc.QDesignerContainerExtension_CanAddWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanAddWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerContainerExtension_OnCanAddWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    pub fn QBaseCanAddWidget(self: ?*anyopaque) bool {
        return qtc.QDesignerContainerExtension_QBaseCanAddWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QDesignerContainerExtension_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerContainerExtension, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnAddWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnAddWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn QBaseAddWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QDesignerContainerExtension_QBaseAddWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        qtc.QDesignerContainerExtension_InsertWidget(@ptrCast(self), @intCast(index), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerContainerExtension, index: i32, widget: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnInsertWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnInsertWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn QBaseInsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        qtc.QDesignerContainerExtension_QBaseInsertWidget(@ptrCast(self), @intCast(index), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn CanRemove(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerContainerExtension_CanRemove(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerContainerExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnCanRemove(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerContainerExtension_OnCanRemove(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn QBaseCanRemove(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerContainerExtension_QBaseCanRemove(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove(self: ?*anyopaque, index: i32) void {
        qtc.QDesignerContainerExtension_Remove(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerContainerExtension, index: i32) callconv(.c) void `
    ///
    pub fn OnRemove(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnRemove(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn QBaseRemove(self: ?*anyopaque, index: i32) void {
        qtc.QDesignerContainerExtension_QBaseRemove(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#dtor.QDesignerContainerExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerContainerExtension `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerContainerExtension_Delete(@ptrCast(self));
    }
};
