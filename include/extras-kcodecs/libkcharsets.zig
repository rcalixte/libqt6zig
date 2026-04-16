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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcharsets.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#charsets)
    ///
    pub fn Charsets() KCharsets {
        return .{ .ptr = qtc.KCharsets_Charsets() };
    }

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#toEntity)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` ch: QChar `
    ///
    pub fn ToEntity(allocator: std.mem.Allocator, ch: anytype) []const u8 {
        comptime _ = @TypeOf(ch)._is_QChar;
        var _str = qtc.KCharsets_ToEntity(@ptrCast(ch.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcharsets.ToEntity: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#resolveEntities)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ResolveEntities(allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KCharsets_ResolveEntities(text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcharsets.ResolveEntities: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#availableEncodingNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharsets `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableEncodingNames(self: KCharsets, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCharsets_AvailableEncodingNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcharsets.AvailableEncodingNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcharsets.AvailableEncodingNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#descriptiveEncodingNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharsets `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DescriptiveEncodingNames(self: KCharsets, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCharsets_DescriptiveEncodingNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcharsets.DescriptiveEncodingNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcharsets.DescriptiveEncodingNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#encodingsByScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCharsets `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EncodingsByScript(self: KCharsets, allocator: std.mem.Allocator) [][]const []const u8 {
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
        const _ret = allocator.alloc([]const []const u8, _arr.len) catch @panic("kcharsets.EncodingsByScript: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _strlist = allocator.alloc([]const u8, _data.len) catch @panic("kcharsets.EncodingsByScript: Memory allocation failed");
            var _strdata: [*]qtc.libqt_string = @ptrCast(@alignCast(_data.data));
            for (0.._data.len) |j| {
                const _buf = allocator.alloc(u8, _strdata[j].len) catch @panic("kcharsets.EncodingsByScript: Memory allocation failed");
                @memcpy(_buf, _strdata[j].data[0.._strdata[j].len]);
                _strlist[j] = _buf;
            }
            _ret[i] = _strlist;
        }
        return _ret;
    }

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
    pub fn EncodingForName(self: KCharsets, allocator: std.mem.Allocator, descriptiveName: []const u8) []const u8 {
        const descriptiveName_str = qtc.libqt_string{
            .len = descriptiveName.len,
            .data = descriptiveName.ptr,
        };
        var _str = qtc.KCharsets_EncodingForName(@ptrCast(self.ptr), descriptiveName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcharsets.EncodingForName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcharsets.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcharsets.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kcharsets.html#dtor.KCharsets)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KCharsets `
    ///
    pub fn Delete(self: KCharsets) void {
        qtc.KCharsets_Delete(@ptrCast(self.ptr));
    }
};
