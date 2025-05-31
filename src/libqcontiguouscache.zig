const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qcontiguouscachedata.html
pub const qcontiguouscachedata = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#allocateData)
    ///
    /// ``` size: i64, alignment: i64 ```
    pub fn AllocateData(size: i64, alignment: i64) QtC.QContiguousCacheData {
        return qtc.QContiguousCacheData_AllocateData(@intCast(size), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#freeData)
    ///
    /// ``` data: QtC.QContiguousCacheData ```
    pub fn FreeData(data: ?*anyopaque) void {
        qtc.QContiguousCacheData_FreeData(@ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#dtor.QContiguousCacheData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QContiguousCacheData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QContiguousCacheData_Delete(@ptrCast(self));
    }
};
