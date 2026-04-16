const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QWidget = @import("libqt6").QWidget;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html)
pub const QDesignerContainerExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerContainerExtension,

    pub const _is_QDesignerContainerExtension = {};

    /// New constructs a new QDesignerContainerExtension object.
    ///
    pub fn New() QDesignerContainerExtension {
        return .{ .ptr = qtc.QDesignerContainerExtension_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn Count(self: QDesignerContainerExtension) i32 {
        return qtc.QDesignerContainerExtension_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QDesignerContainerExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerContainerExtension_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn SuperCount(self: QDesignerContainerExtension) i32 {
        return qtc.QDesignerContainerExtension_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn Widget(self: QDesignerContainerExtension, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerContainerExtension_Widget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension, index: i32) callconv(.c) QWidget `
    ///
    pub fn OnWidget(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32) callconv(.c) QWidget) void {
        qtc.QDesignerContainerExtension_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperWidget(self: QDesignerContainerExtension, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerContainerExtension_SuperWidget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn CurrentIndex(self: QDesignerContainerExtension) i32 {
        return qtc.QDesignerContainerExtension_CurrentIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCurrentIndex(self: QDesignerContainerExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerContainerExtension_OnCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentIndex` instead
    ///
    pub const QBaseCurrentIndex = SuperCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn SuperCurrentIndex(self: QDesignerContainerExtension) i32 {
        return qtc.QDesignerContainerExtension_SuperCurrentIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentIndex(self: QDesignerContainerExtension, index: i32) void {
        qtc.QDesignerContainerExtension_SetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension, index: i32) callconv(.c) void `
    ///
    pub fn OnSetCurrentIndex(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnSetCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentIndex` instead
    ///
    pub const QBaseSetCurrentIndex = SuperSetCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperSetCurrentIndex(self: QDesignerContainerExtension, index: i32) void {
        qtc.QDesignerContainerExtension_SuperSetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn CanAddWidget(self: QDesignerContainerExtension) bool {
        return qtc.QDesignerContainerExtension_CanAddWidget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanAddWidget(self: QDesignerContainerExtension, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerContainerExtension_OnCanAddWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanAddWidget` instead
    ///
    pub const QBaseCanAddWidget = SuperCanAddWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn SuperCanAddWidget(self: QDesignerContainerExtension) bool {
        return qtc.QDesignerContainerExtension_SuperCanAddWidget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` widget: QWidget `
    ///
    pub fn AddWidget(self: QDesignerContainerExtension, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerContainerExtension_AddWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnAddWidget(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, QWidget) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnAddWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddWidget` instead
    ///
    pub const QBaseAddWidget = SuperAddWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperAddWidget(self: QDesignerContainerExtension, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerContainerExtension_SuperAddWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` widget: QWidget `
    ///
    pub fn InsertWidget(self: QDesignerContainerExtension, index: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerContainerExtension_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension, index: i32, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnInsertWidget(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32, QWidget) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnInsertWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertWidget` instead
    ///
    pub const QBaseInsertWidget = SuperInsertWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperInsertWidget(self: QDesignerContainerExtension, index: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QDesignerContainerExtension_SuperInsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn CanRemove(self: QDesignerContainerExtension, index: i32) bool {
        return qtc.QDesignerContainerExtension_CanRemove(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnCanRemove(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerContainerExtension_OnCanRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanRemove` instead
    ///
    pub const QBaseCanRemove = SuperCanRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperCanRemove(self: QDesignerContainerExtension, index: i32) bool {
        return qtc.QDesignerContainerExtension_SuperCanRemove(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn Remove(self: QDesignerContainerExtension, index: i32) void {
        qtc.QDesignerContainerExtension_Remove(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension, index: i32) callconv(.c) void `
    ///
    pub fn OnRemove(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemove` instead
    ///
    pub const QBaseRemove = SuperRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperRemove(self: QDesignerContainerExtension, index: i32) void {
        qtc.QDesignerContainerExtension_SuperRemove(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#dtor.QDesignerContainerExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn Delete(self: QDesignerContainerExtension) void {
        qtc.QDesignerContainerExtension_Delete(@ptrCast(self.ptr));
    }
};
