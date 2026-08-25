const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
const QModelIndex = @import("libqt6").QModelIndex;
const QModelRoleDataSpan = @import("libqt6").QModelRoleDataSpan;
const QObject = @import("libqt6").QObject;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractitemmodel_enums = @import("libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html)
pub const QStandardItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStandardItem,

    pub const _is_QStandardItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStandardItem object in C++ memory
    ///
    pub fn new() QStandardItem {
        return .{ .ptr = qtc.QStandardItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStandardItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(_text: []const u8) QStandardItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QStandardItem_new2(text_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStandardItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new3(_icon: anytype, _text: []const u8) QStandardItem {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QStandardItem_new3(@ptrCast(_icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStandardItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    pub fn new4(rows: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_new4(@bitCast(rows)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QStandardItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    pub fn new5(rows: i32, columns: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_new5(@bitCast(rows), @bitCast(columns)) };
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: QStandardItem, role: i32) QVariant {
        return .{ .ptr = qtc.QStandardItem_Data(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn (self: QStandardItem, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: QStandardItem, callback: *const fn (QStandardItem, i32) callconv(.c) QVariant) void {
        qtc.QStandardItem_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: QStandardItem, role: i32) QVariant {
        return .{ .ptr = qtc.QStandardItem_SuperData(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `multiData` instead
    ///
    pub const MultiData = multiData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn multiData(self: QStandardItem, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QStandardItem_MultiData(@ptrCast(self.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `onMultiData` instead
    ///
    pub const OnMultiData = onMultiData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn (self: QStandardItem, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn onMultiData(self: QStandardItem, callback: *const fn (QStandardItem, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QStandardItem_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMultiData` instead
    ///
    pub const SuperMultiData = superMultiData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn superMultiData(self: QStandardItem, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QStandardItem_SuperMultiData(@ptrCast(self.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setData(self: QStandardItem, value: anytype, role: i32) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QStandardItem_SetData(@ptrCast(self.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn (self: QStandardItem, value: QVariant, role: i32) callconv(.c) void `
    ///
    pub fn onSetData(self: QStandardItem, callback: *const fn (QStandardItem, QVariant, i32) callconv(.c) void) void {
        qtc.QStandardItem_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetData(self: QStandardItem, value: anytype, role: i32) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QStandardItem_SuperSetData(@ptrCast(self.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `clearData` instead
    ///
    pub const ClearData = clearData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#clearData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn clearData(self: QStandardItem) void {
        qtc.QStandardItem_ClearData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QStandardItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItem.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QStandardItem, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QStandardItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn icon(self: QStandardItem) QIcon {
        return .{ .ptr = qtc.QStandardItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QStandardItem, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QStandardItem_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QStandardItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QStandardItem, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QStandardItem_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QStandardItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItem.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QStandardItem, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QStandardItem_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QStandardItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItem.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QStandardItem, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QStandardItem_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn sizeHint(self: QStandardItem) QSize {
        return .{ .ptr = qtc.QStandardItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizeHint` instead
    ///
    pub const SetSizeHint = setSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _sizeHint: QSize `
    ///
    pub fn setSizeHint(self: QStandardItem, _sizeHint: anytype) void {
        comptime _ = @TypeOf(_sizeHint)._is_QSize;
        qtc.QStandardItem_SetSizeHint(@ptrCast(self.ptr), @ptrCast(_sizeHint.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn font(self: QStandardItem) QFont {
        return .{ .ptr = qtc.QStandardItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QStandardItem, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QStandardItem_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#textAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn textAlignment(self: QStandardItem) i32 {
        return qtc.QStandardItem_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _textAlignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment(self: QStandardItem, _textAlignment: i32) void {
        qtc.QStandardItem_SetTextAlignment(@ptrCast(self.ptr), @bitCast(_textAlignment));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn background(self: QStandardItem) QBrush {
        return .{ .ptr = qtc.QStandardItem_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QStandardItem, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QStandardItem_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn foreground(self: QStandardItem) QBrush {
        return .{ .ptr = qtc.QStandardItem_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QStandardItem, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QStandardItem_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `checkState` instead
    ///
    pub const CheckState = checkState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#checkState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CheckState `
    ///
    pub fn checkState(self: QStandardItem) i32 {
        return qtc.QStandardItem_CheckState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckState` instead
    ///
    pub const SetCheckState = setCheckState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setCheckState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _checkState: qnamespace_enums.CheckState `
    ///
    pub fn setCheckState(self: QStandardItem, _checkState: i32) void {
        qtc.QStandardItem_SetCheckState(@ptrCast(self.ptr), @bitCast(_checkState));
    }

    /// ### DEPRECATED: Use `accessibleText` instead
    ///
    pub const AccessibleText = accessibleText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#accessibleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleText(self: QStandardItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_AccessibleText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItem.accessibleText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleText` instead
    ///
    pub const SetAccessibleText = setAccessibleText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _accessibleText: []const u8 `
    ///
    pub fn setAccessibleText(self: QStandardItem, _accessibleText: []const u8) void {
        const accessibleText_str = qtc.libqt_string{
            .len = _accessibleText.len,
            .data = _accessibleText.ptr,
        };
        qtc.QStandardItem_SetAccessibleText(@ptrCast(self.ptr), accessibleText_str);
    }

    /// ### DEPRECATED: Use `accessibleDescription` instead
    ///
    pub const AccessibleDescription = accessibleDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QStandardItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStandardItem_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItem.accessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleDescription` instead
    ///
    pub const SetAccessibleDescription = setAccessibleDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _accessibleDescription: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QStandardItem, _accessibleDescription: []const u8) void {
        const accessibleDescription_str = qtc.libqt_string{
            .len = _accessibleDescription.len,
            .data = _accessibleDescription.ptr,
        };
        qtc.QStandardItem_SetAccessibleDescription(@ptrCast(self.ptr), accessibleDescription_str);
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: QStandardItem) i32 {
        return qtc.QStandardItem_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _flags: flag of qnamespace_enums.ItemFlag `
    ///
    pub fn setFlags(self: QStandardItem, _flags: i32) void {
        qtc.QStandardItem_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn isEnabled(self: QStandardItem) bool {
        return qtc.QStandardItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QStandardItem, enabled: bool) void {
        qtc.QStandardItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isEditable` instead
    ///
    pub const IsEditable = isEditable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn isEditable(self: QStandardItem) bool {
        return qtc.QStandardItem_IsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEditable` instead
    ///
    pub const SetEditable = setEditable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` editable: bool `
    ///
    pub fn setEditable(self: QStandardItem, editable: bool) void {
        qtc.QStandardItem_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `isSelectable` instead
    ///
    pub const IsSelectable = isSelectable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isSelectable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn isSelectable(self: QStandardItem) bool {
        return qtc.QStandardItem_IsSelectable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectable` instead
    ///
    pub const SetSelectable = setSelectable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setSelectable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` selectable: bool `
    ///
    pub fn setSelectable(self: QStandardItem, selectable: bool) void {
        qtc.QStandardItem_SetSelectable(@ptrCast(self.ptr), selectable);
    }

    /// ### DEPRECATED: Use `isCheckable` instead
    ///
    pub const IsCheckable = isCheckable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn isCheckable(self: QStandardItem) bool {
        return qtc.QStandardItem_IsCheckable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckable` instead
    ///
    pub const SetCheckable = setCheckable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` checkable: bool `
    ///
    pub fn setCheckable(self: QStandardItem, checkable: bool) void {
        qtc.QStandardItem_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `isAutoTristate` instead
    ///
    pub const IsAutoTristate = isAutoTristate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isAutoTristate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn isAutoTristate(self: QStandardItem) bool {
        return qtc.QStandardItem_IsAutoTristate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoTristate` instead
    ///
    pub const SetAutoTristate = setAutoTristate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setAutoTristate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` tristate: bool `
    ///
    pub fn setAutoTristate(self: QStandardItem, tristate: bool) void {
        qtc.QStandardItem_SetAutoTristate(@ptrCast(self.ptr), tristate);
    }

    /// ### DEPRECATED: Use `isUserTristate` instead
    ///
    pub const IsUserTristate = isUserTristate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isUserTristate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn isUserTristate(self: QStandardItem) bool {
        return qtc.QStandardItem_IsUserTristate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUserTristate` instead
    ///
    pub const SetUserTristate = setUserTristate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setUserTristate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` tristate: bool `
    ///
    pub fn setUserTristate(self: QStandardItem, tristate: bool) void {
        qtc.QStandardItem_SetUserTristate(@ptrCast(self.ptr), tristate);
    }

    /// ### DEPRECATED: Use `isDragEnabled` instead
    ///
    pub const IsDragEnabled = isDragEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn isDragEnabled(self: QStandardItem) bool {
        return qtc.QStandardItem_IsDragEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDragEnabled` instead
    ///
    pub const SetDragEnabled = setDragEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` dragEnabled: bool `
    ///
    pub fn setDragEnabled(self: QStandardItem, dragEnabled: bool) void {
        qtc.QStandardItem_SetDragEnabled(@ptrCast(self.ptr), dragEnabled);
    }

    /// ### DEPRECATED: Use `isDropEnabled` instead
    ///
    pub const IsDropEnabled = isDropEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#isDropEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn isDropEnabled(self: QStandardItem) bool {
        return qtc.QStandardItem_IsDropEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDropEnabled` instead
    ///
    pub const SetDropEnabled = setDropEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setDropEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` dropEnabled: bool `
    ///
    pub fn setDropEnabled(self: QStandardItem, dropEnabled: bool) void {
        qtc.QStandardItem_SetDropEnabled(@ptrCast(self.ptr), dropEnabled);
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn parent(self: QStandardItem) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `row` instead
    ///
    pub const Row = row;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn row(self: QStandardItem) i32 {
        return qtc.QStandardItem_Row(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `column` instead
    ///
    pub const Column = column;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#column)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn column(self: QStandardItem) i32 {
        return qtc.QStandardItem_Column(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn index(self: QStandardItem) QModelIndex {
        return .{ .ptr = qtc.QStandardItem_Index(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn model(self: QStandardItem) QStandardItemModel {
        return .{ .ptr = qtc.QStandardItem_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn rowCount(self: QStandardItem) i32 {
        return qtc.QStandardItem_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRowCount` instead
    ///
    pub const SetRowCount = setRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` rows: i32 `
    ///
    pub fn setRowCount(self: QStandardItem, rows: i32) void {
        qtc.QStandardItem_SetRowCount(@ptrCast(self.ptr), @bitCast(rows));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn columnCount(self: QStandardItem) i32 {
        return qtc.QStandardItem_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColumnCount` instead
    ///
    pub const SetColumnCount = setColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` columns: i32 `
    ///
    pub fn setColumnCount(self: QStandardItem, columns: i32) void {
        qtc.QStandardItem_SetColumnCount(@ptrCast(self.ptr), @bitCast(columns));
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn hasChildren(self: QStandardItem) bool {
        return qtc.QStandardItem_HasChildren(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    pub fn child(self: QStandardItem, _row: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_Child(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` item: QStandardItem `
    ///
    pub fn setChild(self: QStandardItem, _row: i32, _column: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QStandardItem;
        qtc.QStandardItem_SetChild(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `setChild2` instead
    ///
    pub const SetChild2 = setChild2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` item: QStandardItem `
    ///
    pub fn setChild2(self: QStandardItem, _row: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QStandardItem;
        qtc.QStandardItem_SetChild2(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn insertRow(self: QStandardItem, _row: i32, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_InsertRow(@ptrCast(self.ptr), @bitCast(_row), items_list);
    }

    /// ### DEPRECATED: Use `insertColumn` instead
    ///
    pub const InsertColumn = insertColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _column: i32 `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn insertColumn(self: QStandardItem, _column: i32, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_InsertColumn(@ptrCast(self.ptr), @bitCast(_column), items_list);
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn insertRows(self: QStandardItem, _row: i32, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_InsertRows(@ptrCast(self.ptr), @bitCast(_row), items_list);
    }

    /// ### DEPRECATED: Use `insertRows2` instead
    ///
    pub const InsertRows2 = insertRows2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn insertRows2(self: QStandardItem, _row: i32, count: i32) void {
        qtc.QStandardItem_InsertRows2(@ptrCast(self.ptr), @bitCast(_row), @bitCast(count));
    }

    /// ### DEPRECATED: Use `insertColumns` instead
    ///
    pub const InsertColumns = insertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _column: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn insertColumns(self: QStandardItem, _column: i32, count: i32) void {
        qtc.QStandardItem_InsertColumns(@ptrCast(self.ptr), @bitCast(_column), @bitCast(count));
    }

    /// ### DEPRECATED: Use `removeRow` instead
    ///
    pub const RemoveRow = removeRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    pub fn removeRow(self: QStandardItem, _row: i32) void {
        qtc.QStandardItem_RemoveRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `removeColumn` instead
    ///
    pub const RemoveColumn = removeColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _column: i32 `
    ///
    pub fn removeColumn(self: QStandardItem, _column: i32) void {
        qtc.QStandardItem_RemoveColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn removeRows(self: QStandardItem, _row: i32, count: i32) void {
        qtc.QStandardItem_RemoveRows(@ptrCast(self.ptr), @bitCast(_row), @bitCast(count));
    }

    /// ### DEPRECATED: Use `removeColumns` instead
    ///
    pub const RemoveColumns = removeColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#removeColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _column: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn removeColumns(self: QStandardItem, _column: i32, count: i32) void {
        qtc.QStandardItem_RemoveColumns(@ptrCast(self.ptr), @bitCast(_column), @bitCast(count));
    }

    /// ### DEPRECATED: Use `appendRow` instead
    ///
    pub const AppendRow = appendRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn appendRow(self: QStandardItem, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_AppendRow(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `appendRows` instead
    ///
    pub const AppendRows = appendRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#appendRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn appendRows(self: QStandardItem, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_AppendRows(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `appendColumn` instead
    ///
    pub const AppendColumn = appendColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#appendColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn appendColumn(self: QStandardItem, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItem_AppendColumn(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `insertRow2` instead
    ///
    pub const InsertRow2 = insertRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` item: QStandardItem `
    ///
    pub fn insertRow2(self: QStandardItem, _row: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QStandardItem;
        qtc.QStandardItem_InsertRow2(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `appendRow2` instead
    ///
    pub const AppendRow2 = appendRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` item: QStandardItem `
    ///
    pub fn appendRow2(self: QStandardItem, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QStandardItem;
        qtc.QStandardItem_AppendRow2(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `takeChild` instead
    ///
    pub const TakeChild = takeChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    pub fn takeChild(self: QStandardItem, _row: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_TakeChild(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `takeRow` instead
    ///
    pub const TakeRow = takeRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _row: i32 `
    ///
    pub fn takeRow(self: QStandardItem, allocator: std.mem.Allocator, _row: i32) []QStandardItem {
        const _arr: qtc.libqt_list = qtc.QStandardItem_TakeRow(@ptrCast(self.ptr), @bitCast(_row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStandardItem, _arr.len) catch @panic("QStandardItem.takeRow: Memory allocation failed");
        const _data_val: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `takeColumn` instead
    ///
    pub const TakeColumn = takeColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#takeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _column: i32 `
    ///
    pub fn takeColumn(self: QStandardItem, allocator: std.mem.Allocator, _column: i32) []QStandardItem {
        const _arr: qtc.libqt_list = qtc.QStandardItem_TakeColumn(@ptrCast(self.ptr), @bitCast(_column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStandardItem, _arr.len) catch @panic("QStandardItem.takeColumn: Memory allocation failed");
        const _data_val: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `sortChildren` instead
    ///
    pub const SortChildren = sortChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _column: i32 `
    ///
    pub fn sortChildren(self: QStandardItem, _column: i32) void {
        qtc.QStandardItem_SortChildren(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn clone(self: QStandardItem) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn () callconv(.c) QStandardItem `
    ///
    pub fn onClone(self: QStandardItem, callback: *const fn () callconv(.c) QStandardItem) void {
        qtc.QStandardItem_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn superClone(self: QStandardItem) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn type0(self: QStandardItem) i32 {
        return qtc.QStandardItem_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onType` instead
    ///
    pub const OnType = onType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#type)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onType(self: QStandardItem, callback: *const fn () callconv(.c) i32) void {
        qtc.QStandardItem_OnType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superType` instead
    ///
    pub const SuperType = superType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#type)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn superType(self: QStandardItem) i32 {
        return qtc.QStandardItem_SuperType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn read(self: QStandardItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QStandardItem_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn (self: QStandardItem, in: QDataStream) callconv(.c) void `
    ///
    pub fn onRead(self: QStandardItem, callback: *const fn (QStandardItem, QDataStream) callconv(.c) void) void {
        qtc.QStandardItem_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn superRead(self: QStandardItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QStandardItem_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn write(self: QStandardItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QStandardItem_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn (self: QStandardItem, out: QDataStream) callconv(.c) void `
    ///
    pub fn onWrite(self: QStandardItem, callback: *const fn (QStandardItem, QDataStream) callconv(.c) void) void {
        qtc.QStandardItem_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn superWrite(self: QStandardItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QStandardItem_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` other: QStandardItem `
    ///
    pub fn operatorLesser(self: QStandardItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QStandardItem;
        return qtc.QStandardItem_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onOperatorLesser` instead
    ///
    pub const OnOperatorLesser = onOperatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn (self: QStandardItem, other: QStandardItem) callconv(.c) bool `
    ///
    pub fn onOperatorLesser(self: QStandardItem, callback: *const fn (QStandardItem, QStandardItem) callconv(.c) bool) void {
        qtc.QStandardItem_OnOperatorLesser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOperatorLesser` instead
    ///
    pub const SuperOperatorLesser = superOperatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` other: QStandardItem `
    ///
    pub fn superOperatorLesser(self: QStandardItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QStandardItem;
        return qtc.QStandardItem_SuperOperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` other: QStandardItem `
    ///
    pub fn operatorAssign(self: QStandardItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStandardItem;
        qtc.QStandardItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onOperatorAssign` instead
    ///
    pub const OnOperatorAssign = onOperatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn (self: QStandardItem, other: QStandardItem) callconv(.c) void `
    ///
    pub fn onOperatorAssign(self: QStandardItem, callback: *const fn (QStandardItem, QStandardItem) callconv(.c) void) void {
        qtc.QStandardItem_OnOperatorAssign(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOperatorAssign` instead
    ///
    pub const SuperOperatorAssign = superOperatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` other: QStandardItem `
    ///
    pub fn superOperatorAssign(self: QStandardItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStandardItem;
        qtc.QStandardItem_SuperOperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `emitDataChanged` instead
    ///
    pub const EmitDataChanged = emitDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn emitDataChanged(self: QStandardItem) void {
        qtc.QStandardItem_EmitDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEmitDataChanged` instead
    ///
    pub const OnEmitDataChanged = onEmitDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEmitDataChanged(self: QStandardItem, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItem_OnEmitDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEmitDataChanged` instead
    ///
    pub const SuperEmitDataChanged = superEmitDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    pub fn superEmitDataChanged(self: QStandardItem) void {
        qtc.QStandardItem_SuperEmitDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `child2` instead
    ///
    pub const Child2 = child2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn child2(self: QStandardItem, _row: i32, _column: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_Child2(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `takeChild2` instead
    ///
    pub const TakeChild2 = takeChild2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn takeChild2(self: QStandardItem, _row: i32, _column: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItem_TakeChild2(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `sortChildren2` instead
    ///
    pub const SortChildren2 = sortChildren2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItem `
    ///
    /// ` _column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sortChildren2(self: QStandardItem, _column: i32, order: i32) void {
        qtc.QStandardItem_SortChildren2(@ptrCast(self.ptr), @bitCast(_column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditem.html#dtor.QStandardItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStandardItem `
    ///
    pub fn delete(self: QStandardItem) void {
        qtc.QStandardItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html)
pub const QStandardItemModel = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStandardItemModel,

    pub const _is_QStandardItemModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStandardItemModel object in C++ memory
    ///
    pub fn new() QStandardItemModel {
        return .{ .ptr = qtc.QStandardItemModel_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStandardItemModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    pub fn new2(rows: i32, columns: i32) QStandardItemModel {
        return .{ .ptr = qtc.QStandardItemModel_new2(@bitCast(rows), @bitCast(columns)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStandardItemModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QStandardItemModel {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QStandardItemModel_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStandardItemModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rows: i32 `
    ///
    /// ` columns: i32 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(rows: i32, columns: i32, _parent: anytype) QStandardItemModel {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QStandardItemModel_new4(@bitCast(rows), @bitCast(columns), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn metaObject(self: QStandardItemModel) QMetaObject {
        return .{ .ptr = qtc.QStandardItemModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QStandardItemModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QStandardItemModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superMetaObject(self: QStandardItemModel) QMetaObject {
        return .{ .ptr = qtc.QStandardItemModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QStandardItemModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStandardItemModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QStandardItemModel, callback: *const fn (QStandardItemModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QStandardItemModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QStandardItemModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStandardItemModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QStandardItemModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStandardItemModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QStandardItemModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStandardItemModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItemModel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setItemRoleNames` instead
    ///
    pub const SetItemRoleNames = setItemRoleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemRoleNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _roleNames: Map_i32_u8 `
    ///
    pub fn setItemRoleNames(self: QStandardItemModel, allocator: std.mem.Allocator, _roleNames: Map_i32_u8) void {
        const roleNames_count = _roleNames.count();
        const roleNames_keys = allocator.alloc(i32, roleNames_count) catch @panic("QStandardItemModel.setItemRoleNames: Memory allocation failed");
        defer allocator.free(roleNames_keys);
        const roleNames_values = allocator.alloc(qtc.libqt_string, roleNames_count) catch @panic("QStandardItemModel.setItemRoleNames: Memory allocation failed");
        defer allocator.free(roleNames_values);
        var i: usize = 0;
        var roleNames_it = _roleNames.iterator();
        while (roleNames_it.next()) |it_entry| : (i += 1) {
            const roleNames_key = it_entry.key_ptr.*;
            roleNames_keys[i] = @bitCast(roleNames_key);
            const value = it_entry.value_ptr.*;
            roleNames_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const roleNames_map = qtc.libqt_map{
            .len = roleNames_count,
            .keys = @ptrCast(roleNames_keys.ptr),
            .values = @ptrCast(roleNames_values.ptr),
        };
        qtc.QStandardItemModel_SetItemRoleNames(@ptrCast(self.ptr), roleNames_map);
    }

    /// ### DEPRECATED: Use `roleNames` instead
    ///
    pub const RoleNames = roleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn roleNames(self: QStandardItemModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QStandardItemModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QStandardItemModel.roleNames: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("QStandardItemModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onRoleNames` instead
    ///
    pub const OnRoleNames = onRoleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn onRoleNames(self: QStandardItemModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.QStandardItemModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRoleNames` instead
    ///
    pub const SuperRoleNames = superRoleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superRoleNames(self: QStandardItemModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QStandardItemModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QStandardItemModel.roleNames: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("QStandardItemModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn index(self: QStandardItemModel, _row: i32, _column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_Index(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndex` instead
    ///
    pub const OnIndex = onIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndex(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QStandardItemModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndex` instead
    ///
    pub const SuperIndex = superIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superIndex(self: QStandardItemModel, _row: i32, _column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_SuperIndex(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _child: QModelIndex `
    ///
    pub fn parent(self: QStandardItemModel, _child: anytype) QModelIndex {
        comptime _ = @TypeOf(_child)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_Parent(@ptrCast(self.ptr), @ptrCast(_child.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onParent(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QStandardItemModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _child: QModelIndex `
    ///
    pub fn superParent(self: QStandardItemModel, _child: anytype) QModelIndex {
        comptime _ = @TypeOf(_child)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_SuperParent(@ptrCast(self.ptr), @ptrCast(_child.ptr)) };
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn rowCount(self: QStandardItemModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_RowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRowCount` instead
    ///
    pub const OnRowCount = onRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onRowCount(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRowCount` instead
    ///
    pub const SuperRowCount = superRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRowCount(self: QStandardItemModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn columnCount(self: QStandardItemModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCount` instead
    ///
    pub const OnColumnCount = onColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onColumnCount(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superColumnCount` instead
    ///
    pub const SuperColumnCount = superColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superColumnCount(self: QStandardItemModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasChildren(self: QStandardItemModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_HasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onHasChildren` instead
    ///
    pub const OnHasChildren = onHasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onHasChildren(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasChildren` instead
    ///
    pub const SuperHasChildren = superHasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superHasChildren(self: QStandardItemModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: QStandardItemModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_Data(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.QStandardItemModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: QStandardItemModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_SuperData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `multiData` instead
    ///
    pub const MultiData = multiData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn multiData(self: QStandardItemModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QStandardItemModel_MultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `onMultiData` instead
    ///
    pub const OnMultiData = onMultiData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn onMultiData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QStandardItemModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMultiData` instead
    ///
    pub const SuperMultiData = superMultiData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn superMultiData(self: QStandardItemModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QStandardItemModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setData(self: QStandardItemModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QStandardItemModel_SetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetData(self: QStandardItemModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QStandardItemModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `clearItemData` instead
    ///
    pub const ClearItemData = clearItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn clearItemData(self: QStandardItemModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QStandardItemModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onClearItemData` instead
    ///
    pub const OnClearItemData = onClearItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onClearItemData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClearItemData` instead
    ///
    pub const SuperClearItemData = superClearItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superClearItemData(self: QStandardItemModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `headerData` instead
    ///
    pub const HeaderData = headerData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn headerData(self: QStandardItemModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QStandardItemModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onHeaderData` instead
    ///
    pub const OnHeaderData = onHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHeaderData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.QStandardItemModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeaderData` instead
    ///
    pub const SuperHeaderData = superHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn superHeaderData(self: QStandardItemModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QStandardItemModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `setHeaderData` instead
    ///
    pub const SetHeaderData = setHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setHeaderData(self: QStandardItemModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QStandardItemModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetHeaderData` instead
    ///
    pub const OnSetHeaderData = onSetHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetHeaderData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHeaderData` instead
    ///
    pub const SuperSetHeaderData = superSetHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetHeaderData(self: QStandardItemModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QStandardItemModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRows(self: QStandardItemModel, _row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_InsertRows(@ptrCast(self.ptr), @bitCast(_row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertRows` instead
    ///
    pub const OnInsertRows = onInsertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertRows(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsertRows` instead
    ///
    pub const SuperInsertRows = superInsertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertRows(self: QStandardItemModel, _row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(_row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `insertColumns` instead
    ///
    pub const InsertColumns = insertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumns(self: QStandardItemModel, _column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_InsertColumns(@ptrCast(self.ptr), @bitCast(_column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertColumns` instead
    ///
    pub const OnInsertColumns = onInsertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertColumns(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsertColumns` instead
    ///
    pub const SuperInsertColumns = superInsertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertColumns(self: QStandardItemModel, _column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(_column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRows(self: QStandardItemModel, _row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_RemoveRows(@ptrCast(self.ptr), @bitCast(_row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveRows` instead
    ///
    pub const OnRemoveRows = onRemoveRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveRows(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveRows` instead
    ///
    pub const SuperRemoveRows = superRemoveRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveRows(self: QStandardItemModel, _row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(_row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeColumns` instead
    ///
    pub const RemoveColumns = removeColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumns(self: QStandardItemModel, _column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(_column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveColumns` instead
    ///
    pub const OnRemoveColumns = onRemoveColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveColumns(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveColumns` instead
    ///
    pub const SuperRemoveColumns = superRemoveColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveColumns(self: QStandardItemModel, _column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(_column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: QStandardItemModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QStandardItemModel_Flags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onFlags(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn superFlags(self: QStandardItemModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: QStandardItemModel) i32 {
        return qtc.QStandardItemModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: QStandardItemModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QStandardItemModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: QStandardItemModel) i32 {
        return qtc.QStandardItemModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemData` instead
    ///
    pub const ItemData = itemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn itemData(self: QStandardItemModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QStandardItemModel_ItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QStandardItemModel.itemData: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onItemData` instead
    ///
    pub const OnItemData = onItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn onItemData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.QStandardItemModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemData` instead
    ///
    pub const SuperItemData = superItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superItemData(self: QStandardItemModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QStandardItemModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QStandardItemModel.itemData: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setItemData` instead
    ///
    pub const SetItemData = setItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn setItemData(self: QStandardItemModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("QStandardItemModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("QStandardItemModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QStandardItemModel_SetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `onSetItemData` instead
    ///
    pub const OnSetItemData = onSetItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn onSetItemData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetItemData` instead
    ///
    pub const SuperSetItemData = superSetItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn superSetItemData(self: QStandardItemModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("QStandardItemModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("QStandardItemModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QStandardItemModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn clear(self: QStandardItemModel) void {
        qtc.QStandardItemModel_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sort` instead
    ///
    pub const Sort = sort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sort(self: QStandardItemModel, _column: i32, order: i32) void {
        qtc.QStandardItemModel_Sort(@ptrCast(self.ptr), @bitCast(_column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `onSort` instead
    ///
    pub const OnSort = onSort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn onSort(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSort` instead
    ///
    pub const SuperSort = superSort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn superSort(self: QStandardItemModel, _column: i32, order: i32) void {
        qtc.QStandardItemModel_SuperSort(@ptrCast(self.ptr), @bitCast(_column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `itemFromIndex` instead
    ///
    pub const ItemFromIndex = itemFromIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn itemFromIndex(self: QStandardItemModel, _index: anytype) QStandardItem {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_ItemFromIndex(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `indexFromItem` instead
    ///
    pub const IndexFromItem = indexFromItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#indexFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn indexFromItem(self: QStandardItemModel, _item: anytype) QModelIndex {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        return .{ .ptr = qtc.QStandardItemModel_IndexFromItem(@ptrCast(self.ptr), @ptrCast(_item.ptr)) };
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    pub fn item(self: QStandardItemModel, _row: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_Item(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `setItem` instead
    ///
    pub const SetItem = setItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn setItem(self: QStandardItemModel, _row: i32, _column: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        qtc.QStandardItemModel_SetItem(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `setItem2` instead
    ///
    pub const SetItem2 = setItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn setItem2(self: QStandardItemModel, _row: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        qtc.QStandardItemModel_SetItem2(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `invisibleRootItem` instead
    ///
    pub const InvisibleRootItem = invisibleRootItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#invisibleRootItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn invisibleRootItem(self: QStandardItemModel) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_InvisibleRootItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `horizontalHeaderItem` instead
    ///
    pub const HorizontalHeaderItem = horizontalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#horizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    pub fn horizontalHeaderItem(self: QStandardItemModel, _column: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_HorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `setHorizontalHeaderItem` instead
    ///
    pub const SetHorizontalHeaderItem = setHorizontalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn setHorizontalHeaderItem(self: QStandardItemModel, _column: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        qtc.QStandardItemModel_SetHorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(_column), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `verticalHeaderItem` instead
    ///
    pub const VerticalHeaderItem = verticalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#verticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    pub fn verticalHeaderItem(self: QStandardItemModel, _row: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_VerticalHeaderItem(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `setVerticalHeaderItem` instead
    ///
    pub const SetVerticalHeaderItem = setVerticalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn setVerticalHeaderItem(self: QStandardItemModel, _row: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        qtc.QStandardItemModel_SetVerticalHeaderItem(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalHeaderLabels` instead
    ///
    pub const SetHorizontalHeaderLabels = setHorizontalHeaderLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setHorizontalHeaderLabels(self: QStandardItemModel, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QStandardItemModel.setHorizontalHeaderLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QStandardItemModel_SetHorizontalHeaderLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `setVerticalHeaderLabels` instead
    ///
    pub const SetVerticalHeaderLabels = setVerticalHeaderLabels;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn setVerticalHeaderLabels(self: QStandardItemModel, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QStandardItemModel.setVerticalHeaderLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QStandardItemModel_SetVerticalHeaderLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `setRowCount` instead
    ///
    pub const SetRowCount = setRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` rows: i32 `
    ///
    pub fn setRowCount(self: QStandardItemModel, rows: i32) void {
        qtc.QStandardItemModel_SetRowCount(@ptrCast(self.ptr), @bitCast(rows));
    }

    /// ### DEPRECATED: Use `setColumnCount` instead
    ///
    pub const SetColumnCount = setColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` columns: i32 `
    ///
    pub fn setColumnCount(self: QStandardItemModel, columns: i32) void {
        qtc.QStandardItemModel_SetColumnCount(@ptrCast(self.ptr), @bitCast(columns));
    }

    /// ### DEPRECATED: Use `appendRow` instead
    ///
    pub const AppendRow = appendRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn appendRow(self: QStandardItemModel, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItemModel_AppendRow(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `appendColumn` instead
    ///
    pub const AppendColumn = appendColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn appendColumn(self: QStandardItemModel, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItemModel_AppendColumn(@ptrCast(self.ptr), items_list);
    }

    /// ### DEPRECATED: Use `appendRow2` instead
    ///
    pub const AppendRow2 = appendRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn appendRow2(self: QStandardItemModel, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        qtc.QStandardItemModel_AppendRow2(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn insertRow(self: QStandardItemModel, _row: i32, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItemModel_InsertRow(@ptrCast(self.ptr), @bitCast(_row), items_list);
    }

    /// ### DEPRECATED: Use `insertColumn` instead
    ///
    pub const InsertColumn = insertColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` items: []QStandardItem `
    ///
    pub fn insertColumn(self: QStandardItemModel, _column: i32, items: []QStandardItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QStandardItemModel_InsertColumn(@ptrCast(self.ptr), @bitCast(_column), items_list);
    }

    /// ### DEPRECATED: Use `insertRow2` instead
    ///
    pub const InsertRow2 = insertRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn insertRow2(self: QStandardItemModel, _row: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        qtc.QStandardItemModel_InsertRow2(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `insertRow3` instead
    ///
    pub const InsertRow3 = insertRow3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    pub fn insertRow3(self: QStandardItemModel, _row: i32) bool {
        return qtc.QStandardItemModel_InsertRow3(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `insertColumn2` instead
    ///
    pub const InsertColumn2 = insertColumn2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    pub fn insertColumn2(self: QStandardItemModel, _column: i32) bool {
        return qtc.QStandardItemModel_InsertColumn2(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `takeItem` instead
    ///
    pub const TakeItem = takeItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    pub fn takeItem(self: QStandardItemModel, _row: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_TakeItem(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `takeRow` instead
    ///
    pub const TakeRow = takeRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _row: i32 `
    ///
    pub fn takeRow(self: QStandardItemModel, allocator: std.mem.Allocator, _row: i32) []QStandardItem {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_TakeRow(@ptrCast(self.ptr), @bitCast(_row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStandardItem, _arr.len) catch @panic("QStandardItemModel.takeRow: Memory allocation failed");
        const _data_val: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `takeColumn` instead
    ///
    pub const TakeColumn = takeColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _column: i32 `
    ///
    pub fn takeColumn(self: QStandardItemModel, allocator: std.mem.Allocator, _column: i32) []QStandardItem {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_TakeColumn(@ptrCast(self.ptr), @bitCast(_column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStandardItem, _arr.len) catch @panic("QStandardItemModel.takeColumn: Memory allocation failed");
        const _data_val: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `takeHorizontalHeaderItem` instead
    ///
    pub const TakeHorizontalHeaderItem = takeHorizontalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeHorizontalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    pub fn takeHorizontalHeaderItem(self: QStandardItemModel, _column: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_TakeHorizontalHeaderItem(@ptrCast(self.ptr), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `takeVerticalHeaderItem` instead
    ///
    pub const TakeVerticalHeaderItem = takeVerticalHeaderItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeVerticalHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    pub fn takeVerticalHeaderItem(self: QStandardItemModel, _row: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_TakeVerticalHeaderItem(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `itemPrototype` instead
    ///
    pub const ItemPrototype = itemPrototype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn itemPrototype(self: QStandardItemModel) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_ItemPrototype(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemPrototype` instead
    ///
    pub const SetItemPrototype = setItemPrototype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn setItemPrototype(self: QStandardItemModel, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        qtc.QStandardItemModel_SetItemPrototype(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `findItems` instead
    ///
    pub const FindItems = findItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn findItems(self: QStandardItemModel, allocator: std.mem.Allocator, _text: []const u8) []QStandardItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_FindItems(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStandardItem, _arr.len) catch @panic("QStandardItemModel.findItems: Memory allocation failed");
        const _data_val: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `sortRole` instead
    ///
    pub const SortRole = sortRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#sortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn sortRole(self: QStandardItemModel) i32 {
        return qtc.QStandardItemModel_SortRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortRole` instead
    ///
    pub const SetSortRole = setSortRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#setSortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` role: i32 `
    ///
    pub fn setSortRole(self: QStandardItemModel, role: i32) void {
        qtc.QStandardItemModel_SetSortRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: QStandardItemModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStandardItemModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStandardItemModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: QStandardItemModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QStandardItemModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: QStandardItemModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStandardItemModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStandardItemModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn mimeData(self: QStandardItemModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QStandardItemModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QStandardItemModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn superMimeData(self: QStandardItemModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QStandardItemModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn dropMimeData(self: QStandardItemModel, _data: anytype, action: i32, _row: i32, _column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superDropMimeData(self: QStandardItemModel, _data: anytype, action: i32, _row: i32, _column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `itemChanged` instead
    ///
    pub const ItemChanged = itemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _item: QStandardItem `
    ///
    pub fn itemChanged(self: QStandardItemModel, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QStandardItem;
        qtc.QStandardItemModel_ItemChanged(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemChanged` instead
    ///
    pub const OnItemChanged = onItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, item: QStandardItem) callconv(.c) void `
    ///
    pub fn onItemChanged(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QStandardItem) callconv(.c) void) void {
        qtc.QStandardItemModel_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItemModel.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItemModel.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `item2` instead
    ///
    pub const Item2 = item2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn item2(self: QStandardItemModel, _row: i32, _column: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_Item2(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `insertRow22` instead
    ///
    pub const InsertRow22 = insertRow22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRow22(self: QStandardItemModel, _row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_InsertRow22(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `insertColumn22` instead
    ///
    pub const InsertColumn22 = insertColumn22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumn22(self: QStandardItemModel, _column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_InsertColumn22(@ptrCast(self.ptr), @bitCast(_column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `takeItem2` instead
    ///
    pub const TakeItem2 = takeItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn takeItem2(self: QStandardItemModel, _row: i32, _column: i32) QStandardItem {
        return .{ .ptr = qtc.QStandardItemModel_TakeItem2(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `findItems2` instead
    ///
    pub const FindItems2 = findItems2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn findItems2(self: QStandardItemModel, allocator: std.mem.Allocator, _text: []const u8, _flags: i32) []QStandardItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_FindItems2(@ptrCast(self.ptr), text_str, @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStandardItem, _arr.len) catch @panic("QStandardItemModel.findItems2: Memory allocation failed");
        const _data_val: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `findItems3` instead
    ///
    pub const FindItems3 = findItems3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` _column: i32 `
    ///
    pub fn findItems3(self: QStandardItemModel, allocator: std.mem.Allocator, _text: []const u8, _flags: i32, _column: i32) []QStandardItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_FindItems3(@ptrCast(self.ptr), text_str, @bitCast(_flags), @bitCast(_column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStandardItem, _arr.len) catch @panic("QStandardItemModel.findItems3: Memory allocation failed");
        const _data_val: [*]QtC.QStandardItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `hasIndex` instead
    ///
    pub const HasIndex = hasIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn hasIndex(self: QStandardItemModel, _row: i32, _column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `removeRow` instead
    ///
    pub const RemoveRow = removeRow;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    pub fn removeRow(self: QStandardItemModel, _row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `removeColumn` instead
    ///
    pub const RemoveColumn = removeColumn;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    pub fn removeColumn(self: QStandardItemModel, _column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self.ptr), @bitCast(_column));
    }

    /// ### DEPRECATED: Use `moveRow` instead
    ///
    pub const MoveRow = moveRow;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRow(self: QStandardItemModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `moveColumn` instead
    ///
    pub const MoveColumn = moveColumn;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumn(self: QStandardItemModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `checkIndex` instead
    ///
    pub const CheckIndex = checkIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn checkIndex(self: QStandardItemModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn dataChanged(self: QStandardItemModel, topLeft: anytype, bottomRight: anytype) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr));
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `headerDataChanged` instead
    ///
    pub const HeaderDataChanged = headerDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn headerDataChanged(self: QStandardItemModel, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onHeaderDataChanged` instead
    ///
    pub const OnHeaderDataChanged = onHeaderDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onHeaderDataChanged(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged` instead
    ///
    pub const LayoutChanged = layoutChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn layoutChanged(self: QStandardItemModel) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutChanged` instead
    ///
    pub const OnLayoutChanged = onLayoutChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: QStandardItemModel, callback: *const fn (QStandardItemModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged` instead
    ///
    pub const LayoutAboutToBeChanged = layoutAboutToBeChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn layoutAboutToBeChanged(self: QStandardItemModel) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged` instead
    ///
    pub const OnLayoutAboutToBeChanged = onLayoutAboutToBeChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged(self: QStandardItemModel, callback: *const fn (QStandardItemModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasIndex3` instead
    ///
    pub const HasIndex3 = hasIndex3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasIndex3(self: QStandardItemModel, _row: i32, _column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeRow2` instead
    ///
    pub const RemoveRow2 = removeRow2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRow2(self: QStandardItemModel, _row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeColumn2` instead
    ///
    pub const RemoveColumn2 = removeColumn2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumn2(self: QStandardItemModel, _column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self.ptr), @bitCast(_column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `checkIndex2` instead
    ///
    pub const CheckIndex2 = checkIndex2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn checkIndex2(self: QStandardItemModel, _index: anytype, options: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `dataChanged3` instead
    ///
    pub const DataChanged3 = dataChanged3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged3(self: QStandardItemModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `onDataChanged3` instead
    ///
    pub const OnDataChanged3 = onDataChanged3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged3(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged1` instead
    ///
    pub const LayoutChanged1 = layoutChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutChanged1(self: QStandardItemModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// ### DEPRECATED: Use `onLayoutChanged1` instead
    ///
    pub const OnLayoutChanged1 = onLayoutChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutChanged1(self: QStandardItemModel, callback: *const fn (QStandardItemModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged2` instead
    ///
    pub const LayoutChanged2 = layoutChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutChanged2(self: QStandardItemModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onLayoutChanged2` instead
    ///
    pub const OnLayoutChanged2 = onLayoutChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutChanged2(self: QStandardItemModel, callback: *const fn (QStandardItemModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged1` instead
    ///
    pub const LayoutAboutToBeChanged1 = layoutAboutToBeChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutAboutToBeChanged1(self: QStandardItemModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged1` instead
    ///
    pub const OnLayoutAboutToBeChanged1 = onLayoutAboutToBeChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged1(self: QStandardItemModel, callback: *const fn (QStandardItemModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged2` instead
    ///
    pub const LayoutAboutToBeChanged2 = layoutAboutToBeChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutAboutToBeChanged2(self: QStandardItemModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged2` instead
    ///
    pub const OnLayoutAboutToBeChanged2 = onLayoutAboutToBeChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged2(self: QStandardItemModel, callback: *const fn (QStandardItemModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QStandardItemModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardItemModel.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QStandardItemModel, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn isWidgetType(self: QStandardItemModel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn isWindowType(self: QStandardItemModel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn isQuickItemType(self: QStandardItemModel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn signalsBlocked(self: QStandardItemModel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QStandardItemModel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn thread(self: QStandardItemModel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QStandardItemModel, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QStandardItemModel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QStandardItemModel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QStandardItemModel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QStandardItemModel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QStandardItemModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QStandardItemModel.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QStandardItemModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QStandardItemModel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QStandardItemModel, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QStandardItemModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn disconnect3(self: QStandardItemModel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QStandardItemModel, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn dumpObjectTree(self: QStandardItemModel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn dumpObjectInfo(self: QStandardItemModel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QStandardItemModel, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QStandardItemModel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QStandardItemModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QStandardItemModel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStandardItemModel.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn bindingStorage(self: QStandardItemModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn bindingStorage2(self: QStandardItemModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn destroyed(self: QStandardItemModel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QStandardItemModel, callback: *const fn (QStandardItemModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QStandardItemModel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn deleteLater(self: QStandardItemModel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QStandardItemModel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QStandardItemModel, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QStandardItemModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QStandardItemModel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QStandardItemModel, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QStandardItemModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QStandardItemModel, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QStandardItemModel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sibling` instead
    ///
    pub const Sibling = sibling;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn sibling(self: QStandardItemModel, _row: i32, _column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_Sibling(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `superSibling` instead
    ///
    pub const SuperSibling = superSibling;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn superSibling(self: QStandardItemModel, _row: i32, _column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_SuperSibling(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `onSibling` instead
    ///
    pub const OnSibling = onSibling;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSibling(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QStandardItemModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canDropMimeData` instead
    ///
    pub const CanDropMimeData = canDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canDropMimeData(self: QStandardItemModel, _data: anytype, action: i32, _row: i32, _column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superCanDropMimeData` instead
    ///
    pub const SuperCanDropMimeData = superCanDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanDropMimeData(self: QStandardItemModel, _data: anytype, action: i32, _row: i32, _column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanDropMimeData` instead
    ///
    pub const OnCanDropMimeData = onCanDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanDropMimeData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedDragActions` instead
    ///
    pub const SupportedDragActions = supportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDragActions(self: QStandardItemModel) i32 {
        return qtc.QStandardItemModel_SupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSupportedDragActions` instead
    ///
    pub const SuperSupportedDragActions = superSupportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDragActions(self: QStandardItemModel) i32 {
        return qtc.QStandardItemModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDragActions` instead
    ///
    pub const OnSupportedDragActions = onSupportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDragActions(self: QStandardItemModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QStandardItemModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveRows` instead
    ///
    pub const MoveRows = moveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRows(self: QStandardItemModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QStandardItemModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `superMoveRows` instead
    ///
    pub const SuperMoveRows = superMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn superMoveRows(self: QStandardItemModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `onMoveRows` instead
    ///
    pub const OnMoveRows = onMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveRows(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveColumns` instead
    ///
    pub const MoveColumns = moveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumns(self: QStandardItemModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QStandardItemModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `superMoveColumns` instead
    ///
    pub const SuperMoveColumns = superMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn superMoveColumns(self: QStandardItemModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `onMoveColumns` instead
    ///
    pub const OnMoveColumns = onMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveColumns(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fetchMore` instead
    ///
    pub const FetchMore = fetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn fetchMore(self: QStandardItemModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_FetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superFetchMore` instead
    ///
    pub const SuperFetchMore = superFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superFetchMore(self: QStandardItemModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFetchMore` instead
    ///
    pub const OnFetchMore = onFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn onFetchMore(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) void) void {
        qtc.QStandardItemModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canFetchMore` instead
    ///
    pub const CanFetchMore = canFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canFetchMore(self: QStandardItemModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superCanFetchMore` instead
    ///
    pub const SuperCanFetchMore = superCanFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanFetchMore(self: QStandardItemModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanFetchMore` instead
    ///
    pub const OnCanFetchMore = onCanFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanFetchMore(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `buddy` instead
    ///
    pub const Buddy = buddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn buddy(self: QStandardItemModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_Buddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `superBuddy` instead
    ///
    pub const SuperBuddy = superBuddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superBuddy(self: QStandardItemModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onBuddy` instead
    ///
    pub const OnBuddy = onBuddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBuddy(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QStandardItemModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn match(self: QStandardItemModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QStandardItemModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superMatch` instead
    ///
    pub const SuperMatch = superMatch;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn superMatch(self: QStandardItemModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QStandardItemModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onMatch` instead
    ///
    pub const OnMatch = onMatch;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onMatch(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QStandardItemModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `span` instead
    ///
    pub const Span = span;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn span(self: QStandardItemModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_Span(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpan` instead
    ///
    pub const SuperSpan = superSpan;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superSpan(self: QStandardItemModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QStandardItemModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpan` instead
    ///
    pub const OnSpan = onSpan;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, index: QModelIndex) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpan(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex) callconv(.c) QSize) void {
        qtc.QStandardItemModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `submit` instead
    ///
    pub const Submit = submit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn submit(self: QStandardItemModel) bool {
        return qtc.QStandardItemModel_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSubmit` instead
    ///
    pub const SuperSubmit = superSubmit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superSubmit(self: QStandardItemModel) bool {
        return qtc.QStandardItemModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubmit` instead
    ///
    pub const OnSubmit = onSubmit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSubmit(self: QStandardItemModel, callback: *const fn () callconv(.c) bool) void {
        qtc.QStandardItemModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `revert` instead
    ///
    pub const Revert = revert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn revert(self: QStandardItemModel) void {
        qtc.QStandardItemModel_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRevert` instead
    ///
    pub const SuperRevert = superRevert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superRevert(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRevert` instead
    ///
    pub const OnRevert = onRevert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRevert(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resetInternalData` instead
    ///
    pub const ResetInternalData = resetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn resetInternalData(self: QStandardItemModel) void {
        qtc.QStandardItemModel_ResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superResetInternalData` instead
    ///
    pub const SuperResetInternalData = superResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superResetInternalData(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResetInternalData` instead
    ///
    pub const OnResetInternalData = onResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onResetInternalData(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QStandardItemModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStandardItemModel_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QStandardItemModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStandardItemModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QEvent) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QStandardItemModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStandardItemModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QStandardItemModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStandardItemModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QStandardItemModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QStandardItemModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QStandardItemModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QStandardItemModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QTimerEvent) callconv(.c) void) void {
        qtc.QStandardItemModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QStandardItemModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QStandardItemModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QStandardItemModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QStandardItemModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QChildEvent) callconv(.c) void) void {
        qtc.QStandardItemModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QStandardItemModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStandardItemModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QStandardItemModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStandardItemModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QEvent) callconv(.c) void) void {
        qtc.QStandardItemModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QStandardItemModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStandardItemModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QStandardItemModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStandardItemModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QMetaMethod) callconv(.c) void) void {
        qtc.QStandardItemModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QStandardItemModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStandardItemModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QStandardItemModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStandardItemModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QMetaMethod) callconv(.c) void) void {
        qtc.QStandardItemModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createIndex` instead
    ///
    pub const CreateIndex = createIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn createIndex(self: QStandardItemModel, _row: i32, _column: i32) QModelIndex {
        return .{ .ptr = qtc.QStandardItemModel_CreateIndex(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `superCreateIndex` instead
    ///
    pub const SuperCreateIndex = superCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    pub fn superCreateIndex(self: QStandardItemModel, _row: i32, _column: i32) QModelIndex {
        return .{ .ptr = qtc.QStandardItemModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column)) };
    }

    /// ### DEPRECATED: Use `onCreateIndex` instead
    ///
    pub const OnCreateIndex = onCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateIndex(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QStandardItemModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `encodeData` instead
    ///
    pub const EncodeData = encodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn encodeData(self: QStandardItemModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QStandardItemModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `superEncodeData` instead
    ///
    pub const SuperEncodeData = superEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superEncodeData(self: QStandardItemModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QStandardItemModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `onEncodeData` instead
    ///
    pub const OnEncodeData = onEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn onEncodeData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.QStandardItemModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `decodeData` instead
    ///
    pub const DecodeData = decodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn decodeData(self: QStandardItemModel, _row: i32, _column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QStandardItemModel_DecodeData(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `superDecodeData` instead
    ///
    pub const SuperDecodeData = superDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _row: i32 `
    ///
    /// ` _column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superDecodeData(self: QStandardItemModel, _row: i32, _column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QStandardItemModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(_row), @bitCast(_column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `onDecodeData` instead
    ///
    pub const OnDecodeData = onDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn onDecodeData(self: QStandardItemModel, callback: *const fn (QStandardItemModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginInsertRows` instead
    ///
    pub const BeginInsertRows = beginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertRows(self: QStandardItemModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginInsertRows` instead
    ///
    pub const SuperBeginInsertRows = superBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertRows(self: QStandardItemModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginInsertRows` instead
    ///
    pub const OnBeginInsertRows = onBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertRows(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endInsertRows` instead
    ///
    pub const EndInsertRows = endInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn endInsertRows(self: QStandardItemModel) void {
        qtc.QStandardItemModel_EndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndInsertRows` instead
    ///
    pub const SuperEndInsertRows = superEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superEndInsertRows(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperEndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndInsertRows` instead
    ///
    pub const OnEndInsertRows = onEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertRows(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginRemoveRows` instead
    ///
    pub const BeginRemoveRows = beginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveRows(self: QStandardItemModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginRemoveRows` instead
    ///
    pub const SuperBeginRemoveRows = superBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveRows(self: QStandardItemModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginRemoveRows` instead
    ///
    pub const OnBeginRemoveRows = onBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveRows(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endRemoveRows` instead
    ///
    pub const EndRemoveRows = endRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn endRemoveRows(self: QStandardItemModel) void {
        qtc.QStandardItemModel_EndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndRemoveRows` instead
    ///
    pub const SuperEndRemoveRows = superEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superEndRemoveRows(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperEndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndRemoveRows` instead
    ///
    pub const OnEndRemoveRows = onEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveRows(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginMoveRows` instead
    ///
    pub const BeginMoveRows = beginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn beginMoveRows(self: QStandardItemModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QStandardItemModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `superBeginMoveRows` instead
    ///
    pub const SuperBeginMoveRows = superBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn superBeginMoveRows(self: QStandardItemModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `onBeginMoveRows` instead
    ///
    pub const OnBeginMoveRows = onBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveRows(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endMoveRows` instead
    ///
    pub const EndMoveRows = endMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn endMoveRows(self: QStandardItemModel) void {
        qtc.QStandardItemModel_EndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndMoveRows` instead
    ///
    pub const SuperEndMoveRows = superEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superEndMoveRows(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperEndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndMoveRows` instead
    ///
    pub const OnEndMoveRows = onEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveRows(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginInsertColumns` instead
    ///
    pub const BeginInsertColumns = beginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertColumns(self: QStandardItemModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginInsertColumns` instead
    ///
    pub const SuperBeginInsertColumns = superBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertColumns(self: QStandardItemModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginInsertColumns` instead
    ///
    pub const OnBeginInsertColumns = onBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertColumns(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endInsertColumns` instead
    ///
    pub const EndInsertColumns = endInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn endInsertColumns(self: QStandardItemModel) void {
        qtc.QStandardItemModel_EndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndInsertColumns` instead
    ///
    pub const SuperEndInsertColumns = superEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superEndInsertColumns(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperEndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndInsertColumns` instead
    ///
    pub const OnEndInsertColumns = onEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertColumns(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginRemoveColumns` instead
    ///
    pub const BeginRemoveColumns = beginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveColumns(self: QStandardItemModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginRemoveColumns` instead
    ///
    pub const SuperBeginRemoveColumns = superBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveColumns(self: QStandardItemModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QStandardItemModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginRemoveColumns` instead
    ///
    pub const OnBeginRemoveColumns = onBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveColumns(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endRemoveColumns` instead
    ///
    pub const EndRemoveColumns = endRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn endRemoveColumns(self: QStandardItemModel) void {
        qtc.QStandardItemModel_EndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndRemoveColumns` instead
    ///
    pub const SuperEndRemoveColumns = superEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superEndRemoveColumns(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndRemoveColumns` instead
    ///
    pub const OnEndRemoveColumns = onEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveColumns(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginMoveColumns` instead
    ///
    pub const BeginMoveColumns = beginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn beginMoveColumns(self: QStandardItemModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QStandardItemModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `superBeginMoveColumns` instead
    ///
    pub const SuperBeginMoveColumns = superBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn superBeginMoveColumns(self: QStandardItemModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QStandardItemModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `onBeginMoveColumns` instead
    ///
    pub const OnBeginMoveColumns = onBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveColumns(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endMoveColumns` instead
    ///
    pub const EndMoveColumns = endMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn endMoveColumns(self: QStandardItemModel) void {
        qtc.QStandardItemModel_EndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndMoveColumns` instead
    ///
    pub const SuperEndMoveColumns = superEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superEndMoveColumns(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperEndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndMoveColumns` instead
    ///
    pub const OnEndMoveColumns = onEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveColumns(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginResetModel` instead
    ///
    pub const BeginResetModel = beginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn beginResetModel(self: QStandardItemModel) void {
        qtc.QStandardItemModel_BeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBeginResetModel` instead
    ///
    pub const SuperBeginResetModel = superBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superBeginResetModel(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperBeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBeginResetModel` instead
    ///
    pub const OnBeginResetModel = onBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onBeginResetModel(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endResetModel` instead
    ///
    pub const EndResetModel = endResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn endResetModel(self: QStandardItemModel) void {
        qtc.QStandardItemModel_EndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndResetModel` instead
    ///
    pub const SuperEndResetModel = superEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superEndResetModel(self: QStandardItemModel) void {
        qtc.QStandardItemModel_SuperEndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndResetModel` instead
    ///
    pub const OnEndResetModel = onEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndResetModel(self: QStandardItemModel, callback: *const fn () callconv(.c) void) void {
        qtc.QStandardItemModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changePersistentIndex` instead
    ///
    pub const ChangePersistentIndex = changePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn changePersistentIndex(self: QStandardItemModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QStandardItemModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `superChangePersistentIndex` instead
    ///
    pub const SuperChangePersistentIndex = superChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn superChangePersistentIndex(self: QStandardItemModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QStandardItemModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `onChangePersistentIndex` instead
    ///
    pub const OnChangePersistentIndex = onChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn onChangePersistentIndex(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QStandardItemModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changePersistentIndexList` instead
    ///
    pub const ChangePersistentIndexList = changePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn changePersistentIndexList(self: QStandardItemModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QStandardItemModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `superChangePersistentIndexList` instead
    ///
    pub const SuperChangePersistentIndexList = superChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn superChangePersistentIndexList(self: QStandardItemModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QStandardItemModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `onChangePersistentIndexList` instead
    ///
    pub const OnChangePersistentIndexList = onChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn onChangePersistentIndexList(self: QStandardItemModel, callback: *const fn (QStandardItemModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.QStandardItemModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `persistentIndexList` instead
    ///
    pub const PersistentIndexList = persistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentIndexList(self: QStandardItemModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QStandardItemModel.persistentIndexList: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superPersistentIndexList` instead
    ///
    pub const SuperPersistentIndexList = superPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superPersistentIndexList(self: QStandardItemModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QStandardItemModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QStandardItemModel.persistentIndexList: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onPersistentIndexList` instead
    ///
    pub const OnPersistentIndexList = onPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onPersistentIndexList(self: QStandardItemModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QStandardItemModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn sender(self: QStandardItemModel) QObject {
        return .{ .ptr = qtc.QStandardItemModel_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superSender(self: QStandardItemModel) QObject {
        return .{ .ptr = qtc.QStandardItemModel_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QStandardItemModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.QStandardItemModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn senderSignalIndex(self: QStandardItemModel) i32 {
        return qtc.QStandardItemModel_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn superSenderSignalIndex(self: QStandardItemModel) i32 {
        return qtc.QStandardItemModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QStandardItemModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QStandardItemModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QStandardItemModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStandardItemModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QStandardItemModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStandardItemModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QStandardItemModel, callback: *const fn (QStandardItemModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.QStandardItemModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QStandardItemModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStandardItemModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QStandardItemModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStandardItemModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel`
    ///
    /// ` callback: *const fn (self: QStandardItemModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QMetaMethod) callconv(.c) bool) void {
        qtc.QStandardItemModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeInserted` instead
    ///
    pub const OnRowsAboutToBeInserted = onRowsAboutToBeInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeInserted(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeRemoved` instead
    ///
    pub const OnRowsAboutToBeRemoved = onRowsAboutToBeRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsRemoved` instead
    ///
    pub const OnRowsRemoved = onRowsRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeInserted` instead
    ///
    pub const OnColumnsAboutToBeInserted = onColumnsAboutToBeInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeInserted(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsInserted` instead
    ///
    pub const OnColumnsInserted = onColumnsInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsInserted(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeRemoved` instead
    ///
    pub const OnColumnsAboutToBeRemoved = onColumnsAboutToBeRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeRemoved(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsRemoved` instead
    ///
    pub const OnColumnsRemoved = onColumnsRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsRemoved(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onModelAboutToBeReset` instead
    ///
    pub const OnModelAboutToBeReset = onModelAboutToBeReset;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel) callconv(.c) void `
    ///
    pub fn onModelAboutToBeReset(self: QStandardItemModel, callback: *const fn (QStandardItemModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onModelReset` instead
    ///
    pub const OnModelReset = onModelReset;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel) callconv(.c) void `
    ///
    pub fn onModelReset(self: QStandardItemModel, callback: *const fn (QStandardItemModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeMoved` instead
    ///
    pub const OnRowsAboutToBeMoved = onRowsAboutToBeMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeMoved(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsMoved` instead
    ///
    pub const OnRowsMoved = onRowsMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsMoved(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeMoved` instead
    ///
    pub const OnColumnsAboutToBeMoved = onColumnsAboutToBeMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeMoved(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsMoved` instead
    ///
    pub const OnColumnsMoved = onColumnsMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsMoved(self: QStandardItemModel, callback: *const fn (QStandardItemModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStandardItemModel `
    ///
    /// ` callback: *const fn (self: QStandardItemModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QStandardItemModel, callback: *const fn (QStandardItemModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#dtor.QStandardItemModel)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStandardItemModel `
    ///
    pub fn delete(self: QStandardItemModel) void {
        qtc.QStandardItemModel_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstandarditemmodel.html#public-types)
pub const enums = struct {
    pub const ItemType = enum {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
