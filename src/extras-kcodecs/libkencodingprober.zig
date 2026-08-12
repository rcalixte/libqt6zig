const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kencodingprober_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kencodingprober.html)
pub const KEncodingProber = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KEncodingProber,

    pub const _is_KEncodingProber = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KEncodingProber object in C++ memory
    ///
    pub fn new() KEncodingProber {
        return .{ .ptr = qtc.KEncodingProber_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KEncodingProber object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _proberType: kencodingprober_enums.ProberType `
    ///
    pub fn new2(_proberType: i32) KEncodingProber {
        return .{ .ptr = qtc.KEncodingProber_new2(@bitCast(_proberType)) };
    }

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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEncodingProber.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingProber `
    ///
    pub fn reset(self: KEncodingProber) void {
        qtc.KEncodingProber_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `feed` instead
    ///
    pub const Feed = feed;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#feed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingProber `
    ///
    /// ` data: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` kencodingprober_enums.ProberState `
    ///
    pub fn feed(self: KEncodingProber, data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KEncodingProber_Feed(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `feed2` instead
    ///
    pub const Feed2 = feed2;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#feed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingProber `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    /// ## Returns:
    ///
    /// ` kencodingprober_enums.ProberState `
    ///
    pub fn feed2(self: KEncodingProber, data: [:0]const u8, len: isize) i32 {
        const data_Cstring = data.ptr;
        return qtc.KEncodingProber_Feed2(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingProber `
    ///
    /// ## Returns:
    ///
    /// ` kencodingprober_enums.ProberState `
    ///
    pub fn state(self: KEncodingProber) i32 {
        return qtc.KEncodingProber_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `encoding` instead
    ///
    pub const Encoding = encoding;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingProber `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn encoding(self: KEncodingProber, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KEncodingProber_Encoding(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KEncodingProber.encoding: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `confidence` instead
    ///
    pub const Confidence = confidence;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#confidence)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingProber `
    ///
    pub fn confidence(self: KEncodingProber) f32 {
        return qtc.KEncodingProber_Confidence(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proberType` instead
    ///
    pub const ProberType = proberType;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#proberType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingProber `
    ///
    /// ## Returns:
    ///
    /// ` kencodingprober_enums.ProberType `
    ///
    pub fn proberType(self: KEncodingProber) i32 {
        return qtc.KEncodingProber_ProberType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProberType` instead
    ///
    pub const SetProberType = setProberType;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#setProberType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEncodingProber `
    ///
    /// ` _proberType: kencodingprober_enums.ProberType `
    ///
    pub fn setProberType(self: KEncodingProber, _proberType: i32) void {
        qtc.KEncodingProber_SetProberType(@ptrCast(self.ptr), @bitCast(_proberType));
    }

    /// ### DEPRECATED: Use `proberTypeForName` instead
    ///
    pub const ProberTypeForName = proberTypeForName;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#proberTypeForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` lang: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kencodingprober_enums.ProberType `
    ///
    pub fn proberTypeForName(lang: []const u8) i32 {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        return qtc.KEncodingProber_ProberTypeForName(lang_str);
    }

    /// ### DEPRECATED: Use `nameForProberType` instead
    ///
    pub const NameForProberType = nameForProberType;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#nameForProberType)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _proberType: kencodingprober_enums.ProberType `
    ///
    pub fn nameForProberType(allocator: std.mem.Allocator, _proberType: i32) []const u8 {
        var _str = qtc.KEncodingProber_NameForProberType(@bitCast(_proberType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEncodingProber.nameForProberType: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEncodingProber.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEncodingProber.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kencodingprober.html#dtor.KEncodingProber)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KEncodingProber `
    ///
    pub fn delete(self: KEncodingProber) void {
        qtc.KEncodingProber_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kencodingprober.html#public-types)
pub const enums = struct {
    pub const ProberState = enum(i32) {
        pub const FoundIt: i32 = 0;
        pub const NotMe: i32 = 1;
        pub const Probing: i32 = 2;
    };

    pub const ProberType = enum(i32) {
        pub const None: i32 = 0;
        pub const Universal: i32 = 1;
        pub const Arabic: i32 = 2;
        pub const Baltic: i32 = 3;
        pub const CentralEuropean: i32 = 4;
        pub const ChineseSimplified: i32 = 5;
        pub const ChineseTraditional: i32 = 6;
        pub const Cyrillic: i32 = 7;
        pub const Greek: i32 = 8;
        pub const Hebrew: i32 = 9;
        pub const Japanese: i32 = 10;
        pub const Korean: i32 = 11;
        pub const NorthernSaami: i32 = 12;
        pub const Other: i32 = 13;
        pub const SouthEasternEurope: i32 = 14;
        pub const Thai: i32 = 15;
        pub const Turkish: i32 = 16;
        pub const Unicode: i32 = 17;
        pub const WesternEuropean: i32 = 18;
    };
};
