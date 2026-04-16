const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KConfigGroup = @import("libqt6").KConfigGroup;
const KIO__Job = @import("libqt6").KIO__Job;
const KParts__NavigationExtension = @import("libqt6").KParts__NavigationExtension;
const KParts__OpenUrlArguments = @import("libqt6").KParts__OpenUrlArguments;
const KParts__Part = @import("libqt6").KParts__Part;
const KParts__PartManager = @import("libqt6").KParts__PartManager;
const KPluginMetaData = @import("libqt6").KPluginMetaData;
const KTextEditor__AnnotationModel = @import("libqt6").KTextEditor__AnnotationModel;
const KTextEditor__Cursor = @import("libqt6").KTextEditor__Cursor;
const KTextEditor__MainWindow = @import("libqt6").KTextEditor__MainWindow;
const KTextEditor__Message = @import("libqt6").KTextEditor__Message;
const KTextEditor__MovingCursor = @import("libqt6").KTextEditor__MovingCursor;
const KTextEditor__MovingRange = @import("libqt6").KTextEditor__MovingRange;
const KTextEditor__Range = @import("libqt6").KTextEditor__Range;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const KXMLGUIClient__StateChange = @import("libqt6").KXMLGUIClient__StateChange;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChar = @import("libqt6").QChar;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const document_enums = enums;
const movingcursor_enums = @import("libmovingcursor.zig").enums;
const movingrange_enums = @import("libmovingrange.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const theme_enums = @import("../extras-ksyntaxhighlighting/libtheme.zig").enums;
const Map_i32_KTextEditorMark = std.AutoHashMapUnmanaged(i32, KTextEditor__Mark);
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html)
pub const KTextEditor__Mark = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Mark,

    pub const _is_KTextEditor__Mark = {};

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Mark `
    ///
    pub fn Line(self: KTextEditor__Mark) i32 {
        return qtc.KTextEditor__Mark_Line(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Mark `
    ///
    /// ` line: i32 `
    ///
    pub fn SetLine(self: KTextEditor__Mark, line: i32) void {
        qtc.KTextEditor__Mark_SetLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Mark `
    ///
    pub fn Type(self: KTextEditor__Mark) u32 {
        return qtc.KTextEditor__Mark_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Mark `
    ///
    /// ` type: u32 `
    ///
    pub fn SetType(self: KTextEditor__Mark, _type: u32) void {
        qtc.KTextEditor__Mark_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Mark `
    ///
    pub fn Delete(self: KTextEditor__Mark) void {
        qtc.KTextEditor__Mark_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html)
pub const KTextEditor__Document = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Document,

    pub const _is_KTextEditor__Document = {};
    pub const _is_KParts__ReadWritePart = {};
    pub const _is_KParts__ReadOnlyPart = {};
    pub const _is_KParts__Part = {};
    pub const _is_QObject = {};
    pub const _is_KParts__PartBase = {};
    pub const _is_KXMLGUIClient = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn MetaObject(self: KTextEditor__Document) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Document_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTextEditor__Document, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Document_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTextEditor__Document, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Document_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#createView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` parent: QWidget `
    ///
    /// ` mainWindow: KTextEditor__MainWindow `
    ///
    pub fn CreateView(self: KTextEditor__Document, parent: anytype, mainWindow: anytype) KTextEditor__View {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(mainWindow)._is_KTextEditor__MainWindow;
        return .{ .ptr = qtc.KTextEditor__Document_CreateView(@ptrCast(self.ptr), @ptrCast(parent.ptr), @ptrCast(mainWindow.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#views)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Views(self: KTextEditor__Document, allocator: std.mem.Allocator) []KTextEditor__View {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_Views(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__View, _arr.len) catch @panic("ktexteditor__document.Views: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__View = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#viewCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn ViewCreated(self: KTextEditor__Document, document: anytype, view: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__Document_ViewCreated(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#viewCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn OnViewCreated(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ViewCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentName(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_DocumentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.DocumentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#checksum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Checksum(self: KTextEditor__Document, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KTextEditor__Document_Checksum(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("ktexteditor__document.Checksum: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn DocumentNameChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_DocumentNameChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnDocumentNameChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn DocumentUrlChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_DocumentUrlChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentUrlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnDocumentUrlChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentUrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn ModifiedChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ModifiedChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnModifiedChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModifiedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#readWriteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn ReadWriteChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ReadWriteChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#readWriteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnReadWriteChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ReadWriteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` encoding: []const u8 `
    ///
    pub fn SetEncoding(self: KTextEditor__Document, encoding: []const u8) bool {
        const encoding_str = qtc.libqt_string{
            .len = encoding.len,
            .data = encoding.ptr,
        };
        return qtc.KTextEditor__Document_SetEncoding(@ptrCast(self.ptr), encoding_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Encoding(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_Encoding(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.Encoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentReload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DocumentReload(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_DocumentReload(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSave)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DocumentSave(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_DocumentSave(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSaveAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DocumentSaveAs(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_DocumentSaveAs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#openingError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn OpeningError(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_OpeningError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSavedOrUploaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` saveAs: bool `
    ///
    pub fn DocumentSavedOrUploaded(self: KTextEditor__Document, document: anytype, saveAs: bool) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_DocumentSavedOrUploaded(@ptrCast(self.ptr), @ptrCast(document.ptr), saveAs);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSavedOrUploaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, saveAs: bool) callconv(.c) void `
    ///
    pub fn OnDocumentSavedOrUploaded(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentSavedOrUploaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn AboutToClose(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToClose(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToReload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn AboutToReload(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToReload(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToReload)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnAboutToReload(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToReload(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#reloaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn Reloaded(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_Reloaded(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#reloaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnReloaded(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_Reloaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToSave)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn AboutToSave(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToSave(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToSave)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnAboutToSave(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isEditingTransactionRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsEditingTransactionRunning(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_IsEditingTransactionRunning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` block: bool `
    ///
    pub fn Text2(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, block: bool) []const u8 {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        var _str = qtc.KTextEditor__Document_Text2(@ptrCast(self.ptr), @ptrCast(range.ptr), block);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.Text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#characterAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn CharacterAt(self: KTextEditor__Document, position: anytype) QChar {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Document_CharacterAt(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#wordAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn WordAt(self: KTextEditor__Document, allocator: std.mem.Allocator, cursor: anytype) []const u8 {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__Document_WordAt(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.WordAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#wordRangeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn WordRangeAt(self: KTextEditor__Document, cursor: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Document_WordRangeAt(@ptrCast(self.ptr), @ptrCast(cursor.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isValidTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn IsValidTextPosition(self: KTextEditor__Document, cursor: anytype) bool {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Document_IsValidTextPosition(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` block: bool `
    ///
    pub fn TextLines(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, block: bool) []const []const u8 {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_TextLines(@ptrCast(self.ptr), @ptrCast(range.ptr), block);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor__document.TextLines: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__document.TextLines: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` line: i32 `
    ///
    pub fn Line(self: KTextEditor__Document, allocator: std.mem.Allocator, line: i32) []const u8 {
        var _str = qtc.KTextEditor__Document_Line(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.Line: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Lines(self: KTextEditor__Document) i32 {
        return qtc.KTextEditor__Document_Lines(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn IsLineModified(self: KTextEditor__Document, line: i32) bool {
        return qtc.KTextEditor__Document_IsLineModified(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineSaved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn IsLineSaved(self: KTextEditor__Document, line: i32) bool {
        return qtc.KTextEditor__Document_IsLineSaved(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineTouched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn IsLineTouched(self: KTextEditor__Document, line: i32) bool {
        return qtc.KTextEditor__Document_IsLineTouched(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DocumentEnd(self: KTextEditor__Document) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Document_DocumentEnd(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DocumentRange(self: KTextEditor__Document) KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__Document_DocumentRange(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#totalCharacters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn TotalCharacters(self: KTextEditor__Document) isize {
        return qtc.KTextEditor__Document_TotalCharacters(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsEmpty(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn LineLength(self: KTextEditor__Document, line: i32) i32 {
        return qtc.KTextEditor__Document_LineLength(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#endOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn EndOfLine(self: KTextEditor__Document, line: i32) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Document_EndOfLine(@ptrCast(self.ptr), @bitCast(line)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KTextEditor__Document, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__Document_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const []const u8 `
    ///
    pub fn SetText2(self: KTextEditor__Document, allocator: std.mem.Allocator, text: []const []const u8) bool {
        const text_arr = allocator.alloc(qtc.libqt_string, text.len) catch @panic("ktexteditor__document.SetText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (text, 0..text.len) |item, i|
            text_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const text_list = qtc.libqt_list{
            .len = text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_SetText2(@ptrCast(self.ptr), text_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Clear(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    /// ` text: []const u8 `
    ///
    /// ` block: bool `
    ///
    pub fn InsertText(self: KTextEditor__Document, position: anytype, text: []const u8, block: bool) bool {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__Document_InsertText(@ptrCast(self.ptr), @ptrCast(position.ptr), text_str, block);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    /// ` text: []const []const u8 `
    ///
    /// ` block: bool `
    ///
    pub fn InsertText2(self: KTextEditor__Document, allocator: std.mem.Allocator, position: anytype, text: []const []const u8, block: bool) bool {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        const text_arr = allocator.alloc(qtc.libqt_string, text.len) catch @panic("ktexteditor__document.InsertText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (text, 0..text.len) |item, i|
            text_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const text_list = qtc.libqt_list{
            .len = text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_InsertText2(@ptrCast(self.ptr), @ptrCast(position.ptr), text_list, block);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#replaceText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` text: []const u8 `
    ///
    /// ` block: bool `
    ///
    pub fn ReplaceText(self: KTextEditor__Document, range: anytype, text: []const u8, block: bool) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__Document_ReplaceText(@ptrCast(self.ptr), @ptrCast(range.ptr), text_str, block);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#replaceText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` text: []const []const u8 `
    ///
    /// ` block: bool `
    ///
    pub fn ReplaceText2(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, text: []const []const u8, block: bool) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const text_arr = allocator.alloc(qtc.libqt_string, text.len) catch @panic("ktexteditor__document.ReplaceText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (text, 0..text.len) |item, i|
            text_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const text_list = qtc.libqt_list{
            .len = text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_ReplaceText2(@ptrCast(self.ptr), @ptrCast(range.ptr), text_list, block);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#removeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` block: bool `
    ///
    pub fn RemoveText(self: KTextEditor__Document, range: anytype, block: bool) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Document_RemoveText(@ptrCast(self.ptr), @ptrCast(range.ptr), block);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertLine(self: KTextEditor__Document, line: i32, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KTextEditor__Document_InsertLine(@ptrCast(self.ptr), @bitCast(line), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` line: i32 `
    ///
    /// ` text: []const []const u8 `
    ///
    pub fn InsertLines(self: KTextEditor__Document, allocator: std.mem.Allocator, line: i32, text: []const []const u8) bool {
        const text_arr = allocator.alloc(qtc.libqt_string, text.len) catch @panic("ktexteditor__document.InsertLines: Memory allocation failed");
        defer allocator.free(text_arr);
        for (text, 0..text.len) |item, i|
            text_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const text_list = qtc.libqt_list{
            .len = text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_InsertLines(@ptrCast(self.ptr), @bitCast(line), text_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#removeLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn RemoveLine(self: KTextEditor__Document, line: i32) bool {
        return qtc.KTextEditor__Document_RemoveLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#searchText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SearchText(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, pattern: []const u8) []KTextEditor__Range {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_SearchText(@ptrCast(self.ptr), @ptrCast(range.ptr), pattern_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Range, _arr.len) catch @panic("ktexteditor__document.SearchText: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#cursorToOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` c: KTextEditor__Cursor `
    ///
    pub fn CursorToOffset(self: KTextEditor__Document, c: anytype) isize {
        comptime _ = @TypeOf(c)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Document_CursorToOffset(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#offsetToCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` offset: isize `
    ///
    pub fn OffsetToCursor(self: KTextEditor__Document, offset: isize) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Document_OffsetToCursor(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn EditingStarted(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_EditingStarted(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnEditingStarted(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_EditingStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn EditingFinished(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_EditingFinished(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineWrapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn LineWrapped(self: KTextEditor__Document, document: anytype, position: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Document_LineWrapped(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineWrapped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, position: KTextEditor__Cursor) callconv(.c) void `
    ///
    pub fn OnLineWrapped(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_LineWrapped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineUnwrapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn LineUnwrapped(self: KTextEditor__Document, document: anytype, line: i32) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_LineUnwrapped(@ptrCast(self.ptr), @ptrCast(document.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineUnwrapped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, line: i32) callconv(.c) void `
    ///
    pub fn OnLineUnwrapped(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_LineUnwrapped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TextInserted(self: KTextEditor__Document, document: anytype, position: anytype, text: []const u8) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Document_TextInserted(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(position.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, position: KTextEditor__Cursor, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextInserted(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Cursor, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TextRemoved(self: KTextEditor__Document, document: anytype, range: anytype, text: []const u8) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Document_TextRemoved(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(range.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, range: KTextEditor__Range, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextRemoved(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Range, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn TextChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_TextChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#defaultStyleAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    /// ## Returns:
    ///
    /// ` theme_enums.TextStyle `
    ///
    pub fn DefaultStyleAt(self: KTextEditor__Document, position: anytype) i32 {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Document_DefaultStyleAt(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mode(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_Mode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.Mode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HighlightingMode(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_HighlightingMode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.HighlightingMode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#embeddedHighlightingModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmbeddedHighlightingModes(self: KTextEditor__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_EmbeddedHighlightingModes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor__document.EmbeddedHighlightingModes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__document.EmbeddedHighlightingModes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn HighlightingModeAt(self: KTextEditor__Document, allocator: std.mem.Allocator, position: anytype) []const u8 {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__Document_HighlightingModeAt(@ptrCast(self.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.HighlightingModeAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Modes(self: KTextEditor__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_Modes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor__document.Modes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__document.Modes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HighlightingModes(self: KTextEditor__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_HighlightingModes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor__document.HighlightingModes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__document.HighlightingModes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetMode(self: KTextEditor__Document, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KTextEditor__Document_SetMode(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setHighlightingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetHighlightingMode(self: KTextEditor__Document, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KTextEditor__Document_SetHighlightingMode(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn HighlightingModeSection(self: KTextEditor__Document, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.KTextEditor__Document_HighlightingModeSection(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.HighlightingModeSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modeSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: i32 `
    ///
    pub fn ModeSection(self: KTextEditor__Document, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.KTextEditor__Document_ModeSection(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.ModeSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn ModeChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ModeChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnModeChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn HighlightingModeChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_HighlightingModeChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnHighlightingModeChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_HighlightingModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Print(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_Print(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#printPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn PrintPreview(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_PrintPreview(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#postMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` message: KTextEditor__Message `
    ///
    pub fn PostMessage(self: KTextEditor__Document, message: anytype) bool {
        comptime _ = @TypeOf(message)._is_KTextEditor__Message;
        return qtc.KTextEditor__Document_PostMessage(@ptrCast(self.ptr), @ptrCast(message.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#readSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` flags: Set_constu8 `
    ///
    pub fn ReadSessionConfig(self: KTextEditor__Document, allocator: std.mem.Allocator, config: anytype, flags: Set_constu8) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        const flags_count = flags.count();
        const flags_arr = allocator.alloc(qtc.libqt_string, flags_count) catch @panic("ktexteditor__document.ReadSessionConfig: Memory allocation failed");
        defer allocator.free(flags_arr);
        var flags_it = flags.keyIterator();
        var flags_i: usize = 0;
        while (flags_it.next()) |flags_item| : (flags_i += 1) {
            flags_arr[flags_i] = .{
                .len = flags_item.*.len,
                .data = flags_item.*.ptr,
            };
        }
        const flags_set = qtc.libqt_list{
            .len = flags_count,
            .data = flags_arr.ptr,
        };
        qtc.KTextEditor__Document_ReadSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr), flags_set);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#writeSessionConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` config: KConfigGroup `
    ///
    /// ` flags: Set_constu8 `
    ///
    pub fn WriteSessionConfig(self: KTextEditor__Document, allocator: std.mem.Allocator, config: anytype, flags: Set_constu8) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        const flags_count = flags.count();
        const flags_arr = allocator.alloc(qtc.libqt_string, flags_count) catch @panic("ktexteditor__document.WriteSessionConfig: Memory allocation failed");
        defer allocator.free(flags_arr);
        var flags_it = flags.keyIterator();
        var flags_i: usize = 0;
        while (flags_it.next()) |flags_item| : (flags_i += 1) {
            flags_arr[flags_i] = .{
                .len = flags_item.*.len,
                .data = flags_item.*.ptr,
            };
        }
        const flags_set = qtc.libqt_list{
            .len = flags_count,
            .data = flags_arr.ptr,
        };
        qtc.KTextEditor__Document_WriteSessionConfig(@ptrCast(self.ptr), @ptrCast(config.ptr), flags_set);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isDataRecoveryAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsDataRecoveryAvailable(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_IsDataRecoveryAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#recoverData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn RecoverData(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_RecoverData(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#discardDataRecovery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DiscardDataRecovery(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_DiscardDataRecovery(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn ConfigChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ConfigChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnConfigChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#newMovingCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    /// ` insertBehavior: movingcursor_enums.InsertBehavior `
    ///
    pub fn NewMovingCursor(self: KTextEditor__Document, position: anytype, insertBehavior: i32) KTextEditor__MovingCursor {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Document_NewMovingCursor(@ptrCast(self.ptr), @ptrCast(position.ptr), @bitCast(insertBehavior)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#newMovingRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` insertBehaviors: flag of movingrange_enums.InsertBehavior `
    ///
    /// ` emptyBehavior: movingrange_enums.EmptyBehavior `
    ///
    pub fn NewMovingRange(self: KTextEditor__Document, range: anytype, insertBehaviors: i32, emptyBehavior: i32) KTextEditor__MovingRange {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Document_NewMovingRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @bitCast(insertBehaviors), @bitCast(emptyBehavior)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Revision(self: KTextEditor__Document) i64 {
        return qtc.KTextEditor__Document_Revision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lastSavedRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn LastSavedRevision(self: KTextEditor__Document) i64 {
        return qtc.KTextEditor__Document_LastSavedRevision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lockRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` revision: i64 `
    ///
    pub fn LockRevision(self: KTextEditor__Document, revision: i64) void {
        qtc.KTextEditor__Document_LockRevision(@ptrCast(self.ptr), @bitCast(revision));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#unlockRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` revision: i64 `
    ///
    pub fn UnlockRevision(self: KTextEditor__Document, revision: i64) void {
        qtc.KTextEditor__Document_UnlockRevision(@ptrCast(self.ptr), @bitCast(revision));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#transformCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    /// ` insertBehavior: movingcursor_enums.InsertBehavior `
    ///
    /// ` fromRevision: i64 `
    ///
    /// ` toRevision: i64 `
    ///
    pub fn TransformCursor(self: KTextEditor__Document, cursor: anytype, insertBehavior: i32, fromRevision: i64, toRevision: i64) void {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Document_TransformCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr), @bitCast(insertBehavior), @bitCast(fromRevision), @bitCast(toRevision));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#transformCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: *i32 `
    ///
    /// ` column: *i32 `
    ///
    /// ` insertBehavior: movingcursor_enums.InsertBehavior `
    ///
    /// ` fromRevision: i64 `
    ///
    /// ` toRevision: i64 `
    ///
    pub fn TransformCursor2(self: KTextEditor__Document, line: *i32, column: *i32, insertBehavior: i32, fromRevision: i64, toRevision: i64) void {
        qtc.KTextEditor__Document_TransformCursor2(@ptrCast(self.ptr), @ptrCast(line), @ptrCast(column), @bitCast(insertBehavior), @bitCast(fromRevision), @bitCast(toRevision));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#transformRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` insertBehaviors: flag of movingrange_enums.InsertBehavior `
    ///
    /// ` emptyBehavior: movingrange_enums.EmptyBehavior `
    ///
    /// ` fromRevision: i64 `
    ///
    /// ` toRevision: i64 `
    ///
    pub fn TransformRange(self: KTextEditor__Document, range: anytype, insertBehaviors: i32, emptyBehavior: i32, fromRevision: i64, toRevision: i64) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        qtc.KTextEditor__Document_TransformRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @bitCast(insertBehaviors), @bitCast(emptyBehavior), @bitCast(fromRevision), @bitCast(toRevision));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToDeleteMovingInterfaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn AboutToDeleteMovingInterfaceContent(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToDeleteMovingInterfaceContent(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToDeleteMovingInterfaceContent)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnAboutToDeleteMovingInterfaceContent(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToDeleteMovingInterfaceContent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToInvalidateMovingInterfaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn AboutToInvalidateMovingInterfaceContent(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToInvalidateMovingInterfaceContent(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToInvalidateMovingInterfaceContent)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnAboutToInvalidateMovingInterfaceContent(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToInvalidateMovingInterfaceContent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#configKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConfigKeys(self: KTextEditor__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_ConfigKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor__document.ConfigKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__document.ConfigKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ConfigValue(self: KTextEditor__Document, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Document_ConfigValue(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setConfigValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetConfigValue(self: KTextEditor__Document, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KTextEditor__Document_SetConfigValue(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setModifiedOnDisk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` reason: document_enums.ModifiedOnDiskReason `
    ///
    pub fn SetModifiedOnDisk(self: KTextEditor__Document, reason: i32) void {
        qtc.KTextEditor__Document_SetModifiedOnDisk(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setModifiedOnDiskWarning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` on: bool `
    ///
    pub fn SetModifiedOnDiskWarning(self: KTextEditor__Document, on: bool) void {
        qtc.KTextEditor__Document_SetModifiedOnDiskWarning(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedOnDisk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` isModified: bool `
    ///
    /// ` reason: document_enums.ModifiedOnDiskReason `
    ///
    pub fn ModifiedOnDisk(self: KTextEditor__Document, document: anytype, isModified: bool, reason: i32) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ModifiedOnDisk(@ptrCast(self.ptr), @ptrCast(document.ptr), isModified, @bitCast(reason));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedOnDisk)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, isModified: bool, reason: document_enums.ModifiedOnDiskReason) callconv(.c) void `
    ///
    pub fn OnModifiedOnDisk(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, bool, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModifiedOnDisk(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#mark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn Mark(self: KTextEditor__Document, line: i32) u32 {
        return qtc.KTextEditor__Document_Mark(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    /// ` markType: u32 `
    ///
    pub fn SetMark(self: KTextEditor__Document, line: i32, markType: u32) void {
        qtc.KTextEditor__Document_SetMark(@ptrCast(self.ptr), @bitCast(line), @bitCast(markType));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#clearMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    pub fn ClearMark(self: KTextEditor__Document, line: i32) void {
        qtc.KTextEditor__Document_ClearMark(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#addMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    /// ` markType: u32 `
    ///
    pub fn AddMark(self: KTextEditor__Document, line: i32, markType: u32) void {
        qtc.KTextEditor__Document_AddMark(@ptrCast(self.ptr), @bitCast(line), @bitCast(markType));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#removeMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` line: i32 `
    ///
    /// ` markType: u32 `
    ///
    pub fn RemoveMark(self: KTextEditor__Document, line: i32, markType: u32) void {
        qtc.KTextEditor__Document_RemoveMark(@ptrCast(self.ptr), @bitCast(line), @bitCast(markType));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#marks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Marks(self: KTextEditor__Document, allocator: std.mem.Allocator) Map_i32_KTextEditorMark {
        const _map: qtc.libqt_map = qtc.KTextEditor__Document_Marks(@ptrCast(self.ptr));
        var _ret: Map_i32_KTextEditorMark = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.KTextEditor__Mark = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("ktexteditor__document.Marks: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#clearMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn ClearMarks(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_ClearMarks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#reservedMarkersCount)
    ///
    pub fn ReservedMarkersCount() i32 {
        return qtc.KTextEditor__Document_ReservedMarkersCount();
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMarkDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` mark: document_enums.MarkTypes `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetMarkDescription(self: KTextEditor__Document, mark: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Document_SetMarkDescription(@ptrCast(self.ptr), @bitCast(mark), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mark: document_enums.MarkTypes `
    ///
    pub fn MarkDescription(self: KTextEditor__Document, allocator: std.mem.Allocator, mark: i32) []const u8 {
        var _str = qtc.KTextEditor__Document_MarkDescription(@ptrCast(self.ptr), @bitCast(mark));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.MarkDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setEditableMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` markMask: u32 `
    ///
    pub fn SetEditableMarks(self: KTextEditor__Document, markMask: u32) void {
        qtc.KTextEditor__Document_SetEditableMarks(@ptrCast(self.ptr), @bitCast(markMask));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editableMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn EditableMarks(self: KTextEditor__Document) u32 {
        return qtc.KTextEditor__Document_EditableMarks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMarkIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` markType: document_enums.MarkTypes `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetMarkIcon(self: KTextEditor__Document, markType: i32, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KTextEditor__Document_SetMarkIcon(@ptrCast(self.ptr), @bitCast(markType), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` markType: document_enums.MarkTypes `
    ///
    pub fn MarkIcon(self: KTextEditor__Document, markType: i32) QIcon {
        return .{ .ptr = qtc.KTextEditor__Document_MarkIcon(@ptrCast(self.ptr), @bitCast(markType)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#marksChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn MarksChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_MarksChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#marksChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnMarksChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarksChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` mark: KTextEditor__Mark `
    ///
    /// ` action: document_enums.MarkChangeAction `
    ///
    pub fn MarkChanged(self: KTextEditor__Document, document: anytype, mark: anytype, action: i32) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(mark)._is_KTextEditor__Mark;
        qtc.KTextEditor__Document_MarkChanged(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(mark.ptr), @bitCast(action));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, mark: KTextEditor__Mark, action: document_enums.MarkChangeAction) callconv(.c) void `
    ///
    pub fn OnMarkChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Mark, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markToolTipRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` mark: KTextEditor__Mark `
    ///
    /// ` position: QPoint `
    ///
    /// ` handled: *bool `
    ///
    pub fn MarkToolTipRequested(self: KTextEditor__Document, document: anytype, mark: anytype, position: anytype, handled: *bool) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(mark)._is_KTextEditor__Mark;
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.KTextEditor__Document_MarkToolTipRequested(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(mark.ptr), @ptrCast(position.ptr), @ptrCast(handled));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markToolTipRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, mark: KTextEditor__Mark, position: QPoint, handled: *bool) callconv(.c) void `
    ///
    pub fn OnMarkToolTipRequested(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Mark, QPoint, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkToolTipRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` mark: KTextEditor__Mark `
    ///
    /// ` pos: QPoint `
    ///
    /// ` handled: *bool `
    ///
    pub fn MarkContextMenuRequested(self: KTextEditor__Document, document: anytype, mark: anytype, pos: anytype, handled: *bool) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(mark)._is_KTextEditor__Mark;
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KTextEditor__Document_MarkContextMenuRequested(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(mark.ptr), @ptrCast(pos.ptr), @ptrCast(handled));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, mark: KTextEditor__Mark, pos: QPoint, handled: *bool) callconv(.c) void `
    ///
    pub fn OnMarkContextMenuRequested(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Mark, QPoint, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` mark: KTextEditor__Mark `
    ///
    /// ` handled: *bool `
    ///
    pub fn MarkClicked(self: KTextEditor__Document, document: anytype, mark: anytype, handled: *bool) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(mark)._is_KTextEditor__Mark;
        qtc.KTextEditor__Document_MarkClicked(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(mark.ptr), @ptrCast(handled));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, mark: KTextEditor__Mark, handled: *bool) callconv(.c) void `
    ///
    pub fn OnMarkClicked(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Mark, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setAnnotationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    pub fn SetAnnotationModel(self: KTextEditor__Document, model: anytype) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        qtc.KTextEditor__Document_SetAnnotationModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#annotationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn AnnotationModel(self: KTextEditor__Document) KTextEditor__AnnotationModel {
        return .{ .ptr = qtc.KTextEditor__Document_AnnotationModel(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#searchText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` pattern: []const u8 `
    ///
    /// ` options: flag of document_enums.SearchOption `
    ///
    pub fn SearchText3(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, pattern: []const u8, options: i32) []KTextEditor__Range {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_SearchText3(@ptrCast(self.ptr), @ptrCast(range.ptr), pattern_str, @bitCast(options));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Range, _arr.len) catch @panic("ktexteditor__document.SearchText3: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isReadWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsReadWrite(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_IsReadWrite(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` readwrite: bool `
    ///
    pub fn SetReadWrite(self: KTextEditor__Document, readwrite: bool) void {
        qtc.KParts__ReadWritePart_SetReadWrite(@ptrCast(self.ptr), readwrite);
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsModified(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_IsModified(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn QueryClose(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_QueryClose(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn CloseUrl(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_CloseUrl(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` promptToSave: bool `
    ///
    pub fn CloseUrl2(self: KTextEditor__Document, promptToSave: bool) bool {
        return qtc.KParts__ReadWritePart_CloseUrl2(@ptrCast(self.ptr), promptToSave);
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` url: QUrl `
    ///
    pub fn SaveAs(self: KTextEditor__Document, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadWritePart_SaveAs(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` modified: bool `
    ///
    pub fn SetModified(self: KTextEditor__Document, modified: bool) void {
        qtc.KParts__ReadWritePart_SetModified(@ptrCast(self.ptr), modified);
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` handled: *bool `
    ///
    /// ` abortClosing: *bool `
    ///
    pub fn SigQueryClose(self: KTextEditor__Document, handled: *bool, abortClosing: *bool) void {
        qtc.KParts__ReadWritePart_SigQueryClose(@ptrCast(self.ptr), @ptrCast(handled), @ptrCast(abortClosing));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, handled: *bool, abortClosing: *bool) callconv(.c) void `
    ///
    pub fn OnSigQueryClose(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, *bool, *bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_Connect_SigQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn SetModified2(self: KTextEditor__Document) void {
        qtc.KParts__ReadWritePart_SetModified2(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Save(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_Save(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#waitSaveComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn WaitSaveComplete(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_WaitSaveComplete(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` show: bool `
    ///
    pub fn SetProgressInfoEnabled(self: KTextEditor__Document, show: bool) void {
        qtc.KParts__ReadOnlyPart_SetProgressInfoEnabled(@ptrCast(self.ptr), show);
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsProgressInfoEnabled(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` url: QUrl `
    ///
    pub fn OpenUrl(self: KTextEditor__Document, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_OpenUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Url(self: KTextEditor__Document) QUrl {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Url(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn NavigationExtension(self: KTextEditor__Document) KParts__NavigationExtension {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_NavigationExtension(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` arguments: KParts__OpenUrlArguments `
    ///
    pub fn SetArguments(self: KTextEditor__Document, arguments: anytype) void {
        comptime _ = @TypeOf(arguments)._is_KParts__OpenUrlArguments;
        qtc.KParts__ReadOnlyPart_SetArguments(@ptrCast(self.ptr), @ptrCast(arguments.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Arguments(self: KTextEditor__Document) KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__ReadOnlyPart_Arguments(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` url: QUrl `
    ///
    pub fn OpenStream(self: KTextEditor__Document, mimeType: []const u8, url: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` data: []u8 `
    ///
    pub fn WriteStream(self: KTextEditor__Document, data: []u8) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn CloseStream(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadOnlyPart_CloseStream(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn Started(self: KTextEditor__Document, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KParts__ReadOnlyPart_Started(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, job: KIO__Job) callconv(.c) void `
    ///
    pub fn OnStarted(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KIO__Job) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Completed(self: KTextEditor__Document) void {
        qtc.KParts__ReadOnlyPart_Completed(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnCompleted(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Completed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn CompletedWithPendingAction(self: KTextEditor__Document) void {
        qtc.KParts__ReadOnlyPart_CompletedWithPendingAction(@ptrCast(self.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnCompletedWithPendingAction(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_CompletedWithPendingAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` errMsg: []const u8 `
    ///
    pub fn Canceled(self: KTextEditor__Document, errMsg: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, errMsg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnCanceled(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` url: QUrl `
    ///
    pub fn UrlChanged(self: KTextEditor__Document, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KParts__ReadOnlyPart_UrlChanged(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, url: QUrl) callconv(.c) void `
    ///
    pub fn OnUrlChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Widget(self: KTextEditor__Document) QWidget {
        return .{ .ptr = qtc.KParts__Part_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` manager: KParts__PartManager `
    ///
    pub fn SetManager(self: KTextEditor__Document, manager: anytype) void {
        comptime _ = @TypeOf(manager)._is_KParts__PartManager;
        qtc.KParts__Part_SetManager(@ptrCast(self.ptr), @ptrCast(manager.ptr));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Manager(self: KTextEditor__Document) KParts__PartManager {
        return .{ .ptr = qtc.KParts__Part_Manager(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` autoDeleteWidget: bool `
    ///
    pub fn SetAutoDeleteWidget(self: KTextEditor__Document, autoDeleteWidget: bool) void {
        qtc.KParts__Part_SetAutoDeleteWidget(@ptrCast(self.ptr), autoDeleteWidget);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` autoDeletePart: bool `
    ///
    pub fn SetAutoDeletePart(self: KTextEditor__Document, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self.ptr), autoDeletePart);
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn HitTest(self: KTextEditor__Document, widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__Part_HitTest(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(globalPos.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn MetaData(self: KTextEditor__Document) KPluginMetaData {
        return .{ .ptr = qtc.KParts__Part_MetaData(@ptrCast(self.ptr)) };
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetWindowCaption(self: KTextEditor__Document, caption: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetWindowCaption(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetWindowCaption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetStatusBarText(self: KTextEditor__Document, text: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetStatusBarText(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTextEditor__Document, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTextEditor__Document, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTextEditor__Document, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsWidgetType(self: KTextEditor__Document) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsWindowType(self: KTextEditor__Document) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn IsQuickItemType(self: KTextEditor__Document) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn SignalsBlocked(self: KTextEditor__Document) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTextEditor__Document, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Thread(self: KTextEditor__Document) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTextEditor__Document, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTextEditor__Document, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTextEditor__Document, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTextEditor__Document, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTextEditor__Document, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTextEditor__Document, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktexteditor__document.Children: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTextEditor__Document, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTextEditor__Document, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTextEditor__Document, obj: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTextEditor__Document, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn Disconnect3(self: KTextEditor__Document) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTextEditor__Document, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn DumpObjectTree(self: KTextEditor__Document) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DumpObjectInfo(self: KTextEditor__Document) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTextEditor__Document, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTextEditor__Document, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTextEditor__Document, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor__document.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__document.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn BindingStorage(self: KTextEditor__Document) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn BindingStorage2(self: KTextEditor__Document) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Destroyed(self: KTextEditor__Document) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Parent(self: KTextEditor__Document) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTextEditor__Document, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DeleteLater(self: KTextEditor__Document) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTextEditor__Document, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTextEditor__Document, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTextEditor__Document, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTextEditor__Document, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTextEditor__Document, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTextEditor__Document, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTextEditor__Document, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTextEditor__Document, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` object: QObject `
    ///
    pub fn SetPartObject(self: KTextEditor__Document, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from KParts::PartBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn PartObject(self: KTextEditor__Document) QObject {
        return .{ .ptr = qtc.KParts__PartBase_PartObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: KTextEditor__Document, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` element: QDomElement `
    ///
    pub fn Action2(self: KTextEditor__Document, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIClient_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn ActionCollection(self: KTextEditor__Document) KActionCollection {
        return .{ .ptr = qtc.KXMLGUIClient_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn DomDocument(self: KTextEditor__Document) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_DomDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XmlFile(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalXMLFile(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn SetXMLGUIBuildDocument(self: KTextEditor__Document, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn XmlguiBuildDocument(self: KTextEditor__Document) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` factory: KXMLGUIFactory `
    ///
    pub fn SetFactory(self: KTextEditor__Document, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Factory(self: KTextEditor__Document) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn ParentClient(self: KTextEditor__Document) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn InsertChildClient(self: KTextEditor__Document, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn RemoveChildClient(self: KTextEditor__Document, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildClients(self: KTextEditor__Document, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("ktexteditor__document.ChildClients: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn SetClientBuilder(self: KTextEditor__Document, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn ClientBuilder(self: KTextEditor__Document) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn ReloadXML(self: KTextEditor__Document) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn PlugActionList(self: KTextEditor__Document, name: []const u8, actionList: []QAction) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: KTextEditor__Document, name: []const u8) void {
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
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("ktexteditor__document.FindMostRecentXMLFile: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: KTextEditor__Document, state: []const u8, action: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: KTextEditor__Document, state: []const u8, action: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` state: []const u8 `
    ///
    pub fn GetActionsToChangeForState(self: KTextEditor__Document, state: []const u8) KXMLGUIClient__StateChange {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: QWidget `
    ///
    pub fn BeginXMLPlug(self: KTextEditor__Document, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn EndXMLPlug(self: KTextEditor__Document) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: QWidget `
    ///
    pub fn PrepareXMLUnplug(self: KTextEditor__Document, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn ReplaceXMLFile(self: KTextEditor__Document, xmlfile: []const u8, localxmlfile: []const u8) void {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__document.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn ReplaceXMLFile3(self: KTextEditor__Document, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn Delete(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html)
pub const KTextEditor__Document__EditingTransaction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Document__EditingTransaction,

    pub const _is_KTextEditor__Document__EditingTransaction = {};

    /// New constructs a new KTextEditor::Document::EditingTransaction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn New(document: anytype) KTextEditor__Document__EditingTransaction {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        return .{ .ptr = qtc.KTextEditor__Document__EditingTransaction_new(@ptrCast(document.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document__EditingTransaction `
    ///
    pub fn Start(self: KTextEditor__Document__EditingTransaction) void {
        qtc.KTextEditor__Document__EditingTransaction_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document__EditingTransaction `
    ///
    pub fn Finish(self: KTextEditor__Document__EditingTransaction) void {
        qtc.KTextEditor__Document__EditingTransaction_Finish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Document__EditingTransaction `
    ///
    pub fn Delete(self: KTextEditor__Document__EditingTransaction) void {
        qtc.KTextEditor__Document__EditingTransaction_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/document.html#public-types)
pub const enums = struct {
    pub const SearchOption = enum(i32) {
        pub const Default: i32 = 0;
        pub const Regex: i32 = 2;
        pub const CaseInsensitive: i32 = 16;
        pub const Backwards: i32 = 32;
        pub const EscapeSequences: i32 = 1024;
        pub const WholeWords: i32 = 2048;
        pub const MaxSearchOption: i32 = -2147483648;
    };

    pub const ModifiedOnDiskReason = enum(i32) {
        pub const OnDiskUnmodified: i32 = 0;
        pub const OnDiskModified: i32 = 1;
        pub const OnDiskCreated: i32 = 2;
        pub const OnDiskDeleted: i32 = 3;
    };

    pub const MarkTypes = enum(i32) {
        pub const MarkType01: i32 = 1;
        pub const MarkType02: i32 = 2;
        pub const MarkType03: i32 = 4;
        pub const MarkType04: i32 = 8;
        pub const MarkType05: i32 = 16;
        pub const MarkType06: i32 = 32;
        pub const MarkType07: i32 = 64;
        pub const MarkType08: i32 = 128;
        pub const MarkType09: i32 = 256;
        pub const MarkType10: i32 = 512;
        pub const MarkType11: i32 = 1024;
        pub const MarkType12: i32 = 2048;
        pub const MarkType13: i32 = 4096;
        pub const MarkType14: i32 = 8192;
        pub const MarkType15: i32 = 16384;
        pub const MarkType16: i32 = 32768;
        pub const MarkType17: i32 = 65536;
        pub const MarkType18: i32 = 131072;
        pub const MarkType19: i32 = 262144;
        pub const MarkType20: i32 = 524288;
        pub const MarkType21: i32 = 1048576;
        pub const MarkType22: i32 = 2097152;
        pub const MarkType23: i32 = 4194304;
        pub const MarkType24: i32 = 8388608;
        pub const MarkType25: i32 = 16777216;
        pub const MarkType26: i32 = 33554432;
        pub const MarkType27: i32 = 67108864;
        pub const MarkType28: i32 = 134217728;
        pub const MarkType29: i32 = 268435456;
        pub const MarkType30: i32 = 536870912;
        pub const MarkType31: i32 = 1073741824;
        pub const MarkType32: i32 = -2147483648;
        pub const Bookmark: i32 = 1;
        pub const BreakpointActive: i32 = 2;
        pub const BreakpointReached: i32 = 4;
        pub const BreakpointDisabled: i32 = 8;
        pub const Execution: i32 = 16;
        pub const Warning: i32 = 32;
        pub const Error: i32 = 64;
        pub const SearchMatch: i32 = -2147483648;
    };

    pub const MarkChangeAction = enum(i32) {
        pub const MarkAdded: i32 = 0;
        pub const MarkRemoved: i32 = 1;
    };
};
