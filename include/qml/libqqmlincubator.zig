const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QQmlError = @import("libqt6").QQmlError;
const QVariant = @import("libqt6").QVariant;
const qqmlincubator_enums = enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html)
pub const QQmlIncubator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlIncubator,

    pub const _is_QQmlIncubator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlIncubator object in C++ memory
    ///
    pub fn new() QQmlIncubator {
        return .{ .ptr = qtc.QQmlIncubator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlIncubator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qqmlincubator_enums.IncubationMode `
    ///
    pub fn new2(param1: i32) QQmlIncubator {
        return .{ .ptr = qtc.QQmlIncubator_new2(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    pub fn clear(self: QQmlIncubator) void {
        qtc.QQmlIncubator_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `forceCompletion` instead
    ///
    pub const ForceCompletion = forceCompletion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#forceCompletion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    pub fn forceCompletion(self: QQmlIncubator) void {
        qtc.QQmlIncubator_ForceCompletion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    pub fn isNull(self: QQmlIncubator) bool {
        return qtc.QQmlIncubator_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReady` instead
    ///
    pub const IsReady = isReady;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#isReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    pub fn isReady(self: QQmlIncubator) bool {
        return qtc.QQmlIncubator_IsReady(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isError` instead
    ///
    pub const IsError = isError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    pub fn isError(self: QQmlIncubator) bool {
        return qtc.QQmlIncubator_IsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLoading` instead
    ///
    pub const IsLoading = isLoading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#isLoading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    pub fn isLoading(self: QQmlIncubator) bool {
        return qtc.QQmlIncubator_IsLoading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errors` instead
    ///
    pub const Errors = errors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#errors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errors(self: QQmlIncubator, allocator: std.mem.Allocator) []QQmlError {
        const _arr: qtc.libqt_list = qtc.QQmlIncubator_Errors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QQmlError, _arr.len) catch @panic("QQmlIncubator.errors: Memory allocation failed");
        const _data_val: [*]QtC.QQmlError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `incubationMode` instead
    ///
    pub const IncubationMode = incubationMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#incubationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ## Returns:
    ///
    /// ` qqmlincubator_enums.IncubationMode `
    ///
    pub fn incubationMode(self: QQmlIncubator) i32 {
        return qtc.QQmlIncubator_IncubationMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ## Returns:
    ///
    /// ` qqmlincubator_enums.Status `
    ///
    pub fn status(self: QQmlIncubator) i32 {
        return qtc.QQmlIncubator_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    pub fn object(self: QQmlIncubator) QObject {
        return .{ .ptr = qtc.QQmlIncubator_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInitialProperties` instead
    ///
    pub const SetInitialProperties = setInitialProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#setInitialProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` initialProperties: ArrayMap_constu8_QVariant `
    ///
    pub fn setInitialProperties(self: QQmlIncubator, allocator: std.mem.Allocator, initialProperties: ArrayMap_constu8_QVariant) void {
        const initialProperties_count = initialProperties.count();
        const initialProperties_keys = allocator.alloc(qtc.libqt_string, initialProperties_count) catch @panic("QQmlIncubator.setInitialProperties: Memory allocation failed");
        defer allocator.free(initialProperties_keys);
        const initialProperties_values = allocator.alloc(QtC.QVariant, initialProperties_count) catch @panic("QQmlIncubator.setInitialProperties: Memory allocation failed");
        defer allocator.free(initialProperties_values);
        var initialProperties_i: usize = 0;
        var initialProperties_it = initialProperties.iterator();
        while (initialProperties_it.next()) |it_entry| : (initialProperties_i += 1) {
            const initialProperties_key = it_entry.key_ptr.*;
            initialProperties_keys[initialProperties_i] = qtc.libqt_string{
                .len = initialProperties_key.len,
                .data = initialProperties_key.ptr,
            };
            initialProperties_values[initialProperties_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const initialProperties_map = qtc.libqt_map{
            .len = initialProperties_count,
            .keys = @ptrCast(initialProperties_keys.ptr),
            .values = @ptrCast(initialProperties_values.ptr),
        };
        qtc.QQmlIncubator_SetInitialProperties(@ptrCast(self.ptr), initialProperties_map);
    }

    /// ### DEPRECATED: Use `statusChanged` instead
    ///
    pub const StatusChanged = statusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#statusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ` param1: qqmlincubator_enums.Status `
    ///
    pub fn statusChanged(self: QQmlIncubator, param1: i32) void {
        qtc.QQmlIncubator_StatusChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onStatusChanged` instead
    ///
    pub const OnStatusChanged = onStatusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#statusChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ` callback: *const fn (self: QQmlIncubator, param1: qqmlincubator_enums.Status) callconv(.c) void `
    ///
    pub fn onStatusChanged(self: QQmlIncubator, callback: *const fn (QQmlIncubator, i32) callconv(.c) void) void {
        qtc.QQmlIncubator_OnStatusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStatusChanged` instead
    ///
    pub const SuperStatusChanged = superStatusChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#statusChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ` param1: qqmlincubator_enums.Status `
    ///
    pub fn superStatusChanged(self: QQmlIncubator, param1: i32) void {
        qtc.QQmlIncubator_SuperStatusChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `setInitialState` instead
    ///
    pub const SetInitialState = setInitialState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#setInitialState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ` initialState: QObject `
    ///
    pub fn setInitialState(self: QQmlIncubator, initialState: anytype) void {
        comptime _ = @TypeOf(initialState)._is_QObject;
        qtc.QQmlIncubator_SetInitialState(@ptrCast(self.ptr), @ptrCast(initialState.ptr));
    }

    /// ### DEPRECATED: Use `onSetInitialState` instead
    ///
    pub const OnSetInitialState = onSetInitialState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#setInitialState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ` callback: *const fn (self: QQmlIncubator, initialState: QObject) callconv(.c) void `
    ///
    pub fn onSetInitialState(self: QQmlIncubator, callback: *const fn (QQmlIncubator, QObject) callconv(.c) void) void {
        qtc.QQmlIncubator_OnSetInitialState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetInitialState` instead
    ///
    pub const SuperSetInitialState = superSetInitialState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#setInitialState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubator `
    ///
    /// ` initialState: QObject `
    ///
    pub fn superSetInitialState(self: QQmlIncubator, initialState: anytype) void {
        comptime _ = @TypeOf(initialState)._is_QObject;
        qtc.QQmlIncubator_SuperSetInitialState(@ptrCast(self.ptr), @ptrCast(initialState.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#dtor.QQmlIncubator)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlIncubator `
    ///
    pub fn delete(self: QQmlIncubator) void {
        qtc.QQmlIncubator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html)
pub const QQmlIncubationController = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlIncubationController,

    pub const _is_QQmlIncubationController = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlIncubationController object in C++ memory
    ///
    pub fn new() QQmlIncubationController {
        return .{ .ptr = qtc.QQmlIncubationController_new() };
    }

    /// ### DEPRECATED: Use `engine` instead
    ///
    pub const Engine = engine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#engine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubationController `
    ///
    pub fn engine(self: QQmlIncubationController) QQmlEngine {
        return .{ .ptr = qtc.QQmlIncubationController_Engine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `incubatingObjectCount` instead
    ///
    pub const IncubatingObjectCount = incubatingObjectCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubatingObjectCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubationController `
    ///
    pub fn incubatingObjectCount(self: QQmlIncubationController) i32 {
        return qtc.QQmlIncubationController_IncubatingObjectCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `incubateFor` instead
    ///
    pub const IncubateFor = incubateFor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubateFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubationController `
    ///
    /// ` msecs: i32 `
    ///
    pub fn incubateFor(self: QQmlIncubationController, msecs: i32) void {
        qtc.QQmlIncubationController_IncubateFor(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `incubatingObjectCountChanged` instead
    ///
    pub const IncubatingObjectCountChanged = incubatingObjectCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubatingObjectCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubationController `
    ///
    /// ` param1: i32 `
    ///
    pub fn incubatingObjectCountChanged(self: QQmlIncubationController, param1: i32) void {
        qtc.QQmlIncubationController_IncubatingObjectCountChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onIncubatingObjectCountChanged` instead
    ///
    pub const OnIncubatingObjectCountChanged = onIncubatingObjectCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubatingObjectCountChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlIncubationController `
    ///
    /// ` callback: *const fn (self: QQmlIncubationController, param1: i32) callconv(.c) void `
    ///
    pub fn onIncubatingObjectCountChanged(self: QQmlIncubationController, callback: *const fn (QQmlIncubationController, i32) callconv(.c) void) void {
        qtc.QQmlIncubationController_OnIncubatingObjectCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIncubatingObjectCountChanged` instead
    ///
    pub const SuperIncubatingObjectCountChanged = superIncubatingObjectCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubatingObjectCountChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlIncubationController `
    ///
    /// ` param1: i32 `
    ///
    pub fn superIncubatingObjectCountChanged(self: QQmlIncubationController, param1: i32) void {
        qtc.QQmlIncubationController_SuperIncubatingObjectCountChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#dtor.QQmlIncubationController)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlIncubationController `
    ///
    pub fn delete(self: QQmlIncubationController) void {
        qtc.QQmlIncubationController_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#public-types)
pub const enums = struct {
    pub const IncubationMode = enum {
        pub const Asynchronous: i32 = 0;
        pub const AsynchronousIfNested: i32 = 1;
        pub const Synchronous: i32 = 2;
    };

    pub const Status = enum {
        pub const Null: i32 = 0;
        pub const Ready: i32 = 1;
        pub const Loading: i32 = 2;
        pub const Error: i32 = 3;
    };
};
