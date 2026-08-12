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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineScript object in C++ memory
    ///
    pub fn new() QWebEngineScript {
        return .{ .ptr = qtc.QWebEngineScript_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebEngineScript object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn new2(other: anytype) QWebEngineScript {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        return .{ .ptr = qtc.QWebEngineScript_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn operatorAssign(self: QWebEngineScript, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        qtc.QWebEngineScript_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QWebEngineScript, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineScript_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineScript.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QWebEngineScript, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QWebEngineScript_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `sourceUrl` instead
    ///
    pub const SourceUrl = sourceUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#sourceUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    pub fn sourceUrl(self: QWebEngineScript) QUrl {
        return .{ .ptr = qtc.QWebEngineScript_SourceUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSourceUrl` instead
    ///
    pub const SetSourceUrl = setSourceUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` url: QUrl `
    ///
    pub fn setSourceUrl(self: QWebEngineScript, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebEngineScript_SetSourceUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `sourceCode` instead
    ///
    pub const SourceCode = sourceCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#sourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sourceCode(self: QWebEngineScript, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineScript_SourceCode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineScript.sourceCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSourceCode` instead
    ///
    pub const SetSourceCode = setSourceCode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setSourceCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` _sourceCode: []const u8 `
    ///
    pub fn setSourceCode(self: QWebEngineScript, _sourceCode: []const u8) void {
        const sourceCode_str = qtc.libqt_string{
            .len = _sourceCode.len,
            .data = _sourceCode.ptr,
        };
        qtc.QWebEngineScript_SetSourceCode(@ptrCast(self.ptr), sourceCode_str);
    }

    /// ### DEPRECATED: Use `injectionPoint` instead
    ///
    pub const InjectionPoint = injectionPoint;

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
    pub fn injectionPoint(self: QWebEngineScript) i32 {
        return qtc.QWebEngineScript_InjectionPoint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInjectionPoint` instead
    ///
    pub const SetInjectionPoint = setInjectionPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setInjectionPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` _injectionPoint: qwebenginescript_enums.InjectionPoint `
    ///
    pub fn setInjectionPoint(self: QWebEngineScript, _injectionPoint: i32) void {
        qtc.QWebEngineScript_SetInjectionPoint(@ptrCast(self.ptr), @bitCast(_injectionPoint));
    }

    /// ### DEPRECATED: Use `worldId` instead
    ///
    pub const WorldId = worldId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#worldId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    pub fn worldId(self: QWebEngineScript) u32 {
        return qtc.QWebEngineScript_WorldId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWorldId` instead
    ///
    pub const SetWorldId = setWorldId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setWorldId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` _worldId: u32 `
    ///
    pub fn setWorldId(self: QWebEngineScript, _worldId: u32) void {
        qtc.QWebEngineScript_SetWorldId(@ptrCast(self.ptr), @bitCast(_worldId));
    }

    /// ### DEPRECATED: Use `runsOnSubFrames` instead
    ///
    pub const RunsOnSubFrames = runsOnSubFrames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#runsOnSubFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    pub fn runsOnSubFrames(self: QWebEngineScript) bool {
        return qtc.QWebEngineScript_RunsOnSubFrames(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRunsOnSubFrames` instead
    ///
    pub const SetRunsOnSubFrames = setRunsOnSubFrames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#setRunsOnSubFrames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` on: bool `
    ///
    pub fn setRunsOnSubFrames(self: QWebEngineScript, on: bool) void {
        qtc.QWebEngineScript_SetRunsOnSubFrames(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn operatorEqual(self: QWebEngineScript, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        return qtc.QWebEngineScript_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn operatorNotEqual(self: QWebEngineScript, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        return qtc.QWebEngineScript_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineScript `
    ///
    /// ` other: QWebEngineScript `
    ///
    pub fn swap(self: QWebEngineScript, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QWebEngineScript;
        qtc.QWebEngineScript_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginescript.html#dtor.QWebEngineScript)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineScript `
    ///
    pub fn delete(self: QWebEngineScript) void {
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
