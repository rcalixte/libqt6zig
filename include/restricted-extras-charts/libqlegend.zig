const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractSeries = @import("libqt6").QAbstractSeries;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QCursor = @import("libqt6").QCursor;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsItem = @import("libqt6").QGraphicsItem;
const QGraphicsItemGroup = @import("libqt6").QGraphicsItemGroup;
const QGraphicsLayout = @import("libqt6").QGraphicsLayout;
const QGraphicsLayoutItem = @import("libqt6").QGraphicsLayoutItem;
const QGraphicsObject = @import("libqt6").QGraphicsObject;
const QGraphicsScene = @import("libqt6").QGraphicsScene;
const QGraphicsTransform = @import("libqt6").QGraphicsTransform;
const QGraphicsWidget = @import("libqt6").QGraphicsWidget;
const QKeySequence = @import("libqt6").QKeySequence;
const QLegendMarker = @import("libqt6").QLegendMarker;
const QMarginsF = @import("libqt6").QMarginsF;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPainter = @import("libqt6").QPainter;
const QPainterPath = @import("libqt6").QPainterPath;
const QPalette = @import("libqt6").QPalette;
const QPen = @import("libqt6").QPen;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QRegion = @import("libqt6").QRegion;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionGraphicsItem = @import("libqt6").QStyleOptionGraphicsItem;
const QThread = @import("libqt6").QThread;
const QTransform = @import("libqt6").QTransform;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qgraphicsitem_enums = @import("../libqgraphicsitem.zig").enums;
const qlegend_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html)
pub const QLegend = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLegend,

    pub const _is_QLegend = {};
    pub const _is_QGraphicsWidget = {};
    pub const _is_QGraphicsObject = {};
    pub const _is_QObject = {};
    pub const _is_QGraphicsItem = {};
    pub const _is_QGraphicsLayoutItem = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn metaObject(self: QLegend) QMetaObject {
        return .{ .ptr = qtc.QLegend_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QLegend, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLegend_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QLegend, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLegend_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLegend.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `paint` instead
    ///
    pub const Paint = paint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#paint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn paint(self: QLegend, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QLegend_Paint(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `setBrush` instead
    ///
    pub const SetBrush = setBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setBrush(self: QLegend, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QLegend_SetBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `brush` instead
    ///
    pub const Brush = brush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#brush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn brush(self: QLegend) QBrush {
        return .{ .ptr = qtc.QLegend_Brush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _color: QColor `
    ///
    pub fn setColor(self: QLegend, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QLegend_SetColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#color)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn color(self: QLegend) QColor {
        return .{ .ptr = qtc.QLegend_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPen` instead
    ///
    pub const SetPen = setPen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setPen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _pen: QPen `
    ///
    pub fn setPen(self: QLegend, _pen: anytype) void {
        comptime _ = @TypeOf(_pen)._is_QPen;
        qtc.QLegend_SetPen(@ptrCast(self.ptr), @ptrCast(_pen.ptr));
    }

    /// ### DEPRECATED: Use `pen` instead
    ///
    pub const Pen = pen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#pen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn pen(self: QLegend) QPen {
        return .{ .ptr = qtc.QLegend_Pen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderColor` instead
    ///
    pub const SetBorderColor = setBorderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBorderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _color: QColor `
    ///
    pub fn setBorderColor(self: QLegend, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QLegend_SetBorderColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `borderColor` instead
    ///
    pub const BorderColor = borderColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn borderColor(self: QLegend) QColor {
        return .{ .ptr = qtc.QLegend_BorderColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QLegend, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QLegend_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn font(self: QLegend) QFont {
        return .{ .ptr = qtc.QLegend_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelBrush` instead
    ///
    pub const SetLabelBrush = setLabelBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setLabelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _brush: QBrush `
    ///
    pub fn setLabelBrush(self: QLegend, _brush: anytype) void {
        comptime _ = @TypeOf(_brush)._is_QBrush;
        qtc.QLegend_SetLabelBrush(@ptrCast(self.ptr), @ptrCast(_brush.ptr));
    }

    /// ### DEPRECATED: Use `labelBrush` instead
    ///
    pub const LabelBrush = labelBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn labelBrush(self: QLegend) QBrush {
        return .{ .ptr = qtc.QLegend_LabelBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLabelColor` instead
    ///
    pub const SetLabelColor = setLabelColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setLabelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _color: QColor `
    ///
    pub fn setLabelColor(self: QLegend, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QLegend_SetLabelColor(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `labelColor` instead
    ///
    pub const LabelColor = labelColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn labelColor(self: QLegend) QColor {
        return .{ .ptr = qtc.QLegend_LabelColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QLegend, _alignment: i32) void {
        qtc.QLegend_SetAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QLegend) i32 {
        return qtc.QLegend_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `detachFromChart` instead
    ///
    pub const DetachFromChart = detachFromChart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#detachFromChart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn detachFromChart(self: QLegend) void {
        qtc.QLegend_DetachFromChart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `attachToChart` instead
    ///
    pub const AttachToChart = attachToChart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachToChart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn attachToChart(self: QLegend) void {
        qtc.QLegend_AttachToChart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAttachedToChart` instead
    ///
    pub const IsAttachedToChart = isAttachedToChart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isAttachedToChart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isAttachedToChart(self: QLegend) bool {
        return qtc.QLegend_IsAttachedToChart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundVisible` instead
    ///
    pub const SetBackgroundVisible = setBackgroundVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn setBackgroundVisible(self: QLegend) void {
        qtc.QLegend_SetBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBackgroundVisible` instead
    ///
    pub const IsBackgroundVisible = isBackgroundVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isBackgroundVisible(self: QLegend) bool {
        return qtc.QLegend_IsBackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markers` instead
    ///
    pub const Markers = markers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn markers(self: QLegend, allocator: std.mem.Allocator) []QLegendMarker {
        const _arr: qtc.libqt_list = qtc.QLegend_Markers(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLegendMarker, _arr.len) catch @panic("QLegend.markers: Memory allocation failed");
        const _data_val: [*]QtC.QLegendMarker = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `reverseMarkers` instead
    ///
    pub const ReverseMarkers = reverseMarkers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn reverseMarkers(self: QLegend) bool {
        return qtc.QLegend_ReverseMarkers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReverseMarkers` instead
    ///
    pub const SetReverseMarkers = setReverseMarkers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setReverseMarkers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn setReverseMarkers(self: QLegend) void {
        qtc.QLegend_SetReverseMarkers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showToolTips` instead
    ///
    pub const ShowToolTips = showToolTips;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTips)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn showToolTips(self: QLegend) bool {
        return qtc.QLegend_ShowToolTips(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowToolTips` instead
    ///
    pub const SetShowToolTips = setShowToolTips;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setShowToolTips)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _show: bool `
    ///
    pub fn setShowToolTips(self: QLegend, _show: bool) void {
        qtc.QLegend_SetShowToolTips(@ptrCast(self.ptr), _show);
    }

    /// ### DEPRECATED: Use `isInteractive` instead
    ///
    pub const IsInteractive = isInteractive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#isInteractive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isInteractive(self: QLegend) bool {
        return qtc.QLegend_IsInteractive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInteractive` instead
    ///
    pub const SetInteractive = setInteractive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setInteractive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` interactive: bool `
    ///
    pub fn setInteractive(self: QLegend, interactive: bool) void {
        qtc.QLegend_SetInteractive(@ptrCast(self.ptr), interactive);
    }

    /// ### DEPRECATED: Use `markerShape` instead
    ///
    pub const MarkerShape = markerShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` qlegend_enums.MarkerShape `
    ///
    pub fn markerShape(self: QLegend) i32 {
        return qtc.QLegend_MarkerShape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMarkerShape` instead
    ///
    pub const SetMarkerShape = setMarkerShape;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setMarkerShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _shape: qlegend_enums.MarkerShape `
    ///
    pub fn setMarkerShape(self: QLegend, _shape: i32) void {
        qtc.QLegend_SetMarkerShape(@ptrCast(self.ptr), @bitCast(_shape));
    }

    /// ### DEPRECATED: Use `backgroundVisibleChanged` instead
    ///
    pub const BackgroundVisibleChanged = backgroundVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#backgroundVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` visible: bool `
    ///
    pub fn backgroundVisibleChanged(self: QLegend, visible: bool) void {
        qtc.QLegend_BackgroundVisibleChanged(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onBackgroundVisibleChanged` instead
    ///
    pub const OnBackgroundVisibleChanged = onBackgroundVisibleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#backgroundVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, visible: bool) callconv(.c) void `
    ///
    pub fn onBackgroundVisibleChanged(self: QLegend, callback: *const fn (QLegend, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_BackgroundVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `colorChanged` instead
    ///
    pub const ColorChanged = colorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#colorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _color: QColor `
    ///
    pub fn colorChanged(self: QLegend, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QLegend_ColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onColorChanged` instead
    ///
    pub const OnColorChanged = onColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#colorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, color: QColor) callconv(.c) void `
    ///
    pub fn onColorChanged(self: QLegend, callback: *const fn (QLegend, QColor) callconv(.c) void) void {
        qtc.QLegend_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `borderColorChanged` instead
    ///
    pub const BorderColorChanged = borderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _color: QColor `
    ///
    pub fn borderColorChanged(self: QLegend, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QLegend_BorderColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onBorderColorChanged` instead
    ///
    pub const OnBorderColorChanged = onBorderColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#borderColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, color: QColor) callconv(.c) void `
    ///
    pub fn onBorderColorChanged(self: QLegend, callback: *const fn (QLegend, QColor) callconv(.c) void) void {
        qtc.QLegend_Connect_BorderColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fontChanged` instead
    ///
    pub const FontChanged = fontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#fontChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _font: QFont `
    ///
    pub fn fontChanged(self: QLegend, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QLegend_FontChanged(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `onFontChanged` instead
    ///
    pub const OnFontChanged = onFontChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#fontChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, font: QFont) callconv(.c) void `
    ///
    pub fn onFontChanged(self: QLegend, callback: *const fn (QLegend, QFont) callconv(.c) void) void {
        qtc.QLegend_Connect_FontChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `labelColorChanged` instead
    ///
    pub const LabelColorChanged = labelColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _color: QColor `
    ///
    pub fn labelColorChanged(self: QLegend, _color: anytype) void {
        comptime _ = @TypeOf(_color)._is_QColor;
        qtc.QLegend_LabelColorChanged(@ptrCast(self.ptr), @ptrCast(_color.ptr));
    }

    /// ### DEPRECATED: Use `onLabelColorChanged` instead
    ///
    pub const OnLabelColorChanged = onLabelColorChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#labelColorChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, color: QColor) callconv(.c) void `
    ///
    pub fn onLabelColorChanged(self: QLegend, callback: *const fn (QLegend, QColor) callconv(.c) void) void {
        qtc.QLegend_Connect_LabelColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reverseMarkersChanged` instead
    ///
    pub const ReverseMarkersChanged = reverseMarkersChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkersChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _reverseMarkers: bool `
    ///
    pub fn reverseMarkersChanged(self: QLegend, _reverseMarkers: bool) void {
        qtc.QLegend_ReverseMarkersChanged(@ptrCast(self.ptr), _reverseMarkers);
    }

    /// ### DEPRECATED: Use `onReverseMarkersChanged` instead
    ///
    pub const OnReverseMarkersChanged = onReverseMarkersChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#reverseMarkersChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, reverseMarkers: bool) callconv(.c) void `
    ///
    pub fn onReverseMarkersChanged(self: QLegend, callback: *const fn (QLegend, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_ReverseMarkersChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showToolTipsChanged` instead
    ///
    pub const ShowToolTipsChanged = showToolTipsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTipsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _showToolTips: bool `
    ///
    pub fn showToolTipsChanged(self: QLegend, _showToolTips: bool) void {
        qtc.QLegend_ShowToolTipsChanged(@ptrCast(self.ptr), _showToolTips);
    }

    /// ### DEPRECATED: Use `onShowToolTipsChanged` instead
    ///
    pub const OnShowToolTipsChanged = onShowToolTipsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#showToolTipsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, showToolTips: bool) callconv(.c) void `
    ///
    pub fn onShowToolTipsChanged(self: QLegend, callback: *const fn (QLegend, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_ShowToolTipsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `markerShapeChanged` instead
    ///
    pub const MarkerShapeChanged = markerShapeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShapeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _shape: qlegend_enums.MarkerShape `
    ///
    pub fn markerShapeChanged(self: QLegend, _shape: i32) void {
        qtc.QLegend_MarkerShapeChanged(@ptrCast(self.ptr), @bitCast(_shape));
    }

    /// ### DEPRECATED: Use `onMarkerShapeChanged` instead
    ///
    pub const OnMarkerShapeChanged = onMarkerShapeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markerShapeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, shape: qlegend_enums.MarkerShape) callconv(.c) void `
    ///
    pub fn onMarkerShapeChanged(self: QLegend, callback: *const fn (QLegend, i32) callconv(.c) void) void {
        qtc.QLegend_Connect_MarkerShapeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `attachedToChartChanged` instead
    ///
    pub const AttachedToChartChanged = attachedToChartChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachedToChartChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` attachedToChart: bool `
    ///
    pub fn attachedToChartChanged(self: QLegend, attachedToChart: bool) void {
        qtc.QLegend_AttachedToChartChanged(@ptrCast(self.ptr), attachedToChart);
    }

    /// ### DEPRECATED: Use `onAttachedToChartChanged` instead
    ///
    pub const OnAttachedToChartChanged = onAttachedToChartChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#attachedToChartChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, attachedToChart: bool) callconv(.c) void `
    ///
    pub fn onAttachedToChartChanged(self: QLegend, callback: *const fn (QLegend, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_AttachedToChartChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `interactiveChanged` instead
    ///
    pub const InteractiveChanged = interactiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#interactiveChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` interactive: bool `
    ///
    pub fn interactiveChanged(self: QLegend, interactive: bool) void {
        qtc.QLegend_InteractiveChanged(@ptrCast(self.ptr), interactive);
    }

    /// ### DEPRECATED: Use `onInteractiveChanged` instead
    ///
    pub const OnInteractiveChanged = onInteractiveChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#interactiveChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, interactive: bool) callconv(.c) void `
    ///
    pub fn onInteractiveChanged(self: QLegend, callback: *const fn (QLegend, bool) callconv(.c) void) void {
        qtc.QLegend_Connect_InteractiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLegend.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLegend.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBackgroundVisible1` instead
    ///
    pub const SetBackgroundVisible1 = setBackgroundVisible1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` visible: bool `
    ///
    pub fn setBackgroundVisible1(self: QLegend, visible: bool) void {
        qtc.QLegend_SetBackgroundVisible1(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `markers1` instead
    ///
    pub const Markers1 = markers1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#markers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` series: QAbstractSeries `
    ///
    pub fn markers1(self: QLegend, allocator: std.mem.Allocator, series: anytype) []QLegendMarker {
        comptime _ = @TypeOf(series)._is_QAbstractSeries;
        const _arr: qtc.libqt_list = qtc.QLegend_Markers1(@ptrCast(self.ptr), @ptrCast(series.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLegendMarker, _arr.len) catch @panic("QLegend.markers1: Memory allocation failed");
        const _data_val: [*]QtC.QLegendMarker = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setReverseMarkers1` instead
    ///
    pub const SetReverseMarkers1 = setReverseMarkers1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#setReverseMarkers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _reverseMarkers: bool `
    ///
    pub fn setReverseMarkers1(self: QLegend, _reverseMarkers: bool) void {
        qtc.QLegend_SetReverseMarkers1(@ptrCast(self.ptr), _reverseMarkers);
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn layout(self: QLegend) QGraphicsLayout {
        return .{ .ptr = qtc.QGraphicsWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayout` instead
    ///
    pub const SetLayout = setLayout;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _layout: QGraphicsLayout `
    ///
    pub fn setLayout(self: QLegend, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QGraphicsLayout;
        qtc.QGraphicsWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `adjustSize` instead
    ///
    pub const AdjustSize = adjustSize;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn adjustSize(self: QLegend) void {
        qtc.QGraphicsWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QLegend) i32 {
        return qtc.QGraphicsWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QLegend, direction: i32) void {
        qtc.QGraphicsWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `unsetLayoutDirection` instead
    ///
    pub const UnsetLayoutDirection = unsetLayoutDirection;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn unsetLayoutDirection(self: QLegend) void {
        qtc.QGraphicsWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn style(self: QLegend) QStyle {
        return .{ .ptr = qtc.QGraphicsWidget_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QLegend, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QGraphicsWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn palette(self: QLegend) QPalette {
        return .{ .ptr = qtc.QGraphicsWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QLegend, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QGraphicsWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `autoFillBackground` instead
    ///
    pub const AutoFillBackground = autoFillBackground;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn autoFillBackground(self: QLegend) bool {
        return qtc.QGraphicsWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFillBackground` instead
    ///
    pub const SetAutoFillBackground = setAutoFillBackground;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QLegend, enabled: bool) void {
        qtc.QGraphicsWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn resize(self: QLegend, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsWidget_Resize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn resize2(self: QLegend, w: f64, h: f64) void {
        qtc.QGraphicsWidget_Resize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn size(self: QLegend) QSizeF {
        return .{ .ptr = qtc.QGraphicsWidget_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn setGeometry(self: QLegend, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsWidget_SetGeometry(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setGeometry2(self: QLegend, _x: f64, _y: f64, w: f64, h: f64) void {
        qtc.QGraphicsWidget_SetGeometry2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn rect(self: QLegend) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn setContentsMargins(self: QLegend, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn setContentsMargins2(self: QLegend, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getContentsMargins(self: QLegend, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `setWindowFrameMargins` instead
    ///
    pub const SetWindowFrameMargins = setWindowFrameMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` left: f64 `
    ///
    /// ` top: f64 `
    ///
    /// ` right: f64 `
    ///
    /// ` bottom: f64 `
    ///
    pub fn setWindowFrameMargins(self: QLegend, left: f64, top: f64, right: f64, bottom: f64) void {
        qtc.QGraphicsWidget_SetWindowFrameMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setWindowFrameMargins2` instead
    ///
    pub const SetWindowFrameMargins2 = setWindowFrameMargins2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` margins: QMarginsF `
    ///
    pub fn setWindowFrameMargins2(self: QLegend, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMarginsF;
        qtc.QGraphicsWidget_SetWindowFrameMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `getWindowFrameMargins` instead
    ///
    pub const GetWindowFrameMargins = getWindowFrameMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` left: *f64 `
    ///
    /// ` top: *f64 `
    ///
    /// ` right: *f64 `
    ///
    /// ` bottom: *f64 `
    ///
    pub fn getWindowFrameMargins(self: QLegend, left: *f64, top: *f64, right: *f64, bottom: *f64) void {
        qtc.QGraphicsWidget_GetWindowFrameMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `unsetWindowFrameMargins` instead
    ///
    pub const UnsetWindowFrameMargins = unsetWindowFrameMargins;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn unsetWindowFrameMargins(self: QLegend) void {
        qtc.QGraphicsWidget_UnsetWindowFrameMargins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowFrameGeometry` instead
    ///
    pub const WindowFrameGeometry = windowFrameGeometry;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn windowFrameGeometry(self: QLegend) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowFrameRect` instead
    ///
    pub const WindowFrameRect = windowFrameRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn windowFrameRect(self: QLegend) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_WindowFrameRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowFlags` instead
    ///
    pub const WindowFlags = windowFlags;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QLegend) i32 {
        return qtc.QGraphicsWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowType` instead
    ///
    pub const WindowType = windowType;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QLegend) i32 {
        return qtc.QGraphicsWidget_WindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFlags` instead
    ///
    pub const SetWindowFlags = setWindowFlags;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` wFlags: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QLegend, wFlags: i32) void {
        qtc.QGraphicsWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(wFlags));
    }

    /// ### DEPRECATED: Use `isActiveWindow` instead
    ///
    pub const IsActiveWindow = isActiveWindow;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isActiveWindow(self: QLegend) bool {
        return qtc.QGraphicsWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowTitle` instead
    ///
    pub const SetWindowTitle = setWindowTitle;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setWindowTitle(self: QLegend, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QGraphicsWidget_SetWindowTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `windowTitle` instead
    ///
    pub const WindowTitle = windowTitle;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QLegend, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLegend.windowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QLegend) i32 {
        return qtc.QGraphicsWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QLegend, policy: i32) void {
        qtc.QGraphicsWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `setTabOrder` instead
    ///
    pub const SetTabOrder = setTabOrder;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` first: QGraphicsWidget `
    ///
    /// ` second: QGraphicsWidget `
    ///
    pub fn setTabOrder(first: anytype, second: anytype) void {
        comptime _ = @TypeOf(first)._is_QGraphicsWidget;
        comptime _ = @TypeOf(second)._is_QGraphicsWidget;
        qtc.QGraphicsWidget_SetTabOrder(@ptrCast(first.ptr), @ptrCast(second.ptr));
    }

    /// ### DEPRECATED: Use `focusWidget` instead
    ///
    pub const FocusWidget = focusWidget;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn focusWidget(self: QLegend) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `grabShortcut` instead
    ///
    pub const GrabShortcut = grabShortcut;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` sequence: QKeySequence `
    ///
    pub fn grabShortcut(self: QLegend, sequence: anytype) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(sequence.ptr));
    }

    /// ### DEPRECATED: Use `releaseShortcut` instead
    ///
    pub const ReleaseShortcut = releaseShortcut;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QLegend, id: i32) void {
        qtc.QGraphicsWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled` instead
    ///
    pub const SetShortcutEnabled = setShortcutEnabled;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QLegend, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat` instead
    ///
    pub const SetShortcutAutoRepeat = setShortcutAutoRepeat;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QLegend, id: i32) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QLegend, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `addActions` instead
    ///
    pub const AddActions = addActions;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QLegend, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QGraphicsWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertActions` instead
    ///
    pub const InsertActions = insertActions;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QLegend, before: anytype, _actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QGraphicsWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QLegend, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QLegend, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QGraphicsWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QLegend, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QGraphicsWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QLegend.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QLegend, attribute: i32) void {
        qtc.QGraphicsWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QLegend, attribute: i32) bool {
        return qtc.QGraphicsWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn type0(self: QLegend) i32 {
        return qtc.QGraphicsWidget_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paintWindowFrame` instead
    ///
    pub const PaintWindowFrame = paintWindowFrame;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` painter: QPainter `
    ///
    /// ` option: QStyleOptionGraphicsItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn paintWindowFrame(self: QLegend, painter: anytype, option: anytype, widget: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(option)._is_QStyleOptionGraphicsItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsWidget_PaintWindowFrame(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(option.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn boundingRect(self: QLegend) QRectF {
        return .{ .ptr = qtc.QGraphicsWidget_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `shape` instead
    ///
    pub const Shape = shape;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn shape(self: QLegend) QPainterPath {
        return .{ .ptr = qtc.QGraphicsWidget_Shape(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `geometryChanged` instead
    ///
    pub const GeometryChanged = geometryChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn geometryChanged(self: QLegend) void {
        qtc.QGraphicsWidget_GeometryChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGeometryChanged` instead
    ///
    pub const OnGeometryChanged = onGeometryChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onGeometryChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_GeometryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged` instead
    ///
    pub const LayoutChanged = layoutChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn layoutChanged(self: QLegend) void {
        qtc.QGraphicsWidget_LayoutChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutChanged` instead
    ///
    pub const OnLayoutChanged = onLayoutChanged;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsWidget_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn close(self: QLegend) bool {
        return qtc.QGraphicsWidget_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabShortcut2` instead
    ///
    pub const GrabShortcut2 = grabShortcut2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` sequence: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QLegend, sequence: anytype, context: i32) i32 {
        comptime _ = @TypeOf(sequence)._is_QKeySequence;
        return qtc.QGraphicsWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(sequence.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled2` instead
    ///
    pub const SetShortcutEnabled2 = setShortcutEnabled2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn setShortcutEnabled2(self: QLegend, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat2` instead
    ///
    pub const SetShortcutAutoRepeat2 = setShortcutAutoRepeat2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` id: i32 `
    ///
    /// ` enabled: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QLegend, id: i32, enabled: bool) void {
        qtc.QGraphicsWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enabled);
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

    /// Inherited from QGraphicsWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` attribute: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QLegend, attribute: i32, on: bool) void {
        qtc.QGraphicsWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(attribute), on);
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QLegend, typeVal: i32) void {
        qtc.QGraphicsObject_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QLegend, typeVal: i32) void {
        qtc.QGraphicsObject_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `parentChanged` instead
    ///
    pub const ParentChanged = parentChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn parentChanged(self: QLegend) void {
        qtc.QGraphicsObject_ParentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onParentChanged` instead
    ///
    pub const OnParentChanged = onParentChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onParentChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ParentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `opacityChanged` instead
    ///
    pub const OpacityChanged = opacityChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn opacityChanged(self: QLegend) void {
        qtc.QGraphicsObject_OpacityChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpacityChanged` instead
    ///
    pub const OnOpacityChanged = onOpacityChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onOpacityChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_OpacityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn visibleChanged(self: QLegend) void {
        qtc.QGraphicsObject_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn enabledChanged(self: QLegend) void {
        qtc.QGraphicsObject_EnabledChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `xChanged` instead
    ///
    pub const XChanged = xChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn xChanged(self: QLegend) void {
        qtc.QGraphicsObject_XChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onXChanged` instead
    ///
    pub const OnXChanged = onXChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onXChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_XChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `yChanged` instead
    ///
    pub const YChanged = yChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn yChanged(self: QLegend) void {
        qtc.QGraphicsObject_YChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onYChanged` instead
    ///
    pub const OnYChanged = onYChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onYChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_YChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zChanged` instead
    ///
    pub const ZChanged = zChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn zChanged(self: QLegend) void {
        qtc.QGraphicsObject_ZChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZChanged` instead
    ///
    pub const OnZChanged = onZChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onZChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ZChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rotationChanged` instead
    ///
    pub const RotationChanged = rotationChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn rotationChanged(self: QLegend) void {
        qtc.QGraphicsObject_RotationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRotationChanged` instead
    ///
    pub const OnRotationChanged = onRotationChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onRotationChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_RotationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scaleChanged` instead
    ///
    pub const ScaleChanged = scaleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn scaleChanged(self: QLegend) void {
        qtc.QGraphicsObject_ScaleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScaleChanged` instead
    ///
    pub const OnScaleChanged = onScaleChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onScaleChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ScaleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childrenChanged` instead
    ///
    pub const ChildrenChanged = childrenChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn childrenChanged(self: QLegend) void {
        qtc.QGraphicsObject_ChildrenChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildrenChanged` instead
    ///
    pub const OnChildrenChanged = onChildrenChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onChildrenChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_ChildrenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widthChanged` instead
    ///
    pub const WidthChanged = widthChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn widthChanged(self: QLegend) void {
        qtc.QGraphicsObject_WidthChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidthChanged` instead
    ///
    pub const OnWidthChanged = onWidthChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onWidthChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_WidthChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightChanged` instead
    ///
    pub const HeightChanged = heightChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn heightChanged(self: QLegend) void {
        qtc.QGraphicsObject_HeightChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHeightChanged` instead
    ///
    pub const OnHeightChanged = onHeightChanged;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onHeightChanged(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
        qtc.QGraphicsObject_Connect_HeightChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

    /// Inherited from QGraphicsObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` _flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QLegend, typeVal: i32, _flags: i32) void {
        qtc.QGraphicsObject_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(_flags));
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
    /// ` self: QLegend `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QLegend, watched: anytype, _event: anytype) bool {
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
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QLegend, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLegend.objectName: Memory allocation failed");
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
    /// ` self: QLegend `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QLegend, name: []const u8) void {
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
    /// ` self: QLegend `
    ///
    pub fn isWidgetType(self: QLegend) bool {
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
    /// ` self: QLegend `
    ///
    pub fn isWindowType(self: QLegend) bool {
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
    /// ` self: QLegend `
    ///
    pub fn isQuickItemType(self: QLegend) bool {
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
    /// ` self: QLegend `
    ///
    pub fn signalsBlocked(self: QLegend) bool {
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
    /// ` self: QLegend `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QLegend, b: bool) bool {
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
    /// ` self: QLegend `
    ///
    pub fn thread(self: QLegend) QThread {
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
    /// ` self: QLegend `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QLegend, _thread: anytype) bool {
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
    /// ` self: QLegend `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QLegend, interval: i32) i32 {
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
    /// ` self: QLegend `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QLegend, time: i64) i32 {
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
    /// ` self: QLegend `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QLegend, id: i32) void {
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
    /// ` self: QLegend `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QLegend, id: i32) void {
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
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QLegend, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QLegend.children: Memory allocation failed");
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
    /// ` self: QLegend `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QLegend, _parent: anytype) void {
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
    /// ` self: QLegend `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QLegend, filterObj: anytype) void {
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
    /// ` self: QLegend `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QLegend, obj: anytype) void {
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
    /// ` self: QLegend `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QLegend, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QLegend `
    ///
    pub fn disconnect3(self: QLegend) bool {
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
    /// ` self: QLegend `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QLegend, receiver: anytype) bool {
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
    /// ` self: QLegend `
    ///
    pub fn dumpObjectTree(self: QLegend) void {
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
    /// ` self: QLegend `
    ///
    pub fn dumpObjectInfo(self: QLegend) void {
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
    /// ` self: QLegend `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QLegend, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QLegend `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QLegend, name: [:0]const u8) QVariant {
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
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QLegend, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QLegend.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QLegend.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QLegend `
    ///
    pub fn bindingStorage(self: QLegend) QBindingStorage {
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
    /// ` self: QLegend `
    ///
    pub fn bindingStorage2(self: QLegend) QBindingStorage {
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
    /// ` self: QLegend `
    ///
    pub fn destroyed(self: QLegend) void {
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
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QLegend, callback: *const fn (QLegend) callconv(.c) void) void {
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
    /// ` self: QLegend `
    ///
    pub fn parent(self: QLegend) QObject {
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
    /// ` self: QLegend `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QLegend, classname: [:0]const u8) bool {
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
    /// ` self: QLegend `
    ///
    pub fn deleteLater(self: QLegend) void {
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
    /// ` self: QLegend `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QLegend, interval: i32, timerType: i32) i32 {
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
    /// ` self: QLegend `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QLegend, time: i64, timerType: i32) i32 {
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
    /// ` self: QLegend `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QLegend, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QLegend `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QLegend, signal: [:0]const u8) bool {
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
    /// ` self: QLegend `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QLegend, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QLegend `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QLegend, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLegend `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QLegend, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLegend `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QLegend, param1: anytype) void {
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
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QLegend, callback: *const fn (QLegend, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scene` instead
    ///
    pub const Scene = scene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn scene(self: QLegend) QGraphicsScene {
        return .{ .ptr = qtc.QGraphicsItem_Scene(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentItem` instead
    ///
    pub const ParentItem = parentItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn parentItem(self: QLegend) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_ParentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelItem` instead
    ///
    pub const TopLevelItem = topLevelItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn topLevelItem(self: QLegend) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentObject` instead
    ///
    pub const ParentObject = parentObject;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn parentObject(self: QLegend) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ParentObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn parentWidget(self: QLegend) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelWidget` instead
    ///
    pub const TopLevelWidget = topLevelWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn topLevelWidget(self: QLegend) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn window(self: QLegend) QGraphicsWidget {
        return .{ .ptr = qtc.QGraphicsItem_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `panel` instead
    ///
    pub const Panel = panel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn panel(self: QLegend) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_Panel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentItem` instead
    ///
    pub const SetParentItem = setParentItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn setParentItem(self: QLegend, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetParentItem(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `childItems` instead
    ///
    pub const ChildItems = childItems;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childItems(self: QLegend, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_ChildItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QLegend.childItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isWidget` instead
    ///
    pub const IsWidget = isWidget;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isWidget(self: QLegend) bool {
        return qtc.QGraphicsItem_IsWidget(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindow` instead
    ///
    pub const IsWindow = isWindow;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isWindow(self: QLegend) bool {
        return qtc.QGraphicsItem_IsWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPanel` instead
    ///
    pub const IsPanel = isPanel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isPanel(self: QLegend) bool {
        return qtc.QGraphicsItem_IsPanel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toGraphicsObject` instead
    ///
    pub const ToGraphicsObject = toGraphicsObject;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn toGraphicsObject(self: QLegend) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toGraphicsObject2` instead
    ///
    pub const ToGraphicsObject2 = toGraphicsObject2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn toGraphicsObject2(self: QLegend) QGraphicsObject {
        return .{ .ptr = qtc.QGraphicsItem_ToGraphicsObject2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn group(self: QLegend) QGraphicsItemGroup {
        return .{ .ptr = qtc.QGraphicsItem_Group(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGroup` instead
    ///
    pub const SetGroup = setGroup;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _group: QGraphicsItemGroup `
    ///
    pub fn setGroup(self: QLegend, _group: anytype) void {
        comptime _ = @TypeOf(_group)._is_QGraphicsItemGroup;
        qtc.QGraphicsItem_SetGroup(@ptrCast(self.ptr), @ptrCast(_group.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn flags(self: QLegend) i32 {
        return qtc.QGraphicsItem_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlag` instead
    ///
    pub const SetFlag = setFlag;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn setFlag(self: QLegend, flag: i32) void {
        qtc.QGraphicsItem_SetFlag(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _flags: flag of qgraphicsitem_enums.GraphicsItemFlag `
    ///
    pub fn setFlags(self: QLegend, _flags: i32) void {
        qtc.QGraphicsItem_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `cacheMode` instead
    ///
    pub const CacheMode = cacheMode;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.CacheMode `
    ///
    pub fn cacheMode(self: QLegend) i32 {
        return qtc.QGraphicsItem_CacheMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCacheMode` instead
    ///
    pub const SetCacheMode = setCacheMode;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    pub fn setCacheMode(self: QLegend, mode: i32) void {
        qtc.QGraphicsItem_SetCacheMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `panelModality` instead
    ///
    pub const PanelModality = panelModality;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicsitem_enums.PanelModality `
    ///
    pub fn panelModality(self: QLegend) i32 {
        return qtc.QGraphicsItem_PanelModality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPanelModality` instead
    ///
    pub const SetPanelModality = setPanelModality;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _panelModality: qgraphicsitem_enums.PanelModality `
    ///
    pub fn setPanelModality(self: QLegend, _panelModality: i32) void {
        qtc.QGraphicsItem_SetPanelModality(@ptrCast(self.ptr), @bitCast(_panelModality));
    }

    /// ### DEPRECATED: Use `isBlockedByModalPanel` instead
    ///
    pub const IsBlockedByModalPanel = isBlockedByModalPanel;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isBlockedByModalPanel(self: QLegend) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QLegend, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QGraphicsItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLegend.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QLegend, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QGraphicsItem_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn cursor(self: QLegend) QCursor {
        return .{ .ptr = qtc.QGraphicsItem_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QLegend, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QGraphicsItem_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `hasCursor` instead
    ///
    pub const HasCursor = hasCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn hasCursor(self: QLegend) bool {
        return qtc.QGraphicsItem_HasCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn unsetCursor(self: QLegend) void {
        qtc.QGraphicsItem_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isVisible(self: QLegend) bool {
        return qtc.QGraphicsItem_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisibleTo` instead
    ///
    pub const IsVisibleTo = isVisibleTo;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _parent: QGraphicsItem `
    ///
    pub fn isVisibleTo(self: QLegend, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QLegend, visible: bool) void {
        qtc.QGraphicsItem_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn hide(self: QLegend) void {
        qtc.QGraphicsItem_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn show(self: QLegend) void {
        qtc.QGraphicsItem_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isEnabled(self: QLegend) bool {
        return qtc.QGraphicsItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QLegend, enabled: bool) void {
        qtc.QGraphicsItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isSelected(self: QLegend) bool {
        return qtc.QGraphicsItem_IsSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelected` instead
    ///
    pub const SetSelected = setSelected;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` selected: bool `
    ///
    pub fn setSelected(self: QLegend, selected: bool) void {
        qtc.QGraphicsItem_SetSelected(@ptrCast(self.ptr), selected);
    }

    /// ### DEPRECATED: Use `acceptDrops` instead
    ///
    pub const AcceptDrops = acceptDrops;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn acceptDrops(self: QLegend) bool {
        return qtc.QGraphicsItem_AcceptDrops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptDrops` instead
    ///
    pub const SetAcceptDrops = setAcceptDrops;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QLegend, on: bool) void {
        qtc.QGraphicsItem_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `opacity` instead
    ///
    pub const Opacity = opacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn opacity(self: QLegend) f64 {
        return qtc.QGraphicsItem_Opacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `effectiveOpacity` instead
    ///
    pub const EffectiveOpacity = effectiveOpacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn effectiveOpacity(self: QLegend) f64 {
        return qtc.QGraphicsItem_EffectiveOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOpacity` instead
    ///
    pub const SetOpacity = setOpacity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _opacity: f64 `
    ///
    pub fn setOpacity(self: QLegend, _opacity: f64) void {
        qtc.QGraphicsItem_SetOpacity(@ptrCast(self.ptr), @bitCast(_opacity));
    }

    /// ### DEPRECATED: Use `graphicsEffect` instead
    ///
    pub const GraphicsEffect = graphicsEffect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn graphicsEffect(self: QLegend) QGraphicsEffect {
        return .{ .ptr = qtc.QGraphicsItem_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsEffect` instead
    ///
    pub const SetGraphicsEffect = setGraphicsEffect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QLegend, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QGraphicsItem_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// ### DEPRECATED: Use `acceptedMouseButtons` instead
    ///
    pub const AcceptedMouseButtons = acceptedMouseButtons;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn acceptedMouseButtons(self: QLegend) i32 {
        return qtc.QGraphicsItem_AcceptedMouseButtons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptedMouseButtons` instead
    ///
    pub const SetAcceptedMouseButtons = setAcceptedMouseButtons;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setAcceptedMouseButtons(self: QLegend, buttons: i32) void {
        qtc.QGraphicsItem_SetAcceptedMouseButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

    /// ### DEPRECATED: Use `acceptHoverEvents` instead
    ///
    pub const AcceptHoverEvents = acceptHoverEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn acceptHoverEvents(self: QLegend) bool {
        return qtc.QGraphicsItem_AcceptHoverEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptHoverEvents` instead
    ///
    pub const SetAcceptHoverEvents = setAcceptHoverEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptHoverEvents(self: QLegend, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptHoverEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `acceptTouchEvents` instead
    ///
    pub const AcceptTouchEvents = acceptTouchEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn acceptTouchEvents(self: QLegend) bool {
        return qtc.QGraphicsItem_AcceptTouchEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptTouchEvents` instead
    ///
    pub const SetAcceptTouchEvents = setAcceptTouchEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAcceptTouchEvents(self: QLegend, enabled: bool) void {
        qtc.QGraphicsItem_SetAcceptTouchEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `filtersChildEvents` instead
    ///
    pub const FiltersChildEvents = filtersChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn filtersChildEvents(self: QLegend) bool {
        return qtc.QGraphicsItem_FiltersChildEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFiltersChildEvents` instead
    ///
    pub const SetFiltersChildEvents = setFiltersChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFiltersChildEvents(self: QLegend, enabled: bool) void {
        qtc.QGraphicsItem_SetFiltersChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `handlesChildEvents` instead
    ///
    pub const HandlesChildEvents = handlesChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn handlesChildEvents(self: QLegend) bool {
        return qtc.QGraphicsItem_HandlesChildEvents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHandlesChildEvents` instead
    ///
    pub const SetHandlesChildEvents = setHandlesChildEvents;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` enabled: bool `
    ///
    pub fn setHandlesChildEvents(self: QLegend, enabled: bool) void {
        qtc.QGraphicsItem_SetHandlesChildEvents(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isActive` instead
    ///
    pub const IsActive = isActive;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isActive(self: QLegend) bool {
        return qtc.QGraphicsItem_IsActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActive` instead
    ///
    pub const SetActive = setActive;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` active: bool `
    ///
    pub fn setActive(self: QLegend, active: bool) void {
        qtc.QGraphicsItem_SetActive(@ptrCast(self.ptr), active);
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn hasFocus(self: QLegend) bool {
        return qtc.QGraphicsItem_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn setFocus(self: QLegend) void {
        qtc.QGraphicsItem_SetFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn clearFocus(self: QLegend) void {
        qtc.QGraphicsItem_ClearFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `focusProxy` instead
    ///
    pub const FocusProxy = focusProxy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn focusProxy(self: QLegend) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFocusProxy` instead
    ///
    pub const SetFocusProxy = setFocusProxy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn setFocusProxy(self: QLegend, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        qtc.QGraphicsItem_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `focusItem` instead
    ///
    pub const FocusItem = focusItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn focusItem(self: QLegend) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `focusScopeItem` instead
    ///
    pub const FocusScopeItem = focusScopeItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn focusScopeItem(self: QLegend) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsItem_FocusScopeItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn grabMouse(self: QLegend) void {
        qtc.QGraphicsItem_GrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ungrabMouse` instead
    ///
    pub const UngrabMouse = ungrabMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn ungrabMouse(self: QLegend) void {
        qtc.QGraphicsItem_UngrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabKeyboard` instead
    ///
    pub const GrabKeyboard = grabKeyboard;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn grabKeyboard(self: QLegend) void {
        qtc.QGraphicsItem_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ungrabKeyboard` instead
    ///
    pub const UngrabKeyboard = ungrabKeyboard;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn ungrabKeyboard(self: QLegend) void {
        qtc.QGraphicsItem_UngrabKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn pos(self: QLegend) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn x(self: QLegend) f64 {
        return qtc.QGraphicsItem_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    pub fn setX(self: QLegend, _x: f64) void {
        qtc.QGraphicsItem_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn y(self: QLegend) f64 {
        return qtc.QGraphicsItem_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _y: f64 `
    ///
    pub fn setY(self: QLegend, _y: f64) void {
        qtc.QGraphicsItem_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn scenePos(self: QLegend) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QLegend, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsItem_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `setPos2` instead
    ///
    pub const SetPos2 = setPos2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn setPos2(self: QLegend, _x: f64, _y: f64) void {
        qtc.QGraphicsItem_SetPos2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `moveBy` instead
    ///
    pub const MoveBy = moveBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn moveBy(self: QLegend, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_MoveBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `ensureVisible` instead
    ///
    pub const EnsureVisible = ensureVisible;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn ensureVisible(self: QLegend) void {
        qtc.QGraphicsItem_EnsureVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ensureVisible2` instead
    ///
    pub const EnsureVisible2 = ensureVisible2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn ensureVisible2(self: QLegend, _x: f64, _y: f64, w: f64, h: f64) void {
        qtc.QGraphicsItem_EnsureVisible2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `transform` instead
    ///
    pub const Transform = transform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn transform(self: QLegend) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_Transform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sceneTransform` instead
    ///
    pub const SceneTransform = sceneTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn sceneTransform(self: QLegend) QTransform {
        return .{ .ptr = qtc.QGraphicsItem_SceneTransform(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deviceTransform` instead
    ///
    pub const DeviceTransform = deviceTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` viewportTransform: QTransform `
    ///
    pub fn deviceTransform(self: QLegend, viewportTransform: anytype) QTransform {
        comptime _ = @TypeOf(viewportTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_DeviceTransform(@ptrCast(self.ptr), @ptrCast(viewportTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `itemTransform` instead
    ///
    pub const ItemTransform = itemTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn itemTransform(self: QLegend, other: anytype) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransform` instead
    ///
    pub const SetTransform = setTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` matrix: QTransform `
    ///
    pub fn setTransform(self: QLegend, matrix: anytype) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform(@ptrCast(self.ptr), @ptrCast(matrix.ptr));
    }

    /// ### DEPRECATED: Use `resetTransform` instead
    ///
    pub const ResetTransform = resetTransform;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn resetTransform(self: QLegend) void {
        qtc.QGraphicsItem_ResetTransform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRotation` instead
    ///
    pub const SetRotation = setRotation;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` angle: f64 `
    ///
    pub fn setRotation(self: QLegend, angle: f64) void {
        qtc.QGraphicsItem_SetRotation(@ptrCast(self.ptr), @bitCast(angle));
    }

    /// ### DEPRECATED: Use `rotation` instead
    ///
    pub const Rotation = rotation;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn rotation(self: QLegend) f64 {
        return qtc.QGraphicsItem_Rotation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScale` instead
    ///
    pub const SetScale = setScale;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _scale: f64 `
    ///
    pub fn setScale(self: QLegend, _scale: f64) void {
        qtc.QGraphicsItem_SetScale(@ptrCast(self.ptr), @bitCast(_scale));
    }

    /// ### DEPRECATED: Use `scale` instead
    ///
    pub const Scale = scale;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn scale(self: QLegend) f64 {
        return qtc.QGraphicsItem_Scale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `transformations` instead
    ///
    pub const Transformations = transformations;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn transformations(self: QLegend, allocator: std.mem.Allocator) []QGraphicsTransform {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_Transformations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsTransform, _arr.len) catch @panic("QLegend.transformations: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsTransform = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setTransformations` instead
    ///
    pub const SetTransformations = setTransformations;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _transformations: []QGraphicsTransform `
    ///
    pub fn setTransformations(self: QLegend, _transformations: []QGraphicsTransform) void {
        const transformations_list = qtc.libqt_list{
            .len = _transformations.len,
            .data = @ptrCast(_transformations.ptr),
        };
        qtc.QGraphicsItem_SetTransformations(@ptrCast(self.ptr), transformations_list);
    }

    /// ### DEPRECATED: Use `transformOriginPoint` instead
    ///
    pub const TransformOriginPoint = transformOriginPoint;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn transformOriginPoint(self: QLegend) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_TransformOriginPoint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint` instead
    ///
    pub const SetTransformOriginPoint = setTransformOriginPoint;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` origin: QPointF `
    ///
    pub fn setTransformOriginPoint(self: QLegend, origin: anytype) void {
        comptime _ = @TypeOf(origin)._is_QPointF;
        qtc.QGraphicsItem_SetTransformOriginPoint(@ptrCast(self.ptr), @ptrCast(origin.ptr));
    }

    /// ### DEPRECATED: Use `setTransformOriginPoint2` instead
    ///
    pub const SetTransformOriginPoint2 = setTransformOriginPoint2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` ax: f64 `
    ///
    /// ` ay: f64 `
    ///
    pub fn setTransformOriginPoint2(self: QLegend, ax: f64, ay: f64) void {
        qtc.QGraphicsItem_SetTransformOriginPoint2(@ptrCast(self.ptr), @bitCast(ax), @bitCast(ay));
    }

    /// ### DEPRECATED: Use `advance` instead
    ///
    pub const Advance = advance;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` phase: i32 `
    ///
    pub fn advance(self: QLegend, phase: i32) void {
        qtc.QGraphicsItem_Advance(@ptrCast(self.ptr), @bitCast(phase));
    }

    /// ### DEPRECATED: Use `zValue` instead
    ///
    pub const ZValue = zValue;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn zValue(self: QLegend) f64 {
        return qtc.QGraphicsItem_ZValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setZValue` instead
    ///
    pub const SetZValue = setZValue;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` z: f64 `
    ///
    pub fn setZValue(self: QLegend, z: f64) void {
        qtc.QGraphicsItem_SetZValue(@ptrCast(self.ptr), @bitCast(z));
    }

    /// ### DEPRECATED: Use `stackBefore` instead
    ///
    pub const StackBefore = stackBefore;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` sibling: QGraphicsItem `
    ///
    pub fn stackBefore(self: QLegend, sibling: anytype) void {
        comptime _ = @TypeOf(sibling)._is_QGraphicsItem;
        qtc.QGraphicsItem_StackBefore(@ptrCast(self.ptr), @ptrCast(sibling.ptr));
    }

    /// ### DEPRECATED: Use `childrenBoundingRect` instead
    ///
    pub const ChildrenBoundingRect = childrenBoundingRect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn childrenBoundingRect(self: QLegend) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_ChildrenBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sceneBoundingRect` instead
    ///
    pub const SceneBoundingRect = sceneBoundingRect;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn sceneBoundingRect(self: QLegend) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_SceneBoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isClipped` instead
    ///
    pub const IsClipped = isClipped;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isClipped(self: QLegend) bool {
        return qtc.QGraphicsItem_IsClipped(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clipPath` instead
    ///
    pub const ClipPath = clipPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn clipPath(self: QLegend) QPainterPath {
        return .{ .ptr = qtc.QGraphicsItem_ClipPath(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` point: QPointF `
    ///
    pub fn contains(self: QLegend, point: anytype) bool {
        comptime _ = @TypeOf(point)._is_QPointF;
        return qtc.QGraphicsItem_Contains(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `collidesWithItem` instead
    ///
    pub const CollidesWithItem = collidesWithItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidesWithItem(self: QLegend, other: anytype, mode: i32) bool {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return qtc.QGraphicsItem_CollidesWithItem(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `collidesWithPath` instead
    ///
    pub const CollidesWithPath = collidesWithPath;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` path: QPainterPath `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidesWithPath(self: QLegend, path: anytype, mode: i32) bool {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return qtc.QGraphicsItem_CollidesWithPath(@ptrCast(self.ptr), @ptrCast(path.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `collidingItems` instead
    ///
    pub const CollidingItems = collidingItems;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn collidingItems(self: QLegend, allocator: std.mem.Allocator) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QLegend.collidingItems: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isObscured` instead
    ///
    pub const IsObscured = isObscured;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isObscured(self: QLegend) bool {
        return qtc.QGraphicsItem_IsObscured(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isObscured2` instead
    ///
    pub const IsObscured2 = isObscured2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn isObscured2(self: QLegend, _x: f64, _y: f64, w: f64, h: f64) bool {
        return qtc.QGraphicsItem_IsObscured2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `isObscuredBy` instead
    ///
    pub const IsObscuredBy = isObscuredBy;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    pub fn isObscuredBy(self: QLegend, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsObscuredBy(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `opaqueArea` instead
    ///
    pub const OpaqueArea = opaqueArea;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn opaqueArea(self: QLegend) QPainterPath {
        return .{ .ptr = qtc.QGraphicsItem_OpaqueArea(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRegion` instead
    ///
    pub const BoundingRegion = boundingRegion;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` itemToDeviceTransform: QTransform `
    ///
    pub fn boundingRegion(self: QLegend, itemToDeviceTransform: anytype) QRegion {
        comptime _ = @TypeOf(itemToDeviceTransform)._is_QTransform;
        return .{ .ptr = qtc.QGraphicsItem_BoundingRegion(@ptrCast(self.ptr), @ptrCast(itemToDeviceTransform.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRegionGranularity` instead
    ///
    pub const BoundingRegionGranularity = boundingRegionGranularity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn boundingRegionGranularity(self: QLegend) f64 {
        return qtc.QGraphicsItem_BoundingRegionGranularity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBoundingRegionGranularity` instead
    ///
    pub const SetBoundingRegionGranularity = setBoundingRegionGranularity;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` granularity: f64 `
    ///
    pub fn setBoundingRegionGranularity(self: QLegend, granularity: f64) void {
        qtc.QGraphicsItem_SetBoundingRegionGranularity(@ptrCast(self.ptr), @bitCast(granularity));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn update(self: QLegend) void {
        qtc.QGraphicsItem_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` width: f64 `
    ///
    /// ` height: f64 `
    ///
    pub fn update2(self: QLegend, _x: f64, _y: f64, width: f64, height: f64) void {
        qtc.QGraphicsItem_Update2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    pub fn scroll(self: QLegend, dx: f64, dy: f64) void {
        qtc.QGraphicsItem_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `mapToItem` instead
    ///
    pub const MapToItem = mapToItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToItem(self: QLegend, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent` instead
    ///
    pub const MapToParent = mapToParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToParent(self: QLegend, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToScene` instead
    ///
    pub const MapToScene = mapToScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapToScene(self: QLegend, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem` instead
    ///
    pub const MapRectToItem = mapRectToItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToItem(self: QLegend, item: anytype, _rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToParent` instead
    ///
    pub const MapRectToParent = mapRectToParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToParent(self: QLegend, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene` instead
    ///
    pub const MapRectToScene = mapRectToScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectToScene(self: QLegend, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem4` instead
    ///
    pub const MapToItem4 = mapToItem4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToItem4(self: QLegend, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent4` instead
    ///
    pub const MapToParent4 = mapToParent4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToParent4(self: QLegend, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToScene4` instead
    ///
    pub const MapToScene4 = mapToScene4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapToScene4(self: QLegend, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapToScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem` instead
    ///
    pub const MapFromItem = mapFromItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromItem(self: QLegend, item: anytype, point: anytype) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent` instead
    ///
    pub const MapFromParent = mapFromParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromParent(self: QLegend, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene` instead
    ///
    pub const MapFromScene = mapFromScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` point: QPointF `
    ///
    pub fn mapFromScene(self: QLegend, point: anytype) QPointF {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem` instead
    ///
    pub const MapRectFromItem = mapRectFromItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromItem(self: QLegend, item: anytype, _rect: anytype) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromParent` instead
    ///
    pub const MapRectFromParent = mapRectFromParent;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromParent(self: QLegend, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene` instead
    ///
    pub const MapRectFromScene = mapRectFromScene;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn mapRectFromScene(self: QLegend, _rect: anytype) QRectF {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene(@ptrCast(self.ptr), @ptrCast(_rect.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromItem4` instead
    ///
    pub const MapFromItem4 = mapFromItem4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromItem4(self: QLegend, item: anytype, path: anytype) QPainterPath {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem4(@ptrCast(self.ptr), @ptrCast(item.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent4` instead
    ///
    pub const MapFromParent4 = mapFromParent4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromParent4(self: QLegend, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromScene4` instead
    ///
    pub const MapFromScene4 = mapFromScene4;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` path: QPainterPath `
    ///
    pub fn mapFromScene4(self: QLegend, path: anytype) QPainterPath {
        comptime _ = @TypeOf(path)._is_QPainterPath;
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene4(@ptrCast(self.ptr), @ptrCast(path.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToItem5` instead
    ///
    pub const MapToItem5 = mapToItem5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToItem5(self: QLegend, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapToItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToParent5` instead
    ///
    pub const MapToParent5 = mapToParent5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToParent5(self: QLegend, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToParent5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapToScene5` instead
    ///
    pub const MapToScene5 = mapToScene5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapToScene5(self: QLegend, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapToScene5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapRectToItem2` instead
    ///
    pub const MapRectToItem2 = mapRectToItem2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToItem2(self: QLegend, item: anytype, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectToParent2` instead
    ///
    pub const MapRectToParent2 = mapRectToParent2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToParent2(self: QLegend, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToParent2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectToScene2` instead
    ///
    pub const MapRectToScene2 = mapRectToScene2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectToScene2(self: QLegend, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectToScene2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapFromItem5` instead
    ///
    pub const MapFromItem5 = mapFromItem5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromItem5(self: QLegend, item: anytype, _x: f64, _y: f64) QPointF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapFromItem5(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromParent5` instead
    ///
    pub const MapFromParent5 = mapFromParent5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromParent5(self: QLegend, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromParent5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapFromScene5` instead
    ///
    pub const MapFromScene5 = mapFromScene5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    pub fn mapFromScene5(self: QLegend, _x: f64, _y: f64) QPointF {
        return .{ .ptr = qtc.QGraphicsItem_MapFromScene5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `mapRectFromItem2` instead
    ///
    pub const MapRectFromItem2 = mapRectFromItem2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` item: QGraphicsItem `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromItem2(self: QLegend, item: anytype, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        comptime _ = @TypeOf(item)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectFromParent2` instead
    ///
    pub const MapRectFromParent2 = mapRectFromParent2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromParent2(self: QLegend, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromParent2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `mapRectFromScene2` instead
    ///
    pub const MapRectFromScene2 = mapRectFromScene2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn mapRectFromScene2(self: QLegend, _x: f64, _y: f64, w: f64, h: f64) QRectF {
        return .{ .ptr = qtc.QGraphicsItem_MapRectFromScene2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h)) };
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` child: QGraphicsItem `
    ///
    pub fn isAncestorOf(self: QLegend, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QGraphicsItem;
        return qtc.QGraphicsItem_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `commonAncestorItem` instead
    ///
    pub const CommonAncestorItem = commonAncestorItem;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` other: QGraphicsItem `
    ///
    pub fn commonAncestorItem(self: QLegend, other: anytype) QGraphicsItem {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_CommonAncestorItem(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `isUnderMouse` instead
    ///
    pub const IsUnderMouse = isUnderMouse;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isUnderMouse(self: QLegend) bool {
        return qtc.QGraphicsItem_IsUnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` key: i32 `
    ///
    pub fn data(self: QLegend, key: i32) QVariant {
        return .{ .ptr = qtc.QGraphicsItem_Data(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` key: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setData(self: QLegend, key: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QGraphicsItem_SetData(@ptrCast(self.ptr), @bitCast(key), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QLegend) i32 {
        return qtc.QGraphicsItem_InputMethodHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputMethodHints` instead
    ///
    pub const SetInputMethodHints = setInputMethodHints;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QLegend, hints: i32) void {
        qtc.QGraphicsItem_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `installSceneEventFilter` instead
    ///
    pub const InstallSceneEventFilter = installSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn installSceneEventFilter(self: QLegend, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_InstallSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// ### DEPRECATED: Use `removeSceneEventFilter` instead
    ///
    pub const RemoveSceneEventFilter = removeSceneEventFilter;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` filterItem: QGraphicsItem `
    ///
    pub fn removeSceneEventFilter(self: QLegend, filterItem: anytype) void {
        comptime _ = @TypeOf(filterItem)._is_QGraphicsItem;
        qtc.QGraphicsItem_RemoveSceneEventFilter(@ptrCast(self.ptr), @ptrCast(filterItem.ptr));
    }

    /// ### DEPRECATED: Use `setFlag2` instead
    ///
    pub const SetFlag2 = setFlag2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` flag: qgraphicsitem_enums.GraphicsItemFlag `
    ///
    /// ` enabled: bool `
    ///
    pub fn setFlag2(self: QLegend, flag: i32, enabled: bool) void {
        qtc.QGraphicsItem_SetFlag2(@ptrCast(self.ptr), @bitCast(flag), enabled);
    }

    /// ### DEPRECATED: Use `setCacheMode2` instead
    ///
    pub const SetCacheMode2 = setCacheMode2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` mode: qgraphicsitem_enums.CacheMode `
    ///
    /// ` cacheSize: QSize `
    ///
    pub fn setCacheMode2(self: QLegend, mode: i32, cacheSize: anytype) void {
        comptime _ = @TypeOf(cacheSize)._is_QSize;
        qtc.QGraphicsItem_SetCacheMode2(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(cacheSize.ptr));
    }

    /// ### DEPRECATED: Use `isBlockedByModalPanel1` instead
    ///
    pub const IsBlockedByModalPanel1 = isBlockedByModalPanel1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` blockingPanel: *QGraphicsItem.ptr `
    ///
    pub fn isBlockedByModalPanel1(self: QLegend, blockingPanel: *?*anyopaque) bool {
        return qtc.QGraphicsItem_IsBlockedByModalPanel1(@ptrCast(self.ptr), @ptrCast(blockingPanel));
    }

    /// ### DEPRECATED: Use `setFocus1` instead
    ///
    pub const SetFocus1 = setFocus1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` focusReason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus1(self: QLegend, focusReason: i32) void {
        qtc.QGraphicsItem_SetFocus1(@ptrCast(self.ptr), @bitCast(focusReason));
    }

    /// ### DEPRECATED: Use `ensureVisible1` instead
    ///
    pub const EnsureVisible1 = ensureVisible1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn ensureVisible1(self: QLegend, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible1(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `ensureVisible22` instead
    ///
    pub const EnsureVisible22 = ensureVisible22;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn ensureVisible22(self: QLegend, _rect: anytype, xmargin: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible22(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(xmargin));
    }

    /// ### DEPRECATED: Use `ensureVisible3` instead
    ///
    pub const EnsureVisible3 = ensureVisible3;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn ensureVisible3(self: QLegend, _rect: anytype, xmargin: i32, ymargin: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_EnsureVisible3(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `ensureVisible5` instead
    ///
    pub const EnsureVisible5 = ensureVisible5;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    pub fn ensureVisible5(self: QLegend, _x: f64, _y: f64, w: f64, h: f64, xmargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible5(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h), @bitCast(xmargin));
    }

    /// ### DEPRECATED: Use `ensureVisible6` instead
    ///
    pub const EnsureVisible6 = ensureVisible6;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _x: f64 `
    ///
    /// ` _y: f64 `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    /// ` xmargin: i32 `
    ///
    /// ` ymargin: i32 `
    ///
    pub fn ensureVisible6(self: QLegend, _x: f64, _y: f64, w: f64, h: f64, xmargin: i32, ymargin: i32) void {
        qtc.QGraphicsItem_EnsureVisible6(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `itemTransform2` instead
    ///
    pub const ItemTransform2 = itemTransform2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` other: QGraphicsItem `
    ///
    /// ` ok: *bool `
    ///
    pub fn itemTransform2(self: QLegend, other: anytype, ok: *bool) QTransform {
        comptime _ = @TypeOf(other)._is_QGraphicsItem;
        return .{ .ptr = qtc.QGraphicsItem_ItemTransform2(@ptrCast(self.ptr), @ptrCast(other.ptr), @ptrCast(ok)) };
    }

    /// ### DEPRECATED: Use `setTransform2` instead
    ///
    pub const SetTransform2 = setTransform2;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` matrix: QTransform `
    ///
    /// ` combine: bool `
    ///
    pub fn setTransform2(self: QLegend, matrix: anytype, combine: bool) void {
        comptime _ = @TypeOf(matrix)._is_QTransform;
        qtc.QGraphicsItem_SetTransform2(@ptrCast(self.ptr), @ptrCast(matrix.ptr), combine);
    }

    /// ### DEPRECATED: Use `collidingItems1` instead
    ///
    pub const CollidingItems1 = collidingItems1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qnamespace_enums.ItemSelectionMode `
    ///
    pub fn collidingItems1(self: QLegend, allocator: std.mem.Allocator, mode: i32) []QGraphicsItem {
        const _arr: qtc.libqt_list = qtc.QGraphicsItem_CollidingItems1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGraphicsItem, _arr.len) catch @panic("QLegend.collidingItems1: Memory allocation failed");
        const _data_val: [*]QtC.QGraphicsItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `isObscured1` instead
    ///
    pub const IsObscured1 = isObscured1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn isObscured1(self: QLegend, _rect: anytype) bool {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        return qtc.QGraphicsItem_IsObscured1(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `update1` instead
    ///
    pub const Update1 = update1;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn update1(self: QLegend, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_Update1(@ptrCast(self.ptr), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `scroll3` instead
    ///
    pub const Scroll3 = scroll3;

    /// Inherited from QGraphicsItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` dx: f64 `
    ///
    /// ` dy: f64 `
    ///
    /// ` _rect: QRectF `
    ///
    pub fn scroll3(self: QLegend, dx: f64, dy: f64, _rect: anytype) void {
        comptime _ = @TypeOf(_rect)._is_QRectF;
        qtc.QGraphicsItem_Scroll3(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(_rect.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` policy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QLegend, policy: anytype) void {
        comptime _ = @TypeOf(policy)._is_QSizePolicy;
        qtc.QGraphicsLayoutItem_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(policy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QLegend, hPolicy: i32, vPolicy: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn sizePolicy(self: QLegend) QSizePolicy {
        return .{ .ptr = qtc.QGraphicsLayoutItem_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setMinimumSize(self: QLegend, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMinimumSize2(self: QLegend, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn minimumSize(self: QLegend) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` width: f64 `
    ///
    pub fn setMinimumWidth(self: QLegend, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn minimumWidth(self: QLegend) f64 {
        return qtc.QGraphicsLayoutItem_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` height: f64 `
    ///
    pub fn setMinimumHeight(self: QLegend, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn minimumHeight(self: QLegend) f64 {
        return qtc.QGraphicsLayoutItem_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize` instead
    ///
    pub const SetPreferredSize = setPreferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setPreferredSize(self: QLegend, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetPreferredSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredSize2` instead
    ///
    pub const SetPreferredSize2 = setPreferredSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setPreferredSize2(self: QLegend, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `preferredSize` instead
    ///
    pub const PreferredSize = preferredSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn preferredSize(self: QLegend) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_PreferredSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPreferredWidth` instead
    ///
    pub const SetPreferredWidth = setPreferredWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` width: f64 `
    ///
    pub fn setPreferredWidth(self: QLegend, width: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `preferredWidth` instead
    ///
    pub const PreferredWidth = preferredWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn preferredWidth(self: QLegend) f64 {
        return qtc.QGraphicsLayoutItem_PreferredWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreferredHeight` instead
    ///
    pub const SetPreferredHeight = setPreferredHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` height: f64 `
    ///
    pub fn setPreferredHeight(self: QLegend, height: f64) void {
        qtc.QGraphicsLayoutItem_SetPreferredHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `preferredHeight` instead
    ///
    pub const PreferredHeight = preferredHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn preferredHeight(self: QLegend) f64 {
        return qtc.QGraphicsLayoutItem_PreferredHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _size: QSizeF `
    ///
    pub fn setMaximumSize(self: QLegend, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSizeF;
        qtc.QGraphicsLayoutItem_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` w: f64 `
    ///
    /// ` h: f64 `
    ///
    pub fn setMaximumSize2(self: QLegend, w: f64, h: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn maximumSize(self: QLegend) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` width: f64 `
    ///
    pub fn setMaximumWidth(self: QLegend, width: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn maximumWidth(self: QLegend) f64 {
        return qtc.QGraphicsLayoutItem_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` height: f64 `
    ///
    pub fn setMaximumHeight(self: QLegend, height: f64) void {
        qtc.QGraphicsLayoutItem_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn maximumHeight(self: QLegend) f64 {
        return qtc.QGraphicsLayoutItem_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn geometry(self: QLegend) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn contentsRect(self: QLegend) QRectF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `effectiveSizeHint` instead
    ///
    pub const EffectiveSizeHint = effectiveSizeHint;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    pub fn effectiveSizeHint(self: QLegend, which: i32) QSizeF {
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isEmpty(self: QLegend) bool {
        return qtc.QGraphicsLayoutItem_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parentLayoutItem` instead
    ///
    pub const ParentLayoutItem = parentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn parentLayoutItem(self: QLegend) QGraphicsLayoutItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_ParentLayoutItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setParentLayoutItem` instead
    ///
    pub const SetParentLayoutItem = setParentLayoutItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` _parent: QGraphicsLayoutItem `
    ///
    pub fn setParentLayoutItem(self: QLegend, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QGraphicsLayoutItem;
        qtc.QGraphicsLayoutItem_SetParentLayoutItem(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `isLayout` instead
    ///
    pub const IsLayout = isLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn isLayout(self: QLegend) bool {
        return qtc.QGraphicsLayoutItem_IsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `graphicsItem` instead
    ///
    pub const GraphicsItem = graphicsItem;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn graphicsItem(self: QLegend) QGraphicsItem {
        return .{ .ptr = qtc.QGraphicsLayoutItem_GraphicsItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `ownedByLayout` instead
    ///
    pub const OwnedByLayout = ownedByLayout;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    pub fn ownedByLayout(self: QLegend) bool {
        return qtc.QGraphicsLayoutItem_OwnedByLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy3` instead
    ///
    pub const SetSizePolicy3 = setSizePolicy3;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` hPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` vPolicy: qsizepolicy_enums.Policy `
    ///
    /// ` controlType: qsizepolicy_enums.ControlType `
    ///
    pub fn setSizePolicy3(self: QLegend, hPolicy: i32, vPolicy: i32, controlType: i32) void {
        qtc.QGraphicsLayoutItem_SetSizePolicy3(@ptrCast(self.ptr), @bitCast(hPolicy), @bitCast(vPolicy), @bitCast(controlType));
    }

    /// ### DEPRECATED: Use `effectiveSizeHint2` instead
    ///
    pub const EffectiveSizeHint2 = effectiveSizeHint2;

    /// Inherited from QGraphicsLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLegend `
    ///
    /// ` which: qnamespace_enums.SizeHint `
    ///
    /// ` constraint: QSizeF `
    ///
    pub fn effectiveSizeHint2(self: QLegend, which: i32, constraint: anytype) QSizeF {
        comptime _ = @TypeOf(constraint)._is_QSizeF;
        return .{ .ptr = qtc.QGraphicsLayoutItem_EffectiveSizeHint2(@ptrCast(self.ptr), @bitCast(which), @ptrCast(constraint.ptr)) };
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
    /// ` self: QLegend `
    ///
    /// ` callback: *const fn (self: QLegend, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QLegend, callback: *const fn (QLegend, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#dtor.QLegend)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLegend `
    ///
    pub fn delete(self: QLegend) void {
        qtc.QLegend_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlegend-qtcharts.html#public-types)
pub const enums = struct {
    pub const MarkerShape = enum(i32) {
        pub const MarkerShapeDefault: i32 = 0;
        pub const MarkerShapeRectangle: i32 = 1;
        pub const MarkerShapeCircle: i32 = 2;
        pub const MarkerShapeFromSeries: i32 = 3;
        pub const MarkerShapeRotatedRectangle: i32 = 4;
        pub const MarkerShapeTriangle: i32 = 5;
        pub const MarkerShapeStar: i32 = 6;
        pub const MarkerShapePentagon: i32 = 7;
    };
};
