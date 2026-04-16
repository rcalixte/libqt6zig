const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KIO__Job = @import("libqt6").KIO__Job;
const KParts__GUIActivateEvent = @import("libqt6").KParts__GUIActivateEvent;
const KParts__NavigationExtension = @import("libqt6").KParts__NavigationExtension;
const KParts__OpenUrlArguments = @import("libqt6").KParts__OpenUrlArguments;
const KParts__Part = @import("libqt6").KParts__Part;
const KParts__PartActivateEvent = @import("libqt6").KParts__PartActivateEvent;
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

    /// New constructs a new KParts::ReadWritePart object.
    ///
    pub fn New() KParts__ReadWritePart {
        return .{ .ptr = qtc.KParts__ReadWritePart_new() };
    }

    /// New2 constructs a new KParts::ReadWritePart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KParts__ReadWritePart {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KParts__ReadWritePart_new2(@ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new KParts::ReadWritePart object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    /// ` data: KPluginMetaData `
    ///
    pub fn New3(parent: anytype, data: anytype) KParts__ReadWritePart {
        comptime _ = @TypeOf(parent)._is_QObject;
        comptime _ = @TypeOf(data)._is_KPluginMetaData;
        return .{ .ptr = qtc.KParts__ReadWritePart_new3(@ptrCast(parent.ptr), @ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn MetaObject(self: KParts__ReadWritePart) QMetaObject {
        return .{ .ptr = qtc.KParts__ReadWritePart_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KParts__ReadWritePart_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SuperMetaObject(self: KParts__ReadWritePart) QMetaObject {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KParts__ReadWritePart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadWritePart_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KParts__ReadWritePart_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KParts__ReadWritePart, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__ReadWritePart_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KParts__ReadWritePart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadWritePart_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__ReadWritePart_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KParts__ReadWritePart, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KParts__ReadWritePart_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isReadWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn IsReadWrite(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_IsReadWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` readwrite: bool `
    ///
    pub fn SetReadWrite(self: KParts__ReadWritePart, readwrite: bool) void {
        qtc.KParts__ReadWritePart_SetReadWrite(@ptrCast(self.ptr), readwrite);
    }

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
    pub fn OnSetReadWrite(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetReadWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetReadWrite` instead
    ///
    pub const QBaseSetReadWrite = SuperSetReadWrite;

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
    pub fn SuperSetReadWrite(self: KParts__ReadWritePart, readwrite: bool) void {
        qtc.KParts__ReadWritePart_SuperSetReadWrite(@ptrCast(self.ptr), readwrite);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn IsModified(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_IsModified(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn QueryClose(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_QueryClose(@ptrCast(self.ptr));
    }

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
    pub fn OnQueryClose(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperQueryClose` instead
    ///
    pub const QBaseQueryClose = SuperQueryClose;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SuperQueryClose(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperQueryClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn CloseUrl(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_CloseUrl(@ptrCast(self.ptr));
    }

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
    pub fn OnCloseUrl(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnCloseUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseUrl` instead
    ///
    pub const QBaseCloseUrl = SuperCloseUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SuperCloseUrl(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperCloseUrl(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` promptToSave: bool `
    ///
    pub fn CloseUrl2(self: KParts__ReadWritePart, promptToSave: bool) bool {
        return qtc.KParts__ReadWritePart_CloseUrl2(@ptrCast(self.ptr), promptToSave);
    }

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
    pub fn OnCloseUrl2(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, bool) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnCloseUrl2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseUrl2` instead
    ///
    pub const QBaseCloseUrl2 = SuperCloseUrl2;

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
    pub fn SuperCloseUrl2(self: KParts__ReadWritePart, promptToSave: bool) bool {
        return qtc.KParts__ReadWritePart_SuperCloseUrl2(@ptrCast(self.ptr), promptToSave);
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` url: QUrl `
    ///
    pub fn SaveAs(self: KParts__ReadWritePart, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadWritePart_SaveAs(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

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
    pub fn OnSaveAs(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QUrl) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnSaveAs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveAs` instead
    ///
    pub const QBaseSaveAs = SuperSaveAs;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` url: QUrl `
    ///
    pub fn SuperSaveAs(self: KParts__ReadWritePart, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadWritePart_SuperSaveAs(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` modified: bool `
    ///
    pub fn SetModified(self: KParts__ReadWritePart, modified: bool) void {
        qtc.KParts__ReadWritePart_SetModified(@ptrCast(self.ptr), modified);
    }

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
    pub fn OnSetModified(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetModified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModified` instead
    ///
    pub const QBaseSetModified = SuperSetModified;

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
    pub fn SuperSetModified(self: KParts__ReadWritePart, modified: bool) void {
        qtc.KParts__ReadWritePart_SuperSetModified(@ptrCast(self.ptr), modified);
    }

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
    pub fn SigQueryClose(self: KParts__ReadWritePart, handled: *bool, abortClosing: *bool) void {
        qtc.KParts__ReadWritePart_SigQueryClose(@ptrCast(self.ptr), @ptrCast(handled), @ptrCast(abortClosing));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` callback: *const fn (self: KParts__ReadWritePart, handled: *bool, abortClosing: *bool) callconv(.c) void `
    ///
    pub fn OnSigQueryClose(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, *bool, *bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_Connect_SigQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SetModified2(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SetModified2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Save(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_Save(@ptrCast(self.ptr));
    }

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
    pub fn OnSave(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSave` instead
    ///
    pub const QBaseSave = SuperSave;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SuperSave(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperSave(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#waitSaveComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn WaitSaveComplete(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_WaitSaveComplete(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SaveFile(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SaveFile(@ptrCast(self.ptr));
    }

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
    pub fn OnSaveFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnSaveFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveFile` instead
    ///
    pub const QBaseSaveFile = SuperSaveFile;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SuperSaveFile(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperSaveFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveToUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SaveToUrl(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SaveToUrl(@ptrCast(self.ptr));
    }

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
    pub fn OnSaveToUrl(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnSaveToUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSaveToUrl` instead
    ///
    pub const QBaseSaveToUrl = SuperSaveToUrl;

    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveToUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SuperSaveToUrl(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperSaveToUrl(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetProgressInfoEnabled(self: KParts__ReadWritePart, show: bool) void {
        qtc.KParts__ReadOnlyPart_SetProgressInfoEnabled(@ptrCast(self.ptr), show);
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn IsProgressInfoEnabled(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Url(self: KParts__ReadWritePart) QUrl {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Url(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn NavigationExtension(self: KParts__ReadWritePart) KParts__NavigationExtension {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_NavigationExtension(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    pub fn SetArguments(self: KParts__ReadWritePart, arguments: anytype) void {
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__ReadOnlyPart_SetArguments(@ptrCast(self.ptr), @ptrCast(arguments.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Arguments(self: KParts__ReadWritePart) KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Arguments(@ptrCast(self.ptr)) };
    }

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
    /// ` url: QUrl `
    ///
    pub fn OpenStream(self: KParts__ReadWritePart, mimeType: []const u8, url: anytype) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_OpenStream(@ptrCast(self.ptr), mimeType_str, @ptrCast(url.ptr));
    }

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
    pub fn WriteStream(self: KParts__ReadWritePart, data: []u8) bool {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KParts__ReadOnlyPart_WriteStream(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn CloseStream(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadOnlyPart_CloseStream(@ptrCast(self.ptr));
    }

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
    pub fn Started(self: KParts__ReadWritePart, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KParts__ReadOnlyPart_Started(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

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
    pub fn OnStarted(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, KIO__Job) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Completed(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadOnlyPart_Completed(@ptrCast(self.ptr));
    }

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
    pub fn OnCompleted(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Completed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn CompletedWithPendingAction(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadOnlyPart_CompletedWithPendingAction(@ptrCast(self.ptr));
    }

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
    pub fn OnCompletedWithPendingAction(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Canceled(self: KParts__ReadWritePart, errMsg: []const u8) void {
        const errMsg_str = qtc.libqt_string{
            .len = errMsg.len,
            .data = errMsg.ptr,
        };
        qtc.KParts__ReadOnlyPart_Canceled(@ptrCast(self.ptr), errMsg_str);
    }

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
    pub fn OnCanceled(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` url: QUrl `
    ///
    pub fn UrlChanged(self: KParts__ReadWritePart, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_UrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

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
    pub fn OnUrlChanged(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Manager(self: KParts__ReadWritePart) KParts__PartManager {
        return .{ .ptr = qtc.KParts__Part_Manager(@ptrCast(self.ptr)) };
    }

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
    pub fn SetAutoDeleteWidget(self: KParts__ReadWritePart, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self.ptr), autoDeleteWidget);
    }

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
    pub fn SetAutoDeletePart(self: KParts__ReadWritePart, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self.ptr), autoDeletePart);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn MetaData(self: KParts__ReadWritePart) KPluginMetaData {
        return .{ .ptr = qtc.KParts__Part_MetaData(@ptrCast(self.ptr)) };
    }

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
    pub fn SetWindowCaption(self: KParts__ReadWritePart, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__Part_SetWindowCaption(@ptrCast(self.ptr), caption_str);
    }

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
    pub fn OnSetWindowCaption(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetStatusBarText(self: KParts__ReadWritePart, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KParts__Part_SetStatusBarText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn OnSetStatusBarText(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ObjectName(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KParts__ReadWritePart, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn IsWidgetType(self: KParts__ReadWritePart) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn IsWindowType(self: KParts__ReadWritePart) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn IsQuickItemType(self: KParts__ReadWritePart) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SignalsBlocked(self: KParts__ReadWritePart) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KParts__ReadWritePart, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Thread(self: KParts__ReadWritePart) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KParts__ReadWritePart, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KParts__ReadWritePart, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KParts__ReadWritePart, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KParts__ReadWritePart, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KParts__ReadWritePart, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kparts__readwritepart.Children: Memory allocation failed");
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KParts__ReadWritePart, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KParts__ReadWritePart, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KParts__ReadWritePart, obj: anytype) void {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KParts__ReadWritePart, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Disconnect3(self: KParts__ReadWritePart) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KParts__ReadWritePart, receiver: anytype) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn DumpObjectTree(self: KParts__ReadWritePart) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn DumpObjectInfo(self: KParts__ReadWritePart) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KParts__ReadWritePart, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KParts__ReadWritePart, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KParts__ReadWritePart, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts__readwritepart.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts__readwritepart.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn BindingStorage(self: KParts__ReadWritePart) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn BindingStorage2(self: KParts__ReadWritePart) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Destroyed(self: KParts__ReadWritePart) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Parent(self: KParts__ReadWritePart) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KParts__ReadWritePart, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn DeleteLater(self: KParts__ReadWritePart) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KParts__ReadWritePart, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KParts__ReadWritePart, time: i64, timerType: i32) i32 {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KParts__ReadWritePart, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KParts__ReadWritePart, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KParts__ReadWritePart, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KParts__ReadWritePart, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KParts__ReadWritePart, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KParts__ReadWritePart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetPartObject(self: KParts__ReadWritePart, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn PartObject(self: KParts__ReadWritePart) QObject {
        return .{ .ptr = qtc.KParts__PartBase_PartObject(@ptrCast(self.ptr)) };
    }

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
    pub fn Action(self: KParts__ReadWritePart, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

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
    pub fn SetXMLGUIBuildDocument(self: KParts__ReadWritePart, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn XmlguiBuildDocument(self: KParts__ReadWritePart) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` factory: KXMLGUIFactory `
    ///
    pub fn SetFactory(self: KParts__ReadWritePart, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Factory(self: KParts__ReadWritePart) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn ParentClient(self: KParts__ReadWritePart) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

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
    pub fn InsertChildClient(self: KParts__ReadWritePart, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

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
    pub fn RemoveChildClient(self: KParts__ReadWritePart, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

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
    pub fn ChildClients(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("kparts__readwritepart.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn SetClientBuilder(self: KParts__ReadWritePart, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn ClientBuilder(self: KParts__ReadWritePart) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn ReloadXML(self: KParts__ReadWritePart) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

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
    pub fn PlugActionList(self: KParts__ReadWritePart, name: []const u8, actionList: []QAction) void {
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
    pub fn UnplugActionList(self: KParts__ReadWritePart, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

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
    pub fn FindMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kparts__readwritepart.FindMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i|
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: KParts__ReadWritePart, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

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
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: KParts__ReadWritePart, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

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
    pub fn GetActionsToChangeForState(self: KParts__ReadWritePart, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

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
    pub fn BeginXMLPlug(self: KParts__ReadWritePart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn EndXMLPlug(self: KParts__ReadWritePart) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

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
    pub fn PrepareXMLUnplug(self: KParts__ReadWritePart, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn ReplaceXMLFile(self: KParts__ReadWritePart, xmlfile: []const u8, localxmlfile: []const u8) void {
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
    pub fn FindVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ReplaceXMLFile3(self: KParts__ReadWritePart, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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
    /// ` url: QUrl `
    ///
    pub fn OpenUrl(self: KParts__ReadWritePart, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadWritePart_OpenUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `SuperOpenUrl` instead
    ///
    pub const QBaseOpenUrl = SuperOpenUrl;

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
    /// ` url: QUrl `
    ///
    pub fn SuperOpenUrl(self: KParts__ReadWritePart, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadWritePart_SuperOpenUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

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
    pub fn OnOpenUrl(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QUrl) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnOpenUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OpenFile(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_OpenFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperOpenFile` instead
    ///
    pub const QBaseOpenFile = SuperOpenFile;

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
    pub fn SuperOpenFile(self: KParts__ReadWritePart) bool {
        return qtc.KParts__ReadWritePart_SuperOpenFile(@ptrCast(self.ptr));
    }

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
    pub fn OnOpenFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnOpenFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: KParts__GUIActivateEvent `
    ///
    pub fn GuiActivateEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__GUIActivateEvent;
        qtc.KParts__ReadWritePart_GuiActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperGuiActivateEvent` instead
    ///
    pub const QBaseGuiActivateEvent = SuperGuiActivateEvent;

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
    /// ` event: KParts__GUIActivateEvent `
    ///
    pub fn SuperGuiActivateEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__GUIActivateEvent;
        qtc.KParts__ReadWritePart_SuperGuiActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnGuiActivateEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, KParts__GUIActivateEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnGuiActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Widget(self: KParts__ReadWritePart) QWidget {
        return .{ .ptr = qtc.KParts__ReadWritePart_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

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
    pub fn SuperWidget(self: KParts__ReadWritePart) QWidget {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn OnWidget(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) QWidget) void {
        qtc.KParts__ReadWritePart_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` manager: KParts__PartManager `
    ///
    pub fn SetManager(self: KParts__ReadWritePart, manager: anytype) void {
        comptime _ = @TypeOf(manager)._is_KParts__PartManager;
        qtc.KParts__ReadWritePart_SetManager(@ptrCast(self.ptr), @ptrCast(manager.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetManager` instead
    ///
    pub const QBaseSetManager = SuperSetManager;

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
    /// ` manager: KParts__PartManager `
    ///
    pub fn SuperSetManager(self: KParts__ReadWritePart, manager: anytype) void {
        comptime _ = @TypeOf(manager)._is_KParts__PartManager;
        qtc.KParts__ReadWritePart_SuperSetManager(@ptrCast(self.ptr), @ptrCast(manager.ptr));
    }

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
    pub fn OnSetManager(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, KParts__PartManager) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn HitTest(self: KParts__ReadWritePart, widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__ReadWritePart_HitTest(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperHitTest` instead
    ///
    pub const QBaseHitTest = SuperHitTest;

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
    /// ` widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn SuperHitTest(self: KParts__ReadWritePart, widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperHitTest(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(globalPos.ptr)) };
    }

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
    pub fn OnHitTest(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QWidget, QPoint) callconv(.c) KParts__Part) void {
        qtc.KParts__ReadWritePart_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: KParts__ReadWritePart, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__ReadWritePart_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetWidget` instead
    ///
    pub const QBaseSetWidget = SuperSetWidget;

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
    /// ` widget: QWidget `
    ///
    pub fn SuperSetWidget(self: KParts__ReadWritePart, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KParts__ReadWritePart_SuperSetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

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
    pub fn OnSetWidget(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QWidget) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__ReadWritePart_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KParts__ReadWritePart_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: KParts__PartActivateEvent `
    ///
    pub fn PartActivateEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__PartActivateEvent;
        qtc.KParts__ReadWritePart_PartActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPartActivateEvent` instead
    ///
    pub const QBasePartActivateEvent = SuperPartActivateEvent;

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
    /// ` event: KParts__PartActivateEvent `
    ///
    pub fn SuperPartActivateEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_KParts__PartActivateEvent;
        qtc.KParts__ReadWritePart_SuperPartActivateEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnPartActivateEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, KParts__PartActivateEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnPartActivateEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: KParts__ReadWritePart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__ReadWritePart_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KParts__ReadWritePart, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__ReadWritePart_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QEvent) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KParts__ReadWritePart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__ReadWritePart_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KParts__ReadWritePart, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__ReadWritePart_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QObject, QEvent) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__ReadWritePart_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KParts__ReadWritePart_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QTimerEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__ReadWritePart_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KParts__ReadWritePart, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KParts__ReadWritePart_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QChildEvent) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KParts__ReadWritePart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadWritePart_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KParts__ReadWritePart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadWritePart_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KParts__ReadWritePart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadWritePart_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KParts__ReadWritePart, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KParts__ReadWritePart_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QMetaMethod) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Action2(self: KParts__ReadWritePart, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__ReadWritePart_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAction2` instead
    ///
    pub const QBaseAction2 = SuperAction2;

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
    pub fn SuperAction2(self: KParts__ReadWritePart, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

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
    pub fn OnAction2(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QDomElement) callconv(.c) QAction) void {
        qtc.KParts__ReadWritePart_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ActionCollection(self: KParts__ReadWritePart) KActionCollection {
        return .{ .ptr = qtc.KParts__ReadWritePart_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperActionCollection` instead
    ///
    pub const QBaseActionCollection = SuperActionCollection;

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
    pub fn SuperActionCollection(self: KParts__ReadWritePart) KActionCollection {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperActionCollection(@ptrCast(self.ptr)) };
    }

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
    pub fn OnActionCollection(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KParts__ReadWritePart_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ComponentName(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperComponentName` instead
    ///
    pub const QBaseComponentName = SuperComponentName;

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
    pub fn SuperComponentName(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnComponentName(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DomDocument(self: KParts__ReadWritePart) QDomDocument {
        return .{ .ptr = qtc.KParts__ReadWritePart_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDomDocument` instead
    ///
    pub const QBaseDomDocument = SuperDomDocument;

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
    pub fn SuperDomDocument(self: KParts__ReadWritePart) QDomDocument {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperDomDocument(@ptrCast(self.ptr)) };
    }

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
    pub fn OnDomDocument(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KParts__ReadWritePart_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn XmlFile(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperXmlFile` instead
    ///
    pub const QBaseXmlFile = SuperXmlFile;

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
    pub fn SuperXmlFile(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnXmlFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LocalXMLFile(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLocalXMLFile` instead
    ///
    pub const QBaseLocalXMLFile = SuperLocalXMLFile;

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
    pub fn SuperLocalXMLFile(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalXMLFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SetComponentName(self: KParts__ReadWritePart, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadWritePart_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `SuperSetComponentName` instead
    ///
    pub const QBaseSetComponentName = SuperSetComponentName;

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
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SuperSetComponentName(self: KParts__ReadWritePart, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

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
    pub fn OnSetComponentName(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetXMLFile(self: KParts__ReadWritePart, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadWritePart_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `SuperSetXMLFile` instead
    ///
    pub const QBaseSetXMLFile = SuperSetXMLFile;

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
    pub fn SuperSetXMLFile(self: KParts__ReadWritePart, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

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
    pub fn OnSetXMLFile(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetLocalXMLFile(self: KParts__ReadWritePart, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadWritePart_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `SuperSetLocalXMLFile` instead
    ///
    pub const QBaseSetLocalXMLFile = SuperSetLocalXMLFile;

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
    pub fn SuperSetLocalXMLFile(self: KParts__ReadWritePart, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

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
    pub fn OnSetLocalXMLFile(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetXML(self: KParts__ReadWritePart, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadWritePart_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `SuperSetXML` instead
    ///
    pub const QBaseSetXML = SuperSetXML;

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
    pub fn SuperSetXML(self: KParts__ReadWritePart, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

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
    pub fn OnSetXML(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetDOMDocument(self: KParts__ReadWritePart, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__ReadWritePart_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `SuperSetDOMDocument` instead
    ///
    pub const QBaseSetDOMDocument = SuperSetDOMDocument;

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
    pub fn SuperSetDOMDocument(self: KParts__ReadWritePart, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__ReadWritePart_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

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
    pub fn OnSetDOMDocument(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QDomDocument, bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn StateChanged(self: KParts__ReadWritePart, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadWritePart_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `SuperStateChanged` instead
    ///
    pub const QBaseStateChanged = SuperStateChanged;

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
    pub fn SuperStateChanged(self: KParts__ReadWritePart, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__ReadWritePart_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

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
    pub fn OnStateChanged(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AbortLoad(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_AbortLoad(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAbortLoad` instead
    ///
    pub const QBaseAbortLoad = SuperAbortLoad;

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
    pub fn SuperAbortLoad(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SuperAbortLoad(@ptrCast(self.ptr));
    }

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
    pub fn OnAbortLoad(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnAbortLoad(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KParts__ReadWritePart, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__ReadWritePart_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetUrl` instead
    ///
    pub const QBaseSetUrl = SuperSetUrl;

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
    /// ` url: QUrl `
    ///
    pub fn SuperSetUrl(self: KParts__ReadWritePart, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__ReadWritePart_SuperSetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

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
    pub fn OnSetUrl(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LocalFilePath(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_LocalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.LocalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLocalFilePath` instead
    ///
    pub const QBaseLocalFilePath = SuperLocalFilePath;

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
    pub fn SuperLocalFilePath(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperLocalFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.LocalFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalFilePath(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnLocalFilePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` localFilePath: []const u8 `
    ///
    pub fn SetLocalFilePath(self: KParts__ReadWritePart, localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = localFilePath.len,
            .data = localFilePath.ptr,
        };
        qtc.KParts__ReadWritePart_SetLocalFilePath(@ptrCast(self.ptr), localFilePath_str);
    }

    /// ### DEPRECATED: Use `SuperSetLocalFilePath` instead
    ///
    pub const QBaseSetLocalFilePath = SuperSetLocalFilePath;

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
    /// ` localFilePath: []const u8 `
    ///
    pub fn SuperSetLocalFilePath(self: KParts__ReadWritePart, localFilePath: []const u8) void {
        const localFilePath_str = qtc.libqt_string{
            .len = localFilePath.len,
            .data = localFilePath.ptr,
        };
        qtc.KParts__ReadWritePart_SuperSetLocalFilePath(@ptrCast(self.ptr), localFilePath_str);
    }

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
    pub fn OnSetLocalFilePath(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSetLocalFilePath(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HostContainer(self: KParts__ReadWritePart, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__ReadWritePart_HostContainer(@ptrCast(self.ptr), containerName_str) };
    }

    /// ### DEPRECATED: Use `SuperHostContainer` instead
    ///
    pub const QBaseHostContainer = SuperHostContainer;

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
    pub fn SuperHostContainer(self: KParts__ReadWritePart, containerName: []const u8) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperHostContainer(@ptrCast(self.ptr), containerName_str) };
    }

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
    pub fn OnHostContainer(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) QWidget) void {
        qtc.KParts__ReadWritePart_OnHostContainer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SlotWidgetDestroyed(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SlotWidgetDestroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSlotWidgetDestroyed` instead
    ///
    pub const QBaseSlotWidgetDestroyed = SuperSlotWidgetDestroyed;

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
    pub fn SuperSlotWidgetDestroyed(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SuperSlotWidgetDestroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnSlotWidgetDestroyed(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnSlotWidgetDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KParts__ReadWritePart) QObject {
        return .{ .ptr = qtc.KParts__ReadWritePart_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SuperSender(self: KParts__ReadWritePart) QObject {
        return .{ .ptr = qtc.KParts__ReadWritePart_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) QObject) void {
        qtc.KParts__ReadWritePart_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KParts__ReadWritePart) i32 {
        return qtc.KParts__ReadWritePart_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn SuperSenderSignalIndex(self: KParts__ReadWritePart) i32 {
        return qtc.KParts__ReadWritePart_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__ReadWritePart_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KParts__ReadWritePart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadWritePart_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KParts__ReadWritePart, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__ReadWritePart_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__ReadWritePart_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KParts__ReadWritePart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__ReadWritePart_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KParts__ReadWritePart `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KParts__ReadWritePart, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KParts__ReadWritePart_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, QMetaMethod) callconv(.c) bool) void {
        qtc.KParts__ReadWritePart_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn StandardsXmlFileLocation(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperStandardsXmlFileLocation` instead
    ///
    pub const QBaseStandardsXmlFileLocation = SuperStandardsXmlFileLocation;

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
    pub fn SuperStandardsXmlFileLocation(self: KParts__ReadWritePart, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__ReadWritePart_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__readwritepart.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__ReadWritePart`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStandardsXmlFileLocation(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__ReadWritePart_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LoadStandardsXmlFile(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperLoadStandardsXmlFile` instead
    ///
    pub const QBaseLoadStandardsXmlFile = SuperLoadStandardsXmlFile;

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
    pub fn SuperLoadStandardsXmlFile(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

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
    pub fn OnLoadStandardsXmlFile(self: KParts__ReadWritePart, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__ReadWritePart_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KParts__ReadWritePart, callback: *const fn (KParts__ReadWritePart, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__ReadWritePart `
    ///
    pub fn Delete(self: KParts__ReadWritePart) void {
        qtc.KParts__ReadWritePart_Delete(@ptrCast(self.ptr));
    }
};
