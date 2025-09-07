const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kencodingprober_enums = enums;
const std = @import("std");

/// https://api.kde.org/kencodingprober.html
pub const kencodingprober = struct {
    /// New constructs a new KEncodingProber object.
    ///
    ///
    pub fn New() QtC.KEncodingProber {
        return qtc.KEncodingProber_new();
    }

    /// New2 constructs a new KEncodingProber object.
    ///
    /// ``` proberType: kencodingprober_enums.ProberType ```
    pub fn New2(proberType: i32) QtC.KEncodingProber {
        return qtc.KEncodingProber_new2(@intCast(proberType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const _str = qtc.KEncodingProber_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingprober.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#reset)
    ///
    /// ``` self: QtC.KEncodingProber ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.KEncodingProber_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#feed)
    ///
    /// ``` self: QtC.KEncodingProber, data: []const u8 ```
    ///
    /// Returns: ``` kencodingprober_enums.ProberState ```
    pub fn Feed(self: ?*anyopaque, data: []const u8) i32 {
        return qtc.KEncodingProber_Feed(@ptrCast(self), data.ptr);
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#feed)
    ///
    /// ``` self: QtC.KEncodingProber, data: []const u8, lenVal: i64 ```
    ///
    /// Returns: ``` kencodingprober_enums.ProberState ```
    pub fn Feed2(self: ?*anyopaque, data: []const u8, lenVal: i64) i32 {
        const data_Cstring = data.ptr;
        return qtc.KEncodingProber_Feed2(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#state)
    ///
    /// ``` self: QtC.KEncodingProber ```
    ///
    /// Returns: ``` kencodingprober_enums.ProberState ```
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.KEncodingProber_State(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#encoding)
    ///
    /// ``` self: QtC.KEncodingProber, allocator: std.mem.Allocator ```
    pub fn Encoding(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KEncodingProber_Encoding(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kencodingprober.Encoding: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#confidence)
    ///
    /// ``` self: QtC.KEncodingProber ```
    pub fn Confidence(self: ?*anyopaque) f32 {
        return qtc.KEncodingProber_Confidence(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#proberType)
    ///
    /// ``` self: QtC.KEncodingProber ```
    ///
    /// Returns: ``` kencodingprober_enums.ProberType ```
    pub fn ProberType(self: ?*anyopaque) i32 {
        return qtc.KEncodingProber_ProberType(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#setProberType)
    ///
    /// ``` self: QtC.KEncodingProber, proberType: kencodingprober_enums.ProberType ```
    pub fn SetProberType(self: ?*anyopaque, proberType: i32) void {
        qtc.KEncodingProber_SetProberType(@ptrCast(self), @intCast(proberType));
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#proberTypeForName)
    ///
    /// ``` lang: []const u8 ```
    ///
    /// Returns: ``` kencodingprober_enums.ProberType ```
    pub fn ProberTypeForName(lang: []const u8) i32 {
        const lang_str = qtc.libqt_string{
            .len = lang.len,
            .data = lang.ptr,
        };
        return qtc.KEncodingProber_ProberTypeForName(lang_str);
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#nameForProberType)
    ///
    /// ``` proberType: kencodingprober_enums.ProberType, allocator: std.mem.Allocator ```
    pub fn NameForProberType(proberType: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KEncodingProber_NameForProberType(@intCast(proberType));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingprober.NameForProberType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.KEncodingProber_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingprober.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.KEncodingProber_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kencodingprober.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kencodingprober.html#dtor.KEncodingProber)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KEncodingProber ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KEncodingProber_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kencodingprober.html#types
pub const enums = struct {
    pub const ProberState = enum {
        pub const FoundIt: i32 = 0;
        pub const NotMe: i32 = 1;
        pub const Probing: i32 = 2;
    };

    pub const ProberType = enum {
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
