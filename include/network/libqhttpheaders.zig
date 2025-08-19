const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qhttpheaders_enums = enums;
const std = @import("std");
pub const struct_u8_u8 = struct { first: []u8, second: []u8 };

/// https://doc.qt.io/qt-6/qhttpheaders.html
pub const qhttpheaders = struct {
    /// New constructs a new QHttpHeaders object.
    ///
    ///
    pub fn New() QtC.QHttpHeaders {
        return qtc.QHttpHeaders_new();
    }

    /// New2 constructs a new QHttpHeaders object.
    ///
    /// ``` other: QtC.QHttpHeaders ```
    pub fn New2(other: ?*anyopaque) QtC.QHttpHeaders {
        return qtc.QHttpHeaders_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#operator-eq)
    ///
    /// ``` self: QtC.QHttpHeaders, other: QtC.QHttpHeaders ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttpHeaders_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#swap)
    ///
    /// ``` self: QtC.QHttpHeaders, other: QtC.QHttpHeaders ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttpHeaders_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#append)
    ///
    /// ``` self: QtC.QHttpHeaders, name: []const u8, value: []const u8 ```
    pub fn Append(self: ?*anyopaque, name: []const u8, value: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.QHttpHeaders_Append(@ptrCast(self), name_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#append)
    ///
    /// ``` self: QtC.QHttpHeaders, name: qhttpheaders_enums.WellKnownHeader, value: []const u8 ```
    pub fn Append2(self: ?*anyopaque, name: i32, value: []const u8) bool {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.QHttpHeaders_Append2(@ptrCast(self), @intCast(name), value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#insert)
    ///
    /// ``` self: QtC.QHttpHeaders, i: i64, name: []const u8, value: []const u8 ```
    pub fn Insert(self: ?*anyopaque, i: i64, name: []const u8, value: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.QHttpHeaders_Insert(@ptrCast(self), @intCast(i), name_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#insert)
    ///
    /// ``` self: QtC.QHttpHeaders, i: i64, name: qhttpheaders_enums.WellKnownHeader, value: []const u8 ```
    pub fn Insert2(self: ?*anyopaque, i: i64, name: i32, value: []const u8) bool {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.QHttpHeaders_Insert2(@ptrCast(self), @intCast(i), @intCast(name), value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#replace)
    ///
    /// ``` self: QtC.QHttpHeaders, i: i64, name: []const u8, newValue: []const u8 ```
    pub fn Replace(self: ?*anyopaque, i: i64, name: []const u8, newValue: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        return qtc.QHttpHeaders_Replace(@ptrCast(self), @intCast(i), name_str, newValue_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#replace)
    ///
    /// ``` self: QtC.QHttpHeaders, i: i64, name: qhttpheaders_enums.WellKnownHeader, newValue: []const u8 ```
    pub fn Replace2(self: ?*anyopaque, i: i64, name: i32, newValue: []const u8) bool {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        return qtc.QHttpHeaders_Replace2(@ptrCast(self), @intCast(i), @intCast(name), newValue_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#replaceOrAppend)
    ///
    /// ``` self: QtC.QHttpHeaders, name: []const u8, newValue: []const u8 ```
    pub fn ReplaceOrAppend(self: ?*anyopaque, name: []const u8, newValue: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        return qtc.QHttpHeaders_ReplaceOrAppend(@ptrCast(self), name_str, newValue_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#replaceOrAppend)
    ///
    /// ``` self: QtC.QHttpHeaders, name: qhttpheaders_enums.WellKnownHeader, newValue: []const u8 ```
    pub fn ReplaceOrAppend2(self: ?*anyopaque, name: i32, newValue: []const u8) bool {
        const newValue_str = qtc.libqt_string{
            .len = newValue.len,
            .data = newValue.ptr,
        };
        return qtc.QHttpHeaders_ReplaceOrAppend2(@ptrCast(self), @intCast(name), newValue_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#contains)
    ///
    /// ``` self: QtC.QHttpHeaders, name: []const u8 ```
    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QHttpHeaders_Contains(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#contains)
    ///
    /// ``` self: QtC.QHttpHeaders, name: qhttpheaders_enums.WellKnownHeader ```
    pub fn Contains2(self: ?*anyopaque, name: i32) bool {
        return qtc.QHttpHeaders_Contains2(@ptrCast(self), @intCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#clear)
    ///
    /// ``` self: QtC.QHttpHeaders ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QHttpHeaders_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#removeAll)
    ///
    /// ``` self: QtC.QHttpHeaders, name: []const u8 ```
    pub fn RemoveAll(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QHttpHeaders_RemoveAll(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#removeAll)
    ///
    /// ``` self: QtC.QHttpHeaders, name: qhttpheaders_enums.WellKnownHeader ```
    pub fn RemoveAll2(self: ?*anyopaque, name: i32) void {
        qtc.QHttpHeaders_RemoveAll2(@ptrCast(self), @intCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#removeAt)
    ///
    /// ``` self: QtC.QHttpHeaders, i: i64 ```
    pub fn RemoveAt(self: ?*anyopaque, i: i64) void {
        qtc.QHttpHeaders_RemoveAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#value)
    ///
    /// ``` self: QtC.QHttpHeaders, name: []const u8, allocator: std.mem.Allocator ```
    pub fn Value(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QHttpHeaders_Value(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpheaders.Value: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#value)
    ///
    /// ``` self: QtC.QHttpHeaders, name: qhttpheaders_enums.WellKnownHeader, allocator: std.mem.Allocator ```
    pub fn Value2(self: ?*anyopaque, name: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHttpHeaders_Value2(@ptrCast(self), @intCast(name));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpheaders.Value2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#values)
    ///
    /// ``` self: QtC.QHttpHeaders, name: []const u8, allocator: std.mem.Allocator ```
    pub fn Values(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) [][]u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QHttpHeaders_Values(@ptrCast(self), name_str);
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhttpheaders.Values: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhttpheaders.Values: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#values)
    ///
    /// ``` self: QtC.QHttpHeaders, name: qhttpheaders_enums.WellKnownHeader, allocator: std.mem.Allocator ```
    pub fn Values2(self: ?*anyopaque, name: i32, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QHttpHeaders_Values2(@ptrCast(self), @intCast(name));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhttpheaders.Values2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhttpheaders.Values2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#valueAt)
    ///
    /// ``` self: QtC.QHttpHeaders, i: i64, allocator: std.mem.Allocator ```
    pub fn ValueAt(self: ?*anyopaque, i: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHttpHeaders_ValueAt(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpheaders.ValueAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#combinedValue)
    ///
    /// ``` self: QtC.QHttpHeaders, name: []const u8, allocator: std.mem.Allocator ```
    pub fn CombinedValue(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QHttpHeaders_CombinedValue(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qhttpheaders.CombinedValue: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#combinedValue)
    ///
    /// ``` self: QtC.QHttpHeaders, name: qhttpheaders_enums.WellKnownHeader, allocator: std.mem.Allocator ```
    pub fn CombinedValue2(self: ?*anyopaque, name: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QHttpHeaders_CombinedValue2(@ptrCast(self), @intCast(name));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qhttpheaders.CombinedValue2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#size)
    ///
    /// ``` self: QtC.QHttpHeaders ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QHttpHeaders_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#reserve)
    ///
    /// ``` self: QtC.QHttpHeaders, size: i64 ```
    pub fn Reserve(self: ?*anyopaque, size: i64) void {
        qtc.QHttpHeaders_Reserve(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#isEmpty)
    ///
    /// ``` self: QtC.QHttpHeaders ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QHttpHeaders_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#wellKnownHeaderName)
    ///
    /// ``` name: qhttpheaders_enums.WellKnownHeader, allocator: std.mem.Allocator ```
    pub fn WellKnownHeaderName(name: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHttpHeaders_WellKnownHeaderName(@intCast(name));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpheaders.WellKnownHeaderName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#fromListOfPairs)
    ///
    /// ``` headers: []struct_u8_u8 ```
    pub fn FromListOfPairs(headers: []struct_u8_u8) QtC.QHttpHeaders {
        const headers_list = qtc.libqt_list{
            .len = headers.len,
            .data = headers.ptr,
        };
        return qtc.QHttpHeaders_FromListOfPairs(headers_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#toListOfPairs)
    ///
    /// ``` self: QtC.QHttpHeaders, allocator: std.mem.Allocator ```
    pub fn ToListOfPairs(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.QHttpHeaders_ToListOfPairs(@ptrCast(self));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_pair[i].first));
                qtc.libqt_free(_pair[i].first);

                qtc.libqt_string_free(@ptrCast(&_pair[i].second));
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_u8_u8, _arr.len) catch @panic("qhttpheaders.ToListOfPairs: Memory allocation failed");
        const _data: [*]struct_u8_u8 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#value)
    ///
    /// ``` self: QtC.QHttpHeaders, name: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn Value22(self: ?*anyopaque, name: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QHttpHeaders_Value22(@ptrCast(self), name_str, defaultValue.ptr);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpheaders.Value22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#value)
    ///
    /// ``` self: QtC.QHttpHeaders, name: qhttpheaders_enums.WellKnownHeader, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn Value23(self: ?*anyopaque, name: i32, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHttpHeaders_Value23(@ptrCast(self), @intCast(name), defaultValue.ptr);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhttpheaders.Value23: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhttpheaders.html#dtor.QHttpHeaders)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHttpHeaders ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHttpHeaders_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhttpheaders.html#types
pub const enums = struct {
    pub const WellKnownHeader = enum {
        pub const AIM: i32 = 0;
        pub const Accept: i32 = 1;
        pub const AcceptAdditions: i32 = 2;
        pub const AcceptCH: i32 = 3;
        pub const AcceptDatetime: i32 = 4;
        pub const AcceptEncoding: i32 = 5;
        pub const AcceptFeatures: i32 = 6;
        pub const AcceptLanguage: i32 = 7;
        pub const AcceptPatch: i32 = 8;
        pub const AcceptPost: i32 = 9;
        pub const AcceptRanges: i32 = 10;
        pub const AcceptSignature: i32 = 11;
        pub const AccessControlAllowCredentials: i32 = 12;
        pub const AccessControlAllowHeaders: i32 = 13;
        pub const AccessControlAllowMethods: i32 = 14;
        pub const AccessControlAllowOrigin: i32 = 15;
        pub const AccessControlExposeHeaders: i32 = 16;
        pub const AccessControlMaxAge: i32 = 17;
        pub const AccessControlRequestHeaders: i32 = 18;
        pub const AccessControlRequestMethod: i32 = 19;
        pub const Age: i32 = 20;
        pub const Allow: i32 = 21;
        pub const ALPN: i32 = 22;
        pub const AltSvc: i32 = 23;
        pub const AltUsed: i32 = 24;
        pub const Alternates: i32 = 25;
        pub const ApplyToRedirectRef: i32 = 26;
        pub const AuthenticationControl: i32 = 27;
        pub const AuthenticationInfo: i32 = 28;
        pub const Authorization: i32 = 29;
        pub const CacheControl: i32 = 30;
        pub const CacheStatus: i32 = 31;
        pub const CalManagedID: i32 = 32;
        pub const CalDAVTimezones: i32 = 33;
        pub const CapsuleProtocol: i32 = 34;
        pub const CDNCacheControl: i32 = 35;
        pub const CDNLoop: i32 = 36;
        pub const CertNotAfter: i32 = 37;
        pub const CertNotBefore: i32 = 38;
        pub const ClearSiteData: i32 = 39;
        pub const ClientCert: i32 = 40;
        pub const ClientCertChain: i32 = 41;
        pub const Close: i32 = 42;
        pub const Connection: i32 = 43;
        pub const ContentDigest: i32 = 44;
        pub const ContentDisposition: i32 = 45;
        pub const ContentEncoding: i32 = 46;
        pub const ContentID: i32 = 47;
        pub const ContentLanguage: i32 = 48;
        pub const ContentLength: i32 = 49;
        pub const ContentLocation: i32 = 50;
        pub const ContentRange: i32 = 51;
        pub const ContentSecurityPolicy: i32 = 52;
        pub const ContentSecurityPolicyReportOnly: i32 = 53;
        pub const ContentType: i32 = 54;
        pub const Cookie: i32 = 55;
        pub const CrossOriginEmbedderPolicy: i32 = 56;
        pub const CrossOriginEmbedderPolicyReportOnly: i32 = 57;
        pub const CrossOriginOpenerPolicy: i32 = 58;
        pub const CrossOriginOpenerPolicyReportOnly: i32 = 59;
        pub const CrossOriginResourcePolicy: i32 = 60;
        pub const DASL: i32 = 61;
        pub const Date: i32 = 62;
        pub const DAV: i32 = 63;
        pub const DeltaBase: i32 = 64;
        pub const Depth: i32 = 65;
        pub const Destination: i32 = 66;
        pub const DifferentialID: i32 = 67;
        pub const DPoP: i32 = 68;
        pub const DPoPNonce: i32 = 69;
        pub const EarlyData: i32 = 70;
        pub const ETag: i32 = 71;
        pub const Expect: i32 = 72;
        pub const ExpectCT: i32 = 73;
        pub const Expires: i32 = 74;
        pub const Forwarded: i32 = 75;
        pub const From: i32 = 76;
        pub const Hobareg: i32 = 77;
        pub const Host: i32 = 78;
        pub const If: i32 = 79;
        pub const IfMatch: i32 = 80;
        pub const IfModifiedSince: i32 = 81;
        pub const IfNoneMatch: i32 = 82;
        pub const IfRange: i32 = 83;
        pub const IfScheduleTagMatch: i32 = 84;
        pub const IfUnmodifiedSince: i32 = 85;
        pub const IM: i32 = 86;
        pub const IncludeReferredTokenBindingID: i32 = 87;
        pub const KeepAlive: i32 = 88;
        pub const Label: i32 = 89;
        pub const LastEventID: i32 = 90;
        pub const LastModified: i32 = 91;
        pub const Link: i32 = 92;
        pub const Location: i32 = 93;
        pub const LockToken: i32 = 94;
        pub const MaxForwards: i32 = 95;
        pub const MementoDatetime: i32 = 96;
        pub const Meter: i32 = 97;
        pub const MIMEVersion: i32 = 98;
        pub const Negotiate: i32 = 99;
        pub const NEL: i32 = 100;
        pub const ODataEntityId: i32 = 101;
        pub const ODataIsolation: i32 = 102;
        pub const ODataMaxVersion: i32 = 103;
        pub const ODataVersion: i32 = 104;
        pub const OptionalWWWAuthenticate: i32 = 105;
        pub const OrderingType: i32 = 106;
        pub const Origin: i32 = 107;
        pub const OriginAgentCluster: i32 = 108;
        pub const OSCORE: i32 = 109;
        pub const OSLCCoreVersion: i32 = 110;
        pub const Overwrite: i32 = 111;
        pub const PingFrom: i32 = 112;
        pub const PingTo: i32 = 113;
        pub const Position: i32 = 114;
        pub const Prefer: i32 = 115;
        pub const PreferenceApplied: i32 = 116;
        pub const Priority: i32 = 117;
        pub const ProxyAuthenticate: i32 = 118;
        pub const ProxyAuthenticationInfo: i32 = 119;
        pub const ProxyAuthorization: i32 = 120;
        pub const ProxyStatus: i32 = 121;
        pub const PublicKeyPins: i32 = 122;
        pub const PublicKeyPinsReportOnly: i32 = 123;
        pub const Range: i32 = 124;
        pub const RedirectRef: i32 = 125;
        pub const Referer: i32 = 126;
        pub const Refresh: i32 = 127;
        pub const ReplayNonce: i32 = 128;
        pub const ReprDigest: i32 = 129;
        pub const RetryAfter: i32 = 130;
        pub const ScheduleReply: i32 = 131;
        pub const ScheduleTag: i32 = 132;
        pub const SecPurpose: i32 = 133;
        pub const SecTokenBinding: i32 = 134;
        pub const SecWebSocketAccept: i32 = 135;
        pub const SecWebSocketExtensions: i32 = 136;
        pub const SecWebSocketKey: i32 = 137;
        pub const SecWebSocketProtocol: i32 = 138;
        pub const SecWebSocketVersion: i32 = 139;
        pub const Server: i32 = 140;
        pub const ServerTiming: i32 = 141;
        pub const SetCookie: i32 = 142;
        pub const Signature: i32 = 143;
        pub const SignatureInput: i32 = 144;
        pub const SLUG: i32 = 145;
        pub const SoapAction: i32 = 146;
        pub const StatusURI: i32 = 147;
        pub const StrictTransportSecurity: i32 = 148;
        pub const Sunset: i32 = 149;
        pub const SurrogateCapability: i32 = 150;
        pub const SurrogateControl: i32 = 151;
        pub const TCN: i32 = 152;
        pub const TE: i32 = 153;
        pub const Timeout: i32 = 154;
        pub const Topic: i32 = 155;
        pub const Traceparent: i32 = 156;
        pub const Tracestate: i32 = 157;
        pub const Trailer: i32 = 158;
        pub const TransferEncoding: i32 = 159;
        pub const TTL: i32 = 160;
        pub const Upgrade: i32 = 161;
        pub const Urgency: i32 = 162;
        pub const UserAgent: i32 = 163;
        pub const VariantVary: i32 = 164;
        pub const Vary: i32 = 165;
        pub const Via: i32 = 166;
        pub const WantContentDigest: i32 = 167;
        pub const WantReprDigest: i32 = 168;
        pub const WWWAuthenticate: i32 = 169;
        pub const XContentTypeOptions: i32 = 170;
        pub const XFrameOptions: i32 = 171;
        pub const AcceptCharset: i32 = 172;
        pub const CPEPInfo: i32 = 173;
        pub const Pragma: i32 = 174;
        pub const ProtocolInfo: i32 = 175;
        pub const ProtocolQuery: i32 = 176;
    };
};
