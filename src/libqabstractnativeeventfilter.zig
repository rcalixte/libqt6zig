const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qabstractnativeeventfilter.html
pub const qabstractnativeeventfilter = struct {
    /// New constructs a new QAbstractNativeEventFilter object.
    ///
    ///
    pub fn New() QtC.QAbstractNativeEventFilter {
        return qtc.QAbstractNativeEventFilter_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
    ///
    /// ``` self: QtC.QAbstractNativeEventFilter, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEventFilter(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractNativeEventFilter_NativeEventFilter(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAbstractNativeEventFilter, slot: fn (self: QtC.QAbstractNativeEventFilter, eventType: []u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QAbstractNativeEventFilter_OnNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAbstractNativeEventFilter, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEventFilter(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractNativeEventFilter_QBaseNativeEventFilter(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#dtor.QAbstractNativeEventFilter)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractNativeEventFilter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractNativeEventFilter_Delete(@ptrCast(self));
    }
};
