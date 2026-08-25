const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KIO__Job = @import("libqt6").KIO__Job;
const KParts__GUIActivateEvent = @import("libqt6").KParts__GUIActivateEvent;
const KParts__NavigationExtension = @import("libqt6").KParts__NavigationExtension;
const KParts__OpenUrlArguments = @import("libqt6").KParts__OpenUrlArguments;
const KParts__Part = @import("libqt6").KParts__Part;
const KParts__PartActivateEvent = @import("libqt6").KParts__PartActivateEvent;
const KParts__PartBase = @import("libqt6").KParts__PartBase;
const KParts__PartManager = @import("libqt6").KParts__PartManager;
const KPluginMetaData = @import("libqt6").KPluginMetaData;
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const KXMLGUIClient__StateChange = @import("libqt6").KXMLGUIClient__StateChange;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const kxmlguiclient_enums = @import("../extras-kxmlgui/libkxmlguiclient.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html)
pub const KParts__ReadWritePart = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__ReadWritePart,

    pub const _is_KParts__ReadWritePart = {};
    pub const _is_KParts__ReadOnlyPart = {};
    pub const _is_KParts__Part = {};
    pub const _is_QObject = {};
    pub const _is_KParts__PartBase = {};
    pub const _is_KXMLGUIClient = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KParts::ReadWritePart object in C++ memory
    ///
    pub fn new() KParts__ReadWritePart {
        return .{ .ptr = qtc.KParts__ReadWritePart_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KParts::ReadWritePart object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KParts__ReadWritePart {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KParts__ReadWritePart_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KParts::ReadWritePart object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    /// ` data: KPluginMetaData `
    ///
    pub fn new3(_parent: anytype, data: anytype) KParts__ReadWritePart {
        comptime _ = @TypeOf(_parent)._is_QObject;
        comptime _ = @TypeOf(data)._is_KPluginMetaData;
        return .{ .ptr = qtc.KParts__ReadWritePart_new3(@ptrCast(_parent.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn metaObject(self: KParts__ReadWritePart) QMetaObject {
        return .{ .ptr = qtc.KParts__ReadWritePart_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__ReadWritePart_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superMetaObject(self: KParts__ReadWritePart) QMetaObject {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KParts__ReadWritePart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadWritePart_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__ReadWritePart_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KParts__ReadWritePart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadWritePart_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KParts__ReadWritePart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadWritePart_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__ReadWritePart_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KParts__ReadWritePart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadWritePart_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isReadWrite` instead
    ///
    pub const IsReadWrite = isReadWrite;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isReadWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn isReadWrite(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_IsReadWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadWrite` instead
    ///
    pub const SetReadWrite = setReadWrite;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` readwrite: bool `
    ///
    pub fn setReadWrite(self: KParts__ReadWritePart, readwrite: bool) void {
        qtc.KParts__ReadWritePart_SetReadWrite(@ptrCast(self.ptr), readwrite);
    }

    /// ### DEPRECATED: Use `onSetReadWrite` instead
    ///
    pub const OnSetReadWrite = onSetReadWrite;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, readwrite: bool) callconv(.c) void `
    ///
    pub fn onSetReadWrite(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetReadWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetReadWrite` instead
    ///
    pub const SuperSetReadWrite = superSetReadWrite;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` readwrite: bool `
    ///
    pub fn superSetReadWrite(self: KParts__ReadWritePart, readwrite: bool) void {
        qtc.KParts__ReadWritePart_SuperSetReadWrite(@ptrCast(self.ptr), readwrite);
    }

    /// ### DEPRECATED: Use `isModified` instead
    ///
    pub const IsModified = isModified;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn isModified(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_IsModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryClose` instead
    ///
    pub const QueryClose = queryClose;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn queryClose(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_QueryClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onQueryClose` instead
    ///
    pub const OnQueryClose = onQueryClose;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onQueryClose(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superQueryClose` instead
    ///
    pub const SuperQueryClose = superQueryClose;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superQueryClose(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperQueryClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closeUrl` instead
    ///
    pub const CloseUrl = closeUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn closeUrl(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_CloseUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseUrl` instead
    ///
    pub const OnCloseUrl = onCloseUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCloseUrl(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnCloseUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCloseUrl` instead
    ///
    pub const SuperCloseUrl = superCloseUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superCloseUrl(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperCloseUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closeUrl2` instead
    ///
    pub const CloseUrl2 = closeUrl2;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` promptToSave: bool `
    ///
    pub fn closeUrl2(self: KParts__ReadWritePart, promptToSave: bool) bool {
        return qtc.KParts__ReadWritePart_CloseUrl2(@ptrCast(self.ptr), promptToSave);
    }

    /// ### DEPRECATED: Use `onCloseUrl2` instead
    ///
    pub const OnCloseUrl2 = onCloseUrl2;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, promptToSave: bool) callconv(.c) bool `
    ///
    pub fn onCloseUrl2(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, bool) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnCloseUrl2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCloseUrl2` instead
    ///
    pub const SuperCloseUrl2 = superCloseUrl2;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` promptToSave: bool `
    ///
    pub fn superCloseUrl2(self: KParts__ReadWritePart, promptToSave: bool) bool {
        return qtc.KParts__ReadWritePart_SuperCloseUrl2(@ptrCast(self.ptr), promptToSave);
    }

    /// ### DEPRECATED: Use `saveAs` instead
    ///
    pub const SaveAs = saveAs;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn saveAs(self: KParts__ReadWritePart, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadWritePart_SaveAs(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onSaveAs` instead
    ///
    pub const OnSaveAs = onSaveAs;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, url: QUrl) callconv(.c) bool `
    ///
    pub fn onSaveAs(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QUrl) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnSaveAs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveAs` instead
    ///
    pub const SuperSaveAs = superSaveAs;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn superSaveAs(self: KParts__ReadWritePart, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadWritePart_SuperSaveAs(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `setModified` instead
    ///
    pub const SetModified = setModified;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` modified: bool `
    ///
    pub fn setModified(self: KParts__ReadWritePart, modified: bool) void {
        qtc.KParts__ReadWritePart_SetModified(@ptrCast(self.ptr), modified);
    }

    /// ### DEPRECATED: Use `onSetModified` instead
    ///
    pub const OnSetModified = onSetModified;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, modified: bool) callconv(.c) void `
    ///
    pub fn onSetModified(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetModified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModified` instead
    ///
    pub const SuperSetModified = superSetModified;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` modified: bool `
    ///
    pub fn superSetModified(self: KParts__ReadWritePart, modified: bool) void {
        qtc.KParts__ReadWritePart_SuperSetModified(@ptrCast(self.ptr), modified);
    }

    /// ### DEPRECATED: Use `sigQueryClose` instead
    ///
    pub const SigQueryClose = sigQueryClose;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` handled: *bool `
    ///
    /// ` abortClosing: *bool `
    ///
    pub fn sigQueryClose(self: KParts__ReadWritePart, handled: *bool, abortClosing: *bool) void {
        qtc.KParts__ReadWritePart_SigQueryClose(@ptrCast(self.ptr), @ptrCast(handled), @ptrCast(abortClosing));
    }

    /// ### DEPRECATED: Use `onSigQueryClose` instead
    ///
    pub const OnSigQueryClose = onSigQueryClose;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, handled: *bool, abortClosing: *bool) callconv(.c) void `
    ///
    pub fn onSigQueryClose(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, *bool, *bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_Connect_SigQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setModified2` instead
    ///
    pub const SetModified2 = setModified2;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn setModified2(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SetModified2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn save(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSave` instead
    ///
    pub const OnSave = onSave;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSave(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSave` instead
    ///
    pub const SuperSave = superSave;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superSave(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperSave(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitSaveComplete` instead
    ///
    pub const WaitSaveComplete = waitSaveComplete;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#waitSaveComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn waitSaveComplete(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_WaitSaveComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveFile` instead
    ///
    pub const SaveFile = saveFile;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn saveFile(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SaveFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSaveFile` instead
    ///
    pub const OnSaveFile = onSaveFile;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSaveFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnSaveFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveFile` instead
    ///
    pub const SuperSaveFile = superSaveFile;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superSaveFile(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperSaveFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `saveToUrl` instead
    ///
    pub const SaveToUrl = saveToUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveToUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn saveToUrl(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SaveToUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSaveToUrl` instead
    ///
    pub const OnSaveToUrl = onSaveToUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveToUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSaveToUrl(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnSaveToUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSaveToUrl` instead
    ///
    pub const SuperSaveToUrl = superSaveToUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveToUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superSaveToUrl(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperSaveToUrl(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProgressInfoEnabled` instead
    ///
    pub const SetProgressInfoEnabled = setProgressInfoEnabled;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` show: bool `
    ///
    pub fn setProgressInfoEnabled(self: KParts__ReadWritePart, show: bool) void {
        qtc.KParts__ReadOnlyPart_SetProgressInfoEnabled(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `isProgressInfoEnabled` instead
    ///
    pub const IsProgressInfoEnabled = isProgressInfoEnabled;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn isProgressInfoEnabled(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn url(self: KParts__ReadWritePart) QUrl {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `navigationExtension` instead
    ///
    pub const NavigationExtension = navigationExtension;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn navigationExtension(self: KParts__ReadWritePart) KParts__NavigationExtension {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_NavigationExtension(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setArguments` instead
    ///
    pub const SetArguments = setArguments;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _arguments: KParts__OpenUrlArguments `
    ///
    pub fn setArguments(self: KParts__ReadWritePart, _arguments: anytype) void {
        comptime _ = @TypeOf(_arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__ReadOnlyPart_SetArguments(@ptrCast(self.ptr), @ptrCast(_arguments.ptr));
    }

    /// ### DEPRECATED: Use `arguments` instead
    ///
    pub const Arguments = arguments;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn arguments(self: KParts__ReadWritePart) KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Arguments(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `openStream` instead
    ///
    pub const OpenStream = openStream;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` _url: QUrl `
    ///
    pub fn openStream(self: KParts__ReadWritePart, mimeType: []const u8, _url: anytype) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_OpenStream(@ptrCast(self.ptr), mimeType_str, @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `writeStream` instead
    ///
    pub const WriteStream = writeStream;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#writeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeStream(self: KParts__ReadWritePart, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KParts__ReadOnlyPart_WriteStream(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `closeStream` instead
    ///
    pub const CloseStream = closeStream;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn closeStream(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadOnlyPart_CloseStream(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `started` instead
    ///
    pub const Started = started;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn started(self: KParts__ReadWritePart, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KParts__ReadOnlyPart_Started(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, job: KIO__Job) callconv(.c) void `
    ///
    pub fn onStarted(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, KIO__Job) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `completed` instead
    ///
    pub const Completed = completed;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn completed(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadOnlyPart_Completed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCompleted` instead
    ///
    pub const OnCompleted = onCompleted;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart) callconv(.c) void `
    ///
    pub fn onCompleted(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Completed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `completedWithPendingAction` instead
    ///
    pub const CompletedWithPendingAction = completedWithPendingAction;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn completedWithPendingAction(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadOnlyPart_CompletedWithPendingAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCompletedWithPendingAction` instead
    ///
    pub const OnCompletedWithPendingAction = onCompletedWithPendingAction;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart) callconv(.c) void `
    ///
    pub fn onCompletedWithPendingAction(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canceled` instead
    ///
    pub const Canceled = canceled;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` errMsg: []const u8 `
    ///
    pub fn canceled(self: KParts__ReadWritePart, errMsg: []const u8) void {
        const errMsg_str = qtc.libqt_string{
            .len = errMsg.len,
            .data = errMsg.ptr,
        };
        qtc.KParts__ReadOnlyPart_Canceled(@ptrCast(self.ptr), errMsg_str);
    }

    /// ### DEPRECATED: Use `onCanceled` instead
    ///
    pub const OnCanceled = onCanceled;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, errMsg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCanceled(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `urlChanged` instead
    ///
    pub const UrlChanged = urlChanged;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn urlChanged(self: KParts__ReadWritePart, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_UrlChanged(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onUrlChanged` instead
    ///
    pub const OnUrlChanged = onUrlChanged;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, url: QUrl) callconv(.c) void `
    ///
    pub fn onUrlChanged(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// Upcasts to a KParts::PartBase object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn asKParts__PartBase(self: KParts__ReadWritePart) KParts__PartBase {
        return .{ .ptr = qtc.KParts__Part_AsKParts__PartBase(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// Downcasts to a KParts__ReadWritePart object
    ///
    /// ## Parameter(s):
    ///
    /// ` _kparts__partbase: KParts__PartBase `
    ///
    pub fn fromKParts__PartBase(_kparts__partbase: anytype) KParts__ReadWritePart {
        comptime _ = @TypeOf(_kparts__partbase)._is_KParts__PartBase;
        return @bitCast(qtc.KParts__Part_FromKParts__PartBase(@ptrCast(_kparts__partbase.ptr)));
    }

    /// ### DEPRECATED: Use `manager` instead
    ///
    pub const Manager = manager;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn manager(self: KParts__ReadWritePart) KParts__PartManager {
        return .{ .ptr = qtc.KParts__Part_Manager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAutoDeleteWidget` instead
    ///
    pub const SetAutoDeleteWidget = setAutoDeleteWidget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` autoDeleteWidget: bool `
    ///
    pub fn setAutoDeleteWidget(self: KParts__ReadWritePart, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self.ptr), autoDeleteWidget);
    }

    /// ### DEPRECATED: Use `setAutoDeletePart` instead
    ///
    pub const SetAutoDeletePart = setAutoDeletePart;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` autoDeletePart: bool `
    ///
    pub fn setAutoDeletePart(self: KParts__ReadWritePart, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self.ptr), autoDeletePart);
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn metaData(self: KParts__ReadWritePart) KPluginMetaData {
        return .{ .ptr = qtc.KParts__Part_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowCaption` instead
    ///
    pub const SetWindowCaption = setWindowCaption;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn setWindowCaption(self: KParts__ReadWritePart, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__Part_SetWindowCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `onSetWindowCaption` instead
    ///
    pub const OnSetWindowCaption = onSetWindowCaption;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetWindowCaption(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setStatusBarText` instead
    ///
    pub const SetStatusBarText = setStatusBarText;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setStatusBarText(self: KParts__ReadWritePart, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__Part_SetStatusBarText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSetStatusBarText` instead
    ///
    pub const OnSetStatusBarText = onSetStatusBarText;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetStatusBarText(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.objectName: Memory allocation failed");
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KParts__ReadWritePart, name: []const u8) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn isWidgetType(self: KParts__ReadWritePart) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn isWindowType(self: KParts__ReadWritePart) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn isQuickItemType(self: KParts__ReadWritePart) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn signalsBlocked(self: KParts__ReadWritePart) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KParts__ReadWritePart, b: bool) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn thread(self: KParts__ReadWritePart) QThread {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KParts__ReadWritePart, _thread: anytype) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KParts__ReadWritePart, interval: i32) i32 {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KParts__ReadWritePart, time: i64) i32 {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KParts__ReadWritePart, id: i32) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KParts__ReadWritePart, id: i32) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KParts__ReadWritePart.children: Memory allocation failed");
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KParts__ReadWritePart, _parent: anytype) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KParts__ReadWritePart, filterObj: anytype) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KParts__ReadWritePart, obj: anytype) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KParts__ReadWritePart, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn disconnect3(self: KParts__ReadWritePart) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KParts__ReadWritePart, receiver: anytype) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn dumpObjectTree(self: KParts__ReadWritePart) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn dumpObjectInfo(self: KParts__ReadWritePart) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KParts__ReadWritePart, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KParts__ReadWritePart, name: [:0]const u8) QVariant {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KParts__ReadWritePart, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KParts__ReadWritePart.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KParts__ReadWritePart.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn bindingStorage(self: KParts__ReadWritePart) QBindingStorage {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn bindingStorage2(self: KParts__ReadWritePart) QBindingStorage {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn destroyed(self: KParts__ReadWritePart) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart) callconv(.c) void) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn parent(self: KParts__ReadWritePart) QObject {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KParts__ReadWritePart, classname: [:0]const u8) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn deleteLater(self: KParts__ReadWritePart) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KParts__ReadWritePart, interval: i32, timerType: i32) i32 {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KParts__ReadWritePart, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KParts__ReadWritePart, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KParts__ReadWritePart, signal: [:0]const u8) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KParts__ReadWritePart, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KParts__ReadWritePart, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KParts__ReadWritePart, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KParts__ReadWritePart, param1: anytype) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPartObject` instead
    ///
    pub const SetPartObject = setPartObject;

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` object: QObject `
    ///
    pub fn setPartObject(self: KParts__ReadWritePart, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `partObject` instead
    ///
    pub const PartObject = partObject;

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn partObject(self: KParts__ReadWritePart) QObject {
        return .{ .ptr = qtc.KParts__PartBase_PartObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn action(self: KParts__ReadWritePart, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setXMLGUIBuildDocument` instead
    ///
    pub const SetXMLGUIBuildDocument = setXMLGUIBuildDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn setXMLGUIBuildDocument(self: KParts__ReadWritePart, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// ### DEPRECATED: Use `xmlguiBuildDocument` instead
    ///
    pub const XmlguiBuildDocument = xmlguiBuildDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn xmlguiBuildDocument(self: KParts__ReadWritePart) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFactory` instead
    ///
    pub const SetFactory = setFactory;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _factory: KXMLGUIFactory `
    ///
    pub fn setFactory(self: KParts__ReadWritePart, _factory: anytype) void {
        comptime _ = @TypeOf(_factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(_factory.ptr));
    }

    /// ### DEPRECATED: Use `factory` instead
    ///
    pub const Factory = factory;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn factory(self: KParts__ReadWritePart) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentClient` instead
    ///
    pub const ParentClient = parentClient;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn parentClient(self: KParts__ReadWritePart) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertChildClient` instead
    ///
    pub const InsertChildClient = insertChildClient;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn insertChildClient(self: KParts__ReadWritePart, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `removeChildClient` instead
    ///
    pub const RemoveChildClient = removeChildClient;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn removeChildClient(self: KParts__ReadWritePart, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `childClients` instead
    ///
    pub const ChildClients = childClients;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childClients(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("KParts__ReadWritePart.childClients: Memory allocation failed");
        const _data_val: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setClientBuilder` instead
    ///
    pub const SetClientBuilder = setClientBuilder;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn setClientBuilder(self: KParts__ReadWritePart, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// ### DEPRECATED: Use `clientBuilder` instead
    ///
    pub const ClientBuilder = clientBuilder;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn clientBuilder(self: KParts__ReadWritePart) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reloadXML` instead
    ///
    pub const ReloadXML = reloadXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn reloadXML(self: KParts__ReadWritePart) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `plugActionList` instead
    ///
    pub const PlugActionList = plugActionList;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn plugActionList(self: KParts__ReadWritePart, name: []const u8, actionList: []QAction) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIClient_PlugActionList(@ptrCast(self.ptr), name_str, actionList_list);
    }

    /// ### DEPRECATED: Use `unplugActionList` instead
    ///
    pub const UnplugActionList = unplugActionList;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` name: []const u8 `
    ///
    pub fn unplugActionList(self: KParts__ReadWritePart, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `findMostRecentXMLFile` instead
    ///
    pub const FindMostRecentXMLFile = findMostRecentXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    /// ` doc: []const u8 `
    ///
    pub fn findMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("KParts__ReadWritePart.findMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        const doc_str = qtc.libqt_string{
            .len = doc.len,
            .data = doc.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindMostRecentXMLFile(files_list, doc_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.findMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addStateActionEnabled` instead
    ///
    pub const AddStateActionEnabled = addStateActionEnabled;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionEnabled(self: KParts__ReadWritePart, state: []const u8, _action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = _action.len,
            .data = _action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### DEPRECATED: Use `addStateActionDisabled` instead
    ///
    pub const AddStateActionDisabled = addStateActionDisabled;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionDisabled(self: KParts__ReadWritePart, state: []const u8, _action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = _action.len,
            .data = _action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### DEPRECATED: Use `getActionsToChangeForState` instead
    ///
    pub const GetActionsToChangeForState = getActionsToChangeForState;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` state: []const u8 `
    ///
    pub fn getActionsToChangeForState(self: KParts__ReadWritePart, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

    /// ### DEPRECATED: Use `beginXMLPlug` instead
    ///
    pub const BeginXMLPlug = beginXMLPlug;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: QWidget `
    ///
    pub fn beginXMLPlug(self: KParts__ReadWritePart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `endXMLPlug` instead
    ///
    pub const EndXMLPlug = endXMLPlug;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn endXMLPlug(self: KParts__ReadWritePart) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prepareXMLUnplug` instead
    ///
    pub const PrepareXMLUnplug = prepareXMLUnplug;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: QWidget `
    ///
    pub fn prepareXMLUnplug(self: KParts__ReadWritePart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `replaceXMLFile` instead
    ///
    pub const ReplaceXMLFile = replaceXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn replaceXMLFile(self: KParts__ReadWritePart, xmlfile: []const u8, localxmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str);
    }

    /// ### DEPRECATED: Use `findVersionNumber` instead
    ///
    pub const FindVersionNumber = findVersionNumber;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xml: []const u8 `
    ///
    pub fn findVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.findVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `replaceXMLFile3` instead
    ///
    pub const ReplaceXMLFile3 = replaceXMLFile3;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn replaceXMLFile3(self: KParts__ReadWritePart, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile3(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str, merge);
    }

    /// ### DEPRECATED: Use `openUrl` instead
    ///
    pub const OpenUrl = openUrl;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn openUrl(self: KParts__ReadWritePart, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadWritePart_OpenUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `superOpenUrl` instead
    ///
    pub const SuperOpenUrl = superOpenUrl;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn superOpenUrl(self: KParts__ReadWritePart, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadWritePart_SuperOpenUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onOpenUrl` instead
    ///
    pub const OnOpenUrl = onOpenUrl;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, url: QUrl) callconv(.c) bool `
    ///
    pub fn onOpenUrl(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QUrl) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnOpenUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `openFile` instead
    ///
    pub const OpenFile = openFile;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn openFile(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_OpenFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superOpenFile` instead
    ///
    pub const SuperOpenFile = superOpenFile;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superOpenFile(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperOpenFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpenFile` instead
    ///
    pub const OnOpenFile = onOpenFile;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onOpenFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnOpenFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `guiActivateEvent` instead
    ///
    pub const GuiActivateEvent = guiActivateEvent;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: KParts__GUIActivateEvent `
    ///
    pub fn guiActivateEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_KParts__GUIActivateEvent;
        qtc.KParts__ReadWritePart_GuiActivateEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superGuiActivateEvent` instead
    ///
    pub const SuperGuiActivateEvent = superGuiActivateEvent;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: KParts__GUIActivateEvent `
    ///
    pub fn superGuiActivateEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_KParts__GUIActivateEvent;
        qtc.KParts__ReadWritePart_SuperGuiActivateEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onGuiActivateEvent` instead
    ///
    pub const OnGuiActivateEvent = onGuiActivateEvent;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, event: KParts__GUIActivateEvent) callconv(.c) void `
    ///
    pub fn onGuiActivateEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, KParts__GUIActivateEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnGuiActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn widget(self: KParts__ReadWritePart) QWidget {
        return .{ .ptr = qtc.KParts__ReadWritePart_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superWidget(self: KParts__ReadWritePart) QWidget {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn onWidget(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KParts__ReadWritePart_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setManager` instead
    ///
    pub const SetManager = setManager;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _manager: KParts__PartManager `
    ///
    pub fn setManager(self: KParts__ReadWritePart, _manager: anytype) void {
        comptime _ = @TypeOf(_manager)._is_KParts__PartManager;
        qtc.KParts__ReadWritePart_SetManager(@ptrCast(self.ptr), @ptrCast(_manager.ptr));
    }

    /// ### DEPRECATED: Use `superSetManager` instead
    ///
    pub const SuperSetManager = superSetManager;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _manager: KParts__PartManager `
    ///
    pub fn superSetManager(self: KParts__ReadWritePart, _manager: anytype) void {
        comptime _ = @TypeOf(_manager)._is_KParts__PartManager;
        qtc.KParts__ReadWritePart_SuperSetManager(@ptrCast(self.ptr), @ptrCast(_manager.ptr));
    }

    /// ### DEPRECATED: Use `onSetManager` instead
    ///
    pub const OnSetManager = onSetManager;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, manager: KParts__PartManager) callconv(.c) void `
    ///
    pub fn onSetManager(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, KParts__PartManager) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hitTest` instead
    ///
    pub const HitTest = hitTest;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn hitTest(self: KParts__ReadWritePart, _widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__ReadWritePart_HitTest(@ptrCast(self.ptr), @ptrCast(_widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `superHitTest` instead
    ///
    pub const SuperHitTest = superHitTest;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn superHitTest(self: KParts__ReadWritePart, _widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperHitTest(@ptrCast(self.ptr), @ptrCast(_widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `onHitTest` instead
    ///
    pub const OnHitTest = onHitTest;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, widget: QWidget, globalPos: QPoint) callconv(.c) KParts__Part `
    ///
    pub fn onHitTest(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QWidget, QPoint) callconv(.c) KParts__Part) void {
        qtc.KParts__ReadWritePart_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: KParts__ReadWritePart, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.KParts__ReadWritePart_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `superSetWidget` instead
    ///
    pub const SuperSetWidget = superSetWidget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn superSetWidget(self: KParts__ReadWritePart, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.KParts__ReadWritePart_SuperSetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `onSetWidget` instead
    ///
    pub const OnSetWidget = onSetWidget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, widget: QWidget) callconv(.c) void `
    ///
    pub fn onSetWidget(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QWidget) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KParts__ReadWritePart_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KParts__ReadWritePart_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `partActivateEvent` instead
    ///
    pub const PartActivateEvent = partActivateEvent;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: KParts__PartActivateEvent `
    ///
    pub fn partActivateEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_KParts__PartActivateEvent;
        qtc.KParts__ReadWritePart_PartActivateEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superPartActivateEvent` instead
    ///
    pub const SuperPartActivateEvent = superPartActivateEvent;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: KParts__PartActivateEvent `
    ///
    pub fn superPartActivateEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_KParts__PartActivateEvent;
        qtc.KParts__ReadWritePart_SuperPartActivateEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPartActivateEvent` instead
    ///
    pub const OnPartActivateEvent = onPartActivateEvent;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, event: KParts__PartActivateEvent) callconv(.c) void `
    ///
    pub fn onPartActivateEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, KParts__PartActivateEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnPartActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KParts__ReadWritePart, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__ReadWritePart_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KParts__ReadWritePart, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__ReadWritePart_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QEvent) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KParts__ReadWritePart, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__ReadWritePart_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KParts__ReadWritePart, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KParts__ReadWritePart_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KParts__ReadWritePart_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KParts__ReadWritePart_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KParts__ReadWritePart_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KParts__ReadWritePart, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KParts__ReadWritePart_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QChildEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KParts__ReadWritePart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadWritePart_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KParts__ReadWritePart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadWritePart_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KParts__ReadWritePart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadWritePart_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KParts__ReadWritePart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadWritePart_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` element: QDomElement `
    ///
    pub fn action2(self: KParts__ReadWritePart, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__ReadWritePart_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `superAction2` instead
    ///
    pub const SuperAction2 = superAction2;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` element: QDomElement `
    ///
    pub fn superAction2(self: KParts__ReadWritePart, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `onAction2` instead
    ///
    pub const OnAction2 = onAction2;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, element: QDomElement) callconv(.c) QAction `
    ///
    pub fn onAction2(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QDomElement) callconv(.c) QAction) void {
        qtc.KParts__ReadWritePart_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionCollection` instead
    ///
    pub const ActionCollection = actionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn actionCollection(self: KParts__ReadWritePart) KActionCollection {
        return .{ .ptr = qtc.KParts__ReadWritePart_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superActionCollection` instead
    ///
    pub const SuperActionCollection = superActionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superActionCollection(self: KParts__ReadWritePart) KActionCollection {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onActionCollection` instead
    ///
    pub const OnActionCollection = onActionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) KActionCollection `
    ///
    pub fn onActionCollection(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KParts__ReadWritePart_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn componentName(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superComponentName` instead
    ///
    pub const SuperComponentName = superComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superComponentName(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onComponentName` instead
    ///
    pub const OnComponentName = onComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onComponentName(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn domDocument(self: KParts__ReadWritePart) QDomDocument {
        return .{ .ptr = qtc.KParts__ReadWritePart_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superDomDocument` instead
    ///
    pub const SuperDomDocument = superDomDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superDomDocument(self: KParts__ReadWritePart) QDomDocument {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDomDocument` instead
    ///
    pub const OnDomDocument = onDomDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) QDomDocument `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDomDocument(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KParts__ReadWritePart_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xmlFile` instead
    ///
    pub const XmlFile = xmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn xmlFile(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superXmlFile` instead
    ///
    pub const SuperXmlFile = superXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superXmlFile(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onXmlFile` instead
    ///
    pub const OnXmlFile = onXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onXmlFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localXMLFile` instead
    ///
    pub const LocalXMLFile = localXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localXMLFile(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superLocalXMLFile` instead
    ///
    pub const SuperLocalXMLFile = superLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superLocalXMLFile(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocalXMLFile` instead
    ///
    pub const OnLocalXMLFile = onLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLocalXMLFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setComponentName` instead
    ///
    pub const SetComponentName = setComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn setComponentName(self: KParts__ReadWritePart, _componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadWritePart_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `superSetComponentName` instead
    ///
    pub const SuperSetComponentName = superSetComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn superSetComponentName(self: KParts__ReadWritePart, _componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `onSetComponentName` instead
    ///
    pub const OnSetComponentName = onSetComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetComponentName(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setXMLFile` instead
    ///
    pub const SetXMLFile = setXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn setXMLFile(self: KParts__ReadWritePart, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadWritePart_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `superSetXMLFile` instead
    ///
    pub const SuperSetXMLFile = superSetXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn superSetXMLFile(self: KParts__ReadWritePart, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `onSetXMLFile` instead
    ///
    pub const OnSetXMLFile = onSetXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void `
    ///
    pub fn onSetXMLFile(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLocalXMLFile` instead
    ///
    pub const SetLocalXMLFile = setLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` file: []const u8 `
    ///
    pub fn setLocalXMLFile(self: KParts__ReadWritePart, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadWritePart_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `superSetLocalXMLFile` instead
    ///
    pub const SuperSetLocalXMLFile = superSetLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` file: []const u8 `
    ///
    pub fn superSetLocalXMLFile(self: KParts__ReadWritePart, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `onSetLocalXMLFile` instead
    ///
    pub const OnSetLocalXMLFile = onSetLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetLocalXMLFile(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setXML` instead
    ///
    pub const SetXML = setXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn setXML(self: KParts__ReadWritePart, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadWritePart_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `superSetXML` instead
    ///
    pub const SuperSetXML = superSetXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn superSetXML(self: KParts__ReadWritePart, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `onSetXML` instead
    ///
    pub const OnSetXML = onSetXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, document: [*:0]const u8, merge: bool) callconv(.c) void `
    ///
    pub fn onSetXML(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setDOMDocument` instead
    ///
    pub const SetDOMDocument = setDOMDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn setDOMDocument(self: KParts__ReadWritePart, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__ReadWritePart_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `superSetDOMDocument` instead
    ///
    pub const SuperSetDOMDocument = superSetDOMDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn superSetDOMDocument(self: KParts__ReadWritePart, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__ReadWritePart_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `onSetDOMDocument` instead
    ///
    pub const OnSetDOMDocument = onSetDOMDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, document: QDomDocument, merge: bool) callconv(.c) void `
    ///
    pub fn onSetDOMDocument(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QDomDocument, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn stateChanged(self: KParts__ReadWritePart, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadWritePart_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `superStateChanged` instead
    ///
    pub const SuperStateChanged = superStateChanged;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn superStateChanged(self: KParts__ReadWritePart, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadWritePart_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void `
    ///
    pub fn onStateChanged(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `abortLoad` instead
    ///
    pub const AbortLoad = abortLoad;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn abortLoad(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_AbortLoad(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAbortLoad` instead
    ///
    pub const SuperAbortLoad = superAbortLoad;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superAbortLoad(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SuperAbortLoad(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAbortLoad` instead
    ///
    pub const OnAbortLoad = onAbortLoad;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onAbortLoad(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnAbortLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: KParts__ReadWritePart, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KParts__ReadWritePart_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `superSetUrl` instead
    ///
    pub const SuperSetUrl = superSetUrl;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn superSetUrl(self: KParts__ReadWritePart, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KParts__ReadWritePart_SuperSetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onSetUrl` instead
    ///
    pub const OnSetUrl = onSetUrl;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, url: QUrl) callconv(.c) void `
    ///
    pub fn onSetUrl(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localFilePath` instead
    ///
    pub const LocalFilePath = localFilePath;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localFilePath(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_LocalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.localFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superLocalFilePath` instead
    ///
    pub const SuperLocalFilePath = superLocalFilePath;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superLocalFilePath(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperLocalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.localFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocalFilePath` instead
    ///
    pub const OnLocalFilePath = onLocalFilePath;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLocalFilePath(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnLocalFilePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLocalFilePath` instead
    ///
    pub const SetLocalFilePath = setLocalFilePath;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _localFilePath: []const u8 `
    ///
    pub fn setLocalFilePath(self: KParts__ReadWritePart, _localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = _localFilePath.len,
            .data = _localFilePath.ptr,
        };
        qtc.KParts__ReadWritePart_SetLocalFilePath(@ptrCast(self.ptr), localFilePath_str);
    }

    /// ### DEPRECATED: Use `superSetLocalFilePath` instead
    ///
    pub const SuperSetLocalFilePath = superSetLocalFilePath;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` _localFilePath: []const u8 `
    ///
    pub fn superSetLocalFilePath(self: KParts__ReadWritePart, _localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = _localFilePath.len,
            .data = _localFilePath.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetLocalFilePath(@ptrCast(self.ptr), localFilePath_str);
    }

    /// ### DEPRECATED: Use `onSetLocalFilePath` instead
    ///
    pub const OnSetLocalFilePath = onSetLocalFilePath;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, localFilePath: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetLocalFilePath(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetLocalFilePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hostContainer` instead
    ///
    pub const HostContainer = hostContainer;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn hostContainer(self: KParts__ReadWritePart, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__ReadWritePart_HostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// ### DEPRECATED: Use `superHostContainer` instead
    ///
    pub const SuperHostContainer = superHostContainer;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn superHostContainer(self: KParts__ReadWritePart, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperHostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// ### DEPRECATED: Use `onHostContainer` instead
    ///
    pub const OnHostContainer = onHostContainer;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, containerName: [*:0]const u8) callconv(.c) QWidget `
    ///
    pub fn onHostContainer(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.KParts__ReadWritePart_OnHostContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotWidgetDestroyed` instead
    ///
    pub const SlotWidgetDestroyed = slotWidgetDestroyed;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn slotWidgetDestroyed(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSlotWidgetDestroyed` instead
    ///
    pub const SuperSlotWidgetDestroyed = superSlotWidgetDestroyed;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superSlotWidgetDestroyed(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SuperSlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSlotWidgetDestroyed` instead
    ///
    pub const OnSlotWidgetDestroyed = onSlotWidgetDestroyed;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSlotWidgetDestroyed(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSlotWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn sender(self: KParts__ReadWritePart) QObject {
        return .{ .ptr = qtc.KParts__ReadWritePart_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superSender(self: KParts__ReadWritePart) QObject {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__ReadWritePart_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn senderSignalIndex(self: KParts__ReadWritePart) i32 {
        return qtc.KParts__ReadWritePart_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superSenderSignalIndex(self: KParts__ReadWritePart) i32 {
        return qtc.KParts__ReadWritePart_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__ReadWritePart_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KParts__ReadWritePart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadWritePart_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KParts__ReadWritePart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadWritePart_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__ReadWritePart_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KParts__ReadWritePart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__ReadWritePart_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KParts__ReadWritePart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__ReadWritePart_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `standardsXmlFileLocation` instead
    ///
    pub const StandardsXmlFileLocation = standardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn standardsXmlFileLocation(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.standardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superStandardsXmlFileLocation` instead
    ///
    pub const SuperStandardsXmlFileLocation = superStandardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superStandardsXmlFileLocation(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KParts__ReadWritePart.standardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onStandardsXmlFileLocation` instead
    ///
    pub const OnStandardsXmlFileLocation = onStandardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onStandardsXmlFileLocation(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `loadStandardsXmlFile` instead
    ///
    pub const LoadStandardsXmlFile = loadStandardsXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn loadStandardsXmlFile(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superLoadStandardsXmlFile` instead
    ///
    pub const SuperLoadStandardsXmlFile = superLoadStandardsXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn superLoadStandardsXmlFile(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoadStandardsXmlFile` instead
    ///
    pub const OnLoadStandardsXmlFile = onLoadStandardsXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onLoadStandardsXmlFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn delete(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_Delete(@ptrCast(self.ptr));
    }
};
