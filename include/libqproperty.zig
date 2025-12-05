const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qproperty_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html)
pub const qscopedpropertyupdategroup = struct {
    /// New constructs a new QScopedPropertyUpdateGroup object.
    ///
    pub fn New() QtC.QScopedPropertyUpdateGroup {
        return qtc.QScopedPropertyUpdateGroup_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html#dtor.QScopedPropertyUpdateGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QScopedPropertyUpdateGroup `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScopedPropertyUpdateGroup_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html)
pub const qpropertybindingsourcelocation = struct {
    /// New constructs a new QPropertyBindingSourceLocation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn New(other: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new(@ptrCast(other));
    }

    /// New2 constructs a new QPropertyBindingSourceLocation object and invalidates the source QPropertyBindingSourceLocation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new2(@ptrCast(other));
    }

    /// New3 constructs a new QPropertyBindingSourceLocation object.
    ///
    pub fn New3() QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new3();
    }

    /// New4 constructs a new QPropertyBindingSourceLocation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QPropertyBindingSourceLocation {
        return qtc.QPropertyBindingSourceLocation_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    /// ` other: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    /// ` other: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#fileName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn FileName(self: ?*anyopaque) []const u8 {
        const fileName_ret = qtc.QPropertyBindingSourceLocation_FileName(@ptrCast(self));
        return std.mem.span(fileName_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#fileName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_Cstring = fileName.ptr;
        qtc.QPropertyBindingSourceLocation_SetFileName(@ptrCast(self), fileName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#functionName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn FunctionName(self: ?*anyopaque) []const u8 {
        const functionName_ret = qtc.QPropertyBindingSourceLocation_FunctionName(@ptrCast(self));
        return std.mem.span(functionName_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#functionName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    /// ` functionName: []const u8 `
    ///
    pub fn SetFunctionName(self: ?*anyopaque, functionName: []const u8) void {
        const functionName_Cstring = functionName.ptr;
        qtc.QPropertyBindingSourceLocation_SetFunctionName(@ptrCast(self), functionName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn Line(self: ?*anyopaque) u32 {
        return qtc.QPropertyBindingSourceLocation_Line(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    /// ` line: u32 `
    ///
    pub fn SetLine(self: ?*anyopaque, line: u32) void {
        qtc.QPropertyBindingSourceLocation_SetLine(@ptrCast(self), @intCast(line));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#column-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn Column(self: ?*anyopaque) u32 {
        return qtc.QPropertyBindingSourceLocation_Column(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#column-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    /// ` column: u32 `
    ///
    pub fn SetColumn(self: ?*anyopaque, column: u32) void {
        qtc.QPropertyBindingSourceLocation_SetColumn(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#dtor.QPropertyBindingSourceLocation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyBindingSourceLocation_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html)
pub const qpropertybindingerror = struct {
    /// New constructs a new QPropertyBindingError object.
    ///
    pub fn New() QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new();
    }

    /// New2 constructs a new QPropertyBindingError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qproperty_enums.Type `
    ///
    pub fn New2(typeVal: i32) QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new2(@intCast(typeVal));
    }

    /// New3 constructs a new QPropertyBindingError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QPropertyBindingError `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QPropertyBindingError {
        return qtc.QPropertyBindingError_new3(@ptrCast(other));
    }

    /// New4 constructs a new QPropertyBindingError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qproperty_enums.Type `
    ///
    /// ` description: []const u8 `
    ///
    pub fn New4(typeVal: i32, description: []const u8) QtC.QPropertyBindingError {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };

        return qtc.QPropertyBindingError_new4(@intCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingError `
    ///
    /// ` other: QtC.QPropertyBindingError `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPropertyBindingError_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingError `
    ///
    pub fn HasError(self: ?*anyopaque) bool {
        return qtc.QPropertyBindingError_HasError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingError `
    ///
    /// ## Returns:
    ///
    /// ` qproperty_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QPropertyBindingError_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPropertyBindingError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPropertyBindingError_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertybindingerror.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#dtor.QPropertyBindingError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPropertyBindingError `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyBindingError_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html)
pub const quntypedpropertybinding = struct {
    /// New constructs a new QUntypedPropertyBinding object.
    ///
    pub fn New() QtC.QUntypedPropertyBinding {
        return qtc.QUntypedPropertyBinding_new();
    }

    /// New2 constructs a new QUntypedPropertyBinding object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QUntypedPropertyBinding `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedPropertyBinding_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedPropertyBinding `
    ///
    /// ` other: QtC.QUntypedPropertyBinding `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyBinding_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedPropertyBinding `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QUntypedPropertyBinding_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedPropertyBinding `
    ///
    pub fn Error(self: ?*anyopaque) QtC.QPropertyBindingError {
        return qtc.QUntypedPropertyBinding_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#valueMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedPropertyBinding `
    ///
    pub fn ValueMetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QUntypedPropertyBinding_ValueMetaType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#dtor.QUntypedPropertyBinding)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QUntypedPropertyBinding `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedPropertyBinding_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html)
pub const qpropertyobserverbase = struct {
    /// New constructs a new QPropertyObserverBase object.
    ///
    pub fn New() QtC.QPropertyObserverBase {
        return qtc.QPropertyObserverBase_new();
    }

    /// New2 constructs a new QPropertyObserverBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QPropertyObserverBase `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QPropertyObserverBase {
        return qtc.QPropertyObserverBase_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html#dtor.QPropertyObserverBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPropertyObserverBase `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyObserverBase_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserver.html)
pub const qpropertyobserver = struct {
    /// New constructs a new QPropertyObserver object.
    ///
    pub fn New() QtC.QPropertyObserver {
        return qtc.QPropertyObserver_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserver.html#dtor.QPropertyObserver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPropertyObserver `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyObserver_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertynotifier.html)
pub const qpropertynotifier = struct {
    /// New constructs a new QPropertyNotifier object.
    ///
    pub fn New() QtC.QPropertyNotifier {
        return qtc.QPropertyNotifier_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertynotifier.html#dtor.QPropertyNotifier)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPropertyNotifier `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyNotifier_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html)
pub const quntypedbindable = struct {
    /// New constructs a new QUntypedBindable object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QUntypedBindable `
    ///
    pub fn New(other: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new(@ptrCast(other));
    }

    /// New2 constructs a new QUntypedBindable object and invalidates the source QUntypedBindable object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QUntypedBindable `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new2(@ptrCast(other));
    }

    /// New3 constructs a new QUntypedBindable object.
    ///
    pub fn New3() QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new3();
    }

    /// New4 constructs a new QUntypedBindable object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QUntypedBindable `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QUntypedBindable {
        return qtc.QUntypedBindable_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    /// ` other: QtC.QUntypedBindable `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedBindable_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    /// ` other: QtC.QUntypedBindable `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedBindable_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QUntypedBindable_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isBindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn IsBindable(self: ?*anyopaque) bool {
        return qtc.QUntypedBindable_IsBindable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QUntypedBindable_IsReadOnly(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn MakeBinding(self: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_MakeBinding(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#takeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn TakeBinding(self: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_TakeBinding(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#observe)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    /// ` observer: QtC.QPropertyObserver `
    ///
    pub fn Observe(self: ?*anyopaque, observer: ?*anyopaque) void {
        qtc.QUntypedBindable_Observe(@ptrCast(self), @ptrCast(observer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#binding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn Binding(self: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_Binding(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#setBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    /// ` binding: QtC.QUntypedPropertyBinding `
    ///
    pub fn SetBinding(self: ?*anyopaque, binding: ?*anyopaque) bool {
        return qtc.QUntypedBindable_SetBinding(@ptrCast(self), @ptrCast(binding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#hasBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn HasBinding(self: ?*anyopaque) bool {
        return qtc.QUntypedBindable_HasBinding(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn MetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QUntypedBindable_MetaType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    /// ` location: QtC.QPropertyBindingSourceLocation `
    ///
    pub fn MakeBinding1(self: ?*anyopaque, location: ?*anyopaque) QtC.QUntypedPropertyBinding {
        return qtc.QUntypedBindable_MakeBinding1(@ptrCast(self), @ptrCast(location));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#dtor.QUntypedBindable)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QUntypedBindable `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedBindable_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qproperty.html#public-types)
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
