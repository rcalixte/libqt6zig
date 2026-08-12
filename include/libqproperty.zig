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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QScopedPropertyUpdateGroup object in C++ memory
    ///
    pub fn new() QScopedPropertyUpdateGroup {
        return .{ .ptr = qtc.QScopedPropertyUpdateGroup_new() };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscopedpropertyupdategroup.html#dtor.QScopedPropertyUpdateGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QScopedPropertyUpdateGroup `
    ///
    pub fn delete(self: QScopedPropertyUpdateGroup) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPropertyBindingSourceLocation object in C++ memory
    ///
    pub fn new() QPropertyBindingSourceLocation {
        return .{ .ptr = qtc.QPropertyBindingSourceLocation_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPropertyBindingSourceLocation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPropertyBindingSourceLocation `
    ///
    pub fn new2(other: anytype) QPropertyBindingSourceLocation {
        comptime _ = @TypeOf(other)._is_QPropertyBindingSourceLocation;
        return .{ .ptr = qtc.QPropertyBindingSourceLocation_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPropertyBindingSourceLocation object and invalidate the source QPropertyBindingSourceLocation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPropertyBindingSourceLocation `
    ///
    pub fn new3(other: anytype) QPropertyBindingSourceLocation {
        comptime _ = @TypeOf(other)._is_QPropertyBindingSourceLocation;
        return .{ .ptr = qtc.QPropertyBindingSourceLocation_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPropertyBindingSourceLocation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPropertyBindingSourceLocation `
    ///
    pub fn new4(param1: anytype) QPropertyBindingSourceLocation {
        comptime _ = @TypeOf(param1)._is_QPropertyBindingSourceLocation;
        return .{ .ptr = qtc.QPropertyBindingSourceLocation_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` other: QPropertyBindingSourceLocation `
    ///
    pub fn copyAssign(self: QPropertyBindingSourceLocation, other: QPropertyBindingSourceLocation) void {
        qtc.QPropertyBindingSourceLocation_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` other: QPropertyBindingSourceLocation `
    ///
    pub fn moveAssign(self: QPropertyBindingSourceLocation, other: QPropertyBindingSourceLocation) void {
        qtc.QPropertyBindingSourceLocation_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#fileName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn fileName(self: QPropertyBindingSourceLocation) [:0]const u8 {
        const fileName_ret = qtc.QPropertyBindingSourceLocation_FileName(@ptrCast(self.ptr));
        return std.mem.span(fileName_ret);
    }

    /// ### DEPRECATED: Use `setFileName` instead
    ///
    pub const SetFileName = setFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#fileName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` _fileName: [:0]const u8 `
    ///
    pub fn setFileName(self: QPropertyBindingSourceLocation, _fileName: [:0]const u8) void {
        const fileName_Cstring = _fileName.ptr;
        qtc.QPropertyBindingSourceLocation_SetFileName(@ptrCast(self.ptr), fileName_Cstring);
    }

    /// ### DEPRECATED: Use `functionName` instead
    ///
    pub const FunctionName = functionName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#functionName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn functionName(self: QPropertyBindingSourceLocation) [:0]const u8 {
        const functionName_ret = qtc.QPropertyBindingSourceLocation_FunctionName(@ptrCast(self.ptr));
        return std.mem.span(functionName_ret);
    }

    /// ### DEPRECATED: Use `setFunctionName` instead
    ///
    pub const SetFunctionName = setFunctionName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#functionName-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` _functionName: [:0]const u8 `
    ///
    pub fn setFunctionName(self: QPropertyBindingSourceLocation, _functionName: [:0]const u8) void {
        const functionName_Cstring = _functionName.ptr;
        qtc.QPropertyBindingSourceLocation_SetFunctionName(@ptrCast(self.ptr), functionName_Cstring);
    }

    /// ### DEPRECATED: Use `line` instead
    ///
    pub const Line = line;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn line(self: QPropertyBindingSourceLocation) u32 {
        return qtc.QPropertyBindingSourceLocation_Line(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` _line: u32 `
    ///
    pub fn setLine(self: QPropertyBindingSourceLocation, _line: u32) void {
        qtc.QPropertyBindingSourceLocation_SetLine(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#column-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn column(self: QPropertyBindingSourceLocation) u32 {
        return qtc.QPropertyBindingSourceLocation_Column(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColumn` instead
    ///
    pub const SetColumn = setColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#column-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    /// ` _column: u32 `
    ///
    pub fn setColumn(self: QPropertyBindingSourceLocation, _column: u32) void {
        qtc.QPropertyBindingSourceLocation_SetColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingsourcelocation.html#dtor.QPropertyBindingSourceLocation)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyBindingSourceLocation `
    ///
    pub fn delete(self: QPropertyBindingSourceLocation) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPropertyBindingError object in C++ memory
    ///
    pub fn new() QPropertyBindingError {
        return .{ .ptr = qtc.QPropertyBindingError_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPropertyBindingError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qproperty_enums.Type `
    ///
    pub fn new2(typeVal: i32) QPropertyBindingError {
        return .{ .ptr = qtc.QPropertyBindingError_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPropertyBindingError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QPropertyBindingError `
    ///
    pub fn new3(other: anytype) QPropertyBindingError {
        comptime _ = @TypeOf(other)._is_QPropertyBindingError;
        return .{ .ptr = qtc.QPropertyBindingError_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPropertyBindingError object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qproperty_enums.Type `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn new4(typeVal: i32, _description: []const u8) QPropertyBindingError {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        return .{ .ptr = qtc.QPropertyBindingError_new4(@bitCast(typeVal), description_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingError `
    ///
    /// ` other: QPropertyBindingError `
    ///
    pub fn operatorAssign(self: QPropertyBindingError, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QPropertyBindingError;
        qtc.QPropertyBindingError_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingError `
    ///
    pub fn hasError(self: QPropertyBindingError) bool {
        return qtc.QPropertyBindingError_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QPropertyBindingError) i32 {
        return qtc.QPropertyBindingError_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyBindingError `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QPropertyBindingError, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPropertyBindingError_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPropertyBindingError.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertybindingerror.html#dtor.QPropertyBindingError)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyBindingError `
    ///
    pub fn delete(self: QPropertyBindingError) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUntypedPropertyBinding object in C++ memory
    ///
    pub fn new() QUntypedPropertyBinding {
        return .{ .ptr = qtc.QUntypedPropertyBinding_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUntypedPropertyBinding object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedPropertyBinding `
    ///
    pub fn new2(other: anytype) QUntypedPropertyBinding {
        comptime _ = @TypeOf(other)._is_QUntypedPropertyBinding;
        return .{ .ptr = qtc.QUntypedPropertyBinding_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    /// ` other: QUntypedPropertyBinding `
    ///
    pub fn operatorAssign(self: QUntypedPropertyBinding, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QUntypedPropertyBinding;
        qtc.QUntypedPropertyBinding_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    pub fn isNull(self: QUntypedPropertyBinding) bool {
        return qtc.QUntypedPropertyBinding_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    pub fn error0(self: QUntypedPropertyBinding) QPropertyBindingError {
        return .{ .ptr = qtc.QUntypedPropertyBinding_Error(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `valueMetaType` instead
    ///
    pub const ValueMetaType = valueMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#valueMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    pub fn valueMetaType(self: QUntypedPropertyBinding) QMetaType {
        return .{ .ptr = qtc.QUntypedPropertyBinding_ValueMetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertybinding.html#dtor.QUntypedPropertyBinding)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUntypedPropertyBinding `
    ///
    pub fn delete(self: QUntypedPropertyBinding) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPropertyObserverBase object in C++ memory
    ///
    pub fn new() QPropertyObserverBase {
        return .{ .ptr = qtc.QPropertyObserverBase_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPropertyObserverBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QPropertyObserverBase `
    ///
    pub fn new2(param1: anytype) QPropertyObserverBase {
        comptime _ = @TypeOf(param1)._is_QPropertyObserverBase;
        return .{ .ptr = qtc.QPropertyObserverBase_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserverbase.html#dtor.QPropertyObserverBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyObserverBase `
    ///
    pub fn delete(self: QPropertyObserverBase) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPropertyObserver object in C++ memory
    ///
    pub fn new() QPropertyObserver {
        return .{ .ptr = qtc.QPropertyObserver_new() };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyobserver.html#dtor.QPropertyObserver)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyObserver `
    ///
    pub fn delete(self: QPropertyObserver) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPropertyNotifier object in C++ memory
    ///
    pub fn new() QPropertyNotifier {
        return .{ .ptr = qtc.QPropertyNotifier_new() };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertynotifier.html#dtor.QPropertyNotifier)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyNotifier `
    ///
    pub fn delete(self: QPropertyNotifier) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUntypedBindable object in C++ memory
    ///
    pub fn new() QUntypedBindable {
        return .{ .ptr = qtc.QUntypedBindable_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUntypedBindable object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedBindable `
    ///
    pub fn new2(other: anytype) QUntypedBindable {
        comptime _ = @TypeOf(other)._is_QUntypedBindable;
        return .{ .ptr = qtc.QUntypedBindable_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QUntypedBindable object and invalidate the source QUntypedBindable object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUntypedBindable `
    ///
    pub fn new3(other: anytype) QUntypedBindable {
        comptime _ = @TypeOf(other)._is_QUntypedBindable;
        return .{ .ptr = qtc.QUntypedBindable_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QUntypedBindable object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUntypedBindable `
    ///
    pub fn new4(param1: anytype) QUntypedBindable {
        comptime _ = @TypeOf(param1)._is_QUntypedBindable;
        return .{ .ptr = qtc.QUntypedBindable_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` other: QUntypedBindable `
    ///
    pub fn copyAssign(self: QUntypedBindable, other: QUntypedBindable) void {
        qtc.QUntypedBindable_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` other: QUntypedBindable `
    ///
    pub fn moveAssign(self: QUntypedBindable, other: QUntypedBindable) void {
        qtc.QUntypedBindable_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn isValid(self: QUntypedBindable) bool {
        return qtc.QUntypedBindable_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBindable` instead
    ///
    pub const IsBindable = isBindable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isBindable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn isBindable(self: QUntypedBindable) bool {
        return qtc.QUntypedBindable_IsBindable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn isReadOnly(self: QUntypedBindable) bool {
        return qtc.QUntypedBindable_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `makeBinding` instead
    ///
    pub const MakeBinding = makeBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn makeBinding(self: QUntypedBindable) QUntypedPropertyBinding {
        return .{ .ptr = qtc.QUntypedBindable_MakeBinding(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `takeBinding` instead
    ///
    pub const TakeBinding = takeBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#takeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn takeBinding(self: QUntypedBindable) QUntypedPropertyBinding {
        return .{ .ptr = qtc.QUntypedBindable_TakeBinding(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `observe` instead
    ///
    pub const Observe = observe;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#observe)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` observer: QPropertyObserver `
    ///
    pub fn observe(self: QUntypedBindable, observer: anytype) void {
        comptime _ = @TypeOf(observer)._is_QPropertyObserver;
        qtc.QUntypedBindable_Observe(@ptrCast(self.ptr), @ptrCast(observer.ptr));
    }

    /// ### DEPRECATED: Use `binding` instead
    ///
    pub const Binding = binding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#binding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn binding(self: QUntypedBindable) QUntypedPropertyBinding {
        return .{ .ptr = qtc.QUntypedBindable_Binding(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBinding` instead
    ///
    pub const SetBinding = setBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#setBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` _binding: QUntypedPropertyBinding `
    ///
    pub fn setBinding(self: QUntypedBindable, _binding: anytype) bool {
        comptime _ = @TypeOf(_binding)._is_QUntypedPropertyBinding;
        return qtc.QUntypedBindable_SetBinding(@ptrCast(self.ptr), @ptrCast(_binding.ptr));
    }

    /// ### DEPRECATED: Use `hasBinding` instead
    ///
    pub const HasBinding = hasBinding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#hasBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn hasBinding(self: QUntypedBindable) bool {
        return qtc.QUntypedBindable_HasBinding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metaType` instead
    ///
    pub const MetaType = metaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn metaType(self: QUntypedBindable) QMetaType {
        return .{ .ptr = qtc.QUntypedBindable_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `makeBinding1` instead
    ///
    pub const MakeBinding1 = makeBinding1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#makeBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUntypedBindable `
    ///
    /// ` location: QPropertyBindingSourceLocation `
    ///
    pub fn makeBinding1(self: QUntypedBindable, location: anytype) QUntypedPropertyBinding {
        comptime _ = @TypeOf(location)._is_QPropertyBindingSourceLocation;
        return .{ .ptr = qtc.QUntypedBindable_MakeBinding1(@ptrCast(self.ptr), @ptrCast(location.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quntypedbindable.html#dtor.QUntypedBindable)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUntypedBindable `
    ///
    pub fn delete(self: QUntypedBindable) void {
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
