const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QJSValue = @import("libqt6").QJSValue;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qjsengine_enums = enums;
const qjsvalue_enums = @import("libqjsvalue.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html)
pub const QJSEngine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSEngine,

    pub const _is_QJSEngine = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSEngine object in C++ memory
    ///
    pub fn new() QJSEngine {
        return .{ .ptr = qtc.QJSEngine_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJSEngine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QJSEngine {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QJSEngine_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn metaObject(self: QJSEngine) QMetaObject {
        return .{ .ptr = qtc.QJSEngine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QJSEngine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QJSEngine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn superMetaObject(self: QJSEngine) QMetaObject {
        return .{ .ptr = qtc.QJSEngine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QJSEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QJSEngine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine `
    ///
    /// ` callback: *const fn (self: QJSEngine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QJSEngine, callback: *const fn (QJSEngine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QJSEngine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QJSEngine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QJSEngine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QJSEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QJSEngine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine `
    ///
    /// ` callback: *const fn (self: QJSEngine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QJSEngine, callback: *const fn (QJSEngine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QJSEngine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QJSEngine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QJSEngine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QJSEngine_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSEngine.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `globalObject` instead
    ///
    pub const GlobalObject = globalObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#globalObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn globalObject(self: QJSEngine) QJSValue {
        return .{ .ptr = qtc.QJSEngine_GlobalObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `evaluate` instead
    ///
    pub const Evaluate = evaluate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` program: []const u8 `
    ///
    pub fn evaluate(self: QJSEngine, program: []const u8) QJSValue {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_Evaluate(@ptrCast(self.ptr), program_str) };
    }

    /// ### DEPRECATED: Use `importModule` instead
    ///
    pub const ImportModule = importModule;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#importModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn importModule(self: QJSEngine, fileName: []const u8) QJSValue {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_ImportModule(@ptrCast(self.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `registerModule` instead
    ///
    pub const RegisterModule = registerModule;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#registerModule)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` moduleName: []const u8 `
    ///
    /// ` value: QJSValue `
    ///
    pub fn registerModule(self: QJSEngine, moduleName: []const u8, value: anytype) bool {
        const moduleName_str = qtc.libqt_string{
            .len = moduleName.len,
            .data = moduleName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QJSValue;
        return qtc.QJSEngine_RegisterModule(@ptrCast(self.ptr), moduleName_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `newObject` instead
    ///
    pub const NewObject = newObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn newObject(self: QJSEngine) QJSValue {
        return .{ .ptr = qtc.QJSEngine_NewObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `newSymbol` instead
    ///
    pub const NewSymbol = newSymbol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newSymbol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn newSymbol(self: QJSEngine, name: []const u8) QJSValue {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_NewSymbol(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `newArray` instead
    ///
    pub const NewArray = newArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn newArray(self: QJSEngine) QJSValue {
        return .{ .ptr = qtc.QJSEngine_NewArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `newQObject` instead
    ///
    pub const NewQObject = newQObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` object: QObject `
    ///
    pub fn newQObject(self: QJSEngine, object: anytype) QJSValue {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.QJSEngine_NewQObject(@ptrCast(self.ptr), @ptrCast(object.ptr)) };
    }

    /// ### DEPRECATED: Use `newQMetaObject` instead
    ///
    pub const NewQMetaObject = newQMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _metaObject: QMetaObject `
    ///
    pub fn newQMetaObject(self: QJSEngine, _metaObject: anytype) QJSValue {
        comptime _ = @TypeOf(_metaObject)._is_QMetaObject;
        return .{ .ptr = qtc.QJSEngine_NewQMetaObject(@ptrCast(self.ptr), @ptrCast(_metaObject.ptr)) };
    }

    /// ### DEPRECATED: Use `newErrorObject` instead
    ///
    pub const NewErrorObject = newErrorObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` errorType: qjsvalue_enums.ErrorType `
    ///
    pub fn newErrorObject(self: QJSEngine, errorType: i32) QJSValue {
        return .{ .ptr = qtc.QJSEngine_NewErrorObject(@ptrCast(self.ptr), @bitCast(errorType)) };
    }

    /// ### DEPRECATED: Use `collectGarbage` instead
    ///
    pub const CollectGarbage = collectGarbage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#collectGarbage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn collectGarbage(self: QJSEngine) void {
        qtc.QJSEngine_CollectGarbage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectOwnership` instead
    ///
    pub const SetObjectOwnership = setObjectOwnership;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setObjectOwnership)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: qjsengine_enums.ObjectOwnership `
    ///
    pub fn setObjectOwnership(param1: anytype, param2: i32) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QJSEngine_SetObjectOwnership(@ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `objectOwnership` instead
    ///
    pub const ObjectOwnership = objectOwnership;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#objectOwnership)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    /// ## Returns:
    ///
    /// ` qjsengine_enums.ObjectOwnership `
    ///
    pub fn objectOwnership(param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QObject;
        return qtc.QJSEngine_ObjectOwnership(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `installExtensions` instead
    ///
    pub const InstallExtensions = installExtensions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` extensions: flag of qjsengine_enums.Extension `
    ///
    pub fn installExtensions(self: QJSEngine, extensions: i32) void {
        qtc.QJSEngine_InstallExtensions(@ptrCast(self.ptr), @bitCast(extensions));
    }

    /// ### DEPRECATED: Use `setInterrupted` instead
    ///
    pub const SetInterrupted = setInterrupted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setInterrupted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` interrupted: bool `
    ///
    pub fn setInterrupted(self: QJSEngine, interrupted: bool) void {
        qtc.QJSEngine_SetInterrupted(@ptrCast(self.ptr), interrupted);
    }

    /// ### DEPRECATED: Use `isInterrupted` instead
    ///
    pub const IsInterrupted = isInterrupted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#isInterrupted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn isInterrupted(self: QJSEngine) bool {
        return qtc.QJSEngine_IsInterrupted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `throwError` instead
    ///
    pub const ThrowError = throwError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` message: []const u8 `
    ///
    pub fn throwError(self: QJSEngine, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QJSEngine_ThrowError(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `throwError2` instead
    ///
    pub const ThrowError2 = throwError2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` errorType: qjsvalue_enums.ErrorType `
    ///
    pub fn throwError2(self: QJSEngine, errorType: i32) void {
        qtc.QJSEngine_ThrowError2(@ptrCast(self.ptr), @bitCast(errorType));
    }

    /// ### DEPRECATED: Use `throwError3` instead
    ///
    pub const ThrowError3 = throwError3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` errorVal: QJSValue `
    ///
    pub fn throwError3(self: QJSEngine, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QJSValue;
        qtc.QJSEngine_ThrowError3(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `hasError` instead
    ///
    pub const HasError = hasError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#hasError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn hasError(self: QJSEngine) bool {
        return qtc.QJSEngine_HasError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `catchError` instead
    ///
    pub const CatchError = catchError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#catchError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn catchError(self: QJSEngine) QJSValue {
        return .{ .ptr = qtc.QJSEngine_CatchError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uiLanguage` instead
    ///
    pub const UiLanguage = uiLanguage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uiLanguage(self: QJSEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJSEngine_UiLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSEngine.uiLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUiLanguage` instead
    ///
    pub const SetUiLanguage = setUiLanguage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setUiLanguage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` language: []const u8 `
    ///
    pub fn setUiLanguage(self: QJSEngine, language: []const u8) void {
        const language_str = qtc.libqt_string{
            .len = language.len,
            .data = language.ptr,
        };
        qtc.QJSEngine_SetUiLanguage(@ptrCast(self.ptr), language_str);
    }

    /// ### DEPRECATED: Use `uiLanguageChanged` instead
    ///
    pub const UiLanguageChanged = uiLanguageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn uiLanguageChanged(self: QJSEngine) void {
        qtc.QJSEngine_UiLanguageChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUiLanguageChanged` instead
    ///
    pub const OnUiLanguageChanged = onUiLanguageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine `
    ///
    /// ` callback: *const fn (self: QJSEngine) callconv(.c) void `
    ///
    pub fn onUiLanguageChanged(self: QJSEngine, callback: *const fn (QJSEngine) callconv(.c) void) void {
        qtc.QJSEngine_Connect_UiLanguageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QJSEngine_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSEngine.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QJSEngine_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSEngine.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `evaluate2` instead
    ///
    pub const Evaluate2 = evaluate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` program: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn evaluate2(self: QJSEngine, program: []const u8, fileName: []const u8) QJSValue {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_Evaluate2(@ptrCast(self.ptr), program_str, fileName_str) };
    }

    /// ### DEPRECATED: Use `evaluate3` instead
    ///
    pub const Evaluate3 = evaluate3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` program: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    pub fn evaluate3(self: QJSEngine, program: []const u8, fileName: []const u8, lineNumber: i32) QJSValue {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_Evaluate3(@ptrCast(self.ptr), program_str, fileName_str, @bitCast(lineNumber)) };
    }

    /// ### DEPRECATED: Use `evaluate4` instead
    ///
    pub const Evaluate4 = evaluate4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` lineNumber: i32 `
    ///
    /// ` exceptionStackTrace: []const []const u8 `
    ///
    pub fn evaluate4(self: QJSEngine, allocator: std.mem.Allocator, program: []const u8, fileName: []const u8, lineNumber: i32, exceptionStackTrace: []const []const u8) QJSValue {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const exceptionStackTrace_arr = allocator.alloc(qtc.libqt_string, exceptionStackTrace.len) catch @panic("QJSEngine.evaluate4: Memory allocation failed");
        defer allocator.free(exceptionStackTrace_arr);
        for (exceptionStackTrace, 0..exceptionStackTrace.len) |str_item, i|
            exceptionStackTrace_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const exceptionStackTrace_list = qtc.libqt_list{
            .len = exceptionStackTrace.len,
            .data = exceptionStackTrace_arr.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_Evaluate4(@ptrCast(self.ptr), program_str, fileName_str, @bitCast(lineNumber), exceptionStackTrace_list) };
    }

    /// ### DEPRECATED: Use `newArray1` instead
    ///
    pub const NewArray1 = newArray1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` length: u32 `
    ///
    pub fn newArray1(self: QJSEngine, length: u32) QJSValue {
        return .{ .ptr = qtc.QJSEngine_NewArray1(@ptrCast(self.ptr), @bitCast(length)) };
    }

    /// ### DEPRECATED: Use `newErrorObject2` instead
    ///
    pub const NewErrorObject2 = newErrorObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` errorType: qjsvalue_enums.ErrorType `
    ///
    /// ` message: []const u8 `
    ///
    pub fn newErrorObject2(self: QJSEngine, errorType: i32, message: []const u8) QJSValue {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.QJSEngine_NewErrorObject2(@ptrCast(self.ptr), @bitCast(errorType), message_str) };
    }

    /// ### DEPRECATED: Use `installExtensions2` instead
    ///
    pub const InstallExtensions2 = installExtensions2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` extensions: flag of qjsengine_enums.Extension `
    ///
    /// ` object: QJSValue `
    ///
    pub fn installExtensions2(self: QJSEngine, extensions: i32, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QJSValue;
        qtc.QJSEngine_InstallExtensions2(@ptrCast(self.ptr), @bitCast(extensions), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `throwError22` instead
    ///
    pub const ThrowError22 = throwError22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` errorType: qjsvalue_enums.ErrorType `
    ///
    /// ` message: []const u8 `
    ///
    pub fn throwError22(self: QJSEngine, errorType: i32, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QJSEngine_ThrowError22(@ptrCast(self.ptr), @bitCast(errorType), message_str);
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QJSEngine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSEngine.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QJSEngine, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn isWidgetType(self: QJSEngine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn isWindowType(self: QJSEngine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn isQuickItemType(self: QJSEngine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn signalsBlocked(self: QJSEngine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QJSEngine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn thread(self: QJSEngine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QJSEngine, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QJSEngine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QJSEngine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QJSEngine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QJSEngine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QJSEngine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QJSEngine.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QJSEngine, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QJSEngine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QJSEngine, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QJSEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn disconnect3(self: QJSEngine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QJSEngine, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn dumpObjectTree(self: QJSEngine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn dumpObjectInfo(self: QJSEngine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QJSEngine, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QJSEngine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QJSEngine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QJSEngine.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QJSEngine.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn bindingStorage(self: QJSEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn bindingStorage2(self: QJSEngine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn destroyed(self: QJSEngine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine `
    ///
    /// ` callback: *const fn (self: QJSEngine) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QJSEngine, callback: *const fn (QJSEngine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn parent(self: QJSEngine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QJSEngine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn deleteLater(self: QJSEngine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QJSEngine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QJSEngine, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QJSEngine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QJSEngine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QJSEngine, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QJSEngine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QJSEngine, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QJSEngine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine `
    ///
    /// ` callback: *const fn (self: QJSEngine, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QJSEngine, callback: *const fn (QJSEngine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QJSEngine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QJSEngine_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QJSEngine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QJSEngine_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QJSEngine, callback: *const fn (QJSEngine, QEvent) callconv(.c) bool) void {
        qtc.QJSEngine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QJSEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QJSEngine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QJSEngine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QJSEngine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QJSEngine, callback: *const fn (QJSEngine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QJSEngine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QJSEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QJSEngine_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QJSEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QJSEngine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QJSEngine, callback: *const fn (QJSEngine, QTimerEvent) callconv(.c) void) void {
        qtc.QJSEngine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QJSEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QJSEngine_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QJSEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QJSEngine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QJSEngine, callback: *const fn (QJSEngine, QChildEvent) callconv(.c) void) void {
        qtc.QJSEngine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QJSEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QJSEngine_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QJSEngine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QJSEngine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QJSEngine, callback: *const fn (QJSEngine, QEvent) callconv(.c) void) void {
        qtc.QJSEngine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QJSEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QJSEngine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QJSEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QJSEngine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QJSEngine, callback: *const fn (QJSEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QJSEngine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QJSEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QJSEngine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QJSEngine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QJSEngine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QJSEngine, callback: *const fn (QJSEngine, QMetaMethod) callconv(.c) void) void {
        qtc.QJSEngine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn sender(self: QJSEngine) QObject {
        return .{ .ptr = qtc.QJSEngine_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn superSender(self: QJSEngine) QObject {
        return .{ .ptr = qtc.QJSEngine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QJSEngine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QJSEngine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn senderSignalIndex(self: QJSEngine) i32 {
        return qtc.QJSEngine_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    pub fn superSenderSignalIndex(self: QJSEngine) i32 {
        return qtc.QJSEngine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QJSEngine, callback: *const fn () callconv(.c) i32) void {
        qtc.QJSEngine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QJSEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QJSEngine_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QJSEngine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QJSEngine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QJSEngine, callback: *const fn (QJSEngine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QJSEngine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QJSEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QJSEngine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSEngine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QJSEngine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QJSEngine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine`
    ///
    /// ` callback: *const fn (self: QJSEngine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QJSEngine, callback: *const fn (QJSEngine, QMetaMethod) callconv(.c) bool) void {
        qtc.QJSEngine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSEngine `
    ///
    /// ` callback: *const fn (self: QJSEngine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QJSEngine, callback: *const fn (QJSEngine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#dtor.QJSEngine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSEngine `
    ///
    pub fn delete(self: QJSEngine) void {
        qtc.QJSEngine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine-h.html)
pub const qjsengine_h = extern struct {
    /// ### DEPRECATED: Use `qjsEngine` instead
    ///
    pub const QjsEngine = qjsEngine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine-h.html#qjsEngine)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QObject `
    ///
    pub fn qjsEngine(param1: anytype) QJSEngine {
        comptime _ = @TypeOf(param1)._is_QObject;
        return .{ .ptr = qtc.qjsengine_h_QjsEngine(@ptrCast(param1.ptr)) };
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#public-types)
pub const enums = struct {
    pub const ObjectOwnership = enum {
        pub const CppOwnership: i32 = 0;
        pub const JavaScriptOwnership: i32 = 1;
    };

    pub const Extension = enum {
        pub const TranslationExtension: i32 = 1;
        pub const ConsoleExtension: i32 = 2;
        pub const GarbageCollectionExtension: i32 = 4;
        pub const AllExtensions: i32 = -1;
    };
};
