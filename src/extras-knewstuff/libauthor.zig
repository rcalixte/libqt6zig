const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-author.html)
pub const KNSCore__Author = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-author.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__Author,

    pub const _is_KNSCore__Author = {};

    /// New constructs a new KNSCore::Author object.
    ///
    pub fn New() KNSCore__Author {
        return .{ .ptr = qtc.KNSCore__Author_new() };
    }

    /// New2 constructs a new KNSCore::Author object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KNSCore__Author `
    ///
    pub fn New2(other: anytype) KNSCore__Author {
        comptime _ = @TypeOf(other)._is_KNSCore__Author;
        return .{ .ptr = qtc.KNSCore__Author_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` other: KNSCore__Author `
    ///
    pub fn OperatorAssign(self: KNSCore__Author, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KNSCore__Author;
        qtc.KNSCore__Author_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: KNSCore__Author, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Author_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KNSCore__Author, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Author_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` email: []const u8 `
    ///
    pub fn SetEmail(self: KNSCore__Author, email: []const u8) void {
        const email_str = qtc.libqt_string{
            .len = email.len,
            .data = email.ptr,
        };
        qtc.KNSCore__Author_SetEmail(@ptrCast(self.ptr), email_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#email)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Email(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Email(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Email: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setJabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` jabber: []const u8 `
    ///
    pub fn SetJabber(self: KNSCore__Author, jabber: []const u8) void {
        const jabber_str = qtc.libqt_string{
            .len = jabber.len,
            .data = jabber.ptr,
        };
        qtc.KNSCore__Author_SetJabber(@ptrCast(self.ptr), jabber_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#jabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Jabber(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Jabber(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Jabber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` homepage: []const u8 `
    ///
    pub fn SetHomepage(self: KNSCore__Author, homepage: []const u8) void {
        const homepage_str = qtc.libqt_string{
            .len = homepage.len,
            .data = homepage.ptr,
        };
        qtc.KNSCore__Author_SetHomepage(@ptrCast(self.ptr), homepage_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Homepage(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Homepage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setProfilepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` profilepage: []const u8 `
    ///
    pub fn SetProfilepage(self: KNSCore__Author, profilepage: []const u8) void {
        const profilepage_str = qtc.libqt_string{
            .len = profilepage.len,
            .data = profilepage.ptr,
        };
        qtc.KNSCore__Author_SetProfilepage(@ptrCast(self.ptr), profilepage_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#profilepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Profilepage(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Profilepage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Profilepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setAvatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` avatarUrl: QUrl `
    ///
    pub fn SetAvatarUrl(self: KNSCore__Author, avatarUrl: anytype) void {
        comptime _ = @TypeOf(avatarUrl)._is_QUrl;
        qtc.KNSCore__Author_SetAvatarUrl(@ptrCast(self.ptr), @ptrCast(avatarUrl.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#avatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    pub fn AvatarUrl(self: KNSCore__Author) QUrl {
        return .{ .ptr = qtc.KNSCore__Author_AvatarUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: KNSCore__Author, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.KNSCore__Author_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Author `
    ///
    pub fn Delete(self: KNSCore__Author) void {
        qtc.KNSCore__Author_Delete(@ptrCast(self.ptr));
    }
};
