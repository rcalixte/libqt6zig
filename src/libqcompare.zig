const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/partial-ordering.html
pub const partial_ordering = struct {
    /// New constructs a new Qt::partial_ordering object.
    ///
    /// ``` other: QtC.partial_ordering ```
    pub fn New(other: ?*anyopaque) QtC.partial_ordering {
        return qtc.partial_ordering_new(@ptrCast(other));
    }

    /// New2 constructs a new Qt::partial_ordering object and invalidates the source Qt::partial_ordering object.
    ///
    /// ``` other: QtC.partial_ordering ```
    pub fn New2(other: ?*anyopaque) QtC.partial_ordering {
        return qtc.partial_ordering_new2(@ptrCast(other));
    }

    /// New3 constructs a new Qt::partial_ordering object.
    ///
    /// ``` param1: QtC.partial_ordering ```
    pub fn New3(param1: ?*anyopaque) QtC.partial_ordering {
        return qtc.partial_ordering_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.partial_ordering, other: QtC.partial_ordering ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.partial_ordering_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.partial_ordering, other: QtC.partial_ordering ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.partial_ordering_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/partial-ordering.html#dtor.partial_ordering)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.partial_ordering ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.partial_ordering_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/weak-ordering.html
pub const weak_ordering = struct {
    /// New constructs a new Qt::weak_ordering object.
    ///
    /// ``` other: QtC.weak_ordering ```
    pub fn New(other: ?*anyopaque) QtC.weak_ordering {
        return qtc.weak_ordering_new(@ptrCast(other));
    }

    /// New2 constructs a new Qt::weak_ordering object and invalidates the source Qt::weak_ordering object.
    ///
    /// ``` other: QtC.weak_ordering ```
    pub fn New2(other: ?*anyopaque) QtC.weak_ordering {
        return qtc.weak_ordering_new2(@ptrCast(other));
    }

    /// New3 constructs a new Qt::weak_ordering object.
    ///
    /// ``` param1: QtC.weak_ordering ```
    pub fn New3(param1: ?*anyopaque) QtC.weak_ordering {
        return qtc.weak_ordering_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.weak_ordering, other: QtC.weak_ordering ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.weak_ordering_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.weak_ordering, other: QtC.weak_ordering ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.weak_ordering_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/weak-ordering.html#operator)
    ///
    /// ``` self: QtC.weak_ordering ```
    pub fn ToPartialOrdering(self: ?*anyopaque) QtC.partial_ordering {
        return qtc.weak_ordering_ToPartialOrdering(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/weak-ordering.html#dtor.weak_ordering)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.weak_ordering ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.weak_ordering_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/strong-ordering.html
pub const strong_ordering = struct {
    /// New constructs a new Qt::strong_ordering object.
    ///
    /// ``` other: QtC.strong_ordering ```
    pub fn New(other: ?*anyopaque) QtC.strong_ordering {
        return qtc.strong_ordering_new(@ptrCast(other));
    }

    /// New2 constructs a new Qt::strong_ordering object and invalidates the source Qt::strong_ordering object.
    ///
    /// ``` other: QtC.strong_ordering ```
    pub fn New2(other: ?*anyopaque) QtC.strong_ordering {
        return qtc.strong_ordering_new2(@ptrCast(other));
    }

    /// New3 constructs a new Qt::strong_ordering object.
    ///
    /// ``` param1: QtC.strong_ordering ```
    pub fn New3(param1: ?*anyopaque) QtC.strong_ordering {
        return qtc.strong_ordering_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.strong_ordering, other: QtC.strong_ordering ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.strong_ordering_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.strong_ordering, other: QtC.strong_ordering ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.strong_ordering_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/strong-ordering.html#operator)
    ///
    /// ``` self: QtC.strong_ordering ```
    pub fn ToPartialOrdering(self: ?*anyopaque) QtC.partial_ordering {
        return qtc.strong_ordering_ToPartialOrdering(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/strong-ordering.html#operator)
    ///
    /// ``` self: QtC.strong_ordering ```
    pub fn ToWeakOrdering(self: ?*anyopaque) QtC.weak_ordering {
        return qtc.strong_ordering_ToWeakOrdering(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/strong-ordering.html#dtor.strong_ordering)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.strong_ordering ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.strong_ordering_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpartialordering.html
pub const qpartialordering = struct {
    /// New constructs a new QPartialOrdering object.
    ///
    /// ``` other: QtC.QPartialOrdering ```
    pub fn New(other: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new(@ptrCast(other));
    }

    /// New2 constructs a new QPartialOrdering object and invalidates the source QPartialOrdering object.
    ///
    /// ``` other: QtC.QPartialOrdering ```
    pub fn New2(other: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPartialOrdering object.
    ///
    /// ``` order: QtC.partial_ordering ```
    pub fn New3(order: QtC.partial_ordering) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new3(@ptrCast(order));
    }

    /// New4 constructs a new QPartialOrdering object.
    ///
    /// ``` stdorder: QtC.weak_ordering ```
    pub fn New4(stdorder: QtC.weak_ordering) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new4(@ptrCast(stdorder));
    }

    /// New5 constructs a new QPartialOrdering object.
    ///
    /// ``` stdorder: QtC.strong_ordering ```
    pub fn New5(stdorder: QtC.strong_ordering) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new5(@ptrCast(stdorder));
    }

    /// New6 constructs a new QPartialOrdering object.
    ///
    /// ``` param1: QtC.QPartialOrdering ```
    pub fn New6(param1: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QPartialOrdering_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPartialOrdering, other: QtC.QPartialOrdering ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPartialOrdering_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPartialOrdering, other: QtC.QPartialOrdering ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPartialOrdering_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpartialordering.html#operator)
    ///
    /// ``` self: QtC.QPartialOrdering ```
    pub fn ToPartialOrdering(self: ?*anyopaque) QtC.partial_ordering {
        return qtc.QPartialOrdering_ToPartialOrdering(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpartialordering.html#dtor.QPartialOrdering)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPartialOrdering ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPartialOrdering_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcompare.html#types
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
