const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const identityinfo_enums = enums;
const std = @import("std");
pub const map_constu8_qtcsignonmechanismslist = std.StringHashMapUnmanaged(QtC.SignOn__MechanismsList);

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html
pub const signon__identityinfo = struct {
    /// New constructs a new SignOn::IdentityInfo object.
    ///
    ///
    pub fn New() QtC.SignOn__IdentityInfo {
        return qtc.SignOn__IdentityInfo_new();
    }

    /// New2 constructs a new SignOn::IdentityInfo object.
    ///
    /// ``` other: QtC.SignOn__IdentityInfo ```
    pub fn New2(other: ?*anyopaque) QtC.SignOn__IdentityInfo {
        return qtc.SignOn__IdentityInfo_new2(@ptrCast(other));
    }

    /// New3 constructs a new SignOn::IdentityInfo object.
    ///
    /// ``` caption: []const u8, userName: []const u8, methods: map_constu8_qtcsignonmechanismslist, allocator: std.mem.Allocator ```
    pub fn New3(caption: []const u8, userName: []const u8, methods: map_constu8_qtcsignonmechanismslist, allocator: std.mem.Allocator) QtC.SignOn__IdentityInfo {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        const methods_keys = allocator.alloc(qtc.libqt_string, methods.count()) catch @panic("signon::identityinfo.New3: Memory allocation failed");
        defer allocator.free(methods_keys);
        const methods_values = allocator.alloc(QtC.SignOn__MechanismsList, methods.count()) catch @panic("signon::identityinfo.New3: Memory allocation failed");
        defer allocator.free(methods_values);
        var i: usize = 0;
        var methods_it = methods.iterator();
        while (methods_it.next()) |entry| {
            const key = entry.key_ptr.*;
            methods_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            methods_values[i] = @ptrCast(entry.value_ptr.*);
            i += 1;
        }
        const methods_map = qtc.libqt_map{
            .len = methods.count(),
            .keys = @ptrCast(methods_keys.ptr),
            .values = @ptrCast(methods_values.ptr),
        };

        return qtc.SignOn__IdentityInfo_new3(caption_str, userName_str, methods_map);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, other: QtC.SignOn__IdentityInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.SignOn__IdentityInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, id: u32 ```
    pub fn SetId(self: ?*anyopaque, id: u32) void {
        qtc.SignOn__IdentityInfo_SetId(@ptrCast(self), @intCast(id));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo ```
    pub fn Id(self: ?*anyopaque) u32 {
        return qtc.SignOn__IdentityInfo_Id(@ptrCast(self));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, secret: []const u8 ```
    pub fn SetSecret(self: ?*anyopaque, secret: []const u8) void {
        const secret_str = qtc.libqt_string{
            .len = secret.len,
            .data = secret.ptr,
        };
        qtc.SignOn__IdentityInfo_SetSecret(@ptrCast(self), secret_str);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, allocator: std.mem.Allocator ```
    pub fn Secret(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.SignOn__IdentityInfo_Secret(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::identityinfo.Secret: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo ```
    pub fn IsStoringSecret(self: ?*anyopaque) bool {
        return qtc.SignOn__IdentityInfo_IsStoringSecret(@ptrCast(self));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, storeSecret: bool ```
    pub fn SetStoreSecret(self: ?*anyopaque, storeSecret: bool) void {
        qtc.SignOn__IdentityInfo_SetStoreSecret(@ptrCast(self), storeSecret);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, userName: []const u8 ```
    pub fn SetUserName(self: ?*anyopaque, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.SignOn__IdentityInfo_SetUserName(@ptrCast(self), userName_str);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, allocator: std.mem.Allocator ```
    pub fn UserName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.SignOn__IdentityInfo_UserName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::identityinfo.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, caption: []const u8 ```
    pub fn SetCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.SignOn__IdentityInfo_SetCaption(@ptrCast(self), caption_str);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, allocator: std.mem.Allocator ```
    pub fn Caption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.SignOn__IdentityInfo_Caption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::identityinfo.Caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, realms: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetRealms(self: ?*anyopaque, realms: [][]const u8, allocator: std.mem.Allocator) void {
        var realms_arr = allocator.alloc(qtc.libqt_string, realms.len) catch @panic("signon::identityinfo.SetRealms: Memory allocation failed");
        defer allocator.free(realms_arr);
        for (realms, 0..realms.len) |item, i| {
            realms_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const realms_list = qtc.libqt_list{
            .len = realms.len,
            .data = realms_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetRealms(@ptrCast(self), realms_list);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, allocator: std.mem.Allocator ```
    pub fn Realms(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_Realms(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon::identityinfo.Realms: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon::identityinfo.Realms: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, ownerToken: []const u8 ```
    pub fn SetOwner(self: ?*anyopaque, ownerToken: []const u8) void {
        const ownerToken_str = qtc.libqt_string{
            .len = ownerToken.len,
            .data = ownerToken.ptr,
        };
        qtc.SignOn__IdentityInfo_SetOwner(@ptrCast(self), ownerToken_str);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, allocator: std.mem.Allocator ```
    pub fn Owner(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.SignOn__IdentityInfo_Owner(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon::identityinfo.Owner: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, accessControlList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetAccessControlList(self: ?*anyopaque, accessControlList: [][]const u8, allocator: std.mem.Allocator) void {
        var accessControlList_arr = allocator.alloc(qtc.libqt_string, accessControlList.len) catch @panic("signon::identityinfo.SetAccessControlList: Memory allocation failed");
        defer allocator.free(accessControlList_arr);
        for (accessControlList, 0..accessControlList.len) |item, i| {
            accessControlList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const accessControlList_list = qtc.libqt_list{
            .len = accessControlList.len,
            .data = accessControlList_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetAccessControlList(@ptrCast(self), accessControlList_list);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, accessControlList: []QtC.SignOn__SecurityContext ```
    pub fn SetAccessControlList2(self: ?*anyopaque, accessControlList: []QtC.SignOn__SecurityContext) void {
        const accessControlList_list = qtc.libqt_list{
            .len = accessControlList.len,
            .data = @ptrCast(accessControlList.ptr),
        };
        qtc.SignOn__IdentityInfo_SetAccessControlList2(@ptrCast(self), accessControlList_list);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, allocator: std.mem.Allocator ```
    pub fn AccessControlList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_AccessControlList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon::identityinfo.AccessControlList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon::identityinfo.AccessControlList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, allocator: std.mem.Allocator ```
    pub fn AccessControlListFull(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.SignOn__SecurityContext {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_AccessControlListFull(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.SignOn__SecurityContext, _arr.len) catch @panic("signon::identityinfo.AccessControlListFull: Memory allocation failed");
        const _data: [*]QtC.SignOn__SecurityContext = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, method: []const u8, mechanismsList: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetMethod(self: ?*anyopaque, method: []const u8, mechanismsList: [][]const u8, allocator: std.mem.Allocator) void {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        var mechanismsList_arr = allocator.alloc(qtc.libqt_string, mechanismsList.len) catch @panic("signon::identityinfo.SetMethod: Memory allocation failed");
        defer allocator.free(mechanismsList_arr);
        for (mechanismsList, 0..mechanismsList.len) |item, i| {
            mechanismsList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const mechanismsList_list = qtc.libqt_list{
            .len = mechanismsList.len,
            .data = mechanismsList_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetMethod(@ptrCast(self), method_str, mechanismsList_list);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, method: []const u8 ```
    pub fn RemoveMethod(self: ?*anyopaque, method: []const u8) void {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        qtc.SignOn__IdentityInfo_RemoveMethod(@ptrCast(self), method_str);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, typeVal: identityinfo_enums.CredentialsType ```
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.SignOn__IdentityInfo_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo ```
    ///
    /// Returns: ``` identityinfo_enums.CredentialsType ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.SignOn__IdentityInfo_Type(@ptrCast(self));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, allocator: std.mem.Allocator ```
    pub fn Methods(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_Methods(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon::identityinfo.Methods: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon::identityinfo.Methods: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, method: []const u8, allocator: std.mem.Allocator ```
    pub fn Mechanisms(self: ?*anyopaque, method: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_Mechanisms(@ptrCast(self), method_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon::identityinfo.Mechanisms: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon::identityinfo.Mechanisms: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, refCount: i32 ```
    pub fn SetRefCount(self: ?*anyopaque, refCount: i32) void {
        qtc.SignOn__IdentityInfo_SetRefCount(@ptrCast(self), @intCast(refCount));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo ```
    pub fn RefCount(self: ?*anyopaque) i32 {
        return qtc.SignOn__IdentityInfo_RefCount(@ptrCast(self));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ``` self: QtC.SignOn__IdentityInfo, secret: []const u8, storeSecret: bool ```
    pub fn SetSecret2(self: ?*anyopaque, secret: []const u8, storeSecret: bool) void {
        const secret_str = qtc.libqt_string{
            .len = secret.len,
            .data = secret.ptr,
        };
        qtc.SignOn__IdentityInfo_SetSecret2(@ptrCast(self), secret_str, storeSecret);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.SignOn__IdentityInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.SignOn__IdentityInfo_Delete(@ptrCast(self));
    }
};

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identityinfo.html
pub const enums = struct {
    pub const CredentialsType = enum {
        pub const Other: i32 = 0;
        pub const Application: i32 = 1;
        pub const Web: i32 = 2;
        pub const Network: i32 = 4;
    };
};
