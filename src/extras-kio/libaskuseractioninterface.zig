const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const askuseractioninterface_enums = enums;
const dropjob_enums = @import("libdropjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://api.kde.org/kio-askuseractioninterface.html
pub const kio__askuseractioninterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIO__AskUserActionInterface_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KIO__AskUserActionInterface, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__AskUserActionInterface_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KIO__AskUserActionInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KIO__AskUserActionInterface_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KIO__AskUserActionInterface_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::askuseractioninterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserRename)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, job: QtC.KJob, title: []const u8, src: QtC.QUrl, dest: QtC.QUrl, options: flag of dropjob_enums.RenameDialog_Option, sizeSrc: u64, sizeDest: u64, ctimeSrc: QtC.QDateTime, ctimeDest: QtC.QDateTime, mtimeSrc: QtC.QDateTime, mtimeDest: QtC.QDateTime ```
    pub fn AskUserRename(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, src: ?*anyopaque, dest: ?*anyopaque, options: i32, sizeSrc: u64, sizeDest: u64, ctimeSrc: ?*anyopaque, ctimeDest: ?*anyopaque, mtimeSrc: ?*anyopaque, mtimeDest: ?*anyopaque) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KIO__AskUserActionInterface_AskUserRename(@ptrCast(self), @ptrCast(job), title_str, @ptrCast(src), @ptrCast(dest), @intCast(options), @intCast(sizeSrc), @intCast(sizeDest), @ptrCast(ctimeSrc), @ptrCast(ctimeDest), @ptrCast(mtimeSrc), @ptrCast(mtimeDest));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserSkip)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, job: QtC.KJob, options: flag of dropjob_enums.SkipDialog_Option, errorText: []const u8 ```
    pub fn AskUserSkip(self: ?*anyopaque, job: ?*anyopaque, options: i32, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KIO__AskUserActionInterface_AskUserSkip(@ptrCast(self), @ptrCast(job), @intCast(options), errorText_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserDelete)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, urls: []QtC.QUrl, deletionType: askuseractioninterface_enums.DeletionType, confirmationType: askuseractioninterface_enums.ConfirmationType, parent: QtC.QWidget ```
    pub fn AskUserDelete(self: ?*anyopaque, urls: []QtC.QUrl, deletionType: i32, confirmationType: i32, parent: ?*anyopaque) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KIO__AskUserActionInterface_AskUserDelete(@ptrCast(self), urls_list, @intCast(deletionType), @intCast(confirmationType), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#requestUserMessageBox)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, typeVal: askuseractioninterface_enums.MessageDialogType, text: []const u8, title: []const u8, primaryActionText: []const u8, secondatyActionText: []const u8, primaryActionIconName: []const u8, secondatyActionIconName: []const u8, dontAskAgainName: []const u8, details: []const u8, parent: QtC.QWidget ```
    pub fn RequestUserMessageBox(self: ?*anyopaque, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondatyActionText: []const u8, primaryActionIconName: []const u8, secondatyActionIconName: []const u8, dontAskAgainName: []const u8, details: []const u8, parent: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        const secondatyActionText_str = qtc.libqt_string{
            .len = secondatyActionText.len,
            .data = secondatyActionText.ptr,
        };
        const primaryActionIconName_str = qtc.libqt_string{
            .len = primaryActionIconName.len,
            .data = primaryActionIconName.ptr,
        };
        const secondatyActionIconName_str = qtc.libqt_string{
            .len = secondatyActionIconName.len,
            .data = secondatyActionIconName.ptr,
        };
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        qtc.KIO__AskUserActionInterface_RequestUserMessageBox(@ptrCast(self), @intCast(typeVal), text_str, title_str, primaryActionText_str, secondatyActionText_str, primaryActionIconName_str, secondatyActionIconName_str, dontAskAgainName_str, details_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrors)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, sslErrorData: map_constu8_qtcqvariant, parent: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn AskIgnoreSslErrors(self: ?*anyopaque, sslErrorData: map_constu8_qtcqvariant, parent: ?*anyopaque, allocator: std.mem.Allocator) void {
        const sslErrorData_keys = allocator.alloc(qtc.libqt_string, sslErrorData.count()) catch @panic("kio::askuseractioninterface.AskIgnoreSslErrors: Memory allocation failed");
        defer allocator.free(sslErrorData_keys);
        const sslErrorData_values = allocator.alloc(QtC.QVariant, sslErrorData.count()) catch @panic("kio::askuseractioninterface.AskIgnoreSslErrors: Memory allocation failed");
        defer allocator.free(sslErrorData_values);
        var i: usize = 0;
        var sslErrorData_it = sslErrorData.iterator();
        while (sslErrorData_it.next()) |entry| {
            const key = entry.key_ptr.*;
            sslErrorData_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            sslErrorData_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const sslErrorData_map = qtc.libqt_map{
            .len = sslErrorData.count(),
            .keys = @ptrCast(sslErrorData_keys.ptr),
            .values = @ptrCast(sslErrorData_values.ptr),
        };
        qtc.KIO__AskUserActionInterface_AskIgnoreSslErrors(@ptrCast(self), sslErrorData_map, @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, result: dropjob_enums.RenameDialog_Result, newUrl: QtC.QUrl, parentJob: QtC.KJob ```
    pub fn AskUserRenameResult(self: ?*anyopaque, result: i32, newUrl: ?*anyopaque, parentJob: ?*anyopaque) void {
        qtc.KIO__AskUserActionInterface_AskUserRenameResult(@ptrCast(self), @intCast(result), @ptrCast(newUrl), @ptrCast(parentJob));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, slot: fn (self: QtC.KIO__AskUserActionInterface, result: dropjob_enums.RenameDialog_Result, newUrl: QtC.QUrl, parentJob: QtC.KJob) callconv(.c) void ```
    pub fn OnAskUserRenameResult(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserRenameResult(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, result: dropjob_enums.RenameDialog_Result, parentJob: QtC.KJob ```
    pub fn AskUserSkipResult(self: ?*anyopaque, result: i32, parentJob: ?*anyopaque) void {
        qtc.KIO__AskUserActionInterface_AskUserSkipResult(@ptrCast(self), @intCast(result), @ptrCast(parentJob));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, slot: fn (self: QtC.KIO__AskUserActionInterface, result: dropjob_enums.RenameDialog_Result, parentJob: QtC.KJob) callconv(.c) void ```
    pub fn OnAskUserSkipResult(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserSkipResult(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, allowDelete: bool, urls: []QtC.QUrl, deletionType: askuseractioninterface_enums.DeletionType, parent: QtC.QWidget ```
    pub fn AskUserDeleteResult(self: ?*anyopaque, allowDelete: bool, urls: []QtC.QUrl, deletionType: i32, parent: ?*anyopaque) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KIO__AskUserActionInterface_AskUserDeleteResult(@ptrCast(self), allowDelete, urls_list, @intCast(deletionType), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, slot: fn (self: QtC.KIO__AskUserActionInterface, allowDelete: bool, urls: [*]QtC.QUrl, deletionType: askuseractioninterface_enums.DeletionType, parent: QtC.QWidget) callconv(.c) void ```
    pub fn OnAskUserDeleteResult(self: ?*anyopaque, slot: fn (?*anyopaque, bool, [*]QtC.QUrl, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserDeleteResult(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, result: i32 ```
    pub fn MessageBoxResult(self: ?*anyopaque, result: i32) void {
        qtc.KIO__AskUserActionInterface_MessageBoxResult(@ptrCast(self), @intCast(result));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, slot: fn (self: QtC.KIO__AskUserActionInterface, result: i32) callconv(.c) void ```
    pub fn OnMessageBoxResult(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_MessageBoxResult(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, result: i32 ```
    pub fn AskIgnoreSslErrorsResult(self: ?*anyopaque, result: i32) void {
        qtc.KIO__AskUserActionInterface_AskIgnoreSslErrorsResult(@ptrCast(self), @intCast(result));
    }

    /// [Qt documentation](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, slot: fn (self: QtC.KIO__AskUserActionInterface, result: i32) callconv(.c) void ```
    pub fn OnAskIgnoreSslErrorsResult(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskIgnoreSslErrorsResult(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KIO__AskUserActionInterface_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::askuseractioninterface.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KIO__AskUserActionInterface_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::askuseractioninterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio::askuseractioninterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, name: []const u8 ```
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
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kio::askuseractioninterface.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, obj: QtC.QObject ```
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
    /// ``` self: QtC.KIO__AskUserActionInterface, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio::askuseractioninterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio::askuseractioninterface.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, slot: fn (self: QtC.KIO__AskUserActionInterface) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KIO__AskUserActionInterface, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, slot: fn (self: QtC.KIO__AskUserActionInterface, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface, slot: fn (self: QtC.KIO__AskUserActionInterface, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__AskUserActionInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__AskUserActionInterface_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kio-askuseractioninterface.html#types
pub const enums = struct {
    pub const DeletionType = enum {
        pub const Delete: i32 = 0;
        pub const Trash: i32 = 1;
        pub const EmptyTrash: i32 = 2;
        pub const DeleteInsteadOfTrash: i32 = 3;
    };

    pub const ConfirmationType = enum {
        pub const DefaultConfirmation: i32 = 0;
        pub const ForceConfirmation: i32 = 1;
    };

    pub const MessageDialogType = enum {
        pub const QuestionTwoActions: i32 = 1;
        pub const QuestionTwoActionsCancel: i32 = 2;
        pub const WarningTwoActions: i32 = 3;
        pub const WarningTwoActionsCancel: i32 = 4;
        pub const WarningContinueCancel: i32 = 5;
        pub const Information: i32 = 7;
        pub const Error: i32 = 9;
    };
};
