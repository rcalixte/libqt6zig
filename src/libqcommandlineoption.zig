const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qcommandlineoption.html
pub const qcommandlineoption = struct {
    /// New constructs a new QCommandLineOption object.
    ///
    /// ``` name: []const u8 ```
    pub fn New(name: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };

        return qtc.QCommandLineOption_new(name_str);
    }

    /// New2 constructs a new QCommandLineOption object.
    ///
    /// ``` names: [][]const u8, allocator: std.mem.Allocator ```
    pub fn New2(names: [][]const u8, allocator: std.mem.Allocator) QtC.QCommandLineOption {
        var names_arr = allocator.alloc(qtc.struct_libqt_string, names.len) catch @panic("qcommandlineoption.: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, _i| {
            names_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const names_list = qtc.struct_libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };

        return qtc.QCommandLineOption_new2(names_list);
    }

    /// New3 constructs a new QCommandLineOption object.
    ///
    /// ``` name: []const u8, description: []const u8 ```
    pub fn New3(name: []const u8, description: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };

        return qtc.QCommandLineOption_new3(name_str, description_str);
    }

    /// New4 constructs a new QCommandLineOption object.
    ///
    /// ``` names: [][]const u8, description: []const u8, allocator: std.mem.Allocator ```
    pub fn New4(names: [][]const u8, description: []const u8, allocator: std.mem.Allocator) QtC.QCommandLineOption {
        var names_arr = allocator.alloc(qtc.struct_libqt_string, names.len) catch @panic("qcommandlineoption.: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, _i| {
            names_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const names_list = qtc.struct_libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };

        return qtc.QCommandLineOption_new4(names_list, description_str);
    }

    /// New5 constructs a new QCommandLineOption object.
    ///
    /// ``` other: QtC.QCommandLineOption ```
    pub fn New5(other: ?*anyopaque) QtC.QCommandLineOption {
        return qtc.QCommandLineOption_new5(@ptrCast(other));
    }

    /// New6 constructs a new QCommandLineOption object.
    ///
    /// ``` name: []const u8, description: []const u8, valueName: []const u8 ```
    pub fn New6(name: []const u8, description: []const u8, valueName: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        const valueName_str = qtc.struct_libqt_string{
            .len = valueName.len,
            .data = @constCast(valueName.ptr),
        };

        return qtc.QCommandLineOption_new6(name_str, description_str, valueName_str);
    }

    /// New7 constructs a new QCommandLineOption object.
    ///
    /// ``` name: []const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8 ```
    pub fn New7(name: []const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        const valueName_str = qtc.struct_libqt_string{
            .len = valueName.len,
            .data = @constCast(valueName.ptr),
        };
        const defaultValue_str = qtc.struct_libqt_string{
            .len = defaultValue.len,
            .data = @constCast(defaultValue.ptr),
        };

        return qtc.QCommandLineOption_new7(name_str, description_str, valueName_str, defaultValue_str);
    }

    /// New8 constructs a new QCommandLineOption object.
    ///
    /// ``` names: [][]const u8, description: []const u8, valueName: []const u8, allocator: std.mem.Allocator ```
    pub fn New8(names: [][]const u8, description: []const u8, valueName: []const u8, allocator: std.mem.Allocator) QtC.QCommandLineOption {
        var names_arr = allocator.alloc(qtc.struct_libqt_string, names.len) catch @panic("qcommandlineoption.: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, _i| {
            names_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const names_list = qtc.struct_libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        const valueName_str = qtc.struct_libqt_string{
            .len = valueName.len,
            .data = @constCast(valueName.ptr),
        };

        return qtc.QCommandLineOption_new8(names_list, description_str, valueName_str);
    }

    /// New9 constructs a new QCommandLineOption object.
    ///
    /// ``` names: [][]const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn New9(names: [][]const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) QtC.QCommandLineOption {
        var names_arr = allocator.alloc(qtc.struct_libqt_string, names.len) catch @panic("qcommandlineoption.: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |item, _i| {
            names_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const names_list = qtc.struct_libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        const valueName_str = qtc.struct_libqt_string{
            .len = valueName.len,
            .data = @constCast(valueName.ptr),
        };
        const defaultValue_str = qtc.struct_libqt_string{
            .len = defaultValue.len,
            .data = @constCast(defaultValue.ptr),
        };

        return qtc.QCommandLineOption_new9(names_list, description_str, valueName_str, defaultValue_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#operator=)
    ///
    /// ``` self: QtC.QCommandLineOption, other: QtC.QCommandLineOption ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCommandLineOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#swap)
    ///
    /// ``` self: QtC.QCommandLineOption, other: QtC.QCommandLineOption ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCommandLineOption_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#names)
    ///
    /// ``` self: QtC.QCommandLineOption, allocator: std.mem.Allocator ```
    pub fn Names(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QCommandLineOption_Names(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineoption.Names: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineoption.Names: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setValueName)
    ///
    /// ``` self: QtC.QCommandLineOption, name: []const u8 ```
    pub fn SetValueName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        qtc.QCommandLineOption_SetValueName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#valueName)
    ///
    /// ``` self: QtC.QCommandLineOption, allocator: std.mem.Allocator ```
    pub fn ValueName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineOption_ValueName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineoption.ValueName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDescription)
    ///
    /// ``` self: QtC.QCommandLineOption, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        qtc.QCommandLineOption_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#description)
    ///
    /// ``` self: QtC.QCommandLineOption, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineOption_Description(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineoption.Description: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValue)
    ///
    /// ``` self: QtC.QCommandLineOption, defaultValue: []const u8 ```
    pub fn SetDefaultValue(self: ?*anyopaque, defaultValue: []const u8) void {
        const defaultValue_str = qtc.struct_libqt_string{
            .len = defaultValue.len,
            .data = @constCast(defaultValue.ptr),
        };
        qtc.QCommandLineOption_SetDefaultValue(@ptrCast(self), defaultValue_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValues)
    ///
    /// ``` self: QtC.QCommandLineOption, defaultValues: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetDefaultValues(self: ?*anyopaque, defaultValues: [][]const u8, allocator: std.mem.Allocator) void {
        var defaultValues_arr = allocator.alloc(qtc.struct_libqt_string, defaultValues.len) catch @panic("qcommandlineoption.SetDefaultValues: Memory allocation failed");
        defer allocator.free(defaultValues_arr);
        for (defaultValues, 0..defaultValues.len) |item, _i| {
            defaultValues_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const defaultValues_list = qtc.struct_libqt_list{
            .len = defaultValues.len,
            .data = defaultValues_arr.ptr,
        };
        qtc.QCommandLineOption_SetDefaultValues(@ptrCast(self), defaultValues_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#defaultValues)
    ///
    /// ``` self: QtC.QCommandLineOption, allocator: std.mem.Allocator ```
    pub fn DefaultValues(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QCommandLineOption_DefaultValues(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineoption.DefaultValues: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineoption.DefaultValues: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#flags)
    ///
    /// ``` self: QtC.QCommandLineOption ```
    pub fn Flags(self: ?*anyopaque) i64 {
        return qtc.QCommandLineOption_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#setFlags)
    ///
    /// ``` self: QtC.QCommandLineOption, aflags: i32 ```
    pub fn SetFlags(self: ?*anyopaque, aflags: i64) void {
        qtc.QCommandLineOption_SetFlags(@ptrCast(self), @intCast(aflags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcommandlineoption.html#dtor.QCommandLineOption)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCommandLineOption ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCommandLineOption_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcommandlineoption.html#types
pub const enums = struct {
    pub const Flag = enum {
        pub const HiddenFromHelp: i32 = 1;
        pub const ShortOptionStyle: i32 = 2;
    };
};
