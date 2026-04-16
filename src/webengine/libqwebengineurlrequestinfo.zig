const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const QUrl = @import("libqt6").QUrl;
const qwebengineurlrequestinfo_enums = enums;
const std = @import("std");
const Map_u8_u8 = std.StringHashMapUnmanaged([]u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html)
pub const QWebEngineUrlRequestInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineUrlRequestInfo,

    pub const _is_QWebEngineUrlRequestInfo = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#resourceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineurlrequestinfo_enums.ResourceType `
    ///
    pub fn ResourceType(self: QWebEngineUrlRequestInfo) i32 {
        return qtc.QWebEngineUrlRequestInfo_ResourceType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#navigationType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    /// ## Returns:
    ///
    /// ` qwebengineurlrequestinfo_enums.NavigationType `
    ///
    pub fn NavigationType(self: QWebEngineUrlRequestInfo) i32 {
        return qtc.QWebEngineUrlRequestInfo_NavigationType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    pub fn RequestUrl(self: QWebEngineUrlRequestInfo) QUrl {
        return .{ .ptr = qtc.QWebEngineUrlRequestInfo_RequestUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#firstPartyUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    pub fn FirstPartyUrl(self: QWebEngineUrlRequestInfo) QUrl {
        return .{ .ptr = qtc.QWebEngineUrlRequestInfo_FirstPartyUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#initiator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    pub fn Initiator(self: QWebEngineUrlRequestInfo) QUrl {
        return .{ .ptr = qtc.QWebEngineUrlRequestInfo_Initiator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestMethod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RequestMethod(self: QWebEngineUrlRequestInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWebEngineUrlRequestInfo_RequestMethod(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebengineurlrequestinfo.RequestMethod: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    pub fn RequestBody(self: QWebEngineUrlRequestInfo) QIODevice {
        return .{ .ptr = qtc.QWebEngineUrlRequestInfo_RequestBody(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    pub fn Changed(self: QWebEngineUrlRequestInfo) bool {
        return qtc.QWebEngineUrlRequestInfo_Changed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#block)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    /// ` shouldBlock: bool `
    ///
    pub fn Block(self: QWebEngineUrlRequestInfo, shouldBlock: bool) void {
        qtc.QWebEngineUrlRequestInfo_Block(@ptrCast(self.ptr), shouldBlock);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#redirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    /// ` url: QUrl `
    ///
    pub fn Redirect(self: QWebEngineUrlRequestInfo, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineUrlRequestInfo_Redirect(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#setHttpHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    /// ` name: []u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetHttpHeader(self: QWebEngineUrlRequestInfo, name: []u8, value: []u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QWebEngineUrlRequestInfo_SetHttpHeader(@ptrCast(self.ptr), name_str, value_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#httpHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineUrlRequestInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HttpHeaders(self: QWebEngineUrlRequestInfo, allocator: std.mem.Allocator) Map_u8_u8 {
        const _map: qtc.libqt_map = qtc.QWebEngineUrlRequestInfo_HttpHeaders(@ptrCast(self.ptr));
        var _ret: Map_u8_u8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qwebengineurlrequestinfo.HttpHeaders: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("qwebengineurlrequestinfo.HttpHeaders: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("qwebengineurlrequestinfo.HttpHeaders: Memory allocation failed");
        }
        return _ret;
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#public-types)
pub const enums = struct {
    pub const ResourceType = enum(i32) {
        pub const ResourceTypeMainFrame: i32 = 0;
        pub const ResourceTypeSubFrame: i32 = 1;
        pub const ResourceTypeStylesheet: i32 = 2;
        pub const ResourceTypeScript: i32 = 3;
        pub const ResourceTypeImage: i32 = 4;
        pub const ResourceTypeFontResource: i32 = 5;
        pub const ResourceTypeSubResource: i32 = 6;
        pub const ResourceTypeObject: i32 = 7;
        pub const ResourceTypeMedia: i32 = 8;
        pub const ResourceTypeWorker: i32 = 9;
        pub const ResourceTypeSharedWorker: i32 = 10;
        pub const ResourceTypePrefetch: i32 = 11;
        pub const ResourceTypeFavicon: i32 = 12;
        pub const ResourceTypeXhr: i32 = 13;
        pub const ResourceTypePing: i32 = 14;
        pub const ResourceTypeServiceWorker: i32 = 15;
        pub const ResourceTypeCspReport: i32 = 16;
        pub const ResourceTypePluginResource: i32 = 17;
        pub const ResourceTypeNavigationPreloadMainFrame: i32 = 19;
        pub const ResourceTypeNavigationPreloadSubFrame: i32 = 20;
        pub const ResourceTypeJson: i32 = 21;
        pub const ResourceTypeLast: i32 = 21;
        pub const ResourceTypeWebSocket: i32 = 254;
        pub const ResourceTypeUnknown: i32 = 255;
    };

    pub const NavigationType = enum(i32) {
        pub const NavigationTypeLink: i32 = 0;
        pub const NavigationTypeTyped: i32 = 1;
        pub const NavigationTypeFormSubmitted: i32 = 2;
        pub const NavigationTypeBackForward: i32 = 3;
        pub const NavigationTypeReload: i32 = 4;
        pub const NavigationTypeOther: i32 = 5;
        pub const NavigationTypeRedirect: i32 = 6;
    };
};
