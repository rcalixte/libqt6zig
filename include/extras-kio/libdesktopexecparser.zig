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

    /// New constructs a new KIO::DesktopExecParser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: KService `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn New(service: anytype, urls: []QUrl) KIO__DesktopExecParser {
        comptime _ = @TypeOf(service)._is_KService;
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        return .{ .ptr = qtc.KIO__DesktopExecParser_new(@ptrCast(service.ptr), urls_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#setUrlsAreTempFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    /// ` tempFiles: bool `
    ///
    pub fn SetUrlsAreTempFiles(self: KIO__DesktopExecParser, tempFiles: bool) void {
        qtc.KIO__DesktopExecParser_SetUrlsAreTempFiles(@ptrCast(self.ptr), tempFiles);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#setSuggestedFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    /// ` suggestedFileName: []const u8 `
    ///
    pub fn SetSuggestedFileName(self: KIO__DesktopExecParser, suggestedFileName: []const u8) void {
        const suggestedFileName_str = qtc.libqt_string{
            .len = suggestedFileName.len,
            .data = suggestedFileName.ptr,
        };
        qtc.KIO__DesktopExecParser_SetSuggestedFileName(@ptrCast(self.ptr), suggestedFileName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#resultingArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResultingArguments(self: KIO__DesktopExecParser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__DesktopExecParser_ResultingArguments(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio__desktopexecparser.ResultingArguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__desktopexecparser.ResultingArguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#errorMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorMessage(self: KIO__DesktopExecParser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__DesktopExecParser_ErrorMessage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__desktopexecparser.ErrorMessage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#supportedProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` service: KService `
    ///
    pub fn SupportedProtocols(allocator: std.mem.Allocator, service: anytype) []const []const u8 {
        comptime _ = @TypeOf(service)._is_KService;
        const _arr: qtc.libqt_list = qtc.KIO__DesktopExecParser_SupportedProtocols(@ptrCast(service.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio__desktopexecparser.SupportedProtocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__desktopexecparser.SupportedProtocols: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#isProtocolInSupportedList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    /// ` supportedProtocols: []const []const u8 `
    ///
    pub fn IsProtocolInSupportedList(allocator: std.mem.Allocator, url: anytype, supportedProtocols: []const []const u8) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        const supportedProtocols_arr = allocator.alloc(qtc.libqt_string, supportedProtocols.len) catch @panic("kio__desktopexecparser.IsProtocolInSupportedList: Memory allocation failed");
        defer allocator.free(supportedProtocols_arr);
        for (supportedProtocols, 0..supportedProtocols.len) |item, i|
            supportedProtocols_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const supportedProtocols_list = qtc.libqt_list{
            .len = supportedProtocols.len,
            .data = supportedProtocols_arr.ptr,
        };
        return qtc.KIO__DesktopExecParser_IsProtocolInSupportedList(@ptrCast(url.ptr), supportedProtocols_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#hasSchemeHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn HasSchemeHandler(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KIO__DesktopExecParser_HasSchemeHandler(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#executableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` execLine: []const u8 `
    ///
    pub fn ExecutableName(allocator: std.mem.Allocator, execLine: []const u8) []const u8 {
        const execLine_str = qtc.libqt_string{
            .len = execLine.len,
            .data = execLine.ptr,
        };
        var _str = qtc.KIO__DesktopExecParser_ExecutableName(execLine_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__desktopexecparser.ExecutableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-desktopexecparser.html#executablePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` execLine: []const u8 `
    ///
    pub fn ExecutablePath(allocator: std.mem.Allocator, execLine: []const u8) []const u8 {
        const execLine_str = qtc.libqt_string{
            .len = execLine.len,
            .data = execLine.ptr,
        };
        var _str = qtc.KIO__DesktopExecParser_ExecutablePath(execLine_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__desktopexecparser.ExecutablePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__DesktopExecParser `
    ///
    pub fn Delete(self: KIO__DesktopExecParser) void {
        qtc.KIO__DesktopExecParser_Delete(@ptrCast(self.ptr));
    }
};
