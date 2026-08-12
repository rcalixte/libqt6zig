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

    /// ### DEPRECATED: Use `splitAddressList` instead
    ///
    pub const SplitAddressList = splitAddressList;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#splitAddressList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` aStr: []const u8 `
    ///
    pub fn splitAddressList(allocator: std.mem.Allocator, aStr: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KEmailAddress.splitAddressList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KEmailAddress.splitAddressList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `splitAddress` instead
    ///
    pub const SplitAddress = splitAddress;

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
    pub fn splitAddress(address: []u8, displayName: []u8, addrSpec: []u8, comment: []u8) i32 {
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

    /// ### DEPRECATED: Use `splitAddress2` instead
    ///
    pub const SplitAddress2 = splitAddress2;

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
    pub fn splitAddress2(address: []const u8, displayName: []const u8, addrSpec: []const u8, comment: []const u8) i32 {
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

    /// ### DEPRECATED: Use `isValidAddress` instead
    ///
    pub const IsValidAddress = isValidAddress;

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
    pub fn isValidAddress(aStr: []const u8) i32 {
        const aStr_str = qtc.libqt_string{
            .len = aStr.len,
            .data = aStr.ptr,
        };
        return qtc.KEmailAddress_IsValidAddress(aStr_str);
    }

    /// ### DEPRECATED: Use `isValidAddressList` instead
    ///
    pub const IsValidAddressList = isValidAddressList;

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
    pub fn isValidAddressList(aStr: []const u8, badAddr: []const u8) i32 {
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

    /// ### DEPRECATED: Use `emailParseResultToString` instead
    ///
    pub const EmailParseResultToString = emailParseResultToString;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#emailParseResultToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` errorCode: kemailaddress_enums.EmailParseResult `
    ///
    pub fn emailParseResultToString(allocator: std.mem.Allocator, errorCode: i32) []const u8 {
        var _str = qtc.KEmailAddress_EmailParseResultToString(@bitCast(errorCode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.emailParseResultToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValidSimpleAddress` instead
    ///
    pub const IsValidSimpleAddress = isValidSimpleAddress;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#isValidSimpleAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` aStr: []const u8 `
    ///
    pub fn isValidSimpleAddress(aStr: []const u8) bool {
        const aStr_str = qtc.libqt_string{
            .len = aStr.len,
            .data = aStr.ptr,
        };
        return qtc.KEmailAddress_IsValidSimpleAddress(aStr_str);
    }

    /// ### DEPRECATED: Use `simpleEmailAddressErrorMsg` instead
    ///
    pub const SimpleEmailAddressErrorMsg = simpleEmailAddressErrorMsg;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#simpleEmailAddressErrorMsg)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn simpleEmailAddressErrorMsg(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEmailAddress_SimpleEmailAddressErrorMsg();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.simpleEmailAddressErrorMsg: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extractEmailAddress` instead
    ///
    pub const ExtractEmailAddress = extractEmailAddress;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []u8 `
    ///
    pub fn extractEmailAddress(allocator: std.mem.Allocator, address: []u8) []u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_ExtractEmailAddress(address_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KEmailAddress.extractEmailAddress: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extractEmailAddress2` instead
    ///
    pub const ExtractEmailAddress2 = extractEmailAddress2;

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
    pub fn extractEmailAddress2(allocator: std.mem.Allocator, address: []u8, errorMessage: []const u8) []u8 {
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KEmailAddress.extractEmailAddress2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extractEmailAddress3` instead
    ///
    pub const ExtractEmailAddress3 = extractEmailAddress3;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#extractEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    pub fn extractEmailAddress3(allocator: std.mem.Allocator, address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _str = qtc.KEmailAddress_ExtractEmailAddress3(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.extractEmailAddress3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extractEmailAddress4` instead
    ///
    pub const ExtractEmailAddress4 = extractEmailAddress4;

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
    pub fn extractEmailAddress4(allocator: std.mem.Allocator, address: []const u8, errorMessage: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.extractEmailAddress4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `firstEmailAddress` instead
    ///
    pub const FirstEmailAddress = firstEmailAddress;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addresses: []u8 `
    ///
    pub fn firstEmailAddress(allocator: std.mem.Allocator, addresses: []u8) []u8 {
        const addresses_str = qtc.libqt_string{
            .len = addresses.len,
            .data = addresses.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KEmailAddress_FirstEmailAddress(addresses_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KEmailAddress.firstEmailAddress: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `firstEmailAddress2` instead
    ///
    pub const FirstEmailAddress2 = firstEmailAddress2;

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
    pub fn firstEmailAddress2(allocator: std.mem.Allocator, addresses: []u8, errorMessage: []const u8) []u8 {
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KEmailAddress.firstEmailAddress2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `firstEmailAddress3` instead
    ///
    pub const FirstEmailAddress3 = firstEmailAddress3;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#firstEmailAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addresses: []const u8 `
    ///
    pub fn firstEmailAddress3(allocator: std.mem.Allocator, addresses: []const u8) []const u8 {
        const addresses_str = qtc.libqt_string{
            .len = addresses.len,
            .data = addresses.ptr,
        };
        var _str = qtc.KEmailAddress_FirstEmailAddress3(addresses_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.firstEmailAddress3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `firstEmailAddress4` instead
    ///
    pub const FirstEmailAddress4 = firstEmailAddress4;

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
    pub fn firstEmailAddress4(allocator: std.mem.Allocator, addresses: []const u8, errorMessage: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.firstEmailAddress4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extractEmailAddressAndName` instead
    ///
    pub const ExtractEmailAddressAndName = extractEmailAddressAndName;

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
    pub fn extractEmailAddressAndName(aStr: []const u8, mail: []const u8, name: []const u8) bool {
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

    /// ### DEPRECATED: Use `compareEmail` instead
    ///
    pub const CompareEmail = compareEmail;

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
    pub fn compareEmail(email1: []const u8, email2: []const u8, matchName: bool) bool {
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

    /// ### DEPRECATED: Use `normalizedAddress` instead
    ///
    pub const NormalizedAddress = normalizedAddress;

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
    pub fn normalizedAddress(allocator: std.mem.Allocator, displayName: []const u8, addrSpec: []const u8, comment: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.normalizedAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromIdn` instead
    ///
    pub const FromIdn = fromIdn;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#fromIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addrSpec: []const u8 `
    ///
    pub fn fromIdn(allocator: std.mem.Allocator, addrSpec: []const u8) []const u8 {
        const addrSpec_str = qtc.libqt_string{
            .len = addrSpec.len,
            .data = addrSpec.ptr,
        };
        var _str = qtc.KEmailAddress_FromIdn(addrSpec_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.fromIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toIdn` instead
    ///
    pub const ToIdn = toIdn;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#toIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addrSpec: []const u8 `
    ///
    pub fn toIdn(allocator: std.mem.Allocator, addrSpec: []const u8) []const u8 {
        const addrSpec_str = qtc.libqt_string{
            .len = addrSpec.len,
            .data = addrSpec.ptr,
        };
        var _str = qtc.KEmailAddress_ToIdn(addrSpec_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.toIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `normalizeAddressesAndDecodeIdn` instead
    ///
    pub const NormalizeAddressesAndDecodeIdn = normalizeAddressesAndDecodeIdn;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndDecodeIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` addresses: []const u8 `
    ///
    pub fn normalizeAddressesAndDecodeIdn(allocator: std.mem.Allocator, addresses: []const u8) []const u8 {
        const addresses_str = qtc.libqt_string{
            .len = addresses.len,
            .data = addresses.ptr,
        };
        var _str = qtc.KEmailAddress_NormalizeAddressesAndDecodeIdn(addresses_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.normalizeAddressesAndDecodeIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `normalizeAddressesAndEncodeIdn` instead
    ///
    pub const NormalizeAddressesAndEncodeIdn = normalizeAddressesAndEncodeIdn;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#normalizeAddressesAndEncodeIdn)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn normalizeAddressesAndEncodeIdn(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.KEmailAddress_NormalizeAddressesAndEncodeIdn(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.normalizeAddressesAndEncodeIdn: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `quoteNameIfNecessary` instead
    ///
    pub const QuoteNameIfNecessary = quoteNameIfNecessary;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#quoteNameIfNecessary)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` str: []const u8 `
    ///
    pub fn quoteNameIfNecessary(allocator: std.mem.Allocator, str: []const u8) []const u8 {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        var _str = qtc.KEmailAddress_QuoteNameIfNecessary(str_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.quoteNameIfNecessary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `encodeMailtoUrl` instead
    ///
    pub const EncodeMailtoUrl = encodeMailtoUrl;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#encodeMailtoUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` mailbox: []const u8 `
    ///
    pub fn encodeMailtoUrl(mailbox: []const u8) QUrl {
        const mailbox_str = qtc.libqt_string{
            .len = mailbox.len,
            .data = mailbox.ptr,
        };
        return .{ .ptr = qtc.KEmailAddress_EncodeMailtoUrl(mailbox_str) };
    }

    /// ### DEPRECATED: Use `decodeMailtoUrl` instead
    ///
    pub const DecodeMailtoUrl = decodeMailtoUrl;

    /// ### [Upstream resources](https://api.kde.org/kemailaddress.html#decodeMailtoUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mailtoUrl: QUrl `
    ///
    pub fn decodeMailtoUrl(allocator: std.mem.Allocator, mailtoUrl: anytype) []const u8 {
        comptime _ = @TypeOf(mailtoUrl)._is_QUrl;
        var _str = qtc.KEmailAddress_DecodeMailtoUrl(@ptrCast(mailtoUrl.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEmailAddress.decodeMailtoUrl: Memory allocation failed");
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
