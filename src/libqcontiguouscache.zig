const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qcontiguouscachedata.html
pub const qcontiguouscachedata = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#alloc-var)
    ///
    /// ``` self: QtC.QContiguousCacheData ```
    pub fn Alloc(self: ?*anyopaque) i64 {
        return qtc.QContiguousCacheData_Alloc(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#alloc-var)
    ///
    /// ``` self: QtC.QContiguousCacheData, alloc: i64 ```
    pub fn SetAlloc(self: ?*anyopaque, alloc: i64) void {
        qtc.QContiguousCacheData_SetAlloc(@ptrCast(self), @intCast(alloc));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#count-var)
    ///
    /// ``` self: QtC.QContiguousCacheData ```
    pub fn Count(self: ?*anyopaque) i64 {
        return qtc.QContiguousCacheData_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#count-var)
    ///
    /// ``` self: QtC.QContiguousCacheData, count: i64 ```
    pub fn SetCount(self: ?*anyopaque, count: i64) void {
        qtc.QContiguousCacheData_SetCount(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#start-var)
    ///
    /// ``` self: QtC.QContiguousCacheData ```
    pub fn Start(self: ?*anyopaque) i64 {
        return qtc.QContiguousCacheData_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#start-var)
    ///
    /// ``` self: QtC.QContiguousCacheData, start: i64 ```
    pub fn SetStart(self: ?*anyopaque, start: i64) void {
        qtc.QContiguousCacheData_SetStart(@ptrCast(self), @intCast(start));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#offset-var)
    ///
    /// ``` self: QtC.QContiguousCacheData ```
    pub fn Offset(self: ?*anyopaque) i64 {
        return qtc.QContiguousCacheData_Offset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcontiguouscachedata.html#offset-var)
    ///
    /// ``` self: QtC.QContiguousCacheData, offset: i64 ```
    pub fn SetOffset(self: ?*anyopaque, offset: i64) void {
        qtc.QContiguousCacheData_SetOffset(@ptrCast(self), @intCast(offset));
    }

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
