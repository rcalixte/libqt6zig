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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::Author object in C++ memory
    ///
    pub fn new() KNSCore__Author {
        return .{ .ptr = qtc.KNSCore__Author_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNSCore::Author object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KNSCore__Author `
    ///
    pub fn new2(other: anytype) KNSCore__Author {
        comptime _ = @TypeOf(other)._is_KNSCore__Author;
        return .{ .ptr = qtc.KNSCore__Author_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` other: KNSCore__Author `
    ///
    pub fn operatorAssign(self: KNSCore__Author, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KNSCore__Author;
        qtc.KNSCore__Author_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: KNSCore__Author, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.KNSCore__Author_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Author.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KNSCore__Author, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KNSCore__Author_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Author.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEmail` instead
    ///
    pub const SetEmail = setEmail;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` _email: []const u8 `
    ///
    pub fn setEmail(self: KNSCore__Author, _email: []const u8) void {
        const email_str = qtc.libqt_string{
            .len = _email.len,
            .data = _email.ptr,
        };
        qtc.KNSCore__Author_SetEmail(@ptrCast(self.ptr), email_str);
    }

    /// ### DEPRECATED: Use `email` instead
    ///
    pub const Email = email;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#email)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn email(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Email(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Author.email: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setJabber` instead
    ///
    pub const SetJabber = setJabber;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setJabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` _jabber: []const u8 `
    ///
    pub fn setJabber(self: KNSCore__Author, _jabber: []const u8) void {
        const jabber_str = qtc.libqt_string{
            .len = _jabber.len,
            .data = _jabber.ptr,
        };
        qtc.KNSCore__Author_SetJabber(@ptrCast(self.ptr), jabber_str);
    }

    /// ### DEPRECATED: Use `jabber` instead
    ///
    pub const Jabber = jabber;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#jabber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn jabber(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Jabber(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Author.jabber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHomepage` instead
    ///
    pub const SetHomepage = setHomepage;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` _homepage: []const u8 `
    ///
    pub fn setHomepage(self: KNSCore__Author, _homepage: []const u8) void {
        const homepage_str = qtc.libqt_string{
            .len = _homepage.len,
            .data = _homepage.ptr,
        };
        qtc.KNSCore__Author_SetHomepage(@ptrCast(self.ptr), homepage_str);
    }

    /// ### DEPRECATED: Use `homepage` instead
    ///
    pub const Homepage = homepage;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn homepage(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Homepage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Author.homepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProfilepage` instead
    ///
    pub const SetProfilepage = setProfilepage;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setProfilepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` _profilepage: []const u8 `
    ///
    pub fn setProfilepage(self: KNSCore__Author, _profilepage: []const u8) void {
        const profilepage_str = qtc.libqt_string{
            .len = _profilepage.len,
            .data = _profilepage.ptr,
        };
        qtc.KNSCore__Author_SetProfilepage(@ptrCast(self.ptr), profilepage_str);
    }

    /// ### DEPRECATED: Use `profilepage` instead
    ///
    pub const Profilepage = profilepage;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#profilepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn profilepage(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Profilepage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Author.profilepage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAvatarUrl` instead
    ///
    pub const SetAvatarUrl = setAvatarUrl;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setAvatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` _avatarUrl: QUrl `
    ///
    pub fn setAvatarUrl(self: KNSCore__Author, _avatarUrl: anytype) void {
        comptime _ = @TypeOf(_avatarUrl)._is_QUrl;
        qtc.KNSCore__Author_SetAvatarUrl(@ptrCast(self.ptr), @ptrCast(_avatarUrl.ptr));
    }

    /// ### DEPRECATED: Use `avatarUrl` instead
    ///
    pub const AvatarUrl = avatarUrl;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#avatarUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    pub fn avatarUrl(self: KNSCore__Author) QUrl {
        return .{ .ptr = qtc.KNSCore__Author_AvatarUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: KNSCore__Author, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Author_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Author.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/knscore-author.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Author `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: KNSCore__Author, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.KNSCore__Author_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Author `
    ///
    pub fn delete(self: KNSCore__Author) void {
        qtc.KNSCore__Author_Delete(@ptrCast(self.ptr));
    }
};
