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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVoice object in C++ memory
    ///
    pub fn new() QVoice {
        return .{ .ptr = qtc.QVoice_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVoice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QVoice `
    ///
    pub fn new2(other: anytype) QVoice {
        comptime _ = @TypeOf(other)._is_QVoice;
        return .{ .ptr = qtc.QVoice_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ` other: QVoice `
    ///
    pub fn operatorAssign(self: QVoice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVoice;
        qtc.QVoice_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ` other: QVoice `
    ///
    pub fn swap(self: QVoice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QVoice;
        qtc.QVoice_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QVoice, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QVoice_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVoice.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVoice `
    ///
    pub fn locale(self: QVoice) QLocale {
        return .{ .ptr = qtc.QVoice_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `gender` instead
    ///
    pub const Gender = gender;

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
    pub fn gender(self: QVoice) i32 {
        return qtc.QVoice_Gender(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `age` instead
    ///
    pub const Age = age;

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
    pub fn age(self: QVoice) i32 {
        return qtc.QVoice_Age(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `language` instead
    ///
    pub const Language = language;

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
    pub fn language(self: QVoice) u16 {
        return qtc.QVoice_Language(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `genderName` instead
    ///
    pub const GenderName = genderName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#genderName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _gender: qvoice_enums.Gender `
    ///
    pub fn genderName(allocator: std.mem.Allocator, _gender: i32) []const u8 {
        var _str = qtc.QVoice_GenderName(@bitCast(_gender));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVoice.genderName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `ageName` instead
    ///
    pub const AgeName = ageName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#ageName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _age: qvoice_enums.Age `
    ///
    pub fn ageName(allocator: std.mem.Allocator, _age: i32) []const u8 {
        var _str = qtc.QVoice_AgeName(@bitCast(_age));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVoice.ageName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#dtor.QVoice)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVoice `
    ///
    pub fn delete(self: QVoice) void {
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
