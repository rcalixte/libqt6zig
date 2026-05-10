const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJsonObject = @import("libqt6").QJsonObject;
const TextEmoticonsCore__UnicodeEmoticon = @import("libqt6").TextEmoticonsCore__UnicodeEmoticon;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)
pub const TextEmoticonsCore__UnicodeEmoticonParser = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsCore__UnicodeEmoticonParser,

    pub const _is_TextEmoticonsCore__UnicodeEmoticonParser = {};

    /// New constructs a new TextEmoticonsCore::UnicodeEmoticonParser object.
    ///
    pub fn New() TextEmoticonsCore__UnicodeEmoticonParser {
        return .{ .ptr = qtc.TextEmoticonsCore__UnicodeEmoticonParser_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticonParser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` o: QJsonObject `
    ///
    pub fn Parse(self: TextEmoticonsCore__UnicodeEmoticonParser, allocator: std.mem.Allocator, o: anytype) []TextEmoticonsCore__UnicodeEmoticon {
        comptime _ = @TypeOf(o)._is_QJsonObject;
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__UnicodeEmoticonParser_Parse(@ptrCast(self.ptr), @ptrCast(o.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(TextEmoticonsCore__UnicodeEmoticon, _arr.len) catch @panic("textemoticonscore__unicodeemoticonparser.Parse: Memory allocation failed");
        const _data: [*]QtC.TextEmoticonsCore__UnicodeEmoticon = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn ChangeOrder(name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.TextEmoticonsCore__UnicodeEmoticonParser_ChangeOrder(name_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1UnicodeEmoticonParser.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__UnicodeEmoticonParser `
    ///
    pub fn Delete(self: TextEmoticonsCore__UnicodeEmoticonParser) void {
        qtc.TextEmoticonsCore__UnicodeEmoticonParser_Delete(@ptrCast(self.ptr));
    }
};
