const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");
const usermetadata_enums = enums;

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html)
pub const KFileMetaData__UserMetaData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileMetaData__UserMetaData,

    pub const _is_KFileMetaData__UserMetaData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileMetaData::UserMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _filePath: []const u8 `
    ///
    pub fn new(_filePath: []const u8) KFileMetaData__UserMetaData {
        const filePath_str = qtc.libqt_string{
            .len = _filePath.len,
            .data = _filePath.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__UserMetaData_new(filePath_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileMetaData::UserMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KFileMetaData__UserMetaData `
    ///
    pub fn new2(rhs: anytype) KFileMetaData__UserMetaData {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__UserMetaData;
        return .{ .ptr = qtc.KFileMetaData__UserMetaData_new2(@ptrCast(rhs.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` rhs: KFileMetaData__UserMetaData `
    ///
    pub fn operatorAssign(self: KFileMetaData__UserMetaData, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__UserMetaData;
        qtc.KFileMetaData__UserMetaData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePath(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__UserMetaData.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    pub fn isSupported(self: KFileMetaData__UserMetaData) bool {
        return qtc.KFileMetaData__UserMetaData_IsSupported(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTags` instead
    ///
    pub const SetTags = setTags;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _tags: []const []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn setTags(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator, _tags: []const []const u8) i32 {
        const tags_arr = allocator.alloc(qtc.libqt_string, _tags.len) catch @panic("KFileMetaData__UserMetaData.setTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (_tags, 0.._tags.len) |str_item, i|
            tags_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = _tags.len,
            .data = tags_arr.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### DEPRECATED: Use `tags` instead
    ///
    pub const Tags = tags;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#tags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tags(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__UserMetaData_Tags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KFileMetaData__UserMetaData.tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFileMetaData__UserMetaData.tags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `rating` instead
    ///
    pub const Rating = rating;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#rating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    pub fn rating(self: KFileMetaData__UserMetaData) i32 {
        return qtc.KFileMetaData__UserMetaData_Rating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRating` instead
    ///
    pub const SetRating = setRating;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` _rating: i32 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn setRating(self: KFileMetaData__UserMetaData, _rating: i32) i32 {
        return qtc.KFileMetaData__UserMetaData_SetRating(@ptrCast(self.ptr), @bitCast(_rating));
    }

    /// ### DEPRECATED: Use `userComment` instead
    ///
    pub const UserComment = userComment;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#userComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userComment(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_UserComment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__UserMetaData.userComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserComment` instead
    ///
    pub const SetUserComment = setUserComment;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setUserComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` _userComment: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn setUserComment(self: KFileMetaData__UserMetaData, _userComment: []const u8) i32 {
        const userComment_str = qtc.libqt_string{
            .len = _userComment.len,
            .data = _userComment.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetUserComment(@ptrCast(self.ptr), userComment_str);
    }

    /// ### DEPRECATED: Use `originUrl` instead
    ///
    pub const OriginUrl = originUrl;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    pub fn originUrl(self: KFileMetaData__UserMetaData) QUrl {
        return .{ .ptr = qtc.KFileMetaData__UserMetaData_OriginUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOriginUrl` instead
    ///
    pub const SetOriginUrl = setOriginUrl;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` _originUrl: QUrl `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn setOriginUrl(self: KFileMetaData__UserMetaData, _originUrl: anytype) i32 {
        comptime _ = @TypeOf(_originUrl)._is_QUrl;
        return qtc.KFileMetaData__UserMetaData_SetOriginUrl(@ptrCast(self.ptr), @ptrCast(_originUrl.ptr));
    }

    /// ### DEPRECATED: Use `originEmailSubject` instead
    ///
    pub const OriginEmailSubject = originEmailSubject;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn originEmailSubject(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_OriginEmailSubject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__UserMetaData.originEmailSubject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOriginEmailSubject` instead
    ///
    pub const SetOriginEmailSubject = setOriginEmailSubject;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` _originEmailSubject: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn setOriginEmailSubject(self: KFileMetaData__UserMetaData, _originEmailSubject: []const u8) i32 {
        const originEmailSubject_str = qtc.libqt_string{
            .len = _originEmailSubject.len,
            .data = _originEmailSubject.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetOriginEmailSubject(@ptrCast(self.ptr), originEmailSubject_str);
    }

    /// ### DEPRECATED: Use `originEmailSender` instead
    ///
    pub const OriginEmailSender = originEmailSender;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn originEmailSender(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_OriginEmailSender(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__UserMetaData.originEmailSender: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOriginEmailSender` instead
    ///
    pub const SetOriginEmailSender = setOriginEmailSender;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` _originEmailSender: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn setOriginEmailSender(self: KFileMetaData__UserMetaData, _originEmailSender: []const u8) i32 {
        const originEmailSender_str = qtc.libqt_string{
            .len = _originEmailSender.len,
            .data = _originEmailSender.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetOriginEmailSender(@ptrCast(self.ptr), originEmailSender_str);
    }

    /// ### DEPRECATED: Use `originEmailMessageId` instead
    ///
    pub const OriginEmailMessageId = originEmailMessageId;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailMessageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn originEmailMessageId(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_OriginEmailMessageId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__UserMetaData.originEmailMessageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOriginEmailMessageId` instead
    ///
    pub const SetOriginEmailMessageId = setOriginEmailMessageId;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailMessageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` _originEmailMessageId: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn setOriginEmailMessageId(self: KFileMetaData__UserMetaData, _originEmailMessageId: []const u8) i32 {
        const originEmailMessageId_str = qtc.libqt_string{
            .len = _originEmailMessageId.len,
            .data = _originEmailMessageId.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetOriginEmailMessageId(@ptrCast(self.ptr), originEmailMessageId_str);
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn attribute(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KFileMetaData__UserMetaData_Attribute(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__UserMetaData.attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `attribute2` instead
    ///
    pub const Attribute2 = attribute2;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn attribute2(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KFileMetaData__UserMetaData_Attribute2(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileMetaData__UserMetaData.attribute2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn setAttribute(self: KFileMetaData__UserMetaData, name: []const u8, value: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetAttribute(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### DEPRECATED: Use `hasAttribute` instead
    ///
    pub const HasAttribute = hasAttribute;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn hasAttribute(self: KFileMetaData__UserMetaData, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_HasAttribute(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `hasAttribute2` instead
    ///
    pub const HasAttribute2 = hasAttribute2;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn hasAttribute2(self: KFileMetaData__UserMetaData, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_HasAttribute2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `queryAttributes` instead
    ///
    pub const QueryAttributes = queryAttributes;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#queryAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ## Returns:
    ///
    /// ` flag of usermetadata_enums.Attribute `
    ///
    pub fn queryAttributes(self: KFileMetaData__UserMetaData) u32 {
        return qtc.KFileMetaData__UserMetaData_QueryAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryAttributes1` instead
    ///
    pub const QueryAttributes1 = queryAttributes1;

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#queryAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` attributes: flag of usermetadata_enums.Attribute `
    ///
    /// ## Returns:
    ///
    /// ` flag of usermetadata_enums.Attribute `
    ///
    pub fn queryAttributes1(self: KFileMetaData__UserMetaData, attributes: u32) u32 {
        return qtc.KFileMetaData__UserMetaData_QueryAttributes1(@ptrCast(self.ptr), @bitCast(attributes));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    pub fn delete(self: KFileMetaData__UserMetaData) void {
        qtc.KFileMetaData__UserMetaData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#public-types)
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const UnknownError: i32 = 1;
        pub const NotSupported: i32 = 2;
        pub const NoSpace: i32 = 3;
        pub const MissingPermission: i32 = 4;
        pub const ValueTooBig: i32 = 5;
        pub const NameToolong: i32 = 6;
    };

    pub const Attribute = enum {
        pub const None: u32 = 0;
        pub const Any: u32 = 0;
        pub const Tags: u32 = 1;
        pub const Rating: u32 = 2;
        pub const Comment: u32 = 4;
        pub const OriginUrl: u32 = 8;
        pub const OriginEmailSubject: u32 = 16;
        pub const OriginEmailSender: u32 = 32;
        pub const OriginEmailMessageId: u32 = 64;
        pub const Other: u32 = 4294967168;
        pub const All: u32 = 4294967295;
    };
};
