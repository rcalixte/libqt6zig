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

    /// New constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QNativeIpcKey `
    ///
    pub fn New(key: anytype) QSystemSemaphore {
        comptime _ = @TypeOf(key)._is_QNativeIpcKey;
        return .{ .ptr = qtc.QSystemSemaphore_new(@ptrCast(key.ptr)) };
    }

    /// New2 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn New2(key: []const u8) QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_new2(key_str) };
    }

    /// New3 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn New3(key: anytype, initialValue: i32) QSystemSemaphore {
        comptime _ = @TypeOf(key)._is_QNativeIpcKey;
        return .{ .ptr = qtc.QSystemSemaphore_new3(@ptrCast(key.ptr), @bitCast(initialValue)) };
    }

    /// New4 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` param3: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn New4(key: anytype, initialValue: i32, param3: i32) QSystemSemaphore {
        comptime _ = @TypeOf(key)._is_QNativeIpcKey;
        return .{ .ptr = qtc.QSystemSemaphore_new4(@ptrCast(key.ptr), @bitCast(initialValue), @bitCast(param3)) };
    }

    /// New5 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn New5(key: []const u8, initialValue: i32) QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_new5(key_str, @bitCast(initialValue)) };
    }

    /// New6 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn New6(key: []const u8, initialValue: i32, mode: i32) QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_new6(key_str, @bitCast(initialValue), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: QNativeIpcKey `
    ///
    pub fn SetNativeKey(self: QSystemSemaphore, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QNativeIpcKey;
        qtc.QSystemSemaphore_SetNativeKey(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetNativeKey2(self: QSystemSemaphore, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey2(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#nativeIpcKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    pub fn NativeIpcKey(self: QSystemSemaphore) QNativeIpcKey {
        return .{ .ptr = qtc.QSystemSemaphore_NativeIpcKey(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetKey(self: QSystemSemaphore, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QSystemSemaphore, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSystemSemaphore_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    pub fn Acquire(self: QSystemSemaphore) bool {
        return qtc.QSystemSemaphore_Acquire(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    pub fn Release(self: QSystemSemaphore) bool {
        return qtc.QSystemSemaphore_Release(@ptrCast(self.ptr));
    }

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
    pub fn Error(self: QSystemSemaphore) i32 {
        return qtc.QSystemSemaphore_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QSystemSemaphore, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSystemSemaphore_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#isKeyTypeSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn IsKeyTypeSupported(typeVal: u16) bool {
        return qtc.QSystemSemaphore_IsKeyTypeSupported(@bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn PlatformSafeKey(key: []const u8) QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_PlatformSafeKey(key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn LegacyNativeKey(key: []const u8) QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_LegacyNativeKey(key_str) };
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn SetNativeKey22(self: QSystemSemaphore, key: anytype, initialValue: i32) void {
        comptime _ = @TypeOf(key)._is_QNativeIpcKey;
        qtc.QSystemSemaphore_SetNativeKey22(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(initialValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` param3: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn SetNativeKey3(self: QSystemSemaphore, key: anytype, initialValue: i32, param3: i32) void {
        comptime _ = @TypeOf(key)._is_QNativeIpcKey;
        qtc.QSystemSemaphore_SetNativeKey3(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(initialValue), @bitCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn SetNativeKey23(self: QSystemSemaphore, key: []const u8, initialValue: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey23(@ptrCast(self.ptr), key_str, @bitCast(initialValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn SetNativeKey32(self: QSystemSemaphore, key: []const u8, initialValue: i32, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey32(@ptrCast(self.ptr), key_str, @bitCast(initialValue), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn SetNativeKey4(self: QSystemSemaphore, key: []const u8, initialValue: i32, mode: i32, typeVal: u16) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey4(@ptrCast(self.ptr), key_str, @bitCast(initialValue), @bitCast(mode), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn SetKey2(self: QSystemSemaphore, key: []const u8, initialValue: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey2(@ptrCast(self.ptr), key_str, @bitCast(initialValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn SetKey3(self: QSystemSemaphore, key: []const u8, initialValue: i32, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey3(@ptrCast(self.ptr), key_str, @bitCast(initialValue), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn Release1(self: QSystemSemaphore, n: i32) bool {
        return qtc.QSystemSemaphore_Release1(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn PlatformSafeKey2(key: []const u8, typeVal: u16) QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_PlatformSafeKey2(key_str, @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn LegacyNativeKey2(key: []const u8, typeVal: u16) QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QSystemSemaphore_LegacyNativeKey2(key_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#dtor.QSystemSemaphore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSystemSemaphore `
    ///
    pub fn Delete(self: QSystemSemaphore) void {
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
