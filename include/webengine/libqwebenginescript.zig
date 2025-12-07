const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qwebenginescript_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html)
pub const qwebenginescript = struct {
    /// New constructs a new QWebEngineScript object.
    ///
    pub fn New() QtC.QWebEngineScript {
        return qtc.QWebEngineScript_new();
    }

    /// New2 constructs a new QWebEngineScript object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QWebEngineScript `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QWebEngineScript {
        return qtc.QWebEngineScript_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` other: QtC.QWebEngineScript `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineScript_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineScript_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginescript.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWebEngineScript_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#sourceUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    pub fn SourceUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineScript_SourceUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetSourceUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebEngineScript_SetSourceUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#sourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceCode(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineScript_SourceCode(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginescript.SourceCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` sourceCode: []const u8 `
    ///
    pub fn SetSourceCode(self: ?*anyopaque, sourceCode: []const u8) void {
        const sourceCode_str = qtc.libqt_string{
            .len = sourceCode.len,
            .data = sourceCode.ptr,
        };
        qtc.QWebEngineScript_SetSourceCode(@ptrCast(self), sourceCode_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#injectionPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginescript_enums.InjectionPoint `
    ///
    pub fn InjectionPoint(self: ?*anyopaque) i32 {
        return qtc.QWebEngineScript_InjectionPoint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setInjectionPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` injectionPoint: qwebenginescript_enums.InjectionPoint `
    ///
    pub fn SetInjectionPoint(self: ?*anyopaque, injectionPoint: i32) void {
        qtc.QWebEngineScript_SetInjectionPoint(@ptrCast(self), @intCast(injectionPoint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#worldId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    pub fn WorldId(self: ?*anyopaque) u32 {
        return qtc.QWebEngineScript_WorldId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setWorldId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` worldId: u32 `
    ///
    pub fn SetWorldId(self: ?*anyopaque, worldId: u32) void {
        qtc.QWebEngineScript_SetWorldId(@ptrCast(self), @intCast(worldId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#runsOnSubFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    pub fn RunsOnSubFrames(self: ?*anyopaque) bool {
        return qtc.QWebEngineScript_RunsOnSubFrames(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setRunsOnSubFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` on: bool `
    ///
    pub fn SetRunsOnSubFrames(self: ?*anyopaque, on: bool) void {
        qtc.QWebEngineScript_SetRunsOnSubFrames(@ptrCast(self), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` other: QtC.QWebEngineScript `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QWebEngineScript_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` other: QtC.QWebEngineScript `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QWebEngineScript_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    /// ` other: QtC.QWebEngineScript `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QWebEngineScript_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#dtor.QWebEngineScript)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebEngineScript `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineScript_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#public-types)
pub const enums = struct {
    pub const InjectionPoint = enum {
        pub const Deferred: i32 = 0;
        pub const DocumentReady: i32 = 1;
        pub const DocumentCreation: i32 = 2;
    };

    pub const ScriptWorldId = enum {
        pub const MainWorld: i32 = 0;
        pub const ApplicationWorld: i32 = 1;
        pub const UserWorld: i32 = 2;
    };
};
