const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kprotocolinfo_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html)
pub const kprotocolinfo = struct {
    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#protocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Protocols(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KProtocolInfo_Protocols();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kprotocolinfo.Protocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprotocolinfo.Protocols: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn IsKnownProtocol(url: ?*anyopaque) bool {
        return qtc.KProtocolInfo_IsKnownProtocol(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn IsKnownProtocol2(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_IsKnownProtocol2(protocol_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Exec(protocol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_Exec(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolinfo.Exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#extraFields)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtraFields(url: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KProtocolInfo__ExtraField {
        const _arr: qtc.libqt_list = qtc.KProtocolInfo_ExtraFields(@ptrCast(url));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KProtocolInfo__ExtraField, _arr.len) catch @panic("kprotocolinfo.ExtraFields: Memory allocation failed");
        const _data: [*]QtC.KProtocolInfo__ExtraField = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isHelperProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn IsHelperProtocol(url: ?*anyopaque) bool {
        return qtc.KProtocolInfo_IsHelperProtocol(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isHelperProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn IsHelperProtocol2(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_IsHelperProtocol2(protocol_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isFilterProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn IsFilterProtocol(url: ?*anyopaque) bool {
        return qtc.KProtocolInfo_IsFilterProtocol(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isFilterProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn IsFilterProtocol2(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_IsFilterProtocol2(protocol_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(protocol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_Icon(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolinfo.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Config(protocol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_Config(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolinfo.Config: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#maxWorkers)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn MaxWorkers(protocol: []const u8) i32 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_MaxWorkers(protocol_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#maxWorkersPerHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn MaxWorkersPerHost(protocol: []const u8) i32 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_MaxWorkersPerHost(protocol_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#determineMimetypeFromExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn DetermineMimetypeFromExtension(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_DetermineMimetypeFromExtension(protocol_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#defaultMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultMimetype(protocol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_DefaultMimetype(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolinfo.DefaultMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#docPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocPath(protocol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_DocPath(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolinfo.DocPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#protocolClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolClass(protocol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_ProtocolClass(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolinfo.ProtocolClass: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#showFilePreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn ShowFilePreview(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_ShowFilePreview(protocol_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Capabilities(protocol: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KProtocolInfo_Capabilities(protocol_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kprotocolinfo.Capabilities: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprotocolinfo.Capabilities: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#archiveMimetypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ArchiveMimetypes(protocol: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KProtocolInfo_ArchiveMimetypes(protocol_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kprotocolinfo.ArchiveMimetypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kprotocolinfo.ArchiveMimetypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#proxiedBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProxiedBy(protocol: []const u8, allocator: std.mem.Allocator) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_ProxiedBy(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kprotocolinfo.ProxiedBy: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` updateCacheIfNotfound: bool `
    ///
    pub fn IsKnownProtocol22(protocol: []const u8, updateCacheIfNotfound: bool) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_IsKnownProtocol22(protocol_str, updateCacheIfNotfound);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#dtor.KProtocolInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KProtocolInfo `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KProtocolInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html)
pub const kprotocolinfo__extrafield = struct {
    /// New constructs a new KProtocolInfo::ExtraField object.
    ///
    pub fn New() QtC.KProtocolInfo__ExtraField {
        return qtc.KProtocolInfo__ExtraField_new();
    }

    /// New2 constructs a new KProtocolInfo::ExtraField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _type: kprotocolinfo_enums.Type `
    ///
    pub fn New2(_name: []const u8, _type: i32) QtC.KProtocolInfo__ExtraField {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };

        return qtc.KProtocolInfo__ExtraField_new2(_name_str, @intCast(_type));
    }

    /// New3 constructs a new KProtocolInfo::ExtraField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KProtocolInfo__ExtraField `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.KProtocolInfo__ExtraField {
        return qtc.KProtocolInfo__ExtraField_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProtocolInfo__ExtraField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KProtocolInfo__ExtraField_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("kprotocolinfo__extrafield.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProtocolInfo__ExtraField `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KProtocolInfo__ExtraField_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProtocolInfo__ExtraField `
    ///
    /// ## Returns:
    ///
    /// ` kprotocolinfo_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.KProtocolInfo__ExtraField_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProtocolInfo__ExtraField `
    ///
    /// ` type: kprotocolinfo_enums.Type `
    ///
    pub fn SetType(self: ?*anyopaque, _type: i32) void {
        qtc.KProtocolInfo__ExtraField_SetType(@ptrCast(self), @intCast(_type));
    }

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KProtocolInfo__ExtraField `
    ///
    /// ` param1: QtC.KProtocolInfo__ExtraField `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KProtocolInfo__ExtraField_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KProtocolInfo__ExtraField `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KProtocolInfo__ExtraField_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const T_STREAM: i32 = 0;
        pub const T_FILESYSTEM: i32 = 1;
        pub const T_NONE: i32 = 2;
        pub const T_ERROR: i32 = 3;
    };

    pub const KProtocolInfo = enum(i32) {
        pub const Name: i32 = 0;
        pub const FromUrl: i32 = 1;
        pub const DisplayName: i32 = 2;
    };
};
