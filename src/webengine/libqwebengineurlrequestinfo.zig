const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebengineurlrequestinfo_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html
pub const qwebengineurlrequestinfo = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#resourceType)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo ```
    pub fn ResourceType(self: ?*anyopaque) i64 {
        return qtc.QWebEngineUrlRequestInfo_ResourceType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#navigationType)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo ```
    pub fn NavigationType(self: ?*anyopaque) i64 {
        return qtc.QWebEngineUrlRequestInfo_NavigationType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestUrl)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo ```
    pub fn RequestUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineUrlRequestInfo_RequestUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#firstPartyUrl)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo ```
    pub fn FirstPartyUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineUrlRequestInfo_FirstPartyUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#initiator)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo ```
    pub fn Initiator(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineUrlRequestInfo_Initiator(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestMethod)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo, allocator: std.mem.Allocator ```
    pub fn RequestMethod(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QWebEngineUrlRequestInfo_RequestMethod(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qwebengineurlrequestinfo.RequestMethod: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#changed)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo ```
    pub fn Changed(self: ?*anyopaque) bool {
        return qtc.QWebEngineUrlRequestInfo_Changed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#block)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo, shouldBlock: bool ```
    pub fn Block(self: ?*anyopaque, shouldBlock: bool) void {
        qtc.QWebEngineUrlRequestInfo_Block(@ptrCast(self), shouldBlock);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#redirect)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo, url: QtC.QUrl ```
    pub fn Redirect(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEngineUrlRequestInfo_Redirect(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#setHttpHeader)
    ///
    /// ``` self: QtC.QWebEngineUrlRequestInfo, name: []u8, value: []u8 ```
    pub fn SetHttpHeader(self: ?*anyopaque, name: []u8, value: []u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const value_str = qtc.struct_libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QWebEngineUrlRequestInfo_SetHttpHeader(@ptrCast(self), name_str, value_str);
    }
};

/// https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#types
pub const enums = struct {
    pub const ResourceType = enum {
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
        pub const ResourceTypeLast: i32 = 20;
        pub const ResourceTypeWebSocket: i32 = 254;
        pub const ResourceTypeUnknown: i32 = 255;
    };

    pub const NavigationType = enum {
        pub const NavigationTypeLink: i32 = 0;
        pub const NavigationTypeTyped: i32 = 1;
        pub const NavigationTypeFormSubmitted: i32 = 2;
        pub const NavigationTypeBackForward: i32 = 3;
        pub const NavigationTypeReload: i32 = 4;
        pub const NavigationTypeOther: i32 = 5;
        pub const NavigationTypeRedirect: i32 = 6;
    };
};
