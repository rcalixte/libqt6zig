const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html)
pub const QDesignerMemberSheetExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerMemberSheetExtension,

    pub const _is_QDesignerMemberSheetExtension = {};

    /// New constructs a new QDesignerMemberSheetExtension object.
    ///
    pub fn New() QDesignerMemberSheetExtension {
        return .{ .ptr = qtc.QDesignerMemberSheetExtension_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    pub fn Count(self: QDesignerMemberSheetExtension) i32 {
        return qtc.QDesignerMemberSheetExtension_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: QDesignerMemberSheetExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerMemberSheetExtension_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    pub fn SuperCount(self: QDesignerMemberSheetExtension) i32 {
        return qtc.QDesignerMemberSheetExtension_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IndexOf(self: QDesignerMemberSheetExtension, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerMemberSheetExtension_IndexOf(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, name: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerMemberSheetExtension_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperIndexOf(self: QDesignerMemberSheetExtension, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerMemberSheetExtension_SuperIndexOf(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn MemberName(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_MemberName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.MemberName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnMemberName(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnMemberName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperMemberName(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperMemberName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.MemberName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn MemberGroup(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_MemberGroup(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.MemberGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnMemberGroup(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnMemberGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperMemberGroup(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperMemberGroup(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.MemberGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetMemberGroup(self: QDesignerMemberSheetExtension, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerMemberSheetExtension_SetMemberGroup(@ptrCast(self.ptr), @bitCast(index), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setMemberGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32, group: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetMemberGroup(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerMemberSheetExtension_OnSetMemberGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SuperSetMemberGroup(self: QDesignerMemberSheetExtension, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerMemberSheetExtension_SuperSetMemberGroup(@ptrCast(self.ptr), @bitCast(index), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsVisible(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsVisible(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsVisible(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsVisible(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsVisible(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SetVisible(self: QDesignerMemberSheetExtension, index: i32, b: bool) void {
        qtc.QDesignerMemberSheetExtension_SetVisible(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#setVisible)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32, b: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32, bool) callconv(.c) void) void {
        qtc.QDesignerMemberSheetExtension_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    /// ` b: bool `
    ///
    pub fn SuperSetVisible(self: QDesignerMemberSheetExtension, index: i32, b: bool) void {
        qtc.QDesignerMemberSheetExtension_SuperSetVisible(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsSignal(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsSignal(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsSignal(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsSignal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsSignal(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsSignal(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn IsSlot(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsSlot(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnIsSlot(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsSlot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperIsSlot(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsSlot(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn InheritedFromWidget(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_InheritedFromWidget(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) bool `
    ///
    pub fn OnInheritedFromWidget(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnInheritedFromWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperInheritedFromWidget(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperInheritedFromWidget(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn DeclaredInClass(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_DeclaredInClass(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.DeclaredInClass: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnDeclaredInClass(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnDeclaredInClass(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperDeclaredInClass(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperDeclaredInClass(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.DeclaredInClass: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn Signature(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_Signature(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.Signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnSignature(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnSignature(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperSignature(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperSignature(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignermembersheetextension.Signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#parameterTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn ParameterTypes(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_ParameterTypes(@ptrCast(self.ptr), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) ?[*:null]?[*:0]u8 `
    ///
    pub fn OnParameterTypes(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) ?[*:null]?[*:0]u8) void {
        qtc.QDesignerMemberSheetExtension_OnParameterTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperParameterTypes(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_SuperParameterTypes(@ptrCast(self.ptr), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn ParameterNames(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_ParameterNames(@ptrCast(self.ptr), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) ?[*:null]?[*:0]u8 `
    ///
    pub fn OnParameterNames(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) ?[*:null]?[*:0]u8) void {
        qtc.QDesignerMemberSheetExtension_OnParameterNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperParameterNames(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_SuperParameterNames(@ptrCast(self.ptr), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QDesignerMemberSheetExtension `
    ///
    pub fn Delete(self: QDesignerMemberSheetExtension) void {
        qtc.QDesignerMemberSheetExtension_Delete(@ptrCast(self.ptr));
    }
};
