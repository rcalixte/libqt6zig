const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSizeF = @import("libqt6").QSizeF;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html)
pub const QWebEngineFrame = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineFrame,

    pub const _is_QWebEngineFrame = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebEngineFrame object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineFrame `
    ///
    pub fn new(param1: anytype) QWebEngineFrame {
        comptime _ = @TypeOf(param1)._is_QWebEngineFrame;
        return .{ .ptr = qtc.QWebEngineFrame_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn isValid(self: QWebEngineFrame) bool {
        return qtc.QWebEngineFrame_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QWebEngineFrame, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineFrame_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineFrame.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `htmlName` instead
    ///
    pub const HtmlName = htmlName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#htmlName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn htmlName(self: QWebEngineFrame, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineFrame_HtmlName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineFrame.htmlName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QWebEngineFrame, allocator: std.mem.Allocator) []QWebEngineFrame {
        const _arr: qtc.libqt_list = qtc.QWebEngineFrame_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEngineFrame, _arr.len) catch @panic("QWebEngineFrame.children: Memory allocation failed");
        const _data_val: [*]QtC.QWebEngineFrame = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn url(self: QWebEngineFrame) QUrl {
        return .{ .ptr = qtc.QWebEngineFrame_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn size(self: QWebEngineFrame) QSizeF {
        return .{ .ptr = qtc.QWebEngineFrame_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isMainFrame` instead
    ///
    pub const IsMainFrame = isMainFrame;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#isMainFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn isMainFrame(self: QWebEngineFrame) bool {
        return qtc.QWebEngineFrame_IsMainFrame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `runJavaScript` instead
    ///
    pub const RunJavaScript = runJavaScript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` script: []const u8 `
    ///
    /// ` callback: *const fn (funcparam1: QVariant) callconv(.c) void `
    ///
    pub fn runJavaScript(self: QWebEngineFrame, script: []const u8, callback: *const fn (QVariant) callconv(.c) void) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript(@ptrCast(self.ptr), script_str, @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `runJavaScript2` instead
    ///
    pub const RunJavaScript2 = runJavaScript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` script: []const u8 `
    ///
    /// ` worldId: u32 `
    ///
    /// ` callback: *const fn (funcparam1: QVariant) callconv(.c) void `
    ///
    pub fn runJavaScript2(self: QWebEngineFrame, script: []const u8, worldId: u32, callback: *const fn (QVariant) callconv(.c) void) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript2(@ptrCast(self.ptr), script_str, @bitCast(worldId), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `runJavaScript3` instead
    ///
    pub const RunJavaScript3 = runJavaScript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` script: []const u8 `
    ///
    pub fn runJavaScript3(self: QWebEngineFrame, script: []const u8) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript3(@ptrCast(self.ptr), script_str);
    }

    /// ### DEPRECATED: Use `printToPdf` instead
    ///
    pub const PrintToPdf = printToPdf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn printToPdf(self: QWebEngineFrame, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEngineFrame_PrintToPdf(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `printToPdf2` instead
    ///
    pub const PrintToPdf2 = printToPdf2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` callback: *const fn (funcparam1: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn printToPdf2(self: QWebEngineFrame, callback: *const fn (qtc.libqt_string) callconv(.c) void) void {
        qtc.QWebEngineFrame_PrintToPdf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `runJavaScript22` instead
    ///
    pub const RunJavaScript22 = runJavaScript22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` script: []const u8 `
    ///
    /// ` worldId: u32 `
    ///
    pub fn runJavaScript22(self: QWebEngineFrame, script: []const u8, worldId: u32) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript22(@ptrCast(self.ptr), script_str, @bitCast(worldId));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#dtor.QWebEngineFrame)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn delete(self: QWebEngineFrame) void {
        qtc.QWebEngineFrame_Delete(@ptrCast(self.ptr));
    }
};
