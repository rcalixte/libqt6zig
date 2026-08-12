const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJob = @import("libqt6").KJob;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const askuseractioninterface_enums = enums;
const jobuidelegateextension_enums = @import("libjobuidelegateextension.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html)
pub const KIO__AskUserActionInterface = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__AskUserActionInterface,

    pub const _is_KIO__AskUserActionInterface = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn metaObject(self: KIO__AskUserActionInterface) QMetaObject {
        return .{ .ptr = qtc.KIO__AskUserActionInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KIO__AskUserActionInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__AskUserActionInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KIO__AskUserActionInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__AskUserActionInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__AskUserActionInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `askUserRename` instead
    ///
    pub const AskUserRename = askUserRename;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserRename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` job: KJob `
    ///
    /// ` title: []const u8 `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` options: flag of jobuidelegateextension_enums.RenameDialog_Option `
    ///
    /// ` sizeSrc: usize `
    ///
    /// ` sizeDest: usize `
    ///
    /// ` ctimeSrc: QDateTime `
    ///
    /// ` ctimeDest: QDateTime `
    ///
    /// ` mtimeSrc: QDateTime `
    ///
    /// ` mtimeDest: QDateTime `
    ///
    pub fn askUserRename(self: KIO__AskUserActionInterface, job: anytype, title: []const u8, src: anytype, dest: anytype, options: i32, sizeSrc: usize, sizeDest: usize, ctimeSrc: anytype, ctimeDest: anytype, mtimeSrc: anytype, mtimeDest: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        comptime _ = @TypeOf(ctimeSrc)._is_QDateTime;
        comptime _ = @TypeOf(ctimeDest)._is_QDateTime;
        comptime _ = @TypeOf(mtimeSrc)._is_QDateTime;
        comptime _ = @TypeOf(mtimeDest)._is_QDateTime;
        qtc.KIO__AskUserActionInterface_AskUserRename(@ptrCast(self.ptr), @ptrCast(job.ptr), title_str, @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(options), @bitCast(sizeSrc), @bitCast(sizeDest), @ptrCast(ctimeSrc.ptr), @ptrCast(ctimeDest.ptr), @ptrCast(mtimeSrc.ptr), @ptrCast(mtimeDest.ptr));
    }

    /// ### DEPRECATED: Use `askUserSkip` instead
    ///
    pub const AskUserSkip = askUserSkip;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserSkip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` job: KJob `
    ///
    /// ` options: flag of jobuidelegateextension_enums.SkipDialog_Option `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn askUserSkip(self: KIO__AskUserActionInterface, job: anytype, options: i32, errorText: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KIO__AskUserActionInterface_AskUserSkip(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(options), errorText_str);
    }

    /// ### DEPRECATED: Use `askUserDelete` instead
    ///
    pub const AskUserDelete = askUserDelete;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` urls: []QUrl `
    ///
    /// ` deletionType: askuseractioninterface_enums.DeletionType `
    ///
    /// ` confirmationType: askuseractioninterface_enums.ConfirmationType `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn askUserDelete(self: KIO__AskUserActionInterface, urls: []QUrl, deletionType: i32, confirmationType: i32, _parent: anytype) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KIO__AskUserActionInterface_AskUserDelete(@ptrCast(self.ptr), urls_list, @bitCast(deletionType), @bitCast(confirmationType), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `requestUserMessageBox` instead
    ///
    pub const RequestUserMessageBox = requestUserMessageBox;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#requestUserMessageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` typeVal: askuseractioninterface_enums.MessageDialogType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondatyActionText: []const u8 `
    ///
    /// ` primaryActionIconName: []const u8 `
    ///
    /// ` secondatyActionIconName: []const u8 `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` details: []const u8 `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn requestUserMessageBox(self: KIO__AskUserActionInterface, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondatyActionText: []const u8, primaryActionIconName: []const u8, secondatyActionIconName: []const u8, dontAskAgainName: []const u8, details: []const u8, _parent: anytype) void {
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
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KIO__AskUserActionInterface_RequestUserMessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str, secondatyActionText_str, primaryActionIconName_str, secondatyActionIconName_str, dontAskAgainName_str, details_str, @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `askIgnoreSslErrors` instead
    ///
    pub const AskIgnoreSslErrors = askIgnoreSslErrors;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sslErrorData: ArrayMap_constu8_QVariant `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn askIgnoreSslErrors(self: KIO__AskUserActionInterface, allocator: std.mem.Allocator, sslErrorData: ArrayMap_constu8_QVariant, _parent: anytype) void {
        const sslErrorData_count = sslErrorData.count();
        const sslErrorData_keys = allocator.alloc(qtc.libqt_string, sslErrorData_count) catch @panic("KIO__AskUserActionInterface.askIgnoreSslErrors: Memory allocation failed");
        defer allocator.free(sslErrorData_keys);
        const sslErrorData_values = allocator.alloc(QtC.QVariant, sslErrorData_count) catch @panic("KIO__AskUserActionInterface.askIgnoreSslErrors: Memory allocation failed");
        defer allocator.free(sslErrorData_values);
        var i: usize = 0;
        var sslErrorData_it = sslErrorData.iterator();
        while (sslErrorData_it.next()) |it_entry| : (i += 1) {
            const sslErrorData_key = it_entry.key_ptr.*;
            sslErrorData_keys[i] = qtc.libqt_string{
                .len = sslErrorData_key.len,
                .data = sslErrorData_key.ptr,
            };
            sslErrorData_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const sslErrorData_map = qtc.libqt_map{
            .len = sslErrorData_count,
            .keys = @ptrCast(sslErrorData_keys.ptr),
            .values = @ptrCast(sslErrorData_values.ptr),
        };
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KIO__AskUserActionInterface_AskIgnoreSslErrors(@ptrCast(self.ptr), sslErrorData_map, @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `askUserRenameResult` instead
    ///
    pub const AskUserRenameResult = askUserRenameResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` result: jobuidelegateextension_enums.RenameDialog_Result `
    ///
    /// ` newUrl: QUrl `
    ///
    /// ` parentJob: KJob `
    ///
    pub fn askUserRenameResult(self: KIO__AskUserActionInterface, result: i32, newUrl: anytype, parentJob: anytype) void {
        comptime _ = @TypeOf(newUrl)._is_QUrl;
        comptime _ = @TypeOf(parentJob)._is_KJob;
        qtc.KIO__AskUserActionInterface_AskUserRenameResult(@ptrCast(self.ptr), @bitCast(result), @ptrCast(newUrl.ptr), @ptrCast(parentJob.ptr));
    }

    /// ### DEPRECATED: Use `onAskUserRenameResult` instead
    ///
    pub const OnAskUserRenameResult = onAskUserRenameResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` callback: *const fn (self: KIO__AskUserActionInterface, result: jobuidelegateextension_enums.RenameDialog_Result, newUrl: QUrl, parentJob: KJob) callconv(.c) void `
    ///
    pub fn onAskUserRenameResult(self: KIO__AskUserActionInterface, callback: *const fn (KIO__AskUserActionInterface, i32, QUrl, KJob) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserRenameResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `askUserSkipResult` instead
    ///
    pub const AskUserSkipResult = askUserSkipResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` result: jobuidelegateextension_enums.RenameDialog_Result `
    ///
    /// ` parentJob: KJob `
    ///
    pub fn askUserSkipResult(self: KIO__AskUserActionInterface, result: i32, parentJob: anytype) void {
        comptime _ = @TypeOf(parentJob)._is_KJob;
        qtc.KIO__AskUserActionInterface_AskUserSkipResult(@ptrCast(self.ptr), @bitCast(result), @ptrCast(parentJob.ptr));
    }

    /// ### DEPRECATED: Use `onAskUserSkipResult` instead
    ///
    pub const OnAskUserSkipResult = onAskUserSkipResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` callback: *const fn (self: KIO__AskUserActionInterface, result: jobuidelegateextension_enums.RenameDialog_Result, parentJob: KJob) callconv(.c) void `
    ///
    pub fn onAskUserSkipResult(self: KIO__AskUserActionInterface, callback: *const fn (KIO__AskUserActionInterface, i32, KJob) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserSkipResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `askUserDeleteResult` instead
    ///
    pub const AskUserDeleteResult = askUserDeleteResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` allowDelete: bool `
    ///
    /// ` urls: []QUrl `
    ///
    /// ` deletionType: askuseractioninterface_enums.DeletionType `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn askUserDeleteResult(self: KIO__AskUserActionInterface, allowDelete: bool, urls: []QUrl, deletionType: i32, _parent: anytype) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KIO__AskUserActionInterface_AskUserDeleteResult(@ptrCast(self.ptr), allowDelete, urls_list, @bitCast(deletionType), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onAskUserDeleteResult` instead
    ///
    pub const OnAskUserDeleteResult = onAskUserDeleteResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` callback: *const fn (self: KIO__AskUserActionInterface, allowDelete: bool, urls: qtc.libqt_list ([]QUrl), deletionType: askuseractioninterface_enums.DeletionType, parent: QWidget) callconv(.c) void `
    ///
    pub fn onAskUserDeleteResult(self: KIO__AskUserActionInterface, callback: *const fn (KIO__AskUserActionInterface, bool, qtc.libqt_list, i32, QWidget) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserDeleteResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `messageBoxResult` instead
    ///
    pub const MessageBoxResult = messageBoxResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` result: i32 `
    ///
    pub fn messageBoxResult(self: KIO__AskUserActionInterface, result: i32) void {
        qtc.KIO__AskUserActionInterface_MessageBoxResult(@ptrCast(self.ptr), @bitCast(result));
    }

    /// ### DEPRECATED: Use `onMessageBoxResult` instead
    ///
    pub const OnMessageBoxResult = onMessageBoxResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` callback: *const fn (self: KIO__AskUserActionInterface, result: i32) callconv(.c) void `
    ///
    pub fn onMessageBoxResult(self: KIO__AskUserActionInterface, callback: *const fn (KIO__AskUserActionInterface, i32) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_MessageBoxResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `askIgnoreSslErrorsResult` instead
    ///
    pub const AskIgnoreSslErrorsResult = askIgnoreSslErrorsResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` result: i32 `
    ///
    pub fn askIgnoreSslErrorsResult(self: KIO__AskUserActionInterface, result: i32) void {
        qtc.KIO__AskUserActionInterface_AskIgnoreSslErrorsResult(@ptrCast(self.ptr), @bitCast(result));
    }

    /// ### DEPRECATED: Use `onAskIgnoreSslErrorsResult` instead
    ///
    pub const OnAskIgnoreSslErrorsResult = onAskIgnoreSslErrorsResult;

    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` callback: *const fn (self: KIO__AskUserActionInterface, result: i32) callconv(.c) void `
    ///
    pub fn onAskIgnoreSslErrorsResult(self: KIO__AskUserActionInterface, callback: *const fn (KIO__AskUserActionInterface, i32) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskIgnoreSslErrorsResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__AskUserActionInterface.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__AskUserActionInterface.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KIO__AskUserActionInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KIO__AskUserActionInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KIO__AskUserActionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__AskUserActionInterface.objectName: Memory allocation failed");
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KIO__AskUserActionInterface, name: []const u8) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn isWidgetType(self: KIO__AskUserActionInterface) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn isWindowType(self: KIO__AskUserActionInterface) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn isQuickItemType(self: KIO__AskUserActionInterface) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn signalsBlocked(self: KIO__AskUserActionInterface) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KIO__AskUserActionInterface, b: bool) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn thread(self: KIO__AskUserActionInterface) QThread {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KIO__AskUserActionInterface, _thread: anytype) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KIO__AskUserActionInterface, interval: i32) i32 {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KIO__AskUserActionInterface, time: i64) i32 {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KIO__AskUserActionInterface, id: i32) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KIO__AskUserActionInterface, id: i32) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KIO__AskUserActionInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KIO__AskUserActionInterface.children: Memory allocation failed");
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KIO__AskUserActionInterface, _parent: anytype) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KIO__AskUserActionInterface, filterObj: anytype) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KIO__AskUserActionInterface, obj: anytype) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KIO__AskUserActionInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn disconnect3(self: KIO__AskUserActionInterface) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KIO__AskUserActionInterface, receiver: anytype) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn dumpObjectTree(self: KIO__AskUserActionInterface) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn dumpObjectInfo(self: KIO__AskUserActionInterface) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KIO__AskUserActionInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KIO__AskUserActionInterface, name: [:0]const u8) QVariant {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KIO__AskUserActionInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KIO__AskUserActionInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__AskUserActionInterface.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn bindingStorage(self: KIO__AskUserActionInterface) QBindingStorage {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn bindingStorage2(self: KIO__AskUserActionInterface) QBindingStorage {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn destroyed(self: KIO__AskUserActionInterface) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` callback: *const fn (self: KIO__AskUserActionInterface) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KIO__AskUserActionInterface, callback: *const fn (KIO__AskUserActionInterface) callconv(.c) void) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn parent(self: KIO__AskUserActionInterface) QObject {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KIO__AskUserActionInterface, classname: [:0]const u8) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn deleteLater(self: KIO__AskUserActionInterface) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KIO__AskUserActionInterface, interval: i32, timerType: i32) i32 {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KIO__AskUserActionInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KIO__AskUserActionInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KIO__AskUserActionInterface, signal: [:0]const u8) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KIO__AskUserActionInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KIO__AskUserActionInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KIO__AskUserActionInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KIO__AskUserActionInterface, param1: anytype) void {
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` callback: *const fn (self: KIO__AskUserActionInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KIO__AskUserActionInterface, callback: *const fn (KIO__AskUserActionInterface, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__AskUserActionInterface `
    ///
    /// ` callback: *const fn (self: KIO__AskUserActionInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KIO__AskUserActionInterface, callback: *const fn (KIO__AskUserActionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__AskUserActionInterface `
    ///
    pub fn delete(self: KIO__AskUserActionInterface) void {
        qtc.KIO__AskUserActionInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#public-types)
pub const enums = struct {
    pub const DeletionType = enum(i32) {
        pub const Delete: i32 = 0;
        pub const Trash: i32 = 1;
        pub const EmptyTrash: i32 = 2;
        pub const DeleteInsteadOfTrash: i32 = 3;
    };

    pub const ConfirmationType = enum(i32) {
        pub const DefaultConfirmation: i32 = 0;
        pub const ForceConfirmation: i32 = 1;
    };

    pub const MessageDialogType = enum(i32) {
        pub const QuestionTwoActions: i32 = 1;
        pub const QuestionTwoActionsCancel: i32 = 2;
        pub const WarningTwoActions: i32 = 3;
        pub const WarningTwoActionsCancel: i32 = 4;
        pub const WarningContinueCancel: i32 = 5;
        pub const Information: i32 = 7;
        pub const Error: i32 = 9;
    };
};
