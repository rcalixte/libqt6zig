const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcommandlineoption_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html)
pub const qcommandlineoption = struct {
    /// New constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New(name: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QCommandLineOption_new(name_str);
    }

    /// New2 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` names: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New2(names: [][]const u8, allocator: std.mem.Allocator) QtC.QCommandLineOption {
        var names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qcommandlineoption.New2: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };

        return qtc.QCommandLineOption_new2(names_list);
    }

    /// New3 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn New3(name: []const u8, description: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };

        return qtc.QCommandLineOption_new3(name_str, description_str);
    }

    /// New4 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` names: [][]const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New4(names: [][]const u8, description: []const u8, allocator: std.mem.Allocator) QtC.QCommandLineOption {
        var names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qcommandlineoption.New4: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };

        return qtc.QCommandLineOption_new4(names_list, description_str);
    }

    /// New5 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCommandLineOption `
    ///
    pub fn New5(other: ?*anyopaque) QtC.QCommandLineOption {
        return qtc.QCommandLineOption_new5(@ptrCast(other));
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
    pub fn New6(name: []const u8, description: []const u8, valueName: []const u8) QtC.QCommandLineOption {
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

        return qtc.QCommandLineOption_new6(name_str, description_str, valueName_str);
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
    pub fn New7(name: []const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8) QtC.QCommandLineOption {
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

        return qtc.QCommandLineOption_new7(name_str, description_str, valueName_str, defaultValue_str);
    }

    /// New8 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` names: [][]const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` valueName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New8(names: [][]const u8, description: []const u8, valueName: []const u8, allocator: std.mem.Allocator) QtC.QCommandLineOption {
        var names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qcommandlineoption.New8: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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

        return qtc.QCommandLineOption_new8(names_list, description_str, valueName_str);
    }

    /// New9 constructs a new QCommandLineOption object.
    ///
    /// ## Parameter(s):
    ///
    /// ` names: [][]const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` valueName: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn New9(names: [][]const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) QtC.QCommandLineOption {
        var names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("qcommandlineoption.New9: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, i| {
            names_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
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

        return qtc.QCommandLineOption_new9(names_list, description_str, valueName_str, defaultValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` other: QtC.QCommandLineOption `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCommandLineOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` other: QtC.QCommandLineOption `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCommandLineOption_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#names)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Names(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineOption_Names(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetValueName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QCommandLineOption_SetValueName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#valueName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ValueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineOption_ValueName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineoption.ValueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QCommandLineOption_SetDescription(@ptrCast(self), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineOption_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineoption.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn SetDefaultValue(self: ?*anyopaque, defaultValue: []const u8) void {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        qtc.QCommandLineOption_SetDefaultValue(@ptrCast(self), defaultValue_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` defaultValues: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetDefaultValues(self: ?*anyopaque, defaultValues: [][]const u8, allocator: std.mem.Allocator) void {
        var defaultValues_arr = allocator.alloc(qtc.libqt_string, defaultValues.len) catch @panic("qcommandlineoption.SetDefaultValues: Memory allocation failed");
        defer allocator.free(defaultValues_arr);
        for (defaultValues, 0..defaultValues.len) |item, i| {
            defaultValues_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const defaultValues_list = qtc.libqt_list{
            .len = defaultValues.len,
            .data = defaultValues_arr.ptr,
        };
        qtc.QCommandLineOption_SetDefaultValues(@ptrCast(self), defaultValues_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#defaultValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultValues(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineOption_DefaultValues(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ## Returns:
    ///
    /// ` flag of qcommandlineoption_enums.Flag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QCommandLineOption_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    /// ` aflags: flag of qcommandlineoption_enums.Flag `
    ///
    pub fn SetFlags(self: ?*anyopaque, aflags: i32) void {
        qtc.QCommandLineOption_SetFlags(@ptrCast(self), @intCast(aflags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#dtor.QCommandLineOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCommandLineOption `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCommandLineOption_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#public-types)
pub const enums = struct {
    pub const Flag = enum {
        pub const HiddenFromHelp: i32 = 1;
        pub const ShortOptionStyle: i32 = 2;
    };
};
