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

    /// New constructs a new KFileMetaData::UserMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn New(filePath: []const u8) KFileMetaData__UserMetaData {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        return .{ .ptr = qtc.KFileMetaData__UserMetaData_new(filePath_str) };
    }

    /// New2 constructs a new KFileMetaData::UserMetaData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: KFileMetaData__UserMetaData `
    ///
    pub fn New2(rhs: anytype) KFileMetaData__UserMetaData {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__UserMetaData;
        return .{ .ptr = qtc.KFileMetaData__UserMetaData_new2(@ptrCast(rhs.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` rhs: KFileMetaData__UserMetaData `
    ///
    pub fn OperatorAssign(self: KFileMetaData__UserMetaData, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_KFileMetaData__UserMetaData;
        qtc.KFileMetaData__UserMetaData_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FilePath(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__usermetadata.FilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    pub fn IsSupported(self: KFileMetaData__UserMetaData) bool {
        return qtc.KFileMetaData__UserMetaData_IsSupported(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tags: []const []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn SetTags(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator, tags: []const []const u8) i32 {
        const tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("kfilemetadata__usermetadata.SetTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i|
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#tags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tags(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileMetaData__UserMetaData_Tags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfilemetadata__usermetadata.Tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfilemetadata__usermetadata.Tags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#rating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    pub fn Rating(self: KFileMetaData__UserMetaData) i32 {
        return qtc.KFileMetaData__UserMetaData_Rating(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` rating: i32 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn SetRating(self: KFileMetaData__UserMetaData, rating: i32) i32 {
        return qtc.KFileMetaData__UserMetaData_SetRating(@ptrCast(self.ptr), @bitCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#userComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserComment(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_UserComment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__usermetadata.UserComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setUserComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` userComment: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn SetUserComment(self: KFileMetaData__UserMetaData, userComment: []const u8) i32 {
        const userComment_str = qtc.libqt_string{
            .len = userComment.len,
            .data = userComment.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetUserComment(@ptrCast(self.ptr), userComment_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    pub fn OriginUrl(self: KFileMetaData__UserMetaData) QUrl {
        return .{ .ptr = qtc.KFileMetaData__UserMetaData_OriginUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` originUrl: QUrl `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn SetOriginUrl(self: KFileMetaData__UserMetaData, originUrl: anytype) i32 {
        comptime _ = @TypeOf(originUrl)._is_QUrl;
        return qtc.KFileMetaData__UserMetaData_SetOriginUrl(@ptrCast(self.ptr), @ptrCast(originUrl.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OriginEmailSubject(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_OriginEmailSubject(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__usermetadata.OriginEmailSubject: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` originEmailSubject: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn SetOriginEmailSubject(self: KFileMetaData__UserMetaData, originEmailSubject: []const u8) i32 {
        const originEmailSubject_str = qtc.libqt_string{
            .len = originEmailSubject.len,
            .data = originEmailSubject.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetOriginEmailSubject(@ptrCast(self.ptr), originEmailSubject_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OriginEmailSender(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_OriginEmailSender(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__usermetadata.OriginEmailSender: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` originEmailSender: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn SetOriginEmailSender(self: KFileMetaData__UserMetaData, originEmailSender: []const u8) i32 {
        const originEmailSender_str = qtc.libqt_string{
            .len = originEmailSender.len,
            .data = originEmailSender.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetOriginEmailSender(@ptrCast(self.ptr), originEmailSender_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#originEmailMessageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OriginEmailMessageId(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileMetaData__UserMetaData_OriginEmailMessageId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__usermetadata.OriginEmailMessageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#setOriginEmailMessageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` originEmailMessageId: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` usermetadata_enums.Error `
    ///
    pub fn SetOriginEmailMessageId(self: KFileMetaData__UserMetaData, originEmailMessageId: []const u8) i32 {
        const originEmailMessageId_str = qtc.libqt_string{
            .len = originEmailMessageId.len,
            .data = originEmailMessageId.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_SetOriginEmailMessageId(@ptrCast(self.ptr), originEmailMessageId_str);
    }

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
    pub fn Attribute(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KFileMetaData__UserMetaData_Attribute(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__usermetadata.Attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Attribute2(self: KFileMetaData__UserMetaData, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KFileMetaData__UserMetaData_Attribute2(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfilemetadata__usermetadata.Attribute2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAttribute(self: KFileMetaData__UserMetaData, name: []const u8, value: []const u8) i32 {
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

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn HasAttribute(self: KFileMetaData__UserMetaData, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_HasAttribute(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#hasAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    /// ` name: []const u8 `
    ///
    pub fn HasAttribute2(self: KFileMetaData__UserMetaData, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KFileMetaData__UserMetaData_HasAttribute2(@ptrCast(self.ptr), name_str);
    }

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
    pub fn QueryAttributes(self: KFileMetaData__UserMetaData) u32 {
        return qtc.KFileMetaData__UserMetaData_QueryAttributes(@ptrCast(self.ptr));
    }

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
    pub fn QueryAttributes1(self: KFileMetaData__UserMetaData, attributes: u32) u32 {
        return qtc.KFileMetaData__UserMetaData_QueryAttributes1(@ptrCast(self.ptr), @bitCast(attributes));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileMetaData__UserMetaData `
    ///
    pub fn Delete(self: KFileMetaData__UserMetaData) void {
        qtc.KFileMetaData__UserMetaData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-usermetadata.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const UnknownError: i32 = 1;
        pub const NotSupported: i32 = 2;
        pub const NoSpace: i32 = 3;
        pub const MissingPermission: i32 = 4;
        pub const ValueTooBig: i32 = 5;
        pub const NameToolong: i32 = 6;
    };

    pub const Attribute = enum(u32) {
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
