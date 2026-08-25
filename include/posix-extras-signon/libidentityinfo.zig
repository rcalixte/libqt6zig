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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new SignOn::IdentityInfo object in C++ memory
    ///
    pub fn new() SignOn__IdentityInfo {
        return .{ .ptr = qtc.SignOn__IdentityInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new SignOn::IdentityInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: SignOn__IdentityInfo `
    ///
    pub fn new2(other: anytype) SignOn__IdentityInfo {
        comptime _ = @TypeOf(other)._is_SignOn__IdentityInfo;
        return .{ .ptr = qtc.SignOn__IdentityInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new SignOn::IdentityInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _caption: []const u8 `
    ///
    /// ` _userName: []const u8 `
    ///
    /// ` _methods: ArrayMap_constu8_constconstu8 `
    ///
    pub fn new3(allocator: std.mem.Allocator, _caption: []const u8, _userName: []const u8, _methods: ArrayMap_constu8_constconstu8) SignOn__IdentityInfo {
        const caption_str = qtc.libqt_string{
            .len = _caption.len,
            .data = _caption.ptr,
        };
        const userName_str = qtc.libqt_string{
            .len = _userName.len,
            .data = _userName.ptr,
        };
        const methods_count = _methods.count();
        const methods_keys = allocator.alloc(qtc.libqt_string, methods_count) catch @panic("SignOn__IdentityInfo.new3: Memory allocation failed");
        defer allocator.free(methods_keys);
        const methods_values = allocator.alloc(qtc.libqt_list, methods_count) catch @panic("SignOn__IdentityInfo.new3: Memory allocation failed");
        defer allocator.free(methods_values);
        const methods_inners = allocator.alloc([]qtc.libqt_string, methods_count) catch @panic("SignOn__IdentityInfo.new3: Memory allocation failed");
        defer {
            for (methods_inners) |methods_inner|
                allocator.free(methods_inner);
            allocator.free(methods_inners);
        }
        var i: usize = 0;
        var methods_it = _methods.iterator();
        while (methods_it.next()) |it_entry| : (i += 1) {
            const methods_key = it_entry.key_ptr.*;
            methods_keys[i] = qtc.libqt_string{
                .len = methods_key.len,
                .data = methods_key.ptr,
            };
            methods_values[i].len = it_entry.value_ptr.*.len;
            const methods_val = allocator.alloc(qtc.libqt_string, it_entry.value_ptr.len) catch @panic("SignOn__IdentityInfo.new3: Memory allocation failed");
            methods_inners[i] = methods_val;
            for (it_entry.value_ptr.*, 0..) |str_item, j|
                methods_val[j] = qtc.libqt_string{
                    .len = str_item.len,
                    .data = str_item.ptr,
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

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` other: SignOn__IdentityInfo `
    ///
    pub fn operatorAssign(self: SignOn__IdentityInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_SignOn__IdentityInfo;
        qtc.SignOn__IdentityInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` _id: u32 `
    ///
    pub fn setId(self: SignOn__IdentityInfo, _id: u32) void {
        qtc.SignOn__IdentityInfo_SetId(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    pub fn id(self: SignOn__IdentityInfo) u32 {
        return qtc.SignOn__IdentityInfo_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSecret` instead
    ///
    pub const SetSecret = setSecret;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` _secret: []const u8 `
    ///
    pub fn setSecret(self: SignOn__IdentityInfo, _secret: []const u8) void {
        const secret_str = qtc.libqt_string{
            .len = _secret.len,
            .data = _secret.ptr,
        };
        qtc.SignOn__IdentityInfo_SetSecret(@ptrCast(self.ptr), secret_str);
    }

    /// ### DEPRECATED: Use `secret` instead
    ///
    pub const Secret = secret;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn secret(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__IdentityInfo_Secret(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__IdentityInfo.secret: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isStoringSecret` instead
    ///
    pub const IsStoringSecret = isStoringSecret;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    pub fn isStoringSecret(self: SignOn__IdentityInfo) bool {
        return qtc.SignOn__IdentityInfo_IsStoringSecret(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStoreSecret` instead
    ///
    pub const SetStoreSecret = setStoreSecret;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` storeSecret: bool `
    ///
    pub fn setStoreSecret(self: SignOn__IdentityInfo, storeSecret: bool) void {
        qtc.SignOn__IdentityInfo_SetStoreSecret(@ptrCast(self.ptr), storeSecret);
    }

    /// ### DEPRECATED: Use `setUserName` instead
    ///
    pub const SetUserName = setUserName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` _userName: []const u8 `
    ///
    pub fn setUserName(self: SignOn__IdentityInfo, _userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = _userName.len,
            .data = _userName.ptr,
        };
        qtc.SignOn__IdentityInfo_SetUserName(@ptrCast(self.ptr), userName_str);
    }

    /// ### DEPRECATED: Use `userName` instead
    ///
    pub const UserName = userName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userName(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__IdentityInfo_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__IdentityInfo.userName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCaption` instead
    ///
    pub const SetCaption = setCaption;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` _caption: []const u8 `
    ///
    pub fn setCaption(self: SignOn__IdentityInfo, _caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = _caption.len,
            .data = _caption.ptr,
        };
        qtc.SignOn__IdentityInfo_SetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `caption` instead
    ///
    pub const Caption = caption;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn caption(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__IdentityInfo_Caption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__IdentityInfo.caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRealms` instead
    ///
    pub const SetRealms = setRealms;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _realms: []const []const u8 `
    ///
    pub fn setRealms(self: SignOn__IdentityInfo, allocator: std.mem.Allocator, _realms: []const []const u8) void {
        const realms_arr = allocator.alloc(qtc.libqt_string, _realms.len) catch @panic("SignOn__IdentityInfo.setRealms: Memory allocation failed");
        defer allocator.free(realms_arr);
        for (_realms, 0.._realms.len) |str_item, i|
            realms_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const realms_list = qtc.libqt_list{
            .len = _realms.len,
            .data = realms_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetRealms(@ptrCast(self.ptr), realms_list);
    }

    /// ### DEPRECATED: Use `realms` instead
    ///
    pub const Realms = realms;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn realms(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_Realms(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("SignOn__IdentityInfo.realms: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__IdentityInfo.realms: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setOwner` instead
    ///
    pub const SetOwner = setOwner;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` ownerToken: []const u8 `
    ///
    pub fn setOwner(self: SignOn__IdentityInfo, ownerToken: []const u8) void {
        const ownerToken_str = qtc.libqt_string{
            .len = ownerToken.len,
            .data = ownerToken.ptr,
        };
        qtc.SignOn__IdentityInfo_SetOwner(@ptrCast(self.ptr), ownerToken_str);
    }

    /// ### DEPRECATED: Use `owner` instead
    ///
    pub const Owner = owner;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn owner(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.SignOn__IdentityInfo_Owner(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("SignOn__IdentityInfo.owner: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessControlList` instead
    ///
    pub const SetAccessControlList = setAccessControlList;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _accessControlList: []const []const u8 `
    ///
    pub fn setAccessControlList(self: SignOn__IdentityInfo, allocator: std.mem.Allocator, _accessControlList: []const []const u8) void {
        const accessControlList_arr = allocator.alloc(qtc.libqt_string, _accessControlList.len) catch @panic("SignOn__IdentityInfo.setAccessControlList: Memory allocation failed");
        defer allocator.free(accessControlList_arr);
        for (_accessControlList, 0.._accessControlList.len) |str_item, i|
            accessControlList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const accessControlList_list = qtc.libqt_list{
            .len = _accessControlList.len,
            .data = accessControlList_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetAccessControlList(@ptrCast(self.ptr), accessControlList_list);
    }

    /// ### DEPRECATED: Use `setAccessControlList2` instead
    ///
    pub const SetAccessControlList2 = setAccessControlList2;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` _accessControlList: []SignOn__SecurityContext `
    ///
    pub fn setAccessControlList2(self: SignOn__IdentityInfo, _accessControlList: []SignOn__SecurityContext) void {
        const accessControlList_list = qtc.libqt_list{
            .len = _accessControlList.len,
            .data = @ptrCast(_accessControlList.ptr),
        };
        qtc.SignOn__IdentityInfo_SetAccessControlList2(@ptrCast(self.ptr), accessControlList_list);
    }

    /// ### DEPRECATED: Use `accessControlList` instead
    ///
    pub const AccessControlList = accessControlList;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessControlList(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_AccessControlList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("SignOn__IdentityInfo.accessControlList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__IdentityInfo.accessControlList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `accessControlListFull` instead
    ///
    pub const AccessControlListFull = accessControlListFull;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessControlListFull(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []SignOn__SecurityContext {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_AccessControlListFull(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(SignOn__SecurityContext, _arr.len) catch @panic("SignOn__IdentityInfo.accessControlListFull: Memory allocation failed");
        const _data_val: [*]QtC.SignOn__SecurityContext = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setMethod` instead
    ///
    pub const SetMethod = setMethod;

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
    pub fn setMethod(self: SignOn__IdentityInfo, allocator: std.mem.Allocator, method: []const u8, mechanismsList: []const []const u8) void {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const mechanismsList_arr = allocator.alloc(qtc.libqt_string, mechanismsList.len) catch @panic("SignOn__IdentityInfo.setMethod: Memory allocation failed");
        defer allocator.free(mechanismsList_arr);
        for (mechanismsList, 0..mechanismsList.len) |str_item, i|
            mechanismsList_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mechanismsList_list = qtc.libqt_list{
            .len = mechanismsList.len,
            .data = mechanismsList_arr.ptr,
        };
        qtc.SignOn__IdentityInfo_SetMethod(@ptrCast(self.ptr), method_str, mechanismsList_list);
    }

    /// ### DEPRECATED: Use `removeMethod` instead
    ///
    pub const RemoveMethod = removeMethod;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` method: []const u8 `
    ///
    pub fn removeMethod(self: SignOn__IdentityInfo, method: []const u8) void {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        qtc.SignOn__IdentityInfo_RemoveMethod(@ptrCast(self.ptr), method_str);
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` typeVal: identityinfo_enums.CredentialsType `
    ///
    pub fn setType(self: SignOn__IdentityInfo, typeVal: i32) void {
        qtc.SignOn__IdentityInfo_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: SignOn__IdentityInfo) i32 {
        return qtc.SignOn__IdentityInfo_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `methods` instead
    ///
    pub const Methods = methods;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn methods(self: SignOn__IdentityInfo, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.SignOn__IdentityInfo_Methods(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("SignOn__IdentityInfo.methods: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__IdentityInfo.methods: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `mechanisms` instead
    ///
    pub const Mechanisms = mechanisms;

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
    pub fn mechanisms(self: SignOn__IdentityInfo, allocator: std.mem.Allocator, method: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("SignOn__IdentityInfo.mechanisms: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("SignOn__IdentityInfo.mechanisms: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setRefCount` instead
    ///
    pub const SetRefCount = setRefCount;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` _refCount: i32 `
    ///
    pub fn setRefCount(self: SignOn__IdentityInfo, _refCount: i32) void {
        qtc.SignOn__IdentityInfo_SetRefCount(@ptrCast(self.ptr), @bitCast(_refCount));
    }

    /// ### DEPRECATED: Use `refCount` instead
    ///
    pub const RefCount = refCount;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    pub fn refCount(self: SignOn__IdentityInfo) i32 {
        return qtc.SignOn__IdentityInfo_RefCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSecret2` instead
    ///
    pub const SetSecret2 = setSecret2;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    /// ` _secret: []const u8 `
    ///
    /// ` storeSecret: bool `
    ///
    pub fn setSecret2(self: SignOn__IdentityInfo, _secret: []const u8, storeSecret: bool) void {
        const secret_str = qtc.libqt_string{
            .len = _secret.len,
            .data = _secret.ptr,
        };
        qtc.SignOn__IdentityInfo_SetSecret2(@ptrCast(self.ptr), secret_str, storeSecret);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1IdentityInfo.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: SignOn__IdentityInfo `
    ///
    pub fn delete(self: SignOn__IdentityInfo) void {
        qtc.SignOn__IdentityInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1Identityinfo.html)
pub const enums = struct {
    pub const CredentialsType = enum {
        pub const Other: i32 = 0;
        pub const Application: i32 = 1;
        pub const Web: i32 = 2;
        pub const Network: i32 = 4;
    };
};
