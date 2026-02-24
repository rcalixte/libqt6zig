const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcommandlineparser_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html)
pub const qcommandlineparser = struct {
    /// New constructs a new QCommandLineParser object.
    ///
    pub fn New() QtC.QCommandLineParser {
        return qtc.QCommandLineParser_new();
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setSingleDashWordOptionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` parsingMode: qcommandlineparser_enums.SingleDashWordOptionMode `
    ///
    pub fn SetSingleDashWordOptionMode(self: ?*anyopaque, parsingMode: i32) void {
        qtc.QCommandLineParser_SetSingleDashWordOptionMode(@ptrCast(self), @bitCast(parsingMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setOptionsAfterPositionalArgumentsMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` mode: qcommandlineparser_enums.OptionsAfterPositionalArgumentsMode `
    ///
    pub fn SetOptionsAfterPositionalArgumentsMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` commandLineOption: QtC.QCommandLineOption `
    ///
    pub fn AddOption(self: ?*anyopaque, commandLineOption: ?*anyopaque) bool {
        return qtc.QCommandLineParser_AddOption(@ptrCast(self), @ptrCast(commandLineOption));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` options: []QtC.QCommandLineOption `
    ///
    pub fn AddOptions(self: ?*anyopaque, options: []QtC.QCommandLineOption) bool {
        const options_list = qtc.libqt_list{
            .len = options.len,
            .data = @ptrCast(options.ptr),
        };
        return qtc.QCommandLineParser_AddOptions(@ptrCast(self), options_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addVersionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    pub fn AddVersionOption(self: ?*anyopaque) QtC.QCommandLineOption {
        return qtc.QCommandLineParser_AddVersionOption(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addHelpOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    pub fn AddHelpOption(self: ?*anyopaque) QtC.QCommandLineOption {
        return qtc.QCommandLineParser_AddHelpOption(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setApplicationDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetApplicationDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QCommandLineParser_SetApplicationDescription(@ptrCast(self), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#applicationDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_ApplicationDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.ApplicationDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AddPositionalArgument(self: ?*anyopaque, name: []const u8, description: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QCommandLineParser_AddPositionalArgument(@ptrCast(self), name_str, description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#clearPositionalArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    pub fn ClearPositionalArguments(self: ?*anyopaque) void {
        qtc.QCommandLineParser_ClearPositionalArguments(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` arguments: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Process(self: ?*anyopaque, arguments: []const []const u8, allocator: std.mem.Allocator) void {
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qcommandlineparser.Process: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QCommandLineParser_Process(@ptrCast(self), arguments_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` app: QtC.QCoreApplication `
    ///
    pub fn Process2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QCommandLineParser_Process2(@ptrCast(self), @ptrCast(app));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#parse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` arguments: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parse(self: ?*anyopaque, arguments: []const []const u8, allocator: std.mem.Allocator) bool {
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qcommandlineparser.Parse: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i| {
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        return qtc.QCommandLineParser_Parse(@ptrCast(self), arguments_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_ErrorText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsSet(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QCommandLineParser_IsSet(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QCommandLineParser_Value(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Values(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_Values(@ptrCast(self), name_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineparser.Values: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineparser.Values: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` option: QtC.QCommandLineOption `
    ///
    pub fn IsSet2(self: ?*anyopaque, option: ?*anyopaque) bool {
        return qtc.QCommandLineParser_IsSet2(@ptrCast(self), @ptrCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` option: QtC.QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Value2(self: ?*anyopaque, option: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_Value2(@ptrCast(self), @ptrCast(option));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` option: QtC.QCommandLineOption `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Values2(self: ?*anyopaque, option: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_Values2(@ptrCast(self), @ptrCast(option));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineparser.Values2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineparser.Values2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#positionalArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PositionalArguments(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_PositionalArguments(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineparser.PositionalArguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineparser.PositionalArguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#optionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OptionNames(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_OptionNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineparser.OptionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineparser.OptionNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#unknownOptionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UnknownOptionNames(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_UnknownOptionNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qcommandlineparser.UnknownOptionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qcommandlineparser.UnknownOptionNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#showVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    pub fn ShowVersion(self: ?*anyopaque) void {
        qtc.QCommandLineParser_ShowVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    pub fn ShowHelp(self: ?*anyopaque) void {
        qtc.QCommandLineParser_ShowHelp(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#helpText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HelpText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_HelpText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.HelpText: Memory allocation failed");
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
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(sourceText: [:0]const u8, disambiguation: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` syntax: []const u8 `
    ///
    pub fn AddPositionalArgument3(self: ?*anyopaque, name: []const u8, description: []const u8, syntax: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        const syntax_str = qtc.libqt_string{
            .len = syntax.len,
            .data = syntax.ptr,
        };
        qtc.QCommandLineParser_AddPositionalArgument3(@ptrCast(self), name_str, description_str, syntax_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    /// ` exitCode: i32 `
    ///
    pub fn ShowHelp1(self: ?*anyopaque, exitCode: i32) void {
        qtc.QCommandLineParser_ShowHelp1(@ptrCast(self), @bitCast(exitCode));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#dtor.QCommandLineParser)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCommandLineParser `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QCommandLineParser_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#public-types)
pub const enums = struct {
    pub const SingleDashWordOptionMode = enum(i32) {
        pub const ParseAsCompactedShortOptions: i32 = 0;
        pub const ParseAsLongOptions: i32 = 1;
    };

    pub const OptionsAfterPositionalArgumentsMode = enum(i32) {
        pub const ParseAsOptions: i32 = 0;
        pub const ParseAsPositionalArguments: i32 = 1;
    };
};
