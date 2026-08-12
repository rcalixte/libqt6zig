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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KMemoryInfo object in C++ memory
    ///
    pub fn new() KMemoryInfo {
        return .{ .ptr = qtc.KMemoryInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KMemoryInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KMemoryInfo `
    ///
    pub fn new2(other: anytype) KMemoryInfo {
        comptime _ = @TypeOf(other)._is_KMemoryInfo;
        return .{ .ptr = qtc.KMemoryInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    /// ` other: KMemoryInfo `
    ///
    pub fn operatorAssign(self: KMemoryInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KMemoryInfo;
        qtc.KMemoryInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    /// ` other: KMemoryInfo `
    ///
    pub fn operatorEqual(self: KMemoryInfo, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KMemoryInfo;
        return qtc.KMemoryInfo_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    /// ` other: KMemoryInfo `
    ///
    pub fn operatorNotEqual(self: KMemoryInfo, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KMemoryInfo;
        return qtc.KMemoryInfo_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn isNull(self: KMemoryInfo) bool {
        return qtc.KMemoryInfo_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `totalPhysical` instead
    ///
    pub const TotalPhysical = totalPhysical;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#totalPhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn totalPhysical(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_TotalPhysical(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `freePhysical` instead
    ///
    pub const FreePhysical = freePhysical;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#freePhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn freePhysical(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_FreePhysical(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `availablePhysical` instead
    ///
    pub const AvailablePhysical = availablePhysical;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#availablePhysical)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn availablePhysical(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_AvailablePhysical(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cached` instead
    ///
    pub const Cached = cached;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#cached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn cached(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_Cached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buffers` instead
    ///
    pub const Buffers = buffers;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#buffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn buffers(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_Buffers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `totalSwapFile` instead
    ///
    pub const TotalSwapFile = totalSwapFile;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#totalSwapFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn totalSwapFile(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_TotalSwapFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `freeSwapFile` instead
    ///
    pub const FreeSwapFile = freeSwapFile;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#freeSwapFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn freeSwapFile(self: KMemoryInfo) u64 {
        return qtc.KMemoryInfo_FreeSwapFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kmemoryinfo.html#dtor.KMemoryInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KMemoryInfo `
    ///
    pub fn delete(self: KMemoryInfo) void {
        qtc.KMemoryInfo_Delete(@ptrCast(self.ptr));
    }
};
