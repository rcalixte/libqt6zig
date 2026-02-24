const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore-author.html)
pub const knscore__author = struct {
    /// New constructs a new KNSCore::Author object.
    ///
    pub fn New() QtC.KNSCore__Author {
        return qtc.KNSCore__Author_new();
    }

    /// New2 constructs a new KNSCore::Author object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KNSCore__Author `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KNSCore__Author {
        return qtc.KNSCore__Author_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` other: QtC.KNSCore__Author `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KNSCore__Author_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Author_SetId(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Author_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` email: []const u8 `
    ///
    pub fn SetEmail(self: ?*anyopaque, email: []const u8) void {
        const email_str = qtc.libqt_string{
            .len = email.len,
            .data = email.ptr,
        };
        qtc.KNSCore__Author_SetEmail(@ptrCast(self), email_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#email)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Email(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Email(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Email: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setJabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` jabber: []const u8 `
    ///
    pub fn SetJabber(self: ?*anyopaque, jabber: []const u8) void {
        const jabber_str = qtc.libqt_string{
            .len = jabber.len,
            .data = jabber.ptr,
        };
        qtc.KNSCore__Author_SetJabber(@ptrCast(self), jabber_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#jabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Jabber(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Jabber(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Jabber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` homepage: []const u8 `
    ///
    pub fn SetHomepage(self: ?*anyopaque, homepage: []const u8) void {
        const homepage_str = qtc.libqt_string{
            .len = homepage.len,
            .data = homepage.ptr,
        };
        qtc.KNSCore__Author_SetHomepage(@ptrCast(self), homepage_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Homepage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Homepage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setProfilepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` profilepage: []const u8 `
    ///
    pub fn SetProfilepage(self: ?*anyopaque, profilepage: []const u8) void {
        const profilepage_str = qtc.libqt_string{
            .len = profilepage.len,
            .data = profilepage.ptr,
        };
        qtc.KNSCore__Author_SetProfilepage(@ptrCast(self), profilepage_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#profilepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Profilepage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Profilepage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Profilepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setAvatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` avatarUrl: QtC.QUrl `
    ///
    pub fn SetAvatarUrl(self: ?*anyopaque, avatarUrl: ?*anyopaque) void {
        qtc.KNSCore__Author_SetAvatarUrl(@ptrCast(self), @ptrCast(avatarUrl));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#avatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    pub fn AvatarUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KNSCore__Author_AvatarUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__author.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.KNSCore__Author_SetDescription(@ptrCast(self), description_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KNSCore__Author `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KNSCore__Author_Delete(@ptrCast(self));
    }
};
