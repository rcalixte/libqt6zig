const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcommandlineoption_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html)
pub const QCommandLineOption = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCommandLineOption,

    pub const _is_QCommandLineOption = {};

    /// New constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New(name: []const u8) QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new(name_str) };
    }

    /// New2 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn New2(allocator: std.mem.Allocator, names: []const []const u8) QCommandLineOption {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qcommandlineoption.New2: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new2(names_list) };
    }

    /// New3 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn New3(name: []const u8, description: []const u8) QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new3(name_str, description_str) };
    }

    /// New4 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn New4(allocator: std.mem.Allocator, names: []const []const u8, description: []const u8) QCommandLineOption {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qcommandlineoption.New4: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new4(names_list, description_str) };
    }

    /// New5 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCommandLineOption `
    ///
    pub fn New5(other: anytype) QCommandLineOption {
        comptime _ = @TypeOf(other)._is_QCommandLineOption;
        return .{ .ptr = qtc.QCommandLineOption_new5(@ptrCast(other.ptr)) };
    }

    /// New6 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` valueName: []const u8 `
    ///
    pub fn New6(name: []const u8, description: []const u8, valueName: []const u8) QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const valueName_str = qtc.libqt_string{
            .len = valueName.len,
            .data = valueName.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new6(name_str, description_str, valueName_str) };
    }

    /// New7 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` valueName: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn New7(name: []const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8) QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const valueName_str = qtc.libqt_string{
            .len = valueName.len,
            .data = valueName.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new7(name_str, description_str, valueName_str, defaultValue_str) };
    }

    /// New8 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` valueName: []const u8 `
    ///
    pub fn New8(allocator: std.mem.Allocator, names: []const []const u8, description: []const u8, valueName: []const u8) QCommandLineOption {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qcommandlineoption.New8: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const valueName_str = qtc.libqt_string{
            .len = valueName.len,
            .data = valueName.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new8(names_list, description_str, valueName_str) };
    }

    /// New9 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` valueName: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn New9(allocator: std.mem.Allocator, names: []const []const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8) QCommandLineOption {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qcommandlineoption.New9: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i|
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const valueName_str = qtc.libqt_string{
            .len = valueName.len,
            .data = valueName.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new9(names_list, description_str, valueName_str, defaultValue_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` other: QCommandLineOption `
    ///
    pub fn OperatorAssign(self: QCommandLineOption, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCommandLineOption;
        qtc.QCommandLineOption_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` other: QCommandLineOption `
    ///
    pub fn Swap(self: QCommandLineOption, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCommandLineOption;
        qtc.QCommandLineOption_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#names)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Names(self: QCommandLineOption, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineOption_Names(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineoption.Names: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineoption.Names: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setValueName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetValueName(self: QCommandLineOption, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QCommandLineOption_SetValueName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#valueName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ValueName(self: QCommandLineOption, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineOption_ValueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineoption.ValueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: QCommandLineOption, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QCommandLineOption_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: QCommandLineOption, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineOption_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineoption.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn SetDefaultValue(self: QCommandLineOption, defaultValue: []const u8) void {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        qtc.QCommandLineOption_SetDefaultValue(@ptrCast(self.ptr), defaultValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValues: []const []const u8 `
    ///
    pub fn SetDefaultValues(self: QCommandLineOption, allocator: std.mem.Allocator, defaultValues: []const []const u8) void {
        const defaultValues_arr = allocator.alloc(qtc.libqt_string, defaultValues.len) catch @panic("qcommandlineoption.SetDefaultValues: Memory allocation failed");
        defer allocator.free(defaultValues_arr);
        for (defaultValues, 0..defaultValues.len) |item, i|
            defaultValues_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const defaultValues_list = qtc.libqt_list{
            .len = defaultValues.len,
            .data = defaultValues_arr.ptr,
        };
        qtc.QCommandLineOption_SetDefaultValues(@ptrCast(self.ptr), defaultValues_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#defaultValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultValues(self: QCommandLineOption, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineOption_DefaultValues(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineoption.DefaultValues: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineoption.DefaultValues: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ## Returns:
    ///
    /// ` flag of qcommandlineoption_enums.Flag `
    ///
    pub fn Flags(self: QCommandLineOption) i32 {
        return qtc.QCommandLineOption_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` aflags: flag of qcommandlineoption_enums.Flag `
    ///
    pub fn SetFlags(self: QCommandLineOption, aflags: i32) void {
        qtc.QCommandLineOption_SetFlags(@ptrCast(self.ptr), @bitCast(aflags));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#dtor.QCommandLineOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCommandLineOption `
    ///
    pub fn Delete(self: QCommandLineOption) void {
        qtc.QCommandLineOption_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#public-types)
pub const enums = struct {
    pub const Flag = enum(i32) {
        pub const HiddenFromHelp: i32 = 1;
        pub const ShortOptionStyle: i32 = 2;
    };
};
