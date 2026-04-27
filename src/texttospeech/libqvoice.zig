const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QLocale = @import("libqt6").QLocale;
const qlocale_enums = @import("../libqlocale.zig").enums;
const qvoice_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html)
pub const QVoice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVoice,

    pub const _is_QVoice = {};

    /// New constructs a new QVoice object.
    ///
    pub fn New() QVoice {
        return .{ .ptr = qtc.QVoice_new() };
    }

    /// New2 constructs a new QVoice object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVoice `
    ///
    pub fn New2(other: anytype) QVoice {
        comptime _ = @TypeOf(other)._is_QVoice;
        return .{ .ptr = qtc.QVoice_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ` other: QVoice `
    ///
    pub fn OperatorAssign(self: QVoice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVoice;
        qtc.QVoice_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ` other: QVoice `
    ///
    pub fn Swap(self: QVoice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVoice;
        qtc.QVoice_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QVoice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVoice_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvoice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    pub fn Locale(self: QVoice) QLocale {
        return .{ .ptr = qtc.QVoice_Locale(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#gender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ## Returns:
    ///
    /// ` qvoice_enums.Gender `
    ///
    pub fn Gender(self: QVoice) i32 {
        return qtc.QVoice_Gender(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#age)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ## Returns:
    ///
    /// ` qvoice_enums.Age `
    ///
    pub fn Age(self: QVoice) i32 {
        return qtc.QVoice_Age(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#language)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.Language `
    ///
    pub fn Language(self: QVoice) u16 {
        return qtc.QVoice_Language(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#genderName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` gender: qvoice_enums.Gender `
    ///
    pub fn GenderName(allocator: std.mem.Allocator, gender: i32) []const u8 {
        var _str = qtc.QVoice_GenderName(@bitCast(gender));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvoice.GenderName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#ageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` age: qvoice_enums.Age `
    ///
    pub fn AgeName(allocator: std.mem.Allocator, age: i32) []const u8 {
        var _str = qtc.QVoice_AgeName(@bitCast(age));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvoice.AgeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#dtor.QVoice)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVoice `
    ///
    pub fn Delete(self: QVoice) void {
        qtc.QVoice_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#public-types)
pub const enums = struct {
    pub const Gender = enum(i32) {
        pub const Male: i32 = 0;
        pub const Female: i32 = 1;
        pub const Unknown: i32 = 2;
    };

    pub const Age = enum(i32) {
        pub const Child: i32 = 0;
        pub const Teenager: i32 = 1;
        pub const Adult: i32 = 2;
        pub const Senior: i32 = 3;
        pub const Other: i32 = 4;
    };
};
