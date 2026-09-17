const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html)
pub const qtwebenginecoreglobal_h = extern struct {
    /// ### DEPRECATED: Use `qWebEngineVersion` instead
    ///
    pub const QWebEngineVersion = qWebEngineVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineVersion)
    ///
    pub fn qWebEngineVersion() [:0]const u8 {
        const _ret = qtc.qtwebenginecoreglobal_h_QWebEngineVersion();
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `qWebEngineProcessName` instead
    ///
    pub const QWebEngineProcessName = qWebEngineProcessName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineProcessName)
    ///
    pub fn qWebEngineProcessName() [:0]const u8 {
        const _ret = qtc.qtwebenginecoreglobal_h_QWebEngineProcessName();
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `qWebEngineChromiumVersion` instead
    ///
    pub const QWebEngineChromiumVersion = qWebEngineChromiumVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineChromiumVersion)
    ///
    pub fn qWebEngineChromiumVersion() [:0]const u8 {
        const _ret = qtc.qtwebenginecoreglobal_h_QWebEngineChromiumVersion();
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `qWebEngineChromiumSecurityPatchVersion` instead
    ///
    pub const QWebEngineChromiumSecurityPatchVersion = qWebEngineChromiumSecurityPatchVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineChromiumSecurityPatchVersion)
    ///
    pub fn qWebEngineChromiumSecurityPatchVersion() [:0]const u8 {
        const _ret = qtc.qtwebenginecoreglobal_h_QWebEngineChromiumSecurityPatchVersion();
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `qWebEngineGetDomainAndRegistry` instead
    ///
    pub const QWebEngineGetDomainAndRegistry = qWebEngineGetDomainAndRegistry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtwebenginecoreglobal-h.html#qWebEngineGetDomainAndRegistry)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn qWebEngineGetDomainAndRegistry(allocator: std.mem.Allocator, url: anytype) []const u8 {
        comptime _ = @TypeOf(url)._is_QUrl;
        var _str = qtc.qtwebenginecoreglobal_h_QWebEngineGetDomainAndRegistry(@ptrCast(url.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtwebenginecoreglobal_h.qWebEngineGetDomainAndRegistry: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
