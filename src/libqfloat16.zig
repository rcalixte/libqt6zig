const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html)
pub const qfloat16 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.qfloat16,

    pub const _is_qfloat16 = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new qfloat16 object in C++ memory
    ///
    pub fn new() qfloat16 {
        return .{ .ptr = qtc.qfloat16_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new qfloat16 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn new2(param1: i32) qfloat16 {
        return .{ .ptr = qtc.qfloat16_new2(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new qfloat16 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn new3(f: f32) qfloat16 {
        return .{ .ptr = qtc.qfloat16_new3(@bitCast(f)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: qfloat16 `
    ///
    /// ` other: qfloat16 `
    ///
    pub fn copyAssign(self: qfloat16, other: qfloat16) void {
        qtc.qfloat16_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: qfloat16 `
    ///
    /// ` other: qfloat16 `
    ///
    pub fn moveAssign(self: qfloat16, other: qfloat16) void {
        qtc.qfloat16_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toFloat` instead
    ///
    pub const ToFloat = toFloat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn toFloat(self: qfloat16) f32 {
        return qtc.qfloat16_ToFloat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInf` instead
    ///
    pub const IsInf = isInf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isInf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn isInf(self: qfloat16) bool {
        return qtc.qfloat16_IsInf(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNaN` instead
    ///
    pub const IsNaN = isNaN;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isNaN)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn isNaN(self: qfloat16) bool {
        return qtc.qfloat16_IsNaN(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinite` instead
    ///
    pub const IsFinite = isFinite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isFinite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn isFinite(self: qfloat16) bool {
        return qtc.qfloat16_IsFinite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fpClassify` instead
    ///
    pub const FpClassify = fpClassify;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#fpClassify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn fpClassify(self: qfloat16) i32 {
        return qtc.qfloat16_FpClassify(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNormal` instead
    ///
    pub const IsNormal = isNormal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn isNormal(self: qfloat16) bool {
        return qtc.qfloat16_IsNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#dtor.qfloat16)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: qfloat16 `
    ///
    pub fn delete(self: qfloat16) void {
        qtc.qfloat16_Delete(@ptrCast(self.ptr));
    }
};
