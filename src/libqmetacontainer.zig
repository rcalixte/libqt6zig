const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaType = @import("libqt6").QMetaType;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)
pub const QMetaContainer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaContainer,

    pub const _is_QMetaContainer = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaContainer object in C++ memory
    ///
    pub fn new() QMetaContainer {
        return .{ .ptr = qtc.QMetaContainer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaContainer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaContainer `
    ///
    pub fn new2(other: anytype) QMetaContainer {
        comptime _ = @TypeOf(other)._is_QMetaContainer;
        return .{ .ptr = qtc.QMetaContainer_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaContainer object and invalidate the source QMetaContainer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaContainer `
    ///
    pub fn new3(other: anytype) QMetaContainer {
        comptime _ = @TypeOf(other)._is_QMetaContainer;
        return .{ .ptr = qtc.QMetaContainer_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMetaContainer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaContainer `
    ///
    pub fn new4(param1: anytype) QMetaContainer {
        comptime _ = @TypeOf(param1)._is_QMetaContainer;
        return .{ .ptr = qtc.QMetaContainer_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` other: QMetaContainer `
    ///
    pub fn copyAssign(self: QMetaContainer, other: QMetaContainer) void {
        qtc.QMetaContainer_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` other: QMetaContainer `
    ///
    pub fn moveAssign(self: QMetaContainer, other: QMetaContainer) void {
        qtc.QMetaContainer_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `hasInputIterator` instead
    ///
    pub const HasInputIterator = hasInputIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn hasInputIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasForwardIterator` instead
    ///
    pub const HasForwardIterator = hasForwardIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn hasForwardIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasBidirectionalIterator` instead
    ///
    pub const HasBidirectionalIterator = hasBidirectionalIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn hasBidirectionalIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasRandomAccessIterator` instead
    ///
    pub const HasRandomAccessIterator = hasRandomAccessIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn hasRandomAccessIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasSize` instead
    ///
    pub const HasSize = hasSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn hasSize(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn size(self: QMetaContainer, container: ?*const anyopaque) isize {
        return qtc.QMetaContainer_Size(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `canClear` instead
    ///
    pub const CanClear = canClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn canClear(self: QMetaContainer) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn clear(self: QMetaContainer, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `hasIterator` instead
    ///
    pub const HasIterator = hasIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn hasIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn begin(self: QMetaContainer, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn end(self: QMetaContainer, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `destroyIterator` instead
    ///
    pub const DestroyIterator = destroyIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn destroyIterator(self: QMetaContainer, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

    /// ### DEPRECATED: Use `compareIterator` instead
    ///
    pub const CompareIterator = compareIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn compareIterator(self: QMetaContainer, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `copyIterator` instead
    ///
    pub const CopyIterator = copyIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn copyIterator(self: QMetaContainer, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

    /// ### DEPRECATED: Use `advanceIterator` instead
    ///
    pub const AdvanceIterator = advanceIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: isize `
    ///
    pub fn advanceIterator(self: QMetaContainer, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

    /// ### DEPRECATED: Use `diffIterator` instead
    ///
    pub const DiffIterator = diffIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn diffIterator(self: QMetaContainer, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `hasConstIterator` instead
    ///
    pub const HasConstIterator = hasConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn hasConstIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `constBegin` instead
    ///
    pub const ConstBegin = constBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn constBegin(self: QMetaContainer, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `constEnd` instead
    ///
    pub const ConstEnd = constEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn constEnd(self: QMetaContainer, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `destroyConstIterator` instead
    ///
    pub const DestroyConstIterator = destroyConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn destroyConstIterator(self: QMetaContainer, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

    /// ### DEPRECATED: Use `compareConstIterator` instead
    ///
    pub const CompareConstIterator = compareConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn compareConstIterator(self: QMetaContainer, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `copyConstIterator` instead
    ///
    pub const CopyConstIterator = copyConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn copyConstIterator(self: QMetaContainer, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

    /// ### DEPRECATED: Use `advanceConstIterator` instead
    ///
    pub const AdvanceConstIterator = advanceConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: isize `
    ///
    pub fn advanceConstIterator(self: QMetaContainer, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

    /// ### DEPRECATED: Use `diffConstIterator` instead
    ///
    pub const DiffConstIterator = diffConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn diffConstIterator(self: QMetaContainer, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#dtor.QMetaContainer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn delete(self: QMetaContainer) void {
        qtc.QMetaContainer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html)
pub const QMetaSequence = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaSequence,

    pub const _is_QMetaSequence = {};
    pub const _is_QMetaContainer = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaSequence object in C++ memory
    ///
    pub fn new() QMetaSequence {
        return .{ .ptr = qtc.QMetaSequence_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaSequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaSequence `
    ///
    pub fn new2(other: anytype) QMetaSequence {
        comptime _ = @TypeOf(other)._is_QMetaSequence;
        return .{ .ptr = qtc.QMetaSequence_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaSequence object and invalidate the source QMetaSequence object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaSequence `
    ///
    pub fn new3(other: anytype) QMetaSequence {
        comptime _ = @TypeOf(other)._is_QMetaSequence;
        return .{ .ptr = qtc.QMetaSequence_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` other: QMetaSequence `
    ///
    pub fn copyAssign(self: QMetaSequence, other: QMetaSequence) void {
        qtc.QMetaSequence_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` other: QMetaSequence `
    ///
    pub fn moveAssign(self: QMetaSequence, other: QMetaSequence) void {
        qtc.QMetaSequence_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `valueMetaType` instead
    ///
    pub const ValueMetaType = valueMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn valueMetaType(self: QMetaSequence) QMetaType {
        return .{ .ptr = qtc.QMetaSequence_ValueMetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isSortable` instead
    ///
    pub const IsSortable = isSortable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#isSortable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn isSortable(self: QMetaSequence) bool {
        return qtc.QMetaSequence_IsSortable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canAddValueAtBegin` instead
    ///
    pub const CanAddValueAtBegin = canAddValueAtBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canAddValueAtBegin(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanAddValueAtBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addValueAtBegin` instead
    ///
    pub const AddValueAtBegin = addValueAtBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn addValueAtBegin(self: QMetaSequence, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValueAtBegin(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(value));
    }

    /// ### DEPRECATED: Use `canAddValueAtEnd` instead
    ///
    pub const CanAddValueAtEnd = canAddValueAtEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canAddValueAtEnd(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanAddValueAtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addValueAtEnd` instead
    ///
    pub const AddValueAtEnd = addValueAtEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn addValueAtEnd(self: QMetaSequence, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValueAtEnd(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(value));
    }

    /// ### DEPRECATED: Use `canRemoveValueAtBegin` instead
    ///
    pub const CanRemoveValueAtBegin = canRemoveValueAtBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canRemoveValueAtBegin(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanRemoveValueAtBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeValueAtBegin` instead
    ///
    pub const RemoveValueAtBegin = removeValueAtBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn removeValueAtBegin(self: QMetaSequence, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtBegin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `canRemoveValueAtEnd` instead
    ///
    pub const CanRemoveValueAtEnd = canRemoveValueAtEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canRemoveValueAtEnd(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanRemoveValueAtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeValueAtEnd` instead
    ///
    pub const RemoveValueAtEnd = removeValueAtEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn removeValueAtEnd(self: QMetaSequence, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtEnd(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `canGetValueAtIndex` instead
    ///
    pub const CanGetValueAtIndex = canGetValueAtIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canGetValueAtIndex(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanGetValueAtIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `valueAtIndex` instead
    ///
    pub const ValueAtIndex = valueAtIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*const anyopaque `
    ///
    /// ` index: isize `
    ///
    /// ` result: ?*anyopaque `
    ///
    pub fn valueAtIndex(self: QMetaSequence, container: ?*const anyopaque, index: isize, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIndex(@ptrCast(self.ptr), @ptrCast(container), @bitCast(index), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `canSetValueAtIndex` instead
    ///
    pub const CanSetValueAtIndex = canSetValueAtIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canSetValueAtIndex(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanSetValueAtIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setValueAtIndex` instead
    ///
    pub const SetValueAtIndex = setValueAtIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` index: isize `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn setValueAtIndex(self: QMetaSequence, container: ?*anyopaque, index: isize, value: ?*const anyopaque) void {
        qtc.QMetaSequence_SetValueAtIndex(@ptrCast(self.ptr), @ptrCast(container), @bitCast(index), @ptrCast(value));
    }

    /// ### DEPRECATED: Use `canAddValue` instead
    ///
    pub const CanAddValue = canAddValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canAddValue(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanAddValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addValue` instead
    ///
    pub const AddValue = addValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn addValue(self: QMetaSequence, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValue(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(value));
    }

    /// ### DEPRECATED: Use `canRemoveValue` instead
    ///
    pub const CanRemoveValue = canRemoveValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canRemoveValue(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanRemoveValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeValue` instead
    ///
    pub const RemoveValue = removeValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn removeValue(self: QMetaSequence, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValue(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `canGetValueAtIterator` instead
    ///
    pub const CanGetValueAtIterator = canGetValueAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canGetValueAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanGetValueAtIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `valueAtIterator` instead
    ///
    pub const ValueAtIterator = valueAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` result: ?*anyopaque `
    ///
    pub fn valueAtIterator(self: QMetaSequence, iterator: ?*const anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `canSetValueAtIterator` instead
    ///
    pub const CanSetValueAtIterator = canSetValueAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canSetValueAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanSetValueAtIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setValueAtIterator` instead
    ///
    pub const SetValueAtIterator = setValueAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn setValueAtIterator(self: QMetaSequence, iterator: ?*const anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_SetValueAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(value));
    }

    /// ### DEPRECATED: Use `canInsertValueAtIterator` instead
    ///
    pub const CanInsertValueAtIterator = canInsertValueAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canInsertValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canInsertValueAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanInsertValueAtIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertValueAtIterator` instead
    ///
    pub const InsertValueAtIterator = insertValueAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#insertValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn insertValueAtIterator(self: QMetaSequence, container: ?*anyopaque, iterator: ?*const anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_InsertValueAtIterator(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(iterator), @ptrCast(value));
    }

    /// ### DEPRECATED: Use `canEraseValueAtIterator` instead
    ///
    pub const CanEraseValueAtIterator = canEraseValueAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canEraseValueAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanEraseValueAtIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `eraseValueAtIterator` instead
    ///
    pub const EraseValueAtIterator = eraseValueAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#eraseValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn eraseValueAtIterator(self: QMetaSequence, container: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaSequence_EraseValueAtIterator(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(iterator));
    }

    /// ### DEPRECATED: Use `canEraseRangeAtIterator` instead
    ///
    pub const CanEraseRangeAtIterator = canEraseRangeAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseRangeAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canEraseRangeAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanEraseRangeAtIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `eraseRangeAtIterator` instead
    ///
    pub const EraseRangeAtIterator = eraseRangeAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#eraseRangeAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` iterator1: ?*const anyopaque `
    ///
    /// ` iterator2: ?*const anyopaque `
    ///
    pub fn eraseRangeAtIterator(self: QMetaSequence, container: ?*anyopaque, iterator1: ?*const anyopaque, iterator2: ?*const anyopaque) void {
        qtc.QMetaSequence_EraseRangeAtIterator(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(iterator1), @ptrCast(iterator2));
    }

    /// ### DEPRECATED: Use `canGetValueAtConstIterator` instead
    ///
    pub const CanGetValueAtConstIterator = canGetValueAtConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canGetValueAtConstIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanGetValueAtConstIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `valueAtConstIterator` instead
    ///
    pub const ValueAtConstIterator = valueAtConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` result: ?*anyopaque `
    ///
    pub fn valueAtConstIterator(self: QMetaSequence, iterator: ?*const anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `hasInputIterator` instead
    ///
    pub const HasInputIterator = hasInputIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn hasInputIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasForwardIterator` instead
    ///
    pub const HasForwardIterator = hasForwardIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn hasForwardIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasBidirectionalIterator` instead
    ///
    pub const HasBidirectionalIterator = hasBidirectionalIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn hasBidirectionalIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasRandomAccessIterator` instead
    ///
    pub const HasRandomAccessIterator = hasRandomAccessIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn hasRandomAccessIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasSize` instead
    ///
    pub const HasSize = hasSize;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn hasSize(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn size(self: QMetaSequence, container: ?*const anyopaque) isize {
        return qtc.QMetaContainer_Size(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `canClear` instead
    ///
    pub const CanClear = canClear;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn canClear(self: QMetaSequence) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn clear(self: QMetaSequence, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `hasIterator` instead
    ///
    pub const HasIterator = hasIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn hasIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn begin(self: QMetaSequence, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn end(self: QMetaSequence, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `destroyIterator` instead
    ///
    pub const DestroyIterator = destroyIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn destroyIterator(self: QMetaSequence, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

    /// ### DEPRECATED: Use `compareIterator` instead
    ///
    pub const CompareIterator = compareIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn compareIterator(self: QMetaSequence, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `copyIterator` instead
    ///
    pub const CopyIterator = copyIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn copyIterator(self: QMetaSequence, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

    /// ### DEPRECATED: Use `advanceIterator` instead
    ///
    pub const AdvanceIterator = advanceIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: isize `
    ///
    pub fn advanceIterator(self: QMetaSequence, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

    /// ### DEPRECATED: Use `diffIterator` instead
    ///
    pub const DiffIterator = diffIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn diffIterator(self: QMetaSequence, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `hasConstIterator` instead
    ///
    pub const HasConstIterator = hasConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn hasConstIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `constBegin` instead
    ///
    pub const ConstBegin = constBegin;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn constBegin(self: QMetaSequence, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `constEnd` instead
    ///
    pub const ConstEnd = constEnd;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn constEnd(self: QMetaSequence, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `destroyConstIterator` instead
    ///
    pub const DestroyConstIterator = destroyConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn destroyConstIterator(self: QMetaSequence, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

    /// ### DEPRECATED: Use `compareConstIterator` instead
    ///
    pub const CompareConstIterator = compareConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn compareConstIterator(self: QMetaSequence, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `copyConstIterator` instead
    ///
    pub const CopyConstIterator = copyConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn copyConstIterator(self: QMetaSequence, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

    /// ### DEPRECATED: Use `advanceConstIterator` instead
    ///
    pub const AdvanceConstIterator = advanceConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: isize `
    ///
    pub fn advanceConstIterator(self: QMetaSequence, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

    /// ### DEPRECATED: Use `diffConstIterator` instead
    ///
    pub const DiffConstIterator = diffConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn diffConstIterator(self: QMetaSequence, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#dtor.QMetaSequence)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn delete(self: QMetaSequence) void {
        qtc.QMetaSequence_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html)
pub const QMetaAssociation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaAssociation,

    pub const _is_QMetaAssociation = {};
    pub const _is_QMetaContainer = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaAssociation object in C++ memory
    ///
    pub fn new() QMetaAssociation {
        return .{ .ptr = qtc.QMetaAssociation_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaAssociation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaAssociation `
    ///
    pub fn new2(other: anytype) QMetaAssociation {
        comptime _ = @TypeOf(other)._is_QMetaAssociation;
        return .{ .ptr = qtc.QMetaAssociation_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaAssociation object and invalidate the source QMetaAssociation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaAssociation `
    ///
    pub fn new3(other: anytype) QMetaAssociation {
        comptime _ = @TypeOf(other)._is_QMetaAssociation;
        return .{ .ptr = qtc.QMetaAssociation_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` other: QMetaAssociation `
    ///
    pub fn copyAssign(self: QMetaAssociation, other: QMetaAssociation) void {
        qtc.QMetaAssociation_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` other: QMetaAssociation `
    ///
    pub fn moveAssign(self: QMetaAssociation, other: QMetaAssociation) void {
        qtc.QMetaAssociation_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `keyMetaType` instead
    ///
    pub const KeyMetaType = keyMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn keyMetaType(self: QMetaAssociation) QMetaType {
        return .{ .ptr = qtc.QMetaAssociation_KeyMetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mappedMetaType` instead
    ///
    pub const MappedMetaType = mappedMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn mappedMetaType(self: QMetaAssociation) QMetaType {
        return .{ .ptr = qtc.QMetaAssociation_MappedMetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `canInsertKey` instead
    ///
    pub const CanInsertKey = canInsertKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canInsertKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canInsertKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanInsertKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertKey` instead
    ///
    pub const InsertKey = insertKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#insertKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn insertKey(self: QMetaAssociation, container: ?*anyopaque, key: ?*const anyopaque) void {
        qtc.QMetaAssociation_InsertKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### DEPRECATED: Use `canRemoveKey` instead
    ///
    pub const CanRemoveKey = canRemoveKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canRemoveKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canRemoveKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanRemoveKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeKey` instead
    ///
    pub const RemoveKey = removeKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#removeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn removeKey(self: QMetaAssociation, container: ?*anyopaque, key: ?*const anyopaque) void {
        qtc.QMetaAssociation_RemoveKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### DEPRECATED: Use `canContainsKey` instead
    ///
    pub const CanContainsKey = canContainsKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canContainsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canContainsKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanContainsKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `containsKey` instead
    ///
    pub const ContainsKey = containsKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#containsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn containsKey(self: QMetaAssociation, container: ?*const anyopaque, key: ?*const anyopaque) bool {
        return qtc.QMetaAssociation_ContainsKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### DEPRECATED: Use `canGetMappedAtKey` instead
    ///
    pub const CanGetMappedAtKey = canGetMappedAtKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canGetMappedAtKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetMappedAtKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mappedAtKey` instead
    ///
    pub const MappedAtKey = mappedAtKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    /// ` mapped: ?*anyopaque `
    ///
    pub fn mappedAtKey(self: QMetaAssociation, container: ?*const anyopaque, key: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key), @ptrCast(mapped));
    }

    /// ### DEPRECATED: Use `canSetMappedAtKey` instead
    ///
    pub const CanSetMappedAtKey = canSetMappedAtKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canSetMappedAtKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanSetMappedAtKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMappedAtKey` instead
    ///
    pub const SetMappedAtKey = setMappedAtKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    /// ` mapped: ?*const anyopaque `
    ///
    pub fn setMappedAtKey(self: QMetaAssociation, container: ?*anyopaque, key: ?*const anyopaque, mapped: ?*const anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key), @ptrCast(mapped));
    }

    /// ### DEPRECATED: Use `canGetKeyAtIterator` instead
    ///
    pub const CanGetKeyAtIterator = canGetKeyAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canGetKeyAtIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetKeyAtIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyAtIterator` instead
    ///
    pub const KeyAtIterator = keyAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` key: ?*anyopaque `
    ///
    pub fn keyAtIterator(self: QMetaAssociation, iterator: ?*const anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(key));
    }

    /// ### DEPRECATED: Use `canGetKeyAtConstIterator` instead
    ///
    pub const CanGetKeyAtConstIterator = canGetKeyAtConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canGetKeyAtConstIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetKeyAtConstIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyAtConstIterator` instead
    ///
    pub const KeyAtConstIterator = keyAtConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` key: ?*anyopaque `
    ///
    pub fn keyAtConstIterator(self: QMetaAssociation, iterator: ?*const anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(key));
    }

    /// ### DEPRECATED: Use `canGetMappedAtIterator` instead
    ///
    pub const CanGetMappedAtIterator = canGetMappedAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canGetMappedAtIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetMappedAtIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mappedAtIterator` instead
    ///
    pub const MappedAtIterator = mappedAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` mapped: ?*anyopaque `
    ///
    pub fn mappedAtIterator(self: QMetaAssociation, iterator: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### DEPRECATED: Use `canGetMappedAtConstIterator` instead
    ///
    pub const CanGetMappedAtConstIterator = canGetMappedAtConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canGetMappedAtConstIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetMappedAtConstIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mappedAtConstIterator` instead
    ///
    pub const MappedAtConstIterator = mappedAtConstIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` mapped: ?*anyopaque `
    ///
    pub fn mappedAtConstIterator(self: QMetaAssociation, iterator: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### DEPRECATED: Use `canSetMappedAtIterator` instead
    ///
    pub const CanSetMappedAtIterator = canSetMappedAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canSetMappedAtIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanSetMappedAtIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMappedAtIterator` instead
    ///
    pub const SetMappedAtIterator = setMappedAtIterator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` mapped: ?*const anyopaque `
    ///
    pub fn setMappedAtIterator(self: QMetaAssociation, iterator: ?*const anyopaque, mapped: ?*const anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### DEPRECATED: Use `canCreateIteratorAtKey` instead
    ///
    pub const CanCreateIteratorAtKey = canCreateIteratorAtKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canCreateIteratorAtKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanCreateIteratorAtKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createIteratorAtKey` instead
    ///
    pub const CreateIteratorAtKey = createIteratorAtKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#createIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn createIteratorAtKey(self: QMetaAssociation, container: ?*anyopaque, key: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateIteratorAtKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### DEPRECATED: Use `canCreateConstIteratorAtKey` instead
    ///
    pub const CanCreateConstIteratorAtKey = canCreateConstIteratorAtKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateConstIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canCreateConstIteratorAtKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanCreateConstIteratorAtKey(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createConstIteratorAtKey` instead
    ///
    pub const CreateConstIteratorAtKey = createConstIteratorAtKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#createConstIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn createConstIteratorAtKey(self: QMetaAssociation, container: ?*const anyopaque, key: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateConstIteratorAtKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### DEPRECATED: Use `hasInputIterator` instead
    ///
    pub const HasInputIterator = hasInputIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn hasInputIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasForwardIterator` instead
    ///
    pub const HasForwardIterator = hasForwardIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn hasForwardIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasBidirectionalIterator` instead
    ///
    pub const HasBidirectionalIterator = hasBidirectionalIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn hasBidirectionalIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasRandomAccessIterator` instead
    ///
    pub const HasRandomAccessIterator = hasRandomAccessIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn hasRandomAccessIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasSize` instead
    ///
    pub const HasSize = hasSize;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn hasSize(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn size(self: QMetaAssociation, container: ?*const anyopaque) isize {
        return qtc.QMetaContainer_Size(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `canClear` instead
    ///
    pub const CanClear = canClear;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn canClear(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn clear(self: QMetaAssociation, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `hasIterator` instead
    ///
    pub const HasIterator = hasIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn hasIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn begin(self: QMetaAssociation, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn end(self: QMetaAssociation, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `destroyIterator` instead
    ///
    pub const DestroyIterator = destroyIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn destroyIterator(self: QMetaAssociation, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

    /// ### DEPRECATED: Use `compareIterator` instead
    ///
    pub const CompareIterator = compareIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn compareIterator(self: QMetaAssociation, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `copyIterator` instead
    ///
    pub const CopyIterator = copyIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn copyIterator(self: QMetaAssociation, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

    /// ### DEPRECATED: Use `advanceIterator` instead
    ///
    pub const AdvanceIterator = advanceIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: isize `
    ///
    pub fn advanceIterator(self: QMetaAssociation, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

    /// ### DEPRECATED: Use `diffIterator` instead
    ///
    pub const DiffIterator = diffIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn diffIterator(self: QMetaAssociation, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `hasConstIterator` instead
    ///
    pub const HasConstIterator = hasConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn hasConstIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `constBegin` instead
    ///
    pub const ConstBegin = constBegin;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn constBegin(self: QMetaAssociation, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `constEnd` instead
    ///
    pub const ConstEnd = constEnd;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn constEnd(self: QMetaAssociation, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### DEPRECATED: Use `destroyConstIterator` instead
    ///
    pub const DestroyConstIterator = destroyConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn destroyConstIterator(self: QMetaAssociation, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

    /// ### DEPRECATED: Use `compareConstIterator` instead
    ///
    pub const CompareConstIterator = compareConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn compareConstIterator(self: QMetaAssociation, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `copyConstIterator` instead
    ///
    pub const CopyConstIterator = copyConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn copyConstIterator(self: QMetaAssociation, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

    /// ### DEPRECATED: Use `advanceConstIterator` instead
    ///
    pub const AdvanceConstIterator = advanceConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: isize `
    ///
    pub fn advanceConstIterator(self: QMetaAssociation, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

    /// ### DEPRECATED: Use `diffConstIterator` instead
    ///
    pub const DiffConstIterator = diffConstIterator;

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn diffConstIterator(self: QMetaAssociation, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#dtor.QMetaAssociation)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn delete(self: QMetaAssociation) void {
        qtc.QMetaAssociation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#public-types)
pub const enums = struct {
    pub const IteratorCapability = enum(u8) {
        pub const InputCapability: u8 = 1;
        pub const ForwardCapability: u8 = 2;
        pub const BiDirectionalCapability: u8 = 4;
        pub const RandomAccessCapability: u8 = 8;
    };

    pub const AddRemoveCapability = enum(u8) {
        pub const CanAddAtBegin: u8 = 1;
        pub const CanRemoveAtBegin: u8 = 2;
        pub const CanAddAtEnd: u8 = 4;
        pub const CanRemoveAtEnd: u8 = 8;
    };

    pub const Position = enum(u8) {
        pub const AtBegin: u8 = 0;
        pub const AtEnd: u8 = 1;
        pub const Unspecified: u8 = 2;
    };
};
