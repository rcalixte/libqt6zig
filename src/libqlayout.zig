const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlayout_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html)
pub const qlayout = struct {
    /// New constructs a new QLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn New(parent: ?*anyopaque) QtC.QLayout {
        return qtc.QLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QLayout object.
    ///
    pub fn New2() QtC.QLayout {
        return qtc.QLayout_new2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLayout_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QLayout_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLayout_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QLayout_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLayout_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLayout_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLayout_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QLayout_Spacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSpacing(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayout_OnSpacing(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSpacing` instead
    ///
    pub const QBaseSpacing = SuperSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperSpacing(self: ?*anyopaque) i32 {
        return qtc.QLayout_SuperSpacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QLayout_SetSpacing(@ptrCast(self), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, spacing: i32) callconv(.c) void `
    ///
    pub fn OnSetSpacing(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLayout_OnSetSpacing(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSpacing` instead
    ///
    pub const QBaseSetSpacing = SuperSetSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SuperSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QLayout_SuperSetSpacing(@ptrCast(self), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` margins: QtC.QMargins `
    ///
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` left: *i32 `
    ///
    /// ` top: *i32 `
    ///
    /// ` right: *i32 `
    ///
    /// ` bottom: *i32 `
    ///
    pub fn GetContentsMargins(self: ?*anyopaque, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i32) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` l: QtC.QLayout `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i32) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @bitCast(sizeConstraint));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ## Returns:
    ///
    /// ` qlayout_enums.SizeConstraint `
    ///
    pub fn SizeConstraint(self: ?*anyopaque) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn MenuBar(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QLayout_Invalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QLayout_OnInvalidate(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperInvalidate(self: ?*anyopaque) void {
        qtc.QLayout_SuperInvalidate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_Geometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRect `
    ///
    pub fn OnGeometry(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRect) void {
        qtc.QLayout_OnGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_SuperGeometry(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Activate(self: ?*anyopaque) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Update(self: ?*anyopaque) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: QtC.QLayoutItem) callconv(.c) void `
    ///
    pub fn OnAddItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddItem` instead
    ///
    pub const QBaseAddItem = SuperAddItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn SuperAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_SuperAddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn ExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QLayout_ExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExpandingDirections(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayout_OnExpandingDirections(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn SuperExpandingDirections(self: ?*anyopaque) i32 {
        return qtc.QLayout_SuperExpandingDirections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_MinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QLayout_OnMinimumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_SuperMinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_MaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnMaximumSize(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QLayout_OnMaximumSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_SuperMaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, geometry: QtC.QRect) callconv(.c) void `
    ///
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnSetGeometry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` geometry: QtC.QRect `
    ///
    pub fn SuperSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayout_SuperSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_ItemAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, index: i32) callconv(.c) QtC.QLayoutItem `
    ///
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnItemAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemAt` instead
    ///
    pub const QBaseItemAt = SuperItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_SuperItemAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn TakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_TakeAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, index: i32) callconv(.c) QtC.QLayoutItem `
    ///
    pub fn OnTakeAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnTakeAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTakeAt` instead
    ///
    pub const QBaseTakeAt = SuperTakeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperTakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_SuperTakeAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: QtC.QWidget) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf` instead
    ///
    pub const QBaseIndexOf = SuperIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn SuperIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_SuperIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: QtC.QLayoutItem) callconv(.c) i32 `
    ///
    pub fn OnIndexOf2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf2` instead
    ///
    pub const QBaseIndexOf2 = SuperIndexOf2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QLayoutItem `
    ///
    pub fn SuperIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QLayout_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayout_OnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperCount(self: ?*anyopaque) i32 {
        return qtc.QLayout_SuperCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsEmpty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QLayout_OnIsEmpty(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperIsEmpty(self: ?*anyopaque) bool {
        return qtc.QLayout_SuperIsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn ControlTypes(self: ?*anyopaque) i32 {
        return qtc.QLayout_ControlTypes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnControlTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayout_OnControlTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn SuperControlTypes(self: ?*anyopaque) i32 {
        return qtc.QLayout_SuperControlTypes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` from: QtC.QWidget `
    ///
    /// ` to: QtC.QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i32) QtC.QLayoutItem {
        return qtc.QLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, from: QtC.QWidget, to: QtC.QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QtC.QLayoutItem `
    ///
    pub fn OnReplaceWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnReplaceWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReplaceWidget` instead
    ///
    pub const QBaseReplaceWidget = SuperReplaceWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` from: QtC.QWidget `
    ///
    /// ` to: QtC.QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn SuperReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i32) QtC.QLayoutItem {
        return qtc.QLayout_SuperReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn TotalMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn TotalMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn TotalSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QLayout_Layout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QLayout `
    ///
    pub fn OnLayout(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QLayout) void {
        qtc.QLayout_OnLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QLayout_SuperLayout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QtC.QWidget `
    ///
    /// ` s: QtC.QSize `
    ///
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnWidgetEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnWidgetEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidgetEvent` instead
    ///
    pub const QBaseWidgetEvent = SuperWidgetEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QEvent `
    ///
    pub fn SuperWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_SuperWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` e: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, e: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` e: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLayout_SuperChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` l: QtC.QLayout `
    ///
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, l: QtC.QLayout) callconv(.c) void `
    ///
    pub fn OnAddChildLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddChildLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddChildLayout` instead
    ///
    pub const QBaseAddChildLayout = SuperAddChildLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` l: QtC.QLayout `
    ///
    pub fn SuperAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QLayout_SuperAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, w: QtC.QWidget) callconv(.c) void `
    ///
    pub fn OnAddChildWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddChildWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddChildWidget` instead
    ///
    pub const QBaseAddChildWidget = SuperAddChildWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` w: QtC.QWidget `
    ///
    pub fn SuperAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SuperAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` layout: QtC.QLayout `
    ///
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, layout: QtC.QLayout) callconv(.c) bool `
    ///
    pub fn OnAdoptLayout(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnAdoptLayout(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAdoptLayout` instead
    ///
    pub const QBaseAdoptLayout = SuperAdoptLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` layout: QtC.QLayout `
    ///
    pub fn SuperAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QLayout_SuperAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: QtC.QRect) callconv(.c) QtC.QRect `
    ///
    pub fn OnAlignmentRect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QLayout_OnAlignmentRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAlignmentRect` instead
    ///
    pub const QBaseAlignmentRect = SuperAlignmentRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QRect `
    ///
    pub fn SuperAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_SuperAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLayout_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLayout_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLayout_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLayout_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLayout_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLayout_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_SizeHint(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_SuperSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSize `
    ///
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QLayout_OnSizeHint(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLayout_SuperHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QLayout_OnHasHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayout_HeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayout_SuperHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayout_OnHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayout_MinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayout_SuperMinimumHeightForWidth(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayout_OnMinimumHeightForWidth(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_Widget(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_SuperWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWidget `
    ///
    pub fn OnWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.QLayout_OnWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QLayout_SpacerItem(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QLayout_SuperSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QSpacerItem `
    ///
    pub fn OnSpacerItem(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QLayout_OnSpacerItem(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLayout_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLayout_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QLayout_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLayout_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLayout_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLayout_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QLayout_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLayout_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout`
    ///
    /// ` callback: *const fn (self: QtC.QLayout, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QLayout `
    ///
    /// ` callback: *const fn (self: QtC.QLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#dtor.QLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QLayout `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QLayout_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#public-types)
pub const enums = struct {
    pub const SizeConstraint = enum(i32) {
        pub const SetDefaultConstraint: i32 = 0;
        pub const SetNoConstraint: i32 = 1;
        pub const SetMinimumSize: i32 = 2;
        pub const SetFixedSize: i32 = 3;
        pub const SetMaximumSize: i32 = 4;
        pub const SetMinAndMaxSize: i32 = 5;
    };
};
