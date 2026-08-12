const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QNativeIpcKey = @import("libqt6").QNativeIpcKey;
const qsystemsemaphore_enums = enums;
const qtipccommon_enums = @import("libqtipccommon.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)
pub const QSystemSemaphore = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSystemSemaphore,

    pub const _is_QSystemSemaphore = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSystemSemaphore object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: QNativeIpcKey `
    ///
    pub fn new(_key: anytype) QSystemSemaphore {
        comptime _ = @TypeOf(_key)._is_QNativeIpcKey;
        return .{ .ptr = qtc.QSystemSemaphore_new(@ptrCast(_key.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSystemSemaphore object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: []const u8 `
    ///
    pub fn new2(_key: []const u8) QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_new2(key_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSystemSemaphore object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn new3(_key: anytype, initialValue: i32) QSystemSemaphore {
        comptime _ = @TypeOf(_key)._is_QNativeIpcKey;
        return .{ .ptr = qtc.QSystemSemaphore_new3(@ptrCast(_key.ptr), @bitCast(initialValue)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSystemSemaphore object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` param3: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn new4(_key: anytype, initialValue: i32, param3: i32) QSystemSemaphore {
        comptime _ = @TypeOf(_key)._is_QNativeIpcKey;
        return .{ .ptr = qtc.QSystemSemaphore_new4(@ptrCast(_key.ptr), @bitCast(initialValue), @bitCast(param3)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSystemSemaphore object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn new5(_key: []const u8, initialValue: i32) QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_new5(key_str, @bitCast(initialValue)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSystemSemaphore object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn new6(_key: []const u8, initialValue: i32, mode: i32) QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_new6(key_str, @bitCast(initialValue), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSystemSemaphore.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNativeKey` instead
    ///
    pub const SetNativeKey = setNativeKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: QNativeIpcKey `
    ///
    pub fn setNativeKey(self: QSystemSemaphore, _key: anytype) void {
        comptime _ = @TypeOf(_key)._is_QNativeIpcKey;
        qtc.QSystemSemaphore_SetNativeKey(@ptrCast(self.ptr), @ptrCast(_key.ptr));
    }

    /// ### DEPRECATED: Use `setNativeKey2` instead
    ///
    pub const SetNativeKey2 = setNativeKey2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn setNativeKey2(self: QSystemSemaphore, _key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey2(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `nativeIpcKey` instead
    ///
    pub const NativeIpcKey = nativeIpcKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#nativeIpcKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    pub fn nativeIpcKey(self: QSystemSemaphore) QNativeIpcKey {
        return .{ .ptr = qtc.QSystemSemaphore_NativeIpcKey(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setKey` instead
    ///
    pub const SetKey = setKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: []const u8 `
    ///
    pub fn setKey(self: QSystemSemaphore, _key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.QSystemSemaphore_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: QSystemSemaphore, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSystemSemaphore_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSystemSemaphore.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `acquire` instead
    ///
    pub const Acquire = acquire;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    pub fn acquire(self: QSystemSemaphore) bool {
        return qtc.QSystemSemaphore_Acquire(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    pub fn release(self: QSystemSemaphore) bool {
        return qtc.QSystemSemaphore_Release(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ## Returns:
    ///
    /// ` qsystemsemaphore_enums.SystemSemaphoreError `
    ///
    pub fn error0(self: QSystemSemaphore) i32 {
        return qtc.QSystemSemaphore_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QSystemSemaphore, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSystemSemaphore_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSystemSemaphore.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isKeyTypeSupported` instead
    ///
    pub const IsKeyTypeSupported = isKeyTypeSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#isKeyTypeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn isKeyTypeSupported(typeVal: u16) bool {
        return qtc.QSystemSemaphore_IsKeyTypeSupported(@bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `platformSafeKey` instead
    ///
    pub const PlatformSafeKey = platformSafeKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: []const u8 `
    ///
    pub fn platformSafeKey(_key: []const u8) QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_PlatformSafeKey(key_str) };
    }

    /// ### DEPRECATED: Use `legacyNativeKey` instead
    ///
    pub const LegacyNativeKey = legacyNativeKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: []const u8 `
    ///
    pub fn legacyNativeKey(_key: []const u8) QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_LegacyNativeKey(key_str) };
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSystemSemaphore.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSystemSemaphore.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNativeKey22` instead
    ///
    pub const SetNativeKey22 = setNativeKey22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn setNativeKey22(self: QSystemSemaphore, _key: anytype, initialValue: i32) void {
        comptime _ = @TypeOf(_key)._is_QNativeIpcKey;
        qtc.QSystemSemaphore_SetNativeKey22(@ptrCast(self.ptr), @ptrCast(_key.ptr), @bitCast(initialValue));
    }

    /// ### DEPRECATED: Use `setNativeKey3` instead
    ///
    pub const SetNativeKey3 = setNativeKey3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` param3: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn setNativeKey3(self: QSystemSemaphore, _key: anytype, initialValue: i32, param3: i32) void {
        comptime _ = @TypeOf(_key)._is_QNativeIpcKey;
        qtc.QSystemSemaphore_SetNativeKey3(@ptrCast(self.ptr), @ptrCast(_key.ptr), @bitCast(initialValue), @bitCast(param3));
    }

    /// ### DEPRECATED: Use `setNativeKey23` instead
    ///
    pub const SetNativeKey23 = setNativeKey23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn setNativeKey23(self: QSystemSemaphore, _key: []const u8, initialValue: i32) void {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey23(@ptrCast(self.ptr), key_str, @bitCast(initialValue));
    }

    /// ### DEPRECATED: Use `setNativeKey32` instead
    ///
    pub const SetNativeKey32 = setNativeKey32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn setNativeKey32(self: QSystemSemaphore, _key: []const u8, initialValue: i32, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey32(@ptrCast(self.ptr), key_str, @bitCast(initialValue), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setNativeKey4` instead
    ///
    pub const SetNativeKey4 = setNativeKey4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn setNativeKey4(self: QSystemSemaphore, _key: []const u8, initialValue: i32, mode: i32, typeVal: u16) void {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey4(@ptrCast(self.ptr), key_str, @bitCast(initialValue), @bitCast(mode), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setKey2` instead
    ///
    pub const SetKey2 = setKey2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn setKey2(self: QSystemSemaphore, _key: []const u8, initialValue: i32) void {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.QSystemSemaphore_SetKey2(@ptrCast(self.ptr), key_str, @bitCast(initialValue));
    }

    /// ### DEPRECATED: Use `setKey3` instead
    ///
    pub const SetKey3 = setKey3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn setKey3(self: QSystemSemaphore, _key: []const u8, initialValue: i32, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        qtc.QSystemSemaphore_SetKey3(@ptrCast(self.ptr), key_str, @bitCast(initialValue), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `release1` instead
    ///
    pub const Release1 = release1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn release1(self: QSystemSemaphore, n: i32) bool {
        return qtc.QSystemSemaphore_Release1(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### DEPRECATED: Use `platformSafeKey2` instead
    ///
    pub const PlatformSafeKey2 = platformSafeKey2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: []const u8 `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn platformSafeKey2(_key: []const u8, typeVal: u16) QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_PlatformSafeKey2(key_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `legacyNativeKey2` instead
    ///
    pub const LegacyNativeKey2 = legacyNativeKey2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` _key: []const u8 `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn legacyNativeKey2(_key: []const u8, typeVal: u16) QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_LegacyNativeKey2(key_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#dtor.QSystemSemaphore)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSystemSemaphore `
    ///
    pub fn delete(self: QSystemSemaphore) void {
        qtc.QSystemSemaphore_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#public-types)
pub const enums = struct {
    pub const AccessMode = enum(i32) {
        pub const Open: i32 = 0;
        pub const Create: i32 = 1;
    };

    pub const SystemSemaphoreError = enum(i32) {
        pub const NoError: i32 = 0;
        pub const PermissionDenied: i32 = 1;
        pub const KeyError: i32 = 2;
        pub const AlreadyExists: i32 = 3;
        pub const NotFound: i32 = 4;
        pub const OutOfResources: i32 = 5;
        pub const UnknownError: i32 = 6;
    };
};
