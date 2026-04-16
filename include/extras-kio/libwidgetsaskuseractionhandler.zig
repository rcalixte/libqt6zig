const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJob = @import("libqt6").KJob;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const askuseractioninterface_enums = @import("libaskuseractioninterface.zig").enums;
const jobuidelegateextension_enums = @import("libjobuidelegateextension.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html)
pub const KIO__WidgetsAskUserActionHandler = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__WidgetsAskUserActionHandler,

    pub const _is_KIO__WidgetsAskUserActionHandler = {};
    pub const _is_KIO__AskUserActionInterface = {};
    pub const _is_QObject = {};

    /// New constructs a new KIO::WidgetsAskUserActionHandler object.
    ///
    pub fn New() KIO__WidgetsAskUserActionHandler {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_new() };
    }

    /// New2 constructs a new KIO::WidgetsAskUserActionHandler object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KIO__WidgetsAskUserActionHandler {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn MetaObject(self: KIO__WidgetsAskUserActionHandler) QMetaObject {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KIO__WidgetsAskUserActionHandler, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn SuperMetaObject(self: KIO__WidgetsAskUserActionHandler) QMetaObject {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KIO__WidgetsAskUserActionHandler, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__WidgetsAskUserActionHandler_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KIO__WidgetsAskUserActionHandler, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KIO__WidgetsAskUserActionHandler, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__WidgetsAskUserActionHandler_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KIO__WidgetsAskUserActionHandler, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__WidgetsAskUserActionHandler_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__widgetsaskuseractionhandler.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserRename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
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
    pub fn AskUserRename(self: KIO__WidgetsAskUserActionHandler, job: anytype, title: []const u8, src: anytype, dest: anytype, options: i32, sizeSrc: usize, sizeDest: usize, ctimeSrc: anytype, ctimeDest: anytype, mtimeSrc: anytype, mtimeDest: anytype) void {
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
        qtc.KIO__WidgetsAskUserActionHandler_AskUserRename(@ptrCast(self.ptr), @ptrCast(job.ptr), title_str, @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(options), @bitCast(sizeSrc), @bitCast(sizeDest), @ptrCast(ctimeSrc.ptr), @ptrCast(ctimeDest.ptr), @ptrCast(mtimeSrc.ptr), @ptrCast(mtimeDest.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserRename)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, job: KJob, title: [*:0]const u8, src: QUrl, dest: QUrl, options: flag of jobuidelegateextension_enums.RenameDialog_Option, sizeSrc: usize, sizeDest: usize, ctimeSrc: QDateTime, ctimeDest: QDateTime, mtimeSrc: QDateTime, mtimeDest: QDateTime) callconv(.c) void `
    ///
    pub fn OnAskUserRename(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, KJob, [*:0]const u8, QUrl, QUrl, i32, usize, usize, QDateTime, QDateTime, QDateTime, QDateTime) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnAskUserRename(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAskUserRename` instead
    ///
    pub const QBaseAskUserRename = SuperAskUserRename;

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserRename)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
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
    pub fn SuperAskUserRename(self: KIO__WidgetsAskUserActionHandler, job: anytype, title: []const u8, src: anytype, dest: anytype, options: i32, sizeSrc: usize, sizeDest: usize, ctimeSrc: anytype, ctimeDest: anytype, mtimeSrc: anytype, mtimeDest: anytype) void {
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
        qtc.KIO__WidgetsAskUserActionHandler_SuperAskUserRename(@ptrCast(self.ptr), @ptrCast(job.ptr), title_str, @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(options), @bitCast(sizeSrc), @bitCast(sizeDest), @ptrCast(ctimeSrc.ptr), @ptrCast(ctimeDest.ptr), @ptrCast(mtimeSrc.ptr), @ptrCast(mtimeDest.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserSkip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` job: KJob `
    ///
    /// ` options: flag of jobuidelegateextension_enums.SkipDialog_Option `
    ///
    /// ` error_text: []const u8 `
    ///
    pub fn AskUserSkip(self: KIO__WidgetsAskUserActionHandler, job: anytype, options: i32, error_text: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const error_text_str = qtc.libqt_string{
            .len = error_text.len,
            .data = error_text.ptr,
        };
        qtc.KIO__WidgetsAskUserActionHandler_AskUserSkip(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(options), error_text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserSkip)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, job: KJob, options: flag of jobuidelegateextension_enums.SkipDialog_Option, error_text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAskUserSkip(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, KJob, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnAskUserSkip(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAskUserSkip` instead
    ///
    pub const QBaseAskUserSkip = SuperAskUserSkip;

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserSkip)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` job: KJob `
    ///
    /// ` options: flag of jobuidelegateextension_enums.SkipDialog_Option `
    ///
    /// ` error_text: []const u8 `
    ///
    pub fn SuperAskUserSkip(self: KIO__WidgetsAskUserActionHandler, job: anytype, options: i32, error_text: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const error_text_str = qtc.libqt_string{
            .len = error_text.len,
            .data = error_text.ptr,
        };
        qtc.KIO__WidgetsAskUserActionHandler_SuperAskUserSkip(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(options), error_text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` urls: []QUrl `
    ///
    /// ` deletionType: askuseractioninterface_enums.DeletionType `
    ///
    /// ` confirmationType: askuseractioninterface_enums.ConfirmationType `
    ///
    /// ` parent: QWidget `
    ///
    pub fn AskUserDelete(self: KIO__WidgetsAskUserActionHandler, urls: []QUrl, deletionType: i32, confirmationType: i32, parent: anytype) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_AskUserDelete(@ptrCast(self.ptr), urls_list, @bitCast(deletionType), @bitCast(confirmationType), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserDelete)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, urls: qtc.libqt_list ([]QUrl), deletionType: askuseractioninterface_enums.DeletionType, confirmationType: askuseractioninterface_enums.ConfirmationType, parent: QWidget) callconv(.c) void `
    ///
    pub fn OnAskUserDelete(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, qtc.libqt_list, i32, i32, QWidget) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnAskUserDelete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAskUserDelete` instead
    ///
    pub const QBaseAskUserDelete = SuperAskUserDelete;

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askUserDelete)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` urls: []QUrl `
    ///
    /// ` deletionType: askuseractioninterface_enums.DeletionType `
    ///
    /// ` confirmationType: askuseractioninterface_enums.ConfirmationType `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperAskUserDelete(self: KIO__WidgetsAskUserActionHandler, urls: []QUrl, deletionType: i32, confirmationType: i32, parent: anytype) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_SuperAskUserDelete(@ptrCast(self.ptr), urls_list, @bitCast(deletionType), @bitCast(confirmationType), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#requestUserMessageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` typeVal: askuseractioninterface_enums.MessageDialogType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondaryActionText: []const u8 `
    ///
    /// ` primaryActionIconName: []const u8 `
    ///
    /// ` secondaryActionIconName: []const u8 `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` details: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn RequestUserMessageBox(self: KIO__WidgetsAskUserActionHandler, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, primaryActionIconName: []const u8, secondaryActionIconName: []const u8, dontAskAgainName: []const u8, details: []const u8, parent: anytype) void {
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
        const secondaryActionText_str = qtc.libqt_string{
            .len = secondaryActionText.len,
            .data = secondaryActionText.ptr,
        };
        const primaryActionIconName_str = qtc.libqt_string{
            .len = primaryActionIconName.len,
            .data = primaryActionIconName.ptr,
        };
        const secondaryActionIconName_str = qtc.libqt_string{
            .len = secondaryActionIconName.len,
            .data = secondaryActionIconName.ptr,
        };
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_RequestUserMessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str, secondaryActionText_str, primaryActionIconName_str, secondaryActionIconName_str, dontAskAgainName_str, details_str, @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#requestUserMessageBox)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, typeVal: askuseractioninterface_enums.MessageDialogType, text: [*:0]const u8, title: [*:0]const u8, primaryActionText: [*:0]const u8, secondaryActionText: [*:0]const u8, primaryActionIconName: [*:0]const u8, secondaryActionIconName: [*:0]const u8, dontAskAgainName: [*:0]const u8, details: [*:0]const u8, parent: QWidget) callconv(.c) void `
    ///
    pub fn OnRequestUserMessageBox(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, QWidget) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnRequestUserMessageBox(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRequestUserMessageBox` instead
    ///
    pub const QBaseRequestUserMessageBox = SuperRequestUserMessageBox;

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#requestUserMessageBox)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` typeVal: askuseractioninterface_enums.MessageDialogType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondaryActionText: []const u8 `
    ///
    /// ` primaryActionIconName: []const u8 `
    ///
    /// ` secondaryActionIconName: []const u8 `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    /// ` details: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperRequestUserMessageBox(self: KIO__WidgetsAskUserActionHandler, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, primaryActionIconName: []const u8, secondaryActionIconName: []const u8, dontAskAgainName: []const u8, details: []const u8, parent: anytype) void {
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
        const secondaryActionText_str = qtc.libqt_string{
            .len = secondaryActionText.len,
            .data = secondaryActionText.ptr,
        };
        const primaryActionIconName_str = qtc.libqt_string{
            .len = primaryActionIconName.len,
            .data = primaryActionIconName.ptr,
        };
        const secondaryActionIconName_str = qtc.libqt_string{
            .len = secondaryActionIconName.len,
            .data = secondaryActionIconName.ptr,
        };
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        const details_str = qtc.libqt_string{
            .len = details.len,
            .data = details.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_SuperRequestUserMessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str, secondaryActionText_str, primaryActionIconName_str, secondaryActionIconName_str, dontAskAgainName_str, details_str, @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askIgnoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sslErrorData: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QWidget `
    ///
    pub fn AskIgnoreSslErrors(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator, sslErrorData: ArrayMap_constu8_QVariant, parent: anytype) void {
        const sslErrorData_count = sslErrorData.count();
        const sslErrorData_keys = allocator.alloc(qtc.libqt_string, sslErrorData_count) catch @panic("kio__widgetsaskuseractionhandler.AskIgnoreSslErrors: Memory allocation failed");
        defer allocator.free(sslErrorData_keys);
        const sslErrorData_values = allocator.alloc(QtC.QVariant, sslErrorData_count) catch @panic("kio__widgetsaskuseractionhandler.AskIgnoreSslErrors: Memory allocation failed");
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
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors(@ptrCast(self.ptr), sslErrorData_map, @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askIgnoreSslErrors)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, sslErrorData: qtc.libqt_map (ArrayMap_constu8_QVariant), parent: QWidget) callconv(.c) void `
    ///
    pub fn OnAskIgnoreSslErrors(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, qtc.libqt_map, QWidget) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnAskIgnoreSslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAskIgnoreSslErrors` instead
    ///
    pub const QBaseAskIgnoreSslErrors = SuperAskIgnoreSslErrors;

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#askIgnoreSslErrors)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sslErrorData: ArrayMap_constu8_QVariant `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperAskIgnoreSslErrors(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator, sslErrorData: ArrayMap_constu8_QVariant, parent: anytype) void {
        const sslErrorData_count = sslErrorData.count();
        const sslErrorData_keys = allocator.alloc(qtc.libqt_string, sslErrorData_count) catch @panic("kio__widgetsaskuseractionhandler.AskIgnoreSslErrors: Memory allocation failed");
        defer allocator.free(sslErrorData_keys);
        const sslErrorData_values = allocator.alloc(QtC.QVariant, sslErrorData_count) catch @panic("kio__widgetsaskuseractionhandler.AskIgnoreSslErrors: Memory allocation failed");
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
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_SuperAskIgnoreSslErrors(@ptrCast(self.ptr), sslErrorData_map, @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` window: QWidget `
    ///
    pub fn SetWindow(self: KIO__WidgetsAskUserActionHandler, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_SetWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__widgetsaskuseractionhandler.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__widgetsaskuseractionhandler.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` result: jobuidelegateextension_enums.RenameDialog_Result `
    ///
    /// ` newUrl: QUrl `
    ///
    /// ` parentJob: KJob `
    ///
    pub fn AskUserRenameResult(self: KIO__WidgetsAskUserActionHandler, result: i32, newUrl: anytype, parentJob: anytype) void {
        comptime _ = @TypeOf(newUrl)._is_QUrl;
        comptime _ = @TypeOf(parentJob)._is_KJob;
        qtc.KIO__AskUserActionInterface_AskUserRenameResult(@ptrCast(self.ptr), @bitCast(result), @ptrCast(newUrl.ptr), @ptrCast(parentJob.ptr));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserRenameResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, result: jobuidelegateextension_enums.RenameDialog_Result, newUrl: QUrl, parentJob: KJob) callconv(.c) void `
    ///
    pub fn OnAskUserRenameResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32, QUrl, KJob) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserRenameResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` result: jobuidelegateextension_enums.RenameDialog_Result `
    ///
    /// ` parentJob: KJob `
    ///
    pub fn AskUserSkipResult(self: KIO__WidgetsAskUserActionHandler, result: i32, parentJob: anytype) void {
        comptime _ = @TypeOf(parentJob)._is_KJob;
        qtc.KIO__AskUserActionInterface_AskUserSkipResult(@ptrCast(self.ptr), @bitCast(result), @ptrCast(parentJob.ptr));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserSkipResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, result: jobuidelegateextension_enums.RenameDialog_Result, parentJob: KJob) callconv(.c) void `
    ///
    pub fn OnAskUserSkipResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32, KJob) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserSkipResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allowDelete: bool `
    ///
    /// ` urls: []QUrl `
    ///
    /// ` deletionType: askuseractioninterface_enums.DeletionType `
    ///
    /// ` parent: QWidget `
    ///
    pub fn AskUserDeleteResult(self: KIO__WidgetsAskUserActionHandler, allowDelete: bool, urls: []QUrl, deletionType: i32, parent: anytype) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KIO__AskUserActionInterface_AskUserDeleteResult(@ptrCast(self.ptr), allowDelete, urls_list, @bitCast(deletionType), @ptrCast(parent.ptr));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askUserDeleteResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, allowDelete: bool, urls: qtc.libqt_list ([]QUrl), deletionType: askuseractioninterface_enums.DeletionType, parent: QWidget) callconv(.c) void `
    ///
    pub fn OnAskUserDeleteResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, bool, qtc.libqt_list, i32, QWidget) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserDeleteResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` result: i32 `
    ///
    pub fn MessageBoxResult(self: KIO__WidgetsAskUserActionHandler, result: i32) void {
        qtc.KIO__AskUserActionInterface_MessageBoxResult(@ptrCast(self.ptr), @bitCast(result));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#messageBoxResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, result: i32) callconv(.c) void `
    ///
    pub fn OnMessageBoxResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_MessageBoxResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` result: i32 `
    ///
    pub fn AskIgnoreSslErrorsResult(self: KIO__WidgetsAskUserActionHandler, result: i32) void {
        qtc.KIO__AskUserActionInterface_AskIgnoreSslErrorsResult(@ptrCast(self.ptr), @bitCast(result));
    }

    /// Inherited from KIO::AskUserActionInterface
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-askuseractioninterface.html#askIgnoreSslErrorsResult)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, result: i32) callconv(.c) void `
    ///
    pub fn OnAskIgnoreSslErrorsResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskIgnoreSslErrorsResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__widgetsaskuseractionhandler.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KIO__WidgetsAskUserActionHandler, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn IsWidgetType(self: KIO__WidgetsAskUserActionHandler) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn IsWindowType(self: KIO__WidgetsAskUserActionHandler) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn IsQuickItemType(self: KIO__WidgetsAskUserActionHandler) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn SignalsBlocked(self: KIO__WidgetsAskUserActionHandler) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KIO__WidgetsAskUserActionHandler, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn Thread(self: KIO__WidgetsAskUserActionHandler) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KIO__WidgetsAskUserActionHandler, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KIO__WidgetsAskUserActionHandler, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KIO__WidgetsAskUserActionHandler, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KIO__WidgetsAskUserActionHandler, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KIO__WidgetsAskUserActionHandler, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kio__widgetsaskuseractionhandler.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KIO__WidgetsAskUserActionHandler, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KIO__WidgetsAskUserActionHandler, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KIO__WidgetsAskUserActionHandler, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KIO__WidgetsAskUserActionHandler, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn Disconnect3(self: KIO__WidgetsAskUserActionHandler) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KIO__WidgetsAskUserActionHandler, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn DumpObjectTree(self: KIO__WidgetsAskUserActionHandler) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn DumpObjectInfo(self: KIO__WidgetsAskUserActionHandler) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KIO__WidgetsAskUserActionHandler, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KIO__WidgetsAskUserActionHandler, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio__widgetsaskuseractionhandler.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__widgetsaskuseractionhandler.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn BindingStorage(self: KIO__WidgetsAskUserActionHandler) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn BindingStorage2(self: KIO__WidgetsAskUserActionHandler) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn Destroyed(self: KIO__WidgetsAskUserActionHandler) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn Parent(self: KIO__WidgetsAskUserActionHandler) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KIO__WidgetsAskUserActionHandler, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn DeleteLater(self: KIO__WidgetsAskUserActionHandler) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KIO__WidgetsAskUserActionHandler, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KIO__WidgetsAskUserActionHandler, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KIO__WidgetsAskUserActionHandler, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KIO__WidgetsAskUserActionHandler, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KIO__WidgetsAskUserActionHandler, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KIO__WidgetsAskUserActionHandler, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__WidgetsAskUserActionHandler_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KIO__WidgetsAskUserActionHandler, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QEvent) callconv(.c) bool) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KIO__WidgetsAskUserActionHandler, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__WidgetsAskUserActionHandler_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KIO__WidgetsAskUserActionHandler, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KIO__WidgetsAskUserActionHandler, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIO__WidgetsAskUserActionHandler_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KIO__WidgetsAskUserActionHandler, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIO__WidgetsAskUserActionHandler_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QTimerEvent) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KIO__WidgetsAskUserActionHandler, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIO__WidgetsAskUserActionHandler_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KIO__WidgetsAskUserActionHandler, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIO__WidgetsAskUserActionHandler_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QChildEvent) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KIO__WidgetsAskUserActionHandler, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIO__WidgetsAskUserActionHandler_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KIO__WidgetsAskUserActionHandler, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIO__WidgetsAskUserActionHandler_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QEvent) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KIO__WidgetsAskUserActionHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__WidgetsAskUserActionHandler_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KIO__WidgetsAskUserActionHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__WidgetsAskUserActionHandler_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KIO__WidgetsAskUserActionHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__WidgetsAskUserActionHandler_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KIO__WidgetsAskUserActionHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__WidgetsAskUserActionHandler_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn Sender(self: KIO__WidgetsAskUserActionHandler) QObject {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn SuperSender(self: KIO__WidgetsAskUserActionHandler) QObject {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KIO__WidgetsAskUserActionHandler, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn SenderSignalIndex(self: KIO__WidgetsAskUserActionHandler) i32 {
        return qtc.KIO__WidgetsAskUserActionHandler_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn SuperSenderSignalIndex(self: KIO__WidgetsAskUserActionHandler) i32 {
        return qtc.KIO__WidgetsAskUserActionHandler_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KIO__WidgetsAskUserActionHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__WidgetsAskUserActionHandler_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KIO__WidgetsAskUserActionHandler, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__WidgetsAskUserActionHandler_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KIO__WidgetsAskUserActionHandler, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler`
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QMetaMethod) callconv(.c) bool) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn Delete(self: KIO__WidgetsAskUserActionHandler) void {
        qtc.KIO__WidgetsAskUserActionHandler_Delete(@ptrCast(self.ptr));
    }
};
