const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrlQuery = @import("libqt6").QUrlQuery;
const qurl_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html)
pub const QUrl = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUrl,

    pub const _is_QUrl = {};

    /// New constructs a new QUrl object.
    ///
    pub fn New() QUrl {
        return .{ .ptr = qtc.QUrl_new() };
    }

    /// New2 constructs a new QUrl object.
    ///
    /// ## Parameter(s):
    ///
    /// ` copyVal: QUrl `
    ///
    pub fn New2(copyVal: anytype) QUrl {
        comptime _ = @TypeOf(copyVal)._is_QUrl;
        return .{ .ptr = qtc.QUrl_new2(@ptrCast(copyVal.ptr)) };
    }

    /// New3 constructs a new QUrl object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    pub fn New3(url: []const u8) QUrl {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        return .{ .ptr = qtc.QUrl_new3(url_str) };
    }

    /// New4 constructs a new QUrl object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn New4(url: []const u8, mode: i32) QUrl {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        return .{ .ptr = qtc.QUrl_new4(url_str, @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` copyVal: QUrl `
    ///
    pub fn OperatorAssign(self: QUrl, copyVal: anytype) void {
        comptime _ = @TypeOf(copyVal)._is_QUrl;
        qtc.QUrl_OperatorAssign(@ptrCast(self.ptr), @ptrCast(copyVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` url: []const u8 `
    ///
    pub fn OperatorAssign2(self: QUrl, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.QUrl_OperatorAssign2(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` other: QUrl `
    ///
    pub fn Swap(self: QUrl, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QUrl;
        qtc.QUrl_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetUrl(self: QUrl, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.QUrl_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toDisplayString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToDisplayString(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_ToDisplayString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.ToDisplayString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToEncoded(self: QUrl, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToEncoded(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToEncoded: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` input: []u8 `
    ///
    pub fn FromEncoded(input: []u8) QUrl {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromEncoded(input_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` userInput: []const u8 `
    ///
    pub fn FromUserInput(userInput: []const u8) QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromUserInput(userInput_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn IsValid(self: QUrl) bool {
        return qtc.QUrl_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn IsEmpty(self: QUrl) bool {
        return qtc.QUrl_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn Clear(self: QUrl) void {
        qtc.QUrl_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` scheme: []const u8 `
    ///
    pub fn SetScheme(self: QUrl, scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QUrl_SetScheme(@ptrCast(self.ptr), scheme_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#scheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Scheme(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Scheme(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Scheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setAuthority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` authority: []const u8 `
    ///
    pub fn SetAuthority(self: QUrl, authority: []const u8) void {
        const authority_str = qtc.libqt_string{
            .len = authority.len,
            .data = authority.ptr,
        };
        qtc.QUrl_SetAuthority(@ptrCast(self.ptr), authority_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#authority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Authority(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Authority(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Authority: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` userInfo: []const u8 `
    ///
    pub fn SetUserInfo(self: QUrl, userInfo: []const u8) void {
        const userInfo_str = qtc.libqt_string{
            .len = userInfo.len,
            .data = userInfo.ptr,
        };
        qtc.QUrl_SetUserInfo(@ptrCast(self.ptr), userInfo_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserInfo(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_UserInfo(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.UserInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` userName: []const u8 `
    ///
    pub fn SetUserName(self: QUrl, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.QUrl_SetUserName(@ptrCast(self.ptr), userName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserName(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: QUrl, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QUrl_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` host: []const u8 `
    ///
    pub fn SetHost(self: QUrl, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QUrl_SetHost(@ptrCast(self.ptr), host_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Host(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Host(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` port: i32 `
    ///
    pub fn SetPort(self: QUrl, port: i32) void {
        qtc.QUrl_SetPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn Port(self: QUrl) i32 {
        return qtc.QUrl_Port(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPath(self: QUrl, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QUrl_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#hasQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn HasQuery(self: QUrl) bool {
        return qtc.QUrl_HasQuery(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` query: []const u8 `
    ///
    pub fn SetQuery(self: QUrl, query: []const u8) void {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        qtc.QUrl_SetQuery(@ptrCast(self.ptr), query_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` query: QUrlQuery `
    ///
    pub fn SetQuery2(self: QUrl, query: anytype) void {
        comptime _ = @TypeOf(query)._is_QUrlQuery;
        qtc.QUrl_SetQuery2(@ptrCast(self.ptr), @ptrCast(query.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#query)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Query(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Query(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Query: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#hasFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn HasFragment(self: QUrl) bool {
        return qtc.QUrl_HasFragment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Fragment(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Fragment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Fragment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` fragment: []const u8 `
    ///
    pub fn SetFragment(self: QUrl, fragment: []const u8) void {
        const fragment_str = qtc.libqt_string{
            .len = fragment.len,
            .data = fragment.ptr,
        };
        qtc.QUrl_SetFragment(@ptrCast(self.ptr), fragment_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#resolved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` relative: QUrl `
    ///
    pub fn Resolved(self: QUrl, relative: anytype) QUrl {
        comptime _ = @TypeOf(relative)._is_QUrl;
        return .{ .ptr = qtc.QUrl_Resolved(@ptrCast(self.ptr), @ptrCast(relative.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn IsRelative(self: QUrl) bool {
        return qtc.QUrl_IsRelative(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isParentOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` url: QUrl `
    ///
    pub fn IsParentOf(self: QUrl, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QUrl_IsParentOf(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn IsLocalFile(self: QUrl) bool {
        return qtc.QUrl_IsLocalFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` localfile: []const u8 `
    ///
    pub fn FromLocalFile(localfile: []const u8) QUrl {
        const localfile_str = qtc.libqt_string{
            .len = localfile.len,
            .data = localfile.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromLocalFile(localfile_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToLocalFile(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_ToLocalFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.ToLocalFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn Detach(self: QUrl) void {
        qtc.QUrl_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn IsDetached(self: QUrl) bool {
        return qtc.QUrl_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []u8 `
    ///
    pub fn FromPercentEncoding(allocator: std.mem.Allocator, param1: []u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.QUrl_FromPercentEncoding(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FromPercentEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn ToPercentEncoding(allocator: std.mem.Allocator, param1: []const u8) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToPercentEncoding: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromAce)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []u8 `
    ///
    pub fn FromAce(allocator: std.mem.Allocator, domain: []u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        var _str = qtc.QUrl_FromAce(domain_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FromAce: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toAce)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    pub fn ToAce(allocator: std.mem.Allocator, domain: []const u8) []u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToAce(domain_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToAce: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#idnWhitelist)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IdnWhitelist(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QUrl_IdnWhitelist();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qurl.IdnWhitelist: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qurl.IdnWhitelist: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uris: []QUrl `
    ///
    pub fn ToStringList(allocator: std.mem.Allocator, uris: []QUrl) []const []const u8 {
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = @ptrCast(uris.ptr),
        };
        const _arr: qtc.libqt_list = qtc.QUrl_ToStringList(uris_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qurl.ToStringList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qurl.ToStringList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uris: []const []const u8 `
    ///
    pub fn FromStringList(allocator: std.mem.Allocator, uris: []const []const u8) []QUrl {
        const uris_arr = allocator.alloc(qtc.libqt_string, uris.len) catch @panic("qurl.FromStringList: Memory allocation failed");
        defer allocator.free(uris_arr);
        for (uris, 0..uris.len) |item, i|
            uris_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = uris_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrl_FromStringList(uris_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qurl.FromStringList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setIdnWhitelist)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` idnWhitelist: []const []const u8 `
    ///
    pub fn SetIdnWhitelist(allocator: std.mem.Allocator, idnWhitelist: []const []const u8) void {
        const idnWhitelist_arr = allocator.alloc(qtc.libqt_string, idnWhitelist.len) catch @panic("qurl.SetIdnWhitelist: Memory allocation failed");
        defer allocator.free(idnWhitelist_arr);
        for (idnWhitelist, 0..idnWhitelist.len) |item, i|
            idnWhitelist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const idnWhitelist_list = qtc.libqt_list{
            .len = idnWhitelist.len,
            .data = idnWhitelist_arr.ptr,
        };
        qtc.QUrl_SetIdnWhitelist(idnWhitelist_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` url: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetUrl2(self: QUrl, url: []const u8, mode: i32) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.QUrl_SetUrl2(@ptrCast(self.ptr), url_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` input: []u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn FromEncoded2(input: []u8, mode: i32) QUrl {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromEncoded2(input_str, @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` userInput: []const u8 `
    ///
    /// ` workingDirectory: []const u8 `
    ///
    pub fn FromUserInput2(userInput: []const u8, workingDirectory: []const u8) QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromUserInput2(userInput_str, workingDirectory_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` userInput: []const u8 `
    ///
    /// ` workingDirectory: []const u8 `
    ///
    /// ` options: flag of qurl_enums.UserInputResolutionOption `
    ///
    pub fn FromUserInput3(userInput: []const u8, workingDirectory: []const u8, options: i32) QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromUserInput3(userInput_str, workingDirectory_str, @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setAuthority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` authority: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetAuthority2(self: QUrl, authority: []const u8, mode: i32) void {
        const authority_str = qtc.libqt_string{
            .len = authority.len,
            .data = authority.ptr,
        };
        qtc.QUrl_SetAuthority2(@ptrCast(self.ptr), authority_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#authority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn Authority1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_Authority1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Authority1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` userInfo: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetUserInfo2(self: QUrl, userInfo: []const u8, mode: i32) void {
        const userInfo_str = qtc.libqt_string{
            .len = userInfo.len,
            .data = userInfo.ptr,
        };
        qtc.QUrl_SetUserInfo2(@ptrCast(self.ptr), userInfo_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn UserInfo1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_UserInfo1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.UserInfo1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` userName: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetUserName2(self: QUrl, userName: []const u8, mode: i32) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.QUrl_SetUserName2(@ptrCast(self.ptr), userName_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn UserName1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_UserName1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.UserName1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` password: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetPassword2(self: QUrl, password: []const u8, mode: i32) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QUrl_SetPassword2(@ptrCast(self.ptr), password_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn Password1(self: QUrl, allocator: std.mem.Allocator, param1: u32) []const u8 {
        var _str = qtc.QUrl_Password1(@ptrCast(self.ptr), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Password1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` host: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetHost2(self: QUrl, host: []const u8, mode: i32) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QUrl_SetHost2(@ptrCast(self.ptr), host_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn Host1(self: QUrl, allocator: std.mem.Allocator, param1: u32) []const u8 {
        var _str = qtc.QUrl_Host1(@ptrCast(self.ptr), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Host1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` defaultPort: i32 `
    ///
    pub fn Port1(self: QUrl, defaultPort: i32) i32 {
        return qtc.QUrl_Port1(@ptrCast(self.ptr), @bitCast(defaultPort));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` path: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetPath2(self: QUrl, path: []const u8, mode: i32) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QUrl_SetPath2(@ptrCast(self.ptr), path_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn Path1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_Path1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Path1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn FileName1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_FileName1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FileName1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` query: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetQuery22(self: QUrl, query: []const u8, mode: i32) void {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        qtc.QUrl_SetQuery22(@ptrCast(self.ptr), query_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#query)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn Query1(self: QUrl, allocator: std.mem.Allocator, param1: u32) []const u8 {
        var _str = qtc.QUrl_Query1(@ptrCast(self.ptr), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Query1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn Fragment1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_Fragment1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Fragment1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` fragment: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn SetFragment2(self: QUrl, fragment: []const u8, mode: i32) void {
        const fragment_str = qtc.libqt_string{
            .len = fragment.len,
            .data = fragment.ptr,
        };
        qtc.QUrl_SetFragment2(@ptrCast(self.ptr), fragment_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` exclude: []u8 `
    ///
    pub fn ToPercentEncoding2(allocator: std.mem.Allocator, param1: []const u8, exclude: []u8) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const exclude_str = qtc.libqt_string{
            .len = exclude.len,
            .data = exclude.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding2(param1_str, exclude_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToPercentEncoding2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` exclude: []u8 `
    ///
    /// ` include: []u8 `
    ///
    pub fn ToPercentEncoding3(allocator: std.mem.Allocator, param1: []const u8, exclude: []u8, include: []u8) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const exclude_str = qtc.libqt_string{
            .len = exclude.len,
            .data = exclude.ptr,
        };
        const include_str = qtc.libqt_string{
            .len = include.len,
            .data = include.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding3(param1_str, exclude_str, include_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToPercentEncoding3: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromAce)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []u8 `
    ///
    /// ` options: flag of qurl_enums.AceProcessingOption `
    ///
    pub fn FromAce2(allocator: std.mem.Allocator, domain: []u8, options: u32) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        var _str = qtc.QUrl_FromAce2(domain_str, @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FromAce2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toAce)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` options: flag of qurl_enums.AceProcessingOption `
    ///
    pub fn ToAce2(allocator: std.mem.Allocator, domain: []const u8, options: u32) []u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToAce2(domain_str, @bitCast(options));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToAce2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uris: []const []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn FromStringList2(allocator: std.mem.Allocator, uris: []const []const u8, mode: i32) []QUrl {
        const uris_arr = allocator.alloc(qtc.libqt_string, uris.len) catch @panic("qurl.FromStringList2: Memory allocation failed");
        defer allocator.free(uris_arr);
        for (uris, 0..uris.len) |item, i|
            uris_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = uris_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrl_FromStringList2(uris_list, @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("qurl.FromStringList2: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#dtor.QUrl)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUrl `
    ///
    pub fn Delete(self: QUrl) void {
        qtc.QUrl_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#public-types)
pub const enums = struct {
    pub const ParsingMode = enum(i32) {
        pub const TolerantMode: i32 = 0;
        pub const StrictMode: i32 = 1;
        pub const DecodedMode: i32 = 2;
    };

    pub const UrlFormattingOption = enum(u32) {
        pub const None: u32 = 0;
        pub const RemoveScheme: u32 = 1;
        pub const RemovePassword: u32 = 2;
        pub const RemoveUserInfo: u32 = 6;
        pub const RemovePort: u32 = 8;
        pub const RemoveAuthority: u32 = 30;
        pub const RemovePath: u32 = 32;
        pub const RemoveQuery: u32 = 64;
        pub const RemoveFragment: u32 = 128;
        pub const PreferLocalFile: u32 = 512;
        pub const StripTrailingSlash: u32 = 1024;
        pub const RemoveFilename: u32 = 2048;
        pub const NormalizePathSegments: u32 = 4096;
    };

    pub const ComponentFormattingOption = enum(u32) {
        pub const PrettyDecoded: u32 = 0;
        pub const EncodeSpaces: u32 = 1048576;
        pub const EncodeUnicode: u32 = 2097152;
        pub const EncodeDelimiters: u32 = 12582912;
        pub const EncodeReserved: u32 = 16777216;
        pub const DecodeReserved: u32 = 33554432;
        pub const FullyEncoded: u32 = 32505856;
        pub const FullyDecoded: u32 = 133169152;
    };

    pub const UserInputResolutionOption = enum(i32) {
        pub const DefaultResolution: i32 = 0;
        pub const AssumeLocalFile: i32 = 1;
    };

    pub const AceProcessingOption = enum(u32) {
        pub const IgnoreIDNWhitelist: u32 = 1;
        pub const AceTransitionalProcessing: u32 = 2;
    };
};
