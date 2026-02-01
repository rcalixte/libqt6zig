const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsystemsemaphore_enums = enums;
const qtipccommon_enums = @import("libqtipccommon.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)
pub const qsystemsemaphore = struct {
    /// New constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QtC.QNativeIpcKey `
    ///
    pub fn New(key: ?*anyopaque) QtC.QSystemSemaphore {
        return qtc.QSystemSemaphore_new(@ptrCast(key));
    }

    /// New2 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn New2(key: []const u8) QtC.QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QSystemSemaphore_new2(key_str);
    }

    /// New3 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QtC.QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn New3(key: ?*anyopaque, initialValue: i32) QtC.QSystemSemaphore {
        return qtc.QSystemSemaphore_new3(@ptrCast(key), @intCast(initialValue));
    }

    /// New4 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: QtC.QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` param3: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn New4(key: ?*anyopaque, initialValue: i32, param3: i32) QtC.QSystemSemaphore {
        return qtc.QSystemSemaphore_new4(@ptrCast(key), @intCast(initialValue), @intCast(param3));
    }

    /// New5 constructs a new QSystemSemaphore object.
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn New5(key: []const u8, initialValue: i32) QtC.QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QSystemSemaphore_new5(key_str, @intCast(initialValue));
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
    pub fn New6(key: []const u8, initialValue: i32, mode: i32) QtC.QSystemSemaphore {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QSystemSemaphore_new6(key_str, @intCast(initialValue), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(sourceText: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: QtC.QNativeIpcKey `
    ///
    pub fn SetNativeKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSystemSemaphore_SetNativeKey(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetNativeKey2(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey2(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#nativeIpcKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    pub fn NativeIpcKey(self: ?*anyopaque) QtC.QNativeIpcKey {
        return qtc.QSystemSemaphore_NativeIpcKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SetKey(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSystemSemaphore_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#acquire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    pub fn Acquire(self: ?*anyopaque) bool {
        return qtc.QSystemSemaphore_Acquire(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    pub fn Release(self: ?*anyopaque) bool {
        return qtc.QSystemSemaphore_Release(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ## Returns:
    ///
    /// ` qsystemsemaphore_enums.SystemSemaphoreError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QSystemSemaphore_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSystemSemaphore_ErrorString(@ptrCast(self));
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
        return qtc.QSystemSemaphore_IsKeyTypeSupported(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn PlatformSafeKey(key: []const u8) QtC.QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QSystemSemaphore_PlatformSafeKey(key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    pub fn LegacyNativeKey(key: []const u8) QtC.QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QSystemSemaphore_LegacyNativeKey(key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(sourceText: [:0]const u8, disambiguation: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: QtC.QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn SetNativeKey22(self: ?*anyopaque, key: ?*anyopaque, initialValue: i32) void {
        qtc.QSystemSemaphore_SetNativeKey22(@ptrCast(self), @ptrCast(key), @intCast(initialValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: QtC.QNativeIpcKey `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` param3: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn SetNativeKey3(self: ?*anyopaque, key: ?*anyopaque, initialValue: i32, param3: i32) void {
        qtc.QSystemSemaphore_SetNativeKey3(@ptrCast(self), @ptrCast(key), @intCast(initialValue), @intCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn SetNativeKey23(self: ?*anyopaque, key: []const u8, initialValue: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey23(@ptrCast(self), key_str, @intCast(initialValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn SetNativeKey32(self: ?*anyopaque, key: []const u8, initialValue: i32, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey32(@ptrCast(self), key_str, @intCast(initialValue), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn SetNativeKey4(self: ?*anyopaque, key: []const u8, initialValue: i32, mode: i32, typeVal: u16) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetNativeKey4(@ptrCast(self), key_str, @intCast(initialValue), @intCast(mode), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    pub fn SetKey2(self: ?*anyopaque, key: []const u8, initialValue: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey2(@ptrCast(self), key_str, @intCast(initialValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` key: []const u8 `
    ///
    /// ` initialValue: i32 `
    ///
    /// ` mode: qsystemsemaphore_enums.AccessMode `
    ///
    pub fn SetKey3(self: ?*anyopaque, key: []const u8, initialValue: i32, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey3(@ptrCast(self), key_str, @intCast(initialValue), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    /// ` n: i32 `
    ///
    pub fn Release1(self: ?*anyopaque, n: i32) bool {
        return qtc.QSystemSemaphore_Release1(@ptrCast(self), @intCast(n));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn PlatformSafeKey2(key: []const u8, typeVal: u16) QtC.QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QSystemSemaphore_PlatformSafeKey2(key_str, @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` key: []const u8 `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn LegacyNativeKey2(key: []const u8, typeVal: u16) QtC.QNativeIpcKey {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QSystemSemaphore_LegacyNativeKey2(key_str, @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#dtor.QSystemSemaphore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSystemSemaphore `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSystemSemaphore_Delete(@ptrCast(self));
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
