const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qarraydata_enums = enums;
pub const struct_qtcqarraydata_anyopaque = extern struct { first: QtC.QArrayData, second: ?*anyopaque };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html)
pub const qarraydata = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#flags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    /// ## Returns:
    ///
    /// ` flag of qarraydata_enums.ArrayOption `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QArrayData_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#flags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    /// ` flags: flag of qarraydata_enums.ArrayOption `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QArrayData_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#alloc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    pub fn Alloc(self: ?*anyopaque) i64 {
        return qtc.QArrayData_Alloc(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#alloc-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    /// ` alloc: i64 `
    ///
    pub fn SetAlloc(self: ?*anyopaque, alloc: i64) void {
        qtc.QArrayData_SetAlloc(@ptrCast(self), @intCast(alloc));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#allocatedCapacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    pub fn AllocatedCapacity(self: ?*anyopaque) i64 {
        return qtc.QArrayData_AllocatedCapacity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#constAllocatedCapacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    pub fn ConstAllocatedCapacity(self: ?*anyopaque) i64 {
        return qtc.QArrayData_ConstAllocatedCapacity(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#ref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    pub fn Ref(self: ?*anyopaque) bool {
        return qtc.QArrayData_Ref(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#deref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    pub fn Deref(self: ?*anyopaque) bool {
        return qtc.QArrayData_Deref(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#isShared)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    pub fn IsShared(self: ?*anyopaque) bool {
        return qtc.QArrayData_IsShared(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#needsDetach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    pub fn NeedsDetach(self: ?*anyopaque) bool {
        return qtc.QArrayData_NeedsDetach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#detachCapacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QArrayData `
    ///
    /// ` newSize: i64 `
    ///
    pub fn DetachCapacity(self: ?*anyopaque, newSize: i64) i64 {
        return qtc.QArrayData_DetachCapacity(@ptrCast(self), @intCast(newSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#reallocateUnaligned)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: QtC.QArrayData `
    ///
    /// ` dataPointer: ?*anyopaque `
    ///
    /// ` objectSize: i64 `
    ///
    /// ` newCapacity: i64 `
    ///
    /// ` option: qarraydata_enums.AllocationOption `
    ///
    pub fn ReallocateUnaligned(data: ?*anyopaque, dataPointer: ?*anyopaque, objectSize: i64, newCapacity: i64, option: i32) struct_qtcqarraydata_anyopaque {
        const _pair: qtc.libqt_pair = qtc.QArrayData_ReallocateUnaligned(@ptrCast(data), @ptrCast(dataPointer), @intCast(objectSize), @intCast(newCapacity), @intCast(option));
        return struct_qtcqarraydata_anyopaque{
            .first = @ptrCast(_pair.first),
            .second = _pair.second,
        };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#deallocate)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: QtC.QArrayData `
    ///
    /// ` objectSize: i64 `
    ///
    /// ` alignment: i64 `
    ///
    pub fn Deallocate(data: ?*anyopaque, objectSize: i64, alignment: i64) void {
        qtc.QArrayData_Deallocate(@ptrCast(data), @intCast(objectSize), @intCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#dtor.QArrayData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QArrayData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QArrayData_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qarraydata.html#public-types)
pub const enums = struct {
    pub const AllocationOption = enum {
        pub const Grow: i32 = 0;
        pub const KeepSize: i32 = 1;
    };

    pub const GrowthPosition = enum {
        pub const GrowsAtEnd: i32 = 0;
        pub const GrowsAtBeginning: i32 = 1;
    };

    pub const ArrayOption = enum {
        pub const ArrayOptionDefault: i32 = 0;
        pub const CapacityReserved: i32 = 1;
    };

    pub const CutResult = enum {
        pub const Null: i32 = 0;
        pub const Empty: i32 = 1;
        pub const Full: i32 = 2;
        pub const Subset: i32 = 3;
    };
};
