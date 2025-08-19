const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qfloat16.html
pub const qfloat16 = struct {
    /// New constructs a new qfloat16 object.
    ///
    ///
    pub fn New() QtC.qfloat16 {
        return qtc.qfloat16_new();
    }

    /// New2 constructs a new qfloat16 object.
    ///
    /// ``` param1: qnamespace_enums.Initialization ```
    pub fn New2(param1: i32) QtC.qfloat16 {
        return qtc.qfloat16_new2(@intCast(param1));
    }

    /// New3 constructs a new qfloat16 object.
    ///
    /// ``` f: f32 ```
    pub fn New3(f: f32) QtC.qfloat16 {
        return qtc.qfloat16_new3(@floatCast(f));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.qfloat16, other: QtC.qfloat16 ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.qfloat16_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.qfloat16, other: QtC.qfloat16 ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.qfloat16_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#operator)
    ///
    /// ``` self: QtC.qfloat16 ```
    pub fn ToFloat(self: ?*anyopaque) f32 {
        return qtc.qfloat16_ToFloat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#isInf)
    ///
    /// ``` self: QtC.qfloat16 ```
    pub fn IsInf(self: ?*anyopaque) bool {
        return qtc.qfloat16_IsInf(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#isNaN)
    ///
    /// ``` self: QtC.qfloat16 ```
    pub fn IsNaN(self: ?*anyopaque) bool {
        return qtc.qfloat16_IsNaN(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#isFinite)
    ///
    /// ``` self: QtC.qfloat16 ```
    pub fn IsFinite(self: ?*anyopaque) bool {
        return qtc.qfloat16_IsFinite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#fpClassify)
    ///
    /// ``` self: QtC.qfloat16 ```
    pub fn FpClassify(self: ?*anyopaque) i32 {
        return qtc.qfloat16_FpClassify(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#isNormal)
    ///
    /// ``` self: QtC.qfloat16 ```
    pub fn IsNormal(self: ?*anyopaque) bool {
        return qtc.qfloat16_IsNormal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#dtor.qfloat16)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.qfloat16 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.qfloat16_Delete(@ptrCast(self));
    }
};
