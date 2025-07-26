const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html
pub const qsciscintillabase = struct {
    /// New constructs a new QsciScintillaBase object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QsciScintillaBase {
        return qtc.QsciScintillaBase_new(@ptrCast(parent));
    }

    /// New2 constructs a new QsciScintillaBase object.
    ///
    ///
    pub fn New2() QtC.QsciScintillaBase {
        return qtc.QsciScintillaBase_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QsciScintillaBase_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QsciScintillaBase, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintillaBase_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QsciScintillaBase, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QsciScintillaBase_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QsciScintillaBase_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QsciScintillaBase_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    ///
    pub fn Pool() QtC.QsciScintillaBase {
        return qtc.QsciScintillaBase_Pool();
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, scrollBar: QtC.QScrollBar ```
    pub fn ReplaceHorizontalScrollBar(self: ?*anyopaque, scrollBar: ?*anyopaque) void {
        qtc.QsciScintillaBase_ReplaceHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollBar));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, scrollBar: QtC.QScrollBar ```
    pub fn ReplaceVerticalScrollBar(self: ?*anyopaque, scrollBar: ?*anyopaque) void {
        qtc.QsciScintillaBase_ReplaceVerticalScrollBar(@ptrCast(self), @ptrCast(scrollBar));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32 ```
    pub fn SendScintilla(self: ?*anyopaque, msg: u32) i64 {
        return qtc.QsciScintillaBase_SendScintilla(@ptrCast(self), @intCast(msg));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: u64, lParam: ?*anyopaque ```
    pub fn SendScintilla2(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla2(@ptrCast(self), @intCast(msg), @intCast(wParam), lParam);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: usize, lParam: []const u8 ```
    pub fn SendScintilla3(self: ?*anyopaque, msg: u32, wParam: usize, lParam: []const u8) i64 {
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla3(@ptrCast(self), @intCast(msg), @intCast(wParam), lParam_Cstring);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, lParam: []const u8 ```
    pub fn SendScintilla4(self: ?*anyopaque, msg: u32, lParam: []const u8) i64 {
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla4(@ptrCast(self), @intCast(msg), lParam_Cstring);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: []const u8, lParam: []const u8 ```
    pub fn SendScintilla5(self: ?*anyopaque, msg: u32, wParam: []const u8, lParam: []const u8) i64 {
        const wParam_Cstring = wParam.ptr;
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla5(@ptrCast(self), @intCast(msg), wParam_Cstring, lParam_Cstring);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: i64 ```
    pub fn SendScintilla6(self: ?*anyopaque, msg: u32, wParam: i64) i64 {
        return qtc.QsciScintillaBase_SendScintilla6(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: i32 ```
    pub fn SendScintilla7(self: ?*anyopaque, msg: u32, wParam: i32) i64 {
        return qtc.QsciScintillaBase_SendScintilla7(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, cpMin: i64, cpMax: i64, lpstrText: []const u8 ```
    pub fn SendScintilla8(self: ?*anyopaque, msg: u32, cpMin: i64, cpMax: i64, lpstrText: []const u8) i64 {
        const lpstrText_Cstring = lpstrText.ptr;
        return qtc.QsciScintillaBase_SendScintilla8(@ptrCast(self), @intCast(msg), @intCast(cpMin), @intCast(cpMax), lpstrText_Cstring);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: u64, col: QtC.QColor ```
    pub fn SendScintilla9(self: ?*anyopaque, msg: u32, wParam: u64, col: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla9(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, col: QtC.QColor ```
    pub fn SendScintilla10(self: ?*anyopaque, msg: u32, col: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla10(@ptrCast(self), @intCast(msg), @ptrCast(col));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: u64, hdc: QtC.QPainter, rc: QtC.QRect, cpMin: i64, cpMax: i64 ```
    pub fn SendScintilla11(self: ?*anyopaque, msg: u32, wParam: u64, hdc: ?*anyopaque, rc: ?*anyopaque, cpMin: i64, cpMax: i64) i64 {
        return qtc.QsciScintillaBase_SendScintilla11(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(hdc), @ptrCast(rc), @intCast(cpMin), @intCast(cpMax));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: u64, lParam: QtC.QPixmap ```
    pub fn SendScintilla12(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla12(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(lParam));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: u64, lParam: QtC.QImage ```
    pub fn SendScintilla13(self: ?*anyopaque, msg: u32, wParam: u64, lParam: ?*anyopaque) i64 {
        return qtc.QsciScintillaBase_SendScintilla13(@ptrCast(self), @intCast(msg), @intCast(wParam), @ptrCast(lParam));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32 ```
    pub fn SendScintillaPtrResult(self: ?*anyopaque, msg: u32) ?*anyopaque {
        return qtc.QsciScintillaBase_SendScintillaPtrResult(@ptrCast(self), @intCast(msg));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` qt_key: i32, modifiers: *i32 ```
    pub fn CommandKey(qt_key: i32, modifiers: *i32) i32 {
        return qtc.QsciScintillaBase_CommandKey(@intCast(qt_key), @ptrCast(modifiers));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, yes: bool ```
    pub fn QSCN_SELCHANGED(self: ?*anyopaque, yes: bool) void {
        qtc.QsciScintillaBase_QSCN_SELCHANGED(@ptrCast(self), yes);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_AUTOCCANCELLED(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_AUTOCCANCELLED(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_AUTOCCHARDELETED(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_AUTOCCHARDELETED(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, selection: []const u8, position: i32, ch: i32, method: i32 ```
    pub fn SCN_AUTOCCOMPLETED(self: ?*anyopaque, selection: []const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCCOMPLETED(@ptrCast(self), selection_Cstring, @intCast(position), @intCast(ch), @intCast(method));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, selection: []const u8, position: i32, ch: i32, method: i32 ```
    pub fn SCN_AUTOCSELECTION(self: ?*anyopaque, selection: []const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTION(@ptrCast(self), selection_Cstring, @intCast(position), @intCast(ch), @intCast(method));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, selection: []const u8, position: i32 ```
    pub fn SCN_AUTOCSELECTION2(self: ?*anyopaque, selection: []const u8, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTION2(@ptrCast(self), selection_Cstring, @intCast(position));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, selection: []const u8, id: i32, position: i32 ```
    pub fn SCN_AUTOCSELECTIONCHANGE(self: ?*anyopaque, selection: []const u8, id: i32, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(position));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCEN_CHANGE(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCEN_CHANGE(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, direction: i32 ```
    pub fn SCN_CALLTIPCLICK(self: ?*anyopaque, direction: i32) void {
        qtc.QsciScintillaBase_SCN_CALLTIPCLICK(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, charadded: i32 ```
    pub fn SCN_CHARADDED(self: ?*anyopaque, charadded: i32) void {
        qtc.QsciScintillaBase_SCN_CHARADDED(@ptrCast(self), @intCast(charadded));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, line: i32, modifiers: i32 ```
    pub fn SCN_DOUBLECLICK(self: ?*anyopaque, position: i32, line: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_DOUBLECLICK(@ptrCast(self), @intCast(position), @intCast(line), @intCast(modifiers));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, x: i32, y: i32 ```
    pub fn SCN_DWELLEND(self: ?*anyopaque, position: i32, x: i32, y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLEND(@ptrCast(self), @intCast(position), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, x: i32, y: i32 ```
    pub fn SCN_DWELLSTART(self: ?*anyopaque, position: i32, x: i32, y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLSTART(@ptrCast(self), @intCast(position), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_FOCUSIN(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_FOCUSIN(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_FOCUSOUT(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_FOCUSOUT(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTCLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTDOUBLECLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, modifiers: i32 ```
    pub fn SCN_HOTSPOTRELEASECLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, modifiers: i32 ```
    pub fn SCN_INDICATORCLICK(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_INDICATORCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, modifiers: i32 ```
    pub fn SCN_INDICATORRELEASE(self: ?*anyopaque, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_INDICATORRELEASE(@ptrCast(self), @intCast(position), @intCast(modifiers));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: u32, param2: u64, param3: ?*anyopaque ```
    pub fn SCN_MACRORECORD(self: ?*anyopaque, param1: u32, param2: u64, param3: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_MACRORECORD(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, modifiers: i32, margin: i32 ```
    pub fn SCN_MARGINCLICK(self: ?*anyopaque, position: i32, modifiers: i32, margin: i32) void {
        qtc.QsciScintillaBase_SCN_MARGINCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32, modifiers: i32, margin: i32 ```
    pub fn SCN_MARGINRIGHTCLICK(self: ?*anyopaque, position: i32, modifiers: i32, margin: i32) void {
        qtc.QsciScintillaBase_SCN_MARGINRIGHTCLICK(@ptrCast(self), @intCast(position), @intCast(modifiers), @intCast(margin));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: i32, param2: i32, param3: []const u8, param4: i32, param5: i32, param6: i32, param7: i32, param8: i32, param9: i32, param10: i32 ```
    pub fn SCN_MODIFIED(self: ?*anyopaque, param1: i32, param2: i32, param3: []const u8, param4: i32, param5: i32, param6: i32, param7: i32, param8: i32, param9: i32, param10: i32) void {
        const param3_Cstring = param3.ptr;
        qtc.QsciScintillaBase_SCN_MODIFIED(@ptrCast(self), @intCast(param1), @intCast(param2), param3_Cstring, @intCast(param4), @intCast(param5), @intCast(param6), @intCast(param7), @intCast(param8), @intCast(param9), @intCast(param10));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_MODIFYATTEMPTRO(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_MODIFYATTEMPTRO(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: i32, param2: i32 ```
    pub fn SCN_NEEDSHOWN(self: ?*anyopaque, param1: i32, param2: i32) void {
        qtc.QsciScintillaBase_SCN_NEEDSHOWN(@ptrCast(self), @intCast(param1), @intCast(param2));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_PAINTED(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_PAINTED(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_SAVEPOINTLEFT(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_SAVEPOINTLEFT(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_SAVEPOINTREACHED(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_SAVEPOINTREACHED(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, position: i32 ```
    pub fn SCN_STYLENEEDED(self: ?*anyopaque, position: i32) void {
        qtc.QsciScintillaBase_SCN_STYLENEEDED(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, url: QtC.QUrl ```
    pub fn SCN_URIDROPPED(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_URIDROPPED(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, updated: i32 ```
    pub fn SCN_UPDATEUI(self: ?*anyopaque, updated: i32) void {
        qtc.QsciScintillaBase_SCN_UPDATEUI(@ptrCast(self), @intCast(updated));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, selection: []const u8, id: i32, ch: i32, method: i32, position: i32 ```
    pub fn SCN_USERLISTSELECTION(self: ?*anyopaque, selection: []const u8, id: i32, ch: i32, method: i32, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(ch), @intCast(method), @intCast(position));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, selection: []const u8, id: i32, ch: i32, method: i32 ```
    pub fn SCN_USERLISTSELECTION2(self: ?*anyopaque, selection: []const u8, id: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION2(@ptrCast(self), selection_Cstring, @intCast(id), @intCast(ch), @intCast(method));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, selection: []const u8, id: i32 ```
    pub fn SCN_USERLISTSELECTION3(self: ?*anyopaque, selection: []const u8, id: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION3(@ptrCast(self), selection_Cstring, @intCast(id));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SCN_ZOOM(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_ZOOM(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, source: QtC.QMimeData ```
    pub fn CanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_CanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, source: QtC.QMimeData) callconv(.c) bool ```
    pub fn OnCanInsertFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnCanInsertFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, source: QtC.QMimeData ```
    pub fn QBaseCanInsertFromMimeData(self: ?*anyopaque, source: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_QBaseCanInsertFromMimeData(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, source: QtC.QMimeData, rectangular: bool, allocator: std.mem.Allocator ```
    pub fn FromMimeData(self: ?*anyopaque, source: ?*anyopaque, rectangular: *bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QsciScintillaBase_FromMimeData(@ptrCast(self), @ptrCast(source), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintillabase.FromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, source: QtC.QMimeData, rectangular: bool) callconv(.c) []u8 ```
    pub fn OnFromMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, *bool) callconv(.c) []u8) void {
        qtc.QsciScintillaBase_OnFromMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, source: QtC.QMimeData, rectangular: bool, allocator: std.mem.Allocator ```
    pub fn QBaseFromMimeData(self: ?*anyopaque, source: ?*anyopaque, rectangular: *bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QsciScintillaBase_QBaseFromMimeData(@ptrCast(self), @ptrCast(source), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintillabase.FromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, text: []u8, rectangular: bool ```
    pub fn ToMimeData(self: ?*anyopaque, text: []u8, rectangular: bool) QtC.QMimeData {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QsciScintillaBase_ToMimeData(@ptrCast(self), text_str, rectangular);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, text: []u8, rectangular: bool) callconv(.c) QtC.QMimeData ```
    pub fn OnToMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, bool) callconv(.c) QtC.QMimeData) void {
        qtc.QsciScintillaBase_OnToMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, text: []u8, rectangular: bool ```
    pub fn QBaseToMimeData(self: ?*anyopaque, text: []u8, rectangular: bool) QtC.QMimeData {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QsciScintillaBase_QBaseToMimeData(@ptrCast(self), text_str, rectangular);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_DragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_DragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_DragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_DropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseDropEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_FocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseFocusInEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_FocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QsciScintillaBase_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QsciScintillaBase_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_KeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_InputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_MouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_MousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseMousePressEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_ResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, e: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, e: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseResizeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, dx: i32, dy: i32 ```
    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QsciScintillaBase_ScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, dx: i32, dy: i32) callconv(.c) void ```
    pub fn OnScrollContentsBy(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnScrollContentsBy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, dx: i32, dy: i32 ```
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QsciScintillaBase_QBaseScrollContentsBy(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SetScrollBars(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_SetScrollBars(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) void ```
    pub fn OnSetScrollBars(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetScrollBars(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseSetScrollBars(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseSetScrollBars(@ptrCast(self));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, x: i32, y: i32 ```
    pub fn ContextMenuNeeded(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QsciScintillaBase_ContextMenuNeeded(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, x: i32, y: i32) callconv(.c) bool ```
    pub fn OnContextMenuNeeded(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnContextMenuNeeded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QsciScintillaBase, x: i32, y: i32 ```
    pub fn QBaseContextMenuNeeded(self: ?*anyopaque, x: i32, y: i32) bool {
        return qtc.QsciScintillaBase_QBaseContextMenuNeeded(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QsciScintillaBase_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QsciScintillaBase_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: u64 ```
    pub fn SendScintilla22(self: ?*anyopaque, msg: u32, wParam: u64) i64 {
        return qtc.QsciScintillaBase_SendScintilla22(@ptrCast(self), @intCast(msg), @intCast(wParam));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ``` self: QtC.QsciScintillaBase, msg: u32, wParam: u64, lParam: i64 ```
    pub fn SendScintilla32(self: ?*anyopaque, msg: u32, wParam: u64, lParam: i64) i64 {
        return qtc.QsciScintillaBase_SendScintilla32(@ptrCast(self), @intCast(msg), @intCast(wParam), @intCast(lParam));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn VerticalScrollBarPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase, verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetVerticalScrollBarPolicy(self: ?*anyopaque, verticalScrollBarPolicy: i64) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self), @intCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn VerticalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ``` self: QtC.QsciScintillaBase, scrollbar: QtC.QScrollBar ```
    pub fn SetVerticalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn HorizontalScrollBarPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase, horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy ```
    pub fn SetHorizontalScrollBarPolicy(self: ?*anyopaque, horizontalScrollBarPolicy: i64) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self), @intCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn HorizontalScrollBar(self: ?*anyopaque) QtC.QScrollBar {
        return qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ``` self: QtC.QsciScintillaBase, scrollbar: QtC.QScrollBar ```
    pub fn SetHorizontalScrollBar(self: ?*anyopaque, scrollbar: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self), @ptrCast(scrollbar));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn CornerWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ``` self: QtC.QsciScintillaBase, widget: QtC.QWidget ```
    pub fn SetCornerWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ``` self: QtC.QsciScintillaBase, widget: QtC.QWidget, alignment: i32 ```
    pub fn AddScrollBarWidget(self: ?*anyopaque, widget: ?*anyopaque, alignment: i64) void {
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self), @ptrCast(widget), @intCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ``` self: QtC.QsciScintillaBase, alignment: i32, allocator: std.mem.Allocator ```
    pub fn ScrollBarWidgets(self: ?*anyopaque, alignment: i64, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.struct_libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self), @intCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qsciscintillabase.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Viewport(self: ?*anyopaque) QtC.QWidget {
        return qtc.QAbstractScrollArea_Viewport(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ``` self: QtC.QsciScintillaBase, widget: QtC.QWidget ```
    pub fn SetViewport(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MaximumViewportSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i64 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase, policy: qabstractscrollarea_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.QsciScintillaBase, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FrameShape(self: ?*anyopaque) i64 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.QsciScintillaBase, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i64) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FrameShadow(self: ?*anyopaque) i64 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.QsciScintillaBase, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i64) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.QsciScintillaBase, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.QsciScintillaBase, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WindowModality(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.QsciScintillaBase, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i64) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.QsciScintillaBase, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.QsciScintillaBase, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.QsciScintillaBase, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QsciScintillaBase, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QsciScintillaBase, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QsciScintillaBase, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QsciScintillaBase, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QsciScintillaBase, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QsciScintillaBase, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QsciScintillaBase, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QsciScintillaBase, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QsciScintillaBase, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QsciScintillaBase, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QsciScintillaBase, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QsciScintillaBase, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.QsciScintillaBase, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.QsciScintillaBase, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.QsciScintillaBase, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.QsciScintillaBase, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i64) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn BackgroundRole(self: ?*anyopaque) i64 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.QsciScintillaBase, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i64) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ForegroundRole(self: ?*anyopaque) i64 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.QsciScintillaBase, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.QsciScintillaBase, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.QsciScintillaBase, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.QsciScintillaBase, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QsciScintillaBase, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QsciScintillaBase, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintillaBase, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintillaBase, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QsciScintillaBase, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QsciScintillaBase, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.QsciScintillaBase, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QsciScintillaBase, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.struct_libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.QsciScintillaBase, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.struct_libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.QsciScintillaBase, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.QsciScintillaBase, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.struct_libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.QsciScintillaBase, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.struct_libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.QsciScintillaBase, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.struct_libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.QsciScintillaBase, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.QsciScintillaBase, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.struct_libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.QsciScintillaBase, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.QsciScintillaBase, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.struct_libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.QsciScintillaBase, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.struct_libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.QsciScintillaBase, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.QsciScintillaBase, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QsciScintillaBase, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.QsciScintillaBase, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QsciScintillaBase, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i64) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: QtC.QWidget, param2: QtC.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: QtC.QsciScintillaBase, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i64 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QsciScintillaBase, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QsciScintillaBase, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QsciScintillaBase, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QsciScintillaBase, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.QsciScintillaBase, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QsciScintillaBase, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QsciScintillaBase, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.QsciScintillaBase, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QsciScintillaBase, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QsciScintillaBase, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QsciScintillaBase, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QsciScintillaBase, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintillabase.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.QsciScintillaBase, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.struct_libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.QsciScintillaBase, state: i32 ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.QsciScintillaBase, state: i32 ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i64) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QsciScintillaBase, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i64, vertical: i64) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QsciScintillaBase, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.QsciScintillaBase, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QsciScintillaBase, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QsciScintillaBase, parent: QtC.QWidget, f: i32 ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QsciScintillaBase, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QsciScintillaBase, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QsciScintillaBase, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintillaBase, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.QsciScintillaBase, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.QsciScintillaBase, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.QsciScintillaBase, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.QsciScintillaBase, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.struct_libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qsciscintillabase.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintillaBase, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintillaBase, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintillaBase, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QsciScintillaBase, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QsciScintillaBase, typeVal: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.QsciScintillaBase, typeVal: i32 ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) QtC.QWidget {
        return qtc.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QsciScintillaBase, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QsciScintillaBase, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QsciScintillaBase, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i64) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.QsciScintillaBase, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QsciScintillaBase, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.QsciScintillaBase, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QsciScintillaBase, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.struct_libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, title: []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QsciScintillaBase, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QsciScintillaBase, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.struct_libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, iconText: []const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QsciScintillaBase, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QsciScintillaBase, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintillaBase, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintillaBase, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintillaBase, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: i32 ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintillaBase, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintillaBase, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QsciScintillaBase, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: i32 ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QsciScintillaBase, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QsciScintillaBase, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QsciScintillaBase, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i64) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QsciScintillaBase, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QsciScintillaBase, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: i32 ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QsciScintillaBase, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QsciScintillaBase, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QsciScintillaBase, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QsciScintillaBase, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QsciScintillaBase, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QsciScintillaBase, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsciscintillabase.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QsciScintillaBase, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QsciScintillaBase, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QsciScintillaBase, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QsciScintillaBase, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QsciScintillaBase, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QsciScintillaBase, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsciscintillabase.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsciscintillabase.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QsciScintillaBase, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QsciScintillaBase, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QsciScintillaBase, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QsciScintillaBase, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i64, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintillaBase_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintillaBase_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QsciScintillaBase_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintillaBase_SizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintillaBase_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QsciScintillaBase_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, viewport: QtC.QWidget ```
    pub fn SetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QsciScintillaBase_SetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, viewport: QtC.QWidget ```
    pub fn QBaseSetupViewport(self: ?*anyopaque, viewport: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseSetupViewport(@ptrCast(self), @ptrCast(viewport));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, viewport: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetupViewport(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetupViewport(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QEvent ```
    pub fn ViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_ViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QEvent ```
    pub fn QBaseViewportEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_QBaseViewportEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnViewportEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnViewportEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QsciScintillaBase_WheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseWheelEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintillaBase_ViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseViewportSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QsciScintillaBase_QBaseViewportSizeHint(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnViewportSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QsciScintillaBase_OnViewportSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QsciScintillaBase_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QsciScintillaBase_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QsciScintillaBase_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QsciScintillaBase_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QsciScintillaBase_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QsciScintillaBase_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QsciScintillaBase_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QsciScintillaBase_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QsciScintillaBase_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QsciScintillaBase_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintillaBase_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.struct_libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintillaBase_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, eventType: []u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QsciScintillaBase_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return qtc.QsciScintillaBase_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QsciScintillaBase_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QsciScintillaBase_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QsciScintillaBase_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QsciScintillaBase_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QsciScintillaBase_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QsciScintillaBase_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.QsciScintillaBase_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QsciScintillaBase_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QsciScintillaBase_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QsciScintillaBase_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciScintillaBase_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciScintillaBase_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintillaBase_SetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn QBaseSetViewportMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintillaBase_QBaseSetViewportMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void ```
    pub fn OnSetViewportMargins(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn ViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QsciScintillaBase_ViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseViewportMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QsciScintillaBase_QBaseViewportMargins(@ptrCast(self));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) QtC.QMargins ```
    pub fn OnViewportMargins(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMargins) void {
        qtc.QsciScintillaBase_OnViewportMargins(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QsciScintillaBase_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDrawFrame(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciScintillaBase_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QsciScintillaBase_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QsciScintillaBase_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciScintillaBase_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QsciScintillaBase_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintillaBase_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintillaBase_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QsciScintillaBase_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QsciScintillaBase_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i64, metricB: i64) f64 {
        return qtc.QsciScintillaBase_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) f64) void {
        qtc.QsciScintillaBase_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QsciScintillaBase, slot: fn (self: QtC.QsciScintillaBase, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QsciScintillaBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QsciScintillaBase_Delete(@ptrCast(self));
    }
};

pub const enums = struct {
    pub const QsciScintillaBase = enum {
        pub const SCI_START: i32 = 2000;
        pub const SCI_OPTIONAL_START: i32 = 3000;
        pub const SCI_LEXER_START: i32 = 4000;
        pub const SCI_ADDTEXT: i32 = 2001;
        pub const SCI_ADDSTYLEDTEXT: i32 = 2002;
        pub const SCI_INSERTTEXT: i32 = 2003;
        pub const SCI_CLEARALL: i32 = 2004;
        pub const SCI_CLEARDOCUMENTSTYLE: i32 = 2005;
        pub const SCI_GETLENGTH: i32 = 2006;
        pub const SCI_GETCHARAT: i32 = 2007;
        pub const SCI_GETCURRENTPOS: i32 = 2008;
        pub const SCI_GETANCHOR: i32 = 2009;
        pub const SCI_GETSTYLEAT: i32 = 2010;
        pub const SCI_REDO: i32 = 2011;
        pub const SCI_SETUNDOCOLLECTION: i32 = 2012;
        pub const SCI_SELECTALL: i32 = 2013;
        pub const SCI_SETSAVEPOINT: i32 = 2014;
        pub const SCI_GETSTYLEDTEXT: i32 = 2015;
        pub const SCI_CANREDO: i32 = 2016;
        pub const SCI_MARKERLINEFROMHANDLE: i32 = 2017;
        pub const SCI_MARKERDELETEHANDLE: i32 = 2018;
        pub const SCI_GETUNDOCOLLECTION: i32 = 2019;
        pub const SCI_GETVIEWWS: i32 = 2020;
        pub const SCI_SETVIEWWS: i32 = 2021;
        pub const SCI_POSITIONFROMPOINT: i32 = 2022;
        pub const SCI_POSITIONFROMPOINTCLOSE: i32 = 2023;
        pub const SCI_GOTOLINE: i32 = 2024;
        pub const SCI_GOTOPOS: i32 = 2025;
        pub const SCI_SETANCHOR: i32 = 2026;
        pub const SCI_GETCURLINE: i32 = 2027;
        pub const SCI_GETENDSTYLED: i32 = 2028;
        pub const SCI_CONVERTEOLS: i32 = 2029;
        pub const SCI_GETEOLMODE: i32 = 2030;
        pub const SCI_SETEOLMODE: i32 = 2031;
        pub const SCI_STARTSTYLING: i32 = 2032;
        pub const SCI_SETSTYLING: i32 = 2033;
        pub const SCI_GETBUFFEREDDRAW: i32 = 2034;
        pub const SCI_SETBUFFEREDDRAW: i32 = 2035;
        pub const SCI_SETTABWIDTH: i32 = 2036;
        pub const SCI_GETTABWIDTH: i32 = 2121;
        pub const SCI_SETCODEPAGE: i32 = 2037;
        pub const SCI_MARKERDEFINE: i32 = 2040;
        pub const SCI_MARKERSETFORE: i32 = 2041;
        pub const SCI_MARKERSETBACK: i32 = 2042;
        pub const SCI_MARKERADD: i32 = 2043;
        pub const SCI_MARKERDELETE: i32 = 2044;
        pub const SCI_MARKERDELETEALL: i32 = 2045;
        pub const SCI_MARKERGET: i32 = 2046;
        pub const SCI_MARKERNEXT: i32 = 2047;
        pub const SCI_MARKERPREVIOUS: i32 = 2048;
        pub const SCI_MARKERDEFINEPIXMAP: i32 = 2049;
        pub const SCI_SETMARGINTYPEN: i32 = 2240;
        pub const SCI_GETMARGINTYPEN: i32 = 2241;
        pub const SCI_SETMARGINWIDTHN: i32 = 2242;
        pub const SCI_GETMARGINWIDTHN: i32 = 2243;
        pub const SCI_SETMARGINMASKN: i32 = 2244;
        pub const SCI_GETMARGINMASKN: i32 = 2245;
        pub const SCI_SETMARGINSENSITIVEN: i32 = 2246;
        pub const SCI_GETMARGINSENSITIVEN: i32 = 2247;
        pub const SCI_SETMARGINCURSORN: i32 = 2248;
        pub const SCI_GETMARGINCURSORN: i32 = 2249;
        pub const SCI_STYLECLEARALL: i32 = 2050;
        pub const SCI_STYLESETFORE: i32 = 2051;
        pub const SCI_STYLESETBACK: i32 = 2052;
        pub const SCI_STYLESETBOLD: i32 = 2053;
        pub const SCI_STYLESETITALIC: i32 = 2054;
        pub const SCI_STYLESETSIZE: i32 = 2055;
        pub const SCI_STYLESETFONT: i32 = 2056;
        pub const SCI_STYLESETEOLFILLED: i32 = 2057;
        pub const SCI_STYLERESETDEFAULT: i32 = 2058;
        pub const SCI_STYLESETUNDERLINE: i32 = 2059;
        pub const SCI_STYLESETCASE: i32 = 2060;
        pub const SCI_STYLESETSIZEFRACTIONAL: i32 = 2061;
        pub const SCI_STYLEGETSIZEFRACTIONAL: i32 = 2062;
        pub const SCI_STYLESETWEIGHT: i32 = 2063;
        pub const SCI_STYLEGETWEIGHT: i32 = 2064;
        pub const SCI_STYLESETCHARACTERSET: i32 = 2066;
        pub const SCI_SETSELFORE: i32 = 2067;
        pub const SCI_SETSELBACK: i32 = 2068;
        pub const SCI_SETCARETFORE: i32 = 2069;
        pub const SCI_ASSIGNCMDKEY: i32 = 2070;
        pub const SCI_CLEARCMDKEY: i32 = 2071;
        pub const SCI_CLEARALLCMDKEYS: i32 = 2072;
        pub const SCI_SETSTYLINGEX: i32 = 2073;
        pub const SCI_STYLESETVISIBLE: i32 = 2074;
        pub const SCI_GETCARETPERIOD: i32 = 2075;
        pub const SCI_SETCARETPERIOD: i32 = 2076;
        pub const SCI_SETWORDCHARS: i32 = 2077;
        pub const SCI_BEGINUNDOACTION: i32 = 2078;
        pub const SCI_ENDUNDOACTION: i32 = 2079;
        pub const SCI_INDICSETSTYLE: i32 = 2080;
        pub const SCI_INDICGETSTYLE: i32 = 2081;
        pub const SCI_INDICSETFORE: i32 = 2082;
        pub const SCI_INDICGETFORE: i32 = 2083;
        pub const SCI_SETWHITESPACEFORE: i32 = 2084;
        pub const SCI_SETWHITESPACEBACK: i32 = 2085;
        pub const SCI_SETWHITESPACESIZE: i32 = 2086;
        pub const SCI_GETWHITESPACESIZE: i32 = 2087;
        pub const SCI_SETSTYLEBITS: i32 = 2090;
        pub const SCI_GETSTYLEBITS: i32 = 2091;
        pub const SCI_SETLINESTATE: i32 = 2092;
        pub const SCI_GETLINESTATE: i32 = 2093;
        pub const SCI_GETMAXLINESTATE: i32 = 2094;
        pub const SCI_GETCARETLINEVISIBLE: i32 = 2095;
        pub const SCI_SETCARETLINEVISIBLE: i32 = 2096;
        pub const SCI_GETCARETLINEBACK: i32 = 2097;
        pub const SCI_SETCARETLINEBACK: i32 = 2098;
        pub const SCI_STYLESETCHANGEABLE: i32 = 2099;
        pub const SCI_AUTOCSHOW: i32 = 2100;
        pub const SCI_AUTOCCANCEL: i32 = 2101;
        pub const SCI_AUTOCACTIVE: i32 = 2102;
        pub const SCI_AUTOCPOSSTART: i32 = 2103;
        pub const SCI_AUTOCCOMPLETE: i32 = 2104;
        pub const SCI_AUTOCSTOPS: i32 = 2105;
        pub const SCI_AUTOCSETSEPARATOR: i32 = 2106;
        pub const SCI_AUTOCGETSEPARATOR: i32 = 2107;
        pub const SCI_AUTOCSELECT: i32 = 2108;
        pub const SCI_AUTOCSETCANCELATSTART: i32 = 2110;
        pub const SCI_AUTOCGETCANCELATSTART: i32 = 2111;
        pub const SCI_AUTOCSETFILLUPS: i32 = 2112;
        pub const SCI_AUTOCSETCHOOSESINGLE: i32 = 2113;
        pub const SCI_AUTOCGETCHOOSESINGLE: i32 = 2114;
        pub const SCI_AUTOCSETIGNORECASE: i32 = 2115;
        pub const SCI_AUTOCGETIGNORECASE: i32 = 2116;
        pub const SCI_USERLISTSHOW: i32 = 2117;
        pub const SCI_AUTOCSETAUTOHIDE: i32 = 2118;
        pub const SCI_AUTOCGETAUTOHIDE: i32 = 2119;
        pub const SCI_AUTOCSETDROPRESTOFWORD: i32 = 2270;
        pub const SCI_AUTOCGETDROPRESTOFWORD: i32 = 2271;
        pub const SCI_SETINDENT: i32 = 2122;
        pub const SCI_GETINDENT: i32 = 2123;
        pub const SCI_SETUSETABS: i32 = 2124;
        pub const SCI_GETUSETABS: i32 = 2125;
        pub const SCI_SETLINEINDENTATION: i32 = 2126;
        pub const SCI_GETLINEINDENTATION: i32 = 2127;
        pub const SCI_GETLINEINDENTPOSITION: i32 = 2128;
        pub const SCI_GETCOLUMN: i32 = 2129;
        pub const SCI_SETHSCROLLBAR: i32 = 2130;
        pub const SCI_GETHSCROLLBAR: i32 = 2131;
        pub const SCI_SETINDENTATIONGUIDES: i32 = 2132;
        pub const SCI_GETINDENTATIONGUIDES: i32 = 2133;
        pub const SCI_SETHIGHLIGHTGUIDE: i32 = 2134;
        pub const SCI_GETHIGHLIGHTGUIDE: i32 = 2135;
        pub const SCI_GETLINEENDPOSITION: i32 = 2136;
        pub const SCI_GETCODEPAGE: i32 = 2137;
        pub const SCI_GETCARETFORE: i32 = 2138;
        pub const SCI_GETREADONLY: i32 = 2140;
        pub const SCI_SETCURRENTPOS: i32 = 2141;
        pub const SCI_SETSELECTIONSTART: i32 = 2142;
        pub const SCI_GETSELECTIONSTART: i32 = 2143;
        pub const SCI_SETSELECTIONEND: i32 = 2144;
        pub const SCI_GETSELECTIONEND: i32 = 2145;
        pub const SCI_SETPRINTMAGNIFICATION: i32 = 2146;
        pub const SCI_GETPRINTMAGNIFICATION: i32 = 2147;
        pub const SCI_SETPRINTCOLOURMODE: i32 = 2148;
        pub const SCI_GETPRINTCOLOURMODE: i32 = 2149;
        pub const SCI_FINDTEXT: i32 = 2150;
        pub const SCI_FORMATRANGE: i32 = 2151;
        pub const SCI_GETFIRSTVISIBLELINE: i32 = 2152;
        pub const SCI_GETLINE: i32 = 2153;
        pub const SCI_GETLINECOUNT: i32 = 2154;
        pub const SCI_SETMARGINLEFT: i32 = 2155;
        pub const SCI_GETMARGINLEFT: i32 = 2156;
        pub const SCI_SETMARGINRIGHT: i32 = 2157;
        pub const SCI_GETMARGINRIGHT: i32 = 2158;
        pub const SCI_GETMODIFY: i32 = 2159;
        pub const SCI_SETSEL: i32 = 2160;
        pub const SCI_GETSELTEXT: i32 = 2161;
        pub const SCI_GETTEXTRANGE: i32 = 2162;
        pub const SCI_HIDESELECTION: i32 = 2163;
        pub const SCI_POINTXFROMPOSITION: i32 = 2164;
        pub const SCI_POINTYFROMPOSITION: i32 = 2165;
        pub const SCI_LINEFROMPOSITION: i32 = 2166;
        pub const SCI_POSITIONFROMLINE: i32 = 2167;
        pub const SCI_LINESCROLL: i32 = 2168;
        pub const SCI_SCROLLCARET: i32 = 2169;
        pub const SCI_REPLACESEL: i32 = 2170;
        pub const SCI_SETREADONLY: i32 = 2171;
        pub const SCI_NULL: i32 = 2172;
        pub const SCI_CANPASTE: i32 = 2173;
        pub const SCI_CANUNDO: i32 = 2174;
        pub const SCI_EMPTYUNDOBUFFER: i32 = 2175;
        pub const SCI_UNDO: i32 = 2176;
        pub const SCI_CUT: i32 = 2177;
        pub const SCI_COPY: i32 = 2178;
        pub const SCI_PASTE: i32 = 2179;
        pub const SCI_CLEAR: i32 = 2180;
        pub const SCI_SETTEXT: i32 = 2181;
        pub const SCI_GETTEXT: i32 = 2182;
        pub const SCI_GETTEXTLENGTH: i32 = 2183;
        pub const SCI_GETDIRECTFUNCTION: i32 = 2184;
        pub const SCI_GETDIRECTPOINTER: i32 = 2185;
        pub const SCI_SETOVERTYPE: i32 = 2186;
        pub const SCI_GETOVERTYPE: i32 = 2187;
        pub const SCI_SETCARETWIDTH: i32 = 2188;
        pub const SCI_GETCARETWIDTH: i32 = 2189;
        pub const SCI_SETTARGETSTART: i32 = 2190;
        pub const SCI_GETTARGETSTART: i32 = 2191;
        pub const SCI_SETTARGETEND: i32 = 2192;
        pub const SCI_GETTARGETEND: i32 = 2193;
        pub const SCI_REPLACETARGET: i32 = 2194;
        pub const SCI_REPLACETARGETRE: i32 = 2195;
        pub const SCI_SEARCHINTARGET: i32 = 2197;
        pub const SCI_SETSEARCHFLAGS: i32 = 2198;
        pub const SCI_GETSEARCHFLAGS: i32 = 2199;
        pub const SCI_CALLTIPSHOW: i32 = 2200;
        pub const SCI_CALLTIPCANCEL: i32 = 2201;
        pub const SCI_CALLTIPACTIVE: i32 = 2202;
        pub const SCI_CALLTIPPOSSTART: i32 = 2203;
        pub const SCI_CALLTIPSETHLT: i32 = 2204;
        pub const SCI_CALLTIPSETBACK: i32 = 2205;
        pub const SCI_CALLTIPSETFORE: i32 = 2206;
        pub const SCI_CALLTIPSETFOREHLT: i32 = 2207;
        pub const SCI_AUTOCSETMAXWIDTH: i32 = 2208;
        pub const SCI_AUTOCGETMAXWIDTH: i32 = 2209;
        pub const SCI_AUTOCSETMAXHEIGHT: i32 = 2210;
        pub const SCI_AUTOCGETMAXHEIGHT: i32 = 2211;
        pub const SCI_CALLTIPUSESTYLE: i32 = 2212;
        pub const SCI_CALLTIPSETPOSITION: i32 = 2213;
        pub const SCI_CALLTIPSETPOSSTART: i32 = 2214;
        pub const SCI_VISIBLEFROMDOCLINE: i32 = 2220;
        pub const SCI_DOCLINEFROMVISIBLE: i32 = 2221;
        pub const SCI_SETFOLDLEVEL: i32 = 2222;
        pub const SCI_GETFOLDLEVEL: i32 = 2223;
        pub const SCI_GETLASTCHILD: i32 = 2224;
        pub const SCI_GETFOLDPARENT: i32 = 2225;
        pub const SCI_SHOWLINES: i32 = 2226;
        pub const SCI_HIDELINES: i32 = 2227;
        pub const SCI_GETLINEVISIBLE: i32 = 2228;
        pub const SCI_SETFOLDEXPANDED: i32 = 2229;
        pub const SCI_GETFOLDEXPANDED: i32 = 2230;
        pub const SCI_TOGGLEFOLD: i32 = 2231;
        pub const SCI_ENSUREVISIBLE: i32 = 2232;
        pub const SCI_SETFOLDFLAGS: i32 = 2233;
        pub const SCI_ENSUREVISIBLEENFORCEPOLICY: i32 = 2234;
        pub const SCI_WRAPCOUNT: i32 = 2235;
        pub const SCI_GETALLLINESVISIBLE: i32 = 2236;
        pub const SCI_FOLDLINE: i32 = 2237;
        pub const SCI_FOLDCHILDREN: i32 = 2238;
        pub const SCI_EXPANDCHILDREN: i32 = 2239;
        pub const SCI_SETMARGINBACKN: i32 = 2250;
        pub const SCI_GETMARGINBACKN: i32 = 2251;
        pub const SCI_SETMARGINS: i32 = 2252;
        pub const SCI_GETMARGINS: i32 = 2253;
        pub const SCI_SETTABINDENTS: i32 = 2260;
        pub const SCI_GETTABINDENTS: i32 = 2261;
        pub const SCI_SETBACKSPACEUNINDENTS: i32 = 2262;
        pub const SCI_GETBACKSPACEUNINDENTS: i32 = 2263;
        pub const SCI_SETMOUSEDWELLTIME: i32 = 2264;
        pub const SCI_GETMOUSEDWELLTIME: i32 = 2265;
        pub const SCI_WORDSTARTPOSITION: i32 = 2266;
        pub const SCI_WORDENDPOSITION: i32 = 2267;
        pub const SCI_SETWRAPMODE: i32 = 2268;
        pub const SCI_GETWRAPMODE: i32 = 2269;
        pub const SCI_SETLAYOUTCACHE: i32 = 2272;
        pub const SCI_GETLAYOUTCACHE: i32 = 2273;
        pub const SCI_SETSCROLLWIDTH: i32 = 2274;
        pub const SCI_GETSCROLLWIDTH: i32 = 2275;
        pub const SCI_TEXTWIDTH: i32 = 2276;
        pub const SCI_SETENDATLASTLINE: i32 = 2277;
        pub const SCI_GETENDATLASTLINE: i32 = 2278;
        pub const SCI_TEXTHEIGHT: i32 = 2279;
        pub const SCI_SETVSCROLLBAR: i32 = 2280;
        pub const SCI_GETVSCROLLBAR: i32 = 2281;
        pub const SCI_APPENDTEXT: i32 = 2282;
        pub const SCI_GETTWOPHASEDRAW: i32 = 2283;
        pub const SCI_SETTWOPHASEDRAW: i32 = 2284;
        pub const SCI_AUTOCGETTYPESEPARATOR: i32 = 2285;
        pub const SCI_AUTOCSETTYPESEPARATOR: i32 = 2286;
        pub const SCI_TARGETFROMSELECTION: i32 = 2287;
        pub const SCI_LINESJOIN: i32 = 2288;
        pub const SCI_LINESSPLIT: i32 = 2289;
        pub const SCI_SETFOLDMARGINCOLOUR: i32 = 2290;
        pub const SCI_SETFOLDMARGINHICOLOUR: i32 = 2291;
        pub const SCI_MARKERSETBACKSELECTED: i32 = 2292;
        pub const SCI_MARKERENABLEHIGHLIGHT: i32 = 2293;
        pub const SCI_LINEDOWN: i32 = 2300;
        pub const SCI_LINEDOWNEXTEND: i32 = 2301;
        pub const SCI_LINEUP: i32 = 2302;
        pub const SCI_LINEUPEXTEND: i32 = 2303;
        pub const SCI_CHARLEFT: i32 = 2304;
        pub const SCI_CHARLEFTEXTEND: i32 = 2305;
        pub const SCI_CHARRIGHT: i32 = 2306;
        pub const SCI_CHARRIGHTEXTEND: i32 = 2307;
        pub const SCI_WORDLEFT: i32 = 2308;
        pub const SCI_WORDLEFTEXTEND: i32 = 2309;
        pub const SCI_WORDRIGHT: i32 = 2310;
        pub const SCI_WORDRIGHTEXTEND: i32 = 2311;
        pub const SCI_HOME: i32 = 2312;
        pub const SCI_HOMEEXTEND: i32 = 2313;
        pub const SCI_LINEEND: i32 = 2314;
        pub const SCI_LINEENDEXTEND: i32 = 2315;
        pub const SCI_DOCUMENTSTART: i32 = 2316;
        pub const SCI_DOCUMENTSTARTEXTEND: i32 = 2317;
        pub const SCI_DOCUMENTEND: i32 = 2318;
        pub const SCI_DOCUMENTENDEXTEND: i32 = 2319;
        pub const SCI_PAGEUP: i32 = 2320;
        pub const SCI_PAGEUPEXTEND: i32 = 2321;
        pub const SCI_PAGEDOWN: i32 = 2322;
        pub const SCI_PAGEDOWNEXTEND: i32 = 2323;
        pub const SCI_EDITTOGGLEOVERTYPE: i32 = 2324;
        pub const SCI_CANCEL: i32 = 2325;
        pub const SCI_DELETEBACK: i32 = 2326;
        pub const SCI_TAB: i32 = 2327;
        pub const SCI_BACKTAB: i32 = 2328;
        pub const SCI_NEWLINE: i32 = 2329;
        pub const SCI_FORMFEED: i32 = 2330;
        pub const SCI_VCHOME: i32 = 2331;
        pub const SCI_VCHOMEEXTEND: i32 = 2332;
        pub const SCI_ZOOMIN: i32 = 2333;
        pub const SCI_ZOOMOUT: i32 = 2334;
        pub const SCI_DELWORDLEFT: i32 = 2335;
        pub const SCI_DELWORDRIGHT: i32 = 2336;
        pub const SCI_LINECUT: i32 = 2337;
        pub const SCI_LINEDELETE: i32 = 2338;
        pub const SCI_LINETRANSPOSE: i32 = 2339;
        pub const SCI_LOWERCASE: i32 = 2340;
        pub const SCI_UPPERCASE: i32 = 2341;
        pub const SCI_LINESCROLLDOWN: i32 = 2342;
        pub const SCI_LINESCROLLUP: i32 = 2343;
        pub const SCI_DELETEBACKNOTLINE: i32 = 2344;
        pub const SCI_HOMEDISPLAY: i32 = 2345;
        pub const SCI_HOMEDISPLAYEXTEND: i32 = 2346;
        pub const SCI_LINEENDDISPLAY: i32 = 2347;
        pub const SCI_LINEENDDISPLAYEXTEND: i32 = 2348;
        pub const SCI_MOVECARETINSIDEVIEW: i32 = 2401;
        pub const SCI_LINELENGTH: i32 = 2350;
        pub const SCI_BRACEHIGHLIGHT: i32 = 2351;
        pub const SCI_BRACEBADLIGHT: i32 = 2352;
        pub const SCI_BRACEMATCH: i32 = 2353;
        pub const SCI_LINEREVERSE: i32 = 2354;
        pub const SCI_GETVIEWEOL: i32 = 2355;
        pub const SCI_SETVIEWEOL: i32 = 2356;
        pub const SCI_GETDOCPOINTER: i32 = 2357;
        pub const SCI_SETDOCPOINTER: i32 = 2358;
        pub const SCI_SETMODEVENTMASK: i32 = 2359;
        pub const SCI_GETEDGECOLUMN: i32 = 2360;
        pub const SCI_SETEDGECOLUMN: i32 = 2361;
        pub const SCI_GETEDGEMODE: i32 = 2362;
        pub const SCI_SETEDGEMODE: i32 = 2363;
        pub const SCI_GETEDGECOLOUR: i32 = 2364;
        pub const SCI_SETEDGECOLOUR: i32 = 2365;
        pub const SCI_SEARCHANCHOR: i32 = 2366;
        pub const SCI_SEARCHNEXT: i32 = 2367;
        pub const SCI_SEARCHPREV: i32 = 2368;
        pub const SCI_LINESONSCREEN: i32 = 2370;
        pub const SCI_USEPOPUP: i32 = 2371;
        pub const SCI_SELECTIONISRECTANGLE: i32 = 2372;
        pub const SCI_SETZOOM: i32 = 2373;
        pub const SCI_GETZOOM: i32 = 2374;
        pub const SCI_CREATEDOCUMENT: i32 = 2375;
        pub const SCI_ADDREFDOCUMENT: i32 = 2376;
        pub const SCI_RELEASEDOCUMENT: i32 = 2377;
        pub const SCI_GETMODEVENTMASK: i32 = 2378;
        pub const SCI_SETFOCUS: i32 = 2380;
        pub const SCI_GETFOCUS: i32 = 2381;
        pub const SCI_SETSTATUS: i32 = 2382;
        pub const SCI_GETSTATUS: i32 = 2383;
        pub const SCI_SETMOUSEDOWNCAPTURES: i32 = 2384;
        pub const SCI_GETMOUSEDOWNCAPTURES: i32 = 2385;
        pub const SCI_SETCURSOR: i32 = 2386;
        pub const SCI_GETCURSOR: i32 = 2387;
        pub const SCI_SETCONTROLCHARSYMBOL: i32 = 2388;
        pub const SCI_GETCONTROLCHARSYMBOL: i32 = 2389;
        pub const SCI_WORDPARTLEFT: i32 = 2390;
        pub const SCI_WORDPARTLEFTEXTEND: i32 = 2391;
        pub const SCI_WORDPARTRIGHT: i32 = 2392;
        pub const SCI_WORDPARTRIGHTEXTEND: i32 = 2393;
        pub const SCI_SETVISIBLEPOLICY: i32 = 2394;
        pub const SCI_DELLINELEFT: i32 = 2395;
        pub const SCI_DELLINERIGHT: i32 = 2396;
        pub const SCI_SETXOFFSET: i32 = 2397;
        pub const SCI_GETXOFFSET: i32 = 2398;
        pub const SCI_CHOOSECARETX: i32 = 2399;
        pub const SCI_GRABFOCUS: i32 = 2400;
        pub const SCI_SETXCARETPOLICY: i32 = 2402;
        pub const SCI_SETYCARETPOLICY: i32 = 2403;
        pub const SCI_LINEDUPLICATE: i32 = 2404;
        pub const SCI_REGISTERIMAGE: i32 = 2405;
        pub const SCI_SETPRINTWRAPMODE: i32 = 2406;
        pub const SCI_GETPRINTWRAPMODE: i32 = 2407;
        pub const SCI_CLEARREGISTEREDIMAGES: i32 = 2408;
        pub const SCI_STYLESETHOTSPOT: i32 = 2409;
        pub const SCI_SETHOTSPOTACTIVEFORE: i32 = 2410;
        pub const SCI_SETHOTSPOTACTIVEBACK: i32 = 2411;
        pub const SCI_SETHOTSPOTACTIVEUNDERLINE: i32 = 2412;
        pub const SCI_PARADOWN: i32 = 2413;
        pub const SCI_PARADOWNEXTEND: i32 = 2414;
        pub const SCI_PARAUP: i32 = 2415;
        pub const SCI_PARAUPEXTEND: i32 = 2416;
        pub const SCI_POSITIONBEFORE: i32 = 2417;
        pub const SCI_POSITIONAFTER: i32 = 2418;
        pub const SCI_COPYRANGE: i32 = 2419;
        pub const SCI_COPYTEXT: i32 = 2420;
        pub const SCI_SETHOTSPOTSINGLELINE: i32 = 2421;
        pub const SCI_SETSELECTIONMODE: i32 = 2422;
        pub const SCI_GETSELECTIONMODE: i32 = 2423;
        pub const SCI_GETLINESELSTARTPOSITION: i32 = 2424;
        pub const SCI_GETLINESELENDPOSITION: i32 = 2425;
        pub const SCI_LINEDOWNRECTEXTEND: i32 = 2426;
        pub const SCI_LINEUPRECTEXTEND: i32 = 2427;
        pub const SCI_CHARLEFTRECTEXTEND: i32 = 2428;
        pub const SCI_CHARRIGHTRECTEXTEND: i32 = 2429;
        pub const SCI_HOMERECTEXTEND: i32 = 2430;
        pub const SCI_VCHOMERECTEXTEND: i32 = 2431;
        pub const SCI_LINEENDRECTEXTEND: i32 = 2432;
        pub const SCI_PAGEUPRECTEXTEND: i32 = 2433;
        pub const SCI_PAGEDOWNRECTEXTEND: i32 = 2434;
        pub const SCI_STUTTEREDPAGEUP: i32 = 2435;
        pub const SCI_STUTTEREDPAGEUPEXTEND: i32 = 2436;
        pub const SCI_STUTTEREDPAGEDOWN: i32 = 2437;
        pub const SCI_STUTTEREDPAGEDOWNEXTEND: i32 = 2438;
        pub const SCI_WORDLEFTEND: i32 = 2439;
        pub const SCI_WORDLEFTENDEXTEND: i32 = 2440;
        pub const SCI_WORDRIGHTEND: i32 = 2441;
        pub const SCI_WORDRIGHTENDEXTEND: i32 = 2442;
        pub const SCI_SETWHITESPACECHARS: i32 = 2443;
        pub const SCI_SETCHARSDEFAULT: i32 = 2444;
        pub const SCI_AUTOCGETCURRENT: i32 = 2445;
        pub const SCI_ALLOCATE: i32 = 2446;
        pub const SCI_HOMEWRAP: i32 = 2349;
        pub const SCI_HOMEWRAPEXTEND: i32 = 2450;
        pub const SCI_LINEENDWRAP: i32 = 2451;
        pub const SCI_LINEENDWRAPEXTEND: i32 = 2452;
        pub const SCI_VCHOMEWRAP: i32 = 2453;
        pub const SCI_VCHOMEWRAPEXTEND: i32 = 2454;
        pub const SCI_LINECOPY: i32 = 2455;
        pub const SCI_FINDCOLUMN: i32 = 2456;
        pub const SCI_GETCARETSTICKY: i32 = 2457;
        pub const SCI_SETCARETSTICKY: i32 = 2458;
        pub const SCI_TOGGLECARETSTICKY: i32 = 2459;
        pub const SCI_SETWRAPVISUALFLAGS: i32 = 2460;
        pub const SCI_GETWRAPVISUALFLAGS: i32 = 2461;
        pub const SCI_SETWRAPVISUALFLAGSLOCATION: i32 = 2462;
        pub const SCI_GETWRAPVISUALFLAGSLOCATION: i32 = 2463;
        pub const SCI_SETWRAPSTARTINDENT: i32 = 2464;
        pub const SCI_GETWRAPSTARTINDENT: i32 = 2465;
        pub const SCI_MARKERADDSET: i32 = 2466;
        pub const SCI_SETPASTECONVERTENDINGS: i32 = 2467;
        pub const SCI_GETPASTECONVERTENDINGS: i32 = 2468;
        pub const SCI_SELECTIONDUPLICATE: i32 = 2469;
        pub const SCI_SETCARETLINEBACKALPHA: i32 = 2470;
        pub const SCI_GETCARETLINEBACKALPHA: i32 = 2471;
        pub const SCI_SETWRAPINDENTMODE: i32 = 2472;
        pub const SCI_GETWRAPINDENTMODE: i32 = 2473;
        pub const SCI_MARKERSETALPHA: i32 = 2476;
        pub const SCI_GETSELALPHA: i32 = 2477;
        pub const SCI_SETSELALPHA: i32 = 2478;
        pub const SCI_GETSELEOLFILLED: i32 = 2479;
        pub const SCI_SETSELEOLFILLED: i32 = 2480;
        pub const SCI_STYLEGETFORE: i32 = 2481;
        pub const SCI_STYLEGETBACK: i32 = 2482;
        pub const SCI_STYLEGETBOLD: i32 = 2483;
        pub const SCI_STYLEGETITALIC: i32 = 2484;
        pub const SCI_STYLEGETSIZE: i32 = 2485;
        pub const SCI_STYLEGETFONT: i32 = 2486;
        pub const SCI_STYLEGETEOLFILLED: i32 = 2487;
        pub const SCI_STYLEGETUNDERLINE: i32 = 2488;
        pub const SCI_STYLEGETCASE: i32 = 2489;
        pub const SCI_STYLEGETCHARACTERSET: i32 = 2490;
        pub const SCI_STYLEGETVISIBLE: i32 = 2491;
        pub const SCI_STYLEGETCHANGEABLE: i32 = 2492;
        pub const SCI_STYLEGETHOTSPOT: i32 = 2493;
        pub const SCI_GETHOTSPOTACTIVEFORE: i32 = 2494;
        pub const SCI_GETHOTSPOTACTIVEBACK: i32 = 2495;
        pub const SCI_GETHOTSPOTACTIVEUNDERLINE: i32 = 2496;
        pub const SCI_GETHOTSPOTSINGLELINE: i32 = 2497;
        pub const SCI_BRACEHIGHLIGHTINDICATOR: i32 = 2498;
        pub const SCI_BRACEBADLIGHTINDICATOR: i32 = 2499;
        pub const SCI_SETINDICATORCURRENT: i32 = 2500;
        pub const SCI_GETINDICATORCURRENT: i32 = 2501;
        pub const SCI_SETINDICATORVALUE: i32 = 2502;
        pub const SCI_GETINDICATORVALUE: i32 = 2503;
        pub const SCI_INDICATORFILLRANGE: i32 = 2504;
        pub const SCI_INDICATORCLEARRANGE: i32 = 2505;
        pub const SCI_INDICATORALLONFOR: i32 = 2506;
        pub const SCI_INDICATORVALUEAT: i32 = 2507;
        pub const SCI_INDICATORSTART: i32 = 2508;
        pub const SCI_INDICATOREND: i32 = 2509;
        pub const SCI_INDICSETUNDER: i32 = 2510;
        pub const SCI_INDICGETUNDER: i32 = 2511;
        pub const SCI_SETCARETSTYLE: i32 = 2512;
        pub const SCI_GETCARETSTYLE: i32 = 2513;
        pub const SCI_SETPOSITIONCACHE: i32 = 2514;
        pub const SCI_GETPOSITIONCACHE: i32 = 2515;
        pub const SCI_SETSCROLLWIDTHTRACKING: i32 = 2516;
        pub const SCI_GETSCROLLWIDTHTRACKING: i32 = 2517;
        pub const SCI_DELWORDRIGHTEND: i32 = 2518;
        pub const SCI_COPYALLOWLINE: i32 = 2519;
        pub const SCI_GETCHARACTERPOINTER: i32 = 2520;
        pub const SCI_INDICSETALPHA: i32 = 2523;
        pub const SCI_INDICGETALPHA: i32 = 2524;
        pub const SCI_SETEXTRAASCENT: i32 = 2525;
        pub const SCI_GETEXTRAASCENT: i32 = 2526;
        pub const SCI_SETEXTRADESCENT: i32 = 2527;
        pub const SCI_GETEXTRADESCENT: i32 = 2528;
        pub const SCI_MARKERSYMBOLDEFINED: i32 = 2529;
        pub const SCI_MARGINSETTEXT: i32 = 2530;
        pub const SCI_MARGINGETTEXT: i32 = 2531;
        pub const SCI_MARGINSETSTYLE: i32 = 2532;
        pub const SCI_MARGINGETSTYLE: i32 = 2533;
        pub const SCI_MARGINSETSTYLES: i32 = 2534;
        pub const SCI_MARGINGETSTYLES: i32 = 2535;
        pub const SCI_MARGINTEXTCLEARALL: i32 = 2536;
        pub const SCI_MARGINSETSTYLEOFFSET: i32 = 2537;
        pub const SCI_MARGINGETSTYLEOFFSET: i32 = 2538;
        pub const SCI_SETMARGINOPTIONS: i32 = 2539;
        pub const SCI_ANNOTATIONSETTEXT: i32 = 2540;
        pub const SCI_ANNOTATIONGETTEXT: i32 = 2541;
        pub const SCI_ANNOTATIONSETSTYLE: i32 = 2542;
        pub const SCI_ANNOTATIONGETSTYLE: i32 = 2543;
        pub const SCI_ANNOTATIONSETSTYLES: i32 = 2544;
        pub const SCI_ANNOTATIONGETSTYLES: i32 = 2545;
        pub const SCI_ANNOTATIONGETLINES: i32 = 2546;
        pub const SCI_ANNOTATIONCLEARALL: i32 = 2547;
        pub const SCI_ANNOTATIONSETVISIBLE: i32 = 2548;
        pub const SCI_ANNOTATIONGETVISIBLE: i32 = 2549;
        pub const SCI_ANNOTATIONSETSTYLEOFFSET: i32 = 2550;
        pub const SCI_ANNOTATIONGETSTYLEOFFSET: i32 = 2551;
        pub const SCI_RELEASEALLEXTENDEDSTYLES: i32 = 2552;
        pub const SCI_ALLOCATEEXTENDEDSTYLES: i32 = 2553;
        pub const SCI_SETEMPTYSELECTION: i32 = 2556;
        pub const SCI_GETMARGINOPTIONS: i32 = 2557;
        pub const SCI_INDICSETOUTLINEALPHA: i32 = 2558;
        pub const SCI_INDICGETOUTLINEALPHA: i32 = 2559;
        pub const SCI_ADDUNDOACTION: i32 = 2560;
        pub const SCI_CHARPOSITIONFROMPOINT: i32 = 2561;
        pub const SCI_CHARPOSITIONFROMPOINTCLOSE: i32 = 2562;
        pub const SCI_SETMULTIPLESELECTION: i32 = 2563;
        pub const SCI_GETMULTIPLESELECTION: i32 = 2564;
        pub const SCI_SETADDITIONALSELECTIONTYPING: i32 = 2565;
        pub const SCI_GETADDITIONALSELECTIONTYPING: i32 = 2566;
        pub const SCI_SETADDITIONALCARETSBLINK: i32 = 2567;
        pub const SCI_GETADDITIONALCARETSBLINK: i32 = 2568;
        pub const SCI_SCROLLRANGE: i32 = 2569;
        pub const SCI_GETSELECTIONS: i32 = 2570;
        pub const SCI_CLEARSELECTIONS: i32 = 2571;
        pub const SCI_SETSELECTION: i32 = 2572;
        pub const SCI_ADDSELECTION: i32 = 2573;
        pub const SCI_SETMAINSELECTION: i32 = 2574;
        pub const SCI_GETMAINSELECTION: i32 = 2575;
        pub const SCI_SETSELECTIONNCARET: i32 = 2576;
        pub const SCI_GETSELECTIONNCARET: i32 = 2577;
        pub const SCI_SETSELECTIONNANCHOR: i32 = 2578;
        pub const SCI_GETSELECTIONNANCHOR: i32 = 2579;
        pub const SCI_SETSELECTIONNCARETVIRTUALSPACE: i32 = 2580;
        pub const SCI_GETSELECTIONNCARETVIRTUALSPACE: i32 = 2581;
        pub const SCI_SETSELECTIONNANCHORVIRTUALSPACE: i32 = 2582;
        pub const SCI_GETSELECTIONNANCHORVIRTUALSPACE: i32 = 2583;
        pub const SCI_SETSELECTIONNSTART: i32 = 2584;
        pub const SCI_GETSELECTIONNSTART: i32 = 2585;
        pub const SCI_SETSELECTIONNEND: i32 = 2586;
        pub const SCI_GETSELECTIONNEND: i32 = 2587;
        pub const SCI_SETRECTANGULARSELECTIONCARET: i32 = 2588;
        pub const SCI_GETRECTANGULARSELECTIONCARET: i32 = 2589;
        pub const SCI_SETRECTANGULARSELECTIONANCHOR: i32 = 2590;
        pub const SCI_GETRECTANGULARSELECTIONANCHOR: i32 = 2591;
        pub const SCI_SETRECTANGULARSELECTIONCARETVIRTUALSPACE: i32 = 2592;
        pub const SCI_GETRECTANGULARSELECTIONCARETVIRTUALSPACE: i32 = 2593;
        pub const SCI_SETRECTANGULARSELECTIONANCHORVIRTUALSPACE: i32 = 2594;
        pub const SCI_GETRECTANGULARSELECTIONANCHORVIRTUALSPACE: i32 = 2595;
        pub const SCI_SETVIRTUALSPACEOPTIONS: i32 = 2596;
        pub const SCI_GETVIRTUALSPACEOPTIONS: i32 = 2597;
        pub const SCI_SETRECTANGULARSELECTIONMODIFIER: i32 = 2598;
        pub const SCI_GETRECTANGULARSELECTIONMODIFIER: i32 = 2599;
        pub const SCI_SETADDITIONALSELFORE: i32 = 2600;
        pub const SCI_SETADDITIONALSELBACK: i32 = 2601;
        pub const SCI_SETADDITIONALSELALPHA: i32 = 2602;
        pub const SCI_GETADDITIONALSELALPHA: i32 = 2603;
        pub const SCI_SETADDITIONALCARETFORE: i32 = 2604;
        pub const SCI_GETADDITIONALCARETFORE: i32 = 2605;
        pub const SCI_ROTATESELECTION: i32 = 2606;
        pub const SCI_SWAPMAINANCHORCARET: i32 = 2607;
        pub const SCI_SETADDITIONALCARETSVISIBLE: i32 = 2608;
        pub const SCI_GETADDITIONALCARETSVISIBLE: i32 = 2609;
        pub const SCI_AUTOCGETCURRENTTEXT: i32 = 2610;
        pub const SCI_SETFONTQUALITY: i32 = 2611;
        pub const SCI_GETFONTQUALITY: i32 = 2612;
        pub const SCI_SETFIRSTVISIBLELINE: i32 = 2613;
        pub const SCI_SETMULTIPASTE: i32 = 2614;
        pub const SCI_GETMULTIPASTE: i32 = 2615;
        pub const SCI_GETTAG: i32 = 2616;
        pub const SCI_CHANGELEXERSTATE: i32 = 2617;
        pub const SCI_CONTRACTEDFOLDNEXT: i32 = 2618;
        pub const SCI_VERTICALCENTRECARET: i32 = 2619;
        pub const SCI_MOVESELECTEDLINESUP: i32 = 2620;
        pub const SCI_MOVESELECTEDLINESDOWN: i32 = 2621;
        pub const SCI_SETIDENTIFIER: i32 = 2622;
        pub const SCI_GETIDENTIFIER: i32 = 2623;
        pub const SCI_RGBAIMAGESETWIDTH: i32 = 2624;
        pub const SCI_RGBAIMAGESETHEIGHT: i32 = 2625;
        pub const SCI_MARKERDEFINERGBAIMAGE: i32 = 2626;
        pub const SCI_REGISTERRGBAIMAGE: i32 = 2627;
        pub const SCI_SCROLLTOSTART: i32 = 2628;
        pub const SCI_SCROLLTOEND: i32 = 2629;
        pub const SCI_SETTECHNOLOGY: i32 = 2630;
        pub const SCI_GETTECHNOLOGY: i32 = 2631;
        pub const SCI_CREATELOADER: i32 = 2632;
        pub const SCI_COUNTCHARACTERS: i32 = 2633;
        pub const SCI_AUTOCSETCASEINSENSITIVEBEHAVIOUR: i32 = 2634;
        pub const SCI_AUTOCGETCASEINSENSITIVEBEHAVIOUR: i32 = 2635;
        pub const SCI_AUTOCSETMULTI: i32 = 2636;
        pub const SCI_AUTOCGETMULTI: i32 = 2637;
        pub const SCI_FINDINDICATORSHOW: i32 = 2640;
        pub const SCI_FINDINDICATORFLASH: i32 = 2641;
        pub const SCI_FINDINDICATORHIDE: i32 = 2642;
        pub const SCI_GETRANGEPOINTER: i32 = 2643;
        pub const SCI_GETGAPPOSITION: i32 = 2644;
        pub const SCI_DELETERANGE: i32 = 2645;
        pub const SCI_GETWORDCHARS: i32 = 2646;
        pub const SCI_GETWHITESPACECHARS: i32 = 2647;
        pub const SCI_SETPUNCTUATIONCHARS: i32 = 2648;
        pub const SCI_GETPUNCTUATIONCHARS: i32 = 2649;
        pub const SCI_GETSELECTIONEMPTY: i32 = 2650;
        pub const SCI_RGBAIMAGESETSCALE: i32 = 2651;
        pub const SCI_VCHOMEDISPLAY: i32 = 2652;
        pub const SCI_VCHOMEDISPLAYEXTEND: i32 = 2653;
        pub const SCI_GETCARETLINEVISIBLEALWAYS: i32 = 2654;
        pub const SCI_SETCARETLINEVISIBLEALWAYS: i32 = 2655;
        pub const SCI_SETLINEENDTYPESALLOWED: i32 = 2656;
        pub const SCI_GETLINEENDTYPESALLOWED: i32 = 2657;
        pub const SCI_GETLINEENDTYPESACTIVE: i32 = 2658;
        pub const SCI_AUTOCSETORDER: i32 = 2660;
        pub const SCI_AUTOCGETORDER: i32 = 2661;
        pub const SCI_FOLDALL: i32 = 2662;
        pub const SCI_SETAUTOMATICFOLD: i32 = 2663;
        pub const SCI_GETAUTOMATICFOLD: i32 = 2664;
        pub const SCI_SETREPRESENTATION: i32 = 2665;
        pub const SCI_GETREPRESENTATION: i32 = 2666;
        pub const SCI_CLEARREPRESENTATION: i32 = 2667;
        pub const SCI_SETMOUSESELECTIONRECTANGULARSWITCH: i32 = 2668;
        pub const SCI_GETMOUSESELECTIONRECTANGULARSWITCH: i32 = 2669;
        pub const SCI_POSITIONRELATIVE: i32 = 2670;
        pub const SCI_DROPSELECTIONN: i32 = 2671;
        pub const SCI_CHANGEINSERTION: i32 = 2672;
        pub const SCI_GETPHASESDRAW: i32 = 2673;
        pub const SCI_SETPHASESDRAW: i32 = 2674;
        pub const SCI_CLEARTABSTOPS: i32 = 2675;
        pub const SCI_ADDTABSTOP: i32 = 2676;
        pub const SCI_GETNEXTTABSTOP: i32 = 2677;
        pub const SCI_GETIMEINTERACTION: i32 = 2678;
        pub const SCI_SETIMEINTERACTION: i32 = 2679;
        pub const SCI_INDICSETHOVERSTYLE: i32 = 2680;
        pub const SCI_INDICGETHOVERSTYLE: i32 = 2681;
        pub const SCI_INDICSETHOVERFORE: i32 = 2682;
        pub const SCI_INDICGETHOVERFORE: i32 = 2683;
        pub const SCI_INDICSETFLAGS: i32 = 2684;
        pub const SCI_INDICGETFLAGS: i32 = 2685;
        pub const SCI_SETTARGETRANGE: i32 = 2686;
        pub const SCI_GETTARGETTEXT: i32 = 2687;
        pub const SCI_MULTIPLESELECTADDNEXT: i32 = 2688;
        pub const SCI_MULTIPLESELECTADDEACH: i32 = 2689;
        pub const SCI_TARGETWHOLEDOCUMENT: i32 = 2690;
        pub const SCI_ISRANGEWORD: i32 = 2691;
        pub const SCI_SETIDLESTYLING: i32 = 2692;
        pub const SCI_GETIDLESTYLING: i32 = 2693;
        pub const SCI_MULTIEDGEADDLINE: i32 = 2694;
        pub const SCI_MULTIEDGECLEARALL: i32 = 2695;
        pub const SCI_SETMOUSEWHEELCAPTURES: i32 = 2696;
        pub const SCI_GETMOUSEWHEELCAPTURES: i32 = 2697;
        pub const SCI_GETTABDRAWMODE: i32 = 2698;
        pub const SCI_SETTABDRAWMODE: i32 = 2699;
        pub const SCI_TOGGLEFOLDSHOWTEXT: i32 = 2700;
        pub const SCI_FOLDDISPLAYTEXTSETSTYLE: i32 = 2701;
        pub const SCI_SETACCESSIBILITY: i32 = 2702;
        pub const SCI_GETACCESSIBILITY: i32 = 2703;
        pub const SCI_GETCARETLINEFRAME: i32 = 2704;
        pub const SCI_SETCARETLINEFRAME: i32 = 2705;
        pub const SCI_STARTRECORD: i32 = 3001;
        pub const SCI_STOPRECORD: i32 = 3002;
        pub const SCI_SETLEXER: i32 = 4001;
        pub const SCI_GETLEXER: i32 = 4002;
        pub const SCI_COLOURISE: i32 = 4003;
        pub const SCI_SETPROPERTY: i32 = 4004;
        pub const SCI_SETKEYWORDS: i32 = 4005;
        pub const SCI_SETLEXERLANGUAGE: i32 = 4006;
        pub const SCI_LOADLEXERLIBRARY: i32 = 4007;
        pub const SCI_GETPROPERTY: i32 = 4008;
        pub const SCI_GETPROPERTYEXPANDED: i32 = 4009;
        pub const SCI_GETPROPERTYINT: i32 = 4010;
        pub const SCI_GETSTYLEBITSNEEDED: i32 = 4011;
        pub const SCI_GETLEXERLANGUAGE: i32 = 4012;
        pub const SCI_PRIVATELEXERCALL: i32 = 4013;
        pub const SCI_PROPERTYNAMES: i32 = 4014;
        pub const SCI_PROPERTYTYPE: i32 = 4015;
        pub const SCI_DESCRIBEPROPERTY: i32 = 4016;
        pub const SCI_DESCRIBEKEYWORDSETS: i32 = 4017;
        pub const SCI_GETLINEENDTYPESSUPPORTED: i32 = 4018;
        pub const SCI_ALLOCATESUBSTYLES: i32 = 4020;
        pub const SCI_GETSUBSTYLESSTART: i32 = 4021;
        pub const SCI_GETSUBSTYLESLENGTH: i32 = 4022;
        pub const SCI_GETSTYLEFROMSUBSTYLE: i32 = 4027;
        pub const SCI_GETPRIMARYSTYLEFROMSTYLE: i32 = 4028;
        pub const SCI_FREESUBSTYLES: i32 = 4023;
        pub const SCI_SETIDENTIFIERS: i32 = 4024;
        pub const SCI_DISTANCETOSECONDARYSTYLES: i32 = 4025;
        pub const SCI_GETSUBSTYLEBASES: i32 = 4026;
        pub const SCI_GETLINECHARACTERINDEX: i32 = 2710;
        pub const SCI_ALLOCATELINECHARACTERINDEX: i32 = 2711;
        pub const SCI_RELEASELINECHARACTERINDEX: i32 = 2712;
        pub const SCI_LINEFROMINDEXPOSITION: i32 = 2713;
        pub const SCI_INDEXPOSITIONFROMLINE: i32 = 2714;
        pub const SCI_COUNTCODEUNITS: i32 = 2715;
        pub const SCI_POSITIONRELATIVECODEUNITS: i32 = 2716;
        pub const SCI_GETNAMEDSTYLES: i32 = 4029;
        pub const SCI_NAMEOFSTYLE: i32 = 4030;
        pub const SCI_TAGSOFSTYLE: i32 = 4031;
        pub const SCI_DESCRIPTIONOFSTYLE: i32 = 4032;
        pub const SCI_GETMOVEEXTENDSSELECTION: i32 = 2706;
        pub const SCI_SETCOMMANDEVENTS: i32 = 2717;
        pub const SCI_GETCOMMANDEVENTS: i32 = 2718;
        pub const SCI_GETDOCUMENTOPTIONS: i32 = 2379;
        pub const SC_AC_FILLUP: i32 = 1;
        pub const SC_AC_DOUBLECLICK: i32 = 2;
        pub const SC_AC_TAB: i32 = 3;
        pub const SC_AC_NEWLINE: i32 = 4;
        pub const SC_AC_COMMAND: i32 = 5;
        pub const SC_ALPHA_TRANSPARENT: i32 = 0;
        pub const SC_ALPHA_OPAQUE: i32 = 255;
        pub const SC_ALPHA_NOALPHA: i32 = 256;
        pub const SC_CARETSTICKY_OFF: i32 = 0;
        pub const SC_CARETSTICKY_ON: i32 = 1;
        pub const SC_CARETSTICKY_WHITESPACE: i32 = 2;
        pub const SC_DOCUMENTOPTION_DEFAULT: i32 = 0;
        pub const SC_DOCUMENTOPTION_STYLES_NONE: i32 = 1;
        pub const SC_DOCUMENTOPTION_TEXT_LARGE: i32 = 256;
        pub const SC_EFF_QUALITY_MASK: i32 = 15;
        pub const SC_EFF_QUALITY_DEFAULT: i32 = 0;
        pub const SC_EFF_QUALITY_NON_ANTIALIASED: i32 = 1;
        pub const SC_EFF_QUALITY_ANTIALIASED: i32 = 2;
        pub const SC_EFF_QUALITY_LCD_OPTIMIZED: i32 = 3;
        pub const SC_IDLESTYLING_NONE: i32 = 0;
        pub const SC_IDLESTYLING_TOVISIBLE: i32 = 1;
        pub const SC_IDLESTYLING_AFTERVISIBLE: i32 = 2;
        pub const SC_IDLESTYLING_ALL: i32 = 3;
        pub const SC_IME_WINDOWED: i32 = 0;
        pub const SC_IME_INLINE: i32 = 1;
        pub const SC_LINECHARACTERINDEX_NONE: i32 = 0;
        pub const SC_LINECHARACTERINDEX_UTF32: i32 = 1;
        pub const SC_LINECHARACTERINDEX_UTF16: i32 = 2;
        pub const SC_MARGINOPTION_NONE: i32 = 0;
        pub const SC_MARGINOPTION_SUBLINESELECT: i32 = 1;
        pub const SC_MULTIAUTOC_ONCE: i32 = 0;
        pub const SC_MULTIAUTOC_EACH: i32 = 1;
        pub const SC_MULTIPASTE_ONCE: i32 = 0;
        pub const SC_MULTIPASTE_EACH: i32 = 1;
        pub const SC_POPUP_NEVER: i32 = 0;
        pub const SC_POPUP_ALL: i32 = 1;
        pub const SC_POPUP_TEXT: i32 = 2;
        pub const SC_SEL_STREAM: i32 = 0;
        pub const SC_SEL_RECTANGLE: i32 = 1;
        pub const SC_SEL_LINES: i32 = 2;
        pub const SC_SEL_THIN: i32 = 3;
        pub const SC_STATUS_OK: i32 = 0;
        pub const SC_STATUS_FAILURE: i32 = 1;
        pub const SC_STATUS_BADALLOC: i32 = 2;
        pub const SC_STATUS_WARN_START: i32 = 1000;
        pub const SC_STATUS_WARNREGEX: i32 = 1001;
        pub const SC_TYPE_BOOLEAN: i32 = 0;
        pub const SC_TYPE_INTEGER: i32 = 1;
        pub const SC_TYPE_STRING: i32 = 2;
        pub const SC_UPDATE_CONTENT: i32 = 1;
        pub const SC_UPDATE_SELECTION: i32 = 2;
        pub const SC_UPDATE_V_SCROLL: i32 = 4;
        pub const SC_UPDATE_H_SCROLL: i32 = 8;
        pub const SC_WRAPVISUALFLAG_NONE: i32 = 0;
        pub const SC_WRAPVISUALFLAG_END: i32 = 1;
        pub const SC_WRAPVISUALFLAG_START: i32 = 2;
        pub const SC_WRAPVISUALFLAG_MARGIN: i32 = 4;
        pub const SC_WRAPVISUALFLAGLOC_DEFAULT: i32 = 0;
        pub const SC_WRAPVISUALFLAGLOC_END_BY_TEXT: i32 = 1;
        pub const SC_WRAPVISUALFLAGLOC_START_BY_TEXT: i32 = 2;
        pub const SCTD_LONGARROW: i32 = 0;
        pub const SCTD_STRIKEOUT: i32 = 1;
        pub const SCVS_NONE: i32 = 0;
        pub const SCVS_RECTANGULARSELECTION: i32 = 1;
        pub const SCVS_USERACCESSIBLE: i32 = 2;
        pub const SCVS_NOWRAPLINESTART: i32 = 4;
        pub const SCWS_INVISIBLE: i32 = 0;
        pub const SCWS_VISIBLEALWAYS: i32 = 1;
        pub const SCWS_VISIBLEAFTERINDENT: i32 = 2;
        pub const SCWS_VISIBLEONLYININDENT: i32 = 3;
        pub const SC_EOL_CRLF: i32 = 0;
        pub const SC_EOL_CR: i32 = 1;
        pub const SC_EOL_LF: i32 = 2;
        pub const SC_CP_DBCS: i32 = 1;
        pub const SC_CP_UTF8: i32 = 65001;
        pub const SC_MARK_CIRCLE: i32 = 0;
        pub const SC_MARK_ROUNDRECT: i32 = 1;
        pub const SC_MARK_ARROW: i32 = 2;
        pub const SC_MARK_SMALLRECT: i32 = 3;
        pub const SC_MARK_SHORTARROW: i32 = 4;
        pub const SC_MARK_EMPTY: i32 = 5;
        pub const SC_MARK_ARROWDOWN: i32 = 6;
        pub const SC_MARK_MINUS: i32 = 7;
        pub const SC_MARK_PLUS: i32 = 8;
        pub const SC_MARK_VLINE: i32 = 9;
        pub const SC_MARK_LCORNER: i32 = 10;
        pub const SC_MARK_TCORNER: i32 = 11;
        pub const SC_MARK_BOXPLUS: i32 = 12;
        pub const SC_MARK_BOXPLUSCONNECTED: i32 = 13;
        pub const SC_MARK_BOXMINUS: i32 = 14;
        pub const SC_MARK_BOXMINUSCONNECTED: i32 = 15;
        pub const SC_MARK_LCORNERCURVE: i32 = 16;
        pub const SC_MARK_TCORNERCURVE: i32 = 17;
        pub const SC_MARK_CIRCLEPLUS: i32 = 18;
        pub const SC_MARK_CIRCLEPLUSCONNECTED: i32 = 19;
        pub const SC_MARK_CIRCLEMINUS: i32 = 20;
        pub const SC_MARK_CIRCLEMINUSCONNECTED: i32 = 21;
        pub const SC_MARK_BACKGROUND: i32 = 22;
        pub const SC_MARK_DOTDOTDOT: i32 = 23;
        pub const SC_MARK_ARROWS: i32 = 24;
        pub const SC_MARK_PIXMAP: i32 = 25;
        pub const SC_MARK_FULLRECT: i32 = 26;
        pub const SC_MARK_LEFTRECT: i32 = 27;
        pub const SC_MARK_AVAILABLE: i32 = 28;
        pub const SC_MARK_UNDERLINE: i32 = 29;
        pub const SC_MARK_RGBAIMAGE: i32 = 30;
        pub const SC_MARK_BOOKMARK: i32 = 31;
        pub const SC_MARK_CHARACTER: i32 = 10000;
        pub const SC_MARKNUM_FOLDEREND: i32 = 25;
        pub const SC_MARKNUM_FOLDEROPENMID: i32 = 26;
        pub const SC_MARKNUM_FOLDERMIDTAIL: i32 = 27;
        pub const SC_MARKNUM_FOLDERTAIL: i32 = 28;
        pub const SC_MARKNUM_FOLDERSUB: i32 = 29;
        pub const SC_MARKNUM_FOLDER: i32 = 30;
        pub const SC_MARKNUM_FOLDEROPEN: i32 = 31;
        pub const SC_MASK_FOLDERS: i64 = 4261412864;
        pub const SC_MARGIN_SYMBOL: i32 = 0;
        pub const SC_MARGIN_NUMBER: i32 = 1;
        pub const SC_MARGIN_BACK: i32 = 2;
        pub const SC_MARGIN_FORE: i32 = 3;
        pub const SC_MARGIN_TEXT: i32 = 4;
        pub const SC_MARGIN_RTEXT: i32 = 5;
        pub const SC_MARGIN_COLOUR: i32 = 6;
        pub const STYLE_DEFAULT: i32 = 32;
        pub const STYLE_LINENUMBER: i32 = 33;
        pub const STYLE_BRACELIGHT: i32 = 34;
        pub const STYLE_BRACEBAD: i32 = 35;
        pub const STYLE_CONTROLCHAR: i32 = 36;
        pub const STYLE_INDENTGUIDE: i32 = 37;
        pub const STYLE_CALLTIP: i32 = 38;
        pub const STYLE_FOLDDISPLAYTEXT: i32 = 39;
        pub const STYLE_LASTPREDEFINED: i32 = 39;
        pub const STYLE_MAX: i32 = 255;
        pub const SC_CHARSET_ANSI: i32 = 0;
        pub const SC_CHARSET_DEFAULT: i32 = 1;
        pub const SC_CHARSET_BALTIC: i32 = 186;
        pub const SC_CHARSET_CHINESEBIG5: i32 = 136;
        pub const SC_CHARSET_EASTEUROPE: i32 = 238;
        pub const SC_CHARSET_GB2312: i32 = 134;
        pub const SC_CHARSET_GREEK: i32 = 161;
        pub const SC_CHARSET_HANGUL: i32 = 129;
        pub const SC_CHARSET_MAC: i32 = 77;
        pub const SC_CHARSET_OEM: i32 = 255;
        pub const SC_CHARSET_RUSSIAN: i32 = 204;
        pub const SC_CHARSET_OEM866: i32 = 866;
        pub const SC_CHARSET_CYRILLIC: i32 = 1251;
        pub const SC_CHARSET_SHIFTJIS: i32 = 128;
        pub const SC_CHARSET_SYMBOL: i32 = 2;
        pub const SC_CHARSET_TURKISH: i32 = 162;
        pub const SC_CHARSET_JOHAB: i32 = 130;
        pub const SC_CHARSET_HEBREW: i32 = 177;
        pub const SC_CHARSET_ARABIC: i32 = 178;
        pub const SC_CHARSET_VIETNAMESE: i32 = 163;
        pub const SC_CHARSET_THAI: i32 = 222;
        pub const SC_CHARSET_8859_15: i32 = 1000;
        pub const SC_CASE_MIXED: i32 = 0;
        pub const SC_CASE_UPPER: i32 = 1;
        pub const SC_CASE_LOWER: i32 = 2;
        pub const SC_CASE_CAMEL: i32 = 3;
        pub const SC_IV_NONE: i32 = 0;
        pub const SC_IV_REAL: i32 = 1;
        pub const SC_IV_LOOKFORWARD: i32 = 2;
        pub const SC_IV_LOOKBOTH: i32 = 3;
        pub const INDIC_PLAIN: i32 = 0;
        pub const INDIC_SQUIGGLE: i32 = 1;
        pub const INDIC_TT: i32 = 2;
        pub const INDIC_DIAGONAL: i32 = 3;
        pub const INDIC_STRIKE: i32 = 4;
        pub const INDIC_HIDDEN: i32 = 5;
        pub const INDIC_BOX: i32 = 6;
        pub const INDIC_ROUNDBOX: i32 = 7;
        pub const INDIC_STRAIGHTBOX: i32 = 8;
        pub const INDIC_DASH: i32 = 9;
        pub const INDIC_DOTS: i32 = 10;
        pub const INDIC_SQUIGGLELOW: i32 = 11;
        pub const INDIC_DOTBOX: i32 = 12;
        pub const INDIC_SQUIGGLEPIXMAP: i32 = 13;
        pub const INDIC_COMPOSITIONTHICK: i32 = 14;
        pub const INDIC_COMPOSITIONTHIN: i32 = 15;
        pub const INDIC_FULLBOX: i32 = 16;
        pub const INDIC_TEXTFORE: i32 = 17;
        pub const INDIC_POINT: i32 = 18;
        pub const INDIC_POINTCHARACTER: i32 = 19;
        pub const INDIC_GRADIENT: i32 = 20;
        pub const INDIC_GRADIENTCENTRE: i32 = 21;
        pub const INDIC_IME: i32 = 32;
        pub const INDIC_IME_MAX: i32 = 35;
        pub const INDIC_CONTAINER: i32 = 8;
        pub const INDIC_MAX: i32 = 35;
        pub const INDIC0_MASK: i32 = 32;
        pub const INDIC1_MASK: i32 = 64;
        pub const INDIC2_MASK: i32 = 128;
        pub const INDICS_MASK: i32 = 224;
        pub const SC_INDICVALUEBIT: i32 = 16777216;
        pub const SC_INDICVALUEMASK: i32 = 16777215;
        pub const SC_INDICFLAG_VALUEBEFORE: i32 = 1;
        pub const SC_PRINT_NORMAL: i32 = 0;
        pub const SC_PRINT_INVERTLIGHT: i32 = 1;
        pub const SC_PRINT_BLACKONWHITE: i32 = 2;
        pub const SC_PRINT_COLOURONWHITE: i32 = 3;
        pub const SC_PRINT_COLOURONWHITEDEFAULTBG: i32 = 4;
        pub const SC_PRINT_SCREENCOLOURS: i32 = 5;
        pub const SCFIND_WHOLEWORD: i32 = 2;
        pub const SCFIND_MATCHCASE: i32 = 4;
        pub const SCFIND_WORDSTART: i32 = 1048576;
        pub const SCFIND_REGEXP: i32 = 2097152;
        pub const SCFIND_POSIX: i32 = 4194304;
        pub const SCFIND_CXX11REGEX: i32 = 8388608;
        pub const SC_FOLDDISPLAYTEXT_HIDDEN: i32 = 0;
        pub const SC_FOLDDISPLAYTEXT_STANDARD: i32 = 1;
        pub const SC_FOLDDISPLAYTEXT_BOXED: i32 = 2;
        pub const SC_FOLDLEVELBASE: i32 = 1024;
        pub const SC_FOLDLEVELWHITEFLAG: i32 = 4096;
        pub const SC_FOLDLEVELHEADERFLAG: i32 = 8192;
        pub const SC_FOLDLEVELNUMBERMASK: i32 = 4095;
        pub const SC_FOLDFLAG_LINEBEFORE_EXPANDED: i32 = 2;
        pub const SC_FOLDFLAG_LINEBEFORE_CONTRACTED: i32 = 4;
        pub const SC_FOLDFLAG_LINEAFTER_EXPANDED: i32 = 8;
        pub const SC_FOLDFLAG_LINEAFTER_CONTRACTED: i32 = 16;
        pub const SC_FOLDFLAG_LEVELNUMBERS: i32 = 64;
        pub const SC_FOLDFLAG_LINESTATE: i32 = 128;
        pub const SC_LINE_END_TYPE_DEFAULT: i32 = 0;
        pub const SC_LINE_END_TYPE_UNICODE: i32 = 1;
        pub const SC_TIME_FOREVER: i32 = 10000000;
        pub const SC_WRAP_NONE: i32 = 0;
        pub const SC_WRAP_WORD: i32 = 1;
        pub const SC_WRAP_CHAR: i32 = 2;
        pub const SC_WRAP_WHITESPACE: i32 = 3;
        pub const SC_WRAPINDENT_FIXED: i32 = 0;
        pub const SC_WRAPINDENT_SAME: i32 = 1;
        pub const SC_WRAPINDENT_INDENT: i32 = 2;
        pub const SC_WRAPINDENT_DEEPINDENT: i32 = 3;
        pub const SC_CACHE_NONE: i32 = 0;
        pub const SC_CACHE_CARET: i32 = 1;
        pub const SC_CACHE_PAGE: i32 = 2;
        pub const SC_CACHE_DOCUMENT: i32 = 3;
        pub const SC_PHASES_ONE: i32 = 0;
        pub const SC_PHASES_TWO: i32 = 1;
        pub const SC_PHASES_MULTIPLE: i32 = 2;
        pub const ANNOTATION_HIDDEN: i32 = 0;
        pub const ANNOTATION_STANDARD: i32 = 1;
        pub const ANNOTATION_BOXED: i32 = 2;
        pub const ANNOTATION_INDENTED: i32 = 3;
        pub const EDGE_NONE: i32 = 0;
        pub const EDGE_LINE: i32 = 1;
        pub const EDGE_BACKGROUND: i32 = 2;
        pub const EDGE_MULTILINE: i32 = 3;
        pub const SC_CURSORNORMAL: i32 = -1;
        pub const SC_CURSORARROW: i32 = 2;
        pub const SC_CURSORWAIT: i32 = 4;
        pub const SC_CURSORREVERSEARROW: i32 = 7;
        pub const UNDO_MAY_COALESCE: i32 = 1;
        pub const VISIBLE_SLOP: i32 = 1;
        pub const VISIBLE_STRICT: i32 = 4;
        pub const CARET_SLOP: i32 = 1;
        pub const CARET_STRICT: i32 = 4;
        pub const CARET_JUMPS: i32 = 16;
        pub const CARET_EVEN: i32 = 8;
        pub const CARETSTYLE_INVISIBLE: i32 = 0;
        pub const CARETSTYLE_LINE: i32 = 1;
        pub const CARETSTYLE_BLOCK: i32 = 2;
        pub const SC_MOD_INSERTTEXT: i32 = 1;
        pub const SC_MOD_DELETETEXT: i32 = 2;
        pub const SC_MOD_CHANGESTYLE: i32 = 4;
        pub const SC_MOD_CHANGEFOLD: i32 = 8;
        pub const SC_PERFORMED_USER: i32 = 16;
        pub const SC_PERFORMED_UNDO: i32 = 32;
        pub const SC_PERFORMED_REDO: i32 = 64;
        pub const SC_MULTISTEPUNDOREDO: i32 = 128;
        pub const SC_LASTSTEPINUNDOREDO: i32 = 256;
        pub const SC_MOD_CHANGEMARKER: i32 = 512;
        pub const SC_MOD_BEFOREINSERT: i32 = 1024;
        pub const SC_MOD_BEFOREDELETE: i32 = 2048;
        pub const SC_MULTILINEUNDOREDO: i32 = 4096;
        pub const SC_STARTACTION: i32 = 8192;
        pub const SC_MOD_CHANGEINDICATOR: i32 = 16384;
        pub const SC_MOD_CHANGELINESTATE: i32 = 32768;
        pub const SC_MOD_CHANGEMARGIN: i32 = 65536;
        pub const SC_MOD_CHANGEANNOTATION: i32 = 131072;
        pub const SC_MOD_CONTAINER: i32 = 262144;
        pub const SC_MOD_LEXERSTATE: i32 = 524288;
        pub const SC_MOD_INSERTCHECK: i32 = 1048576;
        pub const SC_MOD_CHANGETABSTOPS: i32 = 2097152;
        pub const SC_MODEVENTMASKALL: i32 = 4194303;
        pub const SCK_DOWN: i32 = 300;
        pub const SCK_UP: i32 = 301;
        pub const SCK_LEFT: i32 = 302;
        pub const SCK_RIGHT: i32 = 303;
        pub const SCK_HOME: i32 = 304;
        pub const SCK_END: i32 = 305;
        pub const SCK_PRIOR: i32 = 306;
        pub const SCK_NEXT: i32 = 307;
        pub const SCK_DELETE: i32 = 308;
        pub const SCK_INSERT: i32 = 309;
        pub const SCK_ESCAPE: i32 = 7;
        pub const SCK_BACK: i32 = 8;
        pub const SCK_TAB: i32 = 9;
        pub const SCK_RETURN: i32 = 13;
        pub const SCK_ADD: i32 = 310;
        pub const SCK_SUBTRACT: i32 = 311;
        pub const SCK_DIVIDE: i32 = 312;
        pub const SCK_WIN: i32 = 313;
        pub const SCK_RWIN: i32 = 314;
        pub const SCK_MENU: i32 = 315;
        pub const SCMOD_NORM: i32 = 0;
        pub const SCMOD_SHIFT: i32 = 1;
        pub const SCMOD_CTRL: i32 = 2;
        pub const SCMOD_ALT: i32 = 4;
        pub const SCMOD_SUPER: i32 = 8;
        pub const SCMOD_META: i32 = 16;
        pub const SCLEX_CONTAINER: i32 = 0;
        pub const SCLEX_NULL: i32 = 1;
        pub const SCLEX_PYTHON: i32 = 2;
        pub const SCLEX_CPP: i32 = 3;
        pub const SCLEX_HTML: i32 = 4;
        pub const SCLEX_XML: i32 = 5;
        pub const SCLEX_PERL: i32 = 6;
        pub const SCLEX_SQL: i32 = 7;
        pub const SCLEX_VB: i32 = 8;
        pub const SCLEX_PROPERTIES: i32 = 9;
        pub const SCLEX_ERRORLIST: i32 = 10;
        pub const SCLEX_MAKEFILE: i32 = 11;
        pub const SCLEX_BATCH: i32 = 12;
        pub const SCLEX_LATEX: i32 = 14;
        pub const SCLEX_LUA: i32 = 15;
        pub const SCLEX_DIFF: i32 = 16;
        pub const SCLEX_CONF: i32 = 17;
        pub const SCLEX_PASCAL: i32 = 18;
        pub const SCLEX_AVE: i32 = 19;
        pub const SCLEX_ADA: i32 = 20;
        pub const SCLEX_LISP: i32 = 21;
        pub const SCLEX_RUBY: i32 = 22;
        pub const SCLEX_EIFFEL: i32 = 23;
        pub const SCLEX_EIFFELKW: i32 = 24;
        pub const SCLEX_TCL: i32 = 25;
        pub const SCLEX_NNCRONTAB: i32 = 26;
        pub const SCLEX_BULLANT: i32 = 27;
        pub const SCLEX_VBSCRIPT: i32 = 28;
        pub const SCLEX_ASP: i32 = 4;
        pub const SCLEX_PHP: i32 = 4;
        pub const SCLEX_BAAN: i32 = 31;
        pub const SCLEX_MATLAB: i32 = 32;
        pub const SCLEX_SCRIPTOL: i32 = 33;
        pub const SCLEX_ASM: i32 = 34;
        pub const SCLEX_CPPNOCASE: i32 = 35;
        pub const SCLEX_FORTRAN: i32 = 36;
        pub const SCLEX_F77: i32 = 37;
        pub const SCLEX_CSS: i32 = 38;
        pub const SCLEX_POV: i32 = 39;
        pub const SCLEX_LOUT: i32 = 40;
        pub const SCLEX_ESCRIPT: i32 = 41;
        pub const SCLEX_PS: i32 = 42;
        pub const SCLEX_NSIS: i32 = 43;
        pub const SCLEX_MMIXAL: i32 = 44;
        pub const SCLEX_CLW: i32 = 45;
        pub const SCLEX_CLWNOCASE: i32 = 46;
        pub const SCLEX_LOT: i32 = 47;
        pub const SCLEX_YAML: i32 = 48;
        pub const SCLEX_TEX: i32 = 49;
        pub const SCLEX_METAPOST: i32 = 50;
        pub const SCLEX_POWERBASIC: i32 = 51;
        pub const SCLEX_FORTH: i32 = 52;
        pub const SCLEX_ERLANG: i32 = 53;
        pub const SCLEX_OCTAVE: i32 = 54;
        pub const SCLEX_MSSQL: i32 = 55;
        pub const SCLEX_VERILOG: i32 = 56;
        pub const SCLEX_KIX: i32 = 57;
        pub const SCLEX_GUI4CLI: i32 = 58;
        pub const SCLEX_SPECMAN: i32 = 59;
        pub const SCLEX_AU3: i32 = 60;
        pub const SCLEX_APDL: i32 = 61;
        pub const SCLEX_BASH: i32 = 62;
        pub const SCLEX_ASN1: i32 = 63;
        pub const SCLEX_VHDL: i32 = 64;
        pub const SCLEX_CAML: i32 = 65;
        pub const SCLEX_BLITZBASIC: i32 = 66;
        pub const SCLEX_PUREBASIC: i32 = 67;
        pub const SCLEX_HASKELL: i32 = 68;
        pub const SCLEX_PHPSCRIPT: i32 = 69;
        pub const SCLEX_TADS3: i32 = 70;
        pub const SCLEX_REBOL: i32 = 71;
        pub const SCLEX_SMALLTALK: i32 = 72;
        pub const SCLEX_FLAGSHIP: i32 = 73;
        pub const SCLEX_CSOUND: i32 = 74;
        pub const SCLEX_FREEBASIC: i32 = 75;
        pub const SCLEX_INNOSETUP: i32 = 76;
        pub const SCLEX_OPAL: i32 = 77;
        pub const SCLEX_SPICE: i32 = 78;
        pub const SCLEX_D: i32 = 79;
        pub const SCLEX_CMAKE: i32 = 80;
        pub const SCLEX_GAP: i32 = 81;
        pub const SCLEX_PLM: i32 = 82;
        pub const SCLEX_PROGRESS: i32 = 83;
        pub const SCLEX_ABAQUS: i32 = 84;
        pub const SCLEX_ASYMPTOTE: i32 = 85;
        pub const SCLEX_R: i32 = 86;
        pub const SCLEX_MAGIK: i32 = 87;
        pub const SCLEX_POWERSHELL: i32 = 88;
        pub const SCLEX_MYSQL: i32 = 89;
        pub const SCLEX_PO: i32 = 90;
        pub const SCLEX_TAL: i32 = 91;
        pub const SCLEX_COBOL: i32 = 92;
        pub const SCLEX_TACL: i32 = 93;
        pub const SCLEX_SORCUS: i32 = 94;
        pub const SCLEX_POWERPRO: i32 = 95;
        pub const SCLEX_NIMROD: i32 = 96;
        pub const SCLEX_SML: i32 = 97;
        pub const SCLEX_MARKDOWN: i32 = 98;
        pub const SCLEX_TXT2TAGS: i32 = 99;
        pub const SCLEX_A68K: i32 = 100;
        pub const SCLEX_MODULA: i32 = 101;
        pub const SCLEX_COFFEESCRIPT: i32 = 102;
        pub const SCLEX_TCMD: i32 = 103;
        pub const SCLEX_AVS: i32 = 104;
        pub const SCLEX_ECL: i32 = 105;
        pub const SCLEX_OSCRIPT: i32 = 106;
        pub const SCLEX_VISUALPROLOG: i32 = 107;
        pub const SCLEX_LITERATEHASKELL: i32 = 108;
        pub const SCLEX_STTXT: i32 = 109;
        pub const SCLEX_KVIRC: i32 = 110;
        pub const SCLEX_RUST: i32 = 111;
        pub const SCLEX_DMAP: i32 = 112;
        pub const SCLEX_AS: i32 = 113;
        pub const SCLEX_DMIS: i32 = 114;
        pub const SCLEX_REGISTRY: i32 = 115;
        pub const SCLEX_BIBTEX: i32 = 116;
        pub const SCLEX_SREC: i32 = 117;
        pub const SCLEX_IHEX: i32 = 118;
        pub const SCLEX_TEHEX: i32 = 119;
        pub const SCLEX_JSON: i32 = 120;
        pub const SCLEX_EDIFACT: i32 = 121;
        pub const SCLEX_INDENT: i32 = 122;
        pub const SCLEX_MAXIMA: i32 = 123;
        pub const SCLEX_STATA: i32 = 124;
        pub const SCLEX_SAS: i32 = 125;
        pub const SC_WEIGHT_NORMAL: i32 = 400;
        pub const SC_WEIGHT_SEMIBOLD: i32 = 600;
        pub const SC_WEIGHT_BOLD: i32 = 700;
        pub const SC_TECHNOLOGY_DEFAULT: i32 = 0;
        pub const SC_TECHNOLOGY_DIRECTWRITE: i32 = 1;
        pub const SC_TECHNOLOGY_DIRECTWRITERETAIN: i32 = 2;
        pub const SC_TECHNOLOGY_DIRECTWRITEDC: i32 = 3;
        pub const SC_CASEINSENSITIVEBEHAVIOUR_RESPECTCASE: i32 = 0;
        pub const SC_CASEINSENSITIVEBEHAVIOUR_IGNORECASE: i32 = 1;
        pub const SC_FONT_SIZE_MULTIPLIER: i32 = 100;
        pub const SC_FOLDACTION_CONTRACT: i32 = 0;
        pub const SC_FOLDACTION_EXPAND: i32 = 1;
        pub const SC_FOLDACTION_TOGGLE: i32 = 2;
        pub const SC_AUTOMATICFOLD_SHOW: i32 = 1;
        pub const SC_AUTOMATICFOLD_CLICK: i32 = 2;
        pub const SC_AUTOMATICFOLD_CHANGE: i32 = 4;
        pub const SC_ORDER_PRESORTED: i32 = 0;
        pub const SC_ORDER_PERFORMSORT: i32 = 1;
        pub const SC_ORDER_CUSTOM: i32 = 2;
    };
};
