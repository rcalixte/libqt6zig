const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html)
pub const Attica__KnowledgeBaseEntry = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__KnowledgeBaseEntry,

    pub const _is_Attica__KnowledgeBaseEntry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::KnowledgeBaseEntry object in C++ memory
    ///
    pub fn new() Attica__KnowledgeBaseEntry {
        return .{ .ptr = qtc.Attica__KnowledgeBaseEntry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::KnowledgeBaseEntry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__KnowledgeBaseEntry `
    ///
    pub fn new2(other: anytype) Attica__KnowledgeBaseEntry {
        comptime _ = @TypeOf(other)._is_Attica__KnowledgeBaseEntry;
        return .{ .ptr = qtc.Attica__KnowledgeBaseEntry_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` other: Attica__KnowledgeBaseEntry `
    ///
    pub fn operatorAssign(self: Attica__KnowledgeBaseEntry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__KnowledgeBaseEntry;
        qtc.Attica__KnowledgeBaseEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__KnowledgeBaseEntry, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__KnowledgeBaseEntry.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setContentId` instead
    ///
    pub const SetContentId = setContentId;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setContentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _id: i32 `
    ///
    pub fn setContentId(self: Attica__KnowledgeBaseEntry, _id: i32) void {
        qtc.Attica__KnowledgeBaseEntry_SetContentId(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `contentId` instead
    ///
    pub const ContentId = contentId;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#contentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn contentId(self: Attica__KnowledgeBaseEntry) i32 {
        return qtc.Attica__KnowledgeBaseEntry_ContentId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUser` instead
    ///
    pub const SetUser = setUser;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _user: []const u8 `
    ///
    pub fn setUser(self: Attica__KnowledgeBaseEntry, _user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__KnowledgeBaseEntry.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _status: []const u8 `
    ///
    pub fn setStatus(self: Attica__KnowledgeBaseEntry, _status: []const u8) void {
        const status_str = qtc.libqt_string{
            .len = _status.len,
            .data = _status.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetStatus(@ptrCast(self.ptr), status_str);
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn status(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Status(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__KnowledgeBaseEntry.status: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setChanged` instead
    ///
    pub const SetChanged = setChanged;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _changed: QDateTime `
    ///
    pub fn setChanged(self: Attica__KnowledgeBaseEntry, _changed: anytype) void {
        comptime _ = @TypeOf(_changed)._is_QDateTime;
        qtc.Attica__KnowledgeBaseEntry_SetChanged(@ptrCast(self.ptr), @ptrCast(_changed.ptr));
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn changed(self: Attica__KnowledgeBaseEntry) QDateTime {
        return .{ .ptr = qtc.Attica__KnowledgeBaseEntry_Changed(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__KnowledgeBaseEntry, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__KnowledgeBaseEntry.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: Attica__KnowledgeBaseEntry, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__KnowledgeBaseEntry.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAnswer` instead
    ///
    pub const SetAnswer = setAnswer;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setAnswer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _answer: []const u8 `
    ///
    pub fn setAnswer(self: Attica__KnowledgeBaseEntry, _answer: []const u8) void {
        const answer_str = qtc.libqt_string{
            .len = _answer.len,
            .data = _answer.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetAnswer(@ptrCast(self.ptr), answer_str);
    }

    /// ### DEPRECATED: Use `answer` instead
    ///
    pub const Answer = answer;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#answer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn answer(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Answer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__KnowledgeBaseEntry.answer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setComments` instead
    ///
    pub const SetComments = setComments;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _comments: i32 `
    ///
    pub fn setComments(self: Attica__KnowledgeBaseEntry, _comments: i32) void {
        qtc.Attica__KnowledgeBaseEntry_SetComments(@ptrCast(self.ptr), @bitCast(_comments));
    }

    /// ### DEPRECATED: Use `comments` instead
    ///
    pub const Comments = comments;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#comments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn comments(self: Attica__KnowledgeBaseEntry) i32 {
        return qtc.Attica__KnowledgeBaseEntry_Comments(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDetailPage` instead
    ///
    pub const SetDetailPage = setDetailPage;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setDetailPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` _detailPage: QUrl `
    ///
    pub fn setDetailPage(self: Attica__KnowledgeBaseEntry, _detailPage: anytype) void {
        comptime _ = @TypeOf(_detailPage)._is_QUrl;
        qtc.Attica__KnowledgeBaseEntry_SetDetailPage(@ptrCast(self.ptr), @ptrCast(_detailPage.ptr));
    }

    /// ### DEPRECATED: Use `detailPage` instead
    ///
    pub const DetailPage = detailPage;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#detailPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn detailPage(self: Attica__KnowledgeBaseEntry) QUrl {
        return .{ .ptr = qtc.Attica__KnowledgeBaseEntry_DetailPage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addExtendedAttribute` instead
    ///
    pub const AddExtendedAttribute = addExtendedAttribute;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#addExtendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn addExtendedAttribute(self: Attica__KnowledgeBaseEntry, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_AddExtendedAttribute(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### DEPRECATED: Use `extendedAttribute` instead
    ///
    pub const ExtendedAttribute = extendedAttribute;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#extendedAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn extendedAttribute(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__KnowledgeBaseEntry_ExtendedAttribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__KnowledgeBaseEntry.extendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extendedAttributes` instead
    ///
    pub const ExtendedAttributes = extendedAttributes;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extendedAttributes(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__KnowledgeBaseEntry_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("Attica__KnowledgeBaseEntry.extendedAttributes: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("Attica__KnowledgeBaseEntry.extendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("Attica__KnowledgeBaseEntry.extendedAttributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn isValid(self: Attica__KnowledgeBaseEntry) bool {
        return qtc.Attica__KnowledgeBaseEntry_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn delete(self: Attica__KnowledgeBaseEntry) void {
        qtc.Attica__KnowledgeBaseEntry_Delete(@ptrCast(self.ptr));
    }
};
