const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaType = @import("libqt6").QMetaType;
const qproperty_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html)
pub const QScopedPropertyUpdateGroup = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScopedPropertyUpdateGroup,

    pub const _is_QScopedPropertyUpdateGroup = {};

    /// New constructs a new QScopedPropertyUpdateGroup object.
    ///
    pub fn New() QScopedPropertyUpdateGroup {
        return .{ .ptr = qtc.QScopedPropertyUpdateGroup_new() };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html#dtor.QScopedPropertyUpdateGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QScopedPropertyUpdateGroup `
    ///
    pub fn Delete(self: QScopedPropertyUpdateGroup) void {
        qtc.QScopedPropertyUpdateGroup_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html)
pub const QPropertyBindingSourceLocation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPropertyBindingSourceLocation,

    pub const _is_QPropertyBindingSourceLocation = {};

    /// New constructs a new QPropertyBindingSourceLocation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPropertyBindingSourceLocation `
    ///
    pub fn New(other: anytype) QPropertyBindingSourceLocation {
        comptime _ = @TypeOf(other)._is_QPropertyBindingSourceLocation;
        return .{ .ptr = qtc.QPropertyBindingSourceLocation_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QPropertyBindingSourceLocation object and invalidates the source QPropertyBindingSourceLocation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPropertyBindingSourceLocation `
    ///
    pub fn New2(other: anytype) QPropertyBindingSourceLocation {
        comptime _ = @TypeOf(other)._is_QPropertyBindingSourceLocation;
        return .{ .ptr = qtc.QPropertyBindingSourceLocation_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QPropertyBindingSourceLocation object.
    ///
    pub fn New3() QPropertyBindingSourceLocation {
        return .{ .ptr = qtc.QPropertyBindingSourceLocation_new3() };
    }

    /// New4 constructs a new QPropertyBindingSourceLocation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPropertyBindingSourceLocation `
    ///
    pub fn New4(param1: anytype) QPropertyBindingSourceLocation {
        comptime _ = @TypeOf(param1)._is_QPropertyBindingSourceLocation;
        return .{ .ptr = qtc.QPropertyBindingSourceLocation_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` other: QPropertyBindingSourceLocation `
    ///
    pub fn CopyAssign(self: QPropertyBindingSourceLocation, other: QPropertyBindingSourceLocation) void {
        qtc.QPropertyBindingSourceLocation_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` other: QPropertyBindingSourceLocation `
    ///
    pub fn MoveAssign(self: QPropertyBindingSourceLocation, other: QPropertyBindingSourceLocation) void {
        qtc.QPropertyBindingSourceLocation_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#fileName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn FileName(self: QPropertyBindingSourceLocation) [:0]const u8 {
        const fileName_ret = qtc.QPropertyBindingSourceLocation_FileName(@ptrCast(self.ptr));
        return std.mem.span(fileName_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#fileName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` fileName: [:0]const u8 `
    ///
    pub fn SetFileName(self: QPropertyBindingSourceLocation, fileName: [:0]const u8) void {
        const fileName_Cstring = fileName.ptr;
        qtc.QPropertyBindingSourceLocation_SetFileName(@ptrCast(self.ptr), fileName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#functionName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn FunctionName(self: QPropertyBindingSourceLocation) [:0]const u8 {
        const functionName_ret = qtc.QPropertyBindingSourceLocation_FunctionName(@ptrCast(self.ptr));
        return std.mem.span(functionName_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#functionName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` functionName: [:0]const u8 `
    ///
    pub fn SetFunctionName(self: QPropertyBindingSourceLocation, functionName: [:0]const u8) void {
        const functionName_Cstring = functionName.ptr;
        qtc.QPropertyBindingSourceLocation_SetFunctionName(@ptrCast(self.ptr), functionName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn Line(self: QPropertyBindingSourceLocation) u32 {
        return qtc.QPropertyBindingSourceLocation_Line(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` line: u32 `
    ///
    pub fn SetLine(self: QPropertyBindingSourceLocation, line: u32) void {
        qtc.QPropertyBindingSourceLocation_SetLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#column-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn Column(self: QPropertyBindingSourceLocation) u32 {
        return qtc.QPropertyBindingSourceLocation_Column(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#column-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` column: u32 `
    ///
    pub fn SetColumn(self: QPropertyBindingSourceLocation, column: u32) void {
        qtc.QPropertyBindingSourceLocation_SetColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#dtor.QPropertyBindingSourceLocation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn Delete(self: QPropertyBindingSourceLocation) void {
        qtc.QPropertyBindingSourceLocation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html)
pub const QPropertyBindingError = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPropertyBindingError,

    pub const _is_QPropertyBindingError = {};

    /// New constructs a new QPropertyBindingError object.
    ///
    pub fn New() QPropertyBindingError {
        return .{ .ptr = qtc.QPropertyBindingError_new() };
    }

    /// New2 constructs a new QPropertyBindingError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qproperty_enums.Type `
    ///
    pub fn New2(typeVal: i32) QPropertyBindingError {
        return .{ .ptr = qtc.QPropertyBindingError_new2(@bitCast(typeVal)) };
    }

    /// New3 constructs a new QPropertyBindingError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPropertyBindingError `
    ///
    pub fn New3(other: anytype) QPropertyBindingError {
        comptime _ = @TypeOf(other)._is_QPropertyBindingError;
        return .{ .ptr = qtc.QPropertyBindingError_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QPropertyBindingError object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qproperty_enums.Type `
    ///
    /// ` description: []const u8 `
    ///
    pub fn New4(typeVal: i32, description: []const u8) QPropertyBindingError {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        return .{ .ptr = qtc.QPropertyBindingError_new4(@bitCast(typeVal), description_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingError `
    ///
    /// ` other: QPropertyBindingError `
    ///
    pub fn OperatorAssign(self: QPropertyBindingError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPropertyBindingError;
        qtc.QPropertyBindingError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingError `
    ///
    pub fn HasError(self: QPropertyBindingError) bool {
        return qtc.QPropertyBindingError_HasError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingError `
    ///
    /// ## Returns:
    ///
    /// ` qproperty_enums.Type `
    ///
    pub fn Type(self: QPropertyBindingError) i32 {
        return qtc.QPropertyBindingError_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QPropertyBindingError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPropertyBindingError_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertybindingerror.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#dtor.QPropertyBindingError)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyBindingError `
    ///
    pub fn Delete(self: QPropertyBindingError) void {
        qtc.QPropertyBindingError_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html)
pub const QUntypedPropertyBinding = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUntypedPropertyBinding,

    pub const _is_QUntypedPropertyBinding = {};

    /// New constructs a new QUntypedPropertyBinding object.
    ///
    pub fn New() QUntypedPropertyBinding {
        return .{ .ptr = qtc.QUntypedPropertyBinding_new() };
    }

    /// New2 constructs a new QUntypedPropertyBinding object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedPropertyBinding `
    ///
    pub fn New2(other: anytype) QUntypedPropertyBinding {
        comptime _ = @TypeOf(other)._is_QUntypedPropertyBinding;
        return .{ .ptr = qtc.QUntypedPropertyBinding_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    /// ` other: QUntypedPropertyBinding `
    ///
    pub fn OperatorAssign(self: QUntypedPropertyBinding, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QUntypedPropertyBinding;
        qtc.QUntypedPropertyBinding_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    pub fn IsNull(self: QUntypedPropertyBinding) bool {
        return qtc.QUntypedPropertyBinding_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    pub fn Error(self: QUntypedPropertyBinding) QPropertyBindingError {
        return .{ .ptr = qtc.QUntypedPropertyBinding_Error(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#valueMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    pub fn ValueMetaType(self: QUntypedPropertyBinding) QMetaType {
        return .{ .ptr = qtc.QUntypedPropertyBinding_ValueMetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#dtor.QUntypedPropertyBinding)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    pub fn Delete(self: QUntypedPropertyBinding) void {
        qtc.QUntypedPropertyBinding_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html)
pub const QPropertyObserverBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPropertyObserverBase,

    pub const _is_QPropertyObserverBase = {};

    /// New constructs a new QPropertyObserverBase object.
    ///
    pub fn New() QPropertyObserverBase {
        return .{ .ptr = qtc.QPropertyObserverBase_new() };
    }

    /// New2 constructs a new QPropertyObserverBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPropertyObserverBase `
    ///
    pub fn New2(param1: anytype) QPropertyObserverBase {
        comptime _ = @TypeOf(param1)._is_QPropertyObserverBase;
        return .{ .ptr = qtc.QPropertyObserverBase_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html#dtor.QPropertyObserverBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyObserverBase `
    ///
    pub fn Delete(self: QPropertyObserverBase) void {
        qtc.QPropertyObserverBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserver.html)
pub const QPropertyObserver = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPropertyObserver,

    pub const _is_QPropertyObserver = {};
    pub const _is_QPropertyObserverBase = {};

    /// New constructs a new QPropertyObserver object.
    ///
    pub fn New() QPropertyObserver {
        return .{ .ptr = qtc.QPropertyObserver_new() };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserver.html#dtor.QPropertyObserver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyObserver `
    ///
    pub fn Delete(self: QPropertyObserver) void {
        qtc.QPropertyObserver_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertynotifier.html)
pub const QPropertyNotifier = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertynotifier.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPropertyNotifier,

    pub const _is_QPropertyNotifier = {};
    pub const _is_QPropertyObserver = {};
    pub const _is_QPropertyObserverBase = {};

    /// New constructs a new QPropertyNotifier object.
    ///
    pub fn New() QPropertyNotifier {
        return .{ .ptr = qtc.QPropertyNotifier_new() };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertynotifier.html#dtor.QPropertyNotifier)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyNotifier `
    ///
    pub fn Delete(self: QPropertyNotifier) void {
        qtc.QPropertyNotifier_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html)
pub const QUntypedBindable = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUntypedBindable,

    pub const _is_QUntypedBindable = {};

    /// New constructs a new QUntypedBindable object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedBindable `
    ///
    pub fn New(other: anytype) QUntypedBindable {
        comptime _ = @TypeOf(other)._is_QUntypedBindable;
        return .{ .ptr = qtc.QUntypedBindable_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QUntypedBindable object and invalidates the source QUntypedBindable object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedBindable `
    ///
    pub fn New2(other: anytype) QUntypedBindable {
        comptime _ = @TypeOf(other)._is_QUntypedBindable;
        return .{ .ptr = qtc.QUntypedBindable_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QUntypedBindable object.
    ///
    pub fn New3() QUntypedBindable {
        return .{ .ptr = qtc.QUntypedBindable_new3() };
    }

    /// New4 constructs a new QUntypedBindable object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUntypedBindable `
    ///
    pub fn New4(param1: anytype) QUntypedBindable {
        comptime _ = @TypeOf(param1)._is_QUntypedBindable;
        return .{ .ptr = qtc.QUntypedBindable_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` other: QUntypedBindable `
    ///
    pub fn CopyAssign(self: QUntypedBindable, other: QUntypedBindable) void {
        qtc.QUntypedBindable_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` other: QUntypedBindable `
    ///
    pub fn MoveAssign(self: QUntypedBindable, other: QUntypedBindable) void {
        qtc.QUntypedBindable_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn IsValid(self: QUntypedBindable) bool {
        return qtc.QUntypedBindable_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isBindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn IsBindable(self: QUntypedBindable) bool {
        return qtc.QUntypedBindable_IsBindable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn IsReadOnly(self: QUntypedBindable) bool {
        return qtc.QUntypedBindable_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn MakeBinding(self: QUntypedBindable) QUntypedPropertyBinding {
        return .{ .ptr = qtc.QUntypedBindable_MakeBinding(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#takeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn TakeBinding(self: QUntypedBindable) QUntypedPropertyBinding {
        return .{ .ptr = qtc.QUntypedBindable_TakeBinding(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#observe)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` observer: QPropertyObserver `
    ///
    pub fn Observe(self: QUntypedBindable, observer: anytype) void {
        comptime _ = @TypeOf(observer)._is_QPropertyObserver;
        qtc.QUntypedBindable_Observe(@ptrCast(self.ptr), @ptrCast(observer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#binding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn Binding(self: QUntypedBindable) QUntypedPropertyBinding {
        return .{ .ptr = qtc.QUntypedBindable_Binding(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#setBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` binding: QUntypedPropertyBinding `
    ///
    pub fn SetBinding(self: QUntypedBindable, binding: anytype) bool {
        comptime _ = @TypeOf(binding)._is_QUntypedPropertyBinding;
        return qtc.QUntypedBindable_SetBinding(@ptrCast(self.ptr), @ptrCast(binding.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#hasBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn HasBinding(self: QUntypedBindable) bool {
        return qtc.QUntypedBindable_HasBinding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn MetaType(self: QUntypedBindable) QMetaType {
        return .{ .ptr = qtc.QUntypedBindable_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` location: QPropertyBindingSourceLocation `
    ///
    pub fn MakeBinding1(self: QUntypedBindable, location: anytype) QUntypedPropertyBinding {
        comptime _ = @TypeOf(location)._is_QPropertyBindingSourceLocation;
        return .{ .ptr = qtc.QUntypedBindable_MakeBinding1(@ptrCast(self.ptr), @ptrCast(location.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#dtor.QUntypedBindable)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn Delete(self: QUntypedBindable) void {
        qtc.QUntypedBindable_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qproperty.html#public-types)
pub const enums = struct {
    pub const Reason = enum(i32) {
        pub const InvalidInterface: i32 = 0;
        pub const NonBindableInterface: i32 = 1;
        pub const ReadOnlyInterface: i32 = 2;
    };

    pub const Type = enum(i32) {
        pub const NoError: i32 = 0;
        pub const BindingLoop: i32 = 1;
        pub const EvaluationError: i32 = 2;
        pub const UnknownError: i32 = 3;
    };

    pub const ObserverTag = enum(i32) {
        pub const ObserverNotifiesBinding: i32 = 0;
        pub const ObserverNotifiesChangeHandler: i32 = 1;
        pub const ObserverIsPlaceholder: i32 = 2;
    };
};
