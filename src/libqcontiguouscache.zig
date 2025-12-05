const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html)
pub const qcontiguouscachedata = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#alloc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    pub fn Alloc(self: ?*anyopaque) i64 {
        return qtc.QContiguousCacheData_Alloc(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#alloc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    /// ` alloc: i64 `
    ///
    pub fn SetAlloc(self: ?*anyopaque, alloc: i64) void {
        qtc.QContiguousCacheData_SetAlloc(@ptrCast(self), @intCast(alloc));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#count-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    pub fn Count(self: ?*anyopaque) i64 {
        return qtc.QContiguousCacheData_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#count-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    /// ` count: i64 `
    ///
    pub fn SetCount(self: ?*anyopaque, count: i64) void {
        qtc.QContiguousCacheData_SetCount(@ptrCast(self), @intCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    pub fn Start(self: ?*anyopaque) i64 {
        return qtc.QContiguousCacheData_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    /// ` start: i64 `
    ///
    pub fn SetStart(self: ?*anyopaque, start: i64) void {
        qtc.QContiguousCacheData_SetStart(@ptrCast(self), @intCast(start));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    pub fn Offset(self: ?*anyopaque) i64 {
        return qtc.QContiguousCacheData_Offset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#offset-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    /// ` offset: i64 `
    ///
    pub fn SetOffset(self: ?*anyopaque, offset: i64) void {
        qtc.QContiguousCacheData_SetOffset(@ptrCast(self), @intCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#allocateData)
    ///
    /// ## Parameter(s):
    ///
    /// ` size: i64 `
    ///
    /// ` alignment: i64 `
    ///
    pub fn AllocateData(size: i64, alignment: i64) QtC.QContiguousCacheData {
        return qtc.QContiguousCacheData_AllocateData(@intCast(size), @intCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#freeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: QtC.QContiguousCacheData `
    ///
    pub fn FreeData(data: ?*anyopaque) void {
        qtc.QContiguousCacheData_FreeData(@ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcontiguouscachedata.html#dtor.QContiguousCacheData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QContiguousCacheData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QContiguousCacheData_Delete(@ptrCast(self));
    }
};
