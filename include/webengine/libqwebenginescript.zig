const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const qwebenginescript_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html)
pub const QWebEngineScript = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineScript,

    pub const _is_QWebEngineScript = {};

    /// New constructs a new QWebEngineScript object.
    ///
    pub fn New() QWebEngineScript {
        return .{ .ptr = qtc.QWebEngineScript_new() };
    }

    /// New2 constructs a new QWebEngineScript object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn New2(other: anytype) QWebEngineScript {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        return .{ .ptr = qtc.QWebEngineScript_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn OperatorAssign(self: QWebEngineScript, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        qtc.QWebEngineScript_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QWebEngineScript, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineScript_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginescript.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QWebEngineScript, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWebEngineScript_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#sourceUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    pub fn SourceUrl(self: QWebEngineScript) QUrl {
        return .{ .ptr = qtc.QWebEngineScript_SourceUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetSourceUrl(self: QWebEngineScript, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineScript_SetSourceUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#sourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SourceCode(self: QWebEngineScript, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineScript_SourceCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginescript.SourceCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` sourceCode: []const u8 `
    ///
    pub fn SetSourceCode(self: QWebEngineScript, sourceCode: []const u8) void {
        const sourceCode_str = qtc.libqt_string{
            .len = sourceCode.len,
            .data = sourceCode.ptr,
        };
        qtc.QWebEngineScript_SetSourceCode(@ptrCast(self.ptr), sourceCode_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#injectionPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginescript_enums.InjectionPoint `
    ///
    pub fn InjectionPoint(self: QWebEngineScript) i32 {
        return qtc.QWebEngineScript_InjectionPoint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setInjectionPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` injectionPoint: qwebenginescript_enums.InjectionPoint `
    ///
    pub fn SetInjectionPoint(self: QWebEngineScript, injectionPoint: i32) void {
        qtc.QWebEngineScript_SetInjectionPoint(@ptrCast(self.ptr), @bitCast(injectionPoint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#worldId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    pub fn WorldId(self: QWebEngineScript) u32 {
        return qtc.QWebEngineScript_WorldId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setWorldId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` worldId: u32 `
    ///
    pub fn SetWorldId(self: QWebEngineScript, worldId: u32) void {
        qtc.QWebEngineScript_SetWorldId(@ptrCast(self.ptr), @bitCast(worldId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#runsOnSubFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    pub fn RunsOnSubFrames(self: QWebEngineScript) bool {
        return qtc.QWebEngineScript_RunsOnSubFrames(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setRunsOnSubFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` on: bool `
    ///
    pub fn SetRunsOnSubFrames(self: QWebEngineScript, on: bool) void {
        qtc.QWebEngineScript_SetRunsOnSubFrames(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn OperatorEqual(self: QWebEngineScript, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        return qtc.QWebEngineScript_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn OperatorNotEqual(self: QWebEngineScript, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        return qtc.QWebEngineScript_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn Swap(self: QWebEngineScript, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        qtc.QWebEngineScript_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#dtor.QWebEngineScript)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineScript `
    ///
    pub fn Delete(self: QWebEngineScript) void {
        qtc.QWebEngineScript_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#public-types)
pub const enums = struct {
    pub const InjectionPoint = enum(i32) {
        pub const Deferred: i32 = 0;
        pub const DocumentReady: i32 = 1;
        pub const DocumentCreation: i32 = 2;
    };

    pub const ScriptWorldId = enum(i32) {
        pub const MainWorld: i32 = 0;
        pub const ApplicationWorld: i32 = 1;
        pub const UserWorld: i32 = 2;
    };
};
