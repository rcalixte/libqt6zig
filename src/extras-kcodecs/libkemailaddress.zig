const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kemailaddress_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kemailaddress.html)
pub const kemailaddress = struct {
    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddressList)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SplitAddressList(param1: []const u8, allocator: std.mem.Allocator) []const []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KEmailAddress_SplitAddressList(param1_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kemailaddress.SplitAddressList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kemailaddress.SplitAddressList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: []u8 `
    ///
    /// ` param3: []u8 `
    ///
    /// ` param4: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` kemailaddress_enums.EmailParseResult `
    ///
    pub fn SplitAddress(param1: []u8, param2: []u8, param3: []u8, param4: []u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        return qtc.KEmailAddress_SplitAddress(param1_str, param2_str, param3_str, param4_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` param4: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kemailaddress_enums.EmailParseResult `
    ///
    pub fn SplitAddress2(param1: []const u8, param2: []const u8, param3: []const u8, param4: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        const param4_str = qtc.libqt_string{
            .len = param4.len,
            .data = param4.ptr,
        };
        return qtc.KEmailAddress_SplitAddress2(param1_str, param2_str, param3_str, param4_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#isValidAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kemailaddress_enums.EmailParseResult `
    ///
    pub fn IsValidAddress(param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KEmailAddress_IsValidAddress(param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#isValidAddressList)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kemailaddress_enums.EmailParseResult `
    ///
    pub fn IsValidAddressList(param1: []const u8, param2: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KEmailAddress_IsValidAddressList(param1_str, param2_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#emailParseResultToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kemailaddress_enums.EmailParseResult `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmailParseResultToString(param1: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEmailAddress_EmailParseResultToString(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.EmailParseResultToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#isValidSimpleAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn IsValidSimpleAddress(param1: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KEmailAddress_IsValidSimpleAddress(param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#simpleEmailAddressErrorMsg)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SimpleEmailAddressErrorMsg(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEmailAddress_SimpleEmailAddressErrorMsg();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.SimpleEmailAddressErrorMsg: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtractEmailAddress(param1: []u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_ExtractEmailAddress(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kemailaddress.ExtractEmailAddress: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtractEmailAddress2(param1: []u8, param2: []const u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_ExtractEmailAddress2(param1_str, param2_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kemailaddress.ExtractEmailAddress2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtractEmailAddress3(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KEmailAddress_ExtractEmailAddress3(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.ExtractEmailAddress3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtractEmailAddress4(param1: []const u8, param2: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var _str = qtc.KEmailAddress_ExtractEmailAddress4(param1_str, param2_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.ExtractEmailAddress4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FirstEmailAddress(param1: []u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_FirstEmailAddress(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kemailaddress.FirstEmailAddress: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FirstEmailAddress2(param1: []u8, param2: []const u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_FirstEmailAddress2(param1_str, param2_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kemailaddress.FirstEmailAddress2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FirstEmailAddress3(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KEmailAddress_FirstEmailAddress3(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.FirstEmailAddress3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FirstEmailAddress4(param1: []const u8, param2: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        var _str = qtc.KEmailAddress_FirstEmailAddress4(param1_str, param2_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.FirstEmailAddress4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddressAndName)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    pub fn ExtractEmailAddressAndName(param1: []const u8, param2: []const u8, param3: []const u8) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        return qtc.KEmailAddress_ExtractEmailAddressAndName(param1_str, param2_str, param3_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#compareEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: bool `
    ///
    pub fn CompareEmail(param1: []const u8, param2: []const u8, param3: bool) bool {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        return qtc.KEmailAddress_CompareEmail(param1_str, param2_str, param3);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#normalizedAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NormalizedAddress(param1: []const u8, param2: []const u8, param3: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        var _str = qtc.KEmailAddress_NormalizedAddress(param1_str, param2_str, param3_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.NormalizedAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#fromIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FromIdn(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KEmailAddress_FromIdn(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.FromIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#toIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToIdn(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KEmailAddress_ToIdn(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.ToIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndDecodeIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NormalizeAddressesAndDecodeIdn(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KEmailAddress_NormalizeAddressesAndDecodeIdn(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.NormalizeAddressesAndDecodeIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndEncodeIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NormalizeAddressesAndEncodeIdn(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KEmailAddress_NormalizeAddressesAndEncodeIdn(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.NormalizeAddressesAndEncodeIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#quoteNameIfNecessary)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QuoteNameIfNecessary(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KEmailAddress_QuoteNameIfNecessary(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.QuoteNameIfNecessary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#encodeMailtoUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn EncodeMailtoUrl(param1: []const u8) QtC.QUrl {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KEmailAddress_EncodeMailtoUrl(param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#decodeMailtoUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DecodeMailtoUrl(param1: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEmailAddress_DecodeMailtoUrl(@ptrCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.DecodeMailtoUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kemailaddress.html#public-types)
pub const enums = struct {
    pub const EmailParseResult = enum(i32) {
        pub const AddressOk: i32 = 0;
        pub const AddressEmpty: i32 = 1;
        pub const UnexpectedEnd: i32 = 2;
        pub const UnbalancedParens: i32 = 3;
        pub const MissingDomainPart: i32 = 4;
        pub const UnclosedAngleAddr: i32 = 5;
        pub const UnopenedAngleAddr: i32 = 6;
        pub const TooManyAts: i32 = 7;
        pub const UnexpectedComma: i32 = 8;
        pub const TooFewAts: i32 = 9;
        pub const MissingLocalPart: i32 = 10;
        pub const UnbalancedQuote: i32 = 11;
        pub const NoAddressSpec: i32 = 12;
        pub const DisallowedChar: i32 = 13;
        pub const InvalidDisplayName: i32 = 14;
        pub const TooFewDots: i32 = 15;
    };
};
