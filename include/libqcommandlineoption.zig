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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn new(name: []const u8) QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new(name_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _names: []const []const u8 `
    ///
    pub fn new2(allocator: std.mem.Allocator, _names: []const []const u8) QCommandLineOption {
        const names_arr = allocator.alloc(qtc.libqt_string, _names.len) catch @panic("QCommandLineOption.new2: Memory allocation failed");
        defer allocator.free(names_arr);
        for (_names, 0.._names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = _names.len,
            .data = names_arr.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new2(names_list) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn new3(name: []const u8, _description: []const u8) QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new3(name_str, description_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _names: []const []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn new4(allocator: std.mem.Allocator, _names: []const []const u8, _description: []const u8) QCommandLineOption {
        const names_arr = allocator.alloc(qtc.libqt_string, _names.len) catch @panic("QCommandLineOption.new4: Memory allocation failed");
        defer allocator.free(names_arr);
        for (_names, 0.._names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = _names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new4(names_list, description_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCommandLineOption `
    ///
    pub fn new5(other: anytype) QCommandLineOption {
        comptime _ = @TypeOf(other)._is_QCommandLineOption;
        return .{ .ptr = qtc.QCommandLineOption_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _valueName: []const u8 `
    ///
    pub fn new6(name: []const u8, _description: []const u8, _valueName: []const u8) QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const valueName_str = qtc.libqt_string{
            .len = _valueName.len,
            .data = _valueName.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new6(name_str, description_str, valueName_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _valueName: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn new7(name: []const u8, _description: []const u8, _valueName: []const u8, defaultValue: []const u8) QCommandLineOption {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const valueName_str = qtc.libqt_string{
            .len = _valueName.len,
            .data = _valueName.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new7(name_str, description_str, valueName_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _names: []const []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _valueName: []const u8 `
    ///
    pub fn new8(allocator: std.mem.Allocator, _names: []const []const u8, _description: []const u8, _valueName: []const u8) QCommandLineOption {
        const names_arr = allocator.alloc(qtc.libqt_string, _names.len) catch @panic("QCommandLineOption.new8: Memory allocation failed");
        defer allocator.free(names_arr);
        for (_names, 0.._names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = _names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const valueName_str = qtc.libqt_string{
            .len = _valueName.len,
            .data = _valueName.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new8(names_list, description_str, valueName_str) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QCommandLineOption object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _names: []const []const u8 `
    ///
    /// ` _description: []const u8 `
    ///
    /// ` _valueName: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn new9(allocator: std.mem.Allocator, _names: []const []const u8, _description: []const u8, _valueName: []const u8, defaultValue: []const u8) QCommandLineOption {
        const names_arr = allocator.alloc(qtc.libqt_string, _names.len) catch @panic("QCommandLineOption.new9: Memory allocation failed");
        defer allocator.free(names_arr);
        for (_names, 0.._names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = _names.len,
            .data = names_arr.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        const valueName_str = qtc.libqt_string{
            .len = _valueName.len,
            .data = _valueName.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.QCommandLineOption_new9(names_list, description_str, valueName_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` other: QCommandLineOption `
    ///
    pub fn operatorAssign(self: QCommandLineOption, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCommandLineOption;
        qtc.QCommandLineOption_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` other: QCommandLineOption `
    ///
    pub fn swap(self: QCommandLineOption, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCommandLineOption;
        qtc.QCommandLineOption_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `names` instead
    ///
    pub const Names = names;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#names)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn names(self: QCommandLineOption, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineOption_Names(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCommandLineOption.names: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCommandLineOption.names: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setValueName` instead
    ///
    pub const SetValueName = setValueName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setValueName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setValueName(self: QCommandLineOption, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QCommandLineOption_SetValueName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `valueName` instead
    ///
    pub const ValueName = valueName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#valueName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn valueName(self: QCommandLineOption, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineOption_ValueName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineOption.valueName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: QCommandLineOption, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.QCommandLineOption_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: QCommandLineOption, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineOption_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineOption.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaultValue` instead
    ///
    pub const SetDefaultValue = setDefaultValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn setDefaultValue(self: QCommandLineOption, defaultValue: []const u8) void {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        qtc.QCommandLineOption_SetDefaultValue(@ptrCast(self.ptr), defaultValue_str);
    }

    /// ### DEPRECATED: Use `setDefaultValues` instead
    ///
    pub const SetDefaultValues = setDefaultValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setDefaultValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _defaultValues: []const []const u8 `
    ///
    pub fn setDefaultValues(self: QCommandLineOption, allocator: std.mem.Allocator, _defaultValues: []const []const u8) void {
        const defaultValues_arr = allocator.alloc(qtc.libqt_string, _defaultValues.len) catch @panic("QCommandLineOption.setDefaultValues: Memory allocation failed");
        defer allocator.free(defaultValues_arr);
        for (_defaultValues, 0.._defaultValues.len) |str_item, i|
            defaultValues_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValues_list = qtc.libqt_list{
            .len = _defaultValues.len,
            .data = defaultValues_arr.ptr,
        };
        qtc.QCommandLineOption_SetDefaultValues(@ptrCast(self.ptr), defaultValues_list);
    }

    /// ### DEPRECATED: Use `defaultValues` instead
    ///
    pub const DefaultValues = defaultValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#defaultValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultValues(self: QCommandLineOption, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineOption_DefaultValues(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCommandLineOption.defaultValues: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCommandLineOption.defaultValues: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

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
    pub fn flags(self: QCommandLineOption) i32 {
        return qtc.QCommandLineOption_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineOption `
    ///
    /// ` aflags: flag of qcommandlineoption_enums.Flag `
    ///
    pub fn setFlags(self: QCommandLineOption, aflags: i32) void {
        qtc.QCommandLineOption_SetFlags(@ptrCast(self.ptr), @bitCast(aflags));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineoption.html#dtor.QCommandLineOption)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCommandLineOption `
    ///
    pub fn delete(self: QCommandLineOption) void {
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
