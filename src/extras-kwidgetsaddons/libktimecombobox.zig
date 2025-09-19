const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ktimecombobox_enums = enums;
const qcombobox_enums = @import("../libqcombobox.zig").enums;
const qlocale_enums = @import("../libqlocale.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// https://api.kde.org/ktimecombobox.html
pub const ktimecombobox = struct {
    /// New constructs a new KTimeComboBox object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.KTimeComboBox {
        return qtc.KTimeComboBox_new(@ptrCast(parent));
    }

    /// New2 constructs a new KTimeComboBox object.
    ///
    ///
    pub fn New2() QtC.KTimeComboBox {
        return qtc.KTimeComboBox_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTimeComboBox_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KTimeComboBox, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTimeComboBox_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KTimeComboBox, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KTimeComboBox_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KTimeComboBox_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#time)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Time(self: ?*anyopaque) QtC.QTime {
        return qtc.KTimeComboBox_Time(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#isValid)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KTimeComboBox_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#isNull)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KTimeComboBox_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#options)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` flag of ktimecombobox_enums.Option ```
    pub fn Options(self: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_Options(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#displayFormat)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qlocale_enums.FormatType ```
    pub fn DisplayFormat(self: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_DisplayFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#minimumTime)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MinimumTime(self: ?*anyopaque) QtC.QTime {
        return qtc.KTimeComboBox_MinimumTime(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#resetMinimumTime)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ResetMinimumTime(self: ?*anyopaque) void {
        qtc.KTimeComboBox_ResetMinimumTime(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#maximumTime)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MaximumTime(self: ?*anyopaque) QtC.QTime {
        return qtc.KTimeComboBox_MaximumTime(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#resetMaximumTime)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ResetMaximumTime(self: ?*anyopaque) void {
        qtc.KTimeComboBox_ResetMaximumTime(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setTimeRange)
    ///
    /// ``` self: QtC.KTimeComboBox, minTime: QtC.QTime, maxTime: QtC.QTime ```
    pub fn SetTimeRange(self: ?*anyopaque, minTime: ?*anyopaque, maxTime: ?*anyopaque) void {
        qtc.KTimeComboBox_SetTimeRange(@ptrCast(self), @ptrCast(minTime), @ptrCast(maxTime));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#resetTimeRange)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ResetTimeRange(self: ?*anyopaque) void {
        qtc.KTimeComboBox_ResetTimeRange(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#timeListInterval)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn TimeListInterval(self: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_TimeListInterval(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#timeList)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn TimeList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QTime {
        const _arr: qtc.libqt_list = qtc.KTimeComboBox_TimeList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QTime, _arr.len) catch @panic("ktimecombobox.TimeList: Memory allocation failed");
        const _data: [*]QtC.QTime = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#timeEntered)
    ///
    /// ``` self: QtC.KTimeComboBox, time: QtC.QTime ```
    pub fn TimeEntered(self: ?*anyopaque, time: ?*anyopaque) void {
        qtc.KTimeComboBox_TimeEntered(@ptrCast(self), @ptrCast(time));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#timeEntered)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, time: QtC.QTime) callconv(.c) void ```
    pub fn OnTimeEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_Connect_TimeEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#timeChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, time: QtC.QTime ```
    pub fn TimeChanged(self: ?*anyopaque, time: ?*anyopaque) void {
        qtc.KTimeComboBox_TimeChanged(@ptrCast(self), @ptrCast(time));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#timeChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, time: QtC.QTime) callconv(.c) void ```
    pub fn OnTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_Connect_TimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#timeEdited)
    ///
    /// ``` self: QtC.KTimeComboBox, time: QtC.QTime ```
    pub fn TimeEdited(self: ?*anyopaque, time: ?*anyopaque) void {
        qtc.KTimeComboBox_TimeEdited(@ptrCast(self), @ptrCast(time));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#timeEdited)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, time: QtC.QTime) callconv(.c) void ```
    pub fn OnTimeEdited(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_Connect_TimeEdited(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setTime)
    ///
    /// ``` self: QtC.KTimeComboBox, time: QtC.QTime ```
    pub fn SetTime(self: ?*anyopaque, time: ?*anyopaque) void {
        qtc.KTimeComboBox_SetTime(@ptrCast(self), @ptrCast(time));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setOptions)
    ///
    /// ``` self: QtC.KTimeComboBox, options: flag of ktimecombobox_enums.Option ```
    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.KTimeComboBox_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setDisplayFormat)
    ///
    /// ``` self: QtC.KTimeComboBox, format: qlocale_enums.FormatType ```
    pub fn SetDisplayFormat(self: ?*anyopaque, format: i32) void {
        qtc.KTimeComboBox_SetDisplayFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setMinimumTime)
    ///
    /// ``` self: QtC.KTimeComboBox, minTime: QtC.QTime ```
    pub fn SetMinimumTime(self: ?*anyopaque, minTime: ?*anyopaque) void {
        qtc.KTimeComboBox_SetMinimumTime(@ptrCast(self), @ptrCast(minTime));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setMaximumTime)
    ///
    /// ``` self: QtC.KTimeComboBox, maxTime: QtC.QTime ```
    pub fn SetMaximumTime(self: ?*anyopaque, maxTime: ?*anyopaque) void {
        qtc.KTimeComboBox_SetMaximumTime(@ptrCast(self), @ptrCast(maxTime));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setTimeListInterval)
    ///
    /// ``` self: QtC.KTimeComboBox, minutes: i32 ```
    pub fn SetTimeListInterval(self: ?*anyopaque, minutes: i32) void {
        qtc.KTimeComboBox_SetTimeListInterval(@ptrCast(self), @intCast(minutes));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setTimeList)
    ///
    /// ``` self: QtC.KTimeComboBox, timeList: []QtC.QTime ```
    pub fn SetTimeList(self: ?*anyopaque, timeList: []QtC.QTime) void {
        const timeList_list = qtc.libqt_list{
            .len = timeList.len,
            .data = @ptrCast(timeList.ptr),
        };
        qtc.KTimeComboBox_SetTimeList(@ptrCast(self), timeList_list);
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#eventFilter)
    ///
    /// ``` self: QtC.KTimeComboBox, object: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTimeComboBox_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTimeComboBox_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, object: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTimeComboBox_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#showPopup)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ShowPopup(self: ?*anyopaque) void {
        qtc.KTimeComboBox_ShowPopup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#showPopup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnShowPopup(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTimeComboBox_OnShowPopup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#showPopup)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseShowPopup(self: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseShowPopup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#hidePopup)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn HidePopup(self: ?*anyopaque) void {
        qtc.KTimeComboBox_HidePopup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#hidePopup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnHidePopup(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTimeComboBox_OnHidePopup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#hidePopup)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseHidePopup(self: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseHidePopup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#mousePressEvent)
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#wheelEvent)
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#keyPressEvent)
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#focusInEvent)
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#focusOutEvent)
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#resizeEvent)
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#assignTime)
    ///
    /// ``` self: QtC.KTimeComboBox, time: QtC.QTime ```
    pub fn AssignTime(self: ?*anyopaque, time: ?*anyopaque) void {
        qtc.KTimeComboBox_AssignTime(@ptrCast(self), @ptrCast(time));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#assignTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, time: QtC.QTime) callconv(.c) void ```
    pub fn OnAssignTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnAssignTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#assignTime)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KTimeComboBox, time: QtC.QTime ```
    pub fn QBaseAssignTime(self: ?*anyopaque, time: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseAssignTime(@ptrCast(self), @ptrCast(time));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTimeComboBox_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTimeComboBox_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setTimeRange)
    ///
    /// ``` self: QtC.KTimeComboBox, minTime: QtC.QTime, maxTime: QtC.QTime, minWarnMsg: []const u8 ```
    pub fn SetTimeRange3(self: ?*anyopaque, minTime: ?*anyopaque, maxTime: ?*anyopaque, minWarnMsg: []const u8) void {
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        qtc.KTimeComboBox_SetTimeRange3(@ptrCast(self), @ptrCast(minTime), @ptrCast(maxTime), minWarnMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setTimeRange)
    ///
    /// ``` self: QtC.KTimeComboBox, minTime: QtC.QTime, maxTime: QtC.QTime, minWarnMsg: []const u8, maxWarnMsg: []const u8 ```
    pub fn SetTimeRange4(self: ?*anyopaque, minTime: ?*anyopaque, maxTime: ?*anyopaque, minWarnMsg: []const u8, maxWarnMsg: []const u8) void {
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        const maxWarnMsg_str = qtc.libqt_string{
            .len = maxWarnMsg.len,
            .data = maxWarnMsg.ptr,
        };
        qtc.KTimeComboBox_SetTimeRange4(@ptrCast(self), @ptrCast(minTime), @ptrCast(maxTime), minWarnMsg_str, maxWarnMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setMinimumTime)
    ///
    /// ``` self: QtC.KTimeComboBox, minTime: QtC.QTime, minWarnMsg: []const u8 ```
    pub fn SetMinimumTime2(self: ?*anyopaque, minTime: ?*anyopaque, minWarnMsg: []const u8) void {
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        qtc.KTimeComboBox_SetMinimumTime2(@ptrCast(self), @ptrCast(minTime), minWarnMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setMaximumTime)
    ///
    /// ``` self: QtC.KTimeComboBox, maxTime: QtC.QTime, maxWarnMsg: []const u8 ```
    pub fn SetMaximumTime2(self: ?*anyopaque, maxTime: ?*anyopaque, maxWarnMsg: []const u8) void {
        const maxWarnMsg_str = qtc.libqt_string{
            .len = maxWarnMsg.len,
            .data = maxWarnMsg.ptr,
        };
        qtc.KTimeComboBox_SetMaximumTime2(@ptrCast(self), @ptrCast(maxTime), maxWarnMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setTimeList)
    ///
    /// ``` self: QtC.KTimeComboBox, timeList: []QtC.QTime, minWarnMsg: []const u8 ```
    pub fn SetTimeList2(self: ?*anyopaque, timeList: []QtC.QTime, minWarnMsg: []const u8) void {
        const timeList_list = qtc.libqt_list{
            .len = timeList.len,
            .data = @ptrCast(timeList.ptr),
        };
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        qtc.KTimeComboBox_SetTimeList2(@ptrCast(self), timeList_list, minWarnMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#setTimeList)
    ///
    /// ``` self: QtC.KTimeComboBox, timeList: []QtC.QTime, minWarnMsg: []const u8, maxWarnMsg: []const u8 ```
    pub fn SetTimeList3(self: ?*anyopaque, timeList: []QtC.QTime, minWarnMsg: []const u8, maxWarnMsg: []const u8) void {
        const timeList_list = qtc.libqt_list{
            .len = timeList.len,
            .data = @ptrCast(timeList.ptr),
        };
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        const maxWarnMsg_str = qtc.libqt_string{
            .len = maxWarnMsg.len,
            .data = maxWarnMsg.ptr,
        };
        qtc.KTimeComboBox_SetTimeList3(@ptrCast(self), timeList_list, minWarnMsg_str, maxWarnMsg_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MaxVisibleItems(self: ?*anyopaque) i32 {
        return qtc.QComboBox_MaxVisibleItems(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
    ///
    /// ``` self: QtC.KTimeComboBox, maxItems: i32 ```
    pub fn SetMaxVisibleItems(self: ?*anyopaque, maxItems: i32) void {
        qtc.QComboBox_SetMaxVisibleItems(@ptrCast(self), @intCast(maxItems));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#count)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QComboBox_Count(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
    ///
    /// ``` self: QtC.KTimeComboBox, max: i32 ```
    pub fn SetMaxCount(self: ?*anyopaque, max: i32) void {
        qtc.QComboBox_SetMaxCount(@ptrCast(self), @intCast(max));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MaxCount(self: ?*anyopaque) i32 {
        return qtc.QComboBox_MaxCount(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn DuplicatesEnabled(self: ?*anyopaque) bool {
        return qtc.QComboBox_DuplicatesEnabled(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
    ///
    /// ``` self: QtC.KTimeComboBox, enable: bool ```
    pub fn SetDuplicatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QComboBox_SetDuplicatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
    ///
    /// ``` self: QtC.KTimeComboBox, frame: bool ```
    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QComboBox_SetFrame(@ptrCast(self), frame);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn HasFrame(self: ?*anyopaque) bool {
        return qtc.QComboBox_HasFrame(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ``` self: QtC.KTimeComboBox, text: []const u8 ```
    pub fn FindText(self: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QComboBox_FindText(@ptrCast(self), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ``` self: QtC.KTimeComboBox, data: QtC.QVariant ```
    pub fn FindData(self: ?*anyopaque, data: ?*anyopaque) i32 {
        return qtc.QComboBox_FindData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qcombobox_enums.InsertPolicy ```
    pub fn InsertPolicy(self: ?*anyopaque) i32 {
        return qtc.QComboBox_InsertPolicy(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
    ///
    /// ``` self: QtC.KTimeComboBox, policy: qcombobox_enums.InsertPolicy ```
    pub fn SetInsertPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QComboBox_SetInsertPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qcombobox_enums.SizeAdjustPolicy ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QComboBox_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.KTimeComboBox, policy: qcombobox_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QComboBox_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MinimumContentsLength(self: ?*anyopaque) i32 {
        return qtc.QComboBox_MinimumContentsLength(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
    ///
    /// ``` self: QtC.KTimeComboBox, characters: i32 ```
    pub fn SetMinimumContentsLength(self: ?*anyopaque, characters: i32) void {
        qtc.QComboBox_SetMinimumContentsLength(@ptrCast(self), @intCast(characters));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QComboBox_IconSize(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
    ///
    /// ``` self: QtC.KTimeComboBox, size: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QComboBox_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
    ///
    /// ``` self: QtC.KTimeComboBox, placeholderText: []const u8 ```
    pub fn SetPlaceholderText(self: ?*anyopaque, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QComboBox_SetPlaceholderText(@ptrCast(self), placeholderText_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#placeholderText)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn PlaceholderText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_PlaceholderText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsEditable(self: ?*anyopaque) bool {
        return qtc.QComboBox_IsEditable(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
    ///
    /// ``` self: QtC.KTimeComboBox, editable: bool ```
    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QComboBox_SetEditable(@ptrCast(self), editable);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
    ///
    /// ``` self: QtC.KTimeComboBox, edit: QtC.QLineEdit ```
    pub fn SetLineEdit(self: ?*anyopaque, edit: ?*anyopaque) void {
        qtc.QComboBox_SetLineEdit(@ptrCast(self), @ptrCast(edit));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn LineEdit(self: ?*anyopaque) QtC.QLineEdit {
        return qtc.QComboBox_LineEdit(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
    ///
    /// ``` self: QtC.KTimeComboBox, v: QtC.QValidator ```
    pub fn SetValidator(self: ?*anyopaque, v: ?*anyopaque) void {
        qtc.QComboBox_SetValidator(@ptrCast(self), @ptrCast(v));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#validator)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Validator(self: ?*anyopaque) QtC.QValidator {
        return qtc.QComboBox_Validator(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
    ///
    /// ``` self: QtC.KTimeComboBox, c: QtC.QCompleter ```
    pub fn SetCompleter(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QComboBox_SetCompleter(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#completer)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Completer(self: ?*anyopaque) QtC.QCompleter {
        return qtc.QComboBox_Completer(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ItemDelegate(self: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QComboBox_ItemDelegate(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
    ///
    /// ``` self: QtC.KTimeComboBox, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QComboBox_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#model)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QComboBox_Model(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn RootModelIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QComboBox_RootModelIndex(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
    ///
    /// ``` self: QtC.KTimeComboBox, index: QtC.QModelIndex ```
    pub fn SetRootModelIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QComboBox_SetRootModelIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ModelColumn(self: ?*anyopaque) i32 {
        return qtc.QComboBox_ModelColumn(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
    ///
    /// ``` self: QtC.KTimeComboBox, visibleColumn: i32 ```
    pub fn SetModelColumn(self: ?*anyopaque, visibleColumn: i32) void {
        qtc.QComboBox_SetModelColumn(@ptrCast(self), @intCast(visibleColumn));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn CurrentIndex(self: ?*anyopaque) i32 {
        return qtc.QComboBox_CurrentIndex(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentText)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn CurrentText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_CurrentText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.CurrentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn CurrentData(self: ?*anyopaque) QtC.QVariant {
        return qtc.QComboBox_CurrentData(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemText)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, allocator: std.mem.Allocator ```
    pub fn ItemText(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_ItemText(@ptrCast(self), @intCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.ItemText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32 ```
    pub fn ItemIcon(self: ?*anyopaque, index: i32) QtC.QIcon {
        return qtc.QComboBox_ItemIcon(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32 ```
    pub fn ItemData(self: ?*anyopaque, index: i32) QtC.QVariant {
        return qtc.QComboBox_ItemData(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ``` self: QtC.KTimeComboBox, text: []const u8 ```
    pub fn AddItem(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_AddItem(@ptrCast(self), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ``` self: QtC.KTimeComboBox, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddItem2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_AddItem2(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItems)
    ///
    /// ``` self: QtC.KTimeComboBox, texts: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddItems(self: ?*anyopaque, texts: [][]const u8, allocator: std.mem.Allocator) void {
        var texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("ktimecombobox.AddItems: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |item, i| {
            texts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.QComboBox_AddItems(@ptrCast(self), texts_list);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, text: []const u8 ```
    pub fn InsertItem(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_InsertItem(@ptrCast(self), @intCast(index), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, icon: QtC.QIcon, text: []const u8 ```
    pub fn InsertItem2(self: ?*anyopaque, index: i32, icon: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_InsertItem2(@ptrCast(self), @intCast(index), @ptrCast(icon), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItems)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, texts: [][]const u8, allocator: std.mem.Allocator ```
    pub fn InsertItems(self: ?*anyopaque, index: i32, texts: [][]const u8, allocator: std.mem.Allocator) void {
        var texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("ktimecombobox.InsertItems: Memory allocation failed");
        defer allocator.free(texts_arr);
        for (texts, 0..texts.len) |item, i| {
            texts_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const texts_list = qtc.libqt_list{
            .len = texts.len,
            .data = texts_arr.ptr,
        };
        qtc.QComboBox_InsertItems(@ptrCast(self), @intCast(index), texts_list);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertSeparator)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32 ```
    pub fn InsertSeparator(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_InsertSeparator(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32 ```
    pub fn RemoveItem(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_RemoveItem(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, text: []const u8 ```
    pub fn SetItemText(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetItemText(@ptrCast(self), @intCast(index), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemIcon)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, icon: QtC.QIcon ```
    pub fn SetItemIcon(self: ?*anyopaque, index: i32, icon: ?*anyopaque) void {
        qtc.QComboBox_SetItemIcon(@ptrCast(self), @intCast(index), @ptrCast(icon));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, value: QtC.QVariant ```
    pub fn SetItemData(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QComboBox_SetItemData(@ptrCast(self), @intCast(index), @ptrCast(value));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#view)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn View(self: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QComboBox_View(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setView)
    ///
    /// ``` self: QtC.KTimeComboBox, itemView: QtC.QAbstractItemView ```
    pub fn SetView(self: ?*anyopaque, itemView: ?*anyopaque) void {
        qtc.QComboBox_SetView(@ptrCast(self), @ptrCast(itemView));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// ``` self: QtC.KTimeComboBox, query: qnamespace_enums.InputMethodQuery, argument: QtC.QVariant ```
    pub fn InputMethodQuery2(self: ?*anyopaque, query: i64, argument: ?*anyopaque) QtC.QVariant {
        return qtc.QComboBox_InputMethodQuery2(@ptrCast(self), @intCast(query), @ptrCast(argument));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clear)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QComboBox_Clear(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ClearEditText(self: ?*anyopaque) void {
        qtc.QComboBox_ClearEditText(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
    ///
    /// ``` self: QtC.KTimeComboBox, text: []const u8 ```
    pub fn SetEditText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetEditText(@ptrCast(self), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentIndex)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32 ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_SetCurrentIndex(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
    ///
    /// ``` self: QtC.KTimeComboBox, text: []const u8 ```
    pub fn SetCurrentText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_SetCurrentText(@ptrCast(self), text_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: []const u8 ```
    pub fn EditTextChanged(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_EditTextChanged(@ptrCast(self), param1_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#editTextChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnEditTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_EditTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32 ```
    pub fn Activated(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_Activated(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, index: i32) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: []const u8 ```
    pub fn TextActivated(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_TextActivated(@ptrCast(self), param1_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnTextActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32 ```
    pub fn Highlighted(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_Highlighted(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, index: i32) callconv(.c) void ```
    pub fn OnHighlighted(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Highlighted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: []const u8 ```
    pub fn TextHighlighted(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_TextHighlighted(@ptrCast(self), param1_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnTextHighlighted(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextHighlighted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32 ```
    pub fn CurrentIndexChanged(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_CurrentIndexChanged(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, index: i32) callconv(.c) void ```
    pub fn OnCurrentIndexChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentIndexChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: []const u8 ```
    pub fn CurrentTextChanged(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QComboBox_CurrentTextChanged(@ptrCast(self), param1_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnCurrentTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ``` self: QtC.KTimeComboBox, text: []const u8, flags: flag of qnamespace_enums.MatchFlag ```
    pub fn FindText2(self: ?*anyopaque, text: []const u8, flags: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QComboBox_FindText2(@ptrCast(self), text_str, @intCast(flags));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ``` self: QtC.KTimeComboBox, data: QtC.QVariant, role: i32 ```
    pub fn FindData2(self: ?*anyopaque, data: ?*anyopaque, role: i32) i32 {
        return qtc.QComboBox_FindData2(@ptrCast(self), @ptrCast(data), @intCast(role));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ``` self: QtC.KTimeComboBox, data: QtC.QVariant, role: i32, flags: flag of qnamespace_enums.MatchFlag ```
    pub fn FindData3(self: ?*anyopaque, data: ?*anyopaque, role: i32, flags: i32) i32 {
        return qtc.QComboBox_FindData3(@ptrCast(self), @ptrCast(data), @intCast(role), @intCast(flags));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ``` self: QtC.KTimeComboBox, role: i32 ```
    pub fn CurrentData1(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QComboBox_CurrentData1(@ptrCast(self), @intCast(role));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, role: i32 ```
    pub fn ItemData2(self: ?*anyopaque, index: i32, role: i32) QtC.QVariant {
        return qtc.QComboBox_ItemData2(@ptrCast(self), @intCast(index), @intCast(role));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ``` self: QtC.KTimeComboBox, text: []const u8, userData: QtC.QVariant ```
    pub fn AddItem22(self: ?*anyopaque, text: []const u8, userData: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_AddItem22(@ptrCast(self), text_str, @ptrCast(userData));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ``` self: QtC.KTimeComboBox, icon: QtC.QIcon, text: []const u8, userData: QtC.QVariant ```
    pub fn AddItem3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, userData: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_AddItem3(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(userData));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, text: []const u8, userData: QtC.QVariant ```
    pub fn InsertItem3(self: ?*anyopaque, index: i32, text: []const u8, userData: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_InsertItem3(@ptrCast(self), @intCast(index), text_str, @ptrCast(userData));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertItem)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, icon: QtC.QIcon, text: []const u8, userData: QtC.QVariant ```
    pub fn InsertItem4(self: ?*anyopaque, index: i32, icon: ?*anyopaque, text: []const u8, userData: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QComboBox_InsertItem4(@ptrCast(self), @intCast(index), @ptrCast(icon), text_str, @ptrCast(userData));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
    ///
    /// ``` self: QtC.KTimeComboBox, index: i32, value: QtC.QVariant, role: i32 ```
    pub fn SetItemData3(self: ?*anyopaque, index: i32, value: ?*anyopaque, role: i32) void {
        qtc.QComboBox_SetItemData3(@ptrCast(self), @intCast(index), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.KTimeComboBox, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.KTimeComboBox, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.KTimeComboBox, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.KTimeComboBox, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.KTimeComboBox, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KTimeComboBox, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KTimeComboBox, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KTimeComboBox, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KTimeComboBox, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.KTimeComboBox, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.KTimeComboBox, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.KTimeComboBox, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.KTimeComboBox, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KTimeComboBox, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KTimeComboBox, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KTimeComboBox, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KTimeComboBox, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KTimeComboBox, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KTimeComboBox, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.KTimeComboBox, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.KTimeComboBox, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.KTimeComboBox, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.KTimeComboBox, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.KTimeComboBox, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.KTimeComboBox, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.KTimeComboBox, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.KTimeComboBox, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.KTimeComboBox, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KTimeComboBox, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KTimeComboBox, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTimeComboBox, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTimeComboBox, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.KTimeComboBox, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KTimeComboBox, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.KTimeComboBox, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.KTimeComboBox, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.KTimeComboBox, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.KTimeComboBox, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.KTimeComboBox, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.KTimeComboBox, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.KTimeComboBox, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.KTimeComboBox, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.KTimeComboBox, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.KTimeComboBox, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.KTimeComboBox, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.KTimeComboBox, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.KTimeComboBox, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.KTimeComboBox, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.KTimeComboBox, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.KTimeComboBox, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KTimeComboBox, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.KTimeComboBox, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.KTimeComboBox ```
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
    /// ``` self: QtC.KTimeComboBox, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.KTimeComboBox, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KTimeComboBox, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.KTimeComboBox, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KTimeComboBox, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KTimeComboBox, id: i32 ```
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
    /// ``` self: QtC.KTimeComboBox ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.KTimeComboBox, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KTimeComboBox, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KTimeComboBox, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.KTimeComboBox, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KTimeComboBox, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KTimeComboBox, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KTimeComboBox, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KTimeComboBox, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("ktimecombobox.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.KTimeComboBox, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.KTimeComboBox, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.KTimeComboBox, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KTimeComboBox, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KTimeComboBox, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KTimeComboBox, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KTimeComboBox, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.KTimeComboBox, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KTimeComboBox, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KTimeComboBox, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KTimeComboBox, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KTimeComboBox, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.KTimeComboBox, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTimeComboBox, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.KTimeComboBox, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.KTimeComboBox, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.KTimeComboBox, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.KTimeComboBox, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("ktimecombobox.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTimeComboBox, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTimeComboBox, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTimeComboBox, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KTimeComboBox, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.KTimeComboBox, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.KTimeComboBox, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
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
    /// ``` self: QtC.KTimeComboBox, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KTimeComboBox, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KTimeComboBox, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.KTimeComboBox, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.KTimeComboBox, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.KTimeComboBox, screen: QtC.QScreen ```
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
    /// ``` self: QtC.KTimeComboBox, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KTimeComboBox, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.KTimeComboBox, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTimeComboBox, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTimeComboBox, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTimeComboBox, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTimeComboBox, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTimeComboBox, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KTimeComboBox, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KTimeComboBox, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KTimeComboBox, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KTimeComboBox, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KTimeComboBox, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KTimeComboBox, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
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
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: flag of qnamespace_enums.WindowType ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktimecombobox.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KTimeComboBox, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KTimeComboBox, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTimeComboBox, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTimeComboBox, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTimeComboBox, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTimeComboBox, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktimecombobox.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KTimeComboBox, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KTimeComboBox, obj: QtC.QObject ```
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
    /// ``` self: QtC.KTimeComboBox, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KTimeComboBox ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KTimeComboBox, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KTimeComboBox, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KTimeComboBox, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktimecombobox.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktimecombobox.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KTimeComboBox, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTimeComboBox, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTimeComboBox, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KTimeComboBox, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.KTimeComboBox ```
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
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.KTimeComboBox_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, model: QtC.QAbstractItemModel ```
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, model: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTimeComboBox_SizeHint(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTimeComboBox_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KTimeComboBox_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTimeComboBox_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KTimeComboBox_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KTimeComboBox_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTimeComboBox_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTimeComboBox_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTimeComboBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.KTimeComboBox_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.KTimeComboBox_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.KTimeComboBox_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_ShowEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseShowEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, e: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_HideEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseHideEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, e: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, e: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, e: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, e: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTimeComboBox_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, param1: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, option: QtC.QStyleOptionComboBox ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KTimeComboBox_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, option: QtC.QStyleOptionComboBox ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, option: QtC.QStyleOptionComboBox) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KTimeComboBox_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KTimeComboBox_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KTimeComboBox_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KTimeComboBox_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTimeComboBox_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTimeComboBox_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KTimeComboBox_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KTimeComboBox_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KTimeComboBox_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTimeComboBox_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KTimeComboBox_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KTimeComboBox_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.KTimeComboBox_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnTabletEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTimeComboBox_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTimeComboBox_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KTimeComboBox_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTimeComboBox_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KTimeComboBox_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KTimeComboBox_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KTimeComboBox_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KTimeComboBox_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KTimeComboBox_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.KTimeComboBox_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KTimeComboBox_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KTimeComboBox_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.KTimeComboBox_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KTimeComboBox_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KTimeComboBox_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KTimeComboBox_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTimeComboBox_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTimeComboBox_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTimeComboBox_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KTimeComboBox_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTimeComboBox_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.KTimeComboBox_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTimeComboBox_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.KTimeComboBox_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.KTimeComboBox_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KTimeComboBox_OnDestroy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.KTimeComboBox_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.KTimeComboBox_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTimeComboBox_OnFocusNextChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KTimeComboBox_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KTimeComboBox_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KTimeComboBox_OnFocusPreviousChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTimeComboBox_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTimeComboBox_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KTimeComboBox_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTimeComboBox_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KTimeComboBox_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTimeComboBox_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTimeComboBox_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTimeComboBox_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTimeComboBox_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTimeComboBox_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTimeComboBox_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KTimeComboBox_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KTimeComboBox_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.KTimeComboBox_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KTimeComboBox, callback: *const fn (self: QtC.KTimeComboBox, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktimecombobox.html#dtor.KTimeComboBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KTimeComboBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTimeComboBox_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/ktimecombobox.html#types
pub const enums = struct {
    pub const Option = enum {
        pub const EditTime: i32 = 1;
        pub const SelectTime: i32 = 2;
        pub const ForceTime: i32 = 4;
        pub const WarnOnInvalid: i32 = 8;
    };
};
