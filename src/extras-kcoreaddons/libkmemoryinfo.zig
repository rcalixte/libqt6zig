const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html)
pub const kmemoryinfo = struct {
    /// New constructs a new KMemoryInfo object.
    ///
    pub fn New() QtC.KMemoryInfo {
        return qtc.KMemoryInfo_new();
    }

    /// New2 constructs a new KMemoryInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KMemoryInfo `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KMemoryInfo {
        return qtc.KMemoryInfo_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    /// ` other: QtC.KMemoryInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KMemoryInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    /// ` other: QtC.KMemoryInfo `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KMemoryInfo_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    /// ` other: QtC.KMemoryInfo `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KMemoryInfo_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KMemoryInfo_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#totalPhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn TotalPhysical(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_TotalPhysical(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#freePhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn FreePhysical(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_FreePhysical(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#availablePhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn AvailablePhysical(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_AvailablePhysical(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#cached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn Cached(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_Cached(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#buffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn Buffers(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_Buffers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#totalSwapFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn TotalSwapFile(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_TotalSwapFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#freeSwapFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn FreeSwapFile(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_FreeSwapFile(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#dtor.KMemoryInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KMemoryInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KMemoryInfo_Delete(@ptrCast(self));
    }
};
