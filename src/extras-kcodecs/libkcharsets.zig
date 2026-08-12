const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcharsets.html)
pub const KCharsets = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcharsets.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCharsets,

    pub const _is_KCharsets = {};

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCharsets.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `charsets` instead
    ///
    pub const Charsets = charsets;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#charsets)
    ///
    pub fn charsets() KCharsets {
        return .{ .ptr = qtc.KCharsets_Charsets() };
    }

    /// ### DEPRECATED: Use `fromEntity` instead
    ///
    pub const FromEntity = fromEntity;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#fromEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    pub fn fromEntity(str: []const u8) QChar {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.KCharsets_FromEntity(str_str) };
    }

    /// ### DEPRECATED: Use `fromEntity2` instead
    ///
    pub const FromEntity2 = fromEntity2;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#fromEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` str: []const u8 `
    ///
    /// ` len: *i32 `
    ///
    pub fn fromEntity2(str: []const u8, len: *i32) QChar {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.KCharsets_FromEntity2(str_str, @ptrCast(len)) };
    }

    /// ### DEPRECATED: Use `toEntity` instead
    ///
    pub const ToEntity = toEntity;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ch: QChar `
    ///
    pub fn toEntity(allocator: std.mem.Allocator, ch: anytype) []const u8 {
        comptime _ = @TypeOf(ch)._is_QChar;
        var _str = qtc.KCharsets_ToEntity(@ptrCast(ch.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCharsets.toEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resolveEntities` instead
    ///
    pub const ResolveEntities = resolveEntities;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#resolveEntities)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn resolveEntities(allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KCharsets_ResolveEntities(text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCharsets.resolveEntities: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `availableEncodingNames` instead
    ///
    pub const AvailableEncodingNames = availableEncodingNames;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#availableEncodingNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharsets `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableEncodingNames(self: KCharsets, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCharsets_AvailableEncodingNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCharsets.availableEncodingNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCharsets.availableEncodingNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `descriptiveEncodingNames` instead
    ///
    pub const DescriptiveEncodingNames = descriptiveEncodingNames;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#descriptiveEncodingNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharsets `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn descriptiveEncodingNames(self: KCharsets, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCharsets_DescriptiveEncodingNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCharsets.descriptiveEncodingNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCharsets.descriptiveEncodingNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `encodingsByScript` instead
    ///
    pub const EncodingsByScript = encodingsByScript;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#encodingsByScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharsets `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn encodingsByScript(self: KCharsets, allocator: std.mem.Allocator) [][]const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCharsets_EncodingsByScript(@ptrCast(self.ptr));
        const _str: [*]qtc.libqt_list = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                var _strlist: [*]qtc.libqt_string = @ptrCast(@alignCast(_str[i].data));
                for (0.._str[i].len) |j|
                    qtc.libqt_string_free(@ptrCast(&_strlist[j]));
                qtc.libqt_free(_str[i].data);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const []const u8, _arr.len) catch @panic("KCharsets.encodingsByScript: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _strlist = allocator.alloc([]const u8, _data_val.len) catch @panic("KCharsets.encodingsByScript: Memory allocation failed");
            var _strdata: [*]qtc.libqt_string = @ptrCast(@alignCast(_data_val.data));
            for (0.._data_val.len) |j| {
                const _buf = allocator.alloc(u8, _strdata[j].len) catch @panic("KCharsets.encodingsByScript: Memory allocation failed");
                @memcpy(_buf, _strdata[j].data[0.._strdata[j].len]);
                _strlist[j] = _buf;
            }
            _ret[i] = _strlist;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `descriptionForEncoding` instead
    ///
    pub const DescriptionForEncoding = descriptionForEncoding;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#descriptionForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharsets `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn descriptionForEncoding(self: KCharsets, allocator: std.mem.Allocator, encoding: []const u8) []const u8 {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        var _str = qtc.KCharsets_DescriptionForEncoding(@ptrCast(self.ptr), encoding_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCharsets.descriptionForEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `encodingForName` instead
    ///
    pub const EncodingForName = encodingForName;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#encodingForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharsets `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` descriptiveName: []const u8 `
    ///
    pub fn encodingForName(self: KCharsets, allocator: std.mem.Allocator, descriptiveName: []const u8) []const u8 {
        const descriptiveName_str = qtc.libqt_string{
            .len = descriptiveName.len,
            .data = descriptiveName.ptr,
        };
        var _str = qtc.KCharsets_EncodingForName(@ptrCast(self.ptr), descriptiveName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCharsets.encodingForName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCharsets.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCharsets.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#dtor.KCharsets)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCharsets `
    ///
    pub fn delete(self: KCharsets) void {
        qtc.KCharsets_Delete(@ptrCast(self.ptr));
    }
};
