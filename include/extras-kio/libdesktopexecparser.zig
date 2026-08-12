const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KService = @import("libqt6").KService;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html)
pub const KIO__DesktopExecParser = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__DesktopExecParser,

    pub const _is_KIO__DesktopExecParser = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::DesktopExecParser object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` service: KService `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn new(service: anytype, urls: []QUrl) KIO__DesktopExecParser {
        comptime _ = @TypeOf(service)._is_KService;
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        return .{ .ptr = qtc.KIO__DesktopExecParser_new(@ptrCast(service.ptr), urls_list) };
    }

    /// ### DEPRECATED: Use `setUrlsAreTempFiles` instead
    ///
    pub const SetUrlsAreTempFiles = setUrlsAreTempFiles;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#setUrlsAreTempFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    /// ` tempFiles: bool `
    ///
    pub fn setUrlsAreTempFiles(self: KIO__DesktopExecParser, tempFiles: bool) void {
        qtc.KIO__DesktopExecParser_SetUrlsAreTempFiles(@ptrCast(self.ptr), tempFiles);
    }

    /// ### DEPRECATED: Use `setSuggestedFileName` instead
    ///
    pub const SetSuggestedFileName = setSuggestedFileName;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#setSuggestedFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    /// ` suggestedFileName: []const u8 `
    ///
    pub fn setSuggestedFileName(self: KIO__DesktopExecParser, suggestedFileName: []const u8) void {
        const suggestedFileName_str = qtc.libqt_string{
            .len = suggestedFileName.len,
            .data = suggestedFileName.ptr,
        };
        qtc.KIO__DesktopExecParser_SetSuggestedFileName(@ptrCast(self.ptr), suggestedFileName_str);
    }

    /// ### DEPRECATED: Use `resultingArguments` instead
    ///
    pub const ResultingArguments = resultingArguments;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#resultingArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn resultingArguments(self: KIO__DesktopExecParser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__DesktopExecParser_ResultingArguments(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__DesktopExecParser.resultingArguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__DesktopExecParser.resultingArguments: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `errorMessage` instead
    ///
    pub const ErrorMessage = errorMessage;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#errorMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorMessage(self: KIO__DesktopExecParser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__DesktopExecParser_ErrorMessage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__DesktopExecParser.errorMessage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedProtocols` instead
    ///
    pub const SupportedProtocols = supportedProtocols;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#supportedProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` service: KService `
    ///
    pub fn supportedProtocols(allocator: std.mem.Allocator, service: anytype) []const []const u8 {
        comptime _ = @TypeOf(service)._is_KService;
        const _arr: qtc.libqt_list = qtc.KIO__DesktopExecParser_SupportedProtocols(@ptrCast(service.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__DesktopExecParser.supportedProtocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__DesktopExecParser.supportedProtocols: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isProtocolInSupportedList` instead
    ///
    pub const IsProtocolInSupportedList = isProtocolInSupportedList;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#isProtocolInSupportedList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    /// ` _supportedProtocols: []const []const u8 `
    ///
    pub fn isProtocolInSupportedList(allocator: std.mem.Allocator, url: anytype, _supportedProtocols: []const []const u8) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        const supportedProtocols_arr = allocator.alloc(qtc.libqt_string, _supportedProtocols.len) catch @panic("KIO__DesktopExecParser.isProtocolInSupportedList: Memory allocation failed");
        defer allocator.free(supportedProtocols_arr);
        for (_supportedProtocols, 0.._supportedProtocols.len) |str_item, i|
            supportedProtocols_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const supportedProtocols_list = qtc.libqt_list{
            .len = _supportedProtocols.len,
            .data = supportedProtocols_arr.ptr,
        };
        return qtc.KIO__DesktopExecParser_IsProtocolInSupportedList(@ptrCast(url.ptr), supportedProtocols_list);
    }

    /// ### DEPRECATED: Use `hasSchemeHandler` instead
    ///
    pub const HasSchemeHandler = hasSchemeHandler;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#hasSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn hasSchemeHandler(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KIO__DesktopExecParser_HasSchemeHandler(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `executableName` instead
    ///
    pub const ExecutableName = executableName;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#executableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` execLine: []const u8 `
    ///
    pub fn executableName(allocator: std.mem.Allocator, execLine: []const u8) []const u8 {
        const execLine_str = qtc.libqt_string{
            .len = execLine.len,
            .data = execLine.ptr,
        };
        var _str = qtc.KIO__DesktopExecParser_ExecutableName(execLine_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__DesktopExecParser.executableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `executablePath` instead
    ///
    pub const ExecutablePath = executablePath;

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#executablePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` execLine: []const u8 `
    ///
    pub fn executablePath(allocator: std.mem.Allocator, execLine: []const u8) []const u8 {
        const execLine_str = qtc.libqt_string{
            .len = execLine.len,
            .data = execLine.ptr,
        };
        var _str = qtc.KIO__DesktopExecParser_ExecutablePath(execLine_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__DesktopExecParser.executablePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    pub fn delete(self: KIO__DesktopExecParser) void {
        qtc.KIO__DesktopExecParser_Delete(@ptrCast(self.ptr));
    }
};
