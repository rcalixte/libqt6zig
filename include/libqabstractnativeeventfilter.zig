const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html)
pub const QAbstractNativeEventFilter = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractNativeEventFilter,

    pub const _is_QAbstractNativeEventFilter = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractNativeEventFilter object in C++ memory
    ///
    pub fn new() QAbstractNativeEventFilter {
        return .{ .ptr = qtc.QAbstractNativeEventFilter_new() };
    }

    /// ### DEPRECATED: Use `nativeEventFilter` instead
    ///
    pub const NativeEventFilter = nativeEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
    ///
    /// This method must be implemented with `onNativeEventFilter` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNativeEventFilter `
    ///
    /// ` eventType: []const u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEventFilter(self: QAbstractNativeEventFilter, eventType: []const u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractNativeEventFilter_NativeEventFilter(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onNativeEventFilter` instead
    ///
    pub const OnNativeEventFilter = onNativeEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractNativeEventFilter `
    ///
    /// ` callback: *const fn (self: QAbstractNativeEventFilter, eventType: [*:0]const u8, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEventFilter(self: QAbstractNativeEventFilter, callback: *const fn (QAbstractNativeEventFilter, [*:0]const u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QAbstractNativeEventFilter_OnNativeEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#dtor.QAbstractNativeEventFilter)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractNativeEventFilter `
    ///
    pub fn delete(self: QAbstractNativeEventFilter) void {
        qtc.QAbstractNativeEventFilter_Delete(@ptrCast(self.ptr));
    }
};
