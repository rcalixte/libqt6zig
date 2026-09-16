const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QRectF = @import("libqt6").QRectF;
const qsggeometry_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html)
pub const QSGGeometry = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGGeometry,

    pub const _is_QSGGeometry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSGGeometry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` attribs: QSGGeometry__AttributeSet `
    ///
    /// ` _vertexCount: i32 `
    ///
    pub fn new(attribs: anytype, _vertexCount: i32) QSGGeometry {
        comptime _ = @TypeOf(attribs)._is_QSGGeometry__AttributeSet;
        return .{ .ptr = qtc.QSGGeometry_new(@ptrCast(attribs.ptr), @bitCast(_vertexCount)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSGGeometry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` attribs: QSGGeometry__AttributeSet `
    ///
    /// ` _vertexCount: i32 `
    ///
    /// ` _indexCount: i32 `
    ///
    pub fn new2(attribs: anytype, _vertexCount: i32, _indexCount: i32) QSGGeometry {
        comptime _ = @TypeOf(attribs)._is_QSGGeometry__AttributeSet;
        return .{ .ptr = qtc.QSGGeometry_new2(@ptrCast(attribs.ptr), @bitCast(_vertexCount), @bitCast(_indexCount)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSGGeometry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` attribs: QSGGeometry__AttributeSet `
    ///
    /// ` _vertexCount: i32 `
    ///
    /// ` _indexCount: i32 `
    ///
    /// ` _indexType: i32 `
    ///
    pub fn new3(attribs: anytype, _vertexCount: i32, _indexCount: i32, _indexType: i32) QSGGeometry {
        comptime _ = @TypeOf(attribs)._is_QSGGeometry__AttributeSet;
        return .{ .ptr = qtc.QSGGeometry_new3(@ptrCast(attribs.ptr), @bitCast(_vertexCount), @bitCast(_indexCount), @bitCast(_indexType)) };
    }

    /// ### DEPRECATED: Use `defaultAttributes_Point2D` instead
    ///
    pub const DefaultAttributes_Point2D = defaultAttributes_Point2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#defaultAttributes_Point2D)
    ///
    pub fn defaultAttributes_Point2D() QSGGeometry__AttributeSet {
        return .{ .ptr = qtc.QSGGeometry_DefaultAttributes_Point2D() };
    }

    /// ### DEPRECATED: Use `defaultAttributes_TexturedPoint2D` instead
    ///
    pub const DefaultAttributes_TexturedPoint2D = defaultAttributes_TexturedPoint2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#defaultAttributes_TexturedPoint2D)
    ///
    pub fn defaultAttributes_TexturedPoint2D() QSGGeometry__AttributeSet {
        return .{ .ptr = qtc.QSGGeometry_DefaultAttributes_TexturedPoint2D() };
    }

    /// ### DEPRECATED: Use `defaultAttributes_ColoredPoint2D` instead
    ///
    pub const DefaultAttributes_ColoredPoint2D = defaultAttributes_ColoredPoint2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#defaultAttributes_ColoredPoint2D)
    ///
    pub fn defaultAttributes_ColoredPoint2D() QSGGeometry__AttributeSet {
        return .{ .ptr = qtc.QSGGeometry_DefaultAttributes_ColoredPoint2D() };
    }

    /// ### DEPRECATED: Use `setDrawingMode` instead
    ///
    pub const SetDrawingMode = setDrawingMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#setDrawingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    /// ` mode: u32 `
    ///
    pub fn setDrawingMode(self: QSGGeometry, mode: u32) void {
        qtc.QSGGeometry_SetDrawingMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `drawingMode` instead
    ///
    pub const DrawingMode = drawingMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#drawingMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn drawingMode(self: QSGGeometry) u32 {
        return qtc.QSGGeometry_DrawingMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `allocate` instead
    ///
    pub const Allocate = allocate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#allocate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    /// ` _vertexCount: i32 `
    ///
    pub fn allocate(self: QSGGeometry, _vertexCount: i32) void {
        qtc.QSGGeometry_Allocate(@ptrCast(self.ptr), @bitCast(_vertexCount));
    }

    /// ### DEPRECATED: Use `vertexCount` instead
    ///
    pub const VertexCount = vertexCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexCount(self: QSGGeometry) i32 {
        return qtc.QSGGeometry_VertexCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `vertexData` instead
    ///
    pub const VertexData = vertexData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexData(self: QSGGeometry) ?*anyopaque {
        return qtc.QSGGeometry_VertexData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `vertexDataAsPoint2D` instead
    ///
    pub const VertexDataAsPoint2D = vertexDataAsPoint2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsPoint2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexDataAsPoint2D(self: QSGGeometry) QSGGeometry__Point2D {
        return .{ .ptr = qtc.QSGGeometry_VertexDataAsPoint2D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `vertexDataAsTexturedPoint2D` instead
    ///
    pub const VertexDataAsTexturedPoint2D = vertexDataAsTexturedPoint2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsTexturedPoint2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexDataAsTexturedPoint2D(self: QSGGeometry) QSGGeometry__TexturedPoint2D {
        return .{ .ptr = qtc.QSGGeometry_VertexDataAsTexturedPoint2D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `vertexDataAsColoredPoint2D` instead
    ///
    pub const VertexDataAsColoredPoint2D = vertexDataAsColoredPoint2D;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsColoredPoint2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexDataAsColoredPoint2D(self: QSGGeometry) QSGGeometry__ColoredPoint2D {
        return .{ .ptr = qtc.QSGGeometry_VertexDataAsColoredPoint2D(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `vertexData2` instead
    ///
    pub const VertexData2 = vertexData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexData2(self: QSGGeometry) ?*const anyopaque {
        return qtc.QSGGeometry_VertexData2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `vertexDataAsPoint2D2` instead
    ///
    pub const VertexDataAsPoint2D2 = vertexDataAsPoint2D2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsPoint2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexDataAsPoint2D2(self: QSGGeometry) QSGGeometry__Point2D {
        return .{ .ptr = qtc.QSGGeometry_VertexDataAsPoint2D2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `vertexDataAsTexturedPoint2D2` instead
    ///
    pub const VertexDataAsTexturedPoint2D2 = vertexDataAsTexturedPoint2D2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsTexturedPoint2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexDataAsTexturedPoint2D2(self: QSGGeometry) QSGGeometry__TexturedPoint2D {
        return .{ .ptr = qtc.QSGGeometry_VertexDataAsTexturedPoint2D2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `vertexDataAsColoredPoint2D2` instead
    ///
    pub const VertexDataAsColoredPoint2D2 = vertexDataAsColoredPoint2D2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataAsColoredPoint2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn vertexDataAsColoredPoint2D2(self: QSGGeometry) QSGGeometry__ColoredPoint2D {
        return .{ .ptr = qtc.QSGGeometry_VertexDataAsColoredPoint2D2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `indexType` instead
    ///
    pub const IndexType = indexType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn indexType(self: QSGGeometry) i32 {
        return qtc.QSGGeometry_IndexType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexCount` instead
    ///
    pub const IndexCount = indexCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn indexCount(self: QSGGeometry) i32 {
        return qtc.QSGGeometry_IndexCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexData` instead
    ///
    pub const IndexData = indexData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn indexData(self: QSGGeometry) ?*anyopaque {
        return qtc.QSGGeometry_IndexData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexDataAsUInt` instead
    ///
    pub const IndexDataAsUInt = indexDataAsUInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataAsUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn indexDataAsUInt(self: QSGGeometry) ?*u32 {
        return @ptrCast(qtc.QSGGeometry_IndexDataAsUInt(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `indexDataAsUShort` instead
    ///
    pub const IndexDataAsUShort = indexDataAsUShort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataAsUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn indexDataAsUShort(self: QSGGeometry) ?*u16 {
        return @ptrCast(qtc.QSGGeometry_IndexDataAsUShort(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `sizeOfIndex` instead
    ///
    pub const SizeOfIndex = sizeOfIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#sizeOfIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn sizeOfIndex(self: QSGGeometry) i32 {
        return qtc.QSGGeometry_SizeOfIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexData2` instead
    ///
    pub const IndexData2 = indexData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn indexData2(self: QSGGeometry) ?*const anyopaque {
        return qtc.QSGGeometry_IndexData2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexDataAsUInt2` instead
    ///
    pub const IndexDataAsUInt2 = indexDataAsUInt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataAsUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn indexDataAsUInt2(self: QSGGeometry) ?*const u32 {
        return @ptrCast(qtc.QSGGeometry_IndexDataAsUInt2(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `indexDataAsUShort2` instead
    ///
    pub const IndexDataAsUShort2 = indexDataAsUShort2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataAsUShort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn indexDataAsUShort2(self: QSGGeometry) ?*const u16 {
        return @ptrCast(qtc.QSGGeometry_IndexDataAsUShort2(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `attributeCount` instead
    ///
    pub const AttributeCount = attributeCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#attributeCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn attributeCount(self: QSGGeometry) i32 {
        return qtc.QSGGeometry_AttributeCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn attributes(self: QSGGeometry) QSGGeometry__Attribute {
        return .{ .ptr = qtc.QSGGeometry_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeOfVertex` instead
    ///
    pub const SizeOfVertex = sizeOfVertex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#sizeOfVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn sizeOfVertex(self: QSGGeometry) i32 {
        return qtc.QSGGeometry_SizeOfVertex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateRectGeometry` instead
    ///
    pub const UpdateRectGeometry = updateRectGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#updateRectGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` g: QSGGeometry `
    ///
    /// ` rect: QRectF `
    ///
    pub fn updateRectGeometry(g: anytype, rect: anytype) void {
        comptime _ = @TypeOf(g)._is_QSGGeometry;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QSGGeometry_UpdateRectGeometry(@ptrCast(g.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `updateTexturedRectGeometry` instead
    ///
    pub const UpdateTexturedRectGeometry = updateTexturedRectGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#updateTexturedRectGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` g: QSGGeometry `
    ///
    /// ` rect: QRectF `
    ///
    /// ` sourceRect: QRectF `
    ///
    pub fn updateTexturedRectGeometry(g: anytype, rect: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(g)._is_QSGGeometry;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(sourceRect)._is_QRectF;
        qtc.QSGGeometry_UpdateTexturedRectGeometry(@ptrCast(g.ptr), @ptrCast(rect.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `updateColoredRectGeometry` instead
    ///
    pub const UpdateColoredRectGeometry = updateColoredRectGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#updateColoredRectGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` g: QSGGeometry `
    ///
    /// ` rect: QRectF `
    ///
    pub fn updateColoredRectGeometry(g: anytype, rect: anytype) void {
        comptime _ = @TypeOf(g)._is_QSGGeometry;
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QSGGeometry_UpdateColoredRectGeometry(@ptrCast(g.ptr), @ptrCast(rect.ptr));
    }

    /// ### DEPRECATED: Use `setIndexDataPattern` instead
    ///
    pub const SetIndexDataPattern = setIndexDataPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#setIndexDataPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    /// ` p: qsggeometry_enums.DataPattern `
    ///
    pub fn setIndexDataPattern(self: QSGGeometry, p: i32) void {
        qtc.QSGGeometry_SetIndexDataPattern(@ptrCast(self.ptr), @bitCast(p));
    }

    /// ### DEPRECATED: Use `indexDataPattern` instead
    ///
    pub const IndexDataPattern = indexDataPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#indexDataPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    /// ## Returns:
    ///
    /// ` qsggeometry_enums.DataPattern `
    ///
    pub fn indexDataPattern(self: QSGGeometry) i32 {
        return qtc.QSGGeometry_IndexDataPattern(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVertexDataPattern` instead
    ///
    pub const SetVertexDataPattern = setVertexDataPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#setVertexDataPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    /// ` p: qsggeometry_enums.DataPattern `
    ///
    pub fn setVertexDataPattern(self: QSGGeometry, p: i32) void {
        qtc.QSGGeometry_SetVertexDataPattern(@ptrCast(self.ptr), @bitCast(p));
    }

    /// ### DEPRECATED: Use `vertexDataPattern` instead
    ///
    pub const VertexDataPattern = vertexDataPattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#vertexDataPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    /// ## Returns:
    ///
    /// ` qsggeometry_enums.DataPattern `
    ///
    pub fn vertexDataPattern(self: QSGGeometry) i32 {
        return qtc.QSGGeometry_VertexDataPattern(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markIndexDataDirty` instead
    ///
    pub const MarkIndexDataDirty = markIndexDataDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#markIndexDataDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn markIndexDataDirty(self: QSGGeometry) void {
        qtc.QSGGeometry_MarkIndexDataDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markVertexDataDirty` instead
    ///
    pub const MarkVertexDataDirty = markVertexDataDirty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#markVertexDataDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn markVertexDataDirty(self: QSGGeometry) void {
        qtc.QSGGeometry_MarkVertexDataDirty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn lineWidth(self: QSGGeometry) f32 {
        return qtc.QSGGeometry_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWidth` instead
    ///
    pub const SetLineWidth = setLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    /// ` w: f32 `
    ///
    pub fn setLineWidth(self: QSGGeometry, w: f32) void {
        qtc.QSGGeometry_SetLineWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `allocate2` instead
    ///
    pub const Allocate2 = allocate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#allocate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry `
    ///
    /// ` _vertexCount: i32 `
    ///
    /// ` _indexCount: i32 `
    ///
    pub fn allocate2(self: QSGGeometry, _vertexCount: i32, _indexCount: i32) void {
        qtc.QSGGeometry_Allocate2(@ptrCast(self.ptr), @bitCast(_vertexCount), @bitCast(_indexCount));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#dtor.QSGGeometry)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGGeometry `
    ///
    pub fn delete(self: QSGGeometry) void {
        qtc.QSGGeometry_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html)
pub const QSGGeometry__Attribute = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGGeometry__Attribute,

    pub const _is_QSGGeometry__Attribute = {};

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    pub fn position(self: QSGGeometry__Attribute) i32 {
        return qtc.QSGGeometry__Attribute_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#position-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    /// ` _position: i32 `
    ///
    pub fn setPosition(self: QSGGeometry__Attribute, _position: i32) void {
        qtc.QSGGeometry__Attribute_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `tupleSize` instead
    ///
    pub const TupleSize = tupleSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#tupleSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    pub fn tupleSize(self: QSGGeometry__Attribute) i32 {
        return qtc.QSGGeometry__Attribute_TupleSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTupleSize` instead
    ///
    pub const SetTupleSize = setTupleSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#tupleSize-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    /// ` _tupleSize: i32 `
    ///
    pub fn setTupleSize(self: QSGGeometry__Attribute, _tupleSize: i32) void {
        qtc.QSGGeometry__Attribute_SetTupleSize(@ptrCast(self.ptr), @bitCast(_tupleSize));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    pub fn type0(self: QSGGeometry__Attribute) i32 {
        return qtc.QSGGeometry__Attribute_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#type-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    /// ` _type: i32 `
    ///
    pub fn setType(self: QSGGeometry__Attribute, _type: i32) void {
        qtc.QSGGeometry__Attribute_SetType(@ptrCast(self.ptr), @bitCast(_type));
    }

    /// ### DEPRECATED: Use `isVertexCoordinate` instead
    ///
    pub const IsVertexCoordinate = isVertexCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#isVertexCoordinate-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    pub fn isVertexCoordinate(self: QSGGeometry__Attribute) u32 {
        return qtc.QSGGeometry__Attribute_IsVertexCoordinate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIsVertexCoordinate` instead
    ///
    pub const SetIsVertexCoordinate = setIsVertexCoordinate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#isVertexCoordinate-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    /// ` _isVertexCoordinate: u32 `
    ///
    pub fn setIsVertexCoordinate(self: QSGGeometry__Attribute, _isVertexCoordinate: u32) void {
        qtc.QSGGeometry__Attribute_SetIsVertexCoordinate(@ptrCast(self.ptr), @bitCast(_isVertexCoordinate));
    }

    /// ### DEPRECATED: Use `attributeType` instead
    ///
    pub const AttributeType = attributeType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#attributeType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    /// ## Returns:
    ///
    /// ` qsggeometry_enums.AttributeType `
    ///
    pub fn attributeType(self: QSGGeometry__Attribute) i32 {
        return qtc.QSGGeometry__Attribute_AttributeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAttributeType` instead
    ///
    pub const SetAttributeType = setAttributeType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#attributeType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    /// ` _attributeType: qsggeometry_enums.AttributeType `
    ///
    pub fn setAttributeType(self: QSGGeometry__Attribute, _attributeType: i32) void {
        qtc.QSGGeometry__Attribute_SetAttributeType(@ptrCast(self.ptr), @bitCast(_attributeType));
    }

    /// ### DEPRECATED: Use `reserved` instead
    ///
    pub const Reserved = reserved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#reserved-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    pub fn reserved(self: QSGGeometry__Attribute) u32 {
        return qtc.QSGGeometry__Attribute_Reserved(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReserved` instead
    ///
    pub const SetReserved = setReserved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#reserved-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    /// ` _reserved: u32 `
    ///
    pub fn setReserved(self: QSGGeometry__Attribute, _reserved: u32) void {
        qtc.QSGGeometry__Attribute_SetReserved(@ptrCast(self.ptr), @bitCast(_reserved));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: i32 `
    ///
    /// ` _tupleSize: i32 `
    ///
    /// ` primitiveType: i32 `
    ///
    pub fn create(pos: i32, _tupleSize: i32, primitiveType: i32) QSGGeometry__Attribute {
        return .{ .ptr = qtc.QSGGeometry__Attribute_Create(@bitCast(pos), @bitCast(_tupleSize), @bitCast(primitiveType)) };
    }

    /// ### DEPRECATED: Use `createWithAttributeType` instead
    ///
    pub const CreateWithAttributeType = createWithAttributeType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#createWithAttributeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: i32 `
    ///
    /// ` _tupleSize: i32 `
    ///
    /// ` primitiveType: i32 `
    ///
    /// ` _attributeType: qsggeometry_enums.AttributeType `
    ///
    pub fn createWithAttributeType(pos: i32, _tupleSize: i32, primitiveType: i32, _attributeType: i32) QSGGeometry__Attribute {
        return .{ .ptr = qtc.QSGGeometry__Attribute_CreateWithAttributeType(@bitCast(pos), @bitCast(_tupleSize), @bitCast(primitiveType), @bitCast(_attributeType)) };
    }

    /// ### DEPRECATED: Use `create4` instead
    ///
    pub const Create4 = create4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attribute.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` pos: i32 `
    ///
    /// ` _tupleSize: i32 `
    ///
    /// ` primitiveType: i32 `
    ///
    /// ` isPosition: bool `
    ///
    pub fn create4(pos: i32, _tupleSize: i32, primitiveType: i32, isPosition: bool) QSGGeometry__Attribute {
        return .{ .ptr = qtc.QSGGeometry__Attribute_Create4(@bitCast(pos), @bitCast(_tupleSize), @bitCast(primitiveType), isPosition) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGGeometry__Attribute `
    ///
    pub fn delete(self: QSGGeometry__Attribute) void {
        qtc.QSGGeometry__Attribute_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html)
pub const QSGGeometry__AttributeSet = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGGeometry__AttributeSet,

    pub const _is_QSGGeometry__AttributeSet = {};

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#count-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__AttributeSet `
    ///
    pub fn count(self: QSGGeometry__AttributeSet) i32 {
        return qtc.QSGGeometry__AttributeSet_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCount` instead
    ///
    pub const SetCount = setCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#count-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__AttributeSet `
    ///
    /// ` _count: i32 `
    ///
    pub fn setCount(self: QSGGeometry__AttributeSet, _count: i32) void {
        qtc.QSGGeometry__AttributeSet_SetCount(@ptrCast(self.ptr), @bitCast(_count));
    }

    /// ### DEPRECATED: Use `stride` instead
    ///
    pub const Stride = stride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#stride-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__AttributeSet `
    ///
    pub fn stride(self: QSGGeometry__AttributeSet) i32 {
        return qtc.QSGGeometry__AttributeSet_Stride(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStride` instead
    ///
    pub const SetStride = setStride;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#stride-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__AttributeSet `
    ///
    /// ` _stride: i32 `
    ///
    pub fn setStride(self: QSGGeometry__AttributeSet, _stride: i32) void {
        qtc.QSGGeometry__AttributeSet_SetStride(@ptrCast(self.ptr), @bitCast(_stride));
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#attributes-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__AttributeSet `
    ///
    pub fn attributes(self: QSGGeometry__AttributeSet) QSGGeometry__Attribute {
        return .{ .ptr = qtc.QSGGeometry__AttributeSet_Attributes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttributes` instead
    ///
    pub const SetAttributes = setAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-attributeset.html#attributes-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__AttributeSet `
    ///
    /// ` _attributes: QSGGeometry__Attribute `
    ///
    pub fn setAttributes(self: QSGGeometry__AttributeSet, _attributes: anytype) void {
        comptime _ = @TypeOf(_attributes)._is_QSGGeometry__Attribute;
        qtc.QSGGeometry__AttributeSet_SetAttributes(@ptrCast(self.ptr), @ptrCast(_attributes.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGGeometry__AttributeSet `
    ///
    pub fn delete(self: QSGGeometry__AttributeSet) void {
        qtc.QSGGeometry__AttributeSet_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html)
pub const QSGGeometry__Point2D = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGGeometry__Point2D,

    pub const _is_QSGGeometry__Point2D = {};

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Point2D `
    ///
    pub fn x(self: QSGGeometry__Point2D) f32 {
        return qtc.QSGGeometry__Point2D_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Point2D `
    ///
    /// ` _x: f32 `
    ///
    pub fn setX(self: QSGGeometry__Point2D, _x: f32) void {
        qtc.QSGGeometry__Point2D_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Point2D `
    ///
    pub fn y(self: QSGGeometry__Point2D) f32 {
        return qtc.QSGGeometry__Point2D_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Point2D `
    ///
    /// ` _y: f32 `
    ///
    pub fn setY(self: QSGGeometry__Point2D, _y: f32) void {
        qtc.QSGGeometry__Point2D_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `set` instead
    ///
    pub const Set = set;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-point2d.html#set)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__Point2D `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    pub fn set(self: QSGGeometry__Point2D, nx: f32, ny: f32) void {
        qtc.QSGGeometry__Point2D_Set(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGGeometry__Point2D `
    ///
    pub fn delete(self: QSGGeometry__Point2D) void {
        qtc.QSGGeometry__Point2D_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html)
pub const QSGGeometry__TexturedPoint2D = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGGeometry__TexturedPoint2D,

    pub const _is_QSGGeometry__TexturedPoint2D = {};

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    pub fn x(self: QSGGeometry__TexturedPoint2D) f32 {
        return qtc.QSGGeometry__TexturedPoint2D_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    /// ` _x: f32 `
    ///
    pub fn setX(self: QSGGeometry__TexturedPoint2D, _x: f32) void {
        qtc.QSGGeometry__TexturedPoint2D_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    pub fn y(self: QSGGeometry__TexturedPoint2D) f32 {
        return qtc.QSGGeometry__TexturedPoint2D_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    /// ` _y: f32 `
    ///
    pub fn setY(self: QSGGeometry__TexturedPoint2D, _y: f32) void {
        qtc.QSGGeometry__TexturedPoint2D_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `tx` instead
    ///
    pub const Tx = tx;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#tx-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    pub fn tx(self: QSGGeometry__TexturedPoint2D) f32 {
        return qtc.QSGGeometry__TexturedPoint2D_Tx(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTx` instead
    ///
    pub const SetTx = setTx;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#tx-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    /// ` _tx: f32 `
    ///
    pub fn setTx(self: QSGGeometry__TexturedPoint2D, _tx: f32) void {
        qtc.QSGGeometry__TexturedPoint2D_SetTx(@ptrCast(self.ptr), @bitCast(_tx));
    }

    /// ### DEPRECATED: Use `ty` instead
    ///
    pub const Ty = ty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#ty-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    pub fn ty(self: QSGGeometry__TexturedPoint2D) f32 {
        return qtc.QSGGeometry__TexturedPoint2D_Ty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTy` instead
    ///
    pub const SetTy = setTy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#ty-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    /// ` _ty: f32 `
    ///
    pub fn setTy(self: QSGGeometry__TexturedPoint2D, _ty: f32) void {
        qtc.QSGGeometry__TexturedPoint2D_SetTy(@ptrCast(self.ptr), @bitCast(_ty));
    }

    /// ### DEPRECATED: Use `set` instead
    ///
    pub const Set = set;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-texturedpoint2d.html#set)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` ntx: f32 `
    ///
    /// ` nty: f32 `
    ///
    pub fn set(self: QSGGeometry__TexturedPoint2D, nx: f32, ny: f32, ntx: f32, nty: f32) void {
        qtc.QSGGeometry__TexturedPoint2D_Set(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(ntx), @bitCast(nty));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGGeometry__TexturedPoint2D `
    ///
    pub fn delete(self: QSGGeometry__TexturedPoint2D) void {
        qtc.QSGGeometry__TexturedPoint2D_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html)
pub const QSGGeometry__ColoredPoint2D = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSGGeometry__ColoredPoint2D,

    pub const _is_QSGGeometry__ColoredPoint2D = {};

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    pub fn x(self: QSGGeometry__ColoredPoint2D) f32 {
        return qtc.QSGGeometry__ColoredPoint2D_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setX` instead
    ///
    pub const SetX = setX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#x-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    /// ` _x: f32 `
    ///
    pub fn setX(self: QSGGeometry__ColoredPoint2D, _x: f32) void {
        qtc.QSGGeometry__ColoredPoint2D_SetX(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    pub fn y(self: QSGGeometry__ColoredPoint2D) f32 {
        return qtc.QSGGeometry__ColoredPoint2D_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setY` instead
    ///
    pub const SetY = setY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#y-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    /// ` _y: f32 `
    ///
    pub fn setY(self: QSGGeometry__ColoredPoint2D, _y: f32) void {
        qtc.QSGGeometry__ColoredPoint2D_SetY(@ptrCast(self.ptr), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `r` instead
    ///
    pub const R = r;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#r-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    pub fn r(self: QSGGeometry__ColoredPoint2D) u8 {
        return qtc.QSGGeometry__ColoredPoint2D_R(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setR` instead
    ///
    pub const SetR = setR;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#r-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    /// ` _r: u8 `
    ///
    pub fn setR(self: QSGGeometry__ColoredPoint2D, _r: u8) void {
        qtc.QSGGeometry__ColoredPoint2D_SetR(@ptrCast(self.ptr), @bitCast(_r));
    }

    /// ### DEPRECATED: Use `g` instead
    ///
    pub const G = g;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#g-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    pub fn g(self: QSGGeometry__ColoredPoint2D) u8 {
        return qtc.QSGGeometry__ColoredPoint2D_G(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setG` instead
    ///
    pub const SetG = setG;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#g-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    /// ` _g: u8 `
    ///
    pub fn setG(self: QSGGeometry__ColoredPoint2D, _g: u8) void {
        qtc.QSGGeometry__ColoredPoint2D_SetG(@ptrCast(self.ptr), @bitCast(_g));
    }

    /// ### DEPRECATED: Use `b` instead
    ///
    pub const B = b;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#b-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    pub fn b(self: QSGGeometry__ColoredPoint2D) u8 {
        return qtc.QSGGeometry__ColoredPoint2D_B(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setB` instead
    ///
    pub const SetB = setB;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#b-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    /// ` _b: u8 `
    ///
    pub fn setB(self: QSGGeometry__ColoredPoint2D, _b: u8) void {
        qtc.QSGGeometry__ColoredPoint2D_SetB(@ptrCast(self.ptr), @bitCast(_b));
    }

    /// ### DEPRECATED: Use `a` instead
    ///
    pub const A = a;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#a-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    pub fn a(self: QSGGeometry__ColoredPoint2D) u8 {
        return qtc.QSGGeometry__ColoredPoint2D_A(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setA` instead
    ///
    pub const SetA = setA;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#a-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    /// ` _a: u8 `
    ///
    pub fn setA(self: QSGGeometry__ColoredPoint2D, _a: u8) void {
        qtc.QSGGeometry__ColoredPoint2D_SetA(@ptrCast(self.ptr), @bitCast(_a));
    }

    /// ### DEPRECATED: Use `set` instead
    ///
    pub const Set = set;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry-coloredpoint2d.html#set)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    /// ` nx: f32 `
    ///
    /// ` ny: f32 `
    ///
    /// ` nr: u8 `
    ///
    /// ` ng: u8 `
    ///
    /// ` nb: u8 `
    ///
    /// ` na: u8 `
    ///
    pub fn set(self: QSGGeometry__ColoredPoint2D, nx: f32, ny: f32, nr: u8, ng: u8, nb: u8, na: u8) void {
        qtc.QSGGeometry__ColoredPoint2D_Set(@ptrCast(self.ptr), @bitCast(nx), @bitCast(ny), @bitCast(nr), @bitCast(ng), @bitCast(nb), @bitCast(na));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSGGeometry__ColoredPoint2D `
    ///
    pub fn delete(self: QSGGeometry__ColoredPoint2D) void {
        qtc.QSGGeometry__ColoredPoint2D_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsggeometry.html#public-types)
pub const enums = struct {
    pub const AttributeType = enum {
        pub const UnknownAttribute: i32 = 0;
        pub const PositionAttribute: i32 = 1;
        pub const ColorAttribute: i32 = 2;
        pub const TexCoordAttribute: i32 = 3;
        pub const TexCoord1Attribute: i32 = 4;
        pub const TexCoord2Attribute: i32 = 5;
    };

    pub const DataPattern = enum {
        pub const AlwaysUploadPattern: i32 = 0;
        pub const StreamPattern: i32 = 1;
        pub const DynamicPattern: i32 = 2;
        pub const StaticPattern: i32 = 3;
    };

    pub const DrawingMode = enum {
        pub const DrawPoints: i32 = 0;
        pub const DrawLines: i32 = 1;
        pub const DrawLineLoop: i32 = 2;
        pub const DrawLineStrip: i32 = 3;
        pub const DrawTriangles: i32 = 4;
        pub const DrawTriangleStrip: i32 = 5;
        pub const DrawTriangleFan: i32 = 6;
    };

    pub const Type = enum {
        pub const ByteType: i32 = 5120;
        pub const UnsignedByteType: i32 = 5121;
        pub const ShortType: i32 = 5122;
        pub const UnsignedShortType: i32 = 5123;
        pub const IntType: i32 = 5124;
        pub const UnsignedIntType: i32 = 5125;
        pub const FloatType: i32 = 5126;
        pub const Bytes2Type: i32 = 5127;
        pub const Bytes3Type: i32 = 5128;
        pub const Bytes4Type: i32 = 5129;
        pub const DoubleType: i32 = 5130;
    };
};
