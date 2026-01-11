const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebengineloadinginfo_enums = enums;
const std = @import("std");
const map_u8_sliceu8 = std.StringHashMapUnmanaged([][]u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html)
pub const qwebengineloadinginfo = struct {
    /// New constructs a new QWebEngineLoadingInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebEngineLoadingInfo `
    ///
    pub fn New(other: ?*anyopaque) QtC.QWebEngineLoadingInfo {
        return qtc.QWebEngineLoadingInfo_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ` other: QtC.QWebEngineLoadingInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineLoadingInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineLoadingInfo_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#isErrorPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    pub fn IsErrorPage(self: ?*anyopaque) bool {
        return qtc.QWebEngineLoadingInfo_IsErrorPage(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineloadinginfo_enums.LoadStatus `
    ///
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.QWebEngineLoadingInfo_Status(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineLoadingInfo_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineloadinginfo.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineloadinginfo_enums.ErrorDomain `
    ///
    pub fn ErrorDomain(self: ?*anyopaque) i32 {
        return qtc.QWebEngineLoadingInfo_ErrorDomain(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    pub fn ErrorCode(self: ?*anyopaque) i32 {
        return qtc.QWebEngineLoadingInfo_ErrorCode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#responseHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResponseHeaders(self: ?*anyopaque, allocator: std.mem.Allocator) map_u8_sliceu8 {
        const _map: qtc.libqt_map = qtc.QWebEngineLoadingInfo_ResponseHeaders(@ptrCast(self));
        var _ret: map_u8_sliceu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                const _value_list = _values[i];
                const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value_list.data));
                for (0.._value_list.len) |j| {
                    qtc.libqt_free(_value_strings[j].data);
                }
                qtc.libqt_free(_value_list.data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_list = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qwebengineloadinginfo.ResponseHeaders: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_strings: [*]qtc.libqt_string = @ptrCast(@alignCast(_value.data));
            const _value_slice = allocator.alloc([]u8, _value.len) catch @panic("qwebengineloadinginfo.ResponseHeaders: Memory allocation failed");
            for (0.._value.len) |j| {
                const _vslice = allocator.alloc(u8, _value_strings[j].len) catch @panic("qwebengineloadinginfo.ResponseHeaders: Memory allocation failed");
                @memcpy(_vslice, _value_strings[j].data);
                _value_slice[j] = _vslice;
            }
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("qwebengineloadinginfo.ResponseHeaders: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#dtor.QWebEngineLoadingInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineLoadingInfo `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineLoadingInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#public-types)
pub const enums = struct {
    pub const LoadStatus = enum {
        pub const LoadStartedStatus: i32 = 0;
        pub const LoadStoppedStatus: i32 = 1;
        pub const LoadSucceededStatus: i32 = 2;
        pub const LoadFailedStatus: i32 = 3;
    };

    pub const ErrorDomain = enum {
        pub const NoErrorDomain: i32 = 0;
        pub const InternalErrorDomain: i32 = 1;
        pub const ConnectionErrorDomain: i32 = 2;
        pub const CertificateErrorDomain: i32 = 3;
        pub const HttpErrorDomain: i32 = 4;
        pub const FtpErrorDomain: i32 = 5;
        pub const DnsErrorDomain: i32 = 6;
        pub const HttpStatusCodeDomain: i32 = 7;
    };
};
