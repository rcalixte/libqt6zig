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

    /// New constructs a new Qt::partial_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: partial_ordering `
    ///
    pub fn New(other: anytype) partial_ordering {
        comptime _ = @TypeOf(other)._is_partial_ordering;
        return .{ .ptr = qtc.partial_ordering_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new Qt::partial_ordering object and invalidates the source Qt::partial_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: partial_ordering `
    ///
    pub fn New2(other: anytype) partial_ordering {
        comptime _ = @TypeOf(other)._is_partial_ordering;
        return .{ .ptr = qtc.partial_ordering_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new Qt::partial_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: partial_ordering `
    ///
    pub fn New3(param1: anytype) partial_ordering {
        comptime _ = @TypeOf(param1)._is_partial_ordering;
        return .{ .ptr = qtc.partial_ordering_new3(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: partial_ordering `
    ///
    /// ` other: partial_ordering `
    ///
    pub fn CopyAssign(self: partial_ordering, other: partial_ordering) void {
        qtc.partial_ordering_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: partial_ordering `
    ///
    /// ` other: partial_ordering `
    ///
    pub fn MoveAssign(self: partial_ordering, other: partial_ordering) void {
        qtc.partial_ordering_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/partial-ordering.html#dtor.partial_ordering)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: partial_ordering `
    ///
    pub fn Delete(self: partial_ordering) void {
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

    /// New constructs a new Qt::weak_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: weak_ordering `
    ///
    pub fn New(other: anytype) weak_ordering {
        comptime _ = @TypeOf(other)._is_weak_ordering;
        return .{ .ptr = qtc.weak_ordering_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new Qt::weak_ordering object and invalidates the source Qt::weak_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: weak_ordering `
    ///
    pub fn New2(other: anytype) weak_ordering {
        comptime _ = @TypeOf(other)._is_weak_ordering;
        return .{ .ptr = qtc.weak_ordering_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new Qt::weak_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: weak_ordering `
    ///
    pub fn New3(param1: anytype) weak_ordering {
        comptime _ = @TypeOf(param1)._is_weak_ordering;
        return .{ .ptr = qtc.weak_ordering_new3(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: weak_ordering `
    ///
    /// ` other: weak_ordering `
    ///
    pub fn CopyAssign(self: weak_ordering, other: weak_ordering) void {
        qtc.weak_ordering_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: weak_ordering `
    ///
    /// ` other: weak_ordering `
    ///
    pub fn MoveAssign(self: weak_ordering, other: weak_ordering) void {
        qtc.weak_ordering_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/weak-ordering.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: weak_ordering `
    ///
    pub fn ToPartialOrdering(self: weak_ordering) partial_ordering {
        return .{ .ptr = qtc.weak_ordering_ToPartialOrdering(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/weak-ordering.html#dtor.weak_ordering)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: weak_ordering `
    ///
    pub fn Delete(self: weak_ordering) void {
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

    /// New constructs a new Qt::strong_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: strong_ordering `
    ///
    pub fn New(other: anytype) strong_ordering {
        comptime _ = @TypeOf(other)._is_strong_ordering;
        return .{ .ptr = qtc.strong_ordering_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new Qt::strong_ordering object and invalidates the source Qt::strong_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: strong_ordering `
    ///
    pub fn New2(other: anytype) strong_ordering {
        comptime _ = @TypeOf(other)._is_strong_ordering;
        return .{ .ptr = qtc.strong_ordering_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new Qt::strong_ordering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: strong_ordering `
    ///
    pub fn New3(param1: anytype) strong_ordering {
        comptime _ = @TypeOf(param1)._is_strong_ordering;
        return .{ .ptr = qtc.strong_ordering_new3(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: strong_ordering `
    ///
    /// ` other: strong_ordering `
    ///
    pub fn CopyAssign(self: strong_ordering, other: strong_ordering) void {
        qtc.strong_ordering_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: strong_ordering `
    ///
    /// ` other: strong_ordering `
    ///
    pub fn MoveAssign(self: strong_ordering, other: strong_ordering) void {
        qtc.strong_ordering_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/strong-ordering.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: strong_ordering `
    ///
    pub fn ToPartialOrdering(self: strong_ordering) partial_ordering {
        return .{ .ptr = qtc.strong_ordering_ToPartialOrdering(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/strong-ordering.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: strong_ordering `
    ///
    pub fn ToWeakOrdering(self: strong_ordering) weak_ordering {
        return .{ .ptr = qtc.strong_ordering_ToWeakOrdering(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/strong-ordering.html#dtor.strong_ordering)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: strong_ordering `
    ///
    pub fn Delete(self: strong_ordering) void {
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

    /// New constructs a new QPartialOrdering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPartialOrdering `
    ///
    pub fn New(other: anytype) QPartialOrdering {
        comptime _ = @TypeOf(other)._is_QPartialOrdering;
        return .{ .ptr = qtc.QPartialOrdering_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPartialOrdering object and invalidates the source QPartialOrdering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPartialOrdering `
    ///
    pub fn New2(other: anytype) QPartialOrdering {
        comptime _ = @TypeOf(other)._is_QPartialOrdering;
        return .{ .ptr = qtc.QPartialOrdering_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPartialOrdering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` order: partial_ordering `
    ///
    pub fn New3(order: anytype) QPartialOrdering {
        comptime _ = @TypeOf(order)._is_partial_ordering;
        return .{ .ptr = qtc.QPartialOrdering_new3(@ptrCast(order.ptr)) };
    }

    /// New4 constructs a new QPartialOrdering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stdorder: weak_ordering `
    ///
    pub fn New4(stdorder: anytype) QPartialOrdering {
        comptime _ = @TypeOf(stdorder)._is_weak_ordering;
        return .{ .ptr = qtc.QPartialOrdering_new4(@ptrCast(stdorder.ptr)) };
    }

    /// New5 constructs a new QPartialOrdering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stdorder: strong_ordering `
    ///
    pub fn New5(stdorder: anytype) QPartialOrdering {
        comptime _ = @TypeOf(stdorder)._is_strong_ordering;
        return .{ .ptr = qtc.QPartialOrdering_new5(@ptrCast(stdorder.ptr)) };
    }

    /// New6 constructs a new QPartialOrdering object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPartialOrdering `
    ///
    pub fn New6(param1: anytype) QPartialOrdering {
        comptime _ = @TypeOf(param1)._is_QPartialOrdering;
        return .{ .ptr = qtc.QPartialOrdering_new6(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPartialOrdering `
    ///
    /// ` other: QPartialOrdering `
    ///
    pub fn CopyAssign(self: QPartialOrdering, other: QPartialOrdering) void {
        qtc.QPartialOrdering_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPartialOrdering `
    ///
    /// ` other: QPartialOrdering `
    ///
    pub fn MoveAssign(self: QPartialOrdering, other: QPartialOrdering) void {
        qtc.QPartialOrdering_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpartialordering.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPartialOrdering `
    ///
    pub fn ToPartialOrdering(self: QPartialOrdering) partial_ordering {
        return .{ .ptr = qtc.QPartialOrdering_ToPartialOrdering(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpartialordering.html#dtor.QPartialOrdering)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPartialOrdering `
    ///
    pub fn Delete(self: QPartialOrdering) void {
        qtc.QPartialOrdering_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcompare.html#public-types)
pub const enums = struct {
    pub const Ordering = enum(i8) {
        pub const Equal: i8 = 0;
        pub const Equivalent: i8 = 0;
        pub const Less: i8 = -1;
        pub const Greater: i8 = 1;
    };

    pub const Uncomparable = enum(i8) {
        pub const Unordered: i8 = 2;
    };

    pub const LegacyUncomparable = enum(i8) {
        pub const Unordered: i8 = -127;
    };
};
