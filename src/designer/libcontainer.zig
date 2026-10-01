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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerContainerExtension object in C++ memory
    ///
    pub fn new() QDesignerContainerExtension {
        return .{ .ptr = qtc.QDesignerContainerExtension_new() };
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
    ///
    /// This method must be implemented with `onCount` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn count(self: QDesignerContainerExtension) i32 {
        return qtc.QDesignerContainerExtension_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension) callconv(.c) i32 `
    ///
    pub fn onCount(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension) callconv(.c) i32) void {
        qtc.QDesignerContainerExtension_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#widget)
    ///
    /// This method must be implemented with `onWidget` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn widget(self: QDesignerContainerExtension, index: i32) QWidget {
        return .{ .ptr = qtc.QDesignerContainerExtension_Widget(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

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
    pub fn onWidget(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32) callconv(.c) QWidget) void {
        qtc.QDesignerContainerExtension_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentIndex` instead
    ///
    pub const CurrentIndex = currentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
    ///
    /// This method must be implemented with `onCurrentIndex` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn currentIndex(self: QDesignerContainerExtension) i32 {
        return qtc.QDesignerContainerExtension_CurrentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentIndex` instead
    ///
    pub const OnCurrentIndex = onCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#currentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension) callconv(.c) i32 `
    ///
    pub fn onCurrentIndex(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension) callconv(.c) i32) void {
        qtc.QDesignerContainerExtension_OnCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCurrentIndex` instead
    ///
    pub const SetCurrentIndex = setCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#setCurrentIndex)
    ///
    /// This method must be implemented with `onSetCurrentIndex` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn setCurrentIndex(self: QDesignerContainerExtension, index: i32) void {
        qtc.QDesignerContainerExtension_SetCurrentIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onSetCurrentIndex` instead
    ///
    pub const OnSetCurrentIndex = onSetCurrentIndex;

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
    pub fn onSetCurrentIndex(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnSetCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canAddWidget` instead
    ///
    pub const CanAddWidget = canAddWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
    ///
    /// This method must be implemented with `onCanAddWidget` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn canAddWidget(self: QDesignerContainerExtension) bool {
        return qtc.QDesignerContainerExtension_CanAddWidget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanAddWidget` instead
    ///
    pub const OnCanAddWidget = onCanAddWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canAddWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` callback: *const fn (self: QDesignerContainerExtension) callconv(.c) bool `
    ///
    pub fn onCanAddWidget(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension) callconv(.c) bool) void {
        qtc.QDesignerContainerExtension_OnCanAddWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addWidget` instead
    ///
    pub const AddWidget = addWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#addWidget)
    ///
    /// This method must be implemented with `onAddWidget` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn addWidget(self: QDesignerContainerExtension, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QDesignerContainerExtension_AddWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `onAddWidget` instead
    ///
    pub const OnAddWidget = onAddWidget;

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
    pub fn onAddWidget(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, QWidget) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnAddWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertWidget` instead
    ///
    pub const InsertWidget = insertWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#insertWidget)
    ///
    /// This method must be implemented with `onInsertWidget` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn insertWidget(self: QDesignerContainerExtension, index: i32, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QDesignerContainerExtension_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `onInsertWidget` instead
    ///
    pub const OnInsertWidget = onInsertWidget;

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
    pub fn onInsertWidget(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32, QWidget) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnInsertWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canRemove` instead
    ///
    pub const CanRemove = canRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#canRemove)
    ///
    /// This method must be implemented with `onCanRemove` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn canRemove(self: QDesignerContainerExtension, index: i32) bool {
        return qtc.QDesignerContainerExtension_CanRemove(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onCanRemove` instead
    ///
    pub const OnCanRemove = onCanRemove;

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
    pub fn onCanRemove(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerContainerExtension_OnCanRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#remove)
    ///
    /// This method must be implemented with `onRemove` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn remove(self: QDesignerContainerExtension, index: i32) void {
        qtc.QDesignerContainerExtension_Remove(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onRemove` instead
    ///
    pub const OnRemove = onRemove;

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
    pub fn onRemove(self: QDesignerContainerExtension, callback: *const fn (QDesignerContainerExtension, i32) callconv(.c) void) void {
        qtc.QDesignerContainerExtension_OnRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercontainerextension.html#dtor.QDesignerContainerExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerContainerExtension `
    ///
    pub fn delete(self: QDesignerContainerExtension) void {
        qtc.QDesignerContainerExtension_Delete(@ptrCast(self.ptr));
    }
};
