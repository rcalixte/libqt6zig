const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html)
pub const qdesignermembersheetextension = struct {
    /// New constructs a new QDesignerMemberSheetExtension object.
    ///
    pub fn New() QtC.QDesignerMemberSheetExtension {
        return qtc.QDesignerMemberSheetExtension_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QDesignerMemberSheetExtension_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerMemberSheetExtension_OnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    pub fn SuperCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerMemberSheetExtension_SuperCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IndexOf(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerMemberSheetExtension_IndexOf(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, name: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerMemberSheetExtension_OnIndexOf(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf` instead
    ///
    pub const QBaseIndexOf = SuperIndexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperIndexOf(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerMemberSheetExtension_SuperIndexOf(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MemberName(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_MemberName(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.MemberName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnMemberName(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnMemberName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMemberName` instead
    ///
    pub const QBaseMemberName = SuperMemberName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMemberName(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperMemberName(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.MemberName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MemberGroup(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_MemberGroup(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.MemberGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnMemberGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnMemberGroup(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMemberGroup` instead
    ///
    pub const QBaseMemberGroup = SuperMemberGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMemberGroup(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperMemberGroup(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.MemberGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetMemberGroup(self: ?*anyopaque, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerMemberSheetExtension_SetMemberGroup(@ptrCast(self), @bitCast(index), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32, group: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetMemberGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerMemberSheetExtension_OnSetMemberGroup(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMemberGroup` instead
    ///
    pub const QBaseSetMemberGroup = SuperSetMemberGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SuperSetMemberGroup(self: ?*anyopaque, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerMemberSheetExtension_SuperSetMemberGroup(@ptrCast(self), @bitCast(index), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsVisible(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsVisible(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsVisible(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsVisible` instead
    ///
    pub const QBaseIsVisible = SuperIsVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsVisible(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsVisible(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, index: i32, b: bool) void {
        qtc.QDesignerMemberSheetExtension_SetVisible(@ptrCast(self), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32, b: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.QDesignerMemberSheetExtension_OnSetVisible(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SuperSetVisible(self: ?*anyopaque, index: i32, b: bool) void {
        qtc.QDesignerMemberSheetExtension_SuperSetVisible(@ptrCast(self), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsSignal(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsSignal(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsSignal(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsSignal(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsSignal` instead
    ///
    pub const QBaseIsSignal = SuperIsSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsSignal(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsSignal(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsSlot(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsSlot(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsSlot(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsSlot(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsSlot` instead
    ///
    pub const QBaseIsSlot = SuperIsSlot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsSlot(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsSlot(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn InheritedFromWidget(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_InheritedFromWidget(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnInheritedFromWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnInheritedFromWidget(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInheritedFromWidget` instead
    ///
    pub const QBaseInheritedFromWidget = SuperInheritedFromWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperInheritedFromWidget(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperInheritedFromWidget(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DeclaredInClass(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_DeclaredInClass(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.DeclaredInClass: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnDeclaredInClass(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnDeclaredInClass(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDeclaredInClass` instead
    ///
    pub const QBaseDeclaredInClass = SuperDeclaredInClass;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperDeclaredInClass(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperDeclaredInClass(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.DeclaredInClass: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Signature(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_Signature(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.Signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnSignature(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnSignature(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSignature` instead
    ///
    pub const QBaseSignature = SuperSignature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSignature(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperSignature(@ptrCast(self), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.Signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParameterTypes(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_ParameterTypes(@ptrCast(self), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignermembersheetextension.ParameterTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignermembersheetextension.ParameterTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) ?[*:null]?[*:0]u8 `
    ///
    pub fn OnParameterTypes(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) ?[*:null]?[*:0]u8) void {
        qtc.QDesignerMemberSheetExtension_OnParameterTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParameterTypes` instead
    ///
    pub const QBaseParameterTypes = SuperParameterTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperParameterTypes(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_SuperParameterTypes(@ptrCast(self), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignermembersheetextension.ParameterTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignermembersheetextension.ParameterTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParameterNames(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_ParameterNames(@ptrCast(self), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignermembersheetextension.ParameterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignermembersheetextension.ParameterNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerMemberSheetExtension, index: i32) callconv(.c) ?[*:null]?[*:0]u8 `
    ///
    pub fn OnParameterNames(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) ?[*:null]?[*:0]u8) void {
        qtc.QDesignerMemberSheetExtension_OnParameterNames(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParameterNames` instead
    ///
    pub const QBaseParameterNames = SuperParameterNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperParameterNames(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_SuperParameterNames(@ptrCast(self), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignermembersheetextension.ParameterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignermembersheetextension.ParameterNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#dtor.QDesignerMemberSheetExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerMemberSheetExtension_Delete(@ptrCast(self));
    }
};
