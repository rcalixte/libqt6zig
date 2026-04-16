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

    /// New constructs a new QWebEngineFrame object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWebEngineFrame `
    ///
    pub fn New(param1: anytype) QWebEngineFrame {
        comptime _ = @TypeOf(param1)._is_QWebEngineFrame;
        return .{ .ptr = qtc.QWebEngineFrame_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn IsValid(self: QWebEngineFrame) bool {
        return qtc.QWebEngineFrame_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QWebEngineFrame, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineFrame_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineframe.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#htmlName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HtmlName(self: QWebEngineFrame, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineFrame_HtmlName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineframe.HtmlName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QWebEngineFrame, allocator: std.mem.Allocator) []QWebEngineFrame {
        const _arr: qtc.libqt_list = qtc.QWebEngineFrame_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWebEngineFrame, _arr.len) catch @panic("qwebengineframe.Children: Memory allocation failed");
        const _data: [*]QtC.QWebEngineFrame = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn Url(self: QWebEngineFrame) QUrl {
        return .{ .ptr = qtc.QWebEngineFrame_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn Size(self: QWebEngineFrame) QSizeF {
        return .{ .ptr = qtc.QWebEngineFrame_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#isMainFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn IsMainFrame(self: QWebEngineFrame) bool {
        return qtc.QWebEngineFrame_IsMainFrame(@ptrCast(self.ptr));
    }

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
    pub fn RunJavaScript(self: QWebEngineFrame, script: []const u8, callback: *const fn (QVariant) callconv(.c) void) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript(@ptrCast(self.ptr), script_str, @bitCast(@intFromPtr(callback)));
    }

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
    pub fn RunJavaScript2(self: QWebEngineFrame, script: []const u8, worldId: u32, callback: *const fn (QVariant) callconv(.c) void) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript2(@ptrCast(self.ptr), script_str, @bitCast(worldId), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` script: []const u8 `
    ///
    pub fn RunJavaScript3(self: QWebEngineFrame, script: []const u8) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript3(@ptrCast(self.ptr), script_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn PrintToPdf(self: QWebEngineFrame, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEngineFrame_PrintToPdf(@ptrCast(self.ptr), filePath_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineFrame `
    ///
    /// ` callback: *const fn (funcparam1: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn PrintToPdf2(self: QWebEngineFrame, callback: *const fn (qtc.libqt_string) callconv(.c) void) void {
        qtc.QWebEngineFrame_PrintToPdf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn RunJavaScript22(self: QWebEngineFrame, script: []const u8, worldId: u32) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript22(@ptrCast(self.ptr), script_str, @bitCast(worldId));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebengineframe.html#dtor.QWebEngineFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineFrame `
    ///
    pub fn Delete(self: QWebEngineFrame) void {
        qtc.QWebEngineFrame_Delete(@ptrCast(self.ptr));
    }
};
