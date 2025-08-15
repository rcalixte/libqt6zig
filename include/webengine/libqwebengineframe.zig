const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebengineframe.html
pub const qwebengineframe = struct {
    /// New constructs a new QWebEngineFrame object.
    ///
    /// ``` param1: QtC.QWebEngineFrame ```
    pub fn New(param1: ?*anyopaque) QtC.QWebEngineFrame {
        return qtc.QWebEngineFrame_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#isValid)
    ///
    /// ``` self: QtC.QWebEngineFrame ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QWebEngineFrame_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#name)
    ///
    /// ``` self: QtC.QWebEngineFrame, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineFrame_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineframe.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#htmlName)
    ///
    /// ``` self: QtC.QWebEngineFrame, allocator: std.mem.Allocator ```
    pub fn HtmlName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineFrame_HtmlName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebengineframe.HtmlName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#children)
    ///
    /// ``` self: QtC.QWebEngineFrame, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWebEngineFrame {
        const _arr: qtc.libqt_list = qtc.QWebEngineFrame_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWebEngineFrame, _arr.len) catch @panic("qwebengineframe.Children: Memory allocation failed");
        const _data: [*]QtC.QWebEngineFrame = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#url)
    ///
    /// ``` self: QtC.QWebEngineFrame ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineFrame_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#size)
    ///
    /// ``` self: QtC.QWebEngineFrame ```
    pub fn Size(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QWebEngineFrame_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#isMainFrame)
    ///
    /// ``` self: QtC.QWebEngineFrame ```
    pub fn IsMainFrame(self: ?*anyopaque) bool {
        return qtc.QWebEngineFrame_IsMainFrame(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
    ///
    /// ``` self: QtC.QWebEngineFrame, script: []const u8 ```
    pub fn RunJavaScript(self: ?*anyopaque, script: []const u8) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript(@ptrCast(self), script_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#printToPdf)
    ///
    /// ``` self: QtC.QWebEngineFrame, filePath: []const u8 ```
    pub fn PrintToPdf(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWebEngineFrame_PrintToPdf(@ptrCast(self), filePath_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#runJavaScript)
    ///
    /// ``` self: QtC.QWebEngineFrame, script: []const u8, worldId: u32 ```
    pub fn RunJavaScript22(self: ?*anyopaque, script: []const u8, worldId: u32) void {
        const script_str = qtc.libqt_string{
            .len = script.len,
            .data = script.ptr,
        };
        qtc.QWebEngineFrame_RunJavaScript22(@ptrCast(self), script_str, @intCast(worldId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebengineframe.html#dtor.QWebEngineFrame)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineFrame ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineFrame_Delete(@ptrCast(self));
    }
};
