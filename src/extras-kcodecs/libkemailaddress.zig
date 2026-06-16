const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const kemailaddress_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kemailaddress.html)
pub const KEmailAddress = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KEmailAddress,

    pub const _is_KEmailAddress = {};

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddressList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` aStr: []const u8 `
    ///
    pub fn SplitAddressList(allocator: std.mem.Allocator, aStr: []const u8) []const []const u8 {
        const aStr_str = qtc.libqt_string{
            .len = aStr.len,
            .data = aStr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KEmailAddress_SplitAddressList(aStr_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` address: []u8 `
    ///
    /// ` displayName: []u8 `
    ///
    /// ` addrSpec: []u8 `
    ///
    /// ` comment: []u8 `
    ///
    /// ## Returns:
    ///
    /// ` kemailaddress_enums.EmailParseResult `
    ///
    pub fn SplitAddress(address: []u8, displayName: []u8, addrSpec: []u8, comment: []u8) i32 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const addrSpec_str = qtc.libqt_string{
            .len = addrSpec.len,
            .data = addrSpec.ptr,
        };
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        return qtc.KEmailAddress_SplitAddress(address_str, displayName_str, addrSpec_str, comment_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    /// ` displayName: []const u8 `
    ///
    /// ` addrSpec: []const u8 `
    ///
    /// ` comment: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kemailaddress_enums.EmailParseResult `
    ///
    pub fn SplitAddress2(address: []const u8, displayName: []const u8, addrSpec: []const u8, comment: []const u8) i32 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const addrSpec_str = qtc.libqt_string{
            .len = addrSpec.len,
            .data = addrSpec.ptr,
        };
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        return qtc.KEmailAddress_SplitAddress2(address_str, displayName_str, addrSpec_str, comment_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#isValidAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` aStr: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kemailaddress_enums.EmailParseResult `
    ///
    pub fn IsValidAddress(aStr: []const u8) i32 {
        const aStr_str = qtc.libqt_string{
            .len = aStr.len,
            .data = aStr.ptr,
        };
        return qtc.KEmailAddress_IsValidAddress(aStr_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#isValidAddressList)
    ///
    /// ## Parameter(s):
    ///
    /// ` aStr: []const u8 `
    ///
    /// ` badAddr: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` kemailaddress_enums.EmailParseResult `
    ///
    pub fn IsValidAddressList(aStr: []const u8, badAddr: []const u8) i32 {
        const aStr_str = qtc.libqt_string{
            .len = aStr.len,
            .data = aStr.ptr,
        };
        const badAddr_str = qtc.libqt_string{
            .len = badAddr.len,
            .data = badAddr.ptr,
        };
        return qtc.KEmailAddress_IsValidAddressList(aStr_str, badAddr_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#emailParseResultToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` errorCode: kemailaddress_enums.EmailParseResult `
    ///
    pub fn EmailParseResultToString(allocator: std.mem.Allocator, errorCode: i32) []const u8 {
        var _str = qtc.KEmailAddress_EmailParseResultToString(@bitCast(errorCode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.EmailParseResultToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#isValidSimpleAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` aStr: []const u8 `
    ///
    pub fn IsValidSimpleAddress(aStr: []const u8) bool {
        const aStr_str = qtc.libqt_string{
            .len = aStr.len,
            .data = aStr.ptr,
        };
        return qtc.KEmailAddress_IsValidSimpleAddress(aStr_str);
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []u8 `
    ///
    pub fn ExtractEmailAddress(allocator: std.mem.Allocator, address: []u8) []u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_ExtractEmailAddress(address_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kemailaddress.ExtractEmailAddress: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []u8 `
    ///
    /// ` errorMessage: []const u8 `
    ///
    pub fn ExtractEmailAddress2(allocator: std.mem.Allocator, address: []u8, errorMessage: []const u8) []u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_ExtractEmailAddress2(address_str, errorMessage_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kemailaddress.ExtractEmailAddress2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    pub fn ExtractEmailAddress3(allocator: std.mem.Allocator, address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _str = qtc.KEmailAddress_ExtractEmailAddress3(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.ExtractEmailAddress3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    /// ` errorMessage: []const u8 `
    ///
    pub fn ExtractEmailAddress4(allocator: std.mem.Allocator, address: []const u8, errorMessage: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        var _str = qtc.KEmailAddress_ExtractEmailAddress4(address_str, errorMessage_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.ExtractEmailAddress4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addresses: []u8 `
    ///
    pub fn FirstEmailAddress(allocator: std.mem.Allocator, addresses: []u8) []u8 {
        const addresses_str = qtc.libqt_string{
            .len = addresses.len,
            .data = addresses.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_FirstEmailAddress(addresses_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kemailaddress.FirstEmailAddress: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addresses: []u8 `
    ///
    /// ` errorMessage: []const u8 `
    ///
    pub fn FirstEmailAddress2(allocator: std.mem.Allocator, addresses: []u8, errorMessage: []const u8) []u8 {
        const addresses_str = qtc.libqt_string{
            .len = addresses.len,
            .data = addresses.ptr,
        };
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_FirstEmailAddress2(addresses_str, errorMessage_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kemailaddress.FirstEmailAddress2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addresses: []const u8 `
    ///
    pub fn FirstEmailAddress3(allocator: std.mem.Allocator, addresses: []const u8) []const u8 {
        const addresses_str = qtc.libqt_string{
            .len = addresses.len,
            .data = addresses.ptr,
        };
        var _str = qtc.KEmailAddress_FirstEmailAddress3(addresses_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.FirstEmailAddress3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addresses: []const u8 `
    ///
    /// ` errorMessage: []const u8 `
    ///
    pub fn FirstEmailAddress4(allocator: std.mem.Allocator, addresses: []const u8, errorMessage: []const u8) []const u8 {
        const addresses_str = qtc.libqt_string{
            .len = addresses.len,
            .data = addresses.ptr,
        };
        const errorMessage_str = qtc.libqt_string{
            .len = errorMessage.len,
            .data = errorMessage.ptr,
        };
        var _str = qtc.KEmailAddress_FirstEmailAddress4(addresses_str, errorMessage_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.FirstEmailAddress4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddressAndName)
    ///
    /// ## Parameter(s):
    ///
    /// ` aStr: []const u8 `
    ///
    /// ` mail: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ExtractEmailAddressAndName(aStr: []const u8, mail: []const u8, name: []const u8) bool {
        const aStr_str = qtc.libqt_string{
            .len = aStr.len,
            .data = aStr.ptr,
        };
        const mail_str = qtc.libqt_string{
            .len = mail.len,
            .data = mail.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KEmailAddress_ExtractEmailAddressAndName(aStr_str, mail_str, name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#compareEmail)
    ///
    /// ## Parameter(s):
    ///
    /// ` email1: []const u8 `
    ///
    /// ` email2: []const u8 `
    ///
    /// ` matchName: bool `
    ///
    pub fn CompareEmail(email1: []const u8, email2: []const u8, matchName: bool) bool {
        const email1_str = qtc.libqt_string{
            .len = email1.len,
            .data = email1.ptr,
        };
        const email2_str = qtc.libqt_string{
            .len = email2.len,
            .data = email2.ptr,
        };
        return qtc.KEmailAddress_CompareEmail(email1_str, email2_str, matchName);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#normalizedAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` displayName: []const u8 `
    ///
    /// ` addrSpec: []const u8 `
    ///
    /// ` comment: []const u8 `
    ///
    pub fn NormalizedAddress(allocator: std.mem.Allocator, displayName: []const u8, addrSpec: []const u8, comment: []const u8) []const u8 {
        const displayName_str = qtc.libqt_string{
            .len = displayName.len,
            .data = displayName.ptr,
        };
        const addrSpec_str = qtc.libqt_string{
            .len = addrSpec.len,
            .data = addrSpec.ptr,
        };
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        var _str = qtc.KEmailAddress_NormalizedAddress(displayName_str, addrSpec_str, comment_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.NormalizedAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#fromIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addrSpec: []const u8 `
    ///
    pub fn FromIdn(allocator: std.mem.Allocator, addrSpec: []const u8) []const u8 {
        const addrSpec_str = qtc.libqt_string{
            .len = addrSpec.len,
            .data = addrSpec.ptr,
        };
        var _str = qtc.KEmailAddress_FromIdn(addrSpec_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.FromIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#toIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addrSpec: []const u8 `
    ///
    pub fn ToIdn(allocator: std.mem.Allocator, addrSpec: []const u8) []const u8 {
        const addrSpec_str = qtc.libqt_string{
            .len = addrSpec.len,
            .data = addrSpec.ptr,
        };
        var _str = qtc.KEmailAddress_ToIdn(addrSpec_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.ToIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndDecodeIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addresses: []const u8 `
    ///
    pub fn NormalizeAddressesAndDecodeIdn(allocator: std.mem.Allocator, addresses: []const u8) []const u8 {
        const addresses_str = qtc.libqt_string{
            .len = addresses.len,
            .data = addresses.ptr,
        };
        var _str = qtc.KEmailAddress_NormalizeAddressesAndDecodeIdn(addresses_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.NormalizeAddressesAndDecodeIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndEncodeIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn NormalizeAddressesAndEncodeIdn(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.KEmailAddress_NormalizeAddressesAndEncodeIdn(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.NormalizeAddressesAndEncodeIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#quoteNameIfNecessary)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn QuoteNameIfNecessary(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.KEmailAddress_QuoteNameIfNecessary(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailaddress.QuoteNameIfNecessary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#encodeMailtoUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` mailbox: []const u8 `
    ///
    pub fn EncodeMailtoUrl(mailbox: []const u8) QUrl {
        const mailbox_str = qtc.libqt_string{
            .len = mailbox.len,
            .data = mailbox.ptr,
        };
        return .{ .ptr = qtc.KEmailAddress_EncodeMailtoUrl(mailbox_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#decodeMailtoUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mailtoUrl: QUrl `
    ///
    pub fn DecodeMailtoUrl(allocator: std.mem.Allocator, mailtoUrl: anytype) []const u8 {
        comptime _ = @TypeOf(mailtoUrl)._is_QUrl;
        var _str = qtc.KEmailAddress_DecodeMailtoUrl(@ptrCast(mailtoUrl.ptr));
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
