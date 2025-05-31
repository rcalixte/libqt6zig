const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qthreadstoragedata.html
pub const qthreadstoragedata = struct {
    /// New constructs a new QThreadStorageData object.
    ///
    /// ``` param1: QtC.QThreadStorageData ```
    pub fn New(param1: ?*anyopaque) QtC.QThreadStorageData {
        return qtc.QThreadStorageData_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#get)
    ///
    /// ``` self: QtC.QThreadStorageData ```
    pub fn Get(self: ?*anyopaque) ?*anyopaque {
        return qtc.QThreadStorageData_Get(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#set)
    ///
    /// ``` self: QtC.QThreadStorageData, p: ?*anyopaque ```
    pub fn Set(self: ?*anyopaque, p: ?*anyopaque) ?*anyopaque {
        return qtc.QThreadStorageData_Set(@ptrCast(self), p);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#finish)
    ///
    /// ``` param1: ?*anyopaque ```
    pub fn Finish(param1: ?*anyopaque) void {
        qtc.QThreadStorageData_Finish(param1);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qthreadstoragedata.html#dtor.QThreadStorageData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QThreadStorageData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QThreadStorageData_Delete(@ptrCast(self));
    }
};
