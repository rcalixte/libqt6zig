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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::WidgetsAskUserActionHandler object in C++ memory
    ///
    pub fn new() KIO__WidgetsAskUserActionHandler {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIO::WidgetsAskUserActionHandler object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KIO__WidgetsAskUserActionHandler {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn metaObject(self: KIO__WidgetsAskUserActionHandler) QMetaObject {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: KIO__WidgetsAskUserActionHandler, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn superMetaObject(self: KIO__WidgetsAskUserActionHandler) QMetaObject {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KIO__WidgetsAskUserActionHandler, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__WidgetsAskUserActionHandler_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KIO__WidgetsAskUserActionHandler, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KIO__WidgetsAskUserActionHandler, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__WidgetsAskUserActionHandler_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KIO__WidgetsAskUserActionHandler, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__WidgetsAskUserActionHandler_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__WidgetsAskUserActionHandler.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `askUserRename` instead
    ///
    pub const AskUserRename = askUserRename;

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
    pub fn askUserRename(self: KIO__WidgetsAskUserActionHandler, job: anytype, title: []const u8, src: anytype, dest: anytype, options: i32, sizeSrc: usize, sizeDest: usize, ctimeSrc: anytype, ctimeDest: anytype, mtimeSrc: anytype, mtimeDest: anytype) void {
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

    /// ### DEPRECATED: Use `onAskUserRename` instead
    ///
    pub const OnAskUserRename = onAskUserRename;

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
    pub fn onAskUserRename(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, KJob, [*:0]const u8, QUrl, QUrl, i32, usize, usize, QDateTime, QDateTime, QDateTime, QDateTime) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnAskUserRename(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAskUserRename` instead
    ///
    pub const SuperAskUserRename = superAskUserRename;

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
    pub fn superAskUserRename(self: KIO__WidgetsAskUserActionHandler, job: anytype, title: []const u8, src: anytype, dest: anytype, options: i32, sizeSrc: usize, sizeDest: usize, ctimeSrc: anytype, ctimeDest: anytype, mtimeSrc: anytype, mtimeDest: anytype) void {
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

    /// ### DEPRECATED: Use `askUserSkip` instead
    ///
    pub const AskUserSkip = askUserSkip;

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
    pub fn askUserSkip(self: KIO__WidgetsAskUserActionHandler, job: anytype, options: i32, error_text: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const error_text_str = qtc.libqt_string{
            .len = error_text.len,
            .data = error_text.ptr,
        };
        qtc.KIO__WidgetsAskUserActionHandler_AskUserSkip(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(options), error_text_str);
    }

    /// ### DEPRECATED: Use `onAskUserSkip` instead
    ///
    pub const OnAskUserSkip = onAskUserSkip;

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
    pub fn onAskUserSkip(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, KJob, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnAskUserSkip(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAskUserSkip` instead
    ///
    pub const SuperAskUserSkip = superAskUserSkip;

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
    pub fn superAskUserSkip(self: KIO__WidgetsAskUserActionHandler, job: anytype, options: i32, error_text: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const error_text_str = qtc.libqt_string{
            .len = error_text.len,
            .data = error_text.ptr,
        };
        qtc.KIO__WidgetsAskUserActionHandler_SuperAskUserSkip(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(options), error_text_str);
    }

    /// ### DEPRECATED: Use `askUserDelete` instead
    ///
    pub const AskUserDelete = askUserDelete;

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
    /// ` _parent: QWidget `
    ///
    pub fn askUserDelete(self: KIO__WidgetsAskUserActionHandler, urls: []QUrl, deletionType: i32, confirmationType: i32, _parent: anytype) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_AskUserDelete(@ptrCast(self.ptr), urls_list, @bitCast(deletionType), @bitCast(confirmationType), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onAskUserDelete` instead
    ///
    pub const OnAskUserDelete = onAskUserDelete;

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
    pub fn onAskUserDelete(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, qtc.libqt_list, i32, i32, QWidget) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnAskUserDelete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAskUserDelete` instead
    ///
    pub const SuperAskUserDelete = superAskUserDelete;

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
    /// ` _parent: QWidget `
    ///
    pub fn superAskUserDelete(self: KIO__WidgetsAskUserActionHandler, urls: []QUrl, deletionType: i32, confirmationType: i32, _parent: anytype) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_SuperAskUserDelete(@ptrCast(self.ptr), urls_list, @bitCast(deletionType), @bitCast(confirmationType), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `requestUserMessageBox` instead
    ///
    pub const RequestUserMessageBox = requestUserMessageBox;

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
    /// ` _parent: QWidget `
    ///
    pub fn requestUserMessageBox(self: KIO__WidgetsAskUserActionHandler, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, primaryActionIconName: []const u8, secondaryActionIconName: []const u8, dontAskAgainName: []const u8, details: []const u8, _parent: anytype) void {
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
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_RequestUserMessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str, secondaryActionText_str, primaryActionIconName_str, secondaryActionIconName_str, dontAskAgainName_str, details_str, @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRequestUserMessageBox` instead
    ///
    pub const OnRequestUserMessageBox = onRequestUserMessageBox;

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
    pub fn onRequestUserMessageBox(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, [*:0]const u8, QWidget) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnRequestUserMessageBox(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRequestUserMessageBox` instead
    ///
    pub const SuperRequestUserMessageBox = superRequestUserMessageBox;

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
    /// ` _parent: QWidget `
    ///
    pub fn superRequestUserMessageBox(self: KIO__WidgetsAskUserActionHandler, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, primaryActionIconName: []const u8, secondaryActionIconName: []const u8, dontAskAgainName: []const u8, details: []const u8, _parent: anytype) void {
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
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_SuperRequestUserMessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str, secondaryActionText_str, primaryActionIconName_str, secondaryActionIconName_str, dontAskAgainName_str, details_str, @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `askIgnoreSslErrors` instead
    ///
    pub const AskIgnoreSslErrors = askIgnoreSslErrors;

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
    /// ` _parent: QWidget `
    ///
    pub fn askIgnoreSslErrors(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator, sslErrorData: ArrayMap_constu8_QVariant, _parent: anytype) void {
        const sslErrorData_count = sslErrorData.count();
        const sslErrorData_keys = allocator.alloc(qtc.libqt_string, sslErrorData_count) catch @panic("KIO__WidgetsAskUserActionHandler.askIgnoreSslErrors: Memory allocation failed");
        defer allocator.free(sslErrorData_keys);
        const sslErrorData_values = allocator.alloc(QtC.QVariant, sslErrorData_count) catch @panic("KIO__WidgetsAskUserActionHandler.askIgnoreSslErrors: Memory allocation failed");
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
        qtc.KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors(@ptrCast(self.ptr), sslErrorData_map, @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onAskIgnoreSslErrors` instead
    ///
    pub const OnAskIgnoreSslErrors = onAskIgnoreSslErrors;

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
    pub fn onAskIgnoreSslErrors(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, qtc.libqt_map, QWidget) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnAskIgnoreSslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAskIgnoreSslErrors` instead
    ///
    pub const SuperAskIgnoreSslErrors = superAskIgnoreSslErrors;

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
    /// ` _parent: QWidget `
    ///
    pub fn superAskIgnoreSslErrors(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator, sslErrorData: ArrayMap_constu8_QVariant, _parent: anytype) void {
        const sslErrorData_count = sslErrorData.count();
        const sslErrorData_keys = allocator.alloc(qtc.libqt_string, sslErrorData_count) catch @panic("KIO__WidgetsAskUserActionHandler.askIgnoreSslErrors: Memory allocation failed");
        defer allocator.free(sslErrorData_keys);
        const sslErrorData_values = allocator.alloc(QtC.QVariant, sslErrorData_count) catch @panic("KIO__WidgetsAskUserActionHandler.askIgnoreSslErrors: Memory allocation failed");
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
        qtc.KIO__WidgetsAskUserActionHandler_SuperAskIgnoreSslErrors(@ptrCast(self.ptr), sslErrorData_map, @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setWindow` instead
    ///
    pub const SetWindow = setWindow;

    /// ### [Upstream resources](https://api.kde.org/kio-widgetsaskuseractionhandler.html#setWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` window: QWidget `
    ///
    pub fn setWindow(self: KIO__WidgetsAskUserActionHandler, window: anytype) void {
        comptime _ = @TypeOf(window)._is_QWidget;
        qtc.KIO__WidgetsAskUserActionHandler_SetWindow(@ptrCast(self.ptr), @ptrCast(window.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__WidgetsAskUserActionHandler.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__WidgetsAskUserActionHandler.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `askUserRenameResult` instead
    ///
    pub const AskUserRenameResult = askUserRenameResult;

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
    pub fn askUserRenameResult(self: KIO__WidgetsAskUserActionHandler, result: i32, newUrl: anytype, parentJob: anytype) void {
        comptime _ = @TypeOf(newUrl)._is_QUrl;
        comptime _ = @TypeOf(parentJob)._is_KJob;
        qtc.KIO__AskUserActionInterface_AskUserRenameResult(@ptrCast(self.ptr), @bitCast(result), @ptrCast(newUrl.ptr), @ptrCast(parentJob.ptr));
    }

    /// ### DEPRECATED: Use `onAskUserRenameResult` instead
    ///
    pub const OnAskUserRenameResult = onAskUserRenameResult;

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
    pub fn onAskUserRenameResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32, QUrl, KJob) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserRenameResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `askUserSkipResult` instead
    ///
    pub const AskUserSkipResult = askUserSkipResult;

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
    pub fn askUserSkipResult(self: KIO__WidgetsAskUserActionHandler, result: i32, parentJob: anytype) void {
        comptime _ = @TypeOf(parentJob)._is_KJob;
        qtc.KIO__AskUserActionInterface_AskUserSkipResult(@ptrCast(self.ptr), @bitCast(result), @ptrCast(parentJob.ptr));
    }

    /// ### DEPRECATED: Use `onAskUserSkipResult` instead
    ///
    pub const OnAskUserSkipResult = onAskUserSkipResult;

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
    pub fn onAskUserSkipResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32, KJob) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserSkipResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `askUserDeleteResult` instead
    ///
    pub const AskUserDeleteResult = askUserDeleteResult;

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
    /// ` _parent: QWidget `
    ///
    pub fn askUserDeleteResult(self: KIO__WidgetsAskUserActionHandler, allowDelete: bool, urls: []QUrl, deletionType: i32, _parent: anytype) void {
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
    pub fn onAskUserDeleteResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, bool, qtc.libqt_list, i32, QWidget) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskUserDeleteResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `messageBoxResult` instead
    ///
    pub const MessageBoxResult = messageBoxResult;

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
    pub fn messageBoxResult(self: KIO__WidgetsAskUserActionHandler, result: i32) void {
        qtc.KIO__AskUserActionInterface_MessageBoxResult(@ptrCast(self.ptr), @bitCast(result));
    }

    /// ### DEPRECATED: Use `onMessageBoxResult` instead
    ///
    pub const OnMessageBoxResult = onMessageBoxResult;

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
    pub fn onMessageBoxResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_MessageBoxResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `askIgnoreSslErrorsResult` instead
    ///
    pub const AskIgnoreSslErrorsResult = askIgnoreSslErrorsResult;

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
    pub fn askIgnoreSslErrorsResult(self: KIO__WidgetsAskUserActionHandler, result: i32) void {
        qtc.KIO__AskUserActionInterface_AskIgnoreSslErrorsResult(@ptrCast(self.ptr), @bitCast(result));
    }

    /// ### DEPRECATED: Use `onAskIgnoreSslErrorsResult` instead
    ///
    pub const OnAskIgnoreSslErrorsResult = onAskIgnoreSslErrorsResult;

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
    pub fn onAskIgnoreSslErrorsResult(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, i32) callconv(.c) void) void {
        qtc.KIO__AskUserActionInterface_Connect_AskIgnoreSslErrorsResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__WidgetsAskUserActionHandler.objectName: Memory allocation failed");
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KIO__WidgetsAskUserActionHandler, name: []const u8) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn isWidgetType(self: KIO__WidgetsAskUserActionHandler) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn isWindowType(self: KIO__WidgetsAskUserActionHandler) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn isQuickItemType(self: KIO__WidgetsAskUserActionHandler) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn signalsBlocked(self: KIO__WidgetsAskUserActionHandler) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KIO__WidgetsAskUserActionHandler, b: bool) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn thread(self: KIO__WidgetsAskUserActionHandler) QThread {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KIO__WidgetsAskUserActionHandler, _thread: anytype) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KIO__WidgetsAskUserActionHandler, interval: i32) i32 {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KIO__WidgetsAskUserActionHandler, time: i64) i32 {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KIO__WidgetsAskUserActionHandler, id: i32) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KIO__WidgetsAskUserActionHandler, id: i32) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KIO__WidgetsAskUserActionHandler.children: Memory allocation failed");
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KIO__WidgetsAskUserActionHandler, _parent: anytype) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KIO__WidgetsAskUserActionHandler, filterObj: anytype) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KIO__WidgetsAskUserActionHandler, obj: anytype) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KIO__WidgetsAskUserActionHandler, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn disconnect3(self: KIO__WidgetsAskUserActionHandler) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KIO__WidgetsAskUserActionHandler, receiver: anytype) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn dumpObjectTree(self: KIO__WidgetsAskUserActionHandler) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn dumpObjectInfo(self: KIO__WidgetsAskUserActionHandler) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KIO__WidgetsAskUserActionHandler, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KIO__WidgetsAskUserActionHandler, name: [:0]const u8) QVariant {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KIO__WidgetsAskUserActionHandler, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KIO__WidgetsAskUserActionHandler.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__WidgetsAskUserActionHandler.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn bindingStorage(self: KIO__WidgetsAskUserActionHandler) QBindingStorage {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn bindingStorage2(self: KIO__WidgetsAskUserActionHandler) QBindingStorage {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn destroyed(self: KIO__WidgetsAskUserActionHandler) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler) callconv(.c) void) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn parent(self: KIO__WidgetsAskUserActionHandler) QObject {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KIO__WidgetsAskUserActionHandler, classname: [:0]const u8) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn deleteLater(self: KIO__WidgetsAskUserActionHandler) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KIO__WidgetsAskUserActionHandler, interval: i32, timerType: i32) i32 {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KIO__WidgetsAskUserActionHandler, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KIO__WidgetsAskUserActionHandler, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KIO__WidgetsAskUserActionHandler, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KIO__WidgetsAskUserActionHandler, param1: anytype) void {
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: KIO__WidgetsAskUserActionHandler, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__WidgetsAskUserActionHandler_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KIO__WidgetsAskUserActionHandler, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QEvent) callconv(.c) bool) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KIO__WidgetsAskUserActionHandler, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__WidgetsAskUserActionHandler_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KIO__WidgetsAskUserActionHandler, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KIO__WidgetsAskUserActionHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KIO__WidgetsAskUserActionHandler_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KIO__WidgetsAskUserActionHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KIO__WidgetsAskUserActionHandler_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QTimerEvent) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KIO__WidgetsAskUserActionHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KIO__WidgetsAskUserActionHandler_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KIO__WidgetsAskUserActionHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KIO__WidgetsAskUserActionHandler_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QChildEvent) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KIO__WidgetsAskUserActionHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KIO__WidgetsAskUserActionHandler_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KIO__WidgetsAskUserActionHandler, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KIO__WidgetsAskUserActionHandler_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QEvent) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: KIO__WidgetsAskUserActionHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__WidgetsAskUserActionHandler_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: KIO__WidgetsAskUserActionHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__WidgetsAskUserActionHandler_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: KIO__WidgetsAskUserActionHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__WidgetsAskUserActionHandler_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: KIO__WidgetsAskUserActionHandler, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__WidgetsAskUserActionHandler_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: KIO__WidgetsAskUserActionHandler) QObject {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: KIO__WidgetsAskUserActionHandler) QObject {
        return .{ .ptr = qtc.KIO__WidgetsAskUserActionHandler_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: KIO__WidgetsAskUserActionHandler, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: KIO__WidgetsAskUserActionHandler) i32 {
        return qtc.KIO__WidgetsAskUserActionHandler_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: KIO__WidgetsAskUserActionHandler) i32 {
        return qtc.KIO__WidgetsAskUserActionHandler_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: KIO__WidgetsAskUserActionHandler, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__WidgetsAskUserActionHandler_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: KIO__WidgetsAskUserActionHandler, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: KIO__WidgetsAskUserActionHandler, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__WidgetsAskUserActionHandler_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: KIO__WidgetsAskUserActionHandler, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__WidgetsAskUserActionHandler_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, QMetaMethod) callconv(.c) bool) void {
        qtc.KIO__WidgetsAskUserActionHandler_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    /// ` callback: *const fn (self: KIO__WidgetsAskUserActionHandler, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KIO__WidgetsAskUserActionHandler, callback: *const fn (KIO__WidgetsAskUserActionHandler, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__WidgetsAskUserActionHandler `
    ///
    pub fn delete(self: KIO__WidgetsAskUserActionHandler) void {
        qtc.KIO__WidgetsAskUserActionHandler_Delete(@ptrCast(self.ptr));
    }
};
