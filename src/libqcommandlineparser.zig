const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QCommandLineOption = @import("libqt6").QCommandLineOption;
const QCoreApplication = @import("libqt6").QCoreApplication;
const qcommandlineparser_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html)
pub const QCommandLineParser = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCommandLineParser,

    pub const _is_QCommandLineParser = {};

    /// New constructs a new QCommandLineParser object.
    ///
    pub fn New() QCommandLineParser {
        return .{ .ptr = qtc.QCommandLineParser_new() };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setSingleDashWordOptionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` parsingMode: qcommandlineparser_enums.SingleDashWordOptionMode `
    ///
    pub fn SetSingleDashWordOptionMode(self: QCommandLineParser, parsingMode: i32) void {
        qtc.QCommandLineParser_SetSingleDashWordOptionMode(@ptrCast(self.ptr), @bitCast(parsingMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setOptionsAfterPositionalArgumentsMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` mode: qcommandlineparser_enums.OptionsAfterPositionalArgumentsMode `
    ///
    pub fn SetOptionsAfterPositionalArgumentsMode(self: QCommandLineParser, mode: i32) void {
        qtc.QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` commandLineOption: QCommandLineOption `
    ///
    pub fn AddOption(self: QCommandLineParser, commandLineOption: anytype) bool {
        comptime _ = @TypeOf(commandLineOption)._is_QCommandLineOption;
        return qtc.QCommandLineParser_AddOption(@ptrCast(self.ptr), @ptrCast(commandLineOption.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` options: []QCommandLineOption `
    ///
    pub fn AddOptions(self: QCommandLineParser, options: []QCommandLineOption) bool {
        const options_list = qtc.libqt_list{
            .len = options.len,
            .data = @ptrCast(options.ptr),
        };
        return qtc.QCommandLineParser_AddOptions(@ptrCast(self.ptr), options_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addVersionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn AddVersionOption(self: QCommandLineParser) QCommandLineOption {
        return .{ .ptr = qtc.QCommandLineParser_AddVersionOption(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addHelpOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn AddHelpOption(self: QCommandLineParser) QCommandLineOption {
        return .{ .ptr = qtc.QCommandLineParser_AddHelpOption(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setApplicationDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetApplicationDescription(self: QCommandLineParser, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QCommandLineParser_SetApplicationDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#applicationDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationDescription(self: QCommandLineParser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_ApplicationDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.ApplicationDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AddPositionalArgument(self: QCommandLineParser, name: []const u8, description: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QCommandLineParser_AddPositionalArgument(@ptrCast(self.ptr), name_str, description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#clearPositionalArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn ClearPositionalArguments(self: QCommandLineParser) void {
        qtc.QCommandLineParser_ClearPositionalArguments(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` arguments: []const []const u8 `
    ///
    pub fn Process(self: QCommandLineParser, allocator: std.mem.Allocator, arguments: []const []const u8) void {
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qcommandlineparser.Process: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i|
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QCommandLineParser_Process(@ptrCast(self.ptr), arguments_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` app: QCoreApplication `
    ///
    pub fn Process2(self: QCommandLineParser, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QCoreApplication;
        qtc.QCommandLineParser_Process2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#parse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` arguments: []const []const u8 `
    ///
    pub fn Parse(self: QCommandLineParser, allocator: std.mem.Allocator, arguments: []const []const u8) bool {
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("qcommandlineparser.Parse: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |item, i|
            arguments_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        return qtc.QCommandLineParser_Parse(@ptrCast(self.ptr), arguments_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorText(self: QCommandLineParser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsSet(self: QCommandLineParser, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QCommandLineParser_IsSet(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Value(self: QCommandLineParser, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QCommandLineParser_Value(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Values(self: QCommandLineParser, allocator: std.mem.Allocator, name: []const u8) []const []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_Values(@ptrCast(self.ptr), name_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QCommandLineParser `
    ///
    /// ` option: QCommandLineOption `
    ///
    pub fn IsSet2(self: QCommandLineParser, option: anytype) bool {
        comptime _ = @TypeOf(option)._is_QCommandLineOption;
        return qtc.QCommandLineParser_IsSet2(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` option: QCommandLineOption `
    ///
    pub fn Value2(self: QCommandLineParser, allocator: std.mem.Allocator, option: anytype) []const u8 {
        comptime _ = @TypeOf(option)._is_QCommandLineOption;
        var _str = qtc.QCommandLineParser_Value2(@ptrCast(self.ptr), @ptrCast(option.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#values)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` option: QCommandLineOption `
    ///
    pub fn Values2(self: QCommandLineParser, allocator: std.mem.Allocator, option: anytype) []const []const u8 {
        comptime _ = @TypeOf(option)._is_QCommandLineOption;
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_Values2(@ptrCast(self.ptr), @ptrCast(option.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PositionalArguments(self: QCommandLineParser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_PositionalArguments(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OptionNames(self: QCommandLineParser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_OptionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UnknownOptionNames(self: QCommandLineParser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_UnknownOptionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QCommandLineParser `
    ///
    pub fn ShowVersion(self: QCommandLineParser) void {
        qtc.QCommandLineParser_ShowVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn ShowHelp(self: QCommandLineParser) void {
        qtc.QCommandLineParser_ShowHelp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#helpText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HelpText(self: QCommandLineParser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_HelpText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.HelpText: Memory allocation failed");
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
    pub fn Tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addPositionalArgument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    /// ` description: []const u8 `
    ///
    /// ` syntax: []const u8 `
    ///
    pub fn AddPositionalArgument3(self: QCommandLineParser, name: []const u8, description: []const u8, syntax: []const u8) void {
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
        qtc.QCommandLineParser_AddPositionalArgument3(@ptrCast(self.ptr), name_str, description_str, syntax_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` exitCode: i32 `
    ///
    pub fn ShowHelp1(self: QCommandLineParser, exitCode: i32) void {
        qtc.QCommandLineParser_ShowHelp1(@ptrCast(self.ptr), @bitCast(exitCode));
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
    /// ` self: QCommandLineParser `
    ///
    pub fn Delete(self: QCommandLineParser) void {
        qtc.QCommandLineParser_Delete(@ptrCast(self.ptr));
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
