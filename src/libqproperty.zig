const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qproperty_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html
pub const qscopedpropertyupdategroup = struct {
    /// New constructs a new QScopedPropertyUpdateGroup object.
    ///
    ///
    pub fn New() QtC.QScopedPropertyUpdateGroup {
        return qtc.QScopedPropertyUpdateGroup_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html#dtor.QScopedPropertyUpdateGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QScopedPropertyUpdateGroup ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScopedPropertyUpdateGroup_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html
pub const qpropertybindingsourcelocation = struct {
    /// New constructs a new QPropertyBindingSourceLocation object.
    ///
    /// ``` other: QtC.QPropertyBindingSourceLocation ```
    pub fn New(other: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new(@ptrCast(other));
    }

    /// New2 constructs a new QPropertyBindingSourceLocation object and invalidates the source QPropertyBindingSourceLocation object.
    ///
    /// ``` other: QtC.QPropertyBindingSourceLocation ```
    pub fn New2(other: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPropertyBindingSourceLocation object.
    ///
    ///
    pub fn New3() QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new3();
    }

    /// New4 constructs a new QPropertyBindingSourceLocation object.
    ///
    /// ``` param1: QtC.QPropertyBindingSourceLocation ```
    pub fn New4(param1: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QPropertyBindingSourceLocation, other: QtC.QPropertyBindingSourceLocation ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QPropertyBindingSourceLocation, other: QtC.QPropertyBindingSourceLocation ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#dtor.QPropertyBindingSourceLocation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPropertyBindingSourceLocation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertybindingerror.html
pub const qpropertybindingerror = struct {
    /// New constructs a new QPropertyBindingError object.
    ///
    ///
    pub fn New() QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new();
    }

    /// New2 constructs a new QPropertyBindingError object.
    ///
    /// ``` typeVal: qproperty_enums.Type ```
    pub fn New2(typeVal: i64) QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new2(@intCast(typeVal));
    }

    /// New3 constructs a new QPropertyBindingError object.
    ///
    /// ``` other: QtC.QPropertyBindingError ```
    pub fn New3(other: ?*anyopaque) QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new3(@ptrCast(other));
    }

    /// New4 constructs a new QPropertyBindingError object.
    ///
    /// ``` typeVal: qproperty_enums.Type, description: []const u8 ```
    pub fn New4(typeVal: i64, description: []const u8) QtC.QPropertyBindingError {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };

        return qtc.QPropertyBindingError_new4(@intCast(typeVal), description_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#operator-eq)
    ///
    /// ``` self: QtC.QPropertyBindingError, other: QtC.QPropertyBindingError ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingError_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#hasError)
    ///
    /// ``` self: QtC.QPropertyBindingError ```
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QPropertyBindingError_HasError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#type)
    ///
    /// ``` self: QtC.QPropertyBindingError ```
    ///
    /// Returns: ``` qproperty_enums.Type ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QPropertyBindingError_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#description)
    ///
    /// ``` self: QtC.QPropertyBindingError, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPropertyBindingError_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertybindingerror.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertybindingerror.html#dtor.QPropertyBindingError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPropertyBindingError ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyBindingError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/quntypedpropertybinding.html
pub const quntypedpropertybinding = struct {
    /// New constructs a new QUntypedPropertyBinding object.
    ///
    ///
    pub fn New() QtC.QUntypedPropertyBinding {
        return qtc.QUntypedPropertyBinding_new();
    }

    /// New2 constructs a new QUntypedPropertyBinding object.
    ///
    /// ``` other: QtC.QUntypedPropertyBinding ```
    pub fn New2(other: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedPropertyBinding_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#operator-eq)
    ///
    /// ``` self: QtC.QUntypedPropertyBinding, other: QtC.QUntypedPropertyBinding ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyBinding_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#isNull)
    ///
    /// ``` self: QtC.QUntypedPropertyBinding ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QUntypedPropertyBinding_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#error)
    ///
    /// ``` self: QtC.QUntypedPropertyBinding ```
    pub fn Error(self: ?*anyopaque) QtC.QPropertyBindingError {
        return qtc.QUntypedPropertyBinding_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#valueMetaType)
    ///
    /// ``` self: QtC.QUntypedPropertyBinding ```
    pub fn ValueMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QUntypedPropertyBinding_ValueMetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertybinding.html#dtor.QUntypedPropertyBinding)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QUntypedPropertyBinding ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedPropertyBinding_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertyobserverbase.html
pub const qpropertyobserverbase = struct {
    /// New constructs a new QPropertyObserverBase object.
    ///
    ///
    pub fn New() QtC.QPropertyObserverBase {
        return qtc.QPropertyObserverBase_new();
    }

    /// New2 constructs a new QPropertyObserverBase object.
    ///
    /// ``` param1: QtC.QPropertyObserverBase ```
    pub fn New2(param1: ?*anyopaque) QtC.QPropertyObserverBase {
        return qtc.QPropertyObserverBase_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyobserverbase.html#dtor.QPropertyObserverBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPropertyObserverBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyObserverBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertyobserver.html
pub const qpropertyobserver = struct {
    /// New constructs a new QPropertyObserver object.
    ///
    ///
    pub fn New() QtC.QPropertyObserver {
        return qtc.QPropertyObserver_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyobserver.html#dtor.QPropertyObserver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPropertyObserver ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyObserver_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertynotifier.html
pub const qpropertynotifier = struct {
    /// New constructs a new QPropertyNotifier object.
    ///
    ///
    pub fn New() QtC.QPropertyNotifier {
        return qtc.QPropertyNotifier_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertynotifier.html#dtor.QPropertyNotifier)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPropertyNotifier ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyNotifier_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/quntypedbindable.html
pub const quntypedbindable = struct {
    /// New constructs a new QUntypedBindable object.
    ///
    /// ``` other: QtC.QUntypedBindable ```
    pub fn New(other: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new(@ptrCast(other));
    }

    /// New2 constructs a new QUntypedBindable object and invalidates the source QUntypedBindable object.
    ///
    /// ``` other: QtC.QUntypedBindable ```
    pub fn New2(other: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new2(@ptrCast(other));
    }

    /// New3 constructs a new QUntypedBindable object.
    ///
    ///
    pub fn New3() QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new3();
    }

    /// New4 constructs a new QUntypedBindable object.
    ///
    /// ``` param1: QtC.QUntypedBindable ```
    pub fn New4(param1: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QUntypedBindable, other: QtC.QUntypedBindable ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedBindable_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QUntypedBindable, other: QtC.QUntypedBindable ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedBindable_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isValid)
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QUntypedBindable_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isBindable)
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn IsBindable(self: ?*anyopaque) bool {
        return qtc.QUntypedBindable_IsBindable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#isReadOnly)
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QUntypedBindable_IsReadOnly(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn MakeBinding(self: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_MakeBinding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#takeBinding)
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn TakeBinding(self: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_TakeBinding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#observe)
    ///
    /// ``` self: QtC.QUntypedBindable, observer: QtC.QPropertyObserver ```
    pub fn Observe(self: ?*anyopaque, observer: ?*anyopaque) void {
        qtc.QUntypedBindable_Observe(@ptrCast(self), @ptrCast(observer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#binding)
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn Binding(self: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_Binding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#setBinding)
    ///
    /// ``` self: QtC.QUntypedBindable, binding: QtC.QUntypedPropertyBinding ```
    pub fn SetBinding(self: ?*anyopaque, binding: ?*anyopaque) bool {
        return qtc.QUntypedBindable_SetBinding(@ptrCast(self), @ptrCast(binding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#hasBinding)
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn HasBinding(self: ?*anyopaque) bool {
        return qtc.QUntypedBindable_HasBinding(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#metaType)
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn MetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QUntypedBindable_MetaType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
    ///
    /// ``` self: QtC.QUntypedBindable, location: QtC.QPropertyBindingSourceLocation ```
    pub fn MakeBinding1(self: ?*anyopaque, location: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_MakeBinding1(@ptrCast(self), @ptrCast(location));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedbindable.html#dtor.QUntypedBindable)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QUntypedBindable ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedBindable_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qproperty.html#types
pub const enums = struct {
    pub const Reason = enum {
        pub const InvalidInterface: i32 = 0;
        pub const NonBindableInterface: i32 = 1;
        pub const ReadOnlyInterface: i32 = 2;
    };

    pub const Type = enum {
        pub const NoError: i32 = 0;
        pub const BindingLoop: i32 = 1;
        pub const EvaluationError: i32 = 2;
        pub const UnknownError: i32 = 3;
    };

    pub const ObserverTag = enum {
        pub const ObserverNotifiesBinding: i32 = 0;
        pub const ObserverNotifiesChangeHandler: i32 = 1;
        pub const ObserverIsPlaceholder: i32 = 2;
    };
};
