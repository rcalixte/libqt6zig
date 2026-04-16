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

    /// New constructs a new QAbstractNativeEventFilter object.
    ///
    pub fn New() QAbstractNativeEventFilter {
        return .{ .ptr = qtc.QAbstractNativeEventFilter_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNativeEventFilter `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEventFilter(self: QAbstractNativeEventFilter, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractNativeEventFilter_NativeEventFilter(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractNativeEventFilter `
    ///
    /// ` callback: *const fn (self: QAbstractNativeEventFilter, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEventFilter(self: QAbstractNativeEventFilter, callback: *const fn (QAbstractNativeEventFilter, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QAbstractNativeEventFilter_OnNativeEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNativeEventFilter` instead
    ///
    pub const QBaseNativeEventFilter = SuperNativeEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractNativeEventFilter `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEventFilter(self: QAbstractNativeEventFilter, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractNativeEventFilter_SuperNativeEventFilter(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#dtor.QAbstractNativeEventFilter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractNativeEventFilter `
    ///
    pub fn Delete(self: QAbstractNativeEventFilter) void {
        qtc.QAbstractNativeEventFilter_Delete(@ptrCast(self.ptr));
    }
};
