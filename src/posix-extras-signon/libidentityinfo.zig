const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const SignOn__SecurityContext = @import("libqt6").SignOn__SecurityContext;
const identityinfo_enums = enums;
const std = @import("std");
const ArrayMap_constu8_constconstu8 = std.array_hash_map.String([]const []const u8);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
pub const SignOn__IdentityInfo = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.SignOn__IdentityInfo,

    pub const _is_SignOn__IdentityInfo = {};

    /// New constructs a new SignOn::IdentityInfo object.
    ///
    pub fn New() SignOn__IdentityInfo {
        return .{ .ptr = qtc.SignOn__IdentityInfo_new() };
    }

    /// New2 constructs a new SignOn::IdentityInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: SignOn__IdentityInfo `
    ///
    pub fn New2(other: anytype) SignOn__IdentityInfo {
        comptime _ = @TypeOf(other)._is_SignOn__IdentityInfo;
        return .{ .ptr = qtc.SignOn__IdentityInfo_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new SignOn::IdentityInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` caption: []const u8 `
    ///
    /// ` userName: []const u8 `
    ///
    /// ` methods: ArrayMap_constu8_constconstu8 `
    ///
    pub fn New3(allocator: std.mem.Allocator, caption: []const u8, userName: []const u8, methods: ArrayMap_constu8_constconstu8) SignOn__IdentityInfo {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        const methods_count = methods.count();
        const methods_keys = allocator.alloc(qtc.libqt_string, methods_count) catch @panic("signon__identityinfo.New3: Memory allocation failed");
        defer allocator.free(methods_keys);
        const methods_values = allocator.alloc(qtc.libqt_list, methods_count) catch @panic("signon__identityinfo.New3: Memory allocation failed");
        defer allocator.free(methods_values);
        const methods_inners = allocator.alloc([]qtc.libqt_string, methods_count) catch @panic("signon__identityinfo.New3: Memory allocation failed");
        defer {
            for (methods_inners) |methods_inner|
                allocator.free(methods_inner);
            allocator.free(methods_inners);
        }
        var i: usize = 0;
        var methods_it = methods.iterator();
        while (methods_it.next()) |it_entry| : (i += 1) {
            const methods_key = it_entry.key_ptr.*;
            methods_keys[i] = qtc.libqt_string{
                .len = methods_key.len,
                .data = methods_key.ptr,
            };
            methods_values[i].len = it_entry.value_ptr.*.len;
            const methods_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("signon__identityinfo.New3: Memory allocation failed");
            methods_inners[i] = methods_val;
            for (it_entry.value_ptr.*, 0..) |value, j|
                methods_val[j] = qtc.libqt_string{
                    .len = value.len,
                    .data = value.ptr,
                };
            methods_values[i].data = @ptrCast(methods_val.ptr);
        }
        const methods_map = qtc.libqt_map{
            .len = methods_count,
            .keys = @ptrCast(methods_keys.ptr),
            .values = @ptrCast(methods_values.ptr),
        };
        return .{ .ptr = qtc.SignOn__IdentityInfo_new3(caption_str, userName_str, methods_map) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` other: SignOn__IdentityInfo `
    ///
    pub fn OperatorAssign(self: SignOn__IdentityInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_SignOn__IdentityInfo;
        qtc.SignOn__IdentityInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` id: u32 `
    ///
    pub fn SetId(self: SignOn__IdentityInfo, id: u32) void {
        qtc.SignOn__IdentityInfo_SetId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    pub fn Id(self: SignOn__IdentityInfo) u32 {
        return qtc.SignOn__IdentityInfo_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` secret: []const u8 `
    ///
    pub fn SetSecret(self: SignOn__IdentityInfo, secret: []const u8) void {
        const secret_str = qtc.libqt_string{
            .len = secret.len,
            .data = secret.ptr,
        };
        qtc.SignOn__IdentityInfo_SetSecret(@ptrCast(self.ptr), secret_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Secret(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__IdentityInfo_Secret(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__identityinfo.Secret: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    pub fn IsStoringSecret(self: SignOn__IdentityInfo) bool {
        return qtc.SignOn__IdentityInfo_IsStoringSecret(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` storeSecret: bool `
    ///
    pub fn SetStoreSecret(self: SignOn__IdentityInfo, storeSecret: bool) void {
        qtc.SignOn__IdentityInfo_SetStoreSecret(@ptrCast(self.ptr), storeSecret);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` userName: []const u8 `
    ///
    pub fn SetUserName(self: SignOn__IdentityInfo, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.SignOn__IdentityInfo_SetUserName(@ptrCast(self.ptr), userName_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserName(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__IdentityInfo_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__identityinfo.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetCaption(self: SignOn__IdentityInfo, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.SignOn__IdentityInfo_SetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Caption(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__IdentityInfo_Caption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__identityinfo.Caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` realms: []const []const u8 `
    ///
    pub fn SetRealms(self: SignOn__IdentityInfo, allocator: std.mem.Allocator, realms: []const []const u8) void {
        const realms_arr = allocator.alloc(qtc.libqt_string, realms.len) catch @panic("signon__identityinfo.SetRealms: Memory allocation failed");
        defer allocator.free(realms_arr);
        for (realms, 0..realms.len) |item, i|
            realms_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const realms_list = qtc.libqt_list{
            .len = realms.len,
            .data = realms_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetRealms(@ptrCast(self.ptr), realms_list);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Realms(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_Realms(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon__identityinfo.Realms: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon__identityinfo.Realms: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` ownerToken: []const u8 `
    ///
    pub fn SetOwner(self: SignOn__IdentityInfo, ownerToken: []const u8) void {
        const ownerToken_str = qtc.libqt_string{
            .len = ownerToken.len,
            .data = ownerToken.ptr,
        };
        qtc.SignOn__IdentityInfo_SetOwner(@ptrCast(self.ptr), ownerToken_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Owner(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__IdentityInfo_Owner(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("signon__identityinfo.Owner: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` accessControlList: []const []const u8 `
    ///
    pub fn SetAccessControlList(self: SignOn__IdentityInfo, allocator: std.mem.Allocator, accessControlList: []const []const u8) void {
        const accessControlList_arr = allocator.alloc(qtc.libqt_string, accessControlList.len) catch @panic("signon__identityinfo.SetAccessControlList: Memory allocation failed");
        defer allocator.free(accessControlList_arr);
        for (accessControlList, 0..accessControlList.len) |item, i|
            accessControlList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const accessControlList_list = qtc.libqt_list{
            .len = accessControlList.len,
            .data = accessControlList_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetAccessControlList(@ptrCast(self.ptr), accessControlList_list);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` accessControlList: []SignOn__SecurityContext `
    ///
    pub fn SetAccessControlList2(self: SignOn__IdentityInfo, accessControlList: []SignOn__SecurityContext) void {
        const accessControlList_list = qtc.libqt_list{
            .len = accessControlList.len,
            .data = @ptrCast(accessControlList.ptr),
        };
        qtc.SignOn__IdentityInfo_SetAccessControlList2(@ptrCast(self.ptr), accessControlList_list);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessControlList(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_AccessControlList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon__identityinfo.AccessControlList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon__identityinfo.AccessControlList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessControlListFull(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []SignOn__SecurityContext {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_AccessControlListFull(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(SignOn__SecurityContext, _arr.len) catch @panic("signon__identityinfo.AccessControlListFull: Memory allocation failed");
        const _data: [*]QtC.SignOn__SecurityContext = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` method: []const u8 `
    ///
    /// ` mechanismsList: []const []const u8 `
    ///
    pub fn SetMethod(self: SignOn__IdentityInfo, allocator: std.mem.Allocator, method: []const u8, mechanismsList: []const []const u8) void {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const mechanismsList_arr = allocator.alloc(qtc.libqt_string, mechanismsList.len) catch @panic("signon__identityinfo.SetMethod: Memory allocation failed");
        defer allocator.free(mechanismsList_arr);
        for (mechanismsList, 0..mechanismsList.len) |item, i|
            mechanismsList_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const mechanismsList_list = qtc.libqt_list{
            .len = mechanismsList.len,
            .data = mechanismsList_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetMethod(@ptrCast(self.ptr), method_str, mechanismsList_list);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` method: []const u8 `
    ///
    pub fn RemoveMethod(self: SignOn__IdentityInfo, method: []const u8) void {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        qtc.SignOn__IdentityInfo_RemoveMethod(@ptrCast(self.ptr), method_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` typeVal: identityinfo_enums.CredentialsType `
    ///
    pub fn SetType(self: SignOn__IdentityInfo, typeVal: i32) void {
        qtc.SignOn__IdentityInfo_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ## Returns:
    ///
    /// ` identityinfo_enums.CredentialsType `
    ///
    pub fn Type(self: SignOn__IdentityInfo) i32 {
        return qtc.SignOn__IdentityInfo_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Methods(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_Methods(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon__identityinfo.Methods: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon__identityinfo.Methods: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` method: []const u8 `
    ///
    pub fn Mechanisms(self: SignOn__IdentityInfo, allocator: std.mem.Allocator, method: []const u8) []const []const u8 {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_Mechanisms(@ptrCast(self.ptr), method_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("signon__identityinfo.Mechanisms: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("signon__identityinfo.Mechanisms: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` refCount: i32 `
    ///
    pub fn SetRefCount(self: SignOn__IdentityInfo, refCount: i32) void {
        qtc.SignOn__IdentityInfo_SetRefCount(@ptrCast(self.ptr), @bitCast(refCount));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    pub fn RefCount(self: SignOn__IdentityInfo) i32 {
        return qtc.SignOn__IdentityInfo_RefCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` secret: []const u8 `
    ///
    /// ` storeSecret: bool `
    ///
    pub fn SetSecret2(self: SignOn__IdentityInfo, secret: []const u8, storeSecret: bool) void {
        const secret_str = qtc.libqt_string{
            .len = secret.len,
            .data = secret.ptr,
        };
        qtc.SignOn__IdentityInfo_SetSecret2(@ptrCast(self.ptr), secret_str, storeSecret);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    pub fn Delete(self: SignOn__IdentityInfo) void {
        qtc.SignOn__IdentityInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identityinfo.html)
pub const enums = struct {
    pub const CredentialsType = enum(i32) {
        pub const Other: i32 = 0;
        pub const Application: i32 = 1;
        pub const Web: i32 = 2;
        pub const Network: i32 = 4;
    };
};
