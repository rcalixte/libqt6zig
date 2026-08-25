const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebenginesettings_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html)
pub const QWebEngineSettings = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineSettings,

    pub const _is_QWebEngineSettings = {};

    /// ### DEPRECATED: Use `setFontFamily` instead
    ///
    pub const SetFontFamily = setFontFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` which: qwebenginesettings_enums.FontFamily `
    ///
    /// ` family: []const u8 `
    ///
    pub fn setFontFamily(self: QWebEngineSettings, which: i32, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QWebEngineSettings_SetFontFamily(@ptrCast(self.ptr), @bitCast(which), family_str);
    }

    /// ### DEPRECATED: Use `fontFamily` instead
    ///
    pub const FontFamily = fontFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` which: qwebenginesettings_enums.FontFamily `
    ///
    pub fn fontFamily(self: QWebEngineSettings, allocator: std.mem.Allocator, which: i32) []const u8 {
        var _str = qtc.QWebEngineSettings_FontFamily(@ptrCast(self.ptr), @bitCast(which));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineSettings.fontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resetFontFamily` instead
    ///
    pub const ResetFontFamily = resetFontFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` which: qwebenginesettings_enums.FontFamily `
    ///
    pub fn resetFontFamily(self: QWebEngineSettings, which: i32) void {
        qtc.QWebEngineSettings_ResetFontFamily(@ptrCast(self.ptr), @bitCast(which));
    }

    /// ### DEPRECATED: Use `setFontSize` instead
    ///
    pub const SetFontSize = setFontSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setFontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` typeVal: qwebenginesettings_enums.FontSize `
    ///
    /// ` size: i32 `
    ///
    pub fn setFontSize(self: QWebEngineSettings, typeVal: i32, size: i32) void {
        qtc.QWebEngineSettings_SetFontSize(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(size));
    }

    /// ### DEPRECATED: Use `fontSize` instead
    ///
    pub const FontSize = fontSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#fontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` typeVal: qwebenginesettings_enums.FontSize `
    ///
    pub fn fontSize(self: QWebEngineSettings, typeVal: i32) i32 {
        return qtc.QWebEngineSettings_FontSize(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `resetFontSize` instead
    ///
    pub const ResetFontSize = resetFontSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetFontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` typeVal: qwebenginesettings_enums.FontSize `
    ///
    pub fn resetFontSize(self: QWebEngineSettings, typeVal: i32) void {
        qtc.QWebEngineSettings_ResetFontSize(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` attr: qwebenginesettings_enums.WebAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute(self: QWebEngineSettings, attr: i32, on: bool) void {
        qtc.QWebEngineSettings_SetAttribute(@ptrCast(self.ptr), @bitCast(attr), on);
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` attr: qwebenginesettings_enums.WebAttribute `
    ///
    pub fn testAttribute(self: QWebEngineSettings, attr: i32) bool {
        return qtc.QWebEngineSettings_TestAttribute(@ptrCast(self.ptr), @bitCast(attr));
    }

    /// ### DEPRECATED: Use `resetAttribute` instead
    ///
    pub const ResetAttribute = resetAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` attr: qwebenginesettings_enums.WebAttribute `
    ///
    pub fn resetAttribute(self: QWebEngineSettings, attr: i32) void {
        qtc.QWebEngineSettings_ResetAttribute(@ptrCast(self.ptr), @bitCast(attr));
    }

    /// ### DEPRECATED: Use `setDefaultTextEncoding` instead
    ///
    pub const SetDefaultTextEncoding = setDefaultTextEncoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setDefaultTextEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn setDefaultTextEncoding(self: QWebEngineSettings, encoding: []const u8) void {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        qtc.QWebEngineSettings_SetDefaultTextEncoding(@ptrCast(self.ptr), encoding_str);
    }

    /// ### DEPRECATED: Use `defaultTextEncoding` instead
    ///
    pub const DefaultTextEncoding = defaultTextEncoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#defaultTextEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultTextEncoding(self: QWebEngineSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineSettings_DefaultTextEncoding(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineSettings.defaultTextEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `unknownUrlSchemePolicy` instead
    ///
    pub const UnknownUrlSchemePolicy = unknownUrlSchemePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#unknownUrlSchemePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginesettings_enums.UnknownUrlSchemePolicy `
    ///
    pub fn unknownUrlSchemePolicy(self: QWebEngineSettings) i32 {
        return qtc.QWebEngineSettings_UnknownUrlSchemePolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnknownUrlSchemePolicy` instead
    ///
    pub const SetUnknownUrlSchemePolicy = setUnknownUrlSchemePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setUnknownUrlSchemePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` policy: qwebenginesettings_enums.UnknownUrlSchemePolicy `
    ///
    pub fn setUnknownUrlSchemePolicy(self: QWebEngineSettings, policy: i32) void {
        qtc.QWebEngineSettings_SetUnknownUrlSchemePolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `resetUnknownUrlSchemePolicy` instead
    ///
    pub const ResetUnknownUrlSchemePolicy = resetUnknownUrlSchemePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetUnknownUrlSchemePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    pub fn resetUnknownUrlSchemePolicy(self: QWebEngineSettings) void {
        qtc.QWebEngineSettings_ResetUnknownUrlSchemePolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setImageAnimationPolicy` instead
    ///
    pub const SetImageAnimationPolicy = setImageAnimationPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#setImageAnimationPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ` policy: qwebenginesettings_enums.ImageAnimationPolicy `
    ///
    pub fn setImageAnimationPolicy(self: QWebEngineSettings, policy: u8) void {
        qtc.QWebEngineSettings_SetImageAnimationPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `imageAnimationPolicy` instead
    ///
    pub const ImageAnimationPolicy = imageAnimationPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#imageAnimationPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginesettings_enums.ImageAnimationPolicy `
    ///
    pub fn imageAnimationPolicy(self: QWebEngineSettings) u8 {
        return qtc.QWebEngineSettings_ImageAnimationPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetImageAnimationPolicy` instead
    ///
    pub const ResetImageAnimationPolicy = resetImageAnimationPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#resetImageAnimationPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineSettings `
    ///
    pub fn resetImageAnimationPolicy(self: QWebEngineSettings) void {
        qtc.QWebEngineSettings_ResetImageAnimationPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginesettings.html#dtor.QWebEngineSettings)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineSettings `
    ///
    pub fn delete(self: QWebEngineSettings) void {
        qtc.QWebEngineSettings_Delete(@ptrCast(self.ptr));
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
