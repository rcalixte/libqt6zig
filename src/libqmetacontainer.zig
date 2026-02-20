const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html)
pub const qmetacontainer = struct {
    /// New constructs a new QMetaContainer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMetaContainer `
    ///
    pub fn New(other: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaContainer object and invalidates the source QMetaContainer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMetaContainer `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaContainer object.
    ///
    pub fn New3() QtC.QMetaContainer {
        return qtc.QMetaContainer_new3();
    }

    /// New4 constructs a new QMetaContainer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaContainer `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` other: QtC.QMetaContainer `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaContainer_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` other: QtC.QMetaContainer `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaContainer_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn HasInputIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn HasForwardIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn HasBidirectionalIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn HasRandomAccessIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn HasSize(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn Size(self: ?*anyopaque, container: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_Size(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn CanClear(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn Clear(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn HasIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn Begin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn End(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn DestroyIterator(self: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self), @ptrCast(iterator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn CompareIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn CopyIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self), @ptrCast(target), @ptrCast(source));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: i64 `
    ///
    pub fn AdvanceIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self), @ptrCast(iterator), @bitCast(step));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn DiffIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn HasConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn ConstBegin(self: ?*anyopaque, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn ConstEnd(self: ?*anyopaque, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn DestroyConstIterator(self: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self), @ptrCast(iterator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn CompareConstIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn CopyConstIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self), @ptrCast(target), @ptrCast(source));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: i64 `
    ///
    pub fn AdvanceConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self), @ptrCast(iterator), @bitCast(step));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn DiffConstIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#dtor.QMetaContainer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMetaContainer `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaContainer_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html)
pub const qmetasequence = struct {
    /// New constructs a new QMetaSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMetaSequence `
    ///
    pub fn New(other: ?*anyopaque) QtC.QMetaSequence {
        return qtc.QMetaSequence_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaSequence object and invalidates the source QMetaSequence object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMetaSequence `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QMetaSequence {
        return qtc.QMetaSequence_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaSequence object.
    ///
    pub fn New3() QtC.QMetaSequence {
        return qtc.QMetaSequence_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` other: QtC.QMetaSequence `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaSequence_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` other: QtC.QMetaSequence `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaSequence_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn ValueMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaSequence_ValueMetaType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#isSortable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn IsSortable(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_IsSortable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanAddValueAtBegin(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanAddValueAtBegin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn AddValueAtBegin(self: ?*anyopaque, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValueAtBegin(@ptrCast(self), @ptrCast(container), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanAddValueAtEnd(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanAddValueAtEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn AddValueAtEnd(self: ?*anyopaque, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValueAtEnd(@ptrCast(self), @ptrCast(container), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanRemoveValueAtBegin(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanRemoveValueAtBegin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn RemoveValueAtBegin(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtBegin(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanRemoveValueAtEnd(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanRemoveValueAtEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn RemoveValueAtEnd(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtEnd(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanGetValueAtIndex(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanGetValueAtIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*const anyopaque `
    ///
    /// ` index: i64 `
    ///
    /// ` result: ?*anyopaque `
    ///
    pub fn ValueAtIndex(self: ?*anyopaque, container: ?*const anyopaque, index: i64, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIndex(@ptrCast(self), @ptrCast(container), @bitCast(index), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanSetValueAtIndex(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanSetValueAtIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` index: i64 `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn SetValueAtIndex(self: ?*anyopaque, container: ?*anyopaque, index: i64, value: ?*const anyopaque) void {
        qtc.QMetaSequence_SetValueAtIndex(@ptrCast(self), @ptrCast(container), @bitCast(index), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canAddValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanAddValue(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanAddValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#addValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn AddValue(self: ?*anyopaque, container: ?*anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_AddValue(@ptrCast(self), @ptrCast(container), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanRemoveValue(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanRemoveValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#removeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn RemoveValue(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValue(@ptrCast(self), @ptrCast(container));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanGetValueAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanGetValueAtIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` result: ?*anyopaque `
    ///
    pub fn ValueAtIterator(self: ?*anyopaque, iterator: ?*const anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanSetValueAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanSetValueAtIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn SetValueAtIterator(self: ?*anyopaque, iterator: ?*const anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_SetValueAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canInsertValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanInsertValueAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanInsertValueAtIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#insertValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn InsertValueAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator: ?*const anyopaque, value: ?*const anyopaque) void {
        qtc.QMetaSequence_InsertValueAtIterator(@ptrCast(self), @ptrCast(container), @ptrCast(iterator), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanEraseValueAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanEraseValueAtIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#eraseValueAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn EraseValueAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaSequence_EraseValueAtIterator(@ptrCast(self), @ptrCast(container), @ptrCast(iterator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canEraseRangeAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanEraseRangeAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanEraseRangeAtIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#eraseRangeAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` iterator1: ?*const anyopaque `
    ///
    /// ` iterator2: ?*const anyopaque `
    ///
    pub fn EraseRangeAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator1: ?*const anyopaque, iterator2: ?*const anyopaque) void {
        qtc.QMetaSequence_EraseRangeAtIterator(@ptrCast(self), @ptrCast(container), @ptrCast(iterator1), @ptrCast(iterator2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanGetValueAtConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanGetValueAtConstIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#valueAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` result: ?*anyopaque `
    ///
    pub fn ValueAtConstIterator(self: ?*anyopaque, iterator: ?*const anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtConstIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(result));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn HasInputIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn HasForwardIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn HasBidirectionalIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn HasRandomAccessIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn HasSize(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn Size(self: ?*anyopaque, container: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_Size(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn CanClear(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn Clear(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn HasIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn Begin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn End(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn DestroyIterator(self: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self), @ptrCast(iterator));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn CompareIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn CopyIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self), @ptrCast(target), @ptrCast(source));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: i64 `
    ///
    pub fn AdvanceIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self), @ptrCast(iterator), @bitCast(step));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn DiffIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn HasConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn ConstBegin(self: ?*anyopaque, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn ConstEnd(self: ?*anyopaque, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn DestroyConstIterator(self: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self), @ptrCast(iterator));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn CompareConstIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn CopyConstIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self), @ptrCast(target), @ptrCast(source));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: i64 `
    ///
    pub fn AdvanceConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self), @ptrCast(iterator), @bitCast(step));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn DiffConstIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetasequence.html#dtor.QMetaSequence)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMetaSequence `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaSequence_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html)
pub const qmetaassociation = struct {
    /// New constructs a new QMetaAssociation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMetaAssociation `
    ///
    pub fn New(other: ?*anyopaque) QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaAssociation object and invalidates the source QMetaAssociation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMetaAssociation `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaAssociation object.
    ///
    pub fn New3() QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` other: QtC.QMetaAssociation `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaAssociation_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` other: QtC.QMetaAssociation `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaAssociation_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn KeyMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaAssociation_KeyMetaType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn MappedMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaAssociation_MappedMetaType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canInsertKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanInsertKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanInsertKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#insertKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn InsertKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*const anyopaque) void {
        qtc.QMetaAssociation_InsertKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canRemoveKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanRemoveKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanRemoveKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#removeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn RemoveKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*const anyopaque) void {
        qtc.QMetaAssociation_RemoveKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canContainsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanContainsKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanContainsKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#containsKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn ContainsKey(self: ?*anyopaque, container: ?*const anyopaque, key: ?*const anyopaque) bool {
        return qtc.QMetaAssociation_ContainsKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanGetMappedAtKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetMappedAtKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    /// ` mapped: ?*anyopaque `
    ///
    pub fn MappedAtKey(self: ?*anyopaque, container: ?*const anyopaque, key: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtKey(@ptrCast(self), @ptrCast(container), @ptrCast(key), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanSetMappedAtKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanSetMappedAtKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    /// ` mapped: ?*const anyopaque `
    ///
    pub fn SetMappedAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*const anyopaque, mapped: ?*const anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtKey(@ptrCast(self), @ptrCast(container), @ptrCast(key), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanGetKeyAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetKeyAtIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` key: ?*anyopaque `
    ///
    pub fn KeyAtIterator(self: ?*anyopaque, iterator: ?*const anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanGetKeyAtConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetKeyAtConstIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` key: ?*anyopaque `
    ///
    pub fn KeyAtConstIterator(self: ?*anyopaque, iterator: ?*const anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtConstIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanGetMappedAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetMappedAtIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` mapped: ?*anyopaque `
    ///
    pub fn MappedAtIterator(self: ?*anyopaque, iterator: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanGetMappedAtConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetMappedAtConstIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` mapped: ?*anyopaque `
    ///
    pub fn MappedAtConstIterator(self: ?*anyopaque, iterator: ?*const anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtConstIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanSetMappedAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanSetMappedAtIterator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    /// ` mapped: ?*const anyopaque `
    ///
    pub fn SetMappedAtIterator(self: ?*anyopaque, iterator: ?*const anyopaque, mapped: ?*const anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtIterator(@ptrCast(self), @ptrCast(iterator), @ptrCast(mapped));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanCreateIteratorAtKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanCreateIteratorAtKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#createIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn CreateIteratorAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateIteratorAtKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateConstIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanCreateConstIteratorAtKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanCreateConstIteratorAtKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#createConstIteratorAtKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    /// ` key: ?*const anyopaque `
    ///
    pub fn CreateConstIteratorAtKey(self: ?*anyopaque, container: ?*const anyopaque, key: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateConstIteratorAtKey(@ptrCast(self), @ptrCast(container), @ptrCast(key));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn HasInputIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn HasForwardIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn HasBidirectionalIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn HasRandomAccessIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn HasSize(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn Size(self: ?*anyopaque, container: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_Size(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn CanClear(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn Clear(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn HasIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn Begin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*anyopaque `
    ///
    pub fn End(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn DestroyIterator(self: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self), @ptrCast(iterator));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn CompareIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn CopyIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self), @ptrCast(target), @ptrCast(source));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: i64 `
    ///
    pub fn AdvanceIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self), @ptrCast(iterator), @bitCast(step));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn DiffIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn HasConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn ConstBegin(self: ?*anyopaque, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` container: ?*const anyopaque `
    ///
    pub fn ConstEnd(self: ?*anyopaque, container: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self), @ptrCast(container));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*const anyopaque `
    ///
    pub fn DestroyConstIterator(self: ?*anyopaque, iterator: ?*const anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self), @ptrCast(iterator));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn CompareConstIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` target: ?*anyopaque `
    ///
    /// ` source: ?*const anyopaque `
    ///
    pub fn CopyConstIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*const anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self), @ptrCast(target), @ptrCast(source));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` iterator: ?*anyopaque `
    ///
    /// ` step: i64 `
    ///
    pub fn AdvanceConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self), @ptrCast(iterator), @bitCast(step));
    }

    /// Inherited from QMetaContainer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    /// ` i: ?*const anyopaque `
    ///
    /// ` j: ?*const anyopaque `
    ///
    pub fn DiffConstIterator(self: ?*anyopaque, i: ?*const anyopaque, j: ?*const anyopaque) i64 {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self), @ptrCast(i), @ptrCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetaassociation.html#dtor.QMetaAssociation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMetaAssociation `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaAssociation_Delete(@ptrCast(self));
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
