const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Q3DScene = @import("libqt6").Q3DScene;
const Q3DTheme = @import("libqt6").Q3DTheme;
const QAbstract3DAxis = @import("libqt6").QAbstract3DAxis;
const QAbstract3DInputHandler = @import("libqt6").QAbstract3DInputHandler;
const QAbstract3DSeries = @import("libqt6").QAbstract3DSeries;
const QAccessibleInterface = @import("libqt6").QAccessibleInterface;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QCursor = @import("libqt6").QCursor;
const QCustom3DItem = @import("libqt6").QCustom3DItem;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QImage = @import("libqt6").QImage;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QScreen = @import("libqt6").QScreen;
const QSize = @import("libqt6").QSize;
const QSurface = @import("libqt6").QSurface;
const QSurfaceFormat = @import("libqt6").QSurfaceFormat;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QVector3D = @import("libqt6").QVector3D;
const QWindow = @import("libqt6").QWindow;
const qabstract3dgraph_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsurface_enums = @import("../libqsurface.zig").enums;
const qwindow_enums = @import("../libqwindow.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html)
pub const QAbstract3DGraph = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstract3DGraph,

    pub const _is_QAbstract3DGraph = {};
    pub const _is_QWindow = {};
    pub const _is_QObject = {};
    pub const _is_QSurface = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn metaObject(self: QAbstract3DGraph) QMetaObject {
        return .{ .ptr = qtc.QAbstract3DGraph_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstract3DGraph, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstract3DGraph_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QAbstract3DGraph, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstract3DGraph_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QAbstract3DGraph_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DGraph.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addInputHandler` instead
    ///
    pub const AddInputHandler = addInputHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#addInputHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` inputHandler: QAbstract3DInputHandler `
    ///
    pub fn addInputHandler(self: QAbstract3DGraph, inputHandler: anytype) void {
        comptime _ = @TypeOf(inputHandler)._is_QAbstract3DInputHandler;
        qtc.QAbstract3DGraph_AddInputHandler(@ptrCast(self.ptr), @ptrCast(inputHandler.ptr));
    }

    /// ### DEPRECATED: Use `releaseInputHandler` instead
    ///
    pub const ReleaseInputHandler = releaseInputHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#releaseInputHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` inputHandler: QAbstract3DInputHandler `
    ///
    pub fn releaseInputHandler(self: QAbstract3DGraph, inputHandler: anytype) void {
        comptime _ = @TypeOf(inputHandler)._is_QAbstract3DInputHandler;
        qtc.QAbstract3DGraph_ReleaseInputHandler(@ptrCast(self.ptr), @ptrCast(inputHandler.ptr));
    }

    /// ### DEPRECATED: Use `setActiveInputHandler` instead
    ///
    pub const SetActiveInputHandler = setActiveInputHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setActiveInputHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` inputHandler: QAbstract3DInputHandler `
    ///
    pub fn setActiveInputHandler(self: QAbstract3DGraph, inputHandler: anytype) void {
        comptime _ = @TypeOf(inputHandler)._is_QAbstract3DInputHandler;
        qtc.QAbstract3DGraph_SetActiveInputHandler(@ptrCast(self.ptr), @ptrCast(inputHandler.ptr));
    }

    /// ### DEPRECATED: Use `activeInputHandler` instead
    ///
    pub const ActiveInputHandler = activeInputHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeInputHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn activeInputHandler(self: QAbstract3DGraph) QAbstract3DInputHandler {
        return .{ .ptr = qtc.QAbstract3DGraph_ActiveInputHandler(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inputHandlers` instead
    ///
    pub const InputHandlers = inputHandlers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#inputHandlers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn inputHandlers(self: QAbstract3DGraph, allocator: std.mem.Allocator) []QAbstract3DInputHandler {
        const _arr: qtc.libqt_list = qtc.QAbstract3DGraph_InputHandlers(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstract3DInputHandler, _arr.len) catch @panic("QAbstract3DGraph.inputHandlers: Memory allocation failed");
        const _data_val: [*]QtC.QAbstract3DInputHandler = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addTheme` instead
    ///
    pub const AddTheme = addTheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#addTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` theme: Q3DTheme `
    ///
    pub fn addTheme(self: QAbstract3DGraph, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_Q3DTheme;
        qtc.QAbstract3DGraph_AddTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `releaseTheme` instead
    ///
    pub const ReleaseTheme = releaseTheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#releaseTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` theme: Q3DTheme `
    ///
    pub fn releaseTheme(self: QAbstract3DGraph, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_Q3DTheme;
        qtc.QAbstract3DGraph_ReleaseTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `setActiveTheme` instead
    ///
    pub const SetActiveTheme = setActiveTheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setActiveTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` theme: Q3DTheme `
    ///
    pub fn setActiveTheme(self: QAbstract3DGraph, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_Q3DTheme;
        qtc.QAbstract3DGraph_SetActiveTheme(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `activeTheme` instead
    ///
    pub const ActiveTheme = activeTheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeTheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn activeTheme(self: QAbstract3DGraph) Q3DTheme {
        return .{ .ptr = qtc.QAbstract3DGraph_ActiveTheme(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `themes` instead
    ///
    pub const Themes = themes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#themes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn themes(self: QAbstract3DGraph, allocator: std.mem.Allocator) []Q3DTheme {
        const _arr: qtc.libqt_list = qtc.QAbstract3DGraph_Themes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Q3DTheme, _arr.len) catch @panic("QAbstract3DGraph.themes: Memory allocation failed");
        const _data_val: [*]QtC.Q3DTheme = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setSelectionMode` instead
    ///
    pub const SetSelectionMode = setSelectionMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` mode: flag of qabstract3dgraph_enums.SelectionFlag `
    ///
    pub fn setSelectionMode(self: QAbstract3DGraph, mode: i32) void {
        qtc.QAbstract3DGraph_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `selectionMode` instead
    ///
    pub const SelectionMode = selectionMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstract3dgraph_enums.SelectionFlag `
    ///
    pub fn selectionMode(self: QAbstract3DGraph) i32 {
        return qtc.QAbstract3DGraph_SelectionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShadowQuality` instead
    ///
    pub const SetShadowQuality = setShadowQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setShadowQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` quality: qabstract3dgraph_enums.ShadowQuality `
    ///
    pub fn setShadowQuality(self: QAbstract3DGraph, quality: i32) void {
        qtc.QAbstract3DGraph_SetShadowQuality(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### DEPRECATED: Use `shadowQuality` instead
    ///
    pub const ShadowQuality = shadowQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#shadowQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dgraph_enums.ShadowQuality `
    ///
    pub fn shadowQuality(self: QAbstract3DGraph) i32 {
        return qtc.QAbstract3DGraph_ShadowQuality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `shadowsSupported` instead
    ///
    pub const ShadowsSupported = shadowsSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#shadowsSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn shadowsSupported(self: QAbstract3DGraph) bool {
        return qtc.QAbstract3DGraph_ShadowsSupported(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scene` instead
    ///
    pub const Scene = scene;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn scene(self: QAbstract3DGraph) Q3DScene {
        return .{ .ptr = qtc.QAbstract3DGraph_Scene(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearSelection` instead
    ///
    pub const ClearSelection = clearSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn clearSelection(self: QAbstract3DGraph) void {
        qtc.QAbstract3DGraph_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasSeries` instead
    ///
    pub const HasSeries = hasSeries;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#hasSeries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` series: QAbstract3DSeries `
    ///
    pub fn hasSeries(self: QAbstract3DGraph, series: anytype) bool {
        comptime _ = @TypeOf(series)._is_QAbstract3DSeries;
        return qtc.QAbstract3DGraph_HasSeries(@ptrCast(self.ptr), @ptrCast(series.ptr));
    }

    /// ### DEPRECATED: Use `addCustomItem` instead
    ///
    pub const AddCustomItem = addCustomItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#addCustomItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` item: QCustom3DItem `
    ///
    pub fn addCustomItem(self: QAbstract3DGraph, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QCustom3DItem;
        return qtc.QAbstract3DGraph_AddCustomItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `removeCustomItems` instead
    ///
    pub const RemoveCustomItems = removeCustomItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#removeCustomItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn removeCustomItems(self: QAbstract3DGraph) void {
        qtc.QAbstract3DGraph_RemoveCustomItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeCustomItem` instead
    ///
    pub const RemoveCustomItem = removeCustomItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#removeCustomItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` item: QCustom3DItem `
    ///
    pub fn removeCustomItem(self: QAbstract3DGraph, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QCustom3DItem;
        qtc.QAbstract3DGraph_RemoveCustomItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `removeCustomItemAt` instead
    ///
    pub const RemoveCustomItemAt = removeCustomItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#removeCustomItemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _position: QVector3D `
    ///
    pub fn removeCustomItemAt(self: QAbstract3DGraph, _position: anytype) void {
        comptime _ = @TypeOf(_position)._is_QVector3D;
        qtc.QAbstract3DGraph_RemoveCustomItemAt(@ptrCast(self.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `releaseCustomItem` instead
    ///
    pub const ReleaseCustomItem = releaseCustomItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#releaseCustomItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` item: QCustom3DItem `
    ///
    pub fn releaseCustomItem(self: QAbstract3DGraph, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QCustom3DItem;
        qtc.QAbstract3DGraph_ReleaseCustomItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `customItems` instead
    ///
    pub const CustomItems = customItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#customItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customItems(self: QAbstract3DGraph, allocator: std.mem.Allocator) []QCustom3DItem {
        const _arr: qtc.libqt_list = qtc.QAbstract3DGraph_CustomItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QCustom3DItem, _arr.len) catch @panic("QAbstract3DGraph.customItems: Memory allocation failed");
        const _data_val: [*]QtC.QCustom3DItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedLabelIndex` instead
    ///
    pub const SelectedLabelIndex = selectedLabelIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedLabelIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn selectedLabelIndex(self: QAbstract3DGraph) i32 {
        return qtc.QAbstract3DGraph_SelectedLabelIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedAxis` instead
    ///
    pub const SelectedAxis = selectedAxis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedAxis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn selectedAxis(self: QAbstract3DGraph) QAbstract3DAxis {
        return .{ .ptr = qtc.QAbstract3DGraph_SelectedAxis(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectedCustomItemIndex` instead
    ///
    pub const SelectedCustomItemIndex = selectedCustomItemIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedCustomItemIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn selectedCustomItemIndex(self: QAbstract3DGraph) i32 {
        return qtc.QAbstract3DGraph_SelectedCustomItemIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedCustomItem` instead
    ///
    pub const SelectedCustomItem = selectedCustomItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedCustomItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn selectedCustomItem(self: QAbstract3DGraph) QCustom3DItem {
        return .{ .ptr = qtc.QAbstract3DGraph_SelectedCustomItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `renderToImage` instead
    ///
    pub const RenderToImage = renderToImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#renderToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn renderToImage(self: QAbstract3DGraph) QImage {
        return .{ .ptr = qtc.QAbstract3DGraph_RenderToImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMeasureFps` instead
    ///
    pub const SetMeasureFps = setMeasureFps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setMeasureFps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` enable: bool `
    ///
    pub fn setMeasureFps(self: QAbstract3DGraph, enable: bool) void {
        qtc.QAbstract3DGraph_SetMeasureFps(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `measureFps` instead
    ///
    pub const MeasureFps = measureFps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#measureFps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn measureFps(self: QAbstract3DGraph) bool {
        return qtc.QAbstract3DGraph_MeasureFps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentFps` instead
    ///
    pub const CurrentFps = currentFps;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#currentFps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn currentFps(self: QAbstract3DGraph) f64 {
        return qtc.QAbstract3DGraph_CurrentFps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrthoProjection` instead
    ///
    pub const SetOrthoProjection = setOrthoProjection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setOrthoProjection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` enable: bool `
    ///
    pub fn setOrthoProjection(self: QAbstract3DGraph, enable: bool) void {
        qtc.QAbstract3DGraph_SetOrthoProjection(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isOrthoProjection` instead
    ///
    pub const IsOrthoProjection = isOrthoProjection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#isOrthoProjection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isOrthoProjection(self: QAbstract3DGraph) bool {
        return qtc.QAbstract3DGraph_IsOrthoProjection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedElement` instead
    ///
    pub const SelectedElement = selectedElement;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qabstract3dgraph_enums.ElementType `
    ///
    pub fn selectedElement(self: QAbstract3DGraph) i32 {
        return qtc.QAbstract3DGraph_SelectedElement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAspectRatio` instead
    ///
    pub const SetAspectRatio = setAspectRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setAspectRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` ratio: f64 `
    ///
    pub fn setAspectRatio(self: QAbstract3DGraph, ratio: f64) void {
        qtc.QAbstract3DGraph_SetAspectRatio(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `aspectRatio` instead
    ///
    pub const AspectRatio = aspectRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#aspectRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn aspectRatio(self: QAbstract3DGraph) f64 {
        return qtc.QAbstract3DGraph_AspectRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOptimizationHints` instead
    ///
    pub const SetOptimizationHints = setOptimizationHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setOptimizationHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` hints: flag of qabstract3dgraph_enums.OptimizationHint `
    ///
    pub fn setOptimizationHints(self: QAbstract3DGraph, hints: i32) void {
        qtc.QAbstract3DGraph_SetOptimizationHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `optimizationHints` instead
    ///
    pub const OptimizationHints = optimizationHints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#optimizationHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstract3dgraph_enums.OptimizationHint `
    ///
    pub fn optimizationHints(self: QAbstract3DGraph) i32 {
        return qtc.QAbstract3DGraph_OptimizationHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPolar` instead
    ///
    pub const SetPolar = setPolar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setPolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` enable: bool `
    ///
    pub fn setPolar(self: QAbstract3DGraph, enable: bool) void {
        qtc.QAbstract3DGraph_SetPolar(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isPolar` instead
    ///
    pub const IsPolar = isPolar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#isPolar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isPolar(self: QAbstract3DGraph) bool {
        return qtc.QAbstract3DGraph_IsPolar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRadialLabelOffset` instead
    ///
    pub const SetRadialLabelOffset = setRadialLabelOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setRadialLabelOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` offset: f32 `
    ///
    pub fn setRadialLabelOffset(self: QAbstract3DGraph, offset: f32) void {
        qtc.QAbstract3DGraph_SetRadialLabelOffset(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `radialLabelOffset` instead
    ///
    pub const RadialLabelOffset = radialLabelOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#radialLabelOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn radialLabelOffset(self: QAbstract3DGraph) f32 {
        return qtc.QAbstract3DGraph_RadialLabelOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalAspectRatio` instead
    ///
    pub const SetHorizontalAspectRatio = setHorizontalAspectRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setHorizontalAspectRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` ratio: f64 `
    ///
    pub fn setHorizontalAspectRatio(self: QAbstract3DGraph, ratio: f64) void {
        qtc.QAbstract3DGraph_SetHorizontalAspectRatio(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `horizontalAspectRatio` instead
    ///
    pub const HorizontalAspectRatio = horizontalAspectRatio;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#horizontalAspectRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn horizontalAspectRatio(self: QAbstract3DGraph) f64 {
        return qtc.QAbstract3DGraph_HorizontalAspectRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReflection` instead
    ///
    pub const SetReflection = setReflection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setReflection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` enable: bool `
    ///
    pub fn setReflection(self: QAbstract3DGraph, enable: bool) void {
        qtc.QAbstract3DGraph_SetReflection(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isReflection` instead
    ///
    pub const IsReflection = isReflection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#isReflection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isReflection(self: QAbstract3DGraph) bool {
        return qtc.QAbstract3DGraph_IsReflection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReflectivity` instead
    ///
    pub const SetReflectivity = setReflectivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setReflectivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _reflectivity: f64 `
    ///
    pub fn setReflectivity(self: QAbstract3DGraph, _reflectivity: f64) void {
        qtc.QAbstract3DGraph_SetReflectivity(@ptrCast(self.ptr), @bitCast(_reflectivity));
    }

    /// ### DEPRECATED: Use `reflectivity` instead
    ///
    pub const Reflectivity = reflectivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn reflectivity(self: QAbstract3DGraph) f64 {
        return qtc.QAbstract3DGraph_Reflectivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QAbstract3DGraph, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QAbstract3DGraph_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn locale(self: QAbstract3DGraph) QLocale {
        return .{ .ptr = qtc.QAbstract3DGraph_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `queriedGraphPosition` instead
    ///
    pub const QueriedGraphPosition = queriedGraphPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#queriedGraphPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn queriedGraphPosition(self: QAbstract3DGraph) QVector3D {
        return .{ .ptr = qtc.QAbstract3DGraph_QueriedGraphPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMargin` instead
    ///
    pub const SetMargin = setMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#setMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setMargin(self: QAbstract3DGraph, _margin: f64) void {
        qtc.QAbstract3DGraph_SetMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `margin` instead
    ///
    pub const Margin = margin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#margin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn margin(self: QAbstract3DGraph) f64 {
        return qtc.QAbstract3DGraph_Margin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasContext` instead
    ///
    pub const HasContext = hasContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#hasContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn hasContext(self: QAbstract3DGraph) bool {
        return qtc.QAbstract3DGraph_HasContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activeInputHandlerChanged` instead
    ///
    pub const ActiveInputHandlerChanged = activeInputHandlerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeInputHandlerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` inputHandler: QAbstract3DInputHandler `
    ///
    pub fn activeInputHandlerChanged(self: QAbstract3DGraph, inputHandler: anytype) void {
        comptime _ = @TypeOf(inputHandler)._is_QAbstract3DInputHandler;
        qtc.QAbstract3DGraph_ActiveInputHandlerChanged(@ptrCast(self.ptr), @ptrCast(inputHandler.ptr));
    }

    /// ### DEPRECATED: Use `onActiveInputHandlerChanged` instead
    ///
    pub const OnActiveInputHandlerChanged = onActiveInputHandlerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeInputHandlerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, inputHandler: QAbstract3DInputHandler) callconv(.c) void `
    ///
    pub fn onActiveInputHandlerChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, QAbstract3DInputHandler) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ActiveInputHandlerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeThemeChanged` instead
    ///
    pub const ActiveThemeChanged = activeThemeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeThemeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` theme: Q3DTheme `
    ///
    pub fn activeThemeChanged(self: QAbstract3DGraph, theme: anytype) void {
        comptime _ = @TypeOf(theme)._is_Q3DTheme;
        qtc.QAbstract3DGraph_ActiveThemeChanged(@ptrCast(self.ptr), @ptrCast(theme.ptr));
    }

    /// ### DEPRECATED: Use `onActiveThemeChanged` instead
    ///
    pub const OnActiveThemeChanged = onActiveThemeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#activeThemeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, theme: Q3DTheme) callconv(.c) void `
    ///
    pub fn onActiveThemeChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, Q3DTheme) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ActiveThemeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionModeChanged` instead
    ///
    pub const SelectionModeChanged = selectionModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectionModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` mode: flag of qabstract3dgraph_enums.SelectionFlag `
    ///
    pub fn selectionModeChanged(self: QAbstract3DGraph, mode: i32) void {
        qtc.QAbstract3DGraph_SelectionModeChanged(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSelectionModeChanged` instead
    ///
    pub const OnSelectionModeChanged = onSelectionModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectionModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, mode: flag of qabstract3dgraph_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn onSelectionModeChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_SelectionModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shadowQualityChanged` instead
    ///
    pub const ShadowQualityChanged = shadowQualityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#shadowQualityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` quality: qabstract3dgraph_enums.ShadowQuality `
    ///
    pub fn shadowQualityChanged(self: QAbstract3DGraph, quality: i32) void {
        qtc.QAbstract3DGraph_ShadowQualityChanged(@ptrCast(self.ptr), @bitCast(quality));
    }

    /// ### DEPRECATED: Use `onShadowQualityChanged` instead
    ///
    pub const OnShadowQualityChanged = onShadowQualityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#shadowQualityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, quality: qabstract3dgraph_enums.ShadowQuality) callconv(.c) void `
    ///
    pub fn onShadowQualityChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ShadowQualityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedElementChanged` instead
    ///
    pub const SelectedElementChanged = selectedElementChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedElementChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` typeVal: qabstract3dgraph_enums.ElementType `
    ///
    pub fn selectedElementChanged(self: QAbstract3DGraph, typeVal: i32) void {
        qtc.QAbstract3DGraph_SelectedElementChanged(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `onSelectedElementChanged` instead
    ///
    pub const OnSelectedElementChanged = onSelectedElementChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#selectedElementChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, typeVal: qabstract3dgraph_enums.ElementType) callconv(.c) void `
    ///
    pub fn onSelectedElementChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_SelectedElementChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `measureFpsChanged` instead
    ///
    pub const MeasureFpsChanged = measureFpsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#measureFpsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` enabled: bool `
    ///
    pub fn measureFpsChanged(self: QAbstract3DGraph, enabled: bool) void {
        qtc.QAbstract3DGraph_MeasureFpsChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onMeasureFpsChanged` instead
    ///
    pub const OnMeasureFpsChanged = onMeasureFpsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#measureFpsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, enabled: bool) callconv(.c) void `
    ///
    pub fn onMeasureFpsChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, bool) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_MeasureFpsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentFpsChanged` instead
    ///
    pub const CurrentFpsChanged = currentFpsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#currentFpsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` fps: f64 `
    ///
    pub fn currentFpsChanged(self: QAbstract3DGraph, fps: f64) void {
        qtc.QAbstract3DGraph_CurrentFpsChanged(@ptrCast(self.ptr), @bitCast(fps));
    }

    /// ### DEPRECATED: Use `onCurrentFpsChanged` instead
    ///
    pub const OnCurrentFpsChanged = onCurrentFpsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#currentFpsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, fps: f64) callconv(.c) void `
    ///
    pub fn onCurrentFpsChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_CurrentFpsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `orthoProjectionChanged` instead
    ///
    pub const OrthoProjectionChanged = orthoProjectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#orthoProjectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` enabled: bool `
    ///
    pub fn orthoProjectionChanged(self: QAbstract3DGraph, enabled: bool) void {
        qtc.QAbstract3DGraph_OrthoProjectionChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onOrthoProjectionChanged` instead
    ///
    pub const OnOrthoProjectionChanged = onOrthoProjectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#orthoProjectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, enabled: bool) callconv(.c) void `
    ///
    pub fn onOrthoProjectionChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, bool) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_OrthoProjectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aspectRatioChanged` instead
    ///
    pub const AspectRatioChanged = aspectRatioChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#aspectRatioChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` ratio: f64 `
    ///
    pub fn aspectRatioChanged(self: QAbstract3DGraph, ratio: f64) void {
        qtc.QAbstract3DGraph_AspectRatioChanged(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `onAspectRatioChanged` instead
    ///
    pub const OnAspectRatioChanged = onAspectRatioChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#aspectRatioChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, ratio: f64) callconv(.c) void `
    ///
    pub fn onAspectRatioChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_AspectRatioChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `optimizationHintsChanged` instead
    ///
    pub const OptimizationHintsChanged = optimizationHintsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#optimizationHintsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` hints: flag of qabstract3dgraph_enums.OptimizationHint `
    ///
    pub fn optimizationHintsChanged(self: QAbstract3DGraph, hints: i32) void {
        qtc.QAbstract3DGraph_OptimizationHintsChanged(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `onOptimizationHintsChanged` instead
    ///
    pub const OnOptimizationHintsChanged = onOptimizationHintsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#optimizationHintsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, hints: flag of qabstract3dgraph_enums.OptimizationHint) callconv(.c) void `
    ///
    pub fn onOptimizationHintsChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_OptimizationHintsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `polarChanged` instead
    ///
    pub const PolarChanged = polarChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#polarChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` enabled: bool `
    ///
    pub fn polarChanged(self: QAbstract3DGraph, enabled: bool) void {
        qtc.QAbstract3DGraph_PolarChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onPolarChanged` instead
    ///
    pub const OnPolarChanged = onPolarChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#polarChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, enabled: bool) callconv(.c) void `
    ///
    pub fn onPolarChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, bool) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_PolarChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `radialLabelOffsetChanged` instead
    ///
    pub const RadialLabelOffsetChanged = radialLabelOffsetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#radialLabelOffsetChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` offset: f32 `
    ///
    pub fn radialLabelOffsetChanged(self: QAbstract3DGraph, offset: f32) void {
        qtc.QAbstract3DGraph_RadialLabelOffsetChanged(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `onRadialLabelOffsetChanged` instead
    ///
    pub const OnRadialLabelOffsetChanged = onRadialLabelOffsetChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#radialLabelOffsetChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, offset: f32) callconv(.c) void `
    ///
    pub fn onRadialLabelOffsetChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, f32) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_RadialLabelOffsetChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalAspectRatioChanged` instead
    ///
    pub const HorizontalAspectRatioChanged = horizontalAspectRatioChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#horizontalAspectRatioChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` ratio: f64 `
    ///
    pub fn horizontalAspectRatioChanged(self: QAbstract3DGraph, ratio: f64) void {
        qtc.QAbstract3DGraph_HorizontalAspectRatioChanged(@ptrCast(self.ptr), @bitCast(ratio));
    }

    /// ### DEPRECATED: Use `onHorizontalAspectRatioChanged` instead
    ///
    pub const OnHorizontalAspectRatioChanged = onHorizontalAspectRatioChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#horizontalAspectRatioChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, ratio: f64) callconv(.c) void `
    ///
    pub fn onHorizontalAspectRatioChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_HorizontalAspectRatioChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reflectionChanged` instead
    ///
    pub const ReflectionChanged = reflectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` enabled: bool `
    ///
    pub fn reflectionChanged(self: QAbstract3DGraph, enabled: bool) void {
        qtc.QAbstract3DGraph_ReflectionChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onReflectionChanged` instead
    ///
    pub const OnReflectionChanged = onReflectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, enabled: bool) callconv(.c) void `
    ///
    pub fn onReflectionChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, bool) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ReflectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reflectivityChanged` instead
    ///
    pub const ReflectivityChanged = reflectivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _reflectivity: f64 `
    ///
    pub fn reflectivityChanged(self: QAbstract3DGraph, _reflectivity: f64) void {
        qtc.QAbstract3DGraph_ReflectivityChanged(@ptrCast(self.ptr), @bitCast(_reflectivity));
    }

    /// ### DEPRECATED: Use `onReflectivityChanged` instead
    ///
    pub const OnReflectivityChanged = onReflectivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#reflectivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, reflectivity: f64) callconv(.c) void `
    ///
    pub fn onReflectivityChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_ReflectivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localeChanged` instead
    ///
    pub const LocaleChanged = localeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#localeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn localeChanged(self: QAbstract3DGraph, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QAbstract3DGraph_LocaleChanged(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `onLocaleChanged` instead
    ///
    pub const OnLocaleChanged = onLocaleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#localeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, locale: QLocale) callconv(.c) void `
    ///
    pub fn onLocaleChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, QLocale) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_LocaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `queriedGraphPositionChanged` instead
    ///
    pub const QueriedGraphPositionChanged = queriedGraphPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#queriedGraphPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` data: QVector3D `
    ///
    pub fn queriedGraphPositionChanged(self: QAbstract3DGraph, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QVector3D;
        qtc.QAbstract3DGraph_QueriedGraphPositionChanged(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `onQueriedGraphPositionChanged` instead
    ///
    pub const OnQueriedGraphPositionChanged = onQueriedGraphPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#queriedGraphPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, data: QVector3D) callconv(.c) void `
    ///
    pub fn onQueriedGraphPositionChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, QVector3D) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_QueriedGraphPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `marginChanged` instead
    ///
    pub const MarginChanged = marginChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#marginChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _margin: f64 `
    ///
    pub fn marginChanged(self: QAbstract3DGraph, _margin: f64) void {
        qtc.QAbstract3DGraph_MarginChanged(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `onMarginChanged` instead
    ///
    pub const OnMarginChanged = onMarginChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#marginChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, margin: f64) callconv(.c) void `
    ///
    pub fn onMarginChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, f64) callconv(.c) void) void {
        qtc.QAbstract3DGraph_Connect_MarginChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QAbstract3DGraph_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DGraph.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QAbstract3DGraph_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DGraph.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `renderToImage1` instead
    ///
    pub const RenderToImage1 = renderToImage1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#renderToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` msaaSamples: i32 `
    ///
    pub fn renderToImage1(self: QAbstract3DGraph, msaaSamples: i32) QImage {
        return .{ .ptr = qtc.QAbstract3DGraph_RenderToImage1(@ptrCast(self.ptr), @bitCast(msaaSamples)) };
    }

    /// ### DEPRECATED: Use `renderToImage2` instead
    ///
    pub const RenderToImage2 = renderToImage2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#renderToImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` msaaSamples: i32 `
    ///
    /// ` imageSize: QSize `
    ///
    pub fn renderToImage2(self: QAbstract3DGraph, msaaSamples: i32, imageSize: anytype) QImage {
        comptime _ = @TypeOf(imageSize)._is_QSize;
        return .{ .ptr = qtc.QAbstract3DGraph_RenderToImage2(@ptrCast(self.ptr), @bitCast(msaaSamples), @ptrCast(imageSize.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// Upcasts to a QSurface object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn asQSurface(self: QAbstract3DGraph) QSurface {
        return .{ .ptr = qtc.QWindow_AsQSurface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWindow
    ///
    /// Downcasts to a QAbstract3DGraph object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qsurface: QSurface `
    ///
    pub fn fromQSurface(_qsurface: anytype) QAbstract3DGraph {
        comptime _ = @TypeOf(_qsurface)._is_QSurface;
        return .{ .ptr = @ptrCast(qtc.QWindow_FromQSurface(@ptrCast(_qsurface.ptr))) };
    }

    /// ### DEPRECATED: Use `setSurfaceType` instead
    ///
    pub const SetSurfaceType = setSurfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSurfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _surfaceType: qsurface_enums.SurfaceType `
    ///
    pub fn setSurfaceType(self: QAbstract3DGraph, _surfaceType: i32) void {
        qtc.QWindow_SetSurfaceType(@ptrCast(self.ptr), @bitCast(_surfaceType));
    }

    /// ### DEPRECATED: Use `surfaceType` instead
    ///
    pub const SurfaceType = surfaceType;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#surfaceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceType `
    ///
    pub fn surfaceType(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_SurfaceType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isVisible(self: QAbstract3DGraph) bool {
        return qtc.QWindow_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `visibility` instead
    ///
    pub const Visibility = visibility;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qwindow_enums.Visibility `
    ///
    pub fn visibility(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_Visibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisibility` instead
    ///
    pub const SetVisibility = setVisibility;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` v: qwindow_enums.Visibility `
    ///
    pub fn setVisibility(self: QAbstract3DGraph, v: i32) void {
        qtc.QWindow_SetVisibility(@ptrCast(self.ptr), @bitCast(v));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn create(self: QAbstract3DGraph) void {
        qtc.QWindow_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `winId` instead
    ///
    pub const WinId = winId;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn winId(self: QAbstract3DGraph) usize {
        return qtc.QWindow_WinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn parent(self: QAbstract3DGraph) QWindow {
        return .{ .ptr = qtc.QWindow_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn setParent(self: QAbstract3DGraph, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        qtc.QWindow_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `isTopLevel` instead
    ///
    pub const IsTopLevel = isTopLevel;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isTopLevel(self: QAbstract3DGraph) bool {
        return qtc.QWindow_IsTopLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isModal(self: QAbstract3DGraph) bool {
        return qtc.QWindow_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `modality` instead
    ///
    pub const Modality = modality;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn modality(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_Modality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModality` instead
    ///
    pub const SetModality = setModality;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _modality: qnamespace_enums.WindowModality `
    ///
    pub fn setModality(self: QAbstract3DGraph, _modality: i32) void {
        qtc.QWindow_SetModality(@ptrCast(self.ptr), @bitCast(_modality));
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _format: QSurfaceFormat `
    ///
    pub fn setFormat(self: QAbstract3DGraph, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QSurfaceFormat;
        qtc.QWindow_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn format(self: QAbstract3DGraph) QSurfaceFormat {
        return .{ .ptr = qtc.QWindow_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `requestedFormat` instead
    ///
    pub const RequestedFormat = requestedFormat;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestedFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn requestedFormat(self: QAbstract3DGraph) QSurfaceFormat {
        return .{ .ptr = qtc.QWindow_RequestedFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn setFlags(self: QAbstract3DGraph, _flags: i32) void {
        qtc.QWindow_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn flags(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setFlag(self: QAbstract3DGraph, param1: i32) void {
        qtc.QWindow_SetFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn type0(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: QAbstract3DGraph, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DGraph.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` level: f64 `
    ///
    pub fn setOpacity(self: QAbstract3DGraph, level: f64) void {
        qtc.QWindow_SetOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn opacity(self: QAbstract3DGraph) f64 {
        return qtc.QWindow_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` region: QRegion `
    ///
    pub fn setMask(self: QAbstract3DGraph, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QWindow_SetMask(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn mask(self: QAbstract3DGraph) QRegion {
        return .{ .ptr = qtc.QWindow_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isActive(self: QAbstract3DGraph) bool {
        return qtc.QWindow_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reportContentOrientationChange` instead
    ///
    pub const ReportContentOrientationChange = reportContentOrientationChange;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#reportContentOrientationChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn reportContentOrientationChange(self: QAbstract3DGraph, orientation: i32) void {
        qtc.QWindow_ReportContentOrientationChange(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `contentOrientation` instead
    ///
    pub const ContentOrientation = contentOrientation;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScreenOrientation `
    ///
    pub fn contentOrientation(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_ContentOrientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn devicePixelRatio(self: QAbstract3DGraph) f64 {
        return qtc.QWindow_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowState` instead
    ///
    pub const WindowState = windowState;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_WindowState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowStates` instead
    ///
    pub const WindowStates = windowStates;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowStates(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_WindowStates(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowState` instead
    ///
    pub const SetWindowState = setWindowState;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` state: qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QAbstract3DGraph, state: i32) void {
        qtc.QWindow_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `setWindowStates` instead
    ///
    pub const SetWindowStates = setWindowStates;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWindowStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` states: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowStates(self: QAbstract3DGraph, states: i32) void {
        qtc.QWindow_SetWindowStates(@ptrCast(self.ptr), @bitCast(states));
    }

    /// ### DEPRECATED: Use `setTransientParent` instead
    ///
    pub const SetTransientParent = setTransientParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTransientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _parent: QWindow `
    ///
    pub fn setTransientParent(self: QAbstract3DGraph, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWindow;
        qtc.QWindow_SetTransientParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `transientParent` instead
    ///
    pub const TransientParent = transientParent;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn transientParent(self: QAbstract3DGraph) QWindow {
        return .{ .ptr = qtc.QWindow_TransientParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` child: QWindow `
    ///
    pub fn isAncestorOf(self: QAbstract3DGraph, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `isExposed` instead
    ///
    pub const IsExposed = isExposed;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isExposed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isExposed(self: QAbstract3DGraph) bool {
        return qtc.QWindow_IsExposed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn minimumWidth(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn minimumHeight(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn maximumWidth(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn maximumHeight(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn minimumSize(self: QAbstract3DGraph) QSize {
        return .{ .ptr = qtc.QWindow_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn maximumSize(self: QAbstract3DGraph) QSize {
        return .{ .ptr = qtc.QWindow_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `baseSize` instead
    ///
    pub const BaseSize = baseSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn baseSize(self: QAbstract3DGraph) QSize {
        return .{ .ptr = qtc.QWindow_BaseSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeIncrement` instead
    ///
    pub const SizeIncrement = sizeIncrement;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn sizeIncrement(self: QAbstract3DGraph) QSize {
        return .{ .ptr = qtc.QWindow_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _size: QSize `
    ///
    pub fn setMinimumSize(self: QAbstract3DGraph, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _size: QSize `
    ///
    pub fn setMaximumSize(self: QAbstract3DGraph, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setBaseSize` instead
    ///
    pub const SetBaseSize = setBaseSize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _size: QSize `
    ///
    pub fn setBaseSize(self: QAbstract3DGraph, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetBaseSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setSizeIncrement` instead
    ///
    pub const SetSizeIncrement = setSizeIncrement;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _size: QSize `
    ///
    pub fn setSizeIncrement(self: QAbstract3DGraph, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QWindow_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn geometry(self: QAbstract3DGraph) QRect {
        return .{ .ptr = qtc.QWindow_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameMargins` instead
    ///
    pub const FrameMargins = frameMargins;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn frameMargins(self: QAbstract3DGraph) QMargins {
        return .{ .ptr = qtc.QWindow_FrameMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn frameGeometry(self: QAbstract3DGraph) QRect {
        return .{ .ptr = qtc.QWindow_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `framePosition` instead
    ///
    pub const FramePosition = framePosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#framePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn framePosition(self: QAbstract3DGraph) QPoint {
        return .{ .ptr = qtc.QWindow_FramePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFramePosition` instead
    ///
    pub const SetFramePosition = setFramePosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFramePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` point: QPoint `
    ///
    pub fn setFramePosition(self: QAbstract3DGraph, point: anytype) void {
        comptime _ = @TypeOf(point)._is_QPoint;
        qtc.QWindow_SetFramePosition(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn width(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn height(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn x(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn y(self: QAbstract3DGraph) i32 {
        return qtc.QWindow_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn size(self: QAbstract3DGraph) QSize {
        return .{ .ptr = qtc.QWindow_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn position(self: QAbstract3DGraph) QPoint {
        return .{ .ptr = qtc.QWindow_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` pt: QPoint `
    ///
    pub fn setPosition(self: QAbstract3DGraph, pt: anytype) void {
        comptime _ = @TypeOf(pt)._is_QPoint;
        qtc.QWindow_SetPosition(@ptrCast(self.ptr), @ptrCast(pt.ptr));
    }

    /// ### DEPRECATED: Use `setPosition2` instead
    ///
    pub const SetPosition2 = setPosition2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    pub fn setPosition2(self: QAbstract3DGraph, posx: i32, posy: i32) void {
        qtc.QWindow_SetPosition2(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` newSize: QSize `
    ///
    pub fn resize(self: QAbstract3DGraph, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSize;
        qtc.QWindow_Resize(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize2(self: QAbstract3DGraph, w: i32, h: i32) void {
        qtc.QWindow_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setFilePath` instead
    ///
    pub const SetFilePath = setFilePath;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _filePath: []const u8 `
    ///
    pub fn setFilePath(self: QAbstract3DGraph, _filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = _filePath.len,
            .data = _filePath.ptr,
        };
        qtc.QWindow_SetFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `filePath` instead
    ///
    pub const FilePath = filePath;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#filePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn filePath(self: QAbstract3DGraph, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWindow_FilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DGraph.filePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QAbstract3DGraph, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWindow_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn icon(self: QAbstract3DGraph) QIcon {
        return .{ .ptr = qtc.QWindow_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn destroy(self: QAbstract3DGraph) void {
        qtc.QWindow_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeyboardGrabEnabled` instead
    ///
    pub const SetKeyboardGrabEnabled = setKeyboardGrabEnabled;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setKeyboardGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` grab: bool `
    ///
    pub fn setKeyboardGrabEnabled(self: QAbstract3DGraph, grab: bool) bool {
        return qtc.QWindow_SetKeyboardGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// ### DEPRECATED: Use `setMouseGrabEnabled` instead
    ///
    pub const SetMouseGrabEnabled = setMouseGrabEnabled;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMouseGrabEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` grab: bool `
    ///
    pub fn setMouseGrabEnabled(self: QAbstract3DGraph, grab: bool) bool {
        return qtc.QWindow_SetMouseGrabEnabled(@ptrCast(self.ptr), grab);
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn screen(self: QAbstract3DGraph) QScreen {
        return .{ .ptr = qtc.QWindow_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QAbstract3DGraph, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWindow_SetScreen(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `accessibleRoot` instead
    ///
    pub const AccessibleRoot = accessibleRoot;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#accessibleRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn accessibleRoot(self: QAbstract3DGraph) QAccessibleInterface {
        return .{ .ptr = qtc.QWindow_AccessibleRoot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `focusObject` instead
    ///
    pub const FocusObject = focusObject;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn focusObject(self: QAbstract3DGraph) QObject {
        return .{ .ptr = qtc.QWindow_FocusObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal` instead
    ///
    pub const MapToGlobal = mapToGlobal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` pos: QPointF `
    ///
    pub fn mapToGlobal(self: QAbstract3DGraph, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapToGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal` instead
    ///
    pub const MapFromGlobal = mapFromGlobal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` pos: QPointF `
    ///
    pub fn mapFromGlobal(self: QAbstract3DGraph, pos: anytype) QPointF {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QWindow_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` pos: QPoint `
    ///
    pub fn mapToGlobal2(self: QAbstract3DGraph, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` pos: QPoint `
    ///
    pub fn mapFromGlobal2(self: QAbstract3DGraph, pos: anytype) QPoint {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QWindow_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn cursor(self: QAbstract3DGraph) QCursor {
        return .{ .ptr = qtc.QWindow_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QAbstract3DGraph, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QWindow_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn unsetCursor(self: QAbstract3DGraph) void {
        qtc.QWindow_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromWinId` instead
    ///
    pub const FromWinId = fromWinId;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#fromWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` id: usize `
    ///
    pub fn fromWinId(id: usize) QWindow {
        return .{ .ptr = qtc.QWindow_FromWinId(@bitCast(id)) };
    }

    /// ### DEPRECATED: Use `requestActivate` instead
    ///
    pub const RequestActivate = requestActivate;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestActivate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn requestActivate(self: QAbstract3DGraph) void {
        qtc.QWindow_RequestActivate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QAbstract3DGraph, visible: bool) void {
        qtc.QWindow_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn show(self: QAbstract3DGraph) void {
        qtc.QWindow_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn hide(self: QAbstract3DGraph) void {
        qtc.QWindow_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMinimized` instead
    ///
    pub const ShowMinimized = showMinimized;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn showMinimized(self: QAbstract3DGraph) void {
        qtc.QWindow_ShowMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMaximized` instead
    ///
    pub const ShowMaximized = showMaximized;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn showMaximized(self: QAbstract3DGraph) void {
        qtc.QWindow_ShowMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showFullScreen` instead
    ///
    pub const ShowFullScreen = showFullScreen;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn showFullScreen(self: QAbstract3DGraph) void {
        qtc.QWindow_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showNormal` instead
    ///
    pub const ShowNormal = showNormal;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn showNormal(self: QAbstract3DGraph) void {
        qtc.QWindow_ShowNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn close(self: QAbstract3DGraph) bool {
        return qtc.QWindow_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `raise` instead
    ///
    pub const Raise = raise;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn raise(self: QAbstract3DGraph) void {
        qtc.QWindow_Raise(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lower` instead
    ///
    pub const Lower = lower;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn lower(self: QAbstract3DGraph) void {
        qtc.QWindow_Lower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startSystemResize` instead
    ///
    pub const StartSystemResize = startSystemResize;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemResize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` edges: flag of qnamespace_enums.Edge `
    ///
    pub fn startSystemResize(self: QAbstract3DGraph, edges: i32) bool {
        return qtc.QWindow_StartSystemResize(@ptrCast(self.ptr), @bitCast(edges));
    }

    /// ### DEPRECATED: Use `startSystemMove` instead
    ///
    pub const StartSystemMove = startSystemMove;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#startSystemMove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn startSystemMove(self: QAbstract3DGraph) bool {
        return qtc.QWindow_StartSystemMove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTitle` instead
    ///
    pub const SetTitle = setTitle;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn setTitle(self: QAbstract3DGraph, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWindow_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn setX(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_SetX(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn setY(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_SetY(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn setWidth(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_SetWidth(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn setHeight(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_SetHeight(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` posx: i32 `
    ///
    /// ` posy: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QAbstract3DGraph, posx: i32, posy: i32, w: i32, h: i32) void {
        qtc.QWindow_SetGeometry(@ptrCast(self.ptr), @bitCast(posx), @bitCast(posy), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` rect: QRect `
    ///
    pub fn setGeometry2(self: QAbstract3DGraph, rect: anytype) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QWindow_SetGeometry2(@ptrCast(self.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` w: i32 `
    ///
    pub fn setMinimumWidth(self: QAbstract3DGraph, w: i32) void {
        qtc.QWindow_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` h: i32 `
    ///
    pub fn setMinimumHeight(self: QAbstract3DGraph, h: i32) void {
        qtc.QWindow_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` w: i32 `
    ///
    pub fn setMaximumWidth(self: QAbstract3DGraph, w: i32) void {
        qtc.QWindow_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` h: i32 `
    ///
    pub fn setMaximumHeight(self: QAbstract3DGraph, h: i32) void {
        qtc.QWindow_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `alert` instead
    ///
    pub const Alert = alert;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#alert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` msec: i32 `
    ///
    pub fn alert(self: QAbstract3DGraph, msec: i32) void {
        qtc.QWindow_Alert(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn requestUpdate(self: QAbstract3DGraph) void {
        qtc.QWindow_RequestUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `screenChanged` instead
    ///
    pub const ScreenChanged = screenChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn screenChanged(self: QAbstract3DGraph, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWindow_ScreenChanged(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `onScreenChanged` instead
    ///
    pub const OnScreenChanged = onScreenChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#screenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, screen: QScreen) callconv(.c) void `
    ///
    pub fn onScreenChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, QScreen) callconv(.c) void) void {
        qtc.QWindow_Connect_ScreenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modalityChanged` instead
    ///
    pub const ModalityChanged = modalityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _modality: qnamespace_enums.WindowModality `
    ///
    pub fn modalityChanged(self: QAbstract3DGraph, _modality: i32) void {
        qtc.QWindow_ModalityChanged(@ptrCast(self.ptr), @bitCast(_modality));
    }

    /// ### DEPRECATED: Use `onModalityChanged` instead
    ///
    pub const OnModalityChanged = onModalityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#modalityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, modality: qnamespace_enums.WindowModality) callconv(.c) void `
    ///
    pub fn onModalityChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ModalityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowStateChanged` instead
    ///
    pub const WindowStateChanged = windowStateChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _windowState: qnamespace_enums.WindowState `
    ///
    pub fn windowStateChanged(self: QAbstract3DGraph, _windowState: i32) void {
        qtc.QWindow_WindowStateChanged(@ptrCast(self.ptr), @bitCast(_windowState));
    }

    /// ### DEPRECATED: Use `onWindowStateChanged` instead
    ///
    pub const OnWindowStateChanged = onWindowStateChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowStateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, windowState: qnamespace_enums.WindowState) callconv(.c) void `
    ///
    pub fn onWindowStateChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowTitleChanged` instead
    ///
    pub const WindowTitleChanged = windowTitleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QAbstract3DGraph, _title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        qtc.QWindow_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onWindowTitleChanged` instead
    ///
    pub const OnWindowTitleChanged = onWindowTitleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, [*:0]const u8) callconv(.c) void) void {
        qtc.QWindow_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn xChanged(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_XChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: i32) callconv(.c) void `
    ///
    pub fn onXChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn yChanged(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_YChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: i32) callconv(.c) void `
    ///
    pub fn onYChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn widthChanged(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_WidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: i32) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn heightChanged(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_HeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: i32) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumWidthChanged` instead
    ///
    pub const MinimumWidthChanged = minimumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn minimumWidthChanged(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMinimumWidthChanged` instead
    ///
    pub const OnMinimumWidthChanged = onMinimumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: i32) callconv(.c) void `
    ///
    pub fn onMinimumWidthChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightChanged` instead
    ///
    pub const MinimumHeightChanged = minimumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn minimumHeightChanged(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMinimumHeightChanged` instead
    ///
    pub const OnMinimumHeightChanged = onMinimumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#minimumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: i32) callconv(.c) void `
    ///
    pub fn onMinimumHeightChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MinimumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumWidthChanged` instead
    ///
    pub const MaximumWidthChanged = maximumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn maximumWidthChanged(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMaximumWidthChanged` instead
    ///
    pub const OnMaximumWidthChanged = onMaximumWidthChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumWidthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: i32) callconv(.c) void `
    ///
    pub fn onMaximumWidthChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumWidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumHeightChanged` instead
    ///
    pub const MaximumHeightChanged = maximumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: i32 `
    ///
    pub fn maximumHeightChanged(self: QAbstract3DGraph, arg: i32) void {
        qtc.QWindow_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(arg));
    }

    /// ### DEPRECATED: Use `onMaximumHeightChanged` instead
    ///
    pub const OnMaximumHeightChanged = onMaximumHeightChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#maximumHeightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: i32) callconv(.c) void `
    ///
    pub fn onMaximumHeightChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_MaximumHeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` arg: bool `
    ///
    pub fn visibleChanged(self: QAbstract3DGraph, arg: bool) void {
        qtc.QWindow_VisibleChanged(@ptrCast(self.ptr), arg);
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, arg: bool) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, bool) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibilityChanged` instead
    ///
    pub const VisibilityChanged = visibilityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _visibility: qwindow_enums.Visibility `
    ///
    pub fn visibilityChanged(self: QAbstract3DGraph, _visibility: i32) void {
        qtc.QWindow_VisibilityChanged(@ptrCast(self.ptr), @bitCast(_visibility));
    }

    /// ### DEPRECATED: Use `onVisibilityChanged` instead
    ///
    pub const OnVisibilityChanged = onVisibilityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#visibilityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, visibility: qwindow_enums.Visibility) callconv(.c) void `
    ///
    pub fn onVisibilityChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_VisibilityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activeChanged` instead
    ///
    pub const ActiveChanged = activeChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn activeChanged(self: QAbstract3DGraph) void {
        qtc.QWindow_ActiveChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActiveChanged` instead
    ///
    pub const OnActiveChanged = onActiveChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph) callconv(.c) void `
    ///
    pub fn onActiveChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph) callconv(.c) void) void {
        qtc.QWindow_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentOrientationChanged` instead
    ///
    pub const ContentOrientationChanged = contentOrientationChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` orientation: qnamespace_enums.ScreenOrientation `
    ///
    pub fn contentOrientationChanged(self: QAbstract3DGraph, orientation: i32) void {
        qtc.QWindow_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(orientation));
    }

    /// ### DEPRECATED: Use `onContentOrientationChanged` instead
    ///
    pub const OnContentOrientationChanged = onContentOrientationChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#contentOrientationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, orientation: qnamespace_enums.ScreenOrientation) callconv(.c) void `
    ///
    pub fn onContentOrientationChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, i32) callconv(.c) void) void {
        qtc.QWindow_Connect_ContentOrientationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusObjectChanged` instead
    ///
    pub const FocusObjectChanged = focusObjectChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` object: QObject `
    ///
    pub fn focusObjectChanged(self: QAbstract3DGraph, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QWindow_FocusObjectChanged(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `onFocusObjectChanged` instead
    ///
    pub const OnFocusObjectChanged = onFocusObjectChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#focusObjectChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, object: QObject) callconv(.c) void `
    ///
    pub fn onFocusObjectChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, QObject) callconv(.c) void) void {
        qtc.QWindow_Connect_FocusObjectChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn opacityChanged(self: QAbstract3DGraph, _opacity: f64) void {
        qtc.QWindow_OpacityChanged(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, opacity: f64) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, f64) callconv(.c) void) void {
        qtc.QWindow_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `transientParentChanged` instead
    ///
    pub const TransientParentChanged = transientParentChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _transientParent: QWindow `
    ///
    pub fn transientParentChanged(self: QAbstract3DGraph, _transientParent: anytype) void {
        comptime _ = @TypeOf(_transientParent)._is_QWindow;
        qtc.QWindow_TransientParentChanged(@ptrCast(self.ptr), @ptrCast(_transientParent.ptr));
    }

    /// ### DEPRECATED: Use `onTransientParentChanged` instead
    ///
    pub const OnTransientParentChanged = onTransientParentChanged;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#transientParentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, transientParent: QWindow) callconv(.c) void `
    ///
    pub fn onTransientParentChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, QWindow) callconv(.c) void) void {
        qtc.QWindow_Connect_TransientParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent1` instead
    ///
    pub const Parent1 = parent1;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn parent1(self: QAbstract3DGraph, mode: i32) QWindow {
        return .{ .ptr = qtc.QWindow_Parent1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setFlag2(self: QAbstract3DGraph, param1: i32, on: bool) void {
        qtc.QWindow_SetFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `isAncestorOf2` instead
    ///
    pub const IsAncestorOf2 = isAncestorOf2;

    /// Inherited from QWindow
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwindow.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ` child: QWindow `
    ///
    /// ` mode: qwindow_enums.AncestorMode `
    ///
    pub fn isAncestorOf2(self: QAbstract3DGraph, child: anytype, mode: i32) bool {
        comptime _ = @TypeOf(child)._is_QWindow;
        return qtc.QWindow_IsAncestorOf2(@ptrCast(self.ptr), @ptrCast(child.ptr), @bitCast(mode));
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstract3DGraph, watched: anytype, _event: anytype) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstract3DGraph, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstract3DGraph.objectName: Memory allocation failed");
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstract3DGraph, name: []const u8) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isWidgetType(self: QAbstract3DGraph) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isWindowType(self: QAbstract3DGraph) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn isQuickItemType(self: QAbstract3DGraph) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn signalsBlocked(self: QAbstract3DGraph) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstract3DGraph, b: bool) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn thread(self: QAbstract3DGraph) QThread {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstract3DGraph, _thread: anytype) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstract3DGraph, interval: i32) i32 {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstract3DGraph, time: i64) i32 {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstract3DGraph, id: i32) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstract3DGraph, id: i32) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstract3DGraph, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstract3DGraph.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstract3DGraph, filterObj: anytype) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstract3DGraph, obj: anytype) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstract3DGraph, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn disconnect3(self: QAbstract3DGraph) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstract3DGraph, receiver: anytype) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn dumpObjectTree(self: QAbstract3DGraph) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn dumpObjectInfo(self: QAbstract3DGraph) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstract3DGraph, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAbstract3DGraph, name: [:0]const u8) QVariant {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstract3DGraph, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAbstract3DGraph.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstract3DGraph.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn bindingStorage(self: QAbstract3DGraph) QBindingStorage {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn bindingStorage2(self: QAbstract3DGraph) QBindingStorage {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn destroyed(self: QAbstract3DGraph) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstract3DGraph, classname: [:0]const u8) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    pub fn deleteLater(self: QAbstract3DGraph) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstract3DGraph, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstract3DGraph, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstract3DGraph, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstract3DGraph, signal: [:0]const u8) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstract3DGraph, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstract3DGraph, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstract3DGraph, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstract3DGraph, param1: anytype) void {
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `surfaceClass` instead
    ///
    pub const SurfaceClass = surfaceClass;

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#surfaceClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    /// ## Returns:
    ///
    /// ` qsurface_enums.SurfaceClass `
    ///
    pub fn surfaceClass(self: QAbstract3DGraph) i32 {
        return qtc.QSurface_SurfaceClass(@ptrCast(self.asQSurface().ptr));
    }

    /// ### DEPRECATED: Use `supportsOpenGL` instead
    ///
    pub const SupportsOpenGL = supportsOpenGL;

    /// Inherited from QSurface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsurface.html#supportsOpenGL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn supportsOpenGL(self: QAbstract3DGraph) bool {
        return qtc.QSurface_SupportsOpenGL(@ptrCast(self.asQSurface().ptr));
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
    /// ` self: QAbstract3DGraph `
    ///
    /// ` callback: *const fn (self: QAbstract3DGraph, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstract3DGraph, callback: *const fn (QAbstract3DGraph, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#dtor.QAbstract3DGraph)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstract3DGraph `
    ///
    pub fn delete(self: QAbstract3DGraph) void {
        qtc.QAbstract3DGraph_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstract3dgraph-qtdatavis.html#public-types)
pub const enums = struct {
    pub const SelectionFlag = enum {
        pub const SelectionNone: i32 = 0;
        pub const SelectionItem: i32 = 1;
        pub const SelectionRow: i32 = 2;
        pub const SelectionItemAndRow: i32 = 3;
        pub const SelectionColumn: i32 = 4;
        pub const SelectionItemAndColumn: i32 = 5;
        pub const SelectionRowAndColumn: i32 = 6;
        pub const SelectionItemRowAndColumn: i32 = 7;
        pub const SelectionSlice: i32 = 8;
        pub const SelectionMultiSeries: i32 = 16;
    };

    pub const ShadowQuality = enum {
        pub const ShadowQualityNone: i32 = 0;
        pub const ShadowQualityLow: i32 = 1;
        pub const ShadowQualityMedium: i32 = 2;
        pub const ShadowQualityHigh: i32 = 3;
        pub const ShadowQualitySoftLow: i32 = 4;
        pub const ShadowQualitySoftMedium: i32 = 5;
        pub const ShadowQualitySoftHigh: i32 = 6;
    };

    pub const ElementType = enum {
        pub const ElementNone: i32 = 0;
        pub const ElementSeries: i32 = 1;
        pub const ElementAxisXLabel: i32 = 2;
        pub const ElementAxisYLabel: i32 = 3;
        pub const ElementAxisZLabel: i32 = 4;
        pub const ElementCustomItem: i32 = 5;
    };

    pub const OptimizationHint = enum {
        pub const OptimizationDefault: i32 = 0;
        pub const OptimizationStatic: i32 = 1;
    };
};
