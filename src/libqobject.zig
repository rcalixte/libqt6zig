const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qobjectdata.html
pub const qobjectdata = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#q_ptr-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn QPtr(self: ?*anyopaque) QtC.QObject {
        return qtc.QObjectData_QPtr(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#q_ptr-var)
    ///
    /// ``` self: QtC.QObjectData, q_ptr: QtC.QObject ```
    pub fn SetQPtr(self: ?*anyopaque, q_ptr: ?*anyopaque) void {
        qtc.QObjectData_SetQPtr(@ptrCast(self), @ptrCast(q_ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#parent-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObjectData_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#parent-var)
    ///
    /// ``` self: QtC.QObjectData, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObjectData_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#children-var)
    ///
    /// ``` self: QtC.QObjectData, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const children_arr: qtc.libqt_list = qtc.QObjectData_Children(@ptrCast(self));
        defer qtc.libqt_free(children_arr.data);
        const children_ret = allocator.alloc(QtC.QObject, children_arr.len) catch @panic("qobjectdata.Children: Memory allocation failed");
        const children_data: [*]QtC.QObject = @ptrCast(@alignCast(children_arr.data));
        @memcpy(children_ret, children_data[0..children_arr.len]);
        return children_ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#children-var)
    ///
    /// ``` self: QtC.QObjectData, children: []QtC.QObject ```
    pub fn SetChildren(self: ?*anyopaque, children: []?*anyopaque) void {
        const children_list = qtc.libqt_list{
            .len = children.len,
            .data = @ptrCast(children.ptr),
        };
        qtc.QObjectData_SetChildren(@ptrCast(self), children_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#isWidget-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn IsWidget(self: ?*anyopaque) u32 {
        return qtc.QObjectData_IsWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#isWidget-var)
    ///
    /// ``` self: QtC.QObjectData, isWidget: u32 ```
    pub fn SetIsWidget(self: ?*anyopaque, isWidget: u32) void {
        qtc.QObjectData_SetIsWidget(@ptrCast(self), @intCast(isWidget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#blockSig-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn BlockSig(self: ?*anyopaque) u32 {
        return qtc.QObjectData_BlockSig(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#blockSig-var)
    ///
    /// ``` self: QtC.QObjectData, blockSig: u32 ```
    pub fn SetBlockSig(self: ?*anyopaque, blockSig: u32) void {
        qtc.QObjectData_SetBlockSig(@ptrCast(self), @intCast(blockSig));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#wasDeleted-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn WasDeleted(self: ?*anyopaque) u32 {
        return qtc.QObjectData_WasDeleted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#wasDeleted-var)
    ///
    /// ``` self: QtC.QObjectData, wasDeleted: u32 ```
    pub fn SetWasDeleted(self: ?*anyopaque, wasDeleted: u32) void {
        qtc.QObjectData_SetWasDeleted(@ptrCast(self), @intCast(wasDeleted));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#isDeletingChildren-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn IsDeletingChildren(self: ?*anyopaque) u32 {
        return qtc.QObjectData_IsDeletingChildren(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#isDeletingChildren-var)
    ///
    /// ``` self: QtC.QObjectData, isDeletingChildren: u32 ```
    pub fn SetIsDeletingChildren(self: ?*anyopaque, isDeletingChildren: u32) void {
        qtc.QObjectData_SetIsDeletingChildren(@ptrCast(self), @intCast(isDeletingChildren));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#sendChildEvents-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn SendChildEvents(self: ?*anyopaque) u32 {
        return qtc.QObjectData_SendChildEvents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#sendChildEvents-var)
    ///
    /// ``` self: QtC.QObjectData, sendChildEvents: u32 ```
    pub fn SetSendChildEvents(self: ?*anyopaque, sendChildEvents: u32) void {
        qtc.QObjectData_SetSendChildEvents(@ptrCast(self), @intCast(sendChildEvents));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#receiveChildEvents-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn ReceiveChildEvents(self: ?*anyopaque) u32 {
        return qtc.QObjectData_ReceiveChildEvents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#receiveChildEvents-var)
    ///
    /// ``` self: QtC.QObjectData, receiveChildEvents: u32 ```
    pub fn SetReceiveChildEvents(self: ?*anyopaque, receiveChildEvents: u32) void {
        qtc.QObjectData_SetReceiveChildEvents(@ptrCast(self), @intCast(receiveChildEvents));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#isWindow-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn IsWindow(self: ?*anyopaque) u32 {
        return qtc.QObjectData_IsWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#isWindow-var)
    ///
    /// ``` self: QtC.QObjectData, isWindow: u32 ```
    pub fn SetIsWindow(self: ?*anyopaque, isWindow: u32) void {
        qtc.QObjectData_SetIsWindow(@ptrCast(self), @intCast(isWindow));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#deleteLaterCalled-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn DeleteLaterCalled(self: ?*anyopaque) u32 {
        return qtc.QObjectData_DeleteLaterCalled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#deleteLaterCalled-var)
    ///
    /// ``` self: QtC.QObjectData, deleteLaterCalled: u32 ```
    pub fn SetDeleteLaterCalled(self: ?*anyopaque, deleteLaterCalled: u32) void {
        qtc.QObjectData_SetDeleteLaterCalled(@ptrCast(self), @intCast(deleteLaterCalled));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#isQuickItem-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn IsQuickItem(self: ?*anyopaque) u32 {
        return qtc.QObjectData_IsQuickItem(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#isQuickItem-var)
    ///
    /// ``` self: QtC.QObjectData, isQuickItem: u32 ```
    pub fn SetIsQuickItem(self: ?*anyopaque, isQuickItem: u32) void {
        qtc.QObjectData_SetIsQuickItem(@ptrCast(self), @intCast(isQuickItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#willBeWidget-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn WillBeWidget(self: ?*anyopaque) u32 {
        return qtc.QObjectData_WillBeWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#willBeWidget-var)
    ///
    /// ``` self: QtC.QObjectData, willBeWidget: u32 ```
    pub fn SetWillBeWidget(self: ?*anyopaque, willBeWidget: u32) void {
        qtc.QObjectData_SetWillBeWidget(@ptrCast(self), @intCast(willBeWidget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#wasWidget-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn WasWidget(self: ?*anyopaque) u32 {
        return qtc.QObjectData_WasWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#wasWidget-var)
    ///
    /// ``` self: QtC.QObjectData, wasWidget: u32 ```
    pub fn SetWasWidget(self: ?*anyopaque, wasWidget: u32) void {
        qtc.QObjectData_SetWasWidget(@ptrCast(self), @intCast(wasWidget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#receiveParentEvents-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn ReceiveParentEvents(self: ?*anyopaque) u32 {
        return qtc.QObjectData_ReceiveParentEvents(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#receiveParentEvents-var)
    ///
    /// ``` self: QtC.QObjectData, receiveParentEvents: u32 ```
    pub fn SetReceiveParentEvents(self: ?*anyopaque, receiveParentEvents: u32) void {
        qtc.QObjectData_SetReceiveParentEvents(@ptrCast(self), @intCast(receiveParentEvents));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#unused-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn Unused(self: ?*anyopaque) u32 {
        return qtc.QObjectData_Unused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#unused-var)
    ///
    /// ``` self: QtC.QObjectData, unused: u32 ```
    pub fn SetUnused(self: ?*anyopaque, unused: u32) void {
        qtc.QObjectData_SetUnused(@ptrCast(self), @intCast(unused));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#bindingStorage-var)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObjectData_BindingStorage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#bindingStorage-var)
    ///
    /// ``` self: QtC.QObjectData, bindingStorage: QtC.QBindingStorage ```
    pub fn SetBindingStorage(self: ?*anyopaque, bindingStorage: QtC.QBindingStorage) void {
        qtc.QObjectData_SetBindingStorage(@ptrCast(self), @ptrCast(bindingStorage));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#dynamicMetaObject)
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn DynamicMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QObjectData_DynamicMetaObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#dtor.QObjectData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QObjectData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QObjectData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qobject.html
pub const qobject = struct {
    /// New constructs a new QObject object.
    ///
    ///
    pub fn New() QtC.QObject {
        return qtc.QObject_new();
    }

    /// New2 constructs a new QObject object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QObject {
        return qtc.QObject_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QObject ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QObject_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QObject, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QObject_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QObject, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QObject_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QObject_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QObject_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qobject.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QObject, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QObject, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QObject, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qobject.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QObject, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QObject ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QObject ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QObject ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QObject ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QObject, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QObject ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QObject, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QObject, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QObject, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QObject, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QObject, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qobject.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QObject, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QObject, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QObject, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QObject, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QObject ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QObject ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QObject, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QObject, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QObject, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qobject.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qobject.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QObject ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QObject ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QObject ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QObject, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QObject ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// ``` self: QtC.QObject ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Sender(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QObject_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_QBaseSender(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// ``` self: QtC.QObject ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QObject_SenderSignalIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QObject_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QObject_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// ``` self: QtC.QObject, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QObject_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// ``` self: QtC.QObject, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QObject_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QObject_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QObject_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// ``` self: QtC.QObject, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// ``` self: QtC.QObject, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// ``` self: QtC.QObject, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QObject_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// ``` self: QtC.QObject, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QObject_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QObject_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// ``` self: QtC.QObject, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QObject_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QObject, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QObject_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qobject.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qobject.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QObject, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QObject, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QObject, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dtor.QObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QObject ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsignalblocker.html
pub const qsignalblocker = struct {
    /// New constructs a new QSignalBlocker object.
    ///
    /// ``` o: QtC.QObject ```
    pub fn New(o: ?*anyopaque) QtC.QSignalBlocker {
        return qtc.QSignalBlocker_new(@ptrCast(o));
    }

    /// New2 constructs a new QSignalBlocker object.
    ///
    /// ``` o: QtC.QObject ```
    pub fn New2(o: ?*anyopaque) QtC.QSignalBlocker {
        return qtc.QSignalBlocker_new2(@ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#reblock)
    ///
    /// ``` self: QtC.QSignalBlocker ```
    pub fn Reblock(self: ?*anyopaque) void {
        qtc.QSignalBlocker_Reblock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#unblock)
    ///
    /// ``` self: QtC.QSignalBlocker ```
    pub fn Unblock(self: ?*anyopaque) void {
        qtc.QSignalBlocker_Unblock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#dismiss)
    ///
    /// ``` self: QtC.QSignalBlocker ```
    pub fn Dismiss(self: ?*anyopaque) void {
        qtc.QSignalBlocker_Dismiss(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#dtor.QSignalBlocker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSignalBlocker ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSignalBlocker_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qobject.html#types
pub const enums = struct {
    pub const QObjectData = enum {
        pub const CheckForParentChildLoopsWarnDepth: i32 = 4096;
    };
};
