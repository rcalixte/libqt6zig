const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qhttp1configuration.html
pub const qhttp1configuration = struct {
    /// New constructs a new QHttp1Configuration object.
    ///
    ///
    pub fn New() QtC.QHttp1Configuration {
        return qtc.QHttp1Configuration_new();
    }

    /// New2 constructs a new QHttp1Configuration object.
    ///
    /// ``` other: QtC.QHttp1Configuration ```
    pub fn New2(other: ?*anyopaque) QtC.QHttp1Configuration {
        return qtc.QHttp1Configuration_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#operator=)
    ///
    /// ``` self: QtC.QHttp1Configuration, other: QtC.QHttp1Configuration ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttp1Configuration_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#setNumberOfConnectionsPerHost)
    ///
    /// ``` self: QtC.QHttp1Configuration, amount: i64 ```
    pub fn SetNumberOfConnectionsPerHost(self: ?*anyopaque, amount: i64) void {
        qtc.QHttp1Configuration_SetNumberOfConnectionsPerHost(@ptrCast(self), @intCast(amount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#numberOfConnectionsPerHost)
    ///
    /// ``` self: QtC.QHttp1Configuration ```
    pub fn NumberOfConnectionsPerHost(self: ?*anyopaque) i64 {
        return qtc.QHttp1Configuration_NumberOfConnectionsPerHost(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#swap)
    ///
    /// ``` self: QtC.QHttp1Configuration, other: QtC.QHttp1Configuration ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttp1Configuration_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttp1configuration.html#dtor.QHttp1Configuration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHttp1Configuration ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHttp1Configuration_Delete(@ptrCast(self));
    }
};
