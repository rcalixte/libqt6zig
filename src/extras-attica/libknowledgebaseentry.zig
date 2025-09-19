const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api.kde.org/attica-knowledgebaseentry.html
pub const attica__knowledgebaseentry = struct {
    /// New constructs a new Attica::KnowledgeBaseEntry object.
    ///
    ///
    pub fn New() QtC.Attica__KnowledgeBaseEntry {
        return qtc.Attica__KnowledgeBaseEntry_new();
    }

    /// New2 constructs a new Attica::KnowledgeBaseEntry object.
    ///
    /// ``` other: QtC.Attica__KnowledgeBaseEntry ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__KnowledgeBaseEntry {
        return qtc.Attica__KnowledgeBaseEntry_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, other: QtC.Attica__KnowledgeBaseEntry ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__KnowledgeBaseEntry_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setId)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#id)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__KnowledgeBaseEntry_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::knowledgebaseentry.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setContentId)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, id: i32 ```
    pub fn SetContentId(self: ?*anyopaque, id: i32) void {
        qtc.Attica__KnowledgeBaseEntry_SetContentId(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#contentId)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry ```
    pub fn ContentId(self: ?*anyopaque) i32 {
        return qtc.Attica__KnowledgeBaseEntry_ContentId(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setUser)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, user: []const u8 ```
    pub fn SetUser(self: ?*anyopaque, user: []const u8) void {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetUser(@ptrCast(self), user_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#user)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator ```
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__KnowledgeBaseEntry_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::knowledgebaseentry.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setStatus)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, status: []const u8 ```
    pub fn SetStatus(self: ?*anyopaque, status: []const u8) void {
        const status_str = qtc.libqt_string{
            .len = status.len,
            .data = status.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetStatus(@ptrCast(self), status_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#status)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator ```
    pub fn Status(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__KnowledgeBaseEntry_Status(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::knowledgebaseentry.Status: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setChanged)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, changed: QtC.QDateTime ```
    pub fn SetChanged(self: ?*anyopaque, changed: ?*anyopaque) void {
        qtc.Attica__KnowledgeBaseEntry_SetChanged(@ptrCast(self), @ptrCast(changed));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#changed)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry ```
    pub fn Changed(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__KnowledgeBaseEntry_Changed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setName)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#name)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__KnowledgeBaseEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::knowledgebaseentry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setDescription)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, description: []const u8 ```
    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetDescription(@ptrCast(self), description_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#description)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__KnowledgeBaseEntry_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::knowledgebaseentry.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setAnswer)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, answer: []const u8 ```
    pub fn SetAnswer(self: ?*anyopaque, answer: []const u8) void {
        const answer_str = qtc.libqt_string{
            .len = answer.len,
            .data = answer.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_SetAnswer(@ptrCast(self), answer_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#answer)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator ```
    pub fn Answer(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__KnowledgeBaseEntry_Answer(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::knowledgebaseentry.Answer: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setComments)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, comments: i32 ```
    pub fn SetComments(self: ?*anyopaque, comments: i32) void {
        qtc.Attica__KnowledgeBaseEntry_SetComments(@ptrCast(self), @intCast(comments));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#comments)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry ```
    pub fn Comments(self: ?*anyopaque) i32 {
        return qtc.Attica__KnowledgeBaseEntry_Comments(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#setDetailPage)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, detailPage: QtC.QUrl ```
    pub fn SetDetailPage(self: ?*anyopaque, detailPage: ?*anyopaque) void {
        qtc.Attica__KnowledgeBaseEntry_SetDetailPage(@ptrCast(self), @ptrCast(detailPage));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#detailPage)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry ```
    pub fn DetailPage(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__KnowledgeBaseEntry_DetailPage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#addExtendedAttribute)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, key: []const u8, value: []const u8 ```
    pub fn AddExtendedAttribute(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__KnowledgeBaseEntry_AddExtendedAttribute(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#extendedAttribute)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ExtendedAttribute(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.Attica__KnowledgeBaseEntry_ExtendedAttribute(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::knowledgebaseentry.ExtendedAttribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#extendedAttributes)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry, allocator: std.mem.Allocator ```
    pub fn ExtendedAttributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__KnowledgeBaseEntry_ExtendedAttributes(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("attica::knowledgebaseentry.ExtendedAttributes: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-knowledgebaseentry.html#isValid)
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__KnowledgeBaseEntry_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__KnowledgeBaseEntry ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__KnowledgeBaseEntry_Delete(@ptrCast(self));
    }
};
