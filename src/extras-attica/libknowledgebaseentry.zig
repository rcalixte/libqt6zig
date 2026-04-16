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

    /// New constructs a new Attica::KnowledgeBaseEntry object.
    ///
    pub fn New() Attica__KnowledgeBaseEntry {
        return .{ .ptr = qtc.Attica__KnowledgeBaseEntry_new() };
    }

    /// New2 constructs a new Attica::KnowledgeBaseEntry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__KnowledgeBaseEntry `
    ///
    pub fn New2(other: anytype) Attica__KnowledgeBaseEntry {
        comptime _ = @TypeOf(other)._is_Attica__KnowledgeBaseEntry;
        return .{ .ptr = qtc.Attica__KnowledgeBaseEntry_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` other: Attica__KnowledgeBaseEntry `
    ///
    pub fn OperatorAssign(self: Attica__KnowledgeBaseEntry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__KnowledgeBaseEntry;
        qtc.Attica__KnowledgeBaseEntry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__KnowledgeBaseEntry, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__knowledgebaseentry.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setContentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` id: i32 `
    ///
    pub fn SetContentId(self: Attica__KnowledgeBaseEntry, id: i32) void {
        qtc.Attica__KnowledgeBaseEntry_SetContentId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#contentId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn ContentId(self: Attica__KnowledgeBaseEntry) i32 {
        return qtc.Attica__KnowledgeBaseEntry_ContentId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` user: []const u8 `
    ///
    pub fn SetUser(self: Attica__KnowledgeBaseEntry, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetUser(@ptrCast(self.ptr), user_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__knowledgebaseentry.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` status: []const u8 `
    ///
    pub fn SetStatus(self: Attica__KnowledgeBaseEntry, status: []const u8) void {
        const status_str = qtc.libqt_string{
            .len = status.len,
            .data = status.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetStatus(@ptrCast(self.ptr), status_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Status(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Status(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__knowledgebaseentry.Status: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` changed: QDateTime `
    ///
    pub fn SetChanged(self: Attica__KnowledgeBaseEntry, changed: anytype) void {
        comptime _ = @TypeOf(changed)._is_QDateTime;
        qtc.Attica__KnowledgeBaseEntry_SetChanged(@ptrCast(self.ptr), @ptrCast(changed.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn Changed(self: Attica__KnowledgeBaseEntry) QDateTime {
        return .{ .ptr = qtc.Attica__KnowledgeBaseEntry_Changed(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__KnowledgeBaseEntry, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__knowledgebaseentry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: Attica__KnowledgeBaseEntry, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__knowledgebaseentry.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setAnswer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` answer: []const u8 `
    ///
    pub fn SetAnswer(self: Attica__KnowledgeBaseEntry, answer: []const u8) void {
        const answer_str = qtc.libqt_string{
            .len = answer.len,
            .data = answer.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetAnswer(@ptrCast(self.ptr), answer_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#answer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Answer(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__KnowledgeBaseEntry_Answer(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__knowledgebaseentry.Answer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` comments: i32 `
    ///
    pub fn SetComments(self: Attica__KnowledgeBaseEntry, comments: i32) void {
        qtc.Attica__KnowledgeBaseEntry_SetComments(@ptrCast(self.ptr), @bitCast(comments));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#comments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn Comments(self: Attica__KnowledgeBaseEntry) i32 {
        return qtc.Attica__KnowledgeBaseEntry_Comments(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#setDetailPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` detailPage: QUrl `
    ///
    pub fn SetDetailPage(self: Attica__KnowledgeBaseEntry, detailPage: anytype) void {
        comptime _ = @TypeOf(detailPage)._is_QUrl;
        qtc.Attica__KnowledgeBaseEntry_SetDetailPage(@ptrCast(self.ptr), @ptrCast(detailPage.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#detailPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn DetailPage(self: Attica__KnowledgeBaseEntry) QUrl {
        return .{ .ptr = qtc.Attica__KnowledgeBaseEntry_DetailPage(@ptrCast(self.ptr)) };
    }

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
    pub fn AddExtendedAttribute(self: Attica__KnowledgeBaseEntry, key: []const u8, value: []const u8) void {
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
    pub fn ExtendedAttribute(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__KnowledgeBaseEntry_ExtendedAttribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__knowledgebaseentry.ExtendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#extendedAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtendedAttributes(self: Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__KnowledgeBaseEntry_ExtendedAttributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("attica__knowledgebaseentry.ExtendedAttributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("attica__knowledgebaseentry.ExtendedAttributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("attica__knowledgebaseentry.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-knowledgebaseentry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn IsValid(self: Attica__KnowledgeBaseEntry) bool {
        return qtc.Attica__KnowledgeBaseEntry_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__KnowledgeBaseEntry `
    ///
    pub fn Delete(self: Attica__KnowledgeBaseEntry) void {
        qtc.Attica__KnowledgeBaseEntry_Delete(@ptrCast(self.ptr));
    }
};
