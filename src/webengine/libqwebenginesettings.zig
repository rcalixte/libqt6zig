const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebenginesettings_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html)
pub const qwebenginesettings = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` which: qwebenginesettings_enums.FontFamily `
    ///
    /// ` family: []const u8 `
    ///
    pub fn SetFontFamily(self: ?*anyopaque, which: i32, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QWebEngineSettings_SetFontFamily(@ptrCast(self), @intCast(which), family_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` which: qwebenginesettings_enums.FontFamily `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontFamily(self: ?*anyopaque, which: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineSettings_FontFamily(@ptrCast(self), @intCast(which));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginesettings.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` which: qwebenginesettings_enums.FontFamily `
    ///
    pub fn ResetFontFamily(self: ?*anyopaque, which: i32) void {
        qtc.QWebEngineSettings_ResetFontFamily(@ptrCast(self), @intCast(which));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` typeVal: qwebenginesettings_enums.FontSize `
    ///
    /// ` size: i32 `
    ///
    pub fn SetFontSize(self: ?*anyopaque, typeVal: i32, size: i32) void {
        qtc.QWebEngineSettings_SetFontSize(@ptrCast(self), @intCast(typeVal), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#fontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` typeVal: qwebenginesettings_enums.FontSize `
    ///
    pub fn FontSize(self: ?*anyopaque, typeVal: i32) i32 {
        return qtc.QWebEngineSettings_FontSize(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` typeVal: qwebenginesettings_enums.FontSize `
    ///
    pub fn ResetFontSize(self: ?*anyopaque, typeVal: i32) void {
        qtc.QWebEngineSettings_ResetFontSize(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` attr: qwebenginesettings_enums.WebAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute(self: ?*anyopaque, attr: i32, on: bool) void {
        qtc.QWebEngineSettings_SetAttribute(@ptrCast(self), @intCast(attr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` attr: qwebenginesettings_enums.WebAttribute `
    ///
    pub fn TestAttribute(self: ?*anyopaque, attr: i32) bool {
        return qtc.QWebEngineSettings_TestAttribute(@ptrCast(self), @intCast(attr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` attr: qwebenginesettings_enums.WebAttribute `
    ///
    pub fn ResetAttribute(self: ?*anyopaque, attr: i32) void {
        qtc.QWebEngineSettings_ResetAttribute(@ptrCast(self), @intCast(attr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setDefaultTextEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn SetDefaultTextEncoding(self: ?*anyopaque, encoding: []const u8) void {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        qtc.QWebEngineSettings_SetDefaultTextEncoding(@ptrCast(self), encoding_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#defaultTextEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultTextEncoding(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineSettings_DefaultTextEncoding(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginesettings.DefaultTextEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#unknownUrlSchemePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginesettings_enums.UnknownUrlSchemePolicy `
    ///
    pub fn UnknownUrlSchemePolicy(self: ?*anyopaque) i32 {
        return qtc.QWebEngineSettings_UnknownUrlSchemePolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setUnknownUrlSchemePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` policy: qwebenginesettings_enums.UnknownUrlSchemePolicy `
    ///
    pub fn SetUnknownUrlSchemePolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWebEngineSettings_SetUnknownUrlSchemePolicy(@ptrCast(self), @intCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetUnknownUrlSchemePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    pub fn ResetUnknownUrlSchemePolicy(self: ?*anyopaque) void {
        qtc.QWebEngineSettings_ResetUnknownUrlSchemePolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setImageAnimationPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ` policy: qwebenginesettings_enums.ImageAnimationPolicy `
    ///
    pub fn SetImageAnimationPolicy(self: ?*anyopaque, policy: u8) void {
        qtc.QWebEngineSettings_SetImageAnimationPolicy(@ptrCast(self), @intCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#imageAnimationPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginesettings_enums.ImageAnimationPolicy `
    ///
    pub fn ImageAnimationPolicy(self: ?*anyopaque) u8 {
        return qtc.QWebEngineSettings_ImageAnimationPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetImageAnimationPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    pub fn ResetImageAnimationPolicy(self: ?*anyopaque) void {
        qtc.QWebEngineSettings_ResetImageAnimationPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#dtor.QWebEngineSettings)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineSettings `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineSettings_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#public-types)
pub const enums = struct {
    pub const FontFamily = enum {
        pub const StandardFont: i32 = 0;
        pub const FixedFont: i32 = 1;
        pub const SerifFont: i32 = 2;
        pub const SansSerifFont: i32 = 3;
        pub const CursiveFont: i32 = 4;
        pub const FantasyFont: i32 = 5;
        pub const PictographFont: i32 = 6;
    };

    pub const WebAttribute = enum {
        pub const AutoLoadImages: i32 = 0;
        pub const JavascriptEnabled: i32 = 1;
        pub const JavascriptCanOpenWindows: i32 = 2;
        pub const JavascriptCanAccessClipboard: i32 = 3;
        pub const LinksIncludedInFocusChain: i32 = 4;
        pub const LocalStorageEnabled: i32 = 5;
        pub const LocalContentCanAccessRemoteUrls: i32 = 6;
        pub const XSSAuditingEnabled: i32 = 7;
        pub const SpatialNavigationEnabled: i32 = 8;
        pub const LocalContentCanAccessFileUrls: i32 = 9;
        pub const HyperlinkAuditingEnabled: i32 = 10;
        pub const ScrollAnimatorEnabled: i32 = 11;
        pub const ErrorPageEnabled: i32 = 12;
        pub const PluginsEnabled: i32 = 13;
        pub const FullScreenSupportEnabled: i32 = 14;
        pub const ScreenCaptureEnabled: i32 = 15;
        pub const WebGLEnabled: i32 = 16;
        pub const Accelerated2dCanvasEnabled: i32 = 17;
        pub const AutoLoadIconsForPage: i32 = 18;
        pub const TouchIconsEnabled: i32 = 19;
        pub const FocusOnNavigationEnabled: i32 = 20;
        pub const PrintElementBackgrounds: i32 = 21;
        pub const AllowRunningInsecureContent: i32 = 22;
        pub const AllowGeolocationOnInsecureOrigins: i32 = 23;
        pub const AllowWindowActivationFromJavaScript: i32 = 24;
        pub const ShowScrollBars: i32 = 25;
        pub const PlaybackRequiresUserGesture: i32 = 26;
        pub const WebRTCPublicInterfacesOnly: i32 = 27;
        pub const JavascriptCanPaste: i32 = 28;
        pub const DnsPrefetchEnabled: i32 = 29;
        pub const PdfViewerEnabled: i32 = 30;
        pub const NavigateOnDropEnabled: i32 = 31;
        pub const ReadingFromCanvasEnabled: i32 = 32;
        pub const ForceDarkMode: i32 = 33;
    };

    pub const FontSize = enum {
        pub const MinimumFontSize: i32 = 0;
        pub const MinimumLogicalFontSize: i32 = 1;
        pub const DefaultFontSize: i32 = 2;
        pub const DefaultFixedFontSize: i32 = 3;
    };

    pub const UnknownUrlSchemePolicy = enum {
        pub const InheritedUnknownUrlSchemePolicy: i32 = 0;
        pub const DisallowUnknownUrlSchemes: i32 = 1;
        pub const AllowUnknownUrlSchemesFromUserInteraction: i32 = 2;
        pub const AllowAllUnknownUrlSchemes: i32 = 3;
    };

    pub const ImageAnimationPolicy = enum {
        pub const Inherited: u8 = 0;
        pub const Allow: u8 = 1;
        pub const AnimateOnce: u8 = 2;
        pub const Disallow: u8 = 3;
    };
};
