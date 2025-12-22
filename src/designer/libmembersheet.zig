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
        qtc.QDesignerMemberSheetExtension_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerMemberSheetExtension_QBaseCount(@ptrCast(self));
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
        qtc.QDesignerMemberSheetExtension_OnIndexOf(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseIndexOf(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerMemberSheetExtension_QBaseIndexOf(@ptrCast(self), name_str);
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
        var _str = qtc.QDesignerMemberSheetExtension_MemberName(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnMemberName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseMemberName(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_QBaseMemberName(@ptrCast(self), @intCast(index));
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
        var _str = qtc.QDesignerMemberSheetExtension_MemberGroup(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnMemberGroup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseMemberGroup(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_QBaseMemberGroup(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_SetMemberGroup(@ptrCast(self), @intCast(index), group_str);
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
        qtc.QDesignerMemberSheetExtension_OnSetMemberGroup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseSetMemberGroup(self: ?*anyopaque, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerMemberSheetExtension_QBaseSetMemberGroup(@ptrCast(self), @intCast(index), group_str);
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
        return qtc.QDesignerMemberSheetExtension_IsVisible(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnIsVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseIsVisible(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_QBaseIsVisible(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_SetVisible(@ptrCast(self), @intCast(index), b);
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
        qtc.QDesignerMemberSheetExtension_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseSetVisible(self: ?*anyopaque, index: i32, b: bool) void {
        qtc.QDesignerMemberSheetExtension_QBaseSetVisible(@ptrCast(self), @intCast(index), b);
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
        return qtc.QDesignerMemberSheetExtension_IsSignal(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnIsSignal(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseIsSignal(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_QBaseIsSignal(@ptrCast(self), @intCast(index));
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
        return qtc.QDesignerMemberSheetExtension_IsSlot(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnIsSlot(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseIsSlot(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_QBaseIsSlot(@ptrCast(self), @intCast(index));
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
        return qtc.QDesignerMemberSheetExtension_InheritedFromWidget(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnInheritedFromWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseInheritedFromWidget(self: ?*anyopaque, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_QBaseInheritedFromWidget(@ptrCast(self), @intCast(index));
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
        var _str = qtc.QDesignerMemberSheetExtension_DeclaredInClass(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnDeclaredInClass(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseDeclaredInClass(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_QBaseDeclaredInClass(@ptrCast(self), @intCast(index));
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
        var _str = qtc.QDesignerMemberSheetExtension_Signature(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnSignature(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseSignature(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_QBaseSignature(@ptrCast(self), @intCast(index));
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
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_ParameterTypes(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnParameterTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseParameterTypes(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_QBaseParameterTypes(@ptrCast(self), @intCast(index));
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
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_ParameterNames(@ptrCast(self), @intCast(index));
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
        qtc.QDesignerMemberSheetExtension_OnParameterNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

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
    pub fn QBaseParameterNames(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_QBaseParameterNames(@ptrCast(self), @intCast(index));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#dtor.QDesignerMemberSheetExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerMemberSheetExtension `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerMemberSheetExtension_Delete(@ptrCast(self));
    }
};
