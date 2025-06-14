const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsystemsemaphore_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsystemsemaphore.html
pub const qsystemsemaphore = struct {
    /// New constructs a new QSystemSemaphore object.
    ///
    /// ``` key: []const u8 ```
    pub fn New(key: []const u8) QtC.QSystemSemaphore {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QSystemSemaphore_new(key_str);
    }

    /// New2 constructs a new QSystemSemaphore object.
    ///
    /// ``` key: []const u8, initialValue: i32 ```
    pub fn New2(key: []const u8, initialValue: i32) QtC.QSystemSemaphore {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QSystemSemaphore_new2(key_str, @intCast(initialValue));
    }

    /// New3 constructs a new QSystemSemaphore object.
    ///
    /// ``` key: []const u8, initialValue: i32, mode: qsystemsemaphore_enums.AccessMode ```
    pub fn New3(key: []const u8, initialValue: i32, mode: i64) QtC.QSystemSemaphore {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };

        return qtc.QSystemSemaphore_new3(key_str, @intCast(initialValue), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const _str = qtc.QSystemSemaphore_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ``` self: QtC.QSystemSemaphore, key: []const u8 ```
    pub fn SetKey(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#key)
    ///
    /// ``` self: QtC.QSystemSemaphore, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSystemSemaphore_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#acquire)
    ///
    /// ``` self: QtC.QSystemSemaphore ```
    pub fn Acquire(self: ?*anyopaque) bool {
        return qtc.QSystemSemaphore_Acquire(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
    ///
    /// ``` self: QtC.QSystemSemaphore ```
    pub fn Release(self: ?*anyopaque) bool {
        return qtc.QSystemSemaphore_Release(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#error)
    ///
    /// ``` self: QtC.QSystemSemaphore ```
    pub fn Error(self: ?*anyopaque) i64 {
        return qtc.QSystemSemaphore_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#errorString)
    ///
    /// ``` self: QtC.QSystemSemaphore, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSystemSemaphore_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QSystemSemaphore_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QSystemSemaphore_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemsemaphore.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ``` self: QtC.QSystemSemaphore, key: []const u8, initialValue: i32 ```
    pub fn SetKey2(self: ?*anyopaque, key: []const u8, initialValue: i32) void {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey2(@ptrCast(self), key_str, @intCast(initialValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
    ///
    /// ``` self: QtC.QSystemSemaphore, key: []const u8, initialValue: i32, mode: qsystemsemaphore_enums.AccessMode ```
    pub fn SetKey3(self: ?*anyopaque, key: []const u8, initialValue: i32, mode: i64) void {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSystemSemaphore_SetKey3(@ptrCast(self), key_str, @intCast(initialValue), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
    ///
    /// ``` self: QtC.QSystemSemaphore, n: i32 ```
    pub fn Release1(self: ?*anyopaque, n: i32) bool {
        return qtc.QSystemSemaphore_Release1(@ptrCast(self), @intCast(n));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#dtor.QSystemSemaphore)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSystemSemaphore ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSystemSemaphore_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsystemsemaphore.html#types
pub const enums = struct {
    pub const AccessMode = enum {
        pub const Open: i32 = 0;
        pub const Create: i32 = 1;
    };

    pub const SystemSemaphoreError = enum {
        pub const NoError: i32 = 0;
        pub const PermissionDenied: i32 = 1;
        pub const KeyError: i32 = 2;
        pub const AlreadyExists: i32 = 3;
        pub const NotFound: i32 = 4;
        pub const OutOfResources: i32 = 5;
        pub const UnknownError: i32 = 6;
    };
};
