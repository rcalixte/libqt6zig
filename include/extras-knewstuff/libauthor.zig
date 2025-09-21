const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/knscore-author.html
pub const knscore__author = struct {
    /// New constructs a new KNSCore::Author object.
    ///
    ///
    pub fn New() QtC.KNSCore__Author {
        return qtc.KNSCore__Author_new();
    }

    /// New2 constructs a new KNSCore::Author object.
    ///
    /// ``` other: QtC.KNSCore__Author ```
    pub fn New2(other: ?*anyopaque) QtC.KNSCore__Author {
        return qtc.KNSCore__Author_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#operator-eq)
    ///
    /// ``` self: QtC.KNSCore__Author, other: QtC.KNSCore__Author ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KNSCore__Author_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#setId)
    ///
    /// ``` self: QtC.KNSCore__Author, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Author_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#id)
    ///
    /// ``` self: QtC.KNSCore__Author, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Author_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::author.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#setName)
    ///
    /// ``` self: QtC.KNSCore__Author, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Author_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#name)
    ///
    /// ``` self: QtC.KNSCore__Author, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Author_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::author.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#setEmail)
    ///
    /// ``` self: QtC.KNSCore__Author, email: []const u8 ```
    pub fn SetEmail(self: ?*anyopaque, email: []const u8) void {
        const email_str = qtc.libqt_string{
            .len = email.len,
            .data = email.ptr,
        };
        qtc.KNSCore__Author_SetEmail(@ptrCast(self), email_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#email)
    ///
    /// ``` self: QtC.KNSCore__Author, allocator: std.mem.Allocator ```
    pub fn Email(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Author_Email(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::author.Email: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#setJabber)
    ///
    /// ``` self: QtC.KNSCore__Author, jabber: []const u8 ```
    pub fn SetJabber(self: ?*anyopaque, jabber: []const u8) void {
        const jabber_str = qtc.libqt_string{
            .len = jabber.len,
            .data = jabber.ptr,
        };
        qtc.KNSCore__Author_SetJabber(@ptrCast(self), jabber_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#jabber)
    ///
    /// ``` self: QtC.KNSCore__Author, allocator: std.mem.Allocator ```
    pub fn Jabber(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Author_Jabber(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::author.Jabber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#setHomepage)
    ///
    /// ``` self: QtC.KNSCore__Author, homepage: []const u8 ```
    pub fn SetHomepage(self: ?*anyopaque, homepage: []const u8) void {
        const homepage_str = qtc.libqt_string{
            .len = homepage.len,
            .data = homepage.ptr,
        };
        qtc.KNSCore__Author_SetHomepage(@ptrCast(self), homepage_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#homepage)
    ///
    /// ``` self: QtC.KNSCore__Author, allocator: std.mem.Allocator ```
    pub fn Homepage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Author_Homepage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::author.Homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#setProfilepage)
    ///
    /// ``` self: QtC.KNSCore__Author, profilepage: []const u8 ```
    pub fn SetProfilepage(self: ?*anyopaque, profilepage: []const u8) void {
        const profilepage_str = qtc.libqt_string{
            .len = profilepage.len,
            .data = profilepage.ptr,
        };
        qtc.KNSCore__Author_SetProfilepage(@ptrCast(self), profilepage_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#profilepage)
    ///
    /// ``` self: QtC.KNSCore__Author, allocator: std.mem.Allocator ```
    pub fn Profilepage(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Author_Profilepage(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::author.Profilepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#setAvatarUrl)
    ///
    /// ``` self: QtC.KNSCore__Author, avatarUrl: QtC.QUrl ```
    pub fn SetAvatarUrl(self: ?*anyopaque, avatarUrl: ?*anyopaque) void {
        qtc.KNSCore__Author_SetAvatarUrl(@ptrCast(self), @ptrCast(avatarUrl));
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#avatarUrl)
    ///
    /// ``` self: QtC.KNSCore__Author ```
    pub fn AvatarUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KNSCore__Author_AvatarUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#description)
    ///
    /// ``` self: QtC.KNSCore__Author, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Author_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::author.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-author.html#setDescription)
    ///
    /// ``` self: QtC.KNSCore__Author, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.KNSCore__Author_SetDescription(@ptrCast(self), description_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNSCore__Author ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNSCore__Author_Delete(@ptrCast(self));
    }
};
