const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJob = @import("libqt6").KJob;
const QAction = @import("libqt6").QAction;
const QActionGroup = @import("libqt6").QActionGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QIcon = @import("libqt6").QIcon;
const QKeySequence = @import("libqt6").QKeySequence;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knewfilemenu.html)
pub const KNewFileMenu = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNewFileMenu,

    pub const _is_KNewFileMenu = {};
    pub const _is_KActionMenu = {};
    pub const _is_QWidgetAction = {};
    pub const _is_QAction = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNewFileMenu object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(_parent: anytype) KNewFileMenu {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KNewFileMenu_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn metaObject(self: KNewFileMenu) QMetaObject {
        return .{ .ptr = qtc.KNewFileMenu_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KNewFileMenu, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KNewFileMenu_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    pub fn superMetaObject(self: KNewFileMenu) QMetaObject {
        return .{ .ptr = qtc.KNewFileMenu_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KNewFileMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNewFileMenu_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KNewFileMenu, callback: *const fn (KNewFileMenu, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KNewFileMenu_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KNewFileMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KNewFileMenu_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KNewFileMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNewFileMenu_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KNewFileMenu, callback: *const fn (KNewFileMenu, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KNewFileMenu_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KNewFileMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KNewFileMenu_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isModal(self: KNewFileMenu) bool {
        return qtc.KNewFileMenu_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModal` instead
    ///
    pub const SetModal = setModal;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#setModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` modality: bool `
    ///
    pub fn setModal(self: KNewFileMenu, modality: bool) void {
        qtc.KNewFileMenu_SetModal(@ptrCast(self.ptr), modality);
    }

    /// ### DEPRECATED: Use `setParentWidget` instead
    ///
    pub const SetParentWidget = setParentWidget;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#setParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn setParentWidget(self: KNewFileMenu, parentWidget: anytype) void {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        qtc.KNewFileMenu_SetParentWidget(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr));
    }

    /// ### DEPRECATED: Use `setWorkingDirectory` instead
    ///
    pub const SetWorkingDirectory = setWorkingDirectory;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` directory: QUrl `
    ///
    pub fn setWorkingDirectory(self: KNewFileMenu, directory: anytype) void {
        comptime _ = @TypeOf(directory)._is_QUrl;
        qtc.KNewFileMenu_SetWorkingDirectory(@ptrCast(self.ptr), @ptrCast(directory.ptr));
    }

    /// ### DEPRECATED: Use `workingDirectory` instead
    ///
    pub const WorkingDirectory = workingDirectory;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn workingDirectory(self: KNewFileMenu) QUrl {
        return .{ .ptr = qtc.KNewFileMenu_WorkingDirectory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSupportedMimeTypes` instead
    ///
    pub const SetSupportedMimeTypes = setSupportedMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#setSupportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mime: []const []const u8 `
    ///
    pub fn setSupportedMimeTypes(self: KNewFileMenu, allocator: std.mem.Allocator, mime: []const []const u8) void {
        const mime_arr = allocator.alloc(qtc.libqt_string, mime.len) catch @panic("KNewFileMenu.setSupportedMimeTypes: Memory allocation failed");
        defer allocator.free(mime_arr);
        for (mime, 0..mime.len) |str_item, i|
            mime_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const mime_list = qtc.libqt_list{
            .len = mime.len,
            .data = mime_arr.ptr,
        };
        qtc.KNewFileMenu_SetSupportedMimeTypes(@ptrCast(self.ptr), mime_list);
    }

    /// ### DEPRECATED: Use `supportedMimeTypes` instead
    ///
    pub const SupportedMimeTypes = supportedMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#supportedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedMimeTypes(self: KNewFileMenu, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNewFileMenu_SupportedMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNewFileMenu.supportedMimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNewFileMenu.supportedMimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setSelectDirWhenAlreadyExist` instead
    ///
    pub const SetSelectDirWhenAlreadyExist = setSelectDirWhenAlreadyExist;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#setSelectDirWhenAlreadyExist)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` b: bool `
    ///
    pub fn setSelectDirWhenAlreadyExist(self: KNewFileMenu, b: bool) void {
        qtc.KNewFileMenu_SetSelectDirWhenAlreadyExist(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setNewFolderShortcutAction` instead
    ///
    pub const SetNewFolderShortcutAction = setNewFolderShortcutAction;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#setNewFolderShortcutAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn setNewFolderShortcutAction(self: KNewFileMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KNewFileMenu_SetNewFolderShortcutAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `setNewFileShortcutAction` instead
    ///
    pub const SetNewFileShortcutAction = setNewFileShortcutAction;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#setNewFileShortcutAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn setNewFileShortcutAction(self: KNewFileMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KNewFileMenu_SetNewFileShortcutAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `isCreateDirectoryRunning` instead
    ///
    pub const IsCreateDirectoryRunning = isCreateDirectoryRunning;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#isCreateDirectoryRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isCreateDirectoryRunning(self: KNewFileMenu) bool {
        return qtc.KNewFileMenu_IsCreateDirectoryRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCreateFileRunning` instead
    ///
    pub const IsCreateFileRunning = isCreateFileRunning;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#isCreateFileRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isCreateFileRunning(self: KNewFileMenu) bool {
        return qtc.KNewFileMenu_IsCreateFileRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowTitle` instead
    ///
    pub const SetWindowTitle = setWindowTitle;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setWindowTitle(self: KNewFileMenu, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KNewFileMenu_SetWindowTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `checkUpToDate` instead
    ///
    pub const CheckUpToDate = checkUpToDate;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#checkUpToDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn checkUpToDate(self: KNewFileMenu) void {
        qtc.KNewFileMenu_CheckUpToDate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createDirectory` instead
    ///
    pub const CreateDirectory = createDirectory;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#createDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn createDirectory(self: KNewFileMenu) void {
        qtc.KNewFileMenu_CreateDirectory(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createFile` instead
    ///
    pub const CreateFile = createFile;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#createFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn createFile(self: KNewFileMenu) void {
        qtc.KNewFileMenu_CreateFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fileCreationStarted` instead
    ///
    pub const FileCreationStarted = fileCreationStarted;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreationStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn fileCreationStarted(self: KNewFileMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KNewFileMenu_FileCreationStarted(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onFileCreationStarted` instead
    ///
    pub const OnFileCreationStarted = onFileCreationStarted;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreationStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, url: QUrl) callconv(.c) void `
    ///
    pub fn onFileCreationStarted(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QUrl) callconv(.c) void) void {
        qtc.KNewFileMenu_Connect_FileCreationStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fileCreated` instead
    ///
    pub const FileCreated = fileCreated;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn fileCreated(self: KNewFileMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KNewFileMenu_FileCreated(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onFileCreated` instead
    ///
    pub const OnFileCreated = onFileCreated;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, url: QUrl) callconv(.c) void `
    ///
    pub fn onFileCreated(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QUrl) callconv(.c) void) void {
        qtc.KNewFileMenu_Connect_FileCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fileCreationRejected` instead
    ///
    pub const FileCreationRejected = fileCreationRejected;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreationRejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn fileCreationRejected(self: KNewFileMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KNewFileMenu_FileCreationRejected(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onFileCreationRejected` instead
    ///
    pub const OnFileCreationRejected = onFileCreationRejected;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#fileCreationRejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, url: QUrl) callconv(.c) void `
    ///
    pub fn onFileCreationRejected(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QUrl) callconv(.c) void) void {
        qtc.KNewFileMenu_Connect_FileCreationRejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `directoryCreationStarted` instead
    ///
    pub const DirectoryCreationStarted = directoryCreationStarted;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreationStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn directoryCreationStarted(self: KNewFileMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KNewFileMenu_DirectoryCreationStarted(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onDirectoryCreationStarted` instead
    ///
    pub const OnDirectoryCreationStarted = onDirectoryCreationStarted;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreationStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, url: QUrl) callconv(.c) void `
    ///
    pub fn onDirectoryCreationStarted(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QUrl) callconv(.c) void) void {
        qtc.KNewFileMenu_Connect_DirectoryCreationStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `directoryCreated` instead
    ///
    pub const DirectoryCreated = directoryCreated;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn directoryCreated(self: KNewFileMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KNewFileMenu_DirectoryCreated(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onDirectoryCreated` instead
    ///
    pub const OnDirectoryCreated = onDirectoryCreated;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, url: QUrl) callconv(.c) void `
    ///
    pub fn onDirectoryCreated(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QUrl) callconv(.c) void) void {
        qtc.KNewFileMenu_Connect_DirectoryCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `directoryCreationRejected` instead
    ///
    pub const DirectoryCreationRejected = directoryCreationRejected;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreationRejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn directoryCreationRejected(self: KNewFileMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KNewFileMenu_DirectoryCreationRejected(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onDirectoryCreationRejected` instead
    ///
    pub const OnDirectoryCreationRejected = onDirectoryCreationRejected;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#directoryCreationRejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, url: QUrl) callconv(.c) void `
    ///
    pub fn onDirectoryCreationRejected(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QUrl) callconv(.c) void) void {
        qtc.KNewFileMenu_Connect_DirectoryCreationRejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectExistingDir` instead
    ///
    pub const SelectExistingDir = selectExistingDir;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#selectExistingDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn selectExistingDir(self: KNewFileMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KNewFileMenu_SelectExistingDir(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onSelectExistingDir` instead
    ///
    pub const OnSelectExistingDir = onSelectExistingDir;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#selectExistingDir)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, url: QUrl) callconv(.c) void `
    ///
    pub fn onSelectExistingDir(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QUrl) callconv(.c) void) void {
        qtc.KNewFileMenu_Connect_SelectExistingDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotResult` instead
    ///
    pub const SlotResult = slotResult;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#slotResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` job: KJob `
    ///
    pub fn slotResult(self: KNewFileMenu, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KNewFileMenu_SlotResult(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onSlotResult` instead
    ///
    pub const OnSlotResult = onSlotResult;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#slotResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, job: KJob) callconv(.c) void `
    ///
    pub fn onSlotResult(self: KNewFileMenu, callback: *const fn (KNewFileMenu, KJob) callconv(.c) void) void {
        qtc.KNewFileMenu_OnSlotResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSlotResult` instead
    ///
    pub const SuperSlotResult = superSlotResult;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#slotResult)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` job: KJob `
    ///
    pub fn superSlotResult(self: KNewFileMenu, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KNewFileMenu_SuperSlotResult(@ptrCast(self.ptr), @ptrCast(job.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: KNewFileMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionMenu_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `addSeparator` instead
    ///
    pub const AddSeparator = addSeparator;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#addSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn addSeparator(self: KNewFileMenu) QAction {
        return .{ .ptr = qtc.KActionMenu_AddSeparator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: KNewFileMenu, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionMenu_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `insertSeparator` instead
    ///
    pub const InsertSeparator = insertSeparator;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#insertSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` before: QAction `
    ///
    pub fn insertSeparator(self: KNewFileMenu, before: anytype) QAction {
        comptime _ = @TypeOf(before)._is_QAction;
        return .{ .ptr = qtc.KActionMenu_InsertSeparator(@ptrCast(self.ptr), @ptrCast(before.ptr)) };
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: KNewFileMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionMenu_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `popupMode` instead
    ///
    pub const PopupMode = popupMode;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#popupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ## Returns:
    ///
    /// ` qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn popupMode(self: KNewFileMenu) i32 {
        return qtc.KActionMenu_PopupMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPopupMode` instead
    ///
    pub const SetPopupMode = setPopupMode;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#setPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _popupMode: qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn setPopupMode(self: KNewFileMenu, _popupMode: i32) void {
        qtc.KActionMenu_SetPopupMode(@ptrCast(self.ptr), @bitCast(_popupMode));
    }

    /// ### DEPRECATED: Use `setDefaultWidget` instead
    ///
    pub const SetDefaultWidget = setDefaultWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` w: QWidget `
    ///
    pub fn setDefaultWidget(self: KNewFileMenu, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `defaultWidget` instead
    ///
    pub const DefaultWidget = defaultWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn defaultWidget(self: KNewFileMenu) QWidget {
        return .{ .ptr = qtc.QWidgetAction_DefaultWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `requestWidget` instead
    ///
    pub const RequestWidget = requestWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn requestWidget(self: KNewFileMenu, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidgetAction_RequestWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `releaseWidget` instead
    ///
    pub const ReleaseWidget = releaseWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn releaseWidget(self: KNewFileMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `associatedObjects` instead
    ///
    pub const AssociatedObjects = associatedObjects;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn associatedObjects(self: KNewFileMenu, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KNewFileMenu.associatedObjects: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setActionGroup` instead
    ///
    pub const SetActionGroup = setActionGroup;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` group: QActionGroup `
    ///
    pub fn setActionGroup(self: KNewFileMenu, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QActionGroup;
        qtc.QAction_SetActionGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `actionGroup` instead
    ///
    pub const ActionGroup = actionGroup;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn actionGroup(self: KNewFileMenu) QActionGroup {
        return .{ .ptr = qtc.QAction_ActionGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: KNewFileMenu, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QAction_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn icon(self: KNewFileMenu) QIcon {
        return .{ .ptr = qtc.QAction_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: KNewFileMenu, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAction_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KNewFileMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIconText` instead
    ///
    pub const SetIconText = setIconText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setIconText(self: KNewFileMenu, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAction_SetIconText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `iconText` instead
    ///
    pub const IconText = iconText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconText(self: KNewFileMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_IconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.iconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn setToolTip(self: KNewFileMenu, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QAction_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KNewFileMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KNewFileMenu, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QAction_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: KNewFileMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` what: []const u8 `
    ///
    pub fn setWhatsThis(self: KNewFileMenu, what: []const u8) void {
        const what_str = qtc.libqt_string{
            .len = what.len,
            .data = what.ptr,
        };
        qtc.QAction_SetWhatsThis(@ptrCast(self.ptr), what_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KNewFileMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPriority` instead
    ///
    pub const SetPriority = setPriority;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _priority: qaction_enums.Priority `
    ///
    pub fn setPriority(self: KNewFileMenu, _priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self.ptr), @bitCast(_priority));
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.Priority `
    ///
    pub fn priority(self: KNewFileMenu) i32 {
        return qtc.QAction_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSeparator` instead
    ///
    pub const SetSeparator = setSeparator;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` b: bool `
    ///
    pub fn setSeparator(self: KNewFileMenu, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isSeparator(self: KNewFileMenu) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortcut` instead
    ///
    pub const SetShortcut = setShortcut;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _shortcut: QKeySequence `
    ///
    pub fn setShortcut(self: KNewFileMenu, _shortcut: anytype) void {
        comptime _ = @TypeOf(_shortcut)._is_QKeySequence;
        qtc.QAction_SetShortcut(@ptrCast(self.ptr), @ptrCast(_shortcut.ptr));
    }

    /// ### DEPRECATED: Use `shortcut` instead
    ///
    pub const Shortcut = shortcut;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn shortcut(self: KNewFileMenu) QKeySequence {
        return .{ .ptr = qtc.QAction_Shortcut(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShortcuts` instead
    ///
    pub const SetShortcuts = setShortcuts;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _shortcuts: []QKeySequence `
    ///
    pub fn setShortcuts(self: KNewFileMenu, _shortcuts: []QKeySequence) void {
        const shortcuts_list = qtc.libqt_list{
            .len = _shortcuts.len,
            .data = @ptrCast(_shortcuts.ptr),
        };
        qtc.QAction_SetShortcuts(@ptrCast(self.ptr), shortcuts_list);
    }

    /// ### DEPRECATED: Use `setShortcuts2` instead
    ///
    pub const SetShortcuts2 = setShortcuts2;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _shortcuts: qkeysequence_enums.StandardKey `
    ///
    pub fn setShortcuts2(self: KNewFileMenu, _shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self.ptr), @bitCast(_shortcuts));
    }

    /// ### DEPRECATED: Use `shortcuts` instead
    ///
    pub const Shortcuts = shortcuts;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shortcuts(self: KNewFileMenu, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KNewFileMenu.shortcuts: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setShortcutContext` instead
    ///
    pub const SetShortcutContext = setShortcutContext;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn setShortcutContext(self: KNewFileMenu, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `shortcutContext` instead
    ///
    pub const ShortcutContext = shortcutContext;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn shortcutContext(self: KNewFileMenu) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoRepeat` instead
    ///
    pub const SetAutoRepeat = setAutoRepeat;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _autoRepeat: bool `
    ///
    pub fn setAutoRepeat(self: KNewFileMenu, _autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self.ptr), _autoRepeat);
    }

    /// ### DEPRECATED: Use `autoRepeat` instead
    ///
    pub const AutoRepeat = autoRepeat;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn autoRepeat(self: KNewFileMenu) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KNewFileMenu, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QAction_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn font(self: KNewFileMenu) QFont {
        return .{ .ptr = qtc.QAction_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCheckable` instead
    ///
    pub const SetCheckable = setCheckable;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` checkable: bool `
    ///
    pub fn setCheckable(self: KNewFileMenu, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `isCheckable` instead
    ///
    pub const IsCheckable = isCheckable;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isCheckable(self: KNewFileMenu) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn data(self: KNewFileMenu) QVariant {
        return .{ .ptr = qtc.QAction_Data(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` varVal: QVariant `
    ///
    pub fn setData(self: KNewFileMenu, varVal: anytype) void {
        comptime _ = @TypeOf(varVal)._is_QVariant;
        qtc.QAction_SetData(@ptrCast(self.ptr), @ptrCast(varVal.ptr));
    }

    /// ### DEPRECATED: Use `isChecked` instead
    ///
    pub const IsChecked = isChecked;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isChecked(self: KNewFileMenu) bool {
        return qtc.QAction_IsChecked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isEnabled(self: KNewFileMenu) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isVisible(self: KNewFileMenu) bool {
        return qtc.QAction_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _event: qaction_enums.ActionEvent `
    ///
    pub fn activate(self: KNewFileMenu, _event: i32) void {
        qtc.QAction_Activate(@ptrCast(self.ptr), @bitCast(_event));
    }

    /// ### DEPRECATED: Use `setMenuRole` instead
    ///
    pub const SetMenuRole = setMenuRole;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _menuRole: qaction_enums.MenuRole `
    ///
    pub fn setMenuRole(self: KNewFileMenu, _menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self.ptr), @bitCast(_menuRole));
    }

    /// ### DEPRECATED: Use `menuRole` instead
    ///
    pub const MenuRole = menuRole;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.MenuRole `
    ///
    pub fn menuRole(self: KNewFileMenu) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconVisibleInMenu` instead
    ///
    pub const SetIconVisibleInMenu = setIconVisibleInMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn setIconVisibleInMenu(self: KNewFileMenu, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isIconVisibleInMenu` instead
    ///
    pub const IsIconVisibleInMenu = isIconVisibleInMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isIconVisibleInMenu(self: KNewFileMenu) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortcutVisibleInContextMenu` instead
    ///
    pub const SetShortcutVisibleInContextMenu = setShortcutVisibleInContextMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` show: bool `
    ///
    pub fn setShortcutVisibleInContextMenu(self: KNewFileMenu, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `isShortcutVisibleInContextMenu` instead
    ///
    pub const IsShortcutVisibleInContextMenu = isShortcutVisibleInContextMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn isShortcutVisibleInContextMenu(self: KNewFileMenu) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showStatusText` instead
    ///
    pub const ShowStatusText = showStatusText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn showStatusText(self: KNewFileMenu) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `trigger` instead
    ///
    pub const Trigger = trigger;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn trigger(self: KNewFileMenu) void {
        qtc.QAction_Trigger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hover` instead
    ///
    pub const Hover = hover;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn hover(self: KNewFileMenu) void {
        qtc.QAction_Hover(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChecked` instead
    ///
    pub const SetChecked = setChecked;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` checked: bool `
    ///
    pub fn setChecked(self: KNewFileMenu, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `toggle` instead
    ///
    pub const Toggle = toggle;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn toggle(self: KNewFileMenu) void {
        qtc.QAction_Toggle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KNewFileMenu, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `resetEnabled` instead
    ///
    pub const ResetEnabled = resetEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn resetEnabled(self: KNewFileMenu) void {
        qtc.QAction_ResetEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` b: bool `
    ///
    pub fn setDisabled(self: KNewFileMenu, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: KNewFileMenu, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn changed(self: KNewFileMenu) void {
        qtc.QAction_Changed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu) callconv(.c) void `
    ///
    pub fn onChanged(self: KNewFileMenu, callback: *const fn (KNewFileMenu) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: KNewFileMenu, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: KNewFileMenu, callback: *const fn (KNewFileMenu, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `checkableChanged` instead
    ///
    pub const CheckableChanged = checkableChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` checkable: bool `
    ///
    pub fn checkableChanged(self: KNewFileMenu, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `onCheckableChanged` instead
    ///
    pub const OnCheckableChanged = onCheckableChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, checkable: bool) callconv(.c) void `
    ///
    pub fn onCheckableChanged(self: KNewFileMenu, callback: *const fn (KNewFileMenu, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn visibleChanged(self: KNewFileMenu) void {
        qtc.QAction_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: KNewFileMenu, callback: *const fn (KNewFileMenu) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `triggered` instead
    ///
    pub const Triggered = triggered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn triggered(self: KNewFileMenu) void {
        qtc.QAction_Triggered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTriggered` instead
    ///
    pub const OnTriggered = onTriggered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu) callconv(.c) void `
    ///
    pub fn onTriggered(self: KNewFileMenu, callback: *const fn (KNewFileMenu) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn hovered(self: KNewFileMenu) void {
        qtc.QAction_Hovered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu) callconv(.c) void `
    ///
    pub fn onHovered(self: KNewFileMenu, callback: *const fn (KNewFileMenu) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toggled` instead
    ///
    pub const Toggled = toggled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: bool `
    ///
    pub fn toggled(self: KNewFileMenu, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onToggled` instead
    ///
    pub const OnToggled = onToggled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, param1: bool) callconv(.c) void `
    ///
    pub fn onToggled(self: KNewFileMenu, callback: *const fn (KNewFileMenu, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showStatusText1` instead
    ///
    pub const ShowStatusText1 = showStatusText1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` object: QObject `
    ///
    pub fn showStatusText1(self: KNewFileMenu, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAction_ShowStatusText1(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `triggered1` instead
    ///
    pub const Triggered1 = triggered1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` checked: bool `
    ///
    pub fn triggered1(self: KNewFileMenu, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `onTriggered1` instead
    ///
    pub const OnTriggered1 = onTriggered1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, checked: bool) callconv(.c) void `
    ///
    pub fn onTriggered1(self: KNewFileMenu, callback: *const fn (KNewFileMenu, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KNewFileMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNewFileMenu.objectName: Memory allocation failed");
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
    /// ` self: KNewFileMenu `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KNewFileMenu, name: []const u8) void {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn isWidgetType(self: KNewFileMenu) bool {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn isWindowType(self: KNewFileMenu) bool {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn isQuickItemType(self: KNewFileMenu) bool {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn signalsBlocked(self: KNewFileMenu) bool {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KNewFileMenu, b: bool) bool {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn thread(self: KNewFileMenu) QThread {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KNewFileMenu, _thread: anytype) bool {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KNewFileMenu, interval: i32) i32 {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KNewFileMenu, time: i64) i32 {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KNewFileMenu, id: i32) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KNewFileMenu, id: i32) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KNewFileMenu, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KNewFileMenu.children: Memory allocation failed");
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KNewFileMenu, _parent: anytype) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KNewFileMenu, filterObj: anytype) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KNewFileMenu, obj: anytype) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KNewFileMenu, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn disconnect3(self: KNewFileMenu) bool {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KNewFileMenu, receiver: anytype) bool {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn dumpObjectTree(self: KNewFileMenu) void {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn dumpObjectInfo(self: KNewFileMenu) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KNewFileMenu, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KNewFileMenu, name: [:0]const u8) QVariant {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KNewFileMenu, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KNewFileMenu.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNewFileMenu.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KNewFileMenu `
    ///
    pub fn bindingStorage(self: KNewFileMenu) QBindingStorage {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn bindingStorage2(self: KNewFileMenu) QBindingStorage {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn destroyed(self: KNewFileMenu) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KNewFileMenu, callback: *const fn (KNewFileMenu) callconv(.c) void) void {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn parent(self: KNewFileMenu) QObject {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KNewFileMenu, classname: [:0]const u8) bool {
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
    /// ` self: KNewFileMenu `
    ///
    pub fn deleteLater(self: KNewFileMenu) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KNewFileMenu, interval: i32, timerType: i32) i32 {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KNewFileMenu, time: i64, timerType: i32) i32 {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KNewFileMenu, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KNewFileMenu, signal: [:0]const u8) bool {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KNewFileMenu, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KNewFileMenu, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KNewFileMenu, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KNewFileMenu, param1: anytype) void {
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
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createWidget(self: KNewFileMenu, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KNewFileMenu_CreateWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreateWidget` instead
    ///
    pub const SuperCreateWidget = superCreateWidget;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn superCreateWidget(self: KNewFileMenu, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KNewFileMenu_SuperCreateWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateWidget` instead
    ///
    pub const OnCreateWidget = onCreateWidget;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn onCreateWidget(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QWidget) callconv(.c) QWidget) void {
        qtc.KNewFileMenu_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: KNewFileMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KNewFileMenu_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: KNewFileMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KNewFileMenu_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QEvent) callconv(.c) bool) void {
        qtc.KNewFileMenu_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn eventFilter(self: KNewFileMenu, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.KNewFileMenu_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superEventFilter(self: KNewFileMenu, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.KNewFileMenu_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QObject, QEvent) callconv(.c) bool) void {
        qtc.KNewFileMenu_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `deleteWidget` instead
    ///
    pub const DeleteWidget = deleteWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn deleteWidget(self: KNewFileMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KNewFileMenu_DeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `superDeleteWidget` instead
    ///
    pub const SuperDeleteWidget = superDeleteWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superDeleteWidget(self: KNewFileMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KNewFileMenu_SuperDeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDeleteWidget` instead
    ///
    pub const OnDeleteWidget = onDeleteWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, widget: QWidget) callconv(.c) void `
    ///
    pub fn onDeleteWidget(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QWidget) callconv(.c) void) void {
        qtc.KNewFileMenu_OnDeleteWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KNewFileMenu, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNewFileMenu_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KNewFileMenu, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KNewFileMenu_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QTimerEvent) callconv(.c) void) void {
        qtc.KNewFileMenu_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KNewFileMenu, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNewFileMenu_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KNewFileMenu, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KNewFileMenu_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QChildEvent) callconv(.c) void) void {
        qtc.KNewFileMenu_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KNewFileMenu, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNewFileMenu_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KNewFileMenu, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KNewFileMenu_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QEvent) callconv(.c) void) void {
        qtc.KNewFileMenu_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KNewFileMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNewFileMenu_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KNewFileMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNewFileMenu_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KNewFileMenu_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KNewFileMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNewFileMenu_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KNewFileMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KNewFileMenu_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KNewFileMenu_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createdWidgets` instead
    ///
    pub const CreatedWidgets = createdWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn createdWidgets(self: KNewFileMenu, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KNewFileMenu_CreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KNewFileMenu.createdWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superCreatedWidgets` instead
    ///
    pub const SuperCreatedWidgets = superCreatedWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNewFileMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superCreatedWidgets(self: KNewFileMenu, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KNewFileMenu_SuperCreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KNewFileMenu.createdWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onCreatedWidgets` instead
    ///
    pub const OnCreatedWidgets = onCreatedWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn onCreatedWidgets(self: KNewFileMenu, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KNewFileMenu_OnCreatedWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    pub fn sender(self: KNewFileMenu) QObject {
        return .{ .ptr = qtc.KNewFileMenu_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KNewFileMenu `
    ///
    pub fn superSender(self: KNewFileMenu) QObject {
        return .{ .ptr = qtc.KNewFileMenu_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KNewFileMenu, callback: *const fn () callconv(.c) QObject) void {
        qtc.KNewFileMenu_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    pub fn senderSignalIndex(self: KNewFileMenu) i32 {
        return qtc.KNewFileMenu_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNewFileMenu `
    ///
    pub fn superSenderSignalIndex(self: KNewFileMenu) i32 {
        return qtc.KNewFileMenu_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KNewFileMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KNewFileMenu_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KNewFileMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNewFileMenu_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KNewFileMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KNewFileMenu_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KNewFileMenu, callback: *const fn (KNewFileMenu, [*:0]const u8) callconv(.c) i32) void {
        qtc.KNewFileMenu_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KNewFileMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNewFileMenu_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KNewFileMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KNewFileMenu_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KNewFileMenu`
    ///
    /// ` callback: *const fn (self: KNewFileMenu, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KNewFileMenu, callback: *const fn (KNewFileMenu, QMetaMethod) callconv(.c) bool) void {
        qtc.KNewFileMenu_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KNewFileMenu `
    ///
    /// ` callback: *const fn (self: KNewFileMenu, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KNewFileMenu, callback: *const fn (KNewFileMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/knewfilemenu.html#dtor.KNewFileMenu)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNewFileMenu `
    ///
    pub fn delete(self: KNewFileMenu) void {
        qtc.KNewFileMenu_Delete(@ptrCast(self.ptr));
    }
};
