const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html)
pub const QJSListIndexClamp = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSListIndexClamp,

    pub const _is_QJSListIndexClamp = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSListIndexClamp object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSListIndexClamp `
    ///
    pub fn new(other: anytype) QJSListIndexClamp {
        comptime _ = @TypeOf(other)._is_QJSListIndexClamp;
        return .{ .ptr = qtc.QJSListIndexClamp_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJSListIndexClamp object and invalidate the source QJSListIndexClamp object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSListIndexClamp `
    ///
    pub fn new2(other: anytype) QJSListIndexClamp {
        comptime _ = @TypeOf(other)._is_QJSListIndexClamp;
        return .{ .ptr = qtc.QJSListIndexClamp_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJSListIndexClamp object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJSListIndexClamp `
    ///
    pub fn new3(param1: anytype) QJSListIndexClamp {
        comptime _ = @TypeOf(param1)._is_QJSListIndexClamp;
        return .{ .ptr = qtc.QJSListIndexClamp_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJSListIndexClamp object in C++ memory
    ///
    pub fn new4() QJSListIndexClamp {
        return .{ .ptr = qtc.QJSListIndexClamp_new4() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSListIndexClamp `
    ///
    /// ` other: QJSListIndexClamp `
    ///
    pub fn copyAssign(self: QJSListIndexClamp, other: QJSListIndexClamp) void {
        qtc.QJSListIndexClamp_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSListIndexClamp `
    ///
    /// ` other: QJSListIndexClamp `
    ///
    pub fn moveAssign(self: QJSListIndexClamp, other: QJSListIndexClamp) void {
        qtc.QJSListIndexClamp_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `clamp` instead
    ///
    pub const Clamp = clamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html#clamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` start: isize `
    ///
    /// ` max: isize `
    ///
    pub fn clamp(start: isize, max: isize) isize {
        return qtc.QJSListIndexClamp_Clamp(@bitCast(start), @bitCast(max));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSListIndexClamp `
    ///
    /// ` param1: QJSListIndexClamp `
    ///
    pub fn operatorAssign(self: QJSListIndexClamp, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QJSListIndexClamp;
        qtc.QJSListIndexClamp_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `clamp3` instead
    ///
    pub const Clamp3 = clamp3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html#clamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` start: isize `
    ///
    /// ` max: isize `
    ///
    /// ` min: isize `
    ///
    pub fn clamp3(start: isize, max: isize, min: isize) isize {
        return qtc.QJSListIndexClamp_Clamp3(@bitCast(start), @bitCast(max), @bitCast(min));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html#dtor.QJSListIndexClamp)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSListIndexClamp `
    ///
    pub fn delete(self: QJSListIndexClamp) void {
        qtc.QJSListIndexClamp_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html)
pub const QJSListForInIterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSListForInIterator,

    pub const _is_QJSListForInIterator = {};

    /// ### DEPRECATED: Use `hasNext` instead
    ///
    pub const HasNext = hasNext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html#hasNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSListForInIterator `
    ///
    pub fn hasNext(self: QJSListForInIterator) bool {
        return qtc.QJSListForInIterator_HasNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSListForInIterator `
    ///
    pub fn next(self: QJSListForInIterator) isize {
        return qtc.QJSListForInIterator_Next(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html#dtor.QJSListForInIterator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSListForInIterator `
    ///
    pub fn delete(self: QJSListForInIterator) void {
        qtc.QJSListForInIterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforofiterator.html)
pub const QJSListForOfIterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforofiterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSListForOfIterator,

    pub const _is_QJSListForOfIterator = {};

    /// ### DEPRECATED: Use `init` instead
    ///
    pub const Init = init;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforofiterator.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSListForOfIterator `
    ///
    pub fn init(self: QJSListForOfIterator) void {
        qtc.QJSListForOfIterator_Init(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjslistforofiterator.html#dtor.QJSListForOfIterator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSListForOfIterator `
    ///
    pub fn delete(self: QJSListForOfIterator) void {
        qtc.QJSListForOfIterator_Delete(@ptrCast(self.ptr));
    }
};
