const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qurl_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qurl.html
pub const qurl = struct {
    /// New constructs a new QUrl object.
    ///
    ///
    pub fn New() QtC.QUrl {
        return qtc.QUrl_new();
    }

    /// New2 constructs a new QUrl object.
    ///
    /// ``` copyVal: QtC.QUrl ```
    pub fn New2(copyVal: ?*anyopaque) QtC.QUrl {
        return qtc.QUrl_new2(@ptrCast(copyVal));
    }

    /// New3 constructs a new QUrl object.
    ///
    /// ``` url: []const u8 ```
    pub fn New3(url: []const u8) QtC.QUrl {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };

        return qtc.QUrl_new3(url_str);
    }

    /// New4 constructs a new QUrl object.
    ///
    /// ``` url: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn New4(url: []const u8, mode: i32) QtC.QUrl {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };

        return qtc.QUrl_new4(url_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator-eq)
    ///
    /// ``` self: QtC.QUrl, copyVal: QtC.QUrl ```
    pub fn OperatorAssign(self: ?*anyopaque, copyVal: ?*anyopaque) void {
        qtc.QUrl_OperatorAssign(@ptrCast(self), @ptrCast(copyVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#operator-eq)
    ///
    /// ``` self: QtC.QUrl, url: []const u8 ```
    pub fn OperatorAssign2(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.QUrl_OperatorAssign2(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#swap)
    ///
    /// ``` self: QtC.QUrl, other: QtC.QUrl ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUrl_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUrl)
    ///
    /// ``` self: QtC.QUrl, url: []const u8 ```
    pub fn SetUrl(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.QUrl_SetUrl(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#url)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toString)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toDisplayString)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn ToDisplayString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_ToDisplayString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.ToDisplayString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toEncoded)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn ToEncoded(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QUrl_ToEncoded(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToEncoded: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
    ///
    /// ``` input: []const u8 ```
    pub fn FromEncoded(input: []const u8) QtC.QUrl {
        return qtc.QUrl_FromEncoded(input.ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ``` userInput: []const u8 ```
    pub fn FromUserInput(userInput: []const u8) QtC.QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        return qtc.QUrl_FromUserInput(userInput_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isValid)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QUrl_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#errorString)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isEmpty)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QUrl_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#clear)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QUrl_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setScheme)
    ///
    /// ``` self: QtC.QUrl, scheme: []const u8 ```
    pub fn SetScheme(self: ?*anyopaque, scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QUrl_SetScheme(@ptrCast(self), scheme_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#scheme)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Scheme(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Scheme(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Scheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setAuthority)
    ///
    /// ``` self: QtC.QUrl, authority: []const u8 ```
    pub fn SetAuthority(self: ?*anyopaque, authority: []const u8) void {
        const authority_str = qtc.libqt_string{
            .len = authority.len,
            .data = authority.ptr,
        };
        qtc.QUrl_SetAuthority(@ptrCast(self), authority_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#authority)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Authority(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Authority(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Authority: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
    ///
    /// ``` self: QtC.QUrl, userInfo: []const u8 ```
    pub fn SetUserInfo(self: ?*anyopaque, userInfo: []const u8) void {
        const userInfo_str = qtc.libqt_string{
            .len = userInfo.len,
            .data = userInfo.ptr,
        };
        qtc.QUrl_SetUserInfo(@ptrCast(self), userInfo_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userInfo)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn UserInfo(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_UserInfo(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.UserInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserName)
    ///
    /// ``` self: QtC.QUrl, userName: []const u8 ```
    pub fn SetUserName(self: ?*anyopaque, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.QUrl_SetUserName(@ptrCast(self), userName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userName)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn UserName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_UserName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPassword)
    ///
    /// ``` self: QtC.QUrl, password: []const u8 ```
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QUrl_SetPassword(@ptrCast(self), password_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#password)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Password(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Password(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setHost)
    ///
    /// ``` self: QtC.QUrl, host: []const u8 ```
    pub fn SetHost(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QUrl_SetHost(@ptrCast(self), host_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#host)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Host(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Host(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPort)
    ///
    /// ``` self: QtC.QUrl, port: i32 ```
    pub fn SetPort(self: ?*anyopaque, port: i32) void {
        qtc.QUrl_SetPort(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#port)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn Port(self: ?*anyopaque) i32 {
        return qtc.QUrl_Port(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPath)
    ///
    /// ``` self: QtC.QUrl, path: []const u8 ```
    pub fn SetPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QUrl_SetPath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#path)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fileName)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#hasQuery)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn HasQuery(self: ?*anyopaque) bool {
        return qtc.QUrl_HasQuery(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ``` self: QtC.QUrl, query: []const u8 ```
    pub fn SetQuery(self: ?*anyopaque, query: []const u8) void {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        qtc.QUrl_SetQuery(@ptrCast(self), query_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ``` self: QtC.QUrl, query: QtC.QUrlQuery ```
    pub fn SetQuery2(self: ?*anyopaque, query: ?*anyopaque) void {
        qtc.QUrl_SetQuery2(@ptrCast(self), @ptrCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#query)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Query(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Query(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Query: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#hasFragment)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn HasFragment(self: ?*anyopaque) bool {
        return qtc.QUrl_HasFragment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fragment)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn Fragment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Fragment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Fragment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setFragment)
    ///
    /// ``` self: QtC.QUrl, fragment: []const u8 ```
    pub fn SetFragment(self: ?*anyopaque, fragment: []const u8) void {
        const fragment_str = qtc.libqt_string{
            .len = fragment.len,
            .data = fragment.ptr,
        };
        qtc.QUrl_SetFragment(@ptrCast(self), fragment_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#resolved)
    ///
    /// ``` self: QtC.QUrl, relative: QtC.QUrl ```
    pub fn Resolved(self: ?*anyopaque, relative: ?*anyopaque) QtC.QUrl {
        return qtc.QUrl_Resolved(@ptrCast(self), @ptrCast(relative));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isRelative)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn IsRelative(self: ?*anyopaque) bool {
        return qtc.QUrl_IsRelative(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isParentOf)
    ///
    /// ``` self: QtC.QUrl, url: QtC.QUrl ```
    pub fn IsParentOf(self: ?*anyopaque, url: ?*anyopaque) bool {
        return qtc.QUrl_IsParentOf(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isLocalFile)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn IsLocalFile(self: ?*anyopaque) bool {
        return qtc.QUrl_IsLocalFile(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromLocalFile)
    ///
    /// ``` localfile: []const u8 ```
    pub fn FromLocalFile(localfile: []const u8) QtC.QUrl {
        const localfile_str = qtc.libqt_string{
            .len = localfile.len,
            .data = localfile.ptr,
        };
        return qtc.QUrl_FromLocalFile(localfile_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toLocalFile)
    ///
    /// ``` self: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn ToLocalFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_ToLocalFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.ToLocalFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#detach)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QUrl_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#isDetached)
    ///
    /// ``` self: QtC.QUrl ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QUrl_IsDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromPercentEncoding)
    ///
    /// ``` param1: []u8, allocator: std.mem.Allocator ```
    pub fn FromPercentEncoding(param1: []u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.QUrl_FromPercentEncoding(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FromPercentEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn ToPercentEncoding(param1: []const u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToPercentEncoding: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromAce)
    ///
    /// ``` domain: []u8, allocator: std.mem.Allocator ```
    pub fn FromAce(domain: []u8, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const _str = qtc.QUrl_FromAce(domain_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FromAce: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toAce)
    ///
    /// ``` domain: []const u8, allocator: std.mem.Allocator ```
    pub fn ToAce(domain: []const u8, allocator: std.mem.Allocator) []u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QUrl_ToAce(domain_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToAce: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#idnWhitelist)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn IdnWhitelist(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QUrl_IdnWhitelist();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toStringList)
    ///
    /// ``` uris: []QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn ToStringList(uris: []QtC.QUrl, allocator: std.mem.Allocator) [][]const u8 {
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = @ptrCast(uris.ptr),
        };
        const _arr: qtc.libqt_list = qtc.QUrl_ToStringList(uris_list);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromStringList)
    ///
    /// ``` uris: [][]const u8, allocator: std.mem.Allocator ```
    pub fn FromStringList(uris: [][]const u8, allocator: std.mem.Allocator) []QtC.QUrl {
        var uris_arr = allocator.alloc(qtc.libqt_string, uris.len) catch @panic("qurl.FromStringList: Memory allocation failed");
        defer allocator.free(uris_arr);
        for (uris, 0..uris.len) |item, i| {
            uris_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = uris_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrl_FromStringList(uris_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("qurl.FromStringList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setIdnWhitelist)
    ///
    /// ``` idnWhitelist: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetIdnWhitelist(idnWhitelist: [][]const u8, allocator: std.mem.Allocator) void {
        var idnWhitelist_arr = allocator.alloc(qtc.libqt_string, idnWhitelist.len) catch @panic("qurl.SetIdnWhitelist: Memory allocation failed");
        defer allocator.free(idnWhitelist_arr);
        for (idnWhitelist, 0..idnWhitelist.len) |item, i| {
            idnWhitelist_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const idnWhitelist_list = qtc.libqt_list{
            .len = idnWhitelist.len,
            .data = idnWhitelist_arr.ptr,
        };
        qtc.QUrl_SetIdnWhitelist(idnWhitelist_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUrl)
    ///
    /// ``` self: QtC.QUrl, url: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetUrl2(self: ?*anyopaque, url: []const u8, mode: i32) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.QUrl_SetUrl2(@ptrCast(self), url_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
    ///
    /// ``` input: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn FromEncoded2(input: []const u8, mode: i32) QtC.QUrl {
        return qtc.QUrl_FromEncoded2(input.ptr, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ``` userInput: []const u8, workingDirectory: []const u8 ```
    pub fn FromUserInput2(userInput: []const u8, workingDirectory: []const u8) QtC.QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return qtc.QUrl_FromUserInput2(userInput_str, workingDirectory_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ``` userInput: []const u8, workingDirectory: []const u8, options: flag of qurl_enums.UserInputResolutionOption ```
    pub fn FromUserInput3(userInput: []const u8, workingDirectory: []const u8, options: i64) QtC.QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return qtc.QUrl_FromUserInput3(userInput_str, workingDirectory_str, @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setAuthority)
    ///
    /// ``` self: QtC.QUrl, authority: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetAuthority2(self: ?*anyopaque, authority: []const u8, mode: i32) void {
        const authority_str = qtc.libqt_string{
            .len = authority.len,
            .data = authority.ptr,
        };
        qtc.QUrl_SetAuthority2(@ptrCast(self), authority_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#authority)
    ///
    /// ``` self: QtC.QUrl, options: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn Authority1(self: ?*anyopaque, options: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Authority1(@ptrCast(self), @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Authority1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
    ///
    /// ``` self: QtC.QUrl, userInfo: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetUserInfo2(self: ?*anyopaque, userInfo: []const u8, mode: i32) void {
        const userInfo_str = qtc.libqt_string{
            .len = userInfo.len,
            .data = userInfo.ptr,
        };
        qtc.QUrl_SetUserInfo2(@ptrCast(self), userInfo_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userInfo)
    ///
    /// ``` self: QtC.QUrl, options: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn UserInfo1(self: ?*anyopaque, options: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_UserInfo1(@ptrCast(self), @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.UserInfo1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setUserName)
    ///
    /// ``` self: QtC.QUrl, userName: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetUserName2(self: ?*anyopaque, userName: []const u8, mode: i32) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.QUrl_SetUserName2(@ptrCast(self), userName_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#userName)
    ///
    /// ``` self: QtC.QUrl, options: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn UserName1(self: ?*anyopaque, options: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_UserName1(@ptrCast(self), @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.UserName1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPassword)
    ///
    /// ``` self: QtC.QUrl, password: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetPassword2(self: ?*anyopaque, password: []const u8, mode: i32) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QUrl_SetPassword2(@ptrCast(self), password_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#password)
    ///
    /// ``` self: QtC.QUrl, param1: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn Password1(self: ?*anyopaque, param1: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Password1(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Password1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setHost)
    ///
    /// ``` self: QtC.QUrl, host: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetHost2(self: ?*anyopaque, host: []const u8, mode: i32) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.QUrl_SetHost2(@ptrCast(self), host_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#host)
    ///
    /// ``` self: QtC.QUrl, param1: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn Host1(self: ?*anyopaque, param1: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Host1(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Host1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#port)
    ///
    /// ``` self: QtC.QUrl, defaultPort: i32 ```
    pub fn Port1(self: ?*anyopaque, defaultPort: i32) i32 {
        return qtc.QUrl_Port1(@ptrCast(self), @intCast(defaultPort));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setPath)
    ///
    /// ``` self: QtC.QUrl, path: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetPath2(self: ?*anyopaque, path: []const u8, mode: i32) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QUrl_SetPath2(@ptrCast(self), path_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#path)
    ///
    /// ``` self: QtC.QUrl, options: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn Path1(self: ?*anyopaque, options: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Path1(@ptrCast(self), @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Path1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fileName)
    ///
    /// ``` self: QtC.QUrl, options: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn FileName1(self: ?*anyopaque, options: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_FileName1(@ptrCast(self), @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FileName1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ``` self: QtC.QUrl, query: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetQuery22(self: ?*anyopaque, query: []const u8, mode: i32) void {
        const query_str = qtc.libqt_string{
            .len = query.len,
            .data = query.ptr,
        };
        qtc.QUrl_SetQuery22(@ptrCast(self), query_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#query)
    ///
    /// ``` self: QtC.QUrl, param1: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn Query1(self: ?*anyopaque, param1: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Query1(@ptrCast(self), @intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Query1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fragment)
    ///
    /// ``` self: QtC.QUrl, options: flag of qurl_enums.ComponentFormattingOption, allocator: std.mem.Allocator ```
    pub fn Fragment1(self: ?*anyopaque, options: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QUrl_Fragment1(@ptrCast(self), @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.Fragment1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#setFragment)
    ///
    /// ``` self: QtC.QUrl, fragment: []const u8, mode: qurl_enums.ParsingMode ```
    pub fn SetFragment2(self: ?*anyopaque, fragment: []const u8, mode: i32) void {
        const fragment_str = qtc.libqt_string{
            .len = fragment.len,
            .data = fragment.ptr,
        };
        qtc.QUrl_SetFragment2(@ptrCast(self), fragment_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ``` param1: []const u8, exclude: []u8, allocator: std.mem.Allocator ```
    pub fn ToPercentEncoding2(param1: []const u8, exclude: []u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const exclude_str = qtc.libqt_string{
            .len = exclude.len,
            .data = exclude.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding2(param1_str, exclude_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToPercentEncoding2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ``` param1: []const u8, exclude: []u8, include: []u8, allocator: std.mem.Allocator ```
    pub fn ToPercentEncoding3(param1: []const u8, exclude: []u8, include: []u8, allocator: std.mem.Allocator) []u8 {
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
        const _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding3(param1_str, exclude_str, include_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToPercentEncoding3: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromAce)
    ///
    /// ``` domain: []u8, options: flag of qurl_enums.AceProcessingOption, allocator: std.mem.Allocator ```
    pub fn FromAce2(domain: []u8, options: i64, allocator: std.mem.Allocator) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const _str = qtc.QUrl_FromAce2(domain_str, @intCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qurl.FromAce2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#toAce)
    ///
    /// ``` domain: []const u8, options: flag of qurl_enums.AceProcessingOption, allocator: std.mem.Allocator ```
    pub fn ToAce2(domain: []const u8, options: i64, allocator: std.mem.Allocator) []u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QUrl_ToAce2(domain_str, @intCast(options));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qurl.ToAce2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#fromStringList)
    ///
    /// ``` uris: [][]const u8, mode: qurl_enums.ParsingMode, allocator: std.mem.Allocator ```
    pub fn FromStringList2(uris: [][]const u8, mode: i32, allocator: std.mem.Allocator) []QtC.QUrl {
        var uris_arr = allocator.alloc(qtc.libqt_string, uris.len) catch @panic("qurl.FromStringList2: Memory allocation failed");
        defer allocator.free(uris_arr);
        for (uris, 0..uris.len) |item, i| {
            uris_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = uris_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrl_FromStringList2(uris_list, @intCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("qurl.FromStringList2: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qurl.html#dtor.QUrl)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QUrl ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUrl_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qurl.html#types
pub const enums = struct {
    pub const ParsingMode = enum {
        pub const TolerantMode: i32 = 0;
        pub const StrictMode: i32 = 1;
        pub const DecodedMode: i32 = 2;
    };

    pub const UrlFormattingOption = enum {
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

    pub const ComponentFormattingOption = enum {
        pub const PrettyDecoded: u32 = 0;
        pub const EncodeSpaces: u32 = 1048576;
        pub const EncodeUnicode: u32 = 2097152;
        pub const EncodeDelimiters: u32 = 12582912;
        pub const EncodeReserved: u32 = 16777216;
        pub const DecodeReserved: u32 = 33554432;
        pub const FullyEncoded: u32 = 32505856;
        pub const FullyDecoded: u32 = 133169152;
    };

    pub const UserInputResolutionOption = enum {
        pub const DefaultResolution: i32 = 0;
        pub const AssumeLocalFile: i32 = 1;
    };

    pub const AceProcessingOption = enum {
        pub const IgnoreIDNWhitelist: u32 = 1;
        pub const AceTransitionalProcessing: u32 = 2;
    };
};
