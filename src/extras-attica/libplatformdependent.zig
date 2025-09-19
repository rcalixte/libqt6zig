const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-platformdependent.html
pub const attica__platformdependent = struct {
    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, allocator: std.mem.Allocator ```
    pub fn GetDefaultProviderFiles(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__PlatformDependent_GetDefaultProviderFiles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("attica::platformdependent.GetDefaultProviderFiles: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, url: QtC.QUrl ```
    pub fn AddDefaultProviderFile(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_AddDefaultProviderFile(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, url: QtC.QUrl ```
    pub fn RemoveDefaultProviderFile(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_RemoveDefaultProviderFile(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#enableProvider)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, baseUrl: QtC.QUrl, enabled: bool ```
    pub fn EnableProvider(self: ?*anyopaque, baseUrl: ?*anyopaque, enabled: bool) void {
        qtc.Attica__PlatformDependent_EnableProvider(@ptrCast(self), @ptrCast(baseUrl), enabled);
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#isEnabled)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, baseUrl: QtC.QUrl ```
    pub fn IsEnabled(self: ?*anyopaque, baseUrl: ?*anyopaque) bool {
        return qtc.Attica__PlatformDependent_IsEnabled(@ptrCast(self), @ptrCast(baseUrl));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#hasCredentials)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, baseUrl: QtC.QUrl ```
    pub fn HasCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque) bool {
        return qtc.Attica__PlatformDependent_HasCredentials(@ptrCast(self), @ptrCast(baseUrl));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#loadCredentials)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, baseUrl: QtC.QUrl, user: []const u8, password: []const u8 ```
    pub fn LoadCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_LoadCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#askForCredentials)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, baseUrl: QtC.QUrl, user: []const u8, password: []const u8 ```
    pub fn AskForCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_AskForCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#saveCredentials)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, baseUrl: QtC.QUrl, user: []const u8, password: []const u8 ```
    pub fn SaveCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_SaveCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#get)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, request: QtC.QNetworkRequest ```
    pub fn Get(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependent_Get(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, request: QtC.QNetworkRequest, data: QtC.QIODevice ```
    pub fn Post(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependent_Post(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, request: QtC.QNetworkRequest, data: []u8 ```
    pub fn Post2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.Attica__PlatformDependent_Post2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, nam: QtC.QNetworkAccessManager ```
    pub fn SetNam(self: ?*anyopaque, nam: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self), @ptrCast(nam));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#nam)
    ///
    /// ``` self: QtC.Attica__PlatformDependent ```
    pub fn Nam(self: ?*anyopaque) QtC.QNetworkAccessManager {
        return qtc.Attica__PlatformDependent_Nam(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-platformdependent.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__PlatformDependent, param1: QtC.Attica__PlatformDependent ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__PlatformDependent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_Delete(@ptrCast(self));
    }
};
