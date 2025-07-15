const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qapplication.html
pub const qapplication = struct {
    /// New constructs a new QApplication object.
    ///
    /// ``` argc: usize, argv: [*][*:0]u8 ```
    pub fn New(argc: usize, argv: [*][*:0]u8) QtC.QApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QApplication_new(&argc_param, argv_param);
    }

    /// New2 constructs a new QApplication object.
    ///
    /// ``` argc: usize, argv: [*][*:0]u8, param3: i32 ```
    pub fn New2(argc: usize, argv: [*][*:0]u8, param3: i32) QtC.QApplication {
        var argc_param: c_int = @intCast(argc);
        const argv_param: [*c][*c]u8 = @ptrCast(@alignCast(&argv[0]));

        return qtc.QApplication_new2(&argc_param, argv_param, @intCast(param3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QApplication_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QApplication, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QApplication_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QApplication_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QApplication_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QApplication, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QApplication_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QApplication_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#style)
    ///
    ///
    pub fn Style() QtC.QStyle {
        return qtc.QApplication_Style();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyle)
    ///
    /// ``` style: QtC.QStyle ```
    pub fn SetStyle(style: ?*anyopaque) void {
        qtc.QApplication_SetStyle(@ptrCast(style));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyle)
    ///
    /// ``` style: []const u8 ```
    pub fn SetStyle2(style: []const u8) QtC.QStyle {
        const style_str = qtc.struct_libqt_string{
            .len = style.len,
            .data = style.ptr,
        };
        return qtc.QApplication_SetStyle2(style_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#palette)
    ///
    /// ``` param1: QtC.QWidget ```
    pub fn Palette(param1: ?*anyopaque) QtC.QPalette {
        return qtc.QApplication_Palette(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#palette)
    ///
    /// ``` className: []const u8 ```
    pub fn Palette2(className: []const u8) QtC.QPalette {
        const className_Cstring = className.ptr;
        return qtc.QApplication_Palette2(className_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setPalette)
    ///
    /// ``` param1: QtC.QPalette ```
    pub fn SetPalette(param1: ?*anyopaque) void {
        qtc.QApplication_SetPalette(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    ///
    pub fn Font() QtC.QFont {
        return qtc.QApplication_Font();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    /// ``` param1: QtC.QWidget ```
    pub fn Font2(param1: ?*anyopaque) QtC.QFont {
        return qtc.QApplication_Font2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#font)
    ///
    /// ``` className: []const u8 ```
    pub fn Font3(className: []const u8) QtC.QFont {
        const className_Cstring = className.ptr;
        return qtc.QApplication_Font3(className_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setFont)
    ///
    /// ``` param1: QtC.QFont ```
    pub fn SetFont(param1: ?*anyopaque) void {
        qtc.QApplication_SetFont(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#fontMetrics)
    ///
    ///
    pub fn FontMetrics() QtC.QFontMetrics {
        return qtc.QApplication_FontMetrics();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#allWidgets)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllWidgets(allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.struct_libqt_list = qtc.QApplication_AllWidgets();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qapplication.AllWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelWidgets)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn TopLevelWidgets(allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.struct_libqt_list = qtc.QApplication_TopLevelWidgets();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("qapplication.TopLevelWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activePopupWidget)
    ///
    ///
    pub fn ActivePopupWidget() QtC.QWidget {
        return qtc.QApplication_ActivePopupWidget();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activeModalWidget)
    ///
    ///
    pub fn ActiveModalWidget() QtC.QWidget {
        return qtc.QApplication_ActiveModalWidget();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#focusWidget)
    ///
    ///
    pub fn FocusWidget() QtC.QWidget {
        return qtc.QApplication_FocusWidget();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#activeWindow)
    ///
    ///
    pub fn ActiveWindow() QtC.QWidget {
        return qtc.QApplication_ActiveWindow();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setActiveWindow)
    ///
    /// ``` act: QtC.QWidget ```
    pub fn SetActiveWindow(act: ?*anyopaque) void {
        qtc.QApplication_SetActiveWindow(@ptrCast(act));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
    ///
    /// ``` p: QtC.QPoint ```
    pub fn WidgetAt(p: ?*anyopaque) QtC.QWidget {
        return qtc.QApplication_WidgetAt(@ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#widgetAt)
    ///
    /// ``` x: i32, y: i32 ```
    pub fn WidgetAt2(x: i32, y: i32) QtC.QWidget {
        return qtc.QApplication_WidgetAt2(@intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
    ///
    /// ``` p: QtC.QPoint ```
    pub fn TopLevelAt(p: ?*anyopaque) QtC.QWidget {
        return qtc.QApplication_TopLevelAt(@ptrCast(p));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#topLevelAt)
    ///
    /// ``` x: i32, y: i32 ```
    pub fn TopLevelAt2(x: i32, y: i32) QtC.QWidget {
        return qtc.QApplication_TopLevelAt2(@intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#beep)
    ///
    ///
    pub fn Beep() void {
        qtc.QApplication_Beep();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#alert)
    ///
    /// ``` widget: QtC.QWidget ```
    pub fn Alert(widget: ?*anyopaque) void {
        qtc.QApplication_Alert(@ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setCursorFlashTime)
    ///
    /// ``` cursorFlashTime: i32 ```
    pub fn SetCursorFlashTime(cursorFlashTime: i32) void {
        qtc.QApplication_SetCursorFlashTime(@intCast(cursorFlashTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#cursorFlashTime)
    ///
    ///
    pub fn CursorFlashTime() i32 {
        return qtc.QApplication_CursorFlashTime();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setDoubleClickInterval)
    ///
    /// ``` doubleClickInterval: i32 ```
    pub fn SetDoubleClickInterval(doubleClickInterval: i32) void {
        qtc.QApplication_SetDoubleClickInterval(@intCast(doubleClickInterval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#doubleClickInterval)
    ///
    ///
    pub fn DoubleClickInterval() i32 {
        return qtc.QApplication_DoubleClickInterval();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setKeyboardInputInterval)
    ///
    /// ``` keyboardInputInterval: i32 ```
    pub fn SetKeyboardInputInterval(keyboardInputInterval: i32) void {
        qtc.QApplication_SetKeyboardInputInterval(@intCast(keyboardInputInterval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#keyboardInputInterval)
    ///
    ///
    pub fn KeyboardInputInterval() i32 {
        return qtc.QApplication_KeyboardInputInterval();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setWheelScrollLines)
    ///
    /// ``` wheelScrollLines: i32 ```
    pub fn SetWheelScrollLines(wheelScrollLines: i32) void {
        qtc.QApplication_SetWheelScrollLines(@intCast(wheelScrollLines));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#wheelScrollLines)
    ///
    ///
    pub fn WheelScrollLines() i32 {
        return qtc.QApplication_WheelScrollLines();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStartDragTime)
    ///
    /// ``` ms: i32 ```
    pub fn SetStartDragTime(ms: i32) void {
        qtc.QApplication_SetStartDragTime(@intCast(ms));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#startDragTime)
    ///
    ///
    pub fn StartDragTime() i32 {
        return qtc.QApplication_StartDragTime();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStartDragDistance)
    ///
    /// ``` l: i32 ```
    pub fn SetStartDragDistance(l: i32) void {
        qtc.QApplication_SetStartDragDistance(@intCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#startDragDistance)
    ///
    ///
    pub fn StartDragDistance() i32 {
        return qtc.QApplication_StartDragDistance();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#isEffectEnabled)
    ///
    /// ``` param1: qnamespace_enums.UIEffect ```
    pub fn IsEffectEnabled(param1: i64) bool {
        return qtc.QApplication_IsEffectEnabled(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
    ///
    /// ``` param1: qnamespace_enums.UIEffect ```
    pub fn SetEffectEnabled(param1: i64) void {
        qtc.QApplication_SetEffectEnabled(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#exec)
    ///
    ///
    pub fn Exec() i32 {
        return qtc.QApplication_Exec();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#notify)
    ///
    /// ``` self: QtC.QApplication, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#notify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, param1: QtC.QObject, param2: QtC.QEvent) callconv(.c) bool ```
    pub fn OnNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QApplication_OnNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#notify)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QApplication, param1: QtC.QObject, param2: QtC.QEvent ```
    pub fn QBaseNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QApplication_QBaseNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
    ///
    /// ``` self: QtC.QApplication, name: []const u8, revision: i32 ```
    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QApplication_ResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, name: []const u8, revision: i32) callconv(.c) ?*anyopaque ```
    pub fn OnResolveInterface(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QApplication_OnResolveInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#resolveInterface)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QApplication, name: []const u8, revision: i32 ```
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        const name_Cstring = name.ptr;
        return qtc.QApplication_QBaseResolveInterface(@ptrCast(self), name_Cstring, @intCast(revision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
    ///
    /// ``` self: QtC.QApplication, old: QtC.QWidget, now: QtC.QWidget ```
    pub fn FocusChanged(self: ?*anyopaque, old: ?*anyopaque, now: ?*anyopaque) void {
        qtc.QApplication_FocusChanged(@ptrCast(self), @ptrCast(old), @ptrCast(now));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#focusChanged)
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, old: QtC.QWidget, now: QtC.QWidget) callconv(.c) void ```
    pub fn OnFocusChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QApplication_Connect_FocusChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#styleSheet)
    ///
    /// ``` self: QtC.QApplication, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QApplication_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#autoSipEnabled)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn AutoSipEnabled(self: ?*anyopaque) bool {
        return qtc.QApplication_AutoSipEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setStyleSheet)
    ///
    /// ``` self: QtC.QApplication, sheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, sheet: []const u8) void {
        const sheet_str = qtc.struct_libqt_string{
            .len = sheet.len,
            .data = sheet.ptr,
        };
        qtc.QApplication_SetStyleSheet(@ptrCast(self), sheet_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setAutoSipEnabled)
    ///
    /// ``` self: QtC.QApplication, enabled: bool ```
    pub fn SetAutoSipEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QApplication_SetAutoSipEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#closeAllWindows)
    ///
    ///
    pub fn CloseAllWindows() void {
        qtc.QApplication_CloseAllWindows();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#aboutQt)
    ///
    ///
    pub fn AboutQt() void {
        qtc.QApplication_AboutQt();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#event)
    ///
    /// ``` self: QtC.QApplication, param1: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QApplication_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QApplication, param1: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QApplication_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QApplication_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QApplication_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setPalette)
    ///
    /// ``` param1: QtC.QPalette, className: []const u8 ```
    pub fn SetPalette2(param1: ?*anyopaque, className: []const u8) void {
        const className_Cstring = className.ptr;
        qtc.QApplication_SetPalette2(@ptrCast(param1), className_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setFont)
    ///
    /// ``` param1: QtC.QFont, className: []const u8 ```
    pub fn SetFont2(param1: ?*anyopaque, className: []const u8) void {
        const className_Cstring = className.ptr;
        qtc.QApplication_SetFont2(@ptrCast(param1), className_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#alert)
    ///
    /// ``` widget: QtC.QWidget, duration: i32 ```
    pub fn Alert2(widget: ?*anyopaque, duration: i32) void {
        qtc.QApplication_Alert2(@ptrCast(widget), @intCast(duration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#setEffectEnabled)
    ///
    /// ``` param1: qnamespace_enums.UIEffect, enable: bool ```
    pub fn SetEffectEnabled2(param1: i64, enable: bool) void {
        qtc.QApplication_SetEffectEnabled2(@intCast(param1), enable);
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setApplicationDisplayName)
    ///
    /// ``` name: []const u8 ```
    pub fn SetApplicationDisplayName(name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGuiApplication_SetApplicationDisplayName(name_str);
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationDisplayName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_ApplicationDisplayName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationDisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setBadgeNumber)
    ///
    /// ``` self: QtC.QApplication, number: i64 ```
    pub fn SetBadgeNumber(self: ?*anyopaque, number: i64) void {
        qtc.QGuiApplication_SetBadgeNumber(@ptrCast(self), @intCast(number));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopFileName)
    ///
    /// ``` name: []const u8 ```
    pub fn SetDesktopFileName(name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QGuiApplication_SetDesktopFileName(name_str);
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopFileName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DesktopFileName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_DesktopFileName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.DesktopFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#allWindows)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllWindows(allocator: std.mem.Allocator) []QtC.QWindow {
        const _arr: qtc.struct_libqt_list = qtc.QGuiApplication_AllWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWindow, _arr.len) catch @panic("qapplication.AllWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#topLevelWindows)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn TopLevelWindows(allocator: std.mem.Allocator) []QtC.QWindow {
        const _arr: qtc.struct_libqt_list = qtc.QGuiApplication_TopLevelWindows();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWindow, _arr.len) catch @panic("qapplication.TopLevelWindows: Memory allocation failed");
        const _data: [*]QtC.QWindow = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setWindowIcon)
    ///
    /// ``` icon: QtC.QIcon ```
    pub fn SetWindowIcon(icon: ?*anyopaque) void {
        qtc.QGuiApplication_SetWindowIcon(@ptrCast(icon));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#windowIcon)
    ///
    ///
    pub fn WindowIcon() QtC.QIcon {
        return qtc.QGuiApplication_WindowIcon();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#platformName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PlatformName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_PlatformName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.PlatformName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#modalWindow)
    ///
    ///
    pub fn ModalWindow() QtC.QWindow {
        return qtc.QGuiApplication_ModalWindow();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindow)
    ///
    ///
    pub fn FocusWindow() QtC.QWindow {
        return qtc.QGuiApplication_FocusWindow();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObject)
    ///
    ///
    pub fn FocusObject() QtC.QObject {
        return qtc.QGuiApplication_FocusObject();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreen)
    ///
    ///
    pub fn PrimaryScreen() QtC.QScreen {
        return qtc.QGuiApplication_PrimaryScreen();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screens)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Screens(allocator: std.mem.Allocator) []QtC.QScreen {
        const _arr: qtc.struct_libqt_list = qtc.QGuiApplication_Screens();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QScreen, _arr.len) catch @panic("qapplication.Screens: Memory allocation failed");
        const _data: [*]QtC.QScreen = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAt)
    ///
    /// ``` point: QtC.QPoint ```
    pub fn ScreenAt(point: ?*anyopaque) QtC.QScreen {
        return qtc.QGuiApplication_ScreenAt(@ptrCast(point));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QGuiApplication_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#overrideCursor)
    ///
    ///
    pub fn OverrideCursor() QtC.QCursor {
        return qtc.QGuiApplication_OverrideCursor();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setOverrideCursor)
    ///
    /// ``` overrideCursor: QtC.QCursor ```
    pub fn SetOverrideCursor(overrideCursor: ?*anyopaque) void {
        qtc.QGuiApplication_SetOverrideCursor(@ptrCast(overrideCursor));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#changeOverrideCursor)
    ///
    /// ``` param1: QtC.QCursor ```
    pub fn ChangeOverrideCursor(param1: ?*anyopaque) void {
        qtc.QGuiApplication_ChangeOverrideCursor(@ptrCast(param1));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#restoreOverrideCursor)
    ///
    ///
    pub fn RestoreOverrideCursor() void {
        qtc.QGuiApplication_RestoreOverrideCursor();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#clipboard)
    ///
    ///
    pub fn Clipboard() QtC.QClipboard {
        return qtc.QGuiApplication_Clipboard();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#keyboardModifiers)
    ///
    ///
    pub fn KeyboardModifiers() i64 {
        return qtc.QGuiApplication_KeyboardModifiers();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#queryKeyboardModifiers)
    ///
    ///
    pub fn QueryKeyboardModifiers() i64 {
        return qtc.QGuiApplication_QueryKeyboardModifiers();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#mouseButtons)
    ///
    ///
    pub fn MouseButtons() i64 {
        return qtc.QGuiApplication_MouseButtons();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setLayoutDirection)
    ///
    /// ``` direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(direction: i64) void {
        qtc.QGuiApplication_SetLayoutDirection(@intCast(direction));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirection)
    ///
    ///
    pub fn LayoutDirection() i64 {
        return qtc.QGuiApplication_LayoutDirection();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isRightToLeft)
    ///
    ///
    pub fn IsRightToLeft() bool {
        return qtc.QGuiApplication_IsRightToLeft();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isLeftToRight)
    ///
    ///
    pub fn IsLeftToRight() bool {
        return qtc.QGuiApplication_IsLeftToRight();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#styleHints)
    ///
    ///
    pub fn StyleHints() QtC.QStyleHints {
        return qtc.QGuiApplication_StyleHints();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setDesktopSettingsAware)
    ///
    /// ``` on: bool ```
    pub fn SetDesktopSettingsAware(on: bool) void {
        qtc.QGuiApplication_SetDesktopSettingsAware(on);
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#desktopSettingsAware)
    ///
    ///
    pub fn DesktopSettingsAware() bool {
        return qtc.QGuiApplication_DesktopSettingsAware();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#inputMethod)
    ///
    ///
    pub fn InputMethod() QtC.QInputMethod {
        return qtc.QGuiApplication_InputMethod();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setQuitOnLastWindowClosed)
    ///
    /// ``` quit: bool ```
    pub fn SetQuitOnLastWindowClosed(quit: bool) void {
        qtc.QGuiApplication_SetQuitOnLastWindowClosed(quit);
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#quitOnLastWindowClosed)
    ///
    ///
    pub fn QuitOnLastWindowClosed() bool {
        return qtc.QGuiApplication_QuitOnLastWindowClosed();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationState)
    ///
    ///
    pub fn ApplicationState() i64 {
        return qtc.QGuiApplication_ApplicationState();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#setHighDpiScaleFactorRoundingPolicy)
    ///
    /// ``` policy: qnamespace_enums.HighDpiScaleFactorRoundingPolicy ```
    pub fn SetHighDpiScaleFactorRoundingPolicy(policy: i64) void {
        qtc.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(@intCast(policy));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#highDpiScaleFactorRoundingPolicy)
    ///
    ///
    pub fn HighDpiScaleFactorRoundingPolicy() i64 {
        return qtc.QGuiApplication_HighDpiScaleFactorRoundingPolicy();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSessionRestored)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn IsSessionRestored(self: ?*anyopaque) bool {
        return qtc.QGuiApplication_IsSessionRestored(@ptrCast(self));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionId)
    ///
    /// ``` self: QtC.QApplication, allocator: std.mem.Allocator ```
    pub fn SessionId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_SessionId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.SessionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sessionKey)
    ///
    /// ``` self: QtC.QApplication, allocator: std.mem.Allocator ```
    pub fn SessionKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_SessionKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.SessionKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#isSavingSession)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn IsSavingSession(self: ?*anyopaque) bool {
        return qtc.QGuiApplication_IsSavingSession(@ptrCast(self));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#sync)
    ///
    ///
    pub fn Sync() void {
        qtc.QGuiApplication_Sync();
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn FontDatabaseChanged(self: ?*anyopaque) void {
        qtc.QGuiApplication_FontDatabaseChanged(@ptrCast(self));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontDatabaseChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication) callconv(.c) void ```
    pub fn OnFontDatabaseChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ``` self: QtC.QApplication, screen: QtC.QScreen ```
    pub fn ScreenAdded(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_ScreenAdded(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenAdded)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void ```
    pub fn OnScreenAdded(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenAdded(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ``` self: QtC.QApplication, screen: QtC.QScreen ```
    pub fn ScreenRemoved(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_ScreenRemoved(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#screenRemoved)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void ```
    pub fn OnScreenRemoved(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ``` self: QtC.QApplication, screen: QtC.QScreen ```
    pub fn PrimaryScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_PrimaryScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#primaryScreenChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, screen: QtC.QScreen) callconv(.c) void ```
    pub fn OnPrimaryScreenChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn LastWindowClosed(self: ?*anyopaque) void {
        qtc.QGuiApplication_LastWindowClosed(@ptrCast(self));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#lastWindowClosed)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication) callconv(.c) void ```
    pub fn OnLastWindowClosed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ``` self: QtC.QApplication, focusObject: QtC.QObject ```
    pub fn FocusObjectChanged(self: ?*anyopaque, focusObject: ?*anyopaque) void {
        qtc.QGuiApplication_FocusObjectChanged(@ptrCast(self), @ptrCast(focusObject));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusObjectChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, focusObject: QtC.QObject) callconv(.c) void ```
    pub fn OnFocusObjectChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ``` self: QtC.QApplication, focusWindow: QtC.QWindow ```
    pub fn FocusWindowChanged(self: ?*anyopaque, focusWindow: ?*anyopaque) void {
        qtc.QGuiApplication_FocusWindowChanged(@ptrCast(self), @ptrCast(focusWindow));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#focusWindowChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, focusWindow: QtC.QWindow) callconv(.c) void ```
    pub fn OnFocusWindowChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ``` self: QtC.QApplication, state: qnamespace_enums.ApplicationState ```
    pub fn ApplicationStateChanged(self: ?*anyopaque, state: i64) void {
        qtc.QGuiApplication_ApplicationStateChanged(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationStateChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, state: qnamespace_enums.ApplicationState) callconv(.c) void ```
    pub fn OnApplicationStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ``` self: QtC.QApplication, direction: qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirectionChanged(self: ?*anyopaque, direction: i64) void {
        qtc.QGuiApplication_LayoutDirectionChanged(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#layoutDirectionChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, direction: qnamespace_enums.LayoutDirection) callconv(.c) void ```
    pub fn OnLayoutDirectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ``` self: QtC.QApplication, sessionManager: QtC.QSessionManager ```
    pub fn CommitDataRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        qtc.QGuiApplication_CommitDataRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#commitDataRequest)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, sessionManager: QtC.QSessionManager) callconv(.c) void ```
    pub fn OnCommitDataRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ``` self: QtC.QApplication, sessionManager: QtC.QSessionManager ```
    pub fn SaveStateRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        qtc.QGuiApplication_SaveStateRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#saveStateRequest)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, sessionManager: QtC.QSessionManager) callconv(.c) void ```
    pub fn OnSaveStateRequest(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn ApplicationDisplayNameChanged(self: ?*anyopaque) void {
        qtc.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#applicationDisplayNameChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication) callconv(.c) void ```
    pub fn OnApplicationDisplayNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ``` self: QtC.QApplication, pal: QtC.QPalette ```
    pub fn PaletteChanged(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QGuiApplication_PaletteChanged(@ptrCast(self), @ptrCast(pal));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#paletteChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, pal: QtC.QPalette) callconv(.c) void ```
    pub fn OnPaletteChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PaletteChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ``` self: QtC.QApplication, font: QtC.QFont ```
    pub fn FontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGuiApplication_FontChanged(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QGuiApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qguiapplication.html#fontChanged)
    ///
    /// ``` self: QtC.QGuiApplication, slot: fn (self: QtC.QGuiApplication, font: QtC.QFont) callconv(.c) void ```
    pub fn OnFontChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn Arguments(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QCoreApplication_Arguments();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qapplication.Arguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qapplication.Arguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute ```
    pub fn SetAttribute(attribute: i64) void {
        qtc.QCoreApplication_SetAttribute(@intCast(attribute));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute ```
    pub fn TestAttribute(attribute: i64) bool {
        return qtc.QCoreApplication_TestAttribute(@intCast(attribute));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
    ///
    /// ``` orgDomain: []const u8 ```
    pub fn SetOrganizationDomain(orgDomain: []const u8) void {
        const orgDomain_str = qtc.struct_libqt_string{
            .len = orgDomain.len,
            .data = orgDomain.ptr,
        };
        qtc.QCoreApplication_SetOrganizationDomain(orgDomain_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OrganizationDomain(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_OrganizationDomain();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.OrganizationDomain: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
    ///
    /// ``` orgName: []const u8 ```
    pub fn SetOrganizationName(orgName: []const u8) void {
        const orgName_str = qtc.struct_libqt_string{
            .len = orgName.len,
            .data = orgName.ptr,
        };
        qtc.QCoreApplication_SetOrganizationName(orgName_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn OrganizationName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_OrganizationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.OrganizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
    ///
    /// ``` application: []const u8 ```
    pub fn SetApplicationName(application: []const u8) void {
        const application_str = qtc.struct_libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        qtc.QCoreApplication_SetApplicationName(application_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationName(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationName();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
    ///
    /// ``` version: []const u8 ```
    pub fn SetApplicationVersion(version: []const u8) void {
        const version_str = qtc.struct_libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.QCoreApplication_SetApplicationVersion(version_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationVersion(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationVersion();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
    ///
    /// ``` allow: bool ```
    pub fn SetSetuidAllowed(allow: bool) void {
        qtc.QCoreApplication_SetSetuidAllowed(allow);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
    ///
    ///
    pub fn IsSetuidAllowed() bool {
        return qtc.QCoreApplication_IsSetuidAllowed();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
    ///
    ///
    pub fn Instance() QtC.QCoreApplication {
        return qtc.QCoreApplication_Instance();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    ///
    pub fn ProcessEvents() void {
        qtc.QCoreApplication_ProcessEvents();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: i32, maxtime: i32 ```
    pub fn ProcessEvents2(flags: i64, maxtime: i32) void {
        qtc.QCoreApplication_ProcessEvents2(@intCast(flags), @intCast(maxtime));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: i32, deadline: QtC.QDeadlineTimer ```
    pub fn ProcessEvents3(flags: i64, deadline: QtC.QDeadlineTimer) void {
        qtc.QCoreApplication_ProcessEvents3(@intCast(flags), @ptrCast(deadline));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent ```
    pub fn SendEvent(receiver: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QCoreApplication_SendEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent ```
    pub fn PostEvent(receiver: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QCoreApplication_PostEvent(@ptrCast(receiver), @ptrCast(event));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    ///
    pub fn SendPostedEvents() void {
        qtc.QCoreApplication_SendPostedEvents();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ``` receiver: QtC.QObject ```
    pub fn RemovePostedEvents(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_RemovePostedEvents(@ptrCast(receiver));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
    ///
    ///
    pub fn EventDispatcher() QtC.QAbstractEventDispatcher {
        return qtc.QCoreApplication_EventDispatcher();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
    ///
    /// ``` eventDispatcher: QtC.QAbstractEventDispatcher ```
    pub fn SetEventDispatcher(eventDispatcher: ?*anyopaque) void {
        qtc.QCoreApplication_SetEventDispatcher(@ptrCast(eventDispatcher));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
    ///
    ///
    pub fn StartingUp() bool {
        return qtc.QCoreApplication_StartingUp();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
    ///
    ///
    pub fn ClosingDown() bool {
        return qtc.QCoreApplication_ClosingDown();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationDirPath(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationDirPath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationDirPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ApplicationFilePath(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCoreApplication_ApplicationFilePath();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ApplicationFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
    ///
    ///
    pub fn ApplicationPid() i64 {
        return qtc.QCoreApplication_ApplicationPid();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#checkPermission)
    ///
    /// ``` self: QtC.QApplication, permission: QtC.QPermission ```
    pub fn CheckPermission(self: ?*anyopaque, permission: ?*anyopaque) i64 {
        return qtc.QCoreApplication_CheckPermission(@ptrCast(self), @ptrCast(permission));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
    ///
    /// ``` libraryPaths: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetLibraryPaths(libraryPaths: [][]const u8, allocator: std.mem.Allocator) void {
        var libraryPaths_arr = allocator.alloc(qtc.struct_libqt_string, libraryPaths.len) catch @panic("qapplication.SetLibraryPaths: Memory allocation failed");
        defer allocator.free(libraryPaths_arr);
        for (libraryPaths, 0..libraryPaths.len) |item, i| {
            libraryPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const libraryPaths_list = qtc.struct_libqt_list{
            .len = libraryPaths.len,
            .data = libraryPaths_arr.ptr,
        };
        qtc.QCoreApplication_SetLibraryPaths(libraryPaths_list);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn LibraryPaths(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QCoreApplication_LibraryPaths();
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qapplication.LibraryPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qapplication.LibraryPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
    ///
    /// ``` param1: []const u8 ```
    pub fn AddLibraryPath(param1: []const u8) void {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_AddLibraryPath(param1_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
    ///
    /// ``` param1: []const u8 ```
    pub fn RemoveLibraryPath(param1: []const u8) void {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QCoreApplication_RemoveLibraryPath(param1_str);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
    ///
    /// ``` messageFile: QtC.QTranslator ```
    pub fn InstallTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_InstallTranslator(@ptrCast(messageFile));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
    ///
    /// ``` messageFile: QtC.QTranslator ```
    pub fn RemoveTranslator(messageFile: ?*anyopaque) bool {
        return qtc.QCoreApplication_RemoveTranslator(@ptrCast(messageFile));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, allocator: std.mem.Allocator ```
    pub fn Translate(context: []const u8, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const _str = qtc.QCoreApplication_Translate(context_Cstring, key_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Translate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ``` self: QtC.QApplication, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void ```
    pub fn OnInstallNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_InstallNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ``` self: QtC.QApplication, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QCoreApplication_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication, filterObj: QtC.QAbstractNativeEventFilter) callconv(.c) void ```
    pub fn OnRemoveNativeEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_RemoveNativeEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
    ///
    ///
    pub fn IsQuitLockEnabled() bool {
        return qtc.QCoreApplication_IsQuitLockEnabled();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
    ///
    /// ``` enabled: bool ```
    pub fn SetQuitLockEnabled(enabled: bool) void {
        qtc.QCoreApplication_SetQuitLockEnabled(enabled);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
    ///
    ///
    pub fn Quit() void {
        qtc.QCoreApplication_Quit();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    ///
    pub fn Exit() void {
        qtc.QCoreApplication_Exit();
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn OrganizationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationNameChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnOrganizationNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn OrganizationDomainChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_OrganizationDomainChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnOrganizationDomainChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_OrganizationDomainChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn ApplicationNameChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationNameChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnApplicationNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn ApplicationVersionChanged(self: ?*anyopaque) void {
        qtc.QCoreApplication_ApplicationVersionChanged(@ptrCast(self));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
    ///
    /// ``` self: QtC.QCoreApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnApplicationVersionChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_ApplicationVersionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
    ///
    /// ``` attribute: qnamespace_enums.ApplicationAttribute, on: bool ```
    pub fn SetAttribute2(attribute: i64, on: bool) void {
        qtc.QCoreApplication_SetAttribute2(@intCast(attribute), on);
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
    ///
    /// ``` flags: i32 ```
    pub fn ProcessEvents1(flags: i64) void {
        qtc.QCoreApplication_ProcessEvents1(@intCast(flags));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
    ///
    /// ``` receiver: QtC.QObject, event: QtC.QEvent, priority: i32 ```
    pub fn PostEvent3(receiver: ?*anyopaque, event: ?*anyopaque, priority: i32) void {
        qtc.QCoreApplication_PostEvent3(@ptrCast(receiver), @ptrCast(event), @intCast(priority));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ``` receiver: QtC.QObject ```
    pub fn SendPostedEvents1(receiver: ?*anyopaque) void {
        qtc.QCoreApplication_SendPostedEvents1(@ptrCast(receiver));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
    ///
    /// ``` receiver: QtC.QObject, event_type: i32 ```
    pub fn SendPostedEvents2(receiver: ?*anyopaque, event_type: i32) void {
        qtc.QCoreApplication_SendPostedEvents2(@ptrCast(receiver), @intCast(event_type));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
    ///
    /// ``` receiver: QtC.QObject, eventType: i32 ```
    pub fn RemovePostedEvents2(receiver: ?*anyopaque, eventType: i32) void {
        qtc.QCoreApplication_RemovePostedEvents2(@ptrCast(receiver), @intCast(eventType));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Translate3(context: []const u8, key: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QCoreApplication_Translate3(context_Cstring, key_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Translate3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
    ///
    /// ``` context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Translate4(context: []const u8, key: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const context_Cstring = context.ptr;
        const key_Cstring = key.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QCoreApplication_Translate4(context_Cstring, key_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Translate4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
    ///
    /// ``` retcode: i32 ```
    pub fn Exit1(retcode: i32) void {
        qtc.QCoreApplication_Exit1(@intCast(retcode));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QApplication, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QApplication, name: []const u8 ```
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
    /// ``` self: QtC.QApplication ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QApplication, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QApplication, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QApplication, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QApplication, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QApplication, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QApplication, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qapplication.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QApplication, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QApplication, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QApplication, obj: QtC.QObject ```
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
    /// ``` self: QtC.QApplication, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QApplication ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QApplication, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QApplication, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QApplication, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qapplication.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qapplication.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QApplication, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QApplication ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QApplication, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QApplication, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QApplication, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QApplication, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QApplication_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QApplication_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QApplication_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QApplication_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QApplication_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QApplication_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QApplication_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QApplication_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QApplication_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QApplication_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QApplication_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QApplication_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QApplication_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QApplication_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QApplication_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QApplication_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QApplication_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QApplication_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QApplication_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QApplication_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QApplication_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QApplication_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QApplication_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QApplication_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QApplication_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QApplication_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QApplication_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QApplication, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QApplication_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QApplication_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QApplication, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QApplication_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QCoreApplication
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QCoreApplication) callconv(.c) void ```
    pub fn OnAboutToQuit(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCoreApplication_Connect_AboutToQuit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QApplication, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qapplication.html#dtor.QApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QApplication ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QApplication_Delete(@ptrCast(self));
    }
};
