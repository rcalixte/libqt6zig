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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHttp1Configuration object in C++ memory
    ///
    pub fn new() QHttp1Configuration {
        return .{ .ptr = qtc.QHttp1Configuration_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHttp1Configuration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QHttp1Configuration `
    ///
    pub fn new2(other: anytype) QHttp1Configuration {
        comptime _ = @TypeOf(other)._is_QHttp1Configuration;
        return .{ .ptr = qtc.QHttp1Configuration_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp1Configuration `
    ///
    /// ` other: QHttp1Configuration `
    ///
    pub fn operatorAssign(self: QHttp1Configuration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttp1Configuration;
        qtc.QHttp1Configuration_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setNumberOfConnectionsPerHost` instead
    ///
    pub const SetNumberOfConnectionsPerHost = setNumberOfConnectionsPerHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#setNumberOfConnectionsPerHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp1Configuration `
    ///
    /// ` amount: isize `
    ///
    pub fn setNumberOfConnectionsPerHost(self: QHttp1Configuration, amount: isize) void {
        qtc.QHttp1Configuration_SetNumberOfConnectionsPerHost(@ptrCast(self.ptr), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `numberOfConnectionsPerHost` instead
    ///
    pub const NumberOfConnectionsPerHost = numberOfConnectionsPerHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#numberOfConnectionsPerHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp1Configuration `
    ///
    pub fn numberOfConnectionsPerHost(self: QHttp1Configuration) isize {
        return qtc.QHttp1Configuration_NumberOfConnectionsPerHost(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHttp1Configuration `
    ///
    /// ` other: QHttp1Configuration `
    ///
    pub fn swap(self: QHttp1Configuration, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QHttp1Configuration;
        qtc.QHttp1Configuration_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhttp1configuration.html#dtor.QHttp1Configuration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHttp1Configuration `
    ///
    pub fn delete(self: QHttp1Configuration) void {
        qtc.QHttp1Configuration_Delete(@ptrCast(self.ptr));
    }
};
