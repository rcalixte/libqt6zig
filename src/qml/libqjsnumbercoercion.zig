const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html)
pub const QJSNumberCoercion = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSNumberCoercion,

    pub const _is_QJSNumberCoercion = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSNumberCoercion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSNumberCoercion `
    ///
    pub fn new(other: anytype) QJSNumberCoercion {
        comptime _ = @TypeOf(other)._is_QJSNumberCoercion;
        return .{ .ptr = qtc.QJSNumberCoercion_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJSNumberCoercion object and invalidate the source QJSNumberCoercion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSNumberCoercion `
    ///
    pub fn new2(other: anytype) QJSNumberCoercion {
        comptime _ = @TypeOf(other)._is_QJSNumberCoercion;
        return .{ .ptr = qtc.QJSNumberCoercion_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJSNumberCoercion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJSNumberCoercion `
    ///
    pub fn new3(param1: anytype) QJSNumberCoercion {
        comptime _ = @TypeOf(param1)._is_QJSNumberCoercion;
        return .{ .ptr = qtc.QJSNumberCoercion_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSNumberCoercion `
    ///
    /// ` other: QJSNumberCoercion `
    ///
    pub fn copyAssign(self: QJSNumberCoercion, other: QJSNumberCoercion) void {
        qtc.QJSNumberCoercion_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSNumberCoercion `
    ///
    /// ` other: QJSNumberCoercion `
    ///
    pub fn moveAssign(self: QJSNumberCoercion, other: QJSNumberCoercion) void {
        qtc.QJSNumberCoercion_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isInteger` instead
    ///
    pub const IsInteger = isInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn isInteger(d: f64) bool {
        return qtc.QJSNumberCoercion_IsInteger(@bitCast(d));
    }

    /// ### DEPRECATED: Use `isArrayIndex` instead
    ///
    pub const IsArrayIndex = isArrayIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#isArrayIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn isArrayIndex(d: f64) bool {
        return qtc.QJSNumberCoercion_IsArrayIndex(@bitCast(d));
    }

    /// ### DEPRECATED: Use `isArrayIndex2` instead
    ///
    pub const IsArrayIndex2 = isArrayIndex2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#isArrayIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` i: i64 `
    ///
    pub fn isArrayIndex2(i: i64) bool {
        return qtc.QJSNumberCoercion_IsArrayIndex2(@bitCast(i));
    }

    /// ### DEPRECATED: Use `isArrayIndex3` instead
    ///
    pub const IsArrayIndex3 = isArrayIndex3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#isArrayIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` i: u64 `
    ///
    pub fn isArrayIndex3(i: u64) bool {
        return qtc.QJSNumberCoercion_IsArrayIndex3(@bitCast(i));
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn toInteger(d: f64) i32 {
        return qtc.QJSNumberCoercion_ToInteger(@bitCast(d));
    }

    /// ### DEPRECATED: Use `equals` instead
    ///
    pub const Equals = equals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#equals)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: f64 `
    ///
    /// ` rhs: f64 `
    ///
    pub fn equals(lhs: f64, rhs: f64) bool {
        return qtc.QJSNumberCoercion_Equals(@bitCast(lhs), @bitCast(rhs));
    }

    /// ### DEPRECATED: Use `roundTowards0` instead
    ///
    pub const RoundTowards0 = roundTowards0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#roundTowards0)
    ///
    /// ## Parameter(s):
    ///
    /// ` d: f64 `
    ///
    pub fn roundTowards0(d: f64) f64 {
        return qtc.QJSNumberCoercion_RoundTowards0(@bitCast(d));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#dtor.QJSNumberCoercion)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSNumberCoercion `
    ///
    pub fn delete(self: QJSNumberCoercion) void {
        qtc.QJSNumberCoercion_Delete(@ptrCast(self.ptr));
    }
};
