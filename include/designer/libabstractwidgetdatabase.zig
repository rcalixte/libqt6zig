const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html)
pub const QDesignerWidgetDataBaseItemInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerWidgetDataBaseItemInterface,

    pub const _is_QDesignerWidgetDataBaseItemInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerWidgetDataBaseItemInterface object in C++ memory
    ///
    pub fn new() QDesignerWidgetDataBaseItemInterface {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseItemInterface_new() };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onName` instead
    ///
    pub const OnName = onName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onName(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superName` instead
    ///
    pub const SuperName = superName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superName(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_SuperName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QDesignerWidgetDataBaseItemInterface, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onSetName` instead
    ///
    pub const OnSetName = onSetName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetName(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetName` instead
    ///
    pub const SuperSetName = superSetName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn superSetName(self: QDesignerWidgetDataBaseItemInterface, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onGroup` instead
    ///
    pub const OnGroup = onGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onGroup(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGroup` instead
    ///
    pub const SuperGroup = superGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superGroup(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_SuperGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setGroup` instead
    ///
    pub const SetGroup = setGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn setGroup(self: QDesignerWidgetDataBaseItemInterface, _group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `onSetGroup` instead
    ///
    pub const OnSetGroup = onSetGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, group: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetGroup(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGroup` instead
    ///
    pub const SuperSetGroup = superSetGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _group: []const u8 `
    ///
    pub fn superSetGroup(self: QDesignerWidgetDataBaseItemInterface, _group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onToolTip` instead
    ///
    pub const OnToolTip = onToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onToolTip(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnToolTip(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superToolTip` instead
    ///
    pub const SuperToolTip = superToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superToolTip(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_SuperToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QDesignerWidgetDataBaseItemInterface, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `onSetToolTip` instead
    ///
    pub const OnSetToolTip = onSetToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, toolTip: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetToolTip(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetToolTip(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetToolTip` instead
    ///
    pub const SuperSetToolTip = superSetToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn superSetToolTip(self: QDesignerWidgetDataBaseItemInterface, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onWhatsThis` instead
    ///
    pub const OnWhatsThis = onWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onWhatsThis(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnWhatsThis(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWhatsThis` instead
    ///
    pub const SuperWhatsThis = superWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superWhatsThis(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_SuperWhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QDesignerWidgetDataBaseItemInterface, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `onSetWhatsThis` instead
    ///
    pub const OnSetWhatsThis = onSetWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, whatsThis: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetWhatsThis(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetWhatsThis(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetWhatsThis` instead
    ///
    pub const SuperSetWhatsThis = superSetWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn superSetWhatsThis(self: QDesignerWidgetDataBaseItemInterface, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `includeFile` instead
    ///
    pub const IncludeFile = includeFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn includeFile(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_IncludeFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.includeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onIncludeFile` instead
    ///
    pub const OnIncludeFile = onIncludeFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onIncludeFile(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIncludeFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIncludeFile` instead
    ///
    pub const SuperIncludeFile = superIncludeFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superIncludeFile(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_SuperIncludeFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.includeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIncludeFile` instead
    ///
    pub const SetIncludeFile = setIncludeFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _includeFile: []const u8 `
    ///
    pub fn setIncludeFile(self: QDesignerWidgetDataBaseItemInterface, _includeFile: []const u8) void {
        const includeFile_str = qtc.libqt_string{
            .len = _includeFile.len,
            .data = _includeFile.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetIncludeFile(@ptrCast(self.ptr), includeFile_str);
    }

    /// ### DEPRECATED: Use `onSetIncludeFile` instead
    ///
    pub const OnSetIncludeFile = onSetIncludeFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, includeFile: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetIncludeFile(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetIncludeFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIncludeFile` instead
    ///
    pub const SuperSetIncludeFile = superSetIncludeFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _includeFile: []const u8 `
    ///
    pub fn superSetIncludeFile(self: QDesignerWidgetDataBaseItemInterface, _includeFile: []const u8) void {
        const includeFile_str = qtc.libqt_string{
            .len = _includeFile.len,
            .data = _includeFile.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetIncludeFile(@ptrCast(self.ptr), includeFile_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn icon(self: QDesignerWidgetDataBaseItemInterface) QIcon {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseItemInterface_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onIcon` instead
    ///
    pub const OnIcon = onIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QIcon `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIcon(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) QIcon) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIcon` instead
    ///
    pub const SuperIcon = superIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn superIcon(self: QDesignerWidgetDataBaseItemInterface) QIcon {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseItemInterface_SuperIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QDesignerWidgetDataBaseItemInterface, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QDesignerWidgetDataBaseItemInterface_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `onSetIcon` instead
    ///
    pub const OnSetIcon = onSetIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, icon: QIcon) callconv(.c) void `
    ///
    pub fn onSetIcon(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, QIcon) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIcon` instead
    ///
    pub const SuperSetIcon = superSetIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn superSetIcon(self: QDesignerWidgetDataBaseItemInterface, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `isCompat` instead
    ///
    pub const IsCompat = isCompat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn isCompat(self: QDesignerWidgetDataBaseItemInterface) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_IsCompat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsCompat` instead
    ///
    pub const OnIsCompat = onIsCompat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsCompat(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIsCompat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsCompat` instead
    ///
    pub const SuperIsCompat = superIsCompat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn superIsCompat(self: QDesignerWidgetDataBaseItemInterface) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_SuperIsCompat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCompat` instead
    ///
    pub const SetCompat = setCompat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` compat: bool `
    ///
    pub fn setCompat(self: QDesignerWidgetDataBaseItemInterface, compat: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetCompat(@ptrCast(self.ptr), compat);
    }

    /// ### DEPRECATED: Use `onSetCompat` instead
    ///
    pub const OnSetCompat = onSetCompat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, compat: bool) callconv(.c) void `
    ///
    pub fn onSetCompat(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, bool) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetCompat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCompat` instead
    ///
    pub const SuperSetCompat = superSetCompat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` compat: bool `
    ///
    pub fn superSetCompat(self: QDesignerWidgetDataBaseItemInterface, compat: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetCompat(@ptrCast(self.ptr), compat);
    }

    /// ### DEPRECATED: Use `isContainer` instead
    ///
    pub const IsContainer = isContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn isContainer(self: QDesignerWidgetDataBaseItemInterface) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_IsContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsContainer` instead
    ///
    pub const OnIsContainer = onIsContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsContainer(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIsContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsContainer` instead
    ///
    pub const SuperIsContainer = superIsContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn superIsContainer(self: QDesignerWidgetDataBaseItemInterface) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_SuperIsContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContainer` instead
    ///
    pub const SetContainer = setContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` container: bool `
    ///
    pub fn setContainer(self: QDesignerWidgetDataBaseItemInterface, container: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetContainer(@ptrCast(self.ptr), container);
    }

    /// ### DEPRECATED: Use `onSetContainer` instead
    ///
    pub const OnSetContainer = onSetContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, container: bool) callconv(.c) void `
    ///
    pub fn onSetContainer(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, bool) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetContainer` instead
    ///
    pub const SuperSetContainer = superSetContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` container: bool `
    ///
    pub fn superSetContainer(self: QDesignerWidgetDataBaseItemInterface, container: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetContainer(@ptrCast(self.ptr), container);
    }

    /// ### DEPRECATED: Use `isCustom` instead
    ///
    pub const IsCustom = isCustom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn isCustom(self: QDesignerWidgetDataBaseItemInterface) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_IsCustom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsCustom` instead
    ///
    pub const OnIsCustom = onIsCustom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsCustom(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIsCustom(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsCustom` instead
    ///
    pub const SuperIsCustom = superIsCustom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn superIsCustom(self: QDesignerWidgetDataBaseItemInterface) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_SuperIsCustom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCustom` instead
    ///
    pub const SetCustom = setCustom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` custom: bool `
    ///
    pub fn setCustom(self: QDesignerWidgetDataBaseItemInterface, custom: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetCustom(@ptrCast(self.ptr), custom);
    }

    /// ### DEPRECATED: Use `onSetCustom` instead
    ///
    pub const OnSetCustom = onSetCustom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, custom: bool) callconv(.c) void `
    ///
    pub fn onSetCustom(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, bool) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetCustom(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCustom` instead
    ///
    pub const SuperSetCustom = superSetCustom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` custom: bool `
    ///
    pub fn superSetCustom(self: QDesignerWidgetDataBaseItemInterface, custom: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetCustom(@ptrCast(self.ptr), custom);
    }

    /// ### DEPRECATED: Use `pluginPath` instead
    ///
    pub const PluginPath = pluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pluginPath(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_PluginPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.pluginPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onPluginPath` instead
    ///
    pub const OnPluginPath = onPluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onPluginPath(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnPluginPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPluginPath` instead
    ///
    pub const SuperPluginPath = superPluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superPluginPath(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_SuperPluginPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.pluginPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPluginPath` instead
    ///
    pub const SetPluginPath = setPluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setPluginPath(self: QDesignerWidgetDataBaseItemInterface, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetPluginPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `onSetPluginPath` instead
    ///
    pub const OnSetPluginPath = onSetPluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, path: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetPluginPath(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetPluginPath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPluginPath` instead
    ///
    pub const SuperSetPluginPath = superSetPluginPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` path: []const u8 `
    ///
    pub fn superSetPluginPath(self: QDesignerWidgetDataBaseItemInterface, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetPluginPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `isPromoted` instead
    ///
    pub const IsPromoted = isPromoted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn isPromoted(self: QDesignerWidgetDataBaseItemInterface) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_IsPromoted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsPromoted` instead
    ///
    pub const OnIsPromoted = onIsPromoted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsPromoted(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIsPromoted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsPromoted` instead
    ///
    pub const SuperIsPromoted = superIsPromoted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn superIsPromoted(self: QDesignerWidgetDataBaseItemInterface) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_SuperIsPromoted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPromoted` instead
    ///
    pub const SetPromoted = setPromoted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` b: bool `
    ///
    pub fn setPromoted(self: QDesignerWidgetDataBaseItemInterface, b: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetPromoted(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onSetPromoted` instead
    ///
    pub const OnSetPromoted = onSetPromoted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, b: bool) callconv(.c) void `
    ///
    pub fn onSetPromoted(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, bool) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetPromoted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPromoted` instead
    ///
    pub const SuperSetPromoted = superSetPromoted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` b: bool `
    ///
    pub fn superSetPromoted(self: QDesignerWidgetDataBaseItemInterface, b: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetPromoted(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `extends` instead
    ///
    pub const Extends = extends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extends(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_Extends(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.extends: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onExtends` instead
    ///
    pub const OnExtends = onExtends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onExtends(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnExtends(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExtends` instead
    ///
    pub const SuperExtends = superExtends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superExtends(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_SuperExtends(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseItemInterface.extends: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setExtends` instead
    ///
    pub const SetExtends = setExtends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` s: []const u8 `
    ///
    pub fn setExtends(self: QDesignerWidgetDataBaseItemInterface, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetExtends(@ptrCast(self.ptr), s_str);
    }

    /// ### DEPRECATED: Use `onSetExtends` instead
    ///
    pub const OnSetExtends = onSetExtends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, s: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetExtends(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetExtends(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetExtends` instead
    ///
    pub const SuperSetExtends = superSetExtends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` s: []const u8 `
    ///
    pub fn superSetExtends(self: QDesignerWidgetDataBaseItemInterface, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetExtends(@ptrCast(self.ptr), s_str);
    }

    /// ### DEPRECATED: Use `setDefaultPropertyValues` instead
    ///
    pub const SetDefaultPropertyValues = setDefaultPropertyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` list: []QVariant `
    ///
    pub fn setDefaultPropertyValues(self: QDesignerWidgetDataBaseItemInterface, list: []QVariant) void {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues(@ptrCast(self.ptr), list_list);
    }

    /// ### DEPRECATED: Use `onSetDefaultPropertyValues` instead
    ///
    pub const OnSetDefaultPropertyValues = onSetDefaultPropertyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseItemInterface, list: qtc.libqt_list ([]QVariant)) callconv(.c) void `
    ///
    pub fn onSetDefaultPropertyValues(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn (QDesignerWidgetDataBaseItemInterface, qtc.libqt_list) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetDefaultPropertyValues(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDefaultPropertyValues` instead
    ///
    pub const SuperSetDefaultPropertyValues = superSetDefaultPropertyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` list: []QVariant `
    ///
    pub fn superSetDefaultPropertyValues(self: QDesignerWidgetDataBaseItemInterface, list: []QVariant) void {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SuperSetDefaultPropertyValues(@ptrCast(self.ptr), list_list);
    }

    /// ### DEPRECATED: Use `defaultPropertyValues` instead
    ///
    pub const DefaultPropertyValues = defaultPropertyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultPropertyValues(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QDesignerWidgetDataBaseItemInterface.defaultPropertyValues: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onDefaultPropertyValues` instead
    ///
    pub const OnDefaultPropertyValues = onDefaultPropertyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QVariant `
    ///
    pub fn onDefaultPropertyValues(self: QDesignerWidgetDataBaseItemInterface, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnDefaultPropertyValues(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDefaultPropertyValues` instead
    ///
    pub const SuperDefaultPropertyValues = superDefaultPropertyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superDefaultPropertyValues(self: QDesignerWidgetDataBaseItemInterface, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QDesignerWidgetDataBaseItemInterface_SuperDefaultPropertyValues(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QDesignerWidgetDataBaseItemInterface.defaultPropertyValues: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#dtor.QDesignerWidgetDataBaseItemInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn delete(self: QDesignerWidgetDataBaseItemInterface) void {
        qtc.QDesignerWidgetDataBaseItemInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html)
pub const QDesignerWidgetDataBaseInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerWidgetDataBaseInterface,

    pub const _is_QDesignerWidgetDataBaseInterface = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerWidgetDataBaseInterface object in C++ memory
    ///
    pub fn new() QDesignerWidgetDataBaseInterface {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesignerWidgetDataBaseInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QDesignerWidgetDataBaseInterface {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn metaObject(self: QDesignerWidgetDataBaseInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDesignerWidgetDataBaseInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerWidgetDataBaseInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn superMetaObject(self: QDesignerWidgetDataBaseInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDesignerWidgetDataBaseInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerWidgetDataBaseInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDesignerWidgetDataBaseInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerWidgetDataBaseInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QDesignerWidgetDataBaseInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QDesignerWidgetDataBaseInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn count(self: QDesignerWidgetDataBaseInterface) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onCount(self: QDesignerWidgetDataBaseInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn superCount(self: QDesignerWidgetDataBaseInterface) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn item(self: QDesignerWidgetDataBaseInterface, index: i32) QDesignerWidgetDataBaseItemInterface {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_Item(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onItem` instead
    ///
    pub const OnItem = onItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, index: i32) callconv(.c) QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn onItem(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, i32) callconv(.c) QDesignerWidgetDataBaseItemInterface) void {
        qtc.QDesignerWidgetDataBaseInterface_OnItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItem` instead
    ///
    pub const SuperItem = superItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn superItem(self: QDesignerWidgetDataBaseInterface, index: i32) QDesignerWidgetDataBaseItemInterface {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_SuperItem(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _item: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn indexOf(self: QDesignerWidgetDataBaseInterface, _item: anytype) i32 {
        comptime _ = @TypeOf(_item)._is_QDesignerWidgetDataBaseItemInterface;
        return qtc.QDesignerWidgetDataBaseInterface_IndexOf(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf` instead
    ///
    pub const OnIndexOf = onIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, item: QDesignerWidgetDataBaseItemInterface) callconv(.c) i32 `
    ///
    pub fn onIndexOf(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QDesignerWidgetDataBaseItemInterface) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOf` instead
    ///
    pub const SuperIndexOf = superIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _item: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn superIndexOf(self: QDesignerWidgetDataBaseInterface, _item: anytype) i32 {
        comptime _ = @TypeOf(_item)._is_QDesignerWidgetDataBaseItemInterface;
        return qtc.QDesignerWidgetDataBaseInterface_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` index: i32 `
    ///
    /// ` _item: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn insert(self: QDesignerWidgetDataBaseInterface, index: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QDesignerWidgetDataBaseItemInterface;
        qtc.QDesignerWidgetDataBaseInterface_Insert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onInsert` instead
    ///
    pub const OnInsert = onInsert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, index: i32, item: QDesignerWidgetDataBaseItemInterface) callconv(.c) void `
    ///
    pub fn onInsert(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, i32, QDesignerWidgetDataBaseItemInterface) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnInsert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsert` instead
    ///
    pub const SuperInsert = superInsert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` index: i32 `
    ///
    /// ` _item: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn superInsert(self: QDesignerWidgetDataBaseInterface, index: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QDesignerWidgetDataBaseItemInterface;
        qtc.QDesignerWidgetDataBaseInterface_SuperInsert(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _item: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn append(self: QDesignerWidgetDataBaseInterface, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QDesignerWidgetDataBaseItemInterface;
        qtc.QDesignerWidgetDataBaseInterface_Append(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onAppend` instead
    ///
    pub const OnAppend = onAppend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, item: QDesignerWidgetDataBaseItemInterface) callconv(.c) void `
    ///
    pub fn onAppend(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QDesignerWidgetDataBaseItemInterface) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnAppend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAppend` instead
    ///
    pub const SuperAppend = superAppend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _item: QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn superAppend(self: QDesignerWidgetDataBaseInterface, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QDesignerWidgetDataBaseItemInterface;
        qtc.QDesignerWidgetDataBaseInterface_SuperAppend(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `indexOfObject` instead
    ///
    pub const IndexOfObject = indexOfObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    /// ` resolveName: bool `
    ///
    pub fn indexOfObject(self: QDesignerWidgetDataBaseInterface, object: anytype, resolveName: bool) i32 {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDesignerWidgetDataBaseInterface_IndexOfObject(@ptrCast(self.ptr), @ptrCast(object.ptr), resolveName);
    }

    /// ### DEPRECATED: Use `onIndexOfObject` instead
    ///
    pub const OnIndexOfObject = onIndexOfObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, object: QObject, resolveName: bool) callconv(.c) i32 `
    ///
    pub fn onIndexOfObject(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QObject, bool) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnIndexOfObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOfObject` instead
    ///
    pub const SuperIndexOfObject = superIndexOfObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    /// ` resolveName: bool `
    ///
    pub fn superIndexOfObject(self: QDesignerWidgetDataBaseInterface, object: anytype, resolveName: bool) i32 {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDesignerWidgetDataBaseInterface_SuperIndexOfObject(@ptrCast(self.ptr), @ptrCast(object.ptr), resolveName);
    }

    /// ### DEPRECATED: Use `indexOfClassName` instead
    ///
    pub const IndexOfClassName = indexOfClassName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` className: []const u8 `
    ///
    /// ` resolveName: bool `
    ///
    pub fn indexOfClassName(self: QDesignerWidgetDataBaseInterface, className: []const u8, resolveName: bool) i32 {
        const className_str = qtc.libqt_string{
            .len = className.len,
            .data = className.ptr,
        };
        return qtc.QDesignerWidgetDataBaseInterface_IndexOfClassName(@ptrCast(self.ptr), className_str, resolveName);
    }

    /// ### DEPRECATED: Use `onIndexOfClassName` instead
    ///
    pub const OnIndexOfClassName = onIndexOfClassName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, className: [*:0]const u8, resolveName: bool) callconv(.c) i32 `
    ///
    pub fn onIndexOfClassName(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, [*:0]const u8, bool) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnIndexOfClassName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOfClassName` instead
    ///
    pub const SuperIndexOfClassName = superIndexOfClassName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` className: []const u8 `
    ///
    /// ` resolveName: bool `
    ///
    pub fn superIndexOfClassName(self: QDesignerWidgetDataBaseInterface, className: []const u8, resolveName: bool) i32 {
        const className_str = qtc.libqt_string{
            .len = className.len,
            .data = className.ptr,
        };
        return qtc.QDesignerWidgetDataBaseInterface_SuperIndexOfClassName(@ptrCast(self.ptr), className_str, resolveName);
    }

    /// ### DEPRECATED: Use `core` instead
    ///
    pub const Core = core;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn core(self: QDesignerWidgetDataBaseInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCore` instead
    ///
    pub const OnCore = onCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QDesignerFormEditorInterface `
    ///
    pub fn onCore(self: QDesignerWidgetDataBaseInterface, callback: *const fn () callconv(.c) QDesignerFormEditorInterface) void {
        qtc.QDesignerWidgetDataBaseInterface_OnCore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCore` instead
    ///
    pub const SuperCore = superCore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn superCore(self: QDesignerWidgetDataBaseInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_SuperCore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isContainer` instead
    ///
    pub const IsContainer = isContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn isContainer(self: QDesignerWidgetDataBaseInterface, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDesignerWidgetDataBaseInterface_IsContainer(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `isCustom` instead
    ///
    pub const IsCustom = isCustom;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isCustom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    pub fn isCustom(self: QDesignerWidgetDataBaseInterface, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDesignerWidgetDataBaseInterface_IsCustom(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn changed(self: QDesignerWidgetDataBaseInterface) void {
        qtc.QDesignerWidgetDataBaseInterface_Changed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface) callconv(.c) void `
    ///
    pub fn onChanged(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseInterface.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseInterface.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isContainer2` instead
    ///
    pub const IsContainer2 = isContainer2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    /// ` resolveName: bool `
    ///
    pub fn isContainer2(self: QDesignerWidgetDataBaseInterface, object: anytype, resolveName: bool) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDesignerWidgetDataBaseInterface_IsContainer2(@ptrCast(self.ptr), @ptrCast(object.ptr), resolveName);
    }

    /// ### DEPRECATED: Use `isCustom2` instead
    ///
    pub const IsCustom2 = isCustom2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isCustom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QObject `
    ///
    /// ` resolveName: bool `
    ///
    pub fn isCustom2(self: QDesignerWidgetDataBaseInterface, object: anytype, resolveName: bool) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDesignerWidgetDataBaseInterface_IsCustom2(@ptrCast(self.ptr), @ptrCast(object.ptr), resolveName);
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDesignerWidgetDataBaseInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerWidgetDataBaseInterface.objectName: Memory allocation failed");
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: QDesignerWidgetDataBaseInterface, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn isWidgetType(self: QDesignerWidgetDataBaseInterface) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn isWindowType(self: QDesignerWidgetDataBaseInterface) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn isQuickItemType(self: QDesignerWidgetDataBaseInterface) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn signalsBlocked(self: QDesignerWidgetDataBaseInterface) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDesignerWidgetDataBaseInterface, b: bool) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn thread(self: QDesignerWidgetDataBaseInterface) QThread {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDesignerWidgetDataBaseInterface, _thread: anytype) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDesignerWidgetDataBaseInterface, interval: i32) i32 {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDesignerWidgetDataBaseInterface, time: i64) i32 {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDesignerWidgetDataBaseInterface, id: i32) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDesignerWidgetDataBaseInterface, id: i32) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDesignerWidgetDataBaseInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDesignerWidgetDataBaseInterface.children: Memory allocation failed");
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDesignerWidgetDataBaseInterface, _parent: anytype) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDesignerWidgetDataBaseInterface, filterObj: anytype) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDesignerWidgetDataBaseInterface, obj: anytype) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDesignerWidgetDataBaseInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn disconnect3(self: QDesignerWidgetDataBaseInterface) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDesignerWidgetDataBaseInterface, receiver: anytype) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn dumpObjectTree(self: QDesignerWidgetDataBaseInterface) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn dumpObjectInfo(self: QDesignerWidgetDataBaseInterface) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDesignerWidgetDataBaseInterface, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: QDesignerWidgetDataBaseInterface, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDesignerWidgetDataBaseInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerWidgetDataBaseInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerWidgetDataBaseInterface.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn bindingStorage(self: QDesignerWidgetDataBaseInterface) QBindingStorage {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn bindingStorage2(self: QDesignerWidgetDataBaseInterface) QBindingStorage {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn destroyed(self: QDesignerWidgetDataBaseInterface) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn parent(self: QDesignerWidgetDataBaseInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDesignerWidgetDataBaseInterface, classname: [:0]const u8) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn deleteLater(self: QDesignerWidgetDataBaseInterface) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDesignerWidgetDataBaseInterface, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDesignerWidgetDataBaseInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDesignerWidgetDataBaseInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDesignerWidgetDataBaseInterface, signal: [:0]const u8) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDesignerWidgetDataBaseInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDesignerWidgetDataBaseInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDesignerWidgetDataBaseInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDesignerWidgetDataBaseInterface, param1: anytype) void {
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDesignerWidgetDataBaseInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerWidgetDataBaseInterface_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDesignerWidgetDataBaseInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerWidgetDataBaseInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDesignerWidgetDataBaseInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerWidgetDataBaseInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDesignerWidgetDataBaseInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerWidgetDataBaseInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDesignerWidgetDataBaseInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerWidgetDataBaseInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDesignerWidgetDataBaseInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerWidgetDataBaseInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDesignerWidgetDataBaseInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerWidgetDataBaseInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDesignerWidgetDataBaseInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerWidgetDataBaseInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDesignerWidgetDataBaseInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerWidgetDataBaseInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDesignerWidgetDataBaseInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerWidgetDataBaseInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDesignerWidgetDataBaseInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerWidgetDataBaseInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDesignerWidgetDataBaseInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerWidgetDataBaseInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDesignerWidgetDataBaseInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerWidgetDataBaseInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDesignerWidgetDataBaseInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerWidgetDataBaseInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn sender(self: QDesignerWidgetDataBaseInterface) QObject {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn superSender(self: QDesignerWidgetDataBaseInterface) QObject {
        return .{ .ptr = qtc.QDesignerWidgetDataBaseInterface_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDesignerWidgetDataBaseInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerWidgetDataBaseInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn senderSignalIndex(self: QDesignerWidgetDataBaseInterface) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn superSenderSignalIndex(self: QDesignerWidgetDataBaseInterface) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDesignerWidgetDataBaseInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDesignerWidgetDataBaseInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerWidgetDataBaseInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDesignerWidgetDataBaseInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerWidgetDataBaseInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDesignerWidgetDataBaseInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerWidgetDataBaseInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDesignerWidgetDataBaseInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerWidgetDataBaseInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QDesignerWidgetDataBaseInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDesignerWidgetDataBaseInterface, callback: *const fn (QDesignerWidgetDataBaseInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#dtor.QDesignerWidgetDataBaseInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerWidgetDataBaseInterface `
    ///
    pub fn delete(self: QDesignerWidgetDataBaseInterface) void {
        qtc.QDesignerWidgetDataBaseInterface_Delete(@ptrCast(self.ptr));
    }
};
