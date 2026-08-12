const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const kprotocolinfo_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html)
pub const KProtocolInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KProtocolInfo,

    pub const _is_KProtocolInfo = {};

    /// ### DEPRECATED: Use `protocols` instead
    ///
    pub const Protocols = protocols;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#protocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn protocols(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KProtocolInfo_Protocols();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProtocolInfo.protocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProtocolInfo.protocols: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isKnownProtocol` instead
    ///
    pub const IsKnownProtocol = isKnownProtocol;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn isKnownProtocol(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolInfo_IsKnownProtocol(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `isKnownProtocol2` instead
    ///
    pub const IsKnownProtocol2 = isKnownProtocol2;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn isKnownProtocol2(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_IsKnownProtocol2(protocol_str);
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn exec(allocator: std.mem.Allocator, protocol: []const u8) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_Exec(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolInfo.exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extraFields` instead
    ///
    pub const ExtraFields = extraFields;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#extraFields)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn extraFields(allocator: std.mem.Allocator, url: anytype) []KProtocolInfo__ExtraField {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KProtocolInfo_ExtraFields(@ptrCast(url.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KProtocolInfo__ExtraField, _arr.len) catch @panic("KProtocolInfo.extraFields: Memory allocation failed");
        const _data_val: [*]QtC.KProtocolInfo__ExtraField = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isHelperProtocol` instead
    ///
    pub const IsHelperProtocol = isHelperProtocol;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isHelperProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn isHelperProtocol(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolInfo_IsHelperProtocol(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `isHelperProtocol2` instead
    ///
    pub const IsHelperProtocol2 = isHelperProtocol2;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isHelperProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn isHelperProtocol2(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_IsHelperProtocol2(protocol_str);
    }

    /// ### DEPRECATED: Use `isFilterProtocol` instead
    ///
    pub const IsFilterProtocol = isFilterProtocol;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isFilterProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn isFilterProtocol(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KProtocolInfo_IsFilterProtocol(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `isFilterProtocol2` instead
    ///
    pub const IsFilterProtocol2 = isFilterProtocol2;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isFilterProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn isFilterProtocol2(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_IsFilterProtocol2(protocol_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn icon(allocator: std.mem.Allocator, protocol: []const u8) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_Icon(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolInfo.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `config` instead
    ///
    pub const Config = config;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn config(allocator: std.mem.Allocator, protocol: []const u8) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_Config(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolInfo.config: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `maxWorkers` instead
    ///
    pub const MaxWorkers = maxWorkers;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#maxWorkers)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn maxWorkers(protocol: []const u8) i32 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_MaxWorkers(protocol_str);
    }

    /// ### DEPRECATED: Use `maxWorkersPerHost` instead
    ///
    pub const MaxWorkersPerHost = maxWorkersPerHost;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#maxWorkersPerHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn maxWorkersPerHost(protocol: []const u8) i32 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_MaxWorkersPerHost(protocol_str);
    }

    /// ### DEPRECATED: Use `determineMimetypeFromExtension` instead
    ///
    pub const DetermineMimetypeFromExtension = determineMimetypeFromExtension;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#determineMimetypeFromExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn determineMimetypeFromExtension(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_DetermineMimetypeFromExtension(protocol_str);
    }

    /// ### DEPRECATED: Use `defaultMimetype` instead
    ///
    pub const DefaultMimetype = defaultMimetype;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#defaultMimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn defaultMimetype(allocator: std.mem.Allocator, protocol: []const u8) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_DefaultMimetype(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolInfo.defaultMimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `docPath` instead
    ///
    pub const DocPath = docPath;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#docPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn docPath(allocator: std.mem.Allocator, protocol: []const u8) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_DocPath(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolInfo.docPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `protocolClass` instead
    ///
    pub const ProtocolClass = protocolClass;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#protocolClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn protocolClass(allocator: std.mem.Allocator, protocol: []const u8) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_ProtocolClass(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolInfo.protocolClass: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `showFilePreview` instead
    ///
    pub const ShowFilePreview = showFilePreview;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#showFilePreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn showFilePreview(protocol: []const u8) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_ShowFilePreview(protocol_str);
    }

    /// ### DEPRECATED: Use `capabilities` instead
    ///
    pub const Capabilities = capabilities;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn capabilities(allocator: std.mem.Allocator, protocol: []const u8) []const []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KProtocolInfo_Capabilities(protocol_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProtocolInfo.capabilities: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProtocolInfo.capabilities: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `archiveMimetypes` instead
    ///
    pub const ArchiveMimetypes = archiveMimetypes;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#archiveMimetypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn archiveMimetypes(allocator: std.mem.Allocator, protocol: []const u8) []const []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KProtocolInfo_ArchiveMimetypes(protocol_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KProtocolInfo.archiveMimetypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KProtocolInfo.archiveMimetypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `proxiedBy` instead
    ///
    pub const ProxiedBy = proxiedBy;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#proxiedBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocol: []const u8 `
    ///
    pub fn proxiedBy(allocator: std.mem.Allocator, protocol: []const u8) []const u8 {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        var _str = qtc.KProtocolInfo_ProxiedBy(protocol_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KProtocolInfo.proxiedBy: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isKnownProtocol22` instead
    ///
    pub const IsKnownProtocol22 = isKnownProtocol22;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []const u8 `
    ///
    /// ` updateCacheIfNotfound: bool `
    ///
    pub fn isKnownProtocol22(protocol: []const u8, updateCacheIfNotfound: bool) bool {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        return qtc.KProtocolInfo_IsKnownProtocol22(protocol_str, updateCacheIfNotfound);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo.html#dtor.KProtocolInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KProtocolInfo `
    ///
    pub fn delete(self: KProtocolInfo) void {
        qtc.KProtocolInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html)
pub const KProtocolInfo__ExtraField = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KProtocolInfo__ExtraField,

    pub const _is_KProtocolInfo__ExtraField = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KProtocolInfo::ExtraField object in C++ memory
    ///
    pub fn new() KProtocolInfo__ExtraField {
        return .{ .ptr = qtc.KProtocolInfo__ExtraField_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KProtocolInfo::ExtraField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _type: kprotocolinfo_enums.Type `
    ///
    pub fn new2(_name: []const u8, _type: i32) KProtocolInfo__ExtraField {
        const _name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KProtocolInfo__ExtraField_new2(_name_str, @bitCast(_type)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KProtocolInfo::ExtraField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KProtocolInfo__ExtraField `
    ///
    pub fn new3(param1: anytype) KProtocolInfo__ExtraField {
        comptime _ = @TypeOf(param1)._is_KProtocolInfo__ExtraField;
        return .{ .ptr = qtc.KProtocolInfo__ExtraField_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProtocolInfo__ExtraField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KProtocolInfo__ExtraField, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KProtocolInfo__ExtraField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("KProtocolInfo__ExtraField.name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProtocolInfo__ExtraField `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KProtocolInfo__ExtraField, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KProtocolInfo__ExtraField_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProtocolInfo__ExtraField `
    ///
    /// ## Returns:
    ///
    /// ` kprotocolinfo_enums.Type `
    ///
    pub fn type0(self: KProtocolInfo__ExtraField) i32 {
        return qtc.KProtocolInfo__ExtraField_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProtocolInfo__ExtraField `
    ///
    /// ` _type: kprotocolinfo_enums.Type `
    ///
    pub fn setType(self: KProtocolInfo__ExtraField, _type: i32) void {
        qtc.KProtocolInfo__ExtraField_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kprotocolinfo-extrafield.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KProtocolInfo__ExtraField `
    ///
    /// ` param1: KProtocolInfo__ExtraField `
    ///
    pub fn operatorAssign(self: KProtocolInfo__ExtraField, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KProtocolInfo__ExtraField;
        qtc.KProtocolInfo__ExtraField_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KProtocolInfo__ExtraField `
    ///
    pub fn delete(self: KProtocolInfo__ExtraField) void {
        qtc.KProtocolInfo__ExtraField_Delete(@ptrCast(self.ptr));
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
