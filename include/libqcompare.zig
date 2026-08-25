const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/partial-ordering.html)
pub const partial_ordering = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/partial-ordering.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.partial_ordering,

    pub const _is_partial_ordering = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Qt::partial_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: partial_ordering `
    ///
    pub fn new(other: anytype) partial_ordering {
        comptime _ = @TypeOf(other)._is_partial_ordering;
        return .{ .ptr = qtc.partial_ordering_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Qt::partial_ordering object and invalidate the source Qt::partial_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: partial_ordering `
    ///
    pub fn new2(other: anytype) partial_ordering {
        comptime _ = @TypeOf(other)._is_partial_ordering;
        return .{ .ptr = qtc.partial_ordering_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Qt::partial_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: partial_ordering `
    ///
    pub fn new3(param1: anytype) partial_ordering {
        comptime _ = @TypeOf(param1)._is_partial_ordering;
        return .{ .ptr = qtc.partial_ordering_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: partial_ordering `
    ///
    /// ` other: partial_ordering `
    ///
    pub fn copyAssign(self: partial_ordering, other: partial_ordering) void {
        qtc.partial_ordering_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: partial_ordering `
    ///
    /// ` other: partial_ordering `
    ///
    pub fn moveAssign(self: partial_ordering, other: partial_ordering) void {
        qtc.partial_ordering_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/partial-ordering.html#dtor.partial_ordering)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: partial_ordering `
    ///
    pub fn delete(self: partial_ordering) void {
        qtc.partial_ordering_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/weak-ordering.html)
pub const weak_ordering = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/weak-ordering.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.weak_ordering,

    pub const _is_weak_ordering = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Qt::weak_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: weak_ordering `
    ///
    pub fn new(other: anytype) weak_ordering {
        comptime _ = @TypeOf(other)._is_weak_ordering;
        return .{ .ptr = qtc.weak_ordering_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Qt::weak_ordering object and invalidate the source Qt::weak_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: weak_ordering `
    ///
    pub fn new2(other: anytype) weak_ordering {
        comptime _ = @TypeOf(other)._is_weak_ordering;
        return .{ .ptr = qtc.weak_ordering_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Qt::weak_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: weak_ordering `
    ///
    pub fn new3(param1: anytype) weak_ordering {
        comptime _ = @TypeOf(param1)._is_weak_ordering;
        return .{ .ptr = qtc.weak_ordering_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: weak_ordering `
    ///
    /// ` other: weak_ordering `
    ///
    pub fn copyAssign(self: weak_ordering, other: weak_ordering) void {
        qtc.weak_ordering_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: weak_ordering `
    ///
    /// ` other: weak_ordering `
    ///
    pub fn moveAssign(self: weak_ordering, other: weak_ordering) void {
        qtc.weak_ordering_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toPartialOrdering` instead
    ///
    pub const ToPartialOrdering = toPartialOrdering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/weak-ordering.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: weak_ordering `
    ///
    pub fn toPartialOrdering(self: weak_ordering) partial_ordering {
        return .{ .ptr = qtc.weak_ordering_ToPartialOrdering(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/weak-ordering.html#dtor.weak_ordering)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: weak_ordering `
    ///
    pub fn delete(self: weak_ordering) void {
        qtc.weak_ordering_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/strong-ordering.html)
pub const strong_ordering = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/strong-ordering.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.strong_ordering,

    pub const _is_strong_ordering = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Qt::strong_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: strong_ordering `
    ///
    pub fn new(other: anytype) strong_ordering {
        comptime _ = @TypeOf(other)._is_strong_ordering;
        return .{ .ptr = qtc.strong_ordering_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Qt::strong_ordering object and invalidate the source Qt::strong_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: strong_ordering `
    ///
    pub fn new2(other: anytype) strong_ordering {
        comptime _ = @TypeOf(other)._is_strong_ordering;
        return .{ .ptr = qtc.strong_ordering_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Qt::strong_ordering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: strong_ordering `
    ///
    pub fn new3(param1: anytype) strong_ordering {
        comptime _ = @TypeOf(param1)._is_strong_ordering;
        return .{ .ptr = qtc.strong_ordering_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: strong_ordering `
    ///
    /// ` other: strong_ordering `
    ///
    pub fn copyAssign(self: strong_ordering, other: strong_ordering) void {
        qtc.strong_ordering_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: strong_ordering `
    ///
    /// ` other: strong_ordering `
    ///
    pub fn moveAssign(self: strong_ordering, other: strong_ordering) void {
        qtc.strong_ordering_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toPartialOrdering` instead
    ///
    pub const ToPartialOrdering = toPartialOrdering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/strong-ordering.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: strong_ordering `
    ///
    pub fn toPartialOrdering(self: strong_ordering) partial_ordering {
        return .{ .ptr = qtc.strong_ordering_ToPartialOrdering(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toWeakOrdering` instead
    ///
    pub const ToWeakOrdering = toWeakOrdering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/strong-ordering.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: strong_ordering `
    ///
    pub fn toWeakOrdering(self: strong_ordering) weak_ordering {
        return .{ .ptr = qtc.strong_ordering_ToWeakOrdering(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/strong-ordering.html#dtor.strong_ordering)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: strong_ordering `
    ///
    pub fn delete(self: strong_ordering) void {
        qtc.strong_ordering_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpartialordering.html)
pub const QPartialOrdering = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpartialordering.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPartialOrdering,

    pub const _is_QPartialOrdering = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPartialOrdering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPartialOrdering `
    ///
    pub fn new(other: anytype) QPartialOrdering {
        comptime _ = @TypeOf(other)._is_QPartialOrdering;
        return .{ .ptr = qtc.QPartialOrdering_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPartialOrdering object and invalidate the source QPartialOrdering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPartialOrdering `
    ///
    pub fn new2(other: anytype) QPartialOrdering {
        comptime _ = @TypeOf(other)._is_QPartialOrdering;
        return .{ .ptr = qtc.QPartialOrdering_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPartialOrdering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` order: partial_ordering `
    ///
    pub fn new3(order: anytype) QPartialOrdering {
        comptime _ = @TypeOf(order)._is_partial_ordering;
        return .{ .ptr = qtc.QPartialOrdering_new3(@ptrCast(order.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPartialOrdering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` stdorder: weak_ordering `
    ///
    pub fn new4(stdorder: anytype) QPartialOrdering {
        comptime _ = @TypeOf(stdorder)._is_weak_ordering;
        return .{ .ptr = qtc.QPartialOrdering_new4(@ptrCast(stdorder.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QPartialOrdering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` stdorder: strong_ordering `
    ///
    pub fn new5(stdorder: anytype) QPartialOrdering {
        comptime _ = @TypeOf(stdorder)._is_strong_ordering;
        return .{ .ptr = qtc.QPartialOrdering_new5(@ptrCast(stdorder.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QPartialOrdering object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPartialOrdering `
    ///
    pub fn new6(param1: anytype) QPartialOrdering {
        comptime _ = @TypeOf(param1)._is_QPartialOrdering;
        return .{ .ptr = qtc.QPartialOrdering_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPartialOrdering `
    ///
    /// ` other: QPartialOrdering `
    ///
    pub fn copyAssign(self: QPartialOrdering, other: QPartialOrdering) void {
        qtc.QPartialOrdering_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPartialOrdering `
    ///
    /// ` other: QPartialOrdering `
    ///
    pub fn moveAssign(self: QPartialOrdering, other: QPartialOrdering) void {
        qtc.QPartialOrdering_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toPartialOrdering` instead
    ///
    pub const ToPartialOrdering = toPartialOrdering;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpartialordering.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPartialOrdering `
    ///
    pub fn toPartialOrdering(self: QPartialOrdering) partial_ordering {
        return .{ .ptr = qtc.QPartialOrdering_ToPartialOrdering(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpartialordering.html#dtor.QPartialOrdering)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPartialOrdering `
    ///
    pub fn delete(self: QPartialOrdering) void {
        qtc.QPartialOrdering_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcompare.html#public-types)
pub const enums = struct {
    pub const Ordering = enum {
        pub const Equal: i8 = 0;
        pub const Equivalent: i8 = 0;
        pub const Less: i8 = -1;
        pub const Greater: i8 = 1;
    };

    pub const Uncomparable = enum {
        pub const Unordered: i8 = 2;
    };

    pub const LegacyUncomparable = enum {
        pub const Unordered: i8 = -127;
    };
};
