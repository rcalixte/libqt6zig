const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://api-staging.kde.org/kmemoryinfo.html
pub const kmemoryinfo = struct {
    /// New constructs a new KMemoryInfo object.
    ///
    ///
    pub fn New() QtC.KMemoryInfo {
        return qtc.KMemoryInfo_new();
    }

    /// New2 constructs a new KMemoryInfo object.
    ///
    /// ``` other: QtC.KMemoryInfo ```
    pub fn New2(other: ?*anyopaque) QtC.KMemoryInfo {
        return qtc.KMemoryInfo_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#operator-eq)
    ///
    /// ``` self: QtC.KMemoryInfo, other: QtC.KMemoryInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KMemoryInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KMemoryInfo, other: QtC.KMemoryInfo ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KMemoryInfo_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#operator-not-eq)
    ///
    /// ``` self: QtC.KMemoryInfo, other: QtC.KMemoryInfo ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KMemoryInfo_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#isNull)
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KMemoryInfo_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#totalPhysical)
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn TotalPhysical(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_TotalPhysical(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#freePhysical)
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn FreePhysical(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_FreePhysical(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#availablePhysical)
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn AvailablePhysical(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_AvailablePhysical(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#cached)
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn Cached(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_Cached(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#buffers)
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn Buffers(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_Buffers(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#totalSwapFile)
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn TotalSwapFile(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_TotalSwapFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#freeSwapFile)
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn FreeSwapFile(self: ?*anyopaque) u64 {
        return qtc.KMemoryInfo_FreeSwapFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kmemoryinfo.html#dtor.KMemoryInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KMemoryInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KMemoryInfo_Delete(@ptrCast(self));
    }
};
