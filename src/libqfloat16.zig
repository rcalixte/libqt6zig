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

    /// New constructs a new qfloat16 object.
    ///
    pub fn New() qfloat16 {
        return .{ .ptr = qtc.qfloat16_new() };
    }

    /// New2 constructs a new qfloat16 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qnamespace_enums.Initialization `
    ///
    pub fn New2(param1: i32) qfloat16 {
        return .{ .ptr = qtc.qfloat16_new2(@bitCast(param1)) };
    }

    /// New3 constructs a new qfloat16 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` f: f32 `
    ///
    pub fn New3(f: f32) qfloat16 {
        return .{ .ptr = qtc.qfloat16_new3(@bitCast(f)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: qfloat16 `
    ///
    /// ` other: qfloat16 `
    ///
    pub fn CopyAssign(self: qfloat16, other: qfloat16) void {
        qtc.qfloat16_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: qfloat16 `
    ///
    /// ` other: qfloat16 `
    ///
    pub fn MoveAssign(self: qfloat16, other: qfloat16) void {
        qtc.qfloat16_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn ToFloat(self: qfloat16) f32 {
        return qtc.qfloat16_ToFloat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isInf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn IsInf(self: qfloat16) bool {
        return qtc.qfloat16_IsInf(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isNaN)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn IsNaN(self: qfloat16) bool {
        return qtc.qfloat16_IsNaN(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isFinite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn IsFinite(self: qfloat16) bool {
        return qtc.qfloat16_IsFinite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#fpClassify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn FpClassify(self: qfloat16) i32 {
        return qtc.qfloat16_FpClassify(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: qfloat16 `
    ///
    pub fn IsNormal(self: qfloat16) bool {
        return qtc.qfloat16_IsNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#dtor.qfloat16)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: qfloat16 `
    ///
    pub fn Delete(self: qfloat16) void {
        qtc.qfloat16_Delete(@ptrCast(self.ptr));
    }
};
