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

    /// New constructs a new QMetaContainer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaContainer `
    ///
    pub fn New(other: anytype) QMetaContainer {
        comptime _ = @TypeOf(other)._is_QMetaContainer;
        return .{ .ptr = qtc.QMetaContainer_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMetaContainer object and invalidates the source QMetaContainer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaContainer `
    ///
    pub fn New2(other: anytype) QMetaContainer {
        comptime _ = @TypeOf(other)._is_QMetaContainer;
        return .{ .ptr = qtc.QMetaContainer_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMetaContainer object.
    ///
    pub fn New3() QMetaContainer {
        return .{ .ptr = qtc.QMetaContainer_new3() };
    }

    /// New4 constructs a new QMetaContainer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaContainer `
    ///
    pub fn New4(param1: anytype) QMetaContainer {
        comptime _ = @TypeOf(param1)._is_QMetaContainer;
        return .{ .ptr = qtc.QMetaContainer_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` other: QMetaContainer `
    ///
    pub fn CopyAssign(self: QMetaContainer, other: QMetaContainer) void {
        qtc.QMetaContainer_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` other: QMetaContainer `
    ///
    pub fn MoveAssign(self: QMetaContainer, other: QMetaContainer) void {
        qtc.QMetaContainer_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn HasInputIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn HasForwardIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn HasBidirectionalIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn HasRandomAccessIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn HasSize(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn Size(self: QMetaContainer, container: ?*const anyopaque) isize {
        return qtc.QMetaContainer_Size(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn CanClear(self: QMetaContainer) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn Clear(self: QMetaContainer, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn HasIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn Begin(self: QMetaContainer, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn End(self: QMetaContainer, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn DestroyIterator(self: QMetaContainer, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

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
    pub fn CompareIterator(self: QMetaContainer, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

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
    pub fn CopyIterator(self: QMetaContainer, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

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
    pub fn AdvanceIterator(self: QMetaContainer, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

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
    pub fn DiffIterator(self: QMetaContainer, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn HasConstIterator(self: QMetaContainer) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn ConstBegin(self: QMetaContainer, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn ConstEnd(self: QMetaContainer, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaContainer `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn DestroyConstIterator(self: QMetaContainer, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

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
    pub fn CompareConstIterator(self: QMetaContainer, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

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
    pub fn CopyConstIterator(self: QMetaContainer, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

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
    pub fn AdvanceConstIterator(self: QMetaContainer, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

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
    pub fn DiffConstIterator(self: QMetaContainer, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#dtor.QMetaContainer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaContainer `
    ///
    pub fn Delete(self: QMetaContainer) void {
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

    /// New constructs a new QMetaSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaSequence `
    ///
    pub fn New(other: anytype) QMetaSequence {
        comptime _ = @TypeOf(other)._is_QMetaSequence;
        return .{ .ptr = qtc.QMetaSequence_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMetaSequence object and invalidates the source QMetaSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaSequence `
    ///
    pub fn New2(other: anytype) QMetaSequence {
        comptime _ = @TypeOf(other)._is_QMetaSequence;
        return .{ .ptr = qtc.QMetaSequence_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMetaSequence object.
    ///
    pub fn New3() QMetaSequence {
        return .{ .ptr = qtc.QMetaSequence_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` other: QMetaSequence `
    ///
    pub fn CopyAssign(self: QMetaSequence, other: QMetaSequence) void {
        qtc.QMetaSequence_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` other: QMetaSequence `
    ///
    pub fn MoveAssign(self: QMetaSequence, other: QMetaSequence) void {
        qtc.QMetaSequence_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn ValueMetaType(self: QMetaSequence) QMetaType {
        return .{ .ptr = qtc.QMetaSequence_ValueMetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#isSortable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn IsSortable(self: QMetaSequence) bool {
        return qtc.QMetaSequence_IsSortable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanAddValueAtBegin(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanAddValueAtBegin(@ptrCast(self.ptr));
    }

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
    pub fn AddValueAtBegin(self: QMetaSequence, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValueAtBegin(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanAddValueAtEnd(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanAddValueAtEnd(@ptrCast(self.ptr));
    }

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
    pub fn AddValueAtEnd(self: QMetaSequence, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValueAtEnd(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanRemoveValueAtBegin(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanRemoveValueAtBegin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn RemoveValueAtBegin(self: QMetaSequence, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtBegin(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanRemoveValueAtEnd(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanRemoveValueAtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn RemoveValueAtEnd(self: QMetaSequence, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtEnd(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanGetValueAtIndex(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanGetValueAtIndex(@ptrCast(self.ptr));
    }

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
    pub fn ValueAtIndex(self: QMetaSequence, container: ?*const anyopaque, index: isize, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIndex(@ptrCast(self.ptr), @ptrCast(container), @bitCast(index), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanSetValueAtIndex(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanSetValueAtIndex(@ptrCast(self.ptr));
    }

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
    pub fn SetValueAtIndex(self: QMetaSequence, container: ?*anyopaque, index: isize, value: ?*const anyopaque) void {
        qtc.QMetaSequence_SetValueAtIndex(@ptrCast(self.ptr), @ptrCast(container), @bitCast(index), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanAddValue(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanAddValue(@ptrCast(self.ptr));
    }

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
    pub fn AddValue(self: QMetaSequence, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValue(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanRemoveValue(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanRemoveValue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn RemoveValue(self: QMetaSequence, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValue(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanGetValueAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanGetValueAtIterator(@ptrCast(self.ptr));
    }

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
    pub fn ValueAtIterator(self: QMetaSequence, iterator: ?*const anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanSetValueAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanSetValueAtIterator(@ptrCast(self.ptr));
    }

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
    pub fn SetValueAtIterator(self: QMetaSequence, iterator: ?*const anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_SetValueAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canInsertValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanInsertValueAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanInsertValueAtIterator(@ptrCast(self.ptr));
    }

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
    pub fn InsertValueAtIterator(self: QMetaSequence, container: ?*anyopaque, iterator: ?*const anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_InsertValueAtIterator(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(iterator), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanEraseValueAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanEraseValueAtIterator(@ptrCast(self.ptr));
    }

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
    pub fn EraseValueAtIterator(self: QMetaSequence, container: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaSequence_EraseValueAtIterator(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(iterator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseRangeAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanEraseRangeAtIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanEraseRangeAtIterator(@ptrCast(self.ptr));
    }

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
    pub fn EraseRangeAtIterator(self: QMetaSequence, container: ?*anyopaque, iterator1: ?*const anyopaque, iterator2: ?*const anyopaque) void {
        qtc.QMetaSequence_EraseRangeAtIterator(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(iterator1), @ptrCast(iterator2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanGetValueAtConstIterator(self: QMetaSequence) bool {
        return qtc.QMetaSequence_CanGetValueAtConstIterator(@ptrCast(self.ptr));
    }

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
    pub fn ValueAtConstIterator(self: QMetaSequence, iterator: ?*const anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(result));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn HasInputIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self.ptr));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn HasForwardIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self.ptr));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn HasBidirectionalIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self.ptr));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn HasRandomAccessIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self.ptr));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn HasSize(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self.ptr));
    }

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
    pub fn Size(self: QMetaSequence, container: ?*const anyopaque) isize {
        return qtc.QMetaContainer_Size(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn CanClear(self: QMetaSequence) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self.ptr));
    }

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
    pub fn Clear(self: QMetaSequence, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn HasIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self.ptr));
    }

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
    pub fn Begin(self: QMetaSequence, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self.ptr), @ptrCast(container));
    }

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
    pub fn End(self: QMetaSequence, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self.ptr), @ptrCast(container));
    }

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
    pub fn DestroyIterator(self: QMetaSequence, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

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
    pub fn CompareIterator(self: QMetaSequence, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

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
    pub fn CopyIterator(self: QMetaSequence, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

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
    pub fn AdvanceIterator(self: QMetaSequence, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

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
    pub fn DiffIterator(self: QMetaSequence, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn HasConstIterator(self: QMetaSequence) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self.ptr));
    }

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
    pub fn ConstBegin(self: QMetaSequence, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self.ptr), @ptrCast(container));
    }

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
    pub fn ConstEnd(self: QMetaSequence, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self.ptr), @ptrCast(container));
    }

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
    pub fn DestroyConstIterator(self: QMetaSequence, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

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
    pub fn CompareConstIterator(self: QMetaSequence, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

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
    pub fn CopyConstIterator(self: QMetaSequence, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

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
    pub fn AdvanceConstIterator(self: QMetaSequence, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

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
    pub fn DiffConstIterator(self: QMetaSequence, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#dtor.QMetaSequence)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaSequence `
    ///
    pub fn Delete(self: QMetaSequence) void {
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

    /// New constructs a new QMetaAssociation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaAssociation `
    ///
    pub fn New(other: anytype) QMetaAssociation {
        comptime _ = @TypeOf(other)._is_QMetaAssociation;
        return .{ .ptr = qtc.QMetaAssociation_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QMetaAssociation object and invalidates the source QMetaAssociation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaAssociation `
    ///
    pub fn New2(other: anytype) QMetaAssociation {
        comptime _ = @TypeOf(other)._is_QMetaAssociation;
        return .{ .ptr = qtc.QMetaAssociation_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMetaAssociation object.
    ///
    pub fn New3() QMetaAssociation {
        return .{ .ptr = qtc.QMetaAssociation_new3() };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` other: QMetaAssociation `
    ///
    pub fn CopyAssign(self: QMetaAssociation, other: QMetaAssociation) void {
        qtc.QMetaAssociation_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaAssociation `
    ///
    /// ` other: QMetaAssociation `
    ///
    pub fn MoveAssign(self: QMetaAssociation, other: QMetaAssociation) void {
        qtc.QMetaAssociation_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn KeyMetaType(self: QMetaAssociation) QMetaType {
        return .{ .ptr = qtc.QMetaAssociation_KeyMetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn MappedMetaType(self: QMetaAssociation) QMetaType {
        return .{ .ptr = qtc.QMetaAssociation_MappedMetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canInsertKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanInsertKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanInsertKey(@ptrCast(self.ptr));
    }

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
    pub fn InsertKey(self: QMetaAssociation, container: ?*anyopaque, key: ?*const anyopaque) void {
        qtc.QMetaAssociation_InsertKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canRemoveKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanRemoveKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanRemoveKey(@ptrCast(self.ptr));
    }

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
    pub fn RemoveKey(self: QMetaAssociation, container: ?*anyopaque, key: ?*const anyopaque) void {
        qtc.QMetaAssociation_RemoveKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canContainsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanContainsKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanContainsKey(@ptrCast(self.ptr));
    }

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
    pub fn ContainsKey(self: QMetaAssociation, container: ?*const anyopaque, key: ?*const anyopaque) bool {
        return qtc.QMetaAssociation_ContainsKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanGetMappedAtKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetMappedAtKey(@ptrCast(self.ptr));
    }

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
    pub fn MappedAtKey(self: QMetaAssociation, container: ?*const anyopaque, key: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanSetMappedAtKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanSetMappedAtKey(@ptrCast(self.ptr));
    }

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
    pub fn SetMappedAtKey(self: QMetaAssociation, container: ?*anyopaque, key: ?*const anyopaque, mapped: ?*const anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanGetKeyAtIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetKeyAtIterator(@ptrCast(self.ptr));
    }

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
    pub fn KeyAtIterator(self: QMetaAssociation, iterator: ?*const anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanGetKeyAtConstIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetKeyAtConstIterator(@ptrCast(self.ptr));
    }

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
    pub fn KeyAtConstIterator(self: QMetaAssociation, iterator: ?*const anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanGetMappedAtIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetMappedAtIterator(@ptrCast(self.ptr));
    }

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
    pub fn MappedAtIterator(self: QMetaAssociation, iterator: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanGetMappedAtConstIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanGetMappedAtConstIterator(@ptrCast(self.ptr));
    }

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
    pub fn MappedAtConstIterator(self: QMetaAssociation, iterator: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanSetMappedAtIterator(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanSetMappedAtIterator(@ptrCast(self.ptr));
    }

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
    pub fn SetMappedAtIterator(self: QMetaAssociation, iterator: ?*const anyopaque, mapped: ?*const anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtIterator(@ptrCast(self.ptr), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanCreateIteratorAtKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanCreateIteratorAtKey(@ptrCast(self.ptr));
    }

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
    pub fn CreateIteratorAtKey(self: QMetaAssociation, container: ?*anyopaque, key: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateIteratorAtKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateConstIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanCreateConstIteratorAtKey(self: QMetaAssociation) bool {
        return qtc.QMetaAssociation_CanCreateConstIteratorAtKey(@ptrCast(self.ptr));
    }

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
    pub fn CreateConstIteratorAtKey(self: QMetaAssociation, container: ?*const anyopaque, key: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateConstIteratorAtKey(@ptrCast(self.ptr), @ptrCast(container), @ptrCast(key));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn HasInputIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self.ptr));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn HasForwardIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self.ptr));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn HasBidirectionalIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self.ptr));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn HasRandomAccessIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self.ptr));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn HasSize(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self.ptr));
    }

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
    pub fn Size(self: QMetaAssociation, container: ?*const anyopaque) isize {
        return qtc.QMetaContainer_Size(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn CanClear(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self.ptr));
    }

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
    pub fn Clear(self: QMetaAssociation, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self.ptr), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn HasIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self.ptr));
    }

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
    pub fn Begin(self: QMetaAssociation, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self.ptr), @ptrCast(container));
    }

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
    pub fn End(self: QMetaAssociation, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self.ptr), @ptrCast(container));
    }

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
    pub fn DestroyIterator(self: QMetaAssociation, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

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
    pub fn CompareIterator(self: QMetaAssociation, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

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
    pub fn CopyIterator(self: QMetaAssociation, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

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
    pub fn AdvanceIterator(self: QMetaAssociation, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

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
    pub fn DiffIterator(self: QMetaAssociation, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn HasConstIterator(self: QMetaAssociation) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self.ptr));
    }

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
    pub fn ConstBegin(self: QMetaAssociation, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self.ptr), @ptrCast(container));
    }

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
    pub fn ConstEnd(self: QMetaAssociation, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self.ptr), @ptrCast(container));
    }

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
    pub fn DestroyConstIterator(self: QMetaAssociation, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self.ptr), @ptrCast(iterator));
    }

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
    pub fn CompareConstIterator(self: QMetaAssociation, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

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
    pub fn CopyConstIterator(self: QMetaAssociation, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self.ptr), @ptrCast(target), @ptrCast(source));
    }

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
    pub fn AdvanceConstIterator(self: QMetaAssociation, iterator: ?*anyopaque, step: isize) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self.ptr), @ptrCast(iterator), @bitCast(step));
    }

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
    pub fn DiffConstIterator(self: QMetaAssociation, i: ?*const anyopaque, j: ?*const anyopaque) isize {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self.ptr), @ptrCast(i), @ptrCast(j));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#dtor.QMetaAssociation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaAssociation `
    ///
    pub fn Delete(self: QMetaAssociation) void {
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
