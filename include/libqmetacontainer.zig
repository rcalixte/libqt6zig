const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qmetacontainer.html
pub const qmetacontainer = struct {
    /// New constructs a new QMetaContainer object.
    ///
    /// ``` other: QtC.QMetaContainer ```
    pub fn New(other: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaContainer object and invalidates the source QMetaContainer object.
    ///
    /// ``` other: QtC.QMetaContainer ```
    pub fn New2(other: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaContainer object.
    ///
    ///
    pub fn New3() QtC.QMetaContainer {
        return qtc.QMetaContainer_new3();
    }

    /// New4 constructs a new QMetaContainer object.
    ///
    /// ``` param1: QtC.QMetaContainer ```
    pub fn New4(param1: ?*anyopaque) QtC.QMetaContainer {
        return qtc.QMetaContainer_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMetaContainer, other: QtC.QMetaContainer ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaContainer_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMetaContainer, other: QtC.QMetaContainer ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaContainer_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn HasInputIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn HasForwardIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn HasBidirectionalIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn HasRandomAccessIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn HasSize(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ``` self: QtC.QMetaContainer, container: ?*anyopaque ```
    pub fn Size(self: ?*anyopaque, container: ?*anyopaque) i64 {
        return qtc.QMetaContainer_Size(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn CanClear(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ``` self: QtC.QMetaContainer, container: ?*anyopaque ```
    pub fn Clear(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn HasIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ``` self: QtC.QMetaContainer, container: ?*anyopaque ```
    pub fn Begin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ``` self: QtC.QMetaContainer, container: ?*anyopaque ```
    pub fn End(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ``` self: QtC.QMetaContainer, iterator: ?*anyopaque ```
    pub fn DestroyIterator(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self), iterator);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ``` self: QtC.QMetaContainer, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn CompareIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self), i, j);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ``` self: QtC.QMetaContainer, target: ?*anyopaque, source: ?*anyopaque ```
    pub fn CopyIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self), target, source);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ``` self: QtC.QMetaContainer, iterator: ?*anyopaque, step: i64 ```
    pub fn AdvanceIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self), iterator, @intCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ``` self: QtC.QMetaContainer, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn DiffIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) i64 {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self), i, j);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn HasConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ``` self: QtC.QMetaContainer, container: ?*anyopaque ```
    pub fn ConstBegin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ``` self: QtC.QMetaContainer, container: ?*anyopaque ```
    pub fn ConstEnd(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ``` self: QtC.QMetaContainer, iterator: ?*anyopaque ```
    pub fn DestroyConstIterator(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self), iterator);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ``` self: QtC.QMetaContainer, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn CompareConstIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self), i, j);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ``` self: QtC.QMetaContainer, target: ?*anyopaque, source: ?*anyopaque ```
    pub fn CopyConstIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self), target, source);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ``` self: QtC.QMetaContainer, iterator: ?*anyopaque, step: i64 ```
    pub fn AdvanceConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self), iterator, @intCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ``` self: QtC.QMetaContainer, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn DiffConstIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) i64 {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self), i, j);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#dtor.QMetaContainer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaContainer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaContainer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetasequence.html
pub const qmetasequence = struct {
    /// New constructs a new QMetaSequence object.
    ///
    /// ``` other: QtC.QMetaSequence ```
    pub fn New(other: ?*anyopaque) QtC.QMetaSequence {
        return qtc.QMetaSequence_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaSequence object and invalidates the source QMetaSequence object.
    ///
    /// ``` other: QtC.QMetaSequence ```
    pub fn New2(other: ?*anyopaque) QtC.QMetaSequence {
        return qtc.QMetaSequence_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaSequence object.
    ///
    ///
    pub fn New3() QtC.QMetaSequence {
        return qtc.QMetaSequence_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMetaSequence, other: QtC.QMetaSequence ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaSequence_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMetaSequence, other: QtC.QMetaSequence ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaSequence_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueMetaType)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn ValueMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaSequence_ValueMetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#isSortable)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn IsSortable(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_IsSortable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtBegin)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanAddValueAtBegin(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanAddValueAtBegin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtBegin)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque, value: ?*anyopaque ```
    pub fn AddValueAtBegin(self: ?*anyopaque, container: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_AddValueAtBegin(@ptrCast(self), container, value);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValueAtEnd)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanAddValueAtEnd(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanAddValueAtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValueAtEnd)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque, value: ?*anyopaque ```
    pub fn AddValueAtEnd(self: ?*anyopaque, container: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_AddValueAtEnd(@ptrCast(self), container, value);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtBegin)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanRemoveValueAtBegin(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanRemoveValueAtBegin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtBegin)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn RemoveValueAtBegin(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtBegin(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValueAtEnd)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanRemoveValueAtEnd(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanRemoveValueAtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValueAtEnd)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn RemoveValueAtEnd(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValueAtEnd(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIndex)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanGetValueAtIndex(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanGetValueAtIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIndex)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque, index: i64, result: ?*anyopaque ```
    pub fn ValueAtIndex(self: ?*anyopaque, container: ?*anyopaque, index: i64, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIndex(@ptrCast(self), container, @intCast(index), result);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIndex)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanSetValueAtIndex(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanSetValueAtIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIndex)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque, index: i64, value: ?*anyopaque ```
    pub fn SetValueAtIndex(self: ?*anyopaque, container: ?*anyopaque, index: i64, value: ?*anyopaque) void {
        qtc.QMetaSequence_SetValueAtIndex(@ptrCast(self), container, @intCast(index), value);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canAddValue)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanAddValue(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanAddValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#addValue)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque, value: ?*anyopaque ```
    pub fn AddValue(self: ?*anyopaque, container: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_AddValue(@ptrCast(self), container, value);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canRemoveValue)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanRemoveValue(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanRemoveValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#removeValue)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn RemoveValue(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaSequence_RemoveValue(@ptrCast(self), container);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanGetValueAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanGetValueAtIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence, iterator: ?*anyopaque, result: ?*anyopaque ```
    pub fn ValueAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtIterator(@ptrCast(self), iterator, result);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canSetValueAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanSetValueAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanSetValueAtIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#setValueAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence, iterator: ?*anyopaque, value: ?*anyopaque ```
    pub fn SetValueAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_SetValueAtIterator(@ptrCast(self), iterator, value);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canInsertValueAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanInsertValueAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanInsertValueAtIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#insertValueAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque, iterator: ?*anyopaque, value: ?*anyopaque ```
    pub fn InsertValueAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QMetaSequence_InsertValueAtIterator(@ptrCast(self), container, iterator, value);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canEraseValueAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanEraseValueAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanEraseValueAtIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#eraseValueAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque, iterator: ?*anyopaque ```
    pub fn EraseValueAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaSequence_EraseValueAtIterator(@ptrCast(self), container, iterator);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canEraseRangeAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanEraseRangeAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanEraseRangeAtIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#eraseRangeAtIterator)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque, iterator1: ?*anyopaque, iterator2: ?*anyopaque ```
    pub fn EraseRangeAtIterator(self: ?*anyopaque, container: ?*anyopaque, iterator1: ?*anyopaque, iterator2: ?*anyopaque) void {
        qtc.QMetaSequence_EraseRangeAtIterator(@ptrCast(self), container, iterator1, iterator2);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#canGetValueAtConstIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanGetValueAtConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaSequence_CanGetValueAtConstIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#valueAtConstIterator)
    ///
    /// ``` self: QtC.QMetaSequence, iterator: ?*anyopaque, result: ?*anyopaque ```
    pub fn ValueAtConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, result: ?*anyopaque) void {
        qtc.QMetaSequence_ValueAtConstIterator(@ptrCast(self), iterator, result);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn HasInputIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn HasForwardIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn HasBidirectionalIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn HasRandomAccessIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn HasSize(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn Size(self: ?*anyopaque, container: ?*anyopaque) i64 {
        return qtc.QMetaContainer_Size(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn CanClear(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn Clear(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn HasIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn Begin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn End(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ``` self: QtC.QMetaSequence, iterator: ?*anyopaque ```
    pub fn DestroyIterator(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self), iterator);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ``` self: QtC.QMetaSequence, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn CompareIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self), i, j);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ``` self: QtC.QMetaSequence, target: ?*anyopaque, source: ?*anyopaque ```
    pub fn CopyIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self), target, source);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ``` self: QtC.QMetaSequence, iterator: ?*anyopaque, step: i64 ```
    pub fn AdvanceIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self), iterator, @intCast(step));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ``` self: QtC.QMetaSequence, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn DiffIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) i64 {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self), i, j);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn HasConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn ConstBegin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ``` self: QtC.QMetaSequence, container: ?*anyopaque ```
    pub fn ConstEnd(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ``` self: QtC.QMetaSequence, iterator: ?*anyopaque ```
    pub fn DestroyConstIterator(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self), iterator);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ``` self: QtC.QMetaSequence, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn CompareConstIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self), i, j);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ``` self: QtC.QMetaSequence, target: ?*anyopaque, source: ?*anyopaque ```
    pub fn CopyConstIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self), target, source);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ``` self: QtC.QMetaSequence, iterator: ?*anyopaque, step: i64 ```
    pub fn AdvanceConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self), iterator, @intCast(step));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ``` self: QtC.QMetaSequence, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn DiffConstIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) i64 {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self), i, j);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetasequence.html#dtor.QMetaSequence)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaSequence ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaSequence_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetaassociation.html
pub const qmetaassociation = struct {
    /// New constructs a new QMetaAssociation object.
    ///
    /// ``` other: QtC.QMetaAssociation ```
    pub fn New(other: ?*anyopaque) QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new(@ptrCast(other));
    }

    /// New2 constructs a new QMetaAssociation object and invalidates the source QMetaAssociation object.
    ///
    /// ``` other: QtC.QMetaAssociation ```
    pub fn New2(other: ?*anyopaque) QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMetaAssociation object.
    ///
    ///
    pub fn New3() QtC.QMetaAssociation {
        return qtc.QMetaAssociation_new3();
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QMetaAssociation, other: QtC.QMetaAssociation ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaAssociation_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QMetaAssociation, other: QtC.QMetaAssociation ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMetaAssociation_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyMetaType)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn KeyMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaAssociation_KeyMetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedMetaType)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn MappedMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QMetaAssociation_MappedMetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canInsertKey)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanInsertKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanInsertKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#insertKey)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque, key: ?*anyopaque ```
    pub fn InsertKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_InsertKey(@ptrCast(self), container, key);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canRemoveKey)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanRemoveKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanRemoveKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#removeKey)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque, key: ?*anyopaque ```
    pub fn RemoveKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_RemoveKey(@ptrCast(self), container, key);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canContainsKey)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanContainsKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanContainsKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#containsKey)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque, key: ?*anyopaque ```
    pub fn ContainsKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QMetaAssociation_ContainsKey(@ptrCast(self), container, key);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtKey)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanGetMappedAtKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetMappedAtKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtKey)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque, key: ?*anyopaque, mapped: ?*anyopaque ```
    pub fn MappedAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtKey(@ptrCast(self), container, key, mapped);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtKey)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanSetMappedAtKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanSetMappedAtKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtKey)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque, key: ?*anyopaque, mapped: ?*anyopaque ```
    pub fn SetMappedAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtKey(@ptrCast(self), container, key, mapped);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanGetKeyAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetKeyAtIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque, key: ?*anyopaque ```
    pub fn KeyAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtIterator(@ptrCast(self), iterator, key);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetKeyAtConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanGetKeyAtConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetKeyAtConstIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#keyAtConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque, key: ?*anyopaque ```
    pub fn KeyAtConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QMetaAssociation_KeyAtConstIterator(@ptrCast(self), iterator, key);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanGetMappedAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetMappedAtIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque, mapped: ?*anyopaque ```
    pub fn MappedAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtIterator(@ptrCast(self), iterator, mapped);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canGetMappedAtConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanGetMappedAtConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanGetMappedAtConstIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#mappedAtConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque, mapped: ?*anyopaque ```
    pub fn MappedAtConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_MappedAtConstIterator(@ptrCast(self), iterator, mapped);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canSetMappedAtIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanSetMappedAtIterator(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanSetMappedAtIterator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#setMappedAtIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque, mapped: ?*anyopaque ```
    pub fn SetMappedAtIterator(self: ?*anyopaque, iterator: ?*anyopaque, mapped: ?*anyopaque) void {
        qtc.QMetaAssociation_SetMappedAtIterator(@ptrCast(self), iterator, mapped);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateIteratorAtKey)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanCreateIteratorAtKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanCreateIteratorAtKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#createIteratorAtKey)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque, key: ?*anyopaque ```
    pub fn CreateIteratorAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateIteratorAtKey(@ptrCast(self), container, key);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#canCreateConstIteratorAtKey)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanCreateConstIteratorAtKey(self: ?*anyopaque) bool {
        return qtc.QMetaAssociation_CanCreateConstIteratorAtKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#createConstIteratorAtKey)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque, key: ?*anyopaque ```
    pub fn CreateConstIteratorAtKey(self: ?*anyopaque, container: ?*anyopaque, key: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaAssociation_CreateConstIteratorAtKey(@ptrCast(self), container, key);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasInputIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn HasInputIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasInputIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasForwardIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn HasForwardIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasForwardIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasBidirectionalIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn HasBidirectionalIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasBidirectionalIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasRandomAccessIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn HasRandomAccessIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasRandomAccessIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasSize)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn HasSize(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasSize(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#size)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque ```
    pub fn Size(self: ?*anyopaque, container: ?*anyopaque) i64 {
        return qtc.QMetaContainer_Size(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#canClear)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn CanClear(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_CanClear(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#clear)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque ```
    pub fn Clear(self: ?*anyopaque, container: ?*anyopaque) void {
        qtc.QMetaContainer_Clear(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn HasIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#begin)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque ```
    pub fn Begin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_Begin(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#end)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque ```
    pub fn End(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_End(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque ```
    pub fn DestroyIterator(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaContainer_DestroyIterator(@ptrCast(self), iterator);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn CompareIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) bool {
        return qtc.QMetaContainer_CompareIterator(@ptrCast(self), i, j);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, target: ?*anyopaque, source: ?*anyopaque ```
    pub fn CopyIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMetaContainer_CopyIterator(@ptrCast(self), target, source);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque, step: i64 ```
    pub fn AdvanceIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceIterator(@ptrCast(self), iterator, @intCast(step));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn DiffIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) i64 {
        return qtc.QMetaContainer_DiffIterator(@ptrCast(self), i, j);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#hasConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn HasConstIterator(self: ?*anyopaque) bool {
        return qtc.QMetaContainer_HasConstIterator(@ptrCast(self));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constBegin)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque ```
    pub fn ConstBegin(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstBegin(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#constEnd)
    ///
    /// ``` self: QtC.QMetaAssociation, container: ?*anyopaque ```
    pub fn ConstEnd(self: ?*anyopaque, container: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaContainer_ConstEnd(@ptrCast(self), container);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#destroyConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque ```
    pub fn DestroyConstIterator(self: ?*anyopaque, iterator: ?*anyopaque) void {
        qtc.QMetaContainer_DestroyConstIterator(@ptrCast(self), iterator);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#compareConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn CompareConstIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) bool {
        return qtc.QMetaContainer_CompareConstIterator(@ptrCast(self), i, j);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#copyConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, target: ?*anyopaque, source: ?*anyopaque ```
    pub fn CopyConstIterator(self: ?*anyopaque, target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMetaContainer_CopyConstIterator(@ptrCast(self), target, source);
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#advanceConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, iterator: ?*anyopaque, step: i64 ```
    pub fn AdvanceConstIterator(self: ?*anyopaque, iterator: ?*anyopaque, step: i64) void {
        qtc.QMetaContainer_AdvanceConstIterator(@ptrCast(self), iterator, @intCast(step));
    }

    /// Inherited from QMetaContainer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmetacontainer.html#diffConstIterator)
    ///
    /// ``` self: QtC.QMetaAssociation, i: ?*anyopaque, j: ?*anyopaque ```
    pub fn DiffConstIterator(self: ?*anyopaque, i: ?*anyopaque, j: ?*anyopaque) i64 {
        return qtc.QMetaContainer_DiffConstIterator(@ptrCast(self), i, j);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmetaassociation.html#dtor.QMetaAssociation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMetaAssociation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMetaAssociation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmetacontainer.html#types
pub const enums = struct {
    pub const IteratorCapability = enum {
        pub const InputCapability: u8 = 1;
        pub const ForwardCapability: u8 = 2;
        pub const BiDirectionalCapability: u8 = 4;
        pub const RandomAccessCapability: u8 = 8;
    };

    pub const AddRemoveCapability = enum {
        pub const CanAddAtBegin: u8 = 1;
        pub const CanRemoveAtBegin: u8 = 2;
        pub const CanAddAtEnd: u8 = 4;
        pub const CanRemoveAtEnd: u8 = 8;
    };

    pub const Position = enum {
        pub const AtBegin: u8 = 0;
        pub const AtEnd: u8 = 1;
        pub const Unspecified: u8 = 2;
    };
};
