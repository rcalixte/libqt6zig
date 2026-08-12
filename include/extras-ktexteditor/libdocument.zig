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

    /// ### DEPRECATED: Use `line` instead
    ///
    pub const Line = line;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Mark `
    ///
    pub fn line(self: KTextEditor__Mark) i32 {
        return qtc.KTextEditor__Mark_Line(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLine` instead
    ///
    pub const SetLine = setLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html#line-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Mark `
    ///
    /// ` _line: i32 `
    ///
    pub fn setLine(self: KTextEditor__Mark, _line: i32) void {
        qtc.KTextEditor__Mark_SetLine(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Mark `
    ///
    pub fn type0(self: KTextEditor__Mark) u32 {
        return qtc.KTextEditor__Mark_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-mark.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Mark `
    ///
    /// ` _type: u32 `
    ///
    pub fn setType(self: KTextEditor__Mark, _type: u32) void {
        qtc.KTextEditor__Mark_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Mark `
    ///
    pub fn delete(self: KTextEditor__Mark) void {
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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn metaObject(self: KTextEditor__Document) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Document_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTextEditor__Document, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Document_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KTextEditor__Document, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Document_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createView` instead
    ///
    pub const CreateView = createView;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#createView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` mainWindow: KTextEditor__MainWindow `
    ///
    pub fn createView(self: KTextEditor__Document, _parent: anytype, mainWindow: anytype) KTextEditor__View {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(mainWindow)._is_KTextEditor__MainWindow;
        return .{ .ptr = qtc.KTextEditor__Document_CreateView(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @ptrCast(mainWindow.ptr)) };
    }

    /// ### DEPRECATED: Use `views` instead
    ///
    pub const Views = views;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#views)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn views(self: KTextEditor__Document, allocator: std.mem.Allocator) []KTextEditor__View {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_Views(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__View, _arr.len) catch @panic("KTextEditor__Document.views: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__View = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `viewCreated` instead
    ///
    pub const ViewCreated = viewCreated;

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
    pub fn viewCreated(self: KTextEditor__Document, document: anytype, view: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__Document_ViewCreated(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(view.ptr));
    }

    /// ### DEPRECATED: Use `onViewCreated` instead
    ///
    pub const OnViewCreated = onViewCreated;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#viewCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, view: KTextEditor__View) callconv(.c) void `
    ///
    pub fn onViewCreated(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__View) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ViewCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `documentName` instead
    ///
    pub const DocumentName = documentName;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentName(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_DocumentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.documentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeType(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `checksum` instead
    ///
    pub const Checksum = checksum;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#checksum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn checksum(self: KTextEditor__Document, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.KTextEditor__Document_Checksum(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KTextEditor__Document.checksum: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `documentNameChanged` instead
    ///
    pub const DocumentNameChanged = documentNameChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn documentNameChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_DocumentNameChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onDocumentNameChanged` instead
    ///
    pub const OnDocumentNameChanged = onDocumentNameChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onDocumentNameChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `documentUrlChanged` instead
    ///
    pub const DocumentUrlChanged = documentUrlChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentUrlChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn documentUrlChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_DocumentUrlChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onDocumentUrlChanged` instead
    ///
    pub const OnDocumentUrlChanged = onDocumentUrlChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentUrlChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onDocumentUrlChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentUrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modifiedChanged` instead
    ///
    pub const ModifiedChanged = modifiedChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn modifiedChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ModifiedChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onModifiedChanged` instead
    ///
    pub const OnModifiedChanged = onModifiedChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onModifiedChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModifiedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readWriteChanged` instead
    ///
    pub const ReadWriteChanged = readWriteChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#readWriteChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn readWriteChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ReadWriteChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onReadWriteChanged` instead
    ///
    pub const OnReadWriteChanged = onReadWriteChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#readWriteChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onReadWriteChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ReadWriteChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setEncoding` instead
    ///
    pub const SetEncoding = setEncoding;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _encoding: []const u8 `
    ///
    pub fn setEncoding(self: KTextEditor__Document, _encoding: []const u8) bool {
        const encoding_str = qtc.libqt_string{
            .len = _encoding.len,
            .data = _encoding.ptr,
        };
        return qtc.KTextEditor__Document_SetEncoding(@ptrCast(self.ptr), encoding_str);
    }

    /// ### DEPRECATED: Use `encoding` instead
    ///
    pub const Encoding = encoding;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn encoding(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_Encoding(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.encoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `documentReload` instead
    ///
    pub const DocumentReload = documentReload;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentReload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn documentReload(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_DocumentReload(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `documentSave` instead
    ///
    pub const DocumentSave = documentSave;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSave)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn documentSave(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_DocumentSave(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `documentSaveAs` instead
    ///
    pub const DocumentSaveAs = documentSaveAs;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSaveAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn documentSaveAs(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_DocumentSaveAs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `openingError` instead
    ///
    pub const OpeningError = openingError;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#openingError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn openingError(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_OpeningError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `documentSavedOrUploaded` instead
    ///
    pub const DocumentSavedOrUploaded = documentSavedOrUploaded;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSavedOrUploaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` _saveAs: bool `
    ///
    pub fn documentSavedOrUploaded(self: KTextEditor__Document, document: anytype, _saveAs: bool) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_DocumentSavedOrUploaded(@ptrCast(self.ptr), @ptrCast(document.ptr), _saveAs);
    }

    /// ### DEPRECATED: Use `onDocumentSavedOrUploaded` instead
    ///
    pub const OnDocumentSavedOrUploaded = onDocumentSavedOrUploaded;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentSavedOrUploaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, saveAs: bool) callconv(.c) void `
    ///
    pub fn onDocumentSavedOrUploaded(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_DocumentSavedOrUploaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToClose` instead
    ///
    pub const AboutToClose = aboutToClose;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn aboutToClose(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToClose(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToClose` instead
    ///
    pub const OnAboutToClose = onAboutToClose;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onAboutToClose(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToReload` instead
    ///
    pub const AboutToReload = aboutToReload;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToReload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn aboutToReload(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToReload(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToReload` instead
    ///
    pub const OnAboutToReload = onAboutToReload;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToReload)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onAboutToReload(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToReload(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reloaded` instead
    ///
    pub const Reloaded = reloaded;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#reloaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn reloaded(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_Reloaded(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onReloaded` instead
    ///
    pub const OnReloaded = onReloaded;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#reloaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onReloaded(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_Reloaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToSave` instead
    ///
    pub const AboutToSave = aboutToSave;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToSave)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn aboutToSave(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToSave(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToSave` instead
    ///
    pub const OnAboutToSave = onAboutToSave;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToSave)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onAboutToSave(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEditingTransactionRunning` instead
    ///
    pub const IsEditingTransactionRunning = isEditingTransactionRunning;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isEditingTransactionRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn isEditingTransactionRunning(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_IsEditingTransactionRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text2` instead
    ///
    pub const Text2 = text2;

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
    pub fn text2(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, block: bool) []const u8 {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        var _str = qtc.KTextEditor__Document_Text2(@ptrCast(self.ptr), @ptrCast(range.ptr), block);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `characterAt` instead
    ///
    pub const CharacterAt = characterAt;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#characterAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    pub fn characterAt(self: KTextEditor__Document, position: anytype) QChar {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Document_CharacterAt(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `wordAt` instead
    ///
    pub const WordAt = wordAt;

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
    pub fn wordAt(self: KTextEditor__Document, allocator: std.mem.Allocator, cursor: anytype) []const u8 {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__Document_WordAt(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.wordAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `wordRangeAt` instead
    ///
    pub const WordRangeAt = wordRangeAt;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#wordRangeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn wordRangeAt(self: KTextEditor__Document, cursor: anytype) KTextEditor__Range {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Document_WordRangeAt(@ptrCast(self.ptr), @ptrCast(cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `isValidTextPosition` instead
    ///
    pub const IsValidTextPosition = isValidTextPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isValidTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` cursor: KTextEditor__Cursor `
    ///
    pub fn isValidTextPosition(self: KTextEditor__Document, cursor: anytype) bool {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Document_IsValidTextPosition(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `textLines` instead
    ///
    pub const TextLines = textLines;

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
    pub fn textLines(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, block: bool) []const []const u8 {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_TextLines(@ptrCast(self.ptr), @ptrCast(range.ptr), block);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__Document.textLines: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Document.textLines: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `line` instead
    ///
    pub const Line = line;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#line)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _line: i32 `
    ///
    pub fn line(self: KTextEditor__Document, allocator: std.mem.Allocator, _line: i32) []const u8 {
        var _str = qtc.KTextEditor__Document_Line(@ptrCast(self.ptr), @bitCast(_line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.line: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `lines` instead
    ///
    pub const Lines = lines;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn lines(self: KTextEditor__Document) i32 {
        return qtc.KTextEditor__Document_Lines(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLineModified` instead
    ///
    pub const IsLineModified = isLineModified;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn isLineModified(self: KTextEditor__Document, _line: i32) bool {
        return qtc.KTextEditor__Document_IsLineModified(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `isLineSaved` instead
    ///
    pub const IsLineSaved = isLineSaved;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineSaved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn isLineSaved(self: KTextEditor__Document, _line: i32) bool {
        return qtc.KTextEditor__Document_IsLineSaved(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `isLineTouched` instead
    ///
    pub const IsLineTouched = isLineTouched;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isLineTouched)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn isLineTouched(self: KTextEditor__Document, _line: i32) bool {
        return qtc.KTextEditor__Document_IsLineTouched(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `documentEnd` instead
    ///
    pub const DocumentEnd = documentEnd;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn documentEnd(self: KTextEditor__Document) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Document_DocumentEnd(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `documentRange` instead
    ///
    pub const DocumentRange = documentRange;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#documentRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn documentRange(self: KTextEditor__Document) KTextEditor__Range {
        return .{ .ptr = qtc.KTextEditor__Document_DocumentRange(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalCharacters` instead
    ///
    pub const TotalCharacters = totalCharacters;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#totalCharacters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn totalCharacters(self: KTextEditor__Document) isize {
        return qtc.KTextEditor__Document_TotalCharacters(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn isEmpty(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineLength` instead
    ///
    pub const LineLength = lineLength;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn lineLength(self: KTextEditor__Document, _line: i32) i32 {
        return qtc.KTextEditor__Document_LineLength(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `endOfLine` instead
    ///
    pub const EndOfLine = endOfLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#endOfLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn endOfLine(self: KTextEditor__Document, _line: i32) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Document_EndOfLine(@ptrCast(self.ptr), @bitCast(_line)) };
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: KTextEditor__Document, _text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.KTextEditor__Document_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setText2` instead
    ///
    pub const SetText2 = setText2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const []const u8 `
    ///
    pub fn setText2(self: KTextEditor__Document, allocator: std.mem.Allocator, _text: []const []const u8) bool {
        const text_arr = allocator.alloc(qtc.libqt_string, _text.len) catch @panic("KTextEditor__Document.setText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (_text, 0.._text.len) |str_item, i|
            text_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const text_list = qtc.libqt_list{
            .len = _text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_SetText2(@ptrCast(self.ptr), text_list);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn clear(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertText` instead
    ///
    pub const InsertText = insertText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` position: KTextEditor__Cursor `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` block: bool `
    ///
    pub fn insertText(self: KTextEditor__Document, position: anytype, _text: []const u8, block: bool) bool {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.KTextEditor__Document_InsertText(@ptrCast(self.ptr), @ptrCast(position.ptr), text_str, block);
    }

    /// ### DEPRECATED: Use `insertText2` instead
    ///
    pub const InsertText2 = insertText2;

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
    /// ` _text: []const []const u8 `
    ///
    /// ` block: bool `
    ///
    pub fn insertText2(self: KTextEditor__Document, allocator: std.mem.Allocator, position: anytype, _text: []const []const u8, block: bool) bool {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        const text_arr = allocator.alloc(qtc.libqt_string, _text.len) catch @panic("KTextEditor__Document.insertText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (_text, 0.._text.len) |str_item, i|
            text_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const text_list = qtc.libqt_list{
            .len = _text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_InsertText2(@ptrCast(self.ptr), @ptrCast(position.ptr), text_list, block);
    }

    /// ### DEPRECATED: Use `replaceText` instead
    ///
    pub const ReplaceText = replaceText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#replaceText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` range: KTextEditor__Range `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` block: bool `
    ///
    pub fn replaceText(self: KTextEditor__Document, range: anytype, _text: []const u8, block: bool) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.KTextEditor__Document_ReplaceText(@ptrCast(self.ptr), @ptrCast(range.ptr), text_str, block);
    }

    /// ### DEPRECATED: Use `replaceText2` instead
    ///
    pub const ReplaceText2 = replaceText2;

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
    /// ` _text: []const []const u8 `
    ///
    /// ` block: bool `
    ///
    pub fn replaceText2(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, _text: []const []const u8, block: bool) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const text_arr = allocator.alloc(qtc.libqt_string, _text.len) catch @panic("KTextEditor__Document.replaceText2: Memory allocation failed");
        defer allocator.free(text_arr);
        for (_text, 0.._text.len) |str_item, i|
            text_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const text_list = qtc.libqt_list{
            .len = _text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_ReplaceText2(@ptrCast(self.ptr), @ptrCast(range.ptr), text_list, block);
    }

    /// ### DEPRECATED: Use `removeText` instead
    ///
    pub const RemoveText = removeText;

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
    pub fn removeText(self: KTextEditor__Document, range: anytype, block: bool) bool {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return qtc.KTextEditor__Document_RemoveText(@ptrCast(self.ptr), @ptrCast(range.ptr), block);
    }

    /// ### DEPRECATED: Use `insertLine` instead
    ///
    pub const InsertLine = insertLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn insertLine(self: KTextEditor__Document, _line: i32, _text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.KTextEditor__Document_InsertLine(@ptrCast(self.ptr), @bitCast(_line), text_str);
    }

    /// ### DEPRECATED: Use `insertLines` instead
    ///
    pub const InsertLines = insertLines;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#insertLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _line: i32 `
    ///
    /// ` _text: []const []const u8 `
    ///
    pub fn insertLines(self: KTextEditor__Document, allocator: std.mem.Allocator, _line: i32, _text: []const []const u8) bool {
        const text_arr = allocator.alloc(qtc.libqt_string, _text.len) catch @panic("KTextEditor__Document.insertLines: Memory allocation failed");
        defer allocator.free(text_arr);
        for (_text, 0.._text.len) |str_item, i|
            text_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const text_list = qtc.libqt_list{
            .len = _text.len,
            .data = text_arr.ptr,
        };
        return qtc.KTextEditor__Document_InsertLines(@ptrCast(self.ptr), @bitCast(_line), text_list);
    }

    /// ### DEPRECATED: Use `removeLine` instead
    ///
    pub const RemoveLine = removeLine;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#removeLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn removeLine(self: KTextEditor__Document, _line: i32) bool {
        return qtc.KTextEditor__Document_RemoveLine(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `searchText` instead
    ///
    pub const SearchText = searchText;

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
    pub fn searchText(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, pattern: []const u8) []KTextEditor__Range {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_SearchText(@ptrCast(self.ptr), @ptrCast(range.ptr), pattern_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Range, _arr.len) catch @panic("KTextEditor__Document.searchText: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `cursorToOffset` instead
    ///
    pub const CursorToOffset = cursorToOffset;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#cursorToOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` c: KTextEditor__Cursor `
    ///
    pub fn cursorToOffset(self: KTextEditor__Document, c: anytype) isize {
        comptime _ = @TypeOf(c)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Document_CursorToOffset(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `offsetToCursor` instead
    ///
    pub const OffsetToCursor = offsetToCursor;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#offsetToCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` offset: isize `
    ///
    pub fn offsetToCursor(self: KTextEditor__Document, offset: isize) KTextEditor__Cursor {
        return .{ .ptr = qtc.KTextEditor__Document_OffsetToCursor(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `editingStarted` instead
    ///
    pub const EditingStarted = editingStarted;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn editingStarted(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_EditingStarted(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onEditingStarted` instead
    ///
    pub const OnEditingStarted = onEditingStarted;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingStarted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onEditingStarted(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_EditingStarted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `editingFinished` instead
    ///
    pub const EditingFinished = editingFinished;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn editingFinished(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_EditingFinished(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onEditingFinished` instead
    ///
    pub const OnEditingFinished = onEditingFinished;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onEditingFinished(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lineWrapped` instead
    ///
    pub const LineWrapped = lineWrapped;

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
    pub fn lineWrapped(self: KTextEditor__Document, document: anytype, position: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Document_LineWrapped(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `onLineWrapped` instead
    ///
    pub const OnLineWrapped = onLineWrapped;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineWrapped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, position: KTextEditor__Cursor) callconv(.c) void `
    ///
    pub fn onLineWrapped(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Cursor) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_LineWrapped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `lineUnwrapped` instead
    ///
    pub const LineUnwrapped = lineUnwrapped;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineUnwrapped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn lineUnwrapped(self: KTextEditor__Document, document: anytype, _line: i32) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_LineUnwrapped(@ptrCast(self.ptr), @ptrCast(document.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `onLineUnwrapped` instead
    ///
    pub const OnLineUnwrapped = onLineUnwrapped;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lineUnwrapped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, line: i32) callconv(.c) void `
    ///
    pub fn onLineUnwrapped(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_LineUnwrapped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textInserted` instead
    ///
    pub const TextInserted = textInserted;

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
    /// ` _text: []const u8 `
    ///
    pub fn textInserted(self: KTextEditor__Document, document: anytype, position: anytype, _text: []const u8) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KTextEditor__Document_TextInserted(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(position.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onTextInserted` instead
    ///
    pub const OnTextInserted = onTextInserted;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textInserted)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, position: KTextEditor__Cursor, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextInserted(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Cursor, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textRemoved` instead
    ///
    pub const TextRemoved = textRemoved;

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
    /// ` _text: []const u8 `
    ///
    pub fn textRemoved(self: KTextEditor__Document, document: anytype, range: anytype, _text: []const u8) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KTextEditor__Document_TextRemoved(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(range.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onTextRemoved` instead
    ///
    pub const OnTextRemoved = onTextRemoved;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, range: KTextEditor__Range, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextRemoved(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Range, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textChanged` instead
    ///
    pub const TextChanged = textChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn textChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_TextChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onTextChanged` instead
    ///
    pub const OnTextChanged = onTextChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onTextChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `defaultStyleAt` instead
    ///
    pub const DefaultStyleAt = defaultStyleAt;

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
    pub fn defaultStyleAt(self: KTextEditor__Document, position: anytype) i32 {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return qtc.KTextEditor__Document_DefaultStyleAt(@ptrCast(self.ptr), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mode(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_Mode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.mode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `highlightingMode` instead
    ///
    pub const HighlightingMode = highlightingMode;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn highlightingMode(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Document_HighlightingMode(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.highlightingMode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `embeddedHighlightingModes` instead
    ///
    pub const EmbeddedHighlightingModes = embeddedHighlightingModes;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#embeddedHighlightingModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn embeddedHighlightingModes(self: KTextEditor__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_EmbeddedHighlightingModes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__Document.embeddedHighlightingModes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Document.embeddedHighlightingModes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `highlightingModeAt` instead
    ///
    pub const HighlightingModeAt = highlightingModeAt;

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
    pub fn highlightingModeAt(self: KTextEditor__Document, allocator: std.mem.Allocator, position: anytype) []const u8 {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        var _str = qtc.KTextEditor__Document_HighlightingModeAt(@ptrCast(self.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.highlightingModeAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `modes` instead
    ///
    pub const Modes = modes;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn modes(self: KTextEditor__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_Modes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__Document.modes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Document.modes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `highlightingModes` instead
    ///
    pub const HighlightingModes = highlightingModes;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn highlightingModes(self: KTextEditor__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_HighlightingModes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__Document.highlightingModes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Document.highlightingModes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setMode` instead
    ///
    pub const SetMode = setMode;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setMode(self: KTextEditor__Document, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KTextEditor__Document_SetMode(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setHighlightingMode` instead
    ///
    pub const SetHighlightingMode = setHighlightingMode;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setHighlightingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setHighlightingMode(self: KTextEditor__Document, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KTextEditor__Document_SetHighlightingMode(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `highlightingModeSection` instead
    ///
    pub const HighlightingModeSection = highlightingModeSection;

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
    pub fn highlightingModeSection(self: KTextEditor__Document, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.KTextEditor__Document_HighlightingModeSection(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.highlightingModeSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `modeSection` instead
    ///
    pub const ModeSection = modeSection;

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
    pub fn modeSection(self: KTextEditor__Document, allocator: std.mem.Allocator, index: i32) []const u8 {
        var _str = qtc.KTextEditor__Document_ModeSection(@ptrCast(self.ptr), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.modeSection: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `modeChanged` instead
    ///
    pub const ModeChanged = modeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn modeChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ModeChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onModeChanged` instead
    ///
    pub const OnModeChanged = onModeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onModeChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `highlightingModeChanged` instead
    ///
    pub const HighlightingModeChanged = highlightingModeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn highlightingModeChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_HighlightingModeChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onHighlightingModeChanged` instead
    ///
    pub const OnHighlightingModeChanged = onHighlightingModeChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#highlightingModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onHighlightingModeChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_HighlightingModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `print` instead
    ///
    pub const Print = print;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn print(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_Print(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `printPreview` instead
    ///
    pub const PrintPreview = printPreview;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#printPreview)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn printPreview(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_PrintPreview(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `postMessage` instead
    ///
    pub const PostMessage = postMessage;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#postMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` message: KTextEditor__Message `
    ///
    pub fn postMessage(self: KTextEditor__Document, message: anytype) bool {
        comptime _ = @TypeOf(message)._is_KTextEditor__Message;
        return qtc.KTextEditor__Document_PostMessage(@ptrCast(self.ptr), @ptrCast(message.ptr));
    }

    /// ### DEPRECATED: Use `readSessionConfig` instead
    ///
    pub const ReadSessionConfig = readSessionConfig;

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
    pub fn readSessionConfig(self: KTextEditor__Document, allocator: std.mem.Allocator, config: anytype, flags: Set_constu8) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        const flags_count = flags.count();
        const flags_arr = allocator.alloc(qtc.libqt_string, flags_count) catch @panic("KTextEditor__Document.readSessionConfig: Memory allocation failed");
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

    /// ### DEPRECATED: Use `writeSessionConfig` instead
    ///
    pub const WriteSessionConfig = writeSessionConfig;

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
    pub fn writeSessionConfig(self: KTextEditor__Document, allocator: std.mem.Allocator, config: anytype, flags: Set_constu8) void {
        comptime _ = @TypeOf(config)._is_KConfigGroup;
        const flags_count = flags.count();
        const flags_arr = allocator.alloc(qtc.libqt_string, flags_count) catch @panic("KTextEditor__Document.writeSessionConfig: Memory allocation failed");
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

    /// ### DEPRECATED: Use `isDataRecoveryAvailable` instead
    ///
    pub const IsDataRecoveryAvailable = isDataRecoveryAvailable;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#isDataRecoveryAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn isDataRecoveryAvailable(self: KTextEditor__Document) bool {
        return qtc.KTextEditor__Document_IsDataRecoveryAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `recoverData` instead
    ///
    pub const RecoverData = recoverData;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#recoverData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn recoverData(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_RecoverData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `discardDataRecovery` instead
    ///
    pub const DiscardDataRecovery = discardDataRecovery;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#discardDataRecovery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn discardDataRecovery(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_DiscardDataRecovery(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `configChanged` instead
    ///
    pub const ConfigChanged = configChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn configChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ConfigChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onConfigChanged` instead
    ///
    pub const OnConfigChanged = onConfigChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onConfigChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `newMovingCursor` instead
    ///
    pub const NewMovingCursor = newMovingCursor;

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
    pub fn newMovingCursor(self: KTextEditor__Document, position: anytype, insertBehavior: i32) KTextEditor__MovingCursor {
        comptime _ = @TypeOf(position)._is_KTextEditor__Cursor;
        return .{ .ptr = qtc.KTextEditor__Document_NewMovingCursor(@ptrCast(self.ptr), @ptrCast(position.ptr), @bitCast(insertBehavior)) };
    }

    /// ### DEPRECATED: Use `newMovingRange` instead
    ///
    pub const NewMovingRange = newMovingRange;

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
    pub fn newMovingRange(self: KTextEditor__Document, range: anytype, insertBehaviors: i32, emptyBehavior: i32) KTextEditor__MovingRange {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        return .{ .ptr = qtc.KTextEditor__Document_NewMovingRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @bitCast(insertBehaviors), @bitCast(emptyBehavior)) };
    }

    /// ### DEPRECATED: Use `revision` instead
    ///
    pub const Revision = revision;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#revision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn revision(self: KTextEditor__Document) i64 {
        return qtc.KTextEditor__Document_Revision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastSavedRevision` instead
    ///
    pub const LastSavedRevision = lastSavedRevision;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lastSavedRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn lastSavedRevision(self: KTextEditor__Document) i64 {
        return qtc.KTextEditor__Document_LastSavedRevision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lockRevision` instead
    ///
    pub const LockRevision = lockRevision;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#lockRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _revision: i64 `
    ///
    pub fn lockRevision(self: KTextEditor__Document, _revision: i64) void {
        qtc.KTextEditor__Document_LockRevision(@ptrCast(self.ptr), @bitCast(_revision));
    }

    /// ### DEPRECATED: Use `unlockRevision` instead
    ///
    pub const UnlockRevision = unlockRevision;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#unlockRevision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _revision: i64 `
    ///
    pub fn unlockRevision(self: KTextEditor__Document, _revision: i64) void {
        qtc.KTextEditor__Document_UnlockRevision(@ptrCast(self.ptr), @bitCast(_revision));
    }

    /// ### DEPRECATED: Use `transformCursor` instead
    ///
    pub const TransformCursor = transformCursor;

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
    pub fn transformCursor(self: KTextEditor__Document, cursor: anytype, insertBehavior: i32, fromRevision: i64, toRevision: i64) void {
        comptime _ = @TypeOf(cursor)._is_KTextEditor__Cursor;
        qtc.KTextEditor__Document_TransformCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr), @bitCast(insertBehavior), @bitCast(fromRevision), @bitCast(toRevision));
    }

    /// ### DEPRECATED: Use `transformCursor2` instead
    ///
    pub const TransformCursor2 = transformCursor2;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#transformCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: *i32 `
    ///
    /// ` column: *i32 `
    ///
    /// ` insertBehavior: movingcursor_enums.InsertBehavior `
    ///
    /// ` fromRevision: i64 `
    ///
    /// ` toRevision: i64 `
    ///
    pub fn transformCursor2(self: KTextEditor__Document, _line: *i32, column: *i32, insertBehavior: i32, fromRevision: i64, toRevision: i64) void {
        qtc.KTextEditor__Document_TransformCursor2(@ptrCast(self.ptr), @ptrCast(_line), @ptrCast(column), @bitCast(insertBehavior), @bitCast(fromRevision), @bitCast(toRevision));
    }

    /// ### DEPRECATED: Use `transformRange` instead
    ///
    pub const TransformRange = transformRange;

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
    pub fn transformRange(self: KTextEditor__Document, range: anytype, insertBehaviors: i32, emptyBehavior: i32, fromRevision: i64, toRevision: i64) void {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        qtc.KTextEditor__Document_TransformRange(@ptrCast(self.ptr), @ptrCast(range.ptr), @bitCast(insertBehaviors), @bitCast(emptyBehavior), @bitCast(fromRevision), @bitCast(toRevision));
    }

    /// ### DEPRECATED: Use `aboutToDeleteMovingInterfaceContent` instead
    ///
    pub const AboutToDeleteMovingInterfaceContent = aboutToDeleteMovingInterfaceContent;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToDeleteMovingInterfaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn aboutToDeleteMovingInterfaceContent(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToDeleteMovingInterfaceContent(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToDeleteMovingInterfaceContent` instead
    ///
    pub const OnAboutToDeleteMovingInterfaceContent = onAboutToDeleteMovingInterfaceContent;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToDeleteMovingInterfaceContent)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onAboutToDeleteMovingInterfaceContent(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToDeleteMovingInterfaceContent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToInvalidateMovingInterfaceContent` instead
    ///
    pub const AboutToInvalidateMovingInterfaceContent = aboutToInvalidateMovingInterfaceContent;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToInvalidateMovingInterfaceContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn aboutToInvalidateMovingInterfaceContent(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_AboutToInvalidateMovingInterfaceContent(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToInvalidateMovingInterfaceContent` instead
    ///
    pub const OnAboutToInvalidateMovingInterfaceContent = onAboutToInvalidateMovingInterfaceContent;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#aboutToInvalidateMovingInterfaceContent)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onAboutToInvalidateMovingInterfaceContent(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_AboutToInvalidateMovingInterfaceContent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `configKeys` instead
    ///
    pub const ConfigKeys = configKeys;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#configKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn configKeys(self: KTextEditor__Document, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_ConfigKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__Document.configKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Document.configKeys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `configValue` instead
    ///
    pub const ConfigValue = configValue;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` key: []const u8 `
    ///
    pub fn configValue(self: KTextEditor__Document, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Document_ConfigValue(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `setConfigValue` instead
    ///
    pub const SetConfigValue = setConfigValue;

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
    pub fn setConfigValue(self: KTextEditor__Document, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KTextEditor__Document_SetConfigValue(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setModifiedOnDisk` instead
    ///
    pub const SetModifiedOnDisk = setModifiedOnDisk;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setModifiedOnDisk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` reason: document_enums.ModifiedOnDiskReason `
    ///
    pub fn setModifiedOnDisk(self: KTextEditor__Document, reason: i32) void {
        qtc.KTextEditor__Document_SetModifiedOnDisk(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### DEPRECATED: Use `setModifiedOnDiskWarning` instead
    ///
    pub const SetModifiedOnDiskWarning = setModifiedOnDiskWarning;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setModifiedOnDiskWarning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` on: bool `
    ///
    pub fn setModifiedOnDiskWarning(self: KTextEditor__Document, on: bool) void {
        qtc.KTextEditor__Document_SetModifiedOnDiskWarning(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `modifiedOnDisk` instead
    ///
    pub const ModifiedOnDisk = modifiedOnDisk;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedOnDisk)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` _isModified: bool `
    ///
    /// ` reason: document_enums.ModifiedOnDiskReason `
    ///
    pub fn modifiedOnDisk(self: KTextEditor__Document, document: anytype, _isModified: bool, reason: i32) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_ModifiedOnDisk(@ptrCast(self.ptr), @ptrCast(document.ptr), _isModified, @bitCast(reason));
    }

    /// ### DEPRECATED: Use `onModifiedOnDisk` instead
    ///
    pub const OnModifiedOnDisk = onModifiedOnDisk;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#modifiedOnDisk)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, isModified: bool, reason: document_enums.ModifiedOnDiskReason) callconv(.c) void `
    ///
    pub fn onModifiedOnDisk(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, bool, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_ModifiedOnDisk(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mark` instead
    ///
    pub const Mark = mark;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#mark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn mark(self: KTextEditor__Document, _line: i32) u32 {
        return qtc.KTextEditor__Document_Mark(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `setMark` instead
    ///
    pub const SetMark = setMark;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    /// ` markType: u32 `
    ///
    pub fn setMark(self: KTextEditor__Document, _line: i32, markType: u32) void {
        qtc.KTextEditor__Document_SetMark(@ptrCast(self.ptr), @bitCast(_line), @bitCast(markType));
    }

    /// ### DEPRECATED: Use `clearMark` instead
    ///
    pub const ClearMark = clearMark;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#clearMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    pub fn clearMark(self: KTextEditor__Document, _line: i32) void {
        qtc.KTextEditor__Document_ClearMark(@ptrCast(self.ptr), @bitCast(_line));
    }

    /// ### DEPRECATED: Use `addMark` instead
    ///
    pub const AddMark = addMark;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#addMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    /// ` markType: u32 `
    ///
    pub fn addMark(self: KTextEditor__Document, _line: i32, markType: u32) void {
        qtc.KTextEditor__Document_AddMark(@ptrCast(self.ptr), @bitCast(_line), @bitCast(markType));
    }

    /// ### DEPRECATED: Use `removeMark` instead
    ///
    pub const RemoveMark = removeMark;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#removeMark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _line: i32 `
    ///
    /// ` markType: u32 `
    ///
    pub fn removeMark(self: KTextEditor__Document, _line: i32, markType: u32) void {
        qtc.KTextEditor__Document_RemoveMark(@ptrCast(self.ptr), @bitCast(_line), @bitCast(markType));
    }

    /// ### DEPRECATED: Use `marks` instead
    ///
    pub const Marks = marks;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#marks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn marks(self: KTextEditor__Document, allocator: std.mem.Allocator) Map_i32_KTextEditorMark {
        const _map: qtc.libqt_map = qtc.KTextEditor__Document_Marks(@ptrCast(self.ptr));
        var _ret: Map_i32_KTextEditorMark = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KTextEditor__Document.marks: Total capacity allocation failed");
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
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `clearMarks` instead
    ///
    pub const ClearMarks = clearMarks;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#clearMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn clearMarks(self: KTextEditor__Document) void {
        qtc.KTextEditor__Document_ClearMarks(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reservedMarkersCount` instead
    ///
    pub const ReservedMarkersCount = reservedMarkersCount;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#reservedMarkersCount)
    ///
    pub fn reservedMarkersCount() i32 {
        return qtc.KTextEditor__Document_ReservedMarkersCount();
    }

    /// ### DEPRECATED: Use `setMarkDescription` instead
    ///
    pub const SetMarkDescription = setMarkDescription;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setMarkDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _mark: document_enums.MarkTypes `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setMarkDescription(self: KTextEditor__Document, _mark: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KTextEditor__Document_SetMarkDescription(@ptrCast(self.ptr), @bitCast(_mark), text_str);
    }

    /// ### DEPRECATED: Use `markDescription` instead
    ///
    pub const MarkDescription = markDescription;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _mark: document_enums.MarkTypes `
    ///
    pub fn markDescription(self: KTextEditor__Document, allocator: std.mem.Allocator, _mark: i32) []const u8 {
        var _str = qtc.KTextEditor__Document_MarkDescription(@ptrCast(self.ptr), @bitCast(_mark));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.markDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setEditableMarks` instead
    ///
    pub const SetEditableMarks = setEditableMarks;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setEditableMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` markMask: u32 `
    ///
    pub fn setEditableMarks(self: KTextEditor__Document, markMask: u32) void {
        qtc.KTextEditor__Document_SetEditableMarks(@ptrCast(self.ptr), @bitCast(markMask));
    }

    /// ### DEPRECATED: Use `editableMarks` instead
    ///
    pub const EditableMarks = editableMarks;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#editableMarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn editableMarks(self: KTextEditor__Document) u32 {
        return qtc.KTextEditor__Document_EditableMarks(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMarkIcon` instead
    ///
    pub const SetMarkIcon = setMarkIcon;

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
    pub fn setMarkIcon(self: KTextEditor__Document, markType: i32, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KTextEditor__Document_SetMarkIcon(@ptrCast(self.ptr), @bitCast(markType), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `markIcon` instead
    ///
    pub const MarkIcon = markIcon;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` markType: document_enums.MarkTypes `
    ///
    pub fn markIcon(self: KTextEditor__Document, markType: i32) QIcon {
        return .{ .ptr = qtc.KTextEditor__Document_MarkIcon(@ptrCast(self.ptr), @bitCast(markType)) };
    }

    /// ### DEPRECATED: Use `marksChanged` instead
    ///
    pub const MarksChanged = marksChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#marksChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn marksChanged(self: KTextEditor__Document, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Document_MarksChanged(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onMarksChanged` instead
    ///
    pub const OnMarksChanged = onMarksChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#marksChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onMarksChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarksChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markChanged` instead
    ///
    pub const MarkChanged = markChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` _mark: KTextEditor__Mark `
    ///
    /// ` _action: document_enums.MarkChangeAction `
    ///
    pub fn markChanged(self: KTextEditor__Document, document: anytype, _mark: anytype, _action: i32) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(_mark)._is_KTextEditor__Mark;
        qtc.KTextEditor__Document_MarkChanged(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(_mark.ptr), @bitCast(_action));
    }

    /// ### DEPRECATED: Use `onMarkChanged` instead
    ///
    pub const OnMarkChanged = onMarkChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, mark: KTextEditor__Mark, action: document_enums.MarkChangeAction) callconv(.c) void `
    ///
    pub fn onMarkChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Mark, i32) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markToolTipRequested` instead
    ///
    pub const MarkToolTipRequested = markToolTipRequested;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markToolTipRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` _mark: KTextEditor__Mark `
    ///
    /// ` position: QPoint `
    ///
    /// ` handled: *bool `
    ///
    pub fn markToolTipRequested(self: KTextEditor__Document, document: anytype, _mark: anytype, position: anytype, handled: *bool) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(_mark)._is_KTextEditor__Mark;
        comptime _ = @TypeOf(position)._is_QPoint;
        qtc.KTextEditor__Document_MarkToolTipRequested(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(_mark.ptr), @ptrCast(position.ptr), @ptrCast(handled));
    }

    /// ### DEPRECATED: Use `onMarkToolTipRequested` instead
    ///
    pub const OnMarkToolTipRequested = onMarkToolTipRequested;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markToolTipRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, mark: KTextEditor__Mark, position: QPoint, handled: *bool) callconv(.c) void `
    ///
    pub fn onMarkToolTipRequested(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Mark, QPoint, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkToolTipRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markContextMenuRequested` instead
    ///
    pub const MarkContextMenuRequested = markContextMenuRequested;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` _mark: KTextEditor__Mark `
    ///
    /// ` pos: QPoint `
    ///
    /// ` handled: *bool `
    ///
    pub fn markContextMenuRequested(self: KTextEditor__Document, document: anytype, _mark: anytype, pos: anytype, handled: *bool) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(_mark)._is_KTextEditor__Mark;
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.KTextEditor__Document_MarkContextMenuRequested(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(_mark.ptr), @ptrCast(pos.ptr), @ptrCast(handled));
    }

    /// ### DEPRECATED: Use `onMarkContextMenuRequested` instead
    ///
    pub const OnMarkContextMenuRequested = onMarkContextMenuRequested;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, mark: KTextEditor__Mark, pos: QPoint, handled: *bool) callconv(.c) void `
    ///
    pub fn onMarkContextMenuRequested(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Mark, QPoint, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markClicked` instead
    ///
    pub const MarkClicked = markClicked;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` document: KTextEditor__Document `
    ///
    /// ` _mark: KTextEditor__Mark `
    ///
    /// ` handled: *bool `
    ///
    pub fn markClicked(self: KTextEditor__Document, document: anytype, _mark: anytype, handled: *bool) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        comptime _ = @TypeOf(_mark)._is_KTextEditor__Mark;
        qtc.KTextEditor__Document_MarkClicked(@ptrCast(self.ptr), @ptrCast(document.ptr), @ptrCast(_mark.ptr), @ptrCast(handled));
    }

    /// ### DEPRECATED: Use `onMarkClicked` instead
    ///
    pub const OnMarkClicked = onMarkClicked;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#markClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, document: KTextEditor__Document, mark: KTextEditor__Mark, handled: *bool) callconv(.c) void `
    ///
    pub fn onMarkClicked(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KTextEditor__Document, KTextEditor__Mark, *bool) callconv(.c) void) void {
        qtc.KTextEditor__Document_Connect_MarkClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setAnnotationModel` instead
    ///
    pub const SetAnnotationModel = setAnnotationModel;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#setAnnotationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` model: KTextEditor__AnnotationModel `
    ///
    pub fn setAnnotationModel(self: KTextEditor__Document, model: anytype) void {
        comptime _ = @TypeOf(model)._is_KTextEditor__AnnotationModel;
        qtc.KTextEditor__Document_SetAnnotationModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### DEPRECATED: Use `annotationModel` instead
    ///
    pub const AnnotationModel = annotationModel;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document.html#annotationModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn annotationModel(self: KTextEditor__Document) KTextEditor__AnnotationModel {
        return .{ .ptr = qtc.KTextEditor__Document_AnnotationModel(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `searchText3` instead
    ///
    pub const SearchText3 = searchText3;

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
    pub fn searchText3(self: KTextEditor__Document, allocator: std.mem.Allocator, range: anytype, pattern: []const u8, options: i32) []KTextEditor__Range {
        comptime _ = @TypeOf(range)._is_KTextEditor__Range;
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KTextEditor__Document_SearchText3(@ptrCast(self.ptr), @ptrCast(range.ptr), pattern_str, @bitCast(options));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Range, _arr.len) catch @panic("KTextEditor__Document.searchText3: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__Range = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isReadWrite` instead
    ///
    pub const IsReadWrite = isReadWrite;

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isReadWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn isReadWrite(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_IsReadWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadWrite` instead
    ///
    pub const SetReadWrite = setReadWrite;

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
    pub fn setReadWrite(self: KTextEditor__Document, readwrite: bool) void {
        qtc.KParts__ReadWritePart_SetReadWrite(@ptrCast(self.ptr), readwrite);
    }

    /// ### DEPRECATED: Use `isModified` instead
    ///
    pub const IsModified = isModified;

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn isModified(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_IsModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryClose` instead
    ///
    pub const QueryClose = queryClose;

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn queryClose(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_QueryClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closeUrl` instead
    ///
    pub const CloseUrl = closeUrl;

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn closeUrl(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_CloseUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closeUrl2` instead
    ///
    pub const CloseUrl2 = closeUrl2;

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
    pub fn closeUrl2(self: KTextEditor__Document, promptToSave: bool) bool {
        return qtc.KParts__ReadWritePart_CloseUrl2(@ptrCast(self.ptr), promptToSave);
    }

    /// ### DEPRECATED: Use `saveAs` instead
    ///
    pub const SaveAs = saveAs;

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _url: QUrl `
    ///
    pub fn saveAs(self: KTextEditor__Document, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadWritePart_SaveAs(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `setModified` instead
    ///
    pub const SetModified = setModified;

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
    pub fn setModified(self: KTextEditor__Document, modified: bool) void {
        qtc.KParts__ReadWritePart_SetModified(@ptrCast(self.ptr), modified);
    }

    /// ### DEPRECATED: Use `sigQueryClose` instead
    ///
    pub const SigQueryClose = sigQueryClose;

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
    pub fn sigQueryClose(self: KTextEditor__Document, handled: *bool, abortClosing: *bool) void {
        qtc.KParts__ReadWritePart_SigQueryClose(@ptrCast(self.ptr), @ptrCast(handled), @ptrCast(abortClosing));
    }

    /// ### DEPRECATED: Use `onSigQueryClose` instead
    ///
    pub const OnSigQueryClose = onSigQueryClose;

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
    pub fn onSigQueryClose(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, *bool, *bool) callconv(.c) void) void {
        qtc.KParts__ReadWritePart_Connect_SigQueryClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setModified2` instead
    ///
    pub const SetModified2 = setModified2;

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn setModified2(self: KTextEditor__Document) void {
        qtc.KParts__ReadWritePart_SetModified2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn save(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitSaveComplete` instead
    ///
    pub const WaitSaveComplete = waitSaveComplete;

    /// Inherited from KParts::ReadWritePart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readwritepart.html#waitSaveComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn waitSaveComplete(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadWritePart_WaitSaveComplete(@ptrCast(self.ptr));
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` show: bool `
    ///
    pub fn setProgressInfoEnabled(self: KTextEditor__Document, show: bool) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn isProgressInfoEnabled(self: KTextEditor__Document) bool {
        return qtc.KParts__ReadOnlyPart_IsProgressInfoEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `openUrl` instead
    ///
    pub const OpenUrl = openUrl;

    /// Inherited from KParts::ReadOnlyPart
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _url: QUrl `
    ///
    pub fn openUrl(self: KTextEditor__Document, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.KParts__ReadOnlyPart_OpenUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn url(self: KTextEditor__Document) QUrl {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn navigationExtension(self: KTextEditor__Document) KParts__NavigationExtension {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _arguments: KParts__OpenUrlArguments `
    ///
    pub fn setArguments(self: KTextEditor__Document, _arguments: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn arguments(self: KTextEditor__Document) KParts__OpenUrlArguments {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _mimeType: []const u8 `
    ///
    /// ` _url: QUrl `
    ///
    pub fn openStream(self: KTextEditor__Document, _mimeType: []const u8, _url: anytype) bool {
        const mimeType_str = qtc.libqt_string{
            .len = _mimeType.len,
            .data = _mimeType.ptr,
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` data: []u8 `
    ///
    pub fn writeStream(self: KTextEditor__Document, data: []u8) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn closeStream(self: KTextEditor__Document) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn started(self: KTextEditor__Document, job: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, job: KIO__Job) callconv(.c) void `
    ///
    pub fn onStarted(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, KIO__Job) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn completed(self: KTextEditor__Document) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onCompleted(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn completedWithPendingAction(self: KTextEditor__Document) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onCompletedWithPendingAction(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` errMsg: []const u8 `
    ///
    pub fn canceled(self: KTextEditor__Document, errMsg: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, errMsg: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCanceled(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _url: QUrl `
    ///
    pub fn urlChanged(self: KTextEditor__Document, _url: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, url: QUrl) callconv(.c) void `
    ///
    pub fn onUrlChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, QUrl) callconv(.c) void) void {
        qtc.KParts__ReadOnlyPart_Connect_UrlChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn widget(self: KTextEditor__Document) QWidget {
        return .{ .ptr = qtc.KParts__Part_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setManager` instead
    ///
    pub const SetManager = setManager;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _manager: KParts__PartManager `
    ///
    pub fn setManager(self: KTextEditor__Document, _manager: anytype) void {
        comptime _ = @TypeOf(_manager)._is_KParts__PartManager;
        qtc.KParts__Part_SetManager(@ptrCast(self.ptr), @ptrCast(_manager.ptr));
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn manager(self: KTextEditor__Document) KParts__PartManager {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` autoDeleteWidget: bool `
    ///
    pub fn setAutoDeleteWidget(self: KTextEditor__Document, autoDeleteWidget: bool) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` autoDeletePart: bool `
    ///
    pub fn setAutoDeletePart(self: KTextEditor__Document, autoDeletePart: bool) void {
        qtc.KParts__Part_SetAutoDeletePart(@ptrCast(self.ptr), autoDeletePart);
    }

    /// ### DEPRECATED: Use `hitTest` instead
    ///
    pub const HitTest = hitTest;

    /// Inherited from KParts::Part
    ///
    /// ### [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` globalPos: QPoint `
    ///
    pub fn hitTest(self: KTextEditor__Document, _widget: anytype, globalPos: anytype) KParts__Part {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        comptime _ = @TypeOf(globalPos)._is_QPoint;
        return .{ .ptr = qtc.KParts__Part_HitTest(@ptrCast(self.ptr), @ptrCast(_widget.ptr), @ptrCast(globalPos.ptr)) };
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn metaData(self: KTextEditor__Document) KPluginMetaData {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn setWindowCaption(self: KTextEditor__Document, caption: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, caption: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetWindowCaption(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setStatusBarText(self: KTextEditor__Document, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetStatusBarText(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__Part_Connect_SetStatusBarText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KTextEditor__Document, _event: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTextEditor__Document, watched: anytype, _event: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.objectName: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KTextEditor__Document, name: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn isWidgetType(self: KTextEditor__Document) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn isWindowType(self: KTextEditor__Document) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn isQuickItemType(self: KTextEditor__Document) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn signalsBlocked(self: KTextEditor__Document) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KTextEditor__Document, b: bool) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn thread(self: KTextEditor__Document) QThread {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTextEditor__Document, _thread: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KTextEditor__Document, interval: i32) i32 {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KTextEditor__Document, time: i64) i32 {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KTextEditor__Document, id: i32) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KTextEditor__Document, id: i32) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KTextEditor__Document, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTextEditor__Document.children: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KTextEditor__Document, _parent: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KTextEditor__Document, filterObj: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KTextEditor__Document, obj: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTextEditor__Document, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn disconnect3(self: KTextEditor__Document) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KTextEditor__Document, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn dumpObjectTree(self: KTextEditor__Document) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn dumpObjectInfo(self: KTextEditor__Document) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KTextEditor__Document, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KTextEditor__Document, name: [:0]const u8) QVariant {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KTextEditor__Document, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTextEditor__Document.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Document.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn bindingStorage(self: KTextEditor__Document) QBindingStorage {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn bindingStorage2(self: KTextEditor__Document) QBindingStorage {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn destroyed(self: KTextEditor__Document) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn parent(self: KTextEditor__Document) QObject {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KTextEditor__Document, classname: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn deleteLater(self: KTextEditor__Document) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KTextEditor__Document, interval: i32, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KTextEditor__Document, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTextEditor__Document, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KTextEditor__Document, signal: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KTextEditor__Document, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KTextEditor__Document, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KTextEditor__Document, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KTextEditor__Document, param1: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, QObject) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` object: QObject `
    ///
    pub fn setPartObject(self: KTextEditor__Document, object: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn partObject(self: KTextEditor__Document) QObject {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn action(self: KTextEditor__Document, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

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
    pub fn action2(self: KTextEditor__Document, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIClient_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `actionCollection` instead
    ///
    pub const ActionCollection = actionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn actionCollection(self: KTextEditor__Document) KActionCollection {
        return .{ .ptr = qtc.KXMLGUIClient_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

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
    pub fn componentName(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn domDocument(self: KTextEditor__Document) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `xmlFile` instead
    ///
    pub const XmlFile = xmlFile;

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
    pub fn xmlFile(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localXMLFile` instead
    ///
    pub const LocalXMLFile = localXMLFile;

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
    pub fn localXMLFile(self: KTextEditor__Document, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn setXMLGUIBuildDocument(self: KTextEditor__Document, doc: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn xmlguiBuildDocument(self: KTextEditor__Document) QDomDocument {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` _factory: KXMLGUIFactory `
    ///
    pub fn setFactory(self: KTextEditor__Document, _factory: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn factory(self: KTextEditor__Document) KXMLGUIFactory {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn parentClient(self: KTextEditor__Document) KXMLGUIClient {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn insertChildClient(self: KTextEditor__Document, child: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn removeChildClient(self: KTextEditor__Document, child: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childClients(self: KTextEditor__Document, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("KTextEditor__Document.childClients: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn setClientBuilder(self: KTextEditor__Document, builder: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn clientBuilder(self: KTextEditor__Document) KXMLGUIBuilder {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn reloadXML(self: KTextEditor__Document) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn plugActionList(self: KTextEditor__Document, name: []const u8, actionList: []QAction) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` name: []const u8 `
    ///
    pub fn unplugActionList(self: KTextEditor__Document, name: []const u8) void {
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
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("KTextEditor__Document.findMostRecentXMLFile: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.findMostRecentXMLFile: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionEnabled(self: KTextEditor__Document, state: []const u8, _action: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionDisabled(self: KTextEditor__Document, state: []const u8, _action: []const u8) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` state: []const u8 `
    ///
    pub fn getActionsToChangeForState(self: KTextEditor__Document, state: []const u8) KXMLGUIClient__StateChange {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: QWidget `
    ///
    pub fn beginXMLPlug(self: KTextEditor__Document, param1: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    pub fn endXMLPlug(self: KTextEditor__Document) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` param1: QWidget `
    ///
    pub fn prepareXMLUnplug(self: KTextEditor__Document, param1: anytype) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn replaceXMLFile(self: KTextEditor__Document, xmlfile: []const u8, localxmlfile: []const u8) void {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Document.findVersionNumber: Memory allocation failed");
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn replaceXMLFile3(self: KTextEditor__Document, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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
    /// ` self: KTextEditor__Document `
    ///
    /// ` callback: *const fn (self: KTextEditor__Document, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KTextEditor__Document, callback: *const fn (KTextEditor__Document, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Document `
    ///
    pub fn delete(self: KTextEditor__Document) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::Document::EditingTransaction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn new(document: anytype) KTextEditor__Document__EditingTransaction {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        return .{ .ptr = qtc.KTextEditor__Document__EditingTransaction_new(@ptrCast(document.ptr)) };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document__EditingTransaction `
    ///
    pub fn start(self: KTextEditor__Document__EditingTransaction) void {
        qtc.KTextEditor__Document__EditingTransaction_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finish` instead
    ///
    pub const Finish = finish;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-document-editingtransaction.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Document__EditingTransaction `
    ///
    pub fn finish(self: KTextEditor__Document__EditingTransaction) void {
        qtc.KTextEditor__Document__EditingTransaction_Finish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Document__EditingTransaction `
    ///
    pub fn delete(self: KTextEditor__Document__EditingTransaction) void {
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
