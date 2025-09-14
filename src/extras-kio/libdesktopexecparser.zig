const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kio-desktopexecparser.html
pub const kio__desktopexecparser = struct {
    /// New constructs a new KIO::DesktopExecParser object.
    ///
    /// ``` service: QtC.KService, urls: []QtC.QUrl ```
    pub fn New(service: ?*anyopaque, urls: []QtC.QUrl) QtC.KIO__DesktopExecParser {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };

        return qtc.KIO__DesktopExecParser_new(@ptrCast(service), urls_list);
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#setUrlsAreTempFiles)
    ///
    /// ``` self: QtC.KIO__DesktopExecParser, tempFiles: bool ```
    pub fn SetUrlsAreTempFiles(self: ?*anyopaque, tempFiles: bool) void {
        qtc.KIO__DesktopExecParser_SetUrlsAreTempFiles(@ptrCast(self), tempFiles);
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#setSuggestedFileName)
    ///
    /// ``` self: QtC.KIO__DesktopExecParser, suggestedFileName: []const u8 ```
    pub fn SetSuggestedFileName(self: ?*anyopaque, suggestedFileName: []const u8) void {
        const suggestedFileName_str = qtc.libqt_string{
            .len = suggestedFileName.len,
            .data = suggestedFileName.ptr,
        };
        qtc.KIO__DesktopExecParser_SetSuggestedFileName(@ptrCast(self), suggestedFileName_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#resultingArguments)
    ///
    /// ``` self: QtC.KIO__DesktopExecParser, allocator: std.mem.Allocator ```
    pub fn ResultingArguments(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__DesktopExecParser_ResultingArguments(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio::desktopexecparser.ResultingArguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::desktopexecparser.ResultingArguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#errorMessage)
    ///
    /// ``` self: QtC.KIO__DesktopExecParser, allocator: std.mem.Allocator ```
    pub fn ErrorMessage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KIO__DesktopExecParser_ErrorMessage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::desktopexecparser.ErrorMessage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#supportedProtocols)
    ///
    /// ``` service: QtC.KService, allocator: std.mem.Allocator ```
    pub fn SupportedProtocols(service: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__DesktopExecParser_SupportedProtocols(@ptrCast(service));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio::desktopexecparser.SupportedProtocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::desktopexecparser.SupportedProtocols: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#isProtocolInSupportedList)
    ///
    /// ``` url: QtC.QUrl, supportedProtocols: [][]const u8, allocator: std.mem.Allocator ```
    pub fn IsProtocolInSupportedList(url: ?*anyopaque, supportedProtocols: [][]const u8, allocator: std.mem.Allocator) bool {
        var supportedProtocols_arr = allocator.alloc(qtc.libqt_string, supportedProtocols.len) catch @panic("kio::desktopexecparser.IsProtocolInSupportedList: Memory allocation failed");
        defer allocator.free(supportedProtocols_arr);
        for (supportedProtocols, 0..supportedProtocols.len) |item, i| {
            supportedProtocols_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const supportedProtocols_list = qtc.libqt_list{
            .len = supportedProtocols.len,
            .data = supportedProtocols_arr.ptr,
        };
        return qtc.KIO__DesktopExecParser_IsProtocolInSupportedList(@ptrCast(url), supportedProtocols_list);
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#hasSchemeHandler)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn HasSchemeHandler(url: ?*anyopaque) bool {
        return qtc.KIO__DesktopExecParser_HasSchemeHandler(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#executableName)
    ///
    /// ``` execLine: []const u8, allocator: std.mem.Allocator ```
    pub fn ExecutableName(execLine: []const u8, allocator: std.mem.Allocator) []const u8 {
        const execLine_str = qtc.libqt_string{
            .len = execLine.len,
            .data = execLine.ptr,
        };
        const _str = qtc.KIO__DesktopExecParser_ExecutableName(execLine_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::desktopexecparser.ExecutableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-desktopexecparser.html#executablePath)
    ///
    /// ``` execLine: []const u8, allocator: std.mem.Allocator ```
    pub fn ExecutablePath(execLine: []const u8, allocator: std.mem.Allocator) []const u8 {
        const execLine_str = qtc.libqt_string{
            .len = execLine.len,
            .data = execLine.ptr,
        };
        const _str = qtc.KIO__DesktopExecParser_ExecutablePath(execLine_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::desktopexecparser.ExecutablePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__DesktopExecParser ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__DesktopExecParser_Delete(@ptrCast(self));
    }
};
