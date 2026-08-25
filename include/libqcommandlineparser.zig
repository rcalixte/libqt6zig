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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCommandLineParser object in C++ memory
    ///
    pub fn new() QCommandLineParser {
        return .{ .ptr = qtc.QCommandLineParser_new() };
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineParser.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSingleDashWordOptionMode` instead
    ///
    pub const SetSingleDashWordOptionMode = setSingleDashWordOptionMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setSingleDashWordOptionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` parsingMode: qcommandlineparser_enums.SingleDashWordOptionMode `
    ///
    pub fn setSingleDashWordOptionMode(self: QCommandLineParser, parsingMode: i32) void {
        qtc.QCommandLineParser_SetSingleDashWordOptionMode(@ptrCast(self.ptr), @bitCast(parsingMode));
    }

    /// ### DEPRECATED: Use `setOptionsAfterPositionalArgumentsMode` instead
    ///
    pub const SetOptionsAfterPositionalArgumentsMode = setOptionsAfterPositionalArgumentsMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setOptionsAfterPositionalArgumentsMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` mode: qcommandlineparser_enums.OptionsAfterPositionalArgumentsMode `
    ///
    pub fn setOptionsAfterPositionalArgumentsMode(self: QCommandLineParser, mode: i32) void {
        qtc.QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `addOption` instead
    ///
    pub const AddOption = addOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` commandLineOption: QCommandLineOption `
    ///
    pub fn addOption(self: QCommandLineParser, commandLineOption: anytype) bool {
        comptime _ = @TypeOf(commandLineOption)._is_QCommandLineOption;
        return qtc.QCommandLineParser_AddOption(@ptrCast(self.ptr), @ptrCast(commandLineOption.ptr));
    }

    /// ### DEPRECATED: Use `addOptions` instead
    ///
    pub const AddOptions = addOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` options: []QCommandLineOption `
    ///
    pub fn addOptions(self: QCommandLineParser, options: []QCommandLineOption) bool {
        const options_list = qtc.libqt_list{
            .len = options.len,
            .data = @ptrCast(options.ptr),
        };
        return qtc.QCommandLineParser_AddOptions(@ptrCast(self.ptr), options_list);
    }

    /// ### DEPRECATED: Use `addVersionOption` instead
    ///
    pub const AddVersionOption = addVersionOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addVersionOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn addVersionOption(self: QCommandLineParser) QCommandLineOption {
        return .{ .ptr = qtc.QCommandLineParser_AddVersionOption(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addHelpOption` instead
    ///
    pub const AddHelpOption = addHelpOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#addHelpOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn addHelpOption(self: QCommandLineParser) QCommandLineOption {
        return .{ .ptr = qtc.QCommandLineParser_AddHelpOption(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setApplicationDescription` instead
    ///
    pub const SetApplicationDescription = setApplicationDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#setApplicationDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setApplicationDescription(self: QCommandLineParser, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QCommandLineParser_SetApplicationDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `applicationDescription` instead
    ///
    pub const ApplicationDescription = applicationDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#applicationDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationDescription(self: QCommandLineParser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_ApplicationDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineParser.applicationDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addPositionalArgument` instead
    ///
    pub const AddPositionalArgument = addPositionalArgument;

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
    pub fn addPositionalArgument(self: QCommandLineParser, name: []const u8, description: []const u8) void {
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

    /// ### DEPRECATED: Use `clearPositionalArguments` instead
    ///
    pub const ClearPositionalArguments = clearPositionalArguments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#clearPositionalArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn clearPositionalArguments(self: QCommandLineParser) void {
        qtc.QCommandLineParser_ClearPositionalArguments(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `process` instead
    ///
    pub const Process = process;

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
    pub fn process(self: QCommandLineParser, allocator: std.mem.Allocator, arguments: []const []const u8) void {
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("QCommandLineParser.process: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |str_item, i|
            arguments_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        qtc.QCommandLineParser_Process(@ptrCast(self.ptr), arguments_list);
    }

    /// ### DEPRECATED: Use `process2` instead
    ///
    pub const Process2 = process2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#process)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` app: QCoreApplication `
    ///
    pub fn process2(self: QCommandLineParser, app: anytype) void {
        comptime _ = @TypeOf(app)._is_QCoreApplication;
        qtc.QCommandLineParser_Process2(@ptrCast(self.ptr), @ptrCast(app.ptr));
    }

    /// ### DEPRECATED: Use `parse` instead
    ///
    pub const Parse = parse;

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
    pub fn parse(self: QCommandLineParser, allocator: std.mem.Allocator, arguments: []const []const u8) bool {
        const arguments_arr = allocator.alloc(qtc.libqt_string, arguments.len) catch @panic("QCommandLineParser.parse: Memory allocation failed");
        defer allocator.free(arguments_arr);
        for (arguments, 0..arguments.len) |str_item, i|
            arguments_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = arguments_arr.ptr,
        };
        return qtc.QCommandLineParser_Parse(@ptrCast(self.ptr), arguments_list);
    }

    /// ### DEPRECATED: Use `errorText` instead
    ///
    pub const ErrorText = errorText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorText(self: QCommandLineParser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineParser.errorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSet` instead
    ///
    pub const IsSet = isSet;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` name: []const u8 `
    ///
    pub fn isSet(self: QCommandLineParser, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QCommandLineParser_IsSet(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

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
    pub fn value(self: QCommandLineParser, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QCommandLineParser_Value(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineParser.value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `values` instead
    ///
    pub const Values = values;

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
    pub fn values(self: QCommandLineParser, allocator: std.mem.Allocator, name: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCommandLineParser.values: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCommandLineParser.values: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isSet2` instead
    ///
    pub const IsSet2 = isSet2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#isSet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` option: QCommandLineOption `
    ///
    pub fn isSet2(self: QCommandLineParser, option: anytype) bool {
        comptime _ = @TypeOf(option)._is_QCommandLineOption;
        return qtc.QCommandLineParser_IsSet2(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

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
    pub fn value2(self: QCommandLineParser, allocator: std.mem.Allocator, option: anytype) []const u8 {
        comptime _ = @TypeOf(option)._is_QCommandLineOption;
        var _str = qtc.QCommandLineParser_Value2(@ptrCast(self.ptr), @ptrCast(option.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineParser.value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `values2` instead
    ///
    pub const Values2 = values2;

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
    pub fn values2(self: QCommandLineParser, allocator: std.mem.Allocator, option: anytype) []const []const u8 {
        comptime _ = @TypeOf(option)._is_QCommandLineOption;
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_Values2(@ptrCast(self.ptr), @ptrCast(option.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCommandLineParser.values2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCommandLineParser.values2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `positionalArguments` instead
    ///
    pub const PositionalArguments = positionalArguments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#positionalArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn positionalArguments(self: QCommandLineParser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_PositionalArguments(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCommandLineParser.positionalArguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCommandLineParser.positionalArguments: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `optionNames` instead
    ///
    pub const OptionNames = optionNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#optionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn optionNames(self: QCommandLineParser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_OptionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCommandLineParser.optionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCommandLineParser.optionNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `unknownOptionNames` instead
    ///
    pub const UnknownOptionNames = unknownOptionNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#unknownOptionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn unknownOptionNames(self: QCommandLineParser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QCommandLineParser_UnknownOptionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QCommandLineParser.unknownOptionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QCommandLineParser.unknownOptionNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `showVersion` instead
    ///
    pub const ShowVersion = showVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#showVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn showVersion(self: QCommandLineParser) void {
        qtc.QCommandLineParser_ShowVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showHelp` instead
    ///
    pub const ShowHelp = showHelp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn showHelp(self: QCommandLineParser) void {
        qtc.QCommandLineParser_ShowHelp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `helpText` instead
    ///
    pub const HelpText = helpText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#helpText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn helpText(self: QCommandLineParser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCommandLineParser_HelpText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineParser.helpText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineParser.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCommandLineParser.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addPositionalArgument3` instead
    ///
    pub const AddPositionalArgument3 = addPositionalArgument3;

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
    pub fn addPositionalArgument3(self: QCommandLineParser, name: []const u8, description: []const u8, syntax: []const u8) void {
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

    /// ### DEPRECATED: Use `showHelp1` instead
    ///
    pub const ShowHelp1 = showHelp1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#showHelp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCommandLineParser `
    ///
    /// ` exitCode: i32 `
    ///
    pub fn showHelp1(self: QCommandLineParser, exitCode: i32) void {
        qtc.QCommandLineParser_ShowHelp1(@ptrCast(self.ptr), @bitCast(exitCode));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#dtor.QCommandLineParser)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCommandLineParser `
    ///
    pub fn delete(self: QCommandLineParser) void {
        qtc.QCommandLineParser_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcommandlineparser.html#public-types)
pub const enums = struct {
    pub const SingleDashWordOptionMode = enum {
        pub const ParseAsCompactedShortOptions: i32 = 0;
        pub const ParseAsLongOptions: i32 = 1;
    };

    pub const OptionsAfterPositionalArgumentsMode = enum {
        pub const ParseAsOptions: i32 = 0;
        pub const ParseAsPositionalArguments: i32 = 1;
    };
};
