const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html)
pub const KMemoryInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KMemoryInfo,

    pub const _is_KMemoryInfo = {};

    /// New constructs a new KMemoryInfo object.
    ///
    pub fn New() KMemoryInfo {
        return .{ .ptr = qtc.KMemoryInfo_new() };
    }

    /// New2 constructs a new KMemoryInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KMemoryInfo `
    ///
    pub fn New2(other: anytype) KMemoryInfo {
        comptime _ = @TypeOf(other)._is_KMemoryInfo;
        return .{ .ptr = qtc.KMemoryInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    /// ` other: KMemoryInfo `
    ///
    pub fn OperatorAssign(self: KMemoryInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KMemoryInfo;
        qtc.KMemoryInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    /// ` other: KMemoryInfo `
    ///
    pub fn OperatorEqual(self: KMemoryInfo, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KMemoryInfo;
        return qtc.KMemoryInfo_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    /// ` other: KMemoryInfo `
    ///
    pub fn OperatorNotEqual(self: KMemoryInfo, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KMemoryInfo;
        return qtc.KMemoryInfo_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn IsNull(self: KMemoryInfo) bool {
        return qtc.KMemoryInfo_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#totalPhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn TotalPhysical(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_TotalPhysical(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#freePhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn FreePhysical(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_FreePhysical(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#availablePhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn AvailablePhysical(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_AvailablePhysical(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#cached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn Cached(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_Cached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#buffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn Buffers(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_Buffers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#totalSwapFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn TotalSwapFile(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_TotalSwapFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#freeSwapFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn FreeSwapFile(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_FreeSwapFile(@ptrCast(self.ptr));
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
    /// ` self: KMemoryInfo `
    ///
    pub fn Delete(self: KMemoryInfo) void {
        qtc.KMemoryInfo_Delete(@ptrCast(self.ptr));
    }
};
