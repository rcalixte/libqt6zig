const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html)
pub const QHttp1Configuration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHttp1Configuration,

    pub const _is_QHttp1Configuration = {};

    /// New constructs a new QHttp1Configuration object.
    ///
    pub fn New() QHttp1Configuration {
        return .{ .ptr = qtc.QHttp1Configuration_new() };
    }

    /// New2 constructs a new QHttp1Configuration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHttp1Configuration `
    ///
    pub fn New2(other: anytype) QHttp1Configuration {
        comptime _ = @TypeOf(other)._is_QHttp1Configuration;
        return .{ .ptr = qtc.QHttp1Configuration_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp1Configuration `
    ///
    /// ` other: QHttp1Configuration `
    ///
    pub fn OperatorAssign(self: QHttp1Configuration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttp1Configuration;
        qtc.QHttp1Configuration_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#setNumberOfConnectionsPerHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp1Configuration `
    ///
    /// ` amount: isize `
    ///
    pub fn SetNumberOfConnectionsPerHost(self: QHttp1Configuration, amount: isize) void {
        qtc.QHttp1Configuration_SetNumberOfConnectionsPerHost(@ptrCast(self.ptr), @bitCast(amount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#numberOfConnectionsPerHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp1Configuration `
    ///
    pub fn NumberOfConnectionsPerHost(self: QHttp1Configuration) isize {
        return qtc.QHttp1Configuration_NumberOfConnectionsPerHost(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp1Configuration `
    ///
    /// ` other: QHttp1Configuration `
    ///
    pub fn Swap(self: QHttp1Configuration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttp1Configuration;
        qtc.QHttp1Configuration_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#dtor.QHttp1Configuration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHttp1Configuration `
    ///
    pub fn Delete(self: QHttp1Configuration) void {
        qtc.QHttp1Configuration_Delete(@ptrCast(self.ptr));
    }
};
