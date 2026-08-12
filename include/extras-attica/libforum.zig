const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-forum.html)
pub const Attica__Forum = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-forum.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Forum,

    pub const _is_Attica__Forum = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Forum object in C++ memory
    ///
    pub fn new() Attica__Forum {
        return .{ .ptr = qtc.Attica__Forum_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Forum object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Forum `
    ///
    pub fn new2(other: anytype) Attica__Forum {
        comptime _ = @TypeOf(other)._is_Attica__Forum;
        return .{ .ptr = qtc.Attica__Forum_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` other: Attica__Forum `
    ///
    pub fn operatorAssign(self: Attica__Forum, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Forum;
        qtc.Attica__Forum_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Forum, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Forum_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Forum, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Forum_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Forum.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Forum, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Forum_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Forum, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Forum_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Forum.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: Attica__Forum, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.Attica__Forum_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Attica__Forum, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Forum_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Forum.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDate` instead
    ///
    pub const SetDate = setDate;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` _date: QDateTime `
    ///
    pub fn setDate(self: Attica__Forum, _date: anytype) void {
        comptime _ = @TypeOf(_date)._is_QDateTime;
        qtc.Attica__Forum_SetDate(@ptrCast(self.ptr), @ptrCast(_date.ptr));
    }

    /// ### DEPRECATED: Use `date` instead
    ///
    pub const Date = date;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn date(self: Attica__Forum) QDateTime {
        return .{ .ptr = qtc.Attica__Forum_Date(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` _icon: QUrl `
    ///
    pub fn setIcon(self: Attica__Forum, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QUrl;
        qtc.Attica__Forum_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn icon(self: Attica__Forum) QUrl {
        return .{ .ptr = qtc.Attica__Forum_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setChildCount` instead
    ///
    pub const SetChildCount = setChildCount;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setChildCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` _childCount: i32 `
    ///
    pub fn setChildCount(self: Attica__Forum, _childCount: i32) void {
        qtc.Attica__Forum_SetChildCount(@ptrCast(self.ptr), @bitCast(_childCount));
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn childCount(self: Attica__Forum) i32 {
        return qtc.Attica__Forum_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTopics` instead
    ///
    pub const SetTopics = setTopics;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setTopics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` _topics: i32 `
    ///
    pub fn setTopics(self: Attica__Forum, _topics: i32) void {
        qtc.Attica__Forum_SetTopics(@ptrCast(self.ptr), @bitCast(_topics));
    }

    /// ### DEPRECATED: Use `topics` instead
    ///
    pub const Topics = topics;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#topics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn topics(self: Attica__Forum) i32 {
        return qtc.Attica__Forum_Topics(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChildren` instead
    ///
    pub const SetChildren = setChildren;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#setChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` comments: []Attica__Forum `
    ///
    pub fn setChildren(self: Attica__Forum, comments: []Attica__Forum) void {
        const comments_list = qtc.libqt_list{
            .len = comments.len,
            .data = @ptrCast(comments.ptr),
        };
        qtc.Attica__Forum_SetChildren(@ptrCast(self.ptr), comments_list);
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Attica__Forum, allocator: std.mem.Allocator) []Attica__Forum {
        const _arr: qtc.libqt_list = qtc.Attica__Forum_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Forum, _arr.len) catch @panic("Attica__Forum.children: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Forum = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-forum.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn isValid(self: Attica__Forum) bool {
        return qtc.Attica__Forum_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Forum `
    ///
    pub fn delete(self: Attica__Forum) void {
        qtc.Attica__Forum_Delete(@ptrCast(self.ptr));
    }
};
