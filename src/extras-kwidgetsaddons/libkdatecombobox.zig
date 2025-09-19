const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kdatecombobox_enums = enums;
const qcombobox_enums = @import("../libqcombobox.zig").enums;
const qlocale_enums = @import("../libqlocale.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");
pub const map_qtcqdate_constu8 = std.AutoHashMapUnmanaged(QtC.QDate, []const u8);

/// https://api.kde.org/kdatecombobox.html
pub const kdatecombobox = struct {
    /// New constructs a new KDateComboBox object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.KDateComboBox {
        return qtc.KDateComboBox_new(@ptrCast(parent));
    }

    /// New2 constructs a new KDateComboBox object.
    ///
    ///
    pub fn New2() QtC.KDateComboBox {
        return qtc.KDateComboBox_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KDateComboBox_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KDateComboBox, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDateComboBox_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KDateComboBox, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KDateComboBox_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KDateComboBox_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KDateComboBox_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KDateComboBox_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#date)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Date(self: ?*anyopaque) QtC.QDate {
        return qtc.KDateComboBox_Date(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#isValid)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KDateComboBox_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#isNull)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KDateComboBox_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#options)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` flag of kdatecombobox_enums.Option ```
    pub fn Options(self: ?*anyopaque) i32 {
        return qtc.KDateComboBox_Options(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#displayFormat)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qlocale_enums.FormatType ```
    pub fn DisplayFormat(self: ?*anyopaque) i32 {
        return qtc.KDateComboBox_DisplayFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#minimumDate)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MinimumDate(self: ?*anyopaque) QtC.QDate {
        return qtc.KDateComboBox_MinimumDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#maximumDate)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MaximumDate(self: ?*anyopaque) QtC.QDate {
        return qtc.KDateComboBox_MaximumDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#dateMap)
    ///
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn DateMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_qtcqdate_constu8 {
        const _map: qtc.libqt_map = qtc.KDateComboBox_DateMap(@ptrCast(self));
        var _ret: map_qtcqdate_constu8 = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]QtC.QDate = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("kdatecombobox.DateMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#dateEntered)
    ///
    /// ``` self: QtC.KDateComboBox, date: QtC.QDate ```
    pub fn DateEntered(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.KDateComboBox_DateEntered(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#dateEntered)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, date: QtC.QDate) callconv(.c) void ```
    pub fn OnDateEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_Connect_DateEntered(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#dateChanged)
    ///
    /// ``` self: QtC.KDateComboBox, date: QtC.QDate ```
    pub fn DateChanged(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.KDateComboBox_DateChanged(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#dateChanged)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, date: QtC.QDate) callconv(.c) void ```
    pub fn OnDateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_Connect_DateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#dateEdited)
    ///
    /// ``` self: QtC.KDateComboBox, date: QtC.QDate ```
    pub fn DateEdited(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.KDateComboBox_DateEdited(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#dateEdited)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, date: QtC.QDate) callconv(.c) void ```
    pub fn OnDateEdited(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_Connect_DateEdited(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setDate)
    ///
    /// ``` self: QtC.KDateComboBox, date: QtC.QDate ```
    pub fn SetDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.KDateComboBox_SetDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setOptions)
    ///
    /// ``` self: QtC.KDateComboBox, options: flag of kdatecombobox_enums.Option ```
    pub fn SetOptions(self: ?*anyopaque, options: i32) void {
        qtc.KDateComboBox_SetOptions(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setDisplayFormat)
    ///
    /// ``` self: QtC.KDateComboBox, format: qlocale_enums.FormatType ```
    pub fn SetDisplayFormat(self: ?*anyopaque, format: i32) void {
        qtc.KDateComboBox_SetDisplayFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setDateRange)
    ///
    /// ``` self: QtC.KDateComboBox, minDate: QtC.QDate, maxDate: QtC.QDate ```
    pub fn SetDateRange(self: ?*anyopaque, minDate: ?*anyopaque, maxDate: ?*anyopaque) void {
        qtc.KDateComboBox_SetDateRange(@ptrCast(self), @ptrCast(minDate), @ptrCast(maxDate));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#resetDateRange)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ResetDateRange(self: ?*anyopaque) void {
        qtc.KDateComboBox_ResetDateRange(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setMinimumDate)
    ///
    /// ``` self: QtC.KDateComboBox, minDate: QtC.QDate ```
    pub fn SetMinimumDate(self: ?*anyopaque, minDate: ?*anyopaque) void {
        qtc.KDateComboBox_SetMinimumDate(@ptrCast(self), @ptrCast(minDate));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#resetMinimumDate)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ResetMinimumDate(self: ?*anyopaque) void {
        qtc.KDateComboBox_ResetMinimumDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setMaximumDate)
    ///
    /// ``` self: QtC.KDateComboBox, maxDate: QtC.QDate ```
    pub fn SetMaximumDate(self: ?*anyopaque, maxDate: ?*anyopaque) void {
        qtc.KDateComboBox_SetMaximumDate(@ptrCast(self), @ptrCast(maxDate));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#resetMaximumDate)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ResetMaximumDate(self: ?*anyopaque) void {
        qtc.KDateComboBox_ResetMaximumDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setDateMap)
    ///
    /// ``` self: QtC.KDateComboBox, dateMap: map_qtcqdate_constu8, allocator: std.mem.Allocator ```
    pub fn SetDateMap(self: ?*anyopaque, dateMap: map_qtcqdate_constu8, allocator: std.mem.Allocator) void {
        const dateMap_keys = allocator.alloc(?*anyopaque, dateMap.count()) catch @panic("kdatecombobox.SetDateMap: Memory allocation failed");
        defer allocator.free(dateMap_keys);
        const dateMap_values = allocator.alloc([]const u8, dateMap.count()) catch @panic("kdatecombobox.SetDateMap: Memory allocation failed");
        defer allocator.free(dateMap_values);
        var i: usize = 0;
        var dateMap_it = dateMap.iterator();
        while (dateMap_it.next()) |entry| {
            const key = entry.key_ptr.*;
            dateMap_keys[i] = @intCast(key);
            dateMap_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const dateMap_map = qtc.libqt_map{
            .len = dateMap.count(),
            .keys = @ptrCast(dateMap_keys.ptr),
            .values = @ptrCast(dateMap_values.ptr),
        };
        qtc.KDateComboBox_SetDateMap(@ptrCast(self), dateMap_map);
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#eventFilter)
    ///
    /// ``` self: QtC.KDateComboBox, object: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDateComboBox_EventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, object: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDateComboBox_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, object: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, object: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDateComboBox_QBaseEventFilter(@ptrCast(self), @ptrCast(object), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#showPopup)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ShowPopup(self: ?*anyopaque) void {
        qtc.KDateComboBox_ShowPopup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#showPopup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnShowPopup(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDateComboBox_OnShowPopup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#showPopup)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseShowPopup(self: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseShowPopup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#hidePopup)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn HidePopup(self: ?*anyopaque) void {
        qtc.KDateComboBox_HidePopup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#hidePopup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnHidePopup(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDateComboBox_OnHidePopup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#hidePopup)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseHidePopup(self: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseHidePopup(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#mousePressEvent)
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#wheelEvent)
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#keyPressEvent)
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#focusInEvent)
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#focusOutEvent)
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#resizeEvent)
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#assignDate)
    ///
    /// ``` self: QtC.KDateComboBox, date: QtC.QDate ```
    pub fn AssignDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.KDateComboBox_AssignDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#assignDate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, date: QtC.QDate) callconv(.c) void ```
    pub fn OnAssignDate(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnAssignDate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#assignDate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDateComboBox, date: QtC.QDate ```
    pub fn QBaseAssignDate(self: ?*anyopaque, date: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseAssignDate(@ptrCast(self), @ptrCast(date));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KDateComboBox_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KDateComboBox_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setDateRange)
    ///
    /// ``` self: QtC.KDateComboBox, minDate: QtC.QDate, maxDate: QtC.QDate, minWarnMsg: []const u8 ```
    pub fn SetDateRange3(self: ?*anyopaque, minDate: ?*anyopaque, maxDate: ?*anyopaque, minWarnMsg: []const u8) void {
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        qtc.KDateComboBox_SetDateRange3(@ptrCast(self), @ptrCast(minDate), @ptrCast(maxDate), minWarnMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setDateRange)
    ///
    /// ``` self: QtC.KDateComboBox, minDate: QtC.QDate, maxDate: QtC.QDate, minWarnMsg: []const u8, maxWarnMsg: []const u8 ```
    pub fn SetDateRange4(self: ?*anyopaque, minDate: ?*anyopaque, maxDate: ?*anyopaque, minWarnMsg: []const u8, maxWarnMsg: []const u8) void {
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        const maxWarnMsg_str = qtc.libqt_string{
            .len = maxWarnMsg.len,
            .data = maxWarnMsg.ptr,
        };
        qtc.KDateComboBox_SetDateRange4(@ptrCast(self), @ptrCast(minDate), @ptrCast(maxDate), minWarnMsg_str, maxWarnMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setMinimumDate)
    ///
    /// ``` self: QtC.KDateComboBox, minDate: QtC.QDate, minWarnMsg: []const u8 ```
    pub fn SetMinimumDate2(self: ?*anyopaque, minDate: ?*anyopaque, minWarnMsg: []const u8) void {
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        qtc.KDateComboBox_SetMinimumDate2(@ptrCast(self), @ptrCast(minDate), minWarnMsg_str);
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#setMaximumDate)
    ///
    /// ``` self: QtC.KDateComboBox, maxDate: QtC.QDate, maxWarnMsg: []const u8 ```
    pub fn SetMaximumDate2(self: ?*anyopaque, maxDate: ?*anyopaque, maxWarnMsg: []const u8) void {
        const maxWarnMsg_str = qtc.libqt_string{
            .len = maxWarnMsg.len,
            .data = maxWarnMsg.ptr,
        };
        qtc.KDateComboBox_SetMaximumDate2(@ptrCast(self), @ptrCast(maxDate), maxWarnMsg_str);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxVisibleItems)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MaxVisibleItems(self: ?*anyopaque) i32 {
        return qtc.QComboBox_MaxVisibleItems(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxVisibleItems)
    ///
    /// ``` self: QtC.KDateComboBox, maxItems: i32 ```
    pub fn SetMaxVisibleItems(self: ?*anyopaque, maxItems: i32) void {
        qtc.QComboBox_SetMaxVisibleItems(@ptrCast(self), @intCast(maxItems));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#count)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QComboBox_Count(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMaxCount)
    ///
    /// ``` self: QtC.KDateComboBox, max: i32 ```
    pub fn SetMaxCount(self: ?*anyopaque, max: i32) void {
        qtc.QComboBox_SetMaxCount(@ptrCast(self), @intCast(max));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#maxCount)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MaxCount(self: ?*anyopaque) i32 {
        return qtc.QComboBox_MaxCount(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#duplicatesEnabled)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn DuplicatesEnabled(self: ?*anyopaque) bool {
        return qtc.QComboBox_DuplicatesEnabled(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setDuplicatesEnabled)
    ///
    /// ``` self: QtC.KDateComboBox, enable: bool ```
    pub fn SetDuplicatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QComboBox_SetDuplicatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setFrame)
    ///
    /// ``` self: QtC.KDateComboBox, frame: bool ```
    pub fn SetFrame(self: ?*anyopaque, frame: bool) void {
        qtc.QComboBox_SetFrame(@ptrCast(self), frame);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hasFrame)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn HasFrame(self: ?*anyopaque) bool {
        return qtc.QComboBox_HasFrame(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ``` self: QtC.KDateComboBox, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, data: QtC.QVariant ```
    pub fn FindData(self: ?*anyopaque, data: ?*anyopaque) i32 {
        return qtc.QComboBox_FindData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#insertPolicy)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qcombobox_enums.InsertPolicy ```
    pub fn InsertPolicy(self: ?*anyopaque) i32 {
        return qtc.QComboBox_InsertPolicy(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setInsertPolicy)
    ///
    /// ``` self: QtC.KDateComboBox, policy: qcombobox_enums.InsertPolicy ```
    pub fn SetInsertPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QComboBox_SetInsertPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeAdjustPolicy)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qcombobox_enums.SizeAdjustPolicy ```
    pub fn SizeAdjustPolicy(self: ?*anyopaque) i32 {
        return qtc.QComboBox_SizeAdjustPolicy(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setSizeAdjustPolicy)
    ///
    /// ``` self: QtC.KDateComboBox, policy: qcombobox_enums.SizeAdjustPolicy ```
    pub fn SetSizeAdjustPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QComboBox_SetSizeAdjustPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumContentsLength)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MinimumContentsLength(self: ?*anyopaque) i32 {
        return qtc.QComboBox_MinimumContentsLength(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setMinimumContentsLength)
    ///
    /// ``` self: QtC.KDateComboBox, characters: i32 ```
    pub fn SetMinimumContentsLength(self: ?*anyopaque, characters: i32) void {
        qtc.QComboBox_SetMinimumContentsLength(@ptrCast(self), @intCast(characters));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#iconSize)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QComboBox_IconSize(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setIconSize)
    ///
    /// ``` self: QtC.KDateComboBox, size: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QComboBox_SetIconSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setPlaceholderText)
    ///
    /// ``` self: QtC.KDateComboBox, placeholderText: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn PlaceholderText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_PlaceholderText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#isEditable)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsEditable(self: ?*anyopaque) bool {
        return qtc.QComboBox_IsEditable(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditable)
    ///
    /// ``` self: QtC.KDateComboBox, editable: bool ```
    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.QComboBox_SetEditable(@ptrCast(self), editable);
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setLineEdit)
    ///
    /// ``` self: QtC.KDateComboBox, edit: QtC.QLineEdit ```
    pub fn SetLineEdit(self: ?*anyopaque, edit: ?*anyopaque) void {
        qtc.QComboBox_SetLineEdit(@ptrCast(self), @ptrCast(edit));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#lineEdit)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn LineEdit(self: ?*anyopaque) QtC.QLineEdit {
        return qtc.QComboBox_LineEdit(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setValidator)
    ///
    /// ``` self: QtC.KDateComboBox, v: QtC.QValidator ```
    pub fn SetValidator(self: ?*anyopaque, v: ?*anyopaque) void {
        qtc.QComboBox_SetValidator(@ptrCast(self), @ptrCast(v));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#validator)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Validator(self: ?*anyopaque) QtC.QValidator {
        return qtc.QComboBox_Validator(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCompleter)
    ///
    /// ``` self: QtC.KDateComboBox, c: QtC.QCompleter ```
    pub fn SetCompleter(self: ?*anyopaque, c: ?*anyopaque) void {
        qtc.QComboBox_SetCompleter(@ptrCast(self), @ptrCast(c));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#completer)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Completer(self: ?*anyopaque) QtC.QCompleter {
        return qtc.QComboBox_Completer(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemDelegate)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ItemDelegate(self: ?*anyopaque) QtC.QAbstractItemDelegate {
        return qtc.QComboBox_ItemDelegate(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemDelegate)
    ///
    /// ``` self: QtC.KDateComboBox, delegate: QtC.QAbstractItemDelegate ```
    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QComboBox_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#model)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QComboBox_Model(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#rootModelIndex)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn RootModelIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QComboBox_RootModelIndex(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setRootModelIndex)
    ///
    /// ``` self: QtC.KDateComboBox, index: QtC.QModelIndex ```
    pub fn SetRootModelIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QComboBox_SetRootModelIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#modelColumn)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ModelColumn(self: ?*anyopaque) i32 {
        return qtc.QComboBox_ModelColumn(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModelColumn)
    ///
    /// ``` self: QtC.KDateComboBox, visibleColumn: i32 ```
    pub fn SetModelColumn(self: ?*anyopaque, visibleColumn: i32) void {
        qtc.QComboBox_SetModelColumn(@ptrCast(self), @intCast(visibleColumn));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndex)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn CurrentIndex(self: ?*anyopaque) i32 {
        return qtc.QComboBox_CurrentIndex(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentText)
    ///
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn CurrentText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_CurrentText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.CurrentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn CurrentData(self: ?*anyopaque) QtC.QVariant {
        return qtc.QComboBox_CurrentData(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemText)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32, allocator: std.mem.Allocator ```
    pub fn ItemText(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QComboBox_ItemText(@ptrCast(self), @intCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.ItemText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemIcon)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32 ```
    pub fn ItemIcon(self: ?*anyopaque, index: i32) QtC.QIcon {
        return qtc.QComboBox_ItemIcon(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32 ```
    pub fn ItemData(self: ?*anyopaque, index: i32) QtC.QVariant {
        return qtc.QComboBox_ItemData(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ``` self: QtC.KDateComboBox, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, icon: QtC.QIcon, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, texts: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddItems(self: ?*anyopaque, texts: [][]const u8, allocator: std.mem.Allocator) void {
        var texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("kdatecombobox.AddItems: Memory allocation failed");
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
    /// ``` self: QtC.KDateComboBox, index: i32, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, index: i32, icon: QtC.QIcon, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, index: i32, texts: [][]const u8, allocator: std.mem.Allocator ```
    pub fn InsertItems(self: ?*anyopaque, index: i32, texts: [][]const u8, allocator: std.mem.Allocator) void {
        var texts_arr = allocator.alloc(qtc.libqt_string, texts.len) catch @panic("kdatecombobox.InsertItems: Memory allocation failed");
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
    /// ``` self: QtC.KDateComboBox, index: i32 ```
    pub fn InsertSeparator(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_InsertSeparator(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#removeItem)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32 ```
    pub fn RemoveItem(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_RemoveItem(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemText)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, index: i32, icon: QtC.QIcon ```
    pub fn SetItemIcon(self: ?*anyopaque, index: i32, icon: ?*anyopaque) void {
        qtc.QComboBox_SetItemIcon(@ptrCast(self), @intCast(index), @ptrCast(icon));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setItemData)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32, value: QtC.QVariant ```
    pub fn SetItemData(self: ?*anyopaque, index: i32, value: ?*anyopaque) void {
        qtc.QComboBox_SetItemData(@ptrCast(self), @intCast(index), @ptrCast(value));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#view)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn View(self: ?*anyopaque) QtC.QAbstractItemView {
        return qtc.QComboBox_View(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setView)
    ///
    /// ``` self: QtC.KDateComboBox, itemView: QtC.QAbstractItemView ```
    pub fn SetView(self: ?*anyopaque, itemView: ?*anyopaque) void {
        qtc.QComboBox_SetView(@ptrCast(self), @ptrCast(itemView));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// ``` self: QtC.KDateComboBox, query: qnamespace_enums.InputMethodQuery, argument: QtC.QVariant ```
    pub fn InputMethodQuery2(self: ?*anyopaque, query: i64, argument: ?*anyopaque) QtC.QVariant {
        return qtc.QComboBox_InputMethodQuery2(@ptrCast(self), @intCast(query), @ptrCast(argument));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clear)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QComboBox_Clear(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#clearEditText)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ClearEditText(self: ?*anyopaque) void {
        qtc.QComboBox_ClearEditText(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setEditText)
    ///
    /// ``` self: QtC.KDateComboBox, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, index: i32 ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_SetCurrentIndex(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setCurrentText)
    ///
    /// ``` self: QtC.KDateComboBox, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, param1: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnEditTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_EditTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32 ```
    pub fn Activated(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_Activated(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#activated)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, index: i32) callconv(.c) void ```
    pub fn OnActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textActivated)
    ///
    /// ``` self: QtC.KDateComboBox, param1: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnTextActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32 ```
    pub fn Highlighted(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_Highlighted(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#highlighted)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, index: i32) callconv(.c) void ```
    pub fn OnHighlighted(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_Highlighted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#textHighlighted)
    ///
    /// ``` self: QtC.KDateComboBox, param1: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnTextHighlighted(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_TextHighlighted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32 ```
    pub fn CurrentIndexChanged(self: ?*anyopaque, index: i32) void {
        qtc.QComboBox_CurrentIndexChanged(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentIndexChanged)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, index: i32) callconv(.c) void ```
    pub fn OnCurrentIndexChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentIndexChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentTextChanged)
    ///
    /// ``` self: QtC.KDateComboBox, param1: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnCurrentTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QComboBox_Connect_CurrentTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findText)
    ///
    /// ``` self: QtC.KDateComboBox, text: []const u8, flags: flag of qnamespace_enums.MatchFlag ```
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
    /// ``` self: QtC.KDateComboBox, data: QtC.QVariant, role: i32 ```
    pub fn FindData2(self: ?*anyopaque, data: ?*anyopaque, role: i32) i32 {
        return qtc.QComboBox_FindData2(@ptrCast(self), @ptrCast(data), @intCast(role));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#findData)
    ///
    /// ``` self: QtC.KDateComboBox, data: QtC.QVariant, role: i32, flags: flag of qnamespace_enums.MatchFlag ```
    pub fn FindData3(self: ?*anyopaque, data: ?*anyopaque, role: i32, flags: i32) i32 {
        return qtc.QComboBox_FindData3(@ptrCast(self), @ptrCast(data), @intCast(role), @intCast(flags));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#currentData)
    ///
    /// ``` self: QtC.KDateComboBox, role: i32 ```
    pub fn CurrentData1(self: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QComboBox_CurrentData1(@ptrCast(self), @intCast(role));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#itemData)
    ///
    /// ``` self: QtC.KDateComboBox, index: i32, role: i32 ```
    pub fn ItemData2(self: ?*anyopaque, index: i32, role: i32) QtC.QVariant {
        return qtc.QComboBox_ItemData2(@ptrCast(self), @intCast(index), @intCast(role));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#addItem)
    ///
    /// ``` self: QtC.KDateComboBox, text: []const u8, userData: QtC.QVariant ```
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
    /// ``` self: QtC.KDateComboBox, icon: QtC.QIcon, text: []const u8, userData: QtC.QVariant ```
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
    /// ``` self: QtC.KDateComboBox, index: i32, text: []const u8, userData: QtC.QVariant ```
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
    /// ``` self: QtC.KDateComboBox, index: i32, icon: QtC.QIcon, text: []const u8, userData: QtC.QVariant ```
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
    /// ``` self: QtC.KDateComboBox, index: i32, value: QtC.QVariant, role: i32 ```
    pub fn SetItemData3(self: ?*anyopaque, index: i32, value: ?*anyopaque, role: i32) void {
        qtc.QComboBox_SetItemData3(@ptrCast(self), @intCast(index), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.KDateComboBox, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.KDateComboBox, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.KDateComboBox, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.KDateComboBox, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.KDateComboBox, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KDateComboBox, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KDateComboBox, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KDateComboBox, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KDateComboBox, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.KDateComboBox, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.KDateComboBox, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.KDateComboBox, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.KDateComboBox, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KDateComboBox, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KDateComboBox, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KDateComboBox, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KDateComboBox, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KDateComboBox, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KDateComboBox, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.KDateComboBox, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.KDateComboBox, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.KDateComboBox, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.KDateComboBox, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.KDateComboBox, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.KDateComboBox, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.KDateComboBox, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.KDateComboBox, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.KDateComboBox, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KDateComboBox, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KDateComboBox, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KDateComboBox, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KDateComboBox, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.KDateComboBox, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KDateComboBox, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.KDateComboBox, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.KDateComboBox, windowTitle: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, styleSheet: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.KDateComboBox, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.KDateComboBox, windowIconText: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.KDateComboBox, windowRole: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.KDateComboBox, filePath: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.KDateComboBox, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.KDateComboBox, toolTip: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.KDateComboBox, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.KDateComboBox, statusTip: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.KDateComboBox, whatsThis: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.KDateComboBox, name: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.KDateComboBox, description: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.KDateComboBox, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KDateComboBox, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.KDateComboBox, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.KDateComboBox ```
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
    /// ``` self: QtC.KDateComboBox, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.KDateComboBox, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KDateComboBox, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.KDateComboBox, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KDateComboBox, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KDateComboBox, id: i32 ```
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
    /// ``` self: QtC.KDateComboBox ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.KDateComboBox, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KDateComboBox, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KDateComboBox, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.KDateComboBox, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KDateComboBox, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KDateComboBox, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KDateComboBox, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KDateComboBox, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kdatecombobox.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.KDateComboBox, geometry: []u8 ```
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
    /// ``` self: QtC.KDateComboBox ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.KDateComboBox, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.KDateComboBox, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KDateComboBox, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KDateComboBox, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KDateComboBox, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KDateComboBox, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.KDateComboBox, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KDateComboBox, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KDateComboBox, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KDateComboBox, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KDateComboBox, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.KDateComboBox, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KDateComboBox, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.KDateComboBox, actions: []QtC.QAction ```
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
    /// ``` self: QtC.KDateComboBox, before: QtC.QAction, actions: []QtC.QAction ```
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
    /// ``` self: QtC.KDateComboBox, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.KDateComboBox, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("kdatecombobox.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KDateComboBox, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, icon: QtC.QIcon, text: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, text: []const u8, shortcut: QtC.QKeySequence ```
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
    /// ``` self: QtC.KDateComboBox, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
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
    /// ``` self: QtC.KDateComboBox ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.KDateComboBox, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KDateComboBox, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.KDateComboBox, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.KDateComboBox ```
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
    /// ``` self: QtC.KDateComboBox, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KDateComboBox, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KDateComboBox, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KDateComboBox, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.KDateComboBox, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.KDateComboBox, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.KDateComboBox, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.KDateComboBox, screen: QtC.QScreen ```
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
    /// ``` self: QtC.KDateComboBox, title: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KDateComboBox, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KDateComboBox, iconText: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KDateComboBox, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.KDateComboBox ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.KDateComboBox, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KDateComboBox, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KDateComboBox, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KDateComboBox, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KDateComboBox, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KDateComboBox, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KDateComboBox, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KDateComboBox, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KDateComboBox, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KDateComboBox, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KDateComboBox, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KDateComboBox, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KDateComboBox, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KDateComboBox, param1: qnamespace_enums.WidgetAttribute, on: bool ```
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
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatecombobox.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KDateComboBox, name: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KDateComboBox, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KDateComboBox, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KDateComboBox, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KDateComboBox, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KDateComboBox, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kdatecombobox.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KDateComboBox, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KDateComboBox, obj: QtC.QObject ```
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
    /// ``` self: QtC.KDateComboBox, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KDateComboBox ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KDateComboBox, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KDateComboBox, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KDateComboBox, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kdatecombobox.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdatecombobox.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KDateComboBox, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KDateComboBox, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KDateComboBox, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KDateComboBox, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.KDateComboBox ```
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
    /// ``` self: QtC.KDateComboBox, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.KDateComboBox_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, model: QtC.QAbstractItemModel ```
    pub fn QBaseSetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseSetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#setModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, model: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnSetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KDateComboBox_SizeHint(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KDateComboBox_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KDateComboBox_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KDateComboBox_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KDateComboBox_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KDateComboBox_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDateComboBox_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDateComboBox_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDateComboBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, param1: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.KDateComboBox_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, param1: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.KDateComboBox_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.KDateComboBox_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, e: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_PaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_QBasePaintEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, e: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_ShowEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseShowEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, e: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_HideEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseHideEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, e: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_MouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, e: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_KeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, e: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_ContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, e: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, e: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KDateComboBox_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, param1: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, option: QtC.QStyleOptionComboBox ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KDateComboBox_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, option: QtC.QStyleOptionComboBox ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QComboBox
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qcombobox.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, option: QtC.QStyleOptionComboBox) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.KDateComboBox_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.KDateComboBox_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KDateComboBox_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KDateComboBox_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KDateComboBox_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KDateComboBox_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KDateComboBox_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KDateComboBox_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KDateComboBox_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KDateComboBox_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KDateComboBox_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KDateComboBox_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KDateComboBox_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KDateComboBox_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.KDateComboBox_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnTabletEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KDateComboBox_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KDateComboBox_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KDateComboBox_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KDateComboBox_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KDateComboBox_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KDateComboBox_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KDateComboBox_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KDateComboBox_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KDateComboBox_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.KDateComboBox_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KDateComboBox_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KDateComboBox_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.KDateComboBox_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KDateComboBox_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KDateComboBox_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KDateComboBox_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDateComboBox_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDateComboBox_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDateComboBox_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KDateComboBox_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDateComboBox_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.KDateComboBox_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDateComboBox_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.KDateComboBox_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.KDateComboBox_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDateComboBox_OnDestroy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.KDateComboBox_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.KDateComboBox_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KDateComboBox_OnFocusNextChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KDateComboBox_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KDateComboBox_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KDateComboBox_OnFocusPreviousChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KDateComboBox_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KDateComboBox_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KDateComboBox_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KDateComboBox_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KDateComboBox_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KDateComboBox_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDateComboBox_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDateComboBox_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDateComboBox_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KDateComboBox_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KDateComboBox_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDateComboBox_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KDateComboBox_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KDateComboBox_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.KDateComboBox_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDateComboBox, callback: *const fn (self: QtC.KDateComboBox, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdatecombobox.html#dtor.KDateComboBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KDateComboBox ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KDateComboBox_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kdatecombobox.html#types
pub const enums = struct {
    pub const Option = enum {
        pub const EditDate: i32 = 1;
        pub const SelectDate: i32 = 2;
        pub const DatePicker: i32 = 4;
        pub const DateKeywords: i32 = 8;
        pub const WarnOnInvalid: i32 = 16;
    };
};
