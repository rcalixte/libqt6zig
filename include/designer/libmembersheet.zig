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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerMemberSheetExtension object in C++ memory
    ///
    pub fn new() QDesignerMemberSheetExtension {
        return .{ .ptr = qtc.QDesignerMemberSheetExtension_new() };
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    pub fn count(self: QDesignerMemberSheetExtension) i32 {
        return qtc.QDesignerMemberSheetExtension_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

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
    pub fn onCount(self: QDesignerMemberSheetExtension, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerMemberSheetExtension_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    pub fn superCount(self: QDesignerMemberSheetExtension) i32 {
        return qtc.QDesignerMemberSheetExtension_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` name: []const u8 `
    ///
    pub fn indexOf(self: QDesignerMemberSheetExtension, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerMemberSheetExtension_IndexOf(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onIndexOf` instead
    ///
    pub const OnIndexOf = onIndexOf;

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
    pub fn onIndexOf(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerMemberSheetExtension_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOf` instead
    ///
    pub const SuperIndexOf = superIndexOf;

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
    pub fn superIndexOf(self: QDesignerMemberSheetExtension, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDesignerMemberSheetExtension_SuperIndexOf(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `memberName` instead
    ///
    pub const MemberName = memberName;

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
    pub fn memberName(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_MemberName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerMemberSheetExtension.memberName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onMemberName` instead
    ///
    pub const OnMemberName = onMemberName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onMemberName(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnMemberName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMemberName` instead
    ///
    pub const SuperMemberName = superMemberName;

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
    pub fn superMemberName(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperMemberName(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerMemberSheetExtension.memberName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `memberGroup` instead
    ///
    pub const MemberGroup = memberGroup;

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
    pub fn memberGroup(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_MemberGroup(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerMemberSheetExtension.memberGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onMemberGroup` instead
    ///
    pub const OnMemberGroup = onMemberGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#memberGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onMemberGroup(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnMemberGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMemberGroup` instead
    ///
    pub const SuperMemberGroup = superMemberGroup;

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
    pub fn superMemberGroup(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperMemberGroup(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerMemberSheetExtension.memberGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMemberGroup` instead
    ///
    pub const SetMemberGroup = setMemberGroup;

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
    pub fn setMemberGroup(self: QDesignerMemberSheetExtension, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerMemberSheetExtension_SetMemberGroup(@ptrCast(self.ptr), @bitCast(index), group_str);
    }

    /// ### DEPRECATED: Use `onSetMemberGroup` instead
    ///
    pub const OnSetMemberGroup = onSetMemberGroup;

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
    pub fn onSetMemberGroup(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerMemberSheetExtension_OnSetMemberGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMemberGroup` instead
    ///
    pub const SuperSetMemberGroup = superSetMemberGroup;

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
    pub fn superSetMemberGroup(self: QDesignerMemberSheetExtension, index: i32, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerMemberSheetExtension_SuperSetMemberGroup(@ptrCast(self.ptr), @bitCast(index), group_str);
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn isVisible(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsVisible(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIsVisible` instead
    ///
    pub const OnIsVisible = onIsVisible;

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
    pub fn onIsVisible(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsVisible` instead
    ///
    pub const SuperIsVisible = superIsVisible;

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
    pub fn superIsVisible(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsVisible(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

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
    pub fn setVisible(self: QDesignerMemberSheetExtension, index: i32, b: bool) void {
        qtc.QDesignerMemberSheetExtension_SetVisible(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### DEPRECATED: Use `onSetVisible` instead
    ///
    pub const OnSetVisible = onSetVisible;

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
    pub fn onSetVisible(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32, bool) callconv(.c) void) void {
        qtc.QDesignerMemberSheetExtension_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetVisible` instead
    ///
    pub const SuperSetVisible = superSetVisible;

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
    pub fn superSetVisible(self: QDesignerMemberSheetExtension, index: i32, b: bool) void {
        qtc.QDesignerMemberSheetExtension_SuperSetVisible(@ptrCast(self.ptr), @bitCast(index), b);
    }

    /// ### DEPRECATED: Use `isSignal` instead
    ///
    pub const IsSignal = isSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn isSignal(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsSignal(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIsSignal` instead
    ///
    pub const OnIsSignal = onIsSignal;

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
    pub fn onIsSignal(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsSignal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsSignal` instead
    ///
    pub const SuperIsSignal = superIsSignal;

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
    pub fn superIsSignal(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsSignal(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `isSlot` instead
    ///
    pub const IsSlot = isSlot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#isSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn isSlot(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_IsSlot(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIsSlot` instead
    ///
    pub const OnIsSlot = onIsSlot;

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
    pub fn onIsSlot(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnIsSlot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsSlot` instead
    ///
    pub const SuperIsSlot = superIsSlot;

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
    pub fn superIsSlot(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperIsSlot(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `inheritedFromWidget` instead
    ///
    pub const InheritedFromWidget = inheritedFromWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#inheritedFromWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` index: i32 `
    ///
    pub fn inheritedFromWidget(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_InheritedFromWidget(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onInheritedFromWidget` instead
    ///
    pub const OnInheritedFromWidget = onInheritedFromWidget;

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
    pub fn onInheritedFromWidget(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) bool) void {
        qtc.QDesignerMemberSheetExtension_OnInheritedFromWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInheritedFromWidget` instead
    ///
    pub const SuperInheritedFromWidget = superInheritedFromWidget;

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
    pub fn superInheritedFromWidget(self: QDesignerMemberSheetExtension, index: i32) bool {
        return qtc.QDesignerMemberSheetExtension_SuperInheritedFromWidget(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `declaredInClass` instead
    ///
    pub const DeclaredInClass = declaredInClass;

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
    pub fn declaredInClass(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_DeclaredInClass(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerMemberSheetExtension.declaredInClass: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onDeclaredInClass` instead
    ///
    pub const OnDeclaredInClass = onDeclaredInClass;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#declaredInClass)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onDeclaredInClass(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnDeclaredInClass(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDeclaredInClass` instead
    ///
    pub const SuperDeclaredInClass = superDeclaredInClass;

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
    pub fn superDeclaredInClass(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperDeclaredInClass(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerMemberSheetExtension.declaredInClass: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `signature` instead
    ///
    pub const Signature = signature;

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
    pub fn signature(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_Signature(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerMemberSheetExtension.signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onSignature` instead
    ///
    pub const OnSignature = onSignature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#signature)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    /// ` callback: *const fn (self: QDesignerMemberSheetExtension, index: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onSignature(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) [*:0]const u8) void {
        qtc.QDesignerMemberSheetExtension_OnSignature(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSignature` instead
    ///
    pub const SuperSignature = superSignature;

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
    pub fn superSignature(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.QDesignerMemberSheetExtension_SuperSignature(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerMemberSheetExtension.signature: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `parameterTypes` instead
    ///
    pub const ParameterTypes = parameterTypes;

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
    pub fn parameterTypes(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_ParameterTypes(@ptrCast(self.ptr), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerMemberSheetExtension.parameterTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerMemberSheetExtension.parameterTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onParameterTypes` instead
    ///
    pub const OnParameterTypes = onParameterTypes;

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
    pub fn onParameterTypes(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) ?[*:null]?[*:0]u8) void {
        qtc.QDesignerMemberSheetExtension_OnParameterTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParameterTypes` instead
    ///
    pub const SuperParameterTypes = superParameterTypes;

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
    pub fn superParameterTypes(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_SuperParameterTypes(@ptrCast(self.ptr), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerMemberSheetExtension.parameterTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerMemberSheetExtension.parameterTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `parameterNames` instead
    ///
    pub const ParameterNames = parameterNames;

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
    pub fn parameterNames(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_ParameterNames(@ptrCast(self.ptr), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerMemberSheetExtension.parameterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerMemberSheetExtension.parameterNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onParameterNames` instead
    ///
    pub const OnParameterNames = onParameterNames;

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
    pub fn onParameterNames(self: QDesignerMemberSheetExtension, callback: *const fn (QDesignerMemberSheetExtension, i32) callconv(.c) ?[*:null]?[*:0]u8) void {
        qtc.QDesignerMemberSheetExtension_OnParameterNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParameterNames` instead
    ///
    pub const SuperParameterNames = superParameterNames;

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
    pub fn superParameterNames(self: QDesignerMemberSheetExtension, allocator: std.mem.Allocator, index: i32) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QDesignerMemberSheetExtension_SuperParameterNames(@ptrCast(self.ptr), @bitCast(index));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerMemberSheetExtension.parameterNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerMemberSheetExtension.parameterNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignermembersheetextension.html#dtor.QDesignerMemberSheetExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerMemberSheetExtension `
    ///
    pub fn delete(self: QDesignerMemberSheetExtension) void {
        qtc.QDesignerMemberSheetExtension_Delete(@ptrCast(self.ptr));
    }
};
