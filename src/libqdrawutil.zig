const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QMargins = @import("libqt6").QMargins;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const qdrawutil_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html)
pub const qdrawutil_h = extern struct {
    /// ### DEPRECATED: Use `qDrawShadeLine` instead
    ///
    pub const QDrawShadeLine = qDrawShadeLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadeLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x1: i32 `
    ///
    /// ` y1: i32 `
    ///
    /// ` x2: i32 `
    ///
    /// ` y2: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn qDrawShadeLine(p: anytype, x1: i32, y1: i32, x2: i32, y2: i32, pal: anytype, sunken: bool, lineWidth: i32, midLineWidth: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.qdrawutil_h_QDrawShadeLine(@ptrCast(p.ptr), @bitCast(x1), @bitCast(y1), @bitCast(x2), @bitCast(y2), @ptrCast(pal.ptr), sunken, @bitCast(lineWidth), @bitCast(midLineWidth));
    }

    /// ### DEPRECATED: Use `qDrawShadeLine2` instead
    ///
    pub const QDrawShadeLine2 = qDrawShadeLine2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadeLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` p1: QPoint `
    ///
    /// ` p2: QPoint `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn qDrawShadeLine2(p: anytype, p1: anytype, p2: anytype, pal: anytype, sunken: bool, lineWidth: i32, midLineWidth: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(p1)._is_QPoint;
        comptime _ = @TypeOf(p2)._is_QPoint;
        comptime _ = @TypeOf(pal)._is_QPalette;
        qtc.qdrawutil_h_QDrawShadeLine2(@ptrCast(p.ptr), @ptrCast(p1.ptr), @ptrCast(p2.ptr), @ptrCast(pal.ptr), sunken, @bitCast(lineWidth), @bitCast(midLineWidth));
    }

    /// ### DEPRECATED: Use `qDrawShadeRect` instead
    ///
    pub const QDrawShadeRect = qDrawShadeRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadeRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` midLineWidth: i32 `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawShadeRect(p: anytype, x: i32, y: i32, w: i32, h: i32, pal: anytype, sunken: bool, lineWidth: i32, midLineWidth: i32, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pal)._is_QPalette;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawShadeRect(@ptrCast(p.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pal.ptr), sunken, @bitCast(lineWidth), @bitCast(midLineWidth), @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawShadeRect2` instead
    ///
    pub const QDrawShadeRect2 = qDrawShadeRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadeRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` midLineWidth: i32 `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawShadeRect2(p: anytype, r: anytype, pal: anytype, sunken: bool, lineWidth: i32, midLineWidth: i32, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawShadeRect2(@ptrCast(p.ptr), @ptrCast(r.ptr), @ptrCast(pal.ptr), sunken, @bitCast(lineWidth), @bitCast(midLineWidth), @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawShadePanel` instead
    ///
    pub const QDrawShadePanel = qDrawShadePanel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadePanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawShadePanel(p: anytype, x: i32, y: i32, w: i32, h: i32, pal: anytype, sunken: bool, lineWidth: i32, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pal)._is_QPalette;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawShadePanel(@ptrCast(p.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pal.ptr), sunken, @bitCast(lineWidth), @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawShadePanel2` instead
    ///
    pub const QDrawShadePanel2 = qDrawShadePanel2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawShadePanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawShadePanel2(p: anytype, r: anytype, pal: anytype, sunken: bool, lineWidth: i32, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawShadePanel2(@ptrCast(p.ptr), @ptrCast(r.ptr), @ptrCast(pal.ptr), sunken, @bitCast(lineWidth), @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawWinButton` instead
    ///
    pub const QDrawWinButton = qDrawWinButton;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawWinButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawWinButton(p: anytype, x: i32, y: i32, w: i32, h: i32, pal: anytype, sunken: bool, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pal)._is_QPalette;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawWinButton(@ptrCast(p.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pal.ptr), sunken, @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawWinButton2` instead
    ///
    pub const QDrawWinButton2 = qDrawWinButton2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawWinButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawWinButton2(p: anytype, r: anytype, pal: anytype, sunken: bool, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawWinButton2(@ptrCast(p.ptr), @ptrCast(r.ptr), @ptrCast(pal.ptr), sunken, @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawWinPanel` instead
    ///
    pub const QDrawWinPanel = qDrawWinPanel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawWinPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawWinPanel(p: anytype, x: i32, y: i32, w: i32, h: i32, pal: anytype, sunken: bool, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pal)._is_QPalette;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawWinPanel(@ptrCast(p.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(pal.ptr), sunken, @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawWinPanel2` instead
    ///
    pub const QDrawWinPanel2 = qDrawWinPanel2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawWinPanel)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` pal: QPalette `
    ///
    /// ` sunken: bool `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawWinPanel2(p: anytype, r: anytype, pal: anytype, sunken: bool, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(pal)._is_QPalette;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawWinPanel2(@ptrCast(p.ptr), @ptrCast(r.ptr), @ptrCast(pal.ptr), sunken, @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawPlainRect` instead
    ///
    pub const QDrawPlainRect = qDrawPlainRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawPlainRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` param6: QColor `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawPlainRect(p: anytype, x: i32, y: i32, w: i32, h: i32, param6: anytype, lineWidth: i32, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(param6)._is_QColor;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawPlainRect(@ptrCast(p.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @ptrCast(param6.ptr), @bitCast(lineWidth), @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawPlainRect2` instead
    ///
    pub const QDrawPlainRect2 = qDrawPlainRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawPlainRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` r: QRect `
    ///
    /// ` param3: QColor `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawPlainRect2(p: anytype, r: anytype, param3: anytype, lineWidth: i32, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(r)._is_QRect;
        comptime _ = @TypeOf(param3)._is_QColor;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawPlainRect2(@ptrCast(p.ptr), @ptrCast(r.ptr), @ptrCast(param3.ptr), @bitCast(lineWidth), @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawPlainRoundedRect` instead
    ///
    pub const QDrawPlainRoundedRect = qDrawPlainRoundedRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawPlainRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` p: QPainter `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` rx: f64 `
    ///
    /// ` ry: f64 `
    ///
    /// ` param8: QColor `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawPlainRoundedRect(p: anytype, x: i32, y: i32, w: i32, h: i32, rx: f64, ry: f64, param8: anytype, lineWidth: i32, fill: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(param8)._is_QColor;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawPlainRoundedRect(@ptrCast(p.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(rx), @bitCast(ry), @ptrCast(param8.ptr), @bitCast(lineWidth), @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawPlainRoundedRect2` instead
    ///
    pub const QDrawPlainRoundedRect2 = qDrawPlainRoundedRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawPlainRoundedRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` rx: f64 `
    ///
    /// ` ry: f64 `
    ///
    /// ` lineColor: QColor `
    ///
    /// ` lineWidth: i32 `
    ///
    /// ` fill: QBrush `
    ///
    pub fn qDrawPlainRoundedRect2(painter: anytype, rect: anytype, rx: f64, ry: f64, lineColor: anytype, lineWidth: i32, fill: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(lineColor)._is_QColor;
        comptime _ = @TypeOf(fill)._is_QBrush;
        qtc.qdrawutil_h_QDrawPlainRoundedRect2(@ptrCast(painter.ptr), @ptrCast(rect.ptr), @bitCast(rx), @bitCast(ry), @ptrCast(lineColor.ptr), @bitCast(lineWidth), @ptrCast(fill.ptr));
    }

    /// ### DEPRECATED: Use `qDrawBorderPixmap` instead
    ///
    pub const QDrawBorderPixmap = qDrawBorderPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawBorderPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` targetMargins: QMargins `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` sourceRect: QRect `
    ///
    /// ` sourceMargins: QMargins `
    ///
    /// ` rules: QTileRules `
    ///
    /// ` hints: flag of qdrawutil_enums.DrawingHint `
    ///
    pub fn qDrawBorderPixmap(painter: anytype, targetRect: anytype, targetMargins: anytype, pixmap: anytype, sourceRect: anytype, sourceMargins: anytype, rules: anytype, hints: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(targetMargins)._is_QMargins;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        comptime _ = @TypeOf(sourceMargins)._is_QMargins;
        comptime _ = @TypeOf(rules)._is_QTileRules;
        qtc.qdrawutil_h_QDrawBorderPixmap(@ptrCast(painter.ptr), @ptrCast(targetRect.ptr), @ptrCast(targetMargins.ptr), @ptrCast(pixmap.ptr), @ptrCast(sourceRect.ptr), @ptrCast(sourceMargins.ptr), @ptrCast(rules.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `qDrawBorderPixmap2` instead
    ///
    pub const QDrawBorderPixmap2 = qDrawBorderPixmap2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil-h.html#qDrawBorderPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` painter: QPainter `
    ///
    /// ` target: QRect `
    ///
    /// ` margins: QMargins `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn qDrawBorderPixmap2(painter: anytype, target: anytype, margins: anytype, pixmap: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(target)._is_QRect;
        comptime _ = @TypeOf(margins)._is_QMargins;
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.qdrawutil_h_QDrawBorderPixmap2(@ptrCast(painter.ptr), @ptrCast(target.ptr), @ptrCast(margins.ptr), @ptrCast(pixmap.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)
pub const QTileRules = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTileRules,

    pub const _is_QTileRules = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTileRules `
    ///
    pub fn new(other: anytype) QTileRules {
        comptime _ = @TypeOf(other)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTileRules object and invalidate the source QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTileRules `
    ///
    pub fn new2(other: anytype) QTileRules {
        comptime _ = @TypeOf(other)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` horizontalRule: qnamespace_enums.TileRule `
    ///
    /// ` verticalRule: qnamespace_enums.TileRule `
    ///
    pub fn new3(horizontalRule: i32, verticalRule: i32) QTileRules {
        return .{ .ptr = qtc.QTileRules_new3(@bitCast(horizontalRule), @bitCast(verticalRule)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTileRules object in C++ memory
    ///
    pub fn new4() QTileRules {
        return .{ .ptr = qtc.QTileRules_new4() };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTileRules `
    ///
    pub fn new5(param1: anytype) QTileRules {
        comptime _ = @TypeOf(param1)._is_QTileRules;
        return .{ .ptr = qtc.QTileRules_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QTileRules object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rule: qnamespace_enums.TileRule `
    ///
    pub fn new6(rule: i32) QTileRules {
        return .{ .ptr = qtc.QTileRules_new6(@bitCast(rule)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTileRules `
    ///
    /// ` other: QTileRules `
    ///
    pub fn copyAssign(self: QTileRules, other: QTileRules) void {
        qtc.QTileRules_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTileRules `
    ///
    /// ` other: QTileRules `
    ///
    pub fn moveAssign(self: QTileRules, other: QTileRules) void {
        qtc.QTileRules_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `horizontal` instead
    ///
    pub const Horizontal = horizontal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TileRule `
    ///
    pub fn horizontal(self: QTileRules) i32 {
        return qtc.QTileRules_Horizontal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontal` instead
    ///
    pub const SetHorizontal = setHorizontal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#horizontal-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ` _horizontal: qnamespace_enums.TileRule `
    ///
    pub fn setHorizontal(self: QTileRules, _horizontal: i32) void {
        qtc.QTileRules_SetHorizontal(@ptrCast(self.ptr), @bitCast(_horizontal));
    }

    /// ### DEPRECATED: Use `vertical` instead
    ///
    pub const Vertical = vertical;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TileRule `
    ///
    pub fn vertical(self: QTileRules) i32 {
        return qtc.QTileRules_Vertical(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVertical` instead
    ///
    pub const SetVertical = setVertical;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#vertical-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTileRules `
    ///
    /// ` _vertical: qnamespace_enums.TileRule `
    ///
    pub fn setVertical(self: QTileRules, _vertical: i32) void {
        qtc.QTileRules_SetVertical(@ptrCast(self.ptr), @bitCast(_vertical));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtilerules.html#dtor.QTileRules)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTileRules `
    ///
    pub fn delete(self: QTileRules) void {
        qtc.QTileRules_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdrawutil.html#public-types)
pub const enums = struct {
    pub const DrawingHint = enum {
        pub const OpaqueTopLeft: i32 = 1;
        pub const OpaqueTop: i32 = 2;
        pub const OpaqueTopRight: i32 = 4;
        pub const OpaqueLeft: i32 = 8;
        pub const OpaqueCenter: i32 = 16;
        pub const OpaqueRight: i32 = 32;
        pub const OpaqueBottomLeft: i32 = 64;
        pub const OpaqueBottom: i32 = 128;
        pub const OpaqueBottomRight: i32 = 256;
        pub const OpaqueCorners: i32 = 325;
        pub const OpaqueEdges: i32 = 170;
        pub const OpaqueFrame: i32 = 495;
        pub const OpaqueAll: i32 = 511;
    };
};
