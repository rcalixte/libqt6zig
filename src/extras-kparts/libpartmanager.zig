const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const partmanager_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kparts-partmanager.html
pub const kparts__partmanager = struct {
    /// New constructs a new KParts::PartManager object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.KParts__PartManager {
        return qtc.KParts__PartManager_new(@ptrCast(parent));
    }

    /// New2 constructs a new KParts::PartManager object.
    ///
    /// ``` topLevel: QtC.QWidget, parent: QtC.QObject ```
    pub fn New2(topLevel: ?*anyopaque, parent: ?*anyopaque) QtC.KParts__PartManager {
        return qtc.KParts__PartManager_new2(@ptrCast(topLevel), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KParts__PartManager_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KParts__PartManager, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__PartManager_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KParts__PartManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KParts__PartManager_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__PartManager_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KParts__PartManager_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KParts__PartManager_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partmanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setSelectionPolicy)
    ///
    /// ``` self: QtC.KParts__PartManager, policy: partmanager_enums.SelectionPolicy ```
    pub fn SetSelectionPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.KParts__PartManager_SetSelectionPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#selectionPolicy)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    ///
    /// Returns: ``` partmanager_enums.SelectionPolicy ```
    pub fn SelectionPolicy(self: ?*anyopaque) i32 {
        return qtc.KParts__PartManager_SelectionPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setAllowNestedParts)
    ///
    /// ``` self: QtC.KParts__PartManager, allow: bool ```
    pub fn SetAllowNestedParts(self: ?*anyopaque, allow: bool) void {
        qtc.KParts__PartManager_SetAllowNestedParts(@ptrCast(self), allow);
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#allowNestedParts)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn AllowNestedParts(self: ?*anyopaque) bool {
        return qtc.KParts__PartManager_AllowNestedParts(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setIgnoreScrollBars)
    ///
    /// ``` self: QtC.KParts__PartManager, ignore: bool ```
    pub fn SetIgnoreScrollBars(self: ?*anyopaque, ignore: bool) void {
        qtc.KParts__PartManager_SetIgnoreScrollBars(@ptrCast(self), ignore);
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#ignoreScrollBars)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn IgnoreScrollBars(self: ?*anyopaque) bool {
        return qtc.KParts__PartManager_IgnoreScrollBars(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setActivationButtonMask)
    ///
    /// ``` self: QtC.KParts__PartManager, buttonMask: i16 ```
    pub fn SetActivationButtonMask(self: ?*anyopaque, buttonMask: i16) void {
        qtc.KParts__PartManager_SetActivationButtonMask(@ptrCast(self), @intCast(buttonMask));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activationButtonMask)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn ActivationButtonMask(self: ?*anyopaque) i16 {
        return qtc.KParts__PartManager_ActivationButtonMask(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#eventFilter)
    ///
    /// ``` self: QtC.KParts__PartManager, obj: QtC.QObject, ev: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, obj: ?*anyopaque, ev: ?*anyopaque) bool {
        return qtc.KParts__PartManager_EventFilter(@ptrCast(self), @ptrCast(obj), @ptrCast(ev));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, obj: QtC.QObject, ev: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager, obj: QtC.QObject, ev: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, obj: ?*anyopaque, ev: ?*anyopaque) bool {
        return qtc.KParts__PartManager_QBaseEventFilter(@ptrCast(self), @ptrCast(obj), @ptrCast(ev));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#addPart)
    ///
    /// ``` self: QtC.KParts__PartManager, part: QtC.KParts__Part, setActive: bool ```
    pub fn AddPart(self: ?*anyopaque, part: ?*anyopaque, setActive: bool) void {
        qtc.KParts__PartManager_AddPart(@ptrCast(self), @ptrCast(part), setActive);
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#addPart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, part: QtC.KParts__Part, setActive: bool) callconv(.c) void ```
    pub fn OnAddPart(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnAddPart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#addPart)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager, part: QtC.KParts__Part, setActive: bool ```
    pub fn QBaseAddPart(self: ?*anyopaque, part: ?*anyopaque, setActive: bool) void {
        qtc.KParts__PartManager_QBaseAddPart(@ptrCast(self), @ptrCast(part), setActive);
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#removePart)
    ///
    /// ``` self: QtC.KParts__PartManager, part: QtC.KParts__Part ```
    pub fn RemovePart(self: ?*anyopaque, part: ?*anyopaque) void {
        qtc.KParts__PartManager_RemovePart(@ptrCast(self), @ptrCast(part));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#removePart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, part: QtC.KParts__Part) callconv(.c) void ```
    pub fn OnRemovePart(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_OnRemovePart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#removePart)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager, part: QtC.KParts__Part ```
    pub fn QBaseRemovePart(self: ?*anyopaque, part: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseRemovePart(@ptrCast(self), @ptrCast(part));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#replacePart)
    ///
    /// ``` self: QtC.KParts__PartManager, oldPart: QtC.KParts__Part, newPart: QtC.KParts__Part, setActive: bool ```
    pub fn ReplacePart(self: ?*anyopaque, oldPart: ?*anyopaque, newPart: ?*anyopaque, setActive: bool) void {
        qtc.KParts__PartManager_ReplacePart(@ptrCast(self), @ptrCast(oldPart), @ptrCast(newPart), setActive);
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#replacePart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, oldPart: QtC.KParts__Part, newPart: QtC.KParts__Part, setActive: bool) callconv(.c) void ```
    pub fn OnReplacePart(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnReplacePart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#replacePart)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager, oldPart: QtC.KParts__Part, newPart: QtC.KParts__Part, setActive: bool ```
    pub fn QBaseReplacePart(self: ?*anyopaque, oldPart: ?*anyopaque, newPart: ?*anyopaque, setActive: bool) void {
        qtc.KParts__PartManager_QBaseReplacePart(@ptrCast(self), @ptrCast(oldPart), @ptrCast(newPart), setActive);
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setActivePart)
    ///
    /// ``` self: QtC.KParts__PartManager, part: QtC.KParts__Part, widget: QtC.QWidget ```
    pub fn SetActivePart(self: ?*anyopaque, part: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KParts__PartManager_SetActivePart(@ptrCast(self), @ptrCast(part), @ptrCast(widget));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setActivePart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, part: QtC.KParts__Part, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnSetActivePart(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_OnSetActivePart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setActivePart)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager, part: QtC.KParts__Part, widget: QtC.QWidget ```
    pub fn QBaseSetActivePart(self: ?*anyopaque, part: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseSetActivePart(@ptrCast(self), @ptrCast(part), @ptrCast(widget));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activePart)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn ActivePart(self: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__PartManager_ActivePart(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activePart)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn () callconv(.c) QtC.KParts__Part ```
    pub fn OnActivePart(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KParts__Part) void {
        qtc.KParts__PartManager_OnActivePart(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activePart)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn QBaseActivePart(self: ?*anyopaque) QtC.KParts__Part {
        return qtc.KParts__PartManager_QBaseActivePart(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activeWidget)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn ActiveWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__PartManager_ActiveWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activeWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn () callconv(.c) QtC.QWidget ```
    pub fn OnActiveWidget(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWidget) void {
        qtc.KParts__PartManager_OnActiveWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activeWidget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn QBaseActiveWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KParts__PartManager_QBaseActiveWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#parts)
    ///
    /// ``` self: QtC.KParts__PartManager, allocator: std.mem.Allocator ```
    pub fn Parts(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KParts__Part {
        const _arr: qtc.libqt_list = qtc.KParts__PartManager_Parts(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KParts__Part, _arr.len) catch @panic("kparts::partmanager.Parts: Memory allocation failed");
        const _data: [*]QtC.KParts__Part = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#addManagedTopLevelWidget)
    ///
    /// ``` self: QtC.KParts__PartManager, topLevel: QtC.QWidget ```
    pub fn AddManagedTopLevelWidget(self: ?*anyopaque, topLevel: ?*anyopaque) void {
        qtc.KParts__PartManager_AddManagedTopLevelWidget(@ptrCast(self), @ptrCast(topLevel));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#removeManagedTopLevelWidget)
    ///
    /// ``` self: QtC.KParts__PartManager, topLevel: QtC.QWidget ```
    pub fn RemoveManagedTopLevelWidget(self: ?*anyopaque, topLevel: ?*anyopaque) void {
        qtc.KParts__PartManager_RemoveManagedTopLevelWidget(@ptrCast(self), @ptrCast(topLevel));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#reason)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn Reason(self: ?*anyopaque) i32 {
        return qtc.KParts__PartManager_Reason(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#partAdded)
    ///
    /// ``` self: QtC.KParts__PartManager, part: QtC.KParts__Part ```
    pub fn PartAdded(self: ?*anyopaque, part: ?*anyopaque) void {
        qtc.KParts__PartManager_PartAdded(@ptrCast(self), @ptrCast(part));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#partAdded)
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, part: QtC.KParts__Part) callconv(.c) void ```
    pub fn OnPartAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_PartAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#partRemoved)
    ///
    /// ``` self: QtC.KParts__PartManager, part: QtC.KParts__Part ```
    pub fn PartRemoved(self: ?*anyopaque, part: ?*anyopaque) void {
        qtc.KParts__PartManager_PartRemoved(@ptrCast(self), @ptrCast(part));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#partRemoved)
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, part: QtC.KParts__Part) callconv(.c) void ```
    pub fn OnPartRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_PartRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activePartChanged)
    ///
    /// ``` self: QtC.KParts__PartManager, newPart: QtC.KParts__Part ```
    pub fn ActivePartChanged(self: ?*anyopaque, newPart: ?*anyopaque) void {
        qtc.KParts__PartManager_ActivePartChanged(@ptrCast(self), @ptrCast(newPart));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#activePartChanged)
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, newPart: QtC.KParts__Part) callconv(.c) void ```
    pub fn OnActivePartChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_Connect_ActivePartChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
    ///
    /// ``` self: QtC.KParts__PartManager, ignoreExplictFocusRequests: bool ```
    pub fn SetIgnoreExplictFocusRequests(self: ?*anyopaque, ignoreExplictFocusRequests: bool) void {
        qtc.KParts__PartManager_SetIgnoreExplictFocusRequests(@ptrCast(self), ignoreExplictFocusRequests);
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, ignoreExplictFocusRequests: bool) callconv(.c) void ```
    pub fn OnSetIgnoreExplictFocusRequests(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__PartManager_OnSetIgnoreExplictFocusRequests(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager, ignoreExplictFocusRequests: bool ```
    pub fn QBaseSetIgnoreExplictFocusRequests(self: ?*anyopaque, ignoreExplictFocusRequests: bool) void {
        qtc.KParts__PartManager_QBaseSetIgnoreExplictFocusRequests(@ptrCast(self), ignoreExplictFocusRequests);
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn SlotObjectDestroyed(self: ?*anyopaque) void {
        qtc.KParts__PartManager_SlotObjectDestroyed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn () callconv(.c) void ```
    pub fn OnSlotObjectDestroyed(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotObjectDestroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn QBaseSlotObjectDestroyed(self: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseSlotObjectDestroyed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn SlotWidgetDestroyed(self: ?*anyopaque) void {
        qtc.KParts__PartManager_SlotWidgetDestroyed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn () callconv(.c) void ```
    pub fn OnSlotWidgetDestroyed(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotWidgetDestroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn QBaseSlotWidgetDestroyed(self: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseSlotWidgetDestroyed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn SlotManagedTopLevelWidgetDestroyed(self: ?*anyopaque) void {
        qtc.KParts__PartManager_SlotManagedTopLevelWidgetDestroyed(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn () callconv(.c) void ```
    pub fn OnSlotManagedTopLevelWidgetDestroyed(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartManager_OnSlotManagedTopLevelWidgetDestroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn QBaseSlotManagedTopLevelWidgetDestroyed(self: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseSlotManagedTopLevelWidgetDestroyed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KParts__PartManager_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partmanager.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KParts__PartManager_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partmanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KParts__PartManager, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partmanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KParts__PartManager, name: []const u8 ```
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
    /// ``` self: QtC.KParts__PartManager ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KParts__PartManager, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KParts__PartManager, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KParts__PartManager, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KParts__PartManager, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KParts__PartManager, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KParts__PartManager, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kparts::partmanager.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KParts__PartManager, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KParts__PartManager, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KParts__PartManager, obj: QtC.QObject ```
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
    /// ``` self: QtC.KParts__PartManager, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KParts__PartManager ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KParts__PartManager, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KParts__PartManager, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KParts__PartManager, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts::partmanager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::partmanager.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KParts__PartManager, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KParts__PartManager, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KParts__PartManager, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KParts__PartManager, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__PartManager, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__PartManager_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__PartManager_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__PartManager_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__PartManager_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__PartManager_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__PartManager_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__PartManager_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__PartManager_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__PartManager_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__PartManager_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__PartManager_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KParts__PartManager_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__PartManager_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__PartManager_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__PartManager_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__PartManager_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__PartManager_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__PartManager_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__PartManager_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__PartManager_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__PartManager_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KParts__PartManager, callback: *const fn (self: QtC.KParts__PartManager, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__PartManager ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__PartManager_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kparts-partmanager.html#types
pub const enums = struct {
    pub const SelectionPolicy = enum {
        pub const Direct: i32 = 0;
        pub const TriState: i32 = 1;
    };

    pub const Reason = enum {
        pub const ReasonLeftClick: i32 = 100;
        pub const ReasonMidClick: i32 = 101;
        pub const ReasonRightClick: i32 = 102;
        pub const NoReason: i32 = 103;
    };
};
