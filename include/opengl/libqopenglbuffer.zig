const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopenglbuffer_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html)
pub const QOpenGLBuffer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLBuffer,

    pub const _is_QOpenGLBuffer = {};

    /// New constructs a new QOpenGLBuffer object.
    ///
    pub fn New() QOpenGLBuffer {
        return .{ .ptr = qtc.QOpenGLBuffer_new() };
    }

    /// New2 constructs a new QOpenGLBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qopenglbuffer_enums.Type `
    ///
    pub fn New2(typeVal: i32) QOpenGLBuffer {
        return .{ .ptr = qtc.QOpenGLBuffer_new2(@bitCast(typeVal)) };
    }

    /// New3 constructs a new QOpenGLBuffer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLBuffer `
    ///
    pub fn New3(other: anytype) QOpenGLBuffer {
        comptime _ = @TypeOf(other)._is_QOpenGLBuffer;
        return .{ .ptr = qtc.QOpenGLBuffer_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` other: QOpenGLBuffer `
    ///
    pub fn OperatorAssign(self: QOpenGLBuffer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLBuffer;
        qtc.QOpenGLBuffer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` other: QOpenGLBuffer `
    ///
    pub fn Swap(self: QOpenGLBuffer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLBuffer;
        qtc.QOpenGLBuffer_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ## Returns:
    ///
    /// ` qopenglbuffer_enums.Type `
    ///
    pub fn Type(self: QOpenGLBuffer) i32 {
        return qtc.QOpenGLBuffer_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#usagePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ## Returns:
    ///
    /// ` qopenglbuffer_enums.UsagePattern `
    ///
    pub fn UsagePattern(self: QOpenGLBuffer) i32 {
        return qtc.QOpenGLBuffer_UsagePattern(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#setUsagePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` value: qopenglbuffer_enums.UsagePattern `
    ///
    pub fn SetUsagePattern(self: QOpenGLBuffer, value: i32) void {
        qtc.QOpenGLBuffer_SetUsagePattern(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn Create(self: QOpenGLBuffer) bool {
        return qtc.QOpenGLBuffer_Create(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#isCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn IsCreated(self: QOpenGLBuffer) bool {
        return qtc.QOpenGLBuffer_IsCreated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn Destroy(self: QOpenGLBuffer) void {
        qtc.QOpenGLBuffer_Destroy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn Bind(self: QOpenGLBuffer) bool {
        return qtc.QOpenGLBuffer_Bind(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn Release(self: QOpenGLBuffer) void {
        qtc.QOpenGLBuffer_Release(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qopenglbuffer_enums.Type `
    ///
    pub fn Release2(typeVal: i32) void {
        qtc.QOpenGLBuffer_Release2(@bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#bufferId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn BufferId(self: QOpenGLBuffer) u32 {
        return qtc.QOpenGLBuffer_BufferId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn Size(self: QOpenGLBuffer) i32 {
        return qtc.QOpenGLBuffer_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` offset: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    /// ` count: i32 `
    ///
    pub fn Read(self: QOpenGLBuffer, offset: i32, data: ?*anyopaque, count: i32) bool {
        return qtc.QOpenGLBuffer_Read(@ptrCast(self.ptr), @bitCast(offset), @ptrCast(data), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` offset: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` count: i32 `
    ///
    pub fn Write(self: QOpenGLBuffer, offset: i32, data: ?*const anyopaque, count: i32) void {
        qtc.QOpenGLBuffer_Write(@ptrCast(self.ptr), @bitCast(offset), @ptrCast(data), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#allocate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` count: i32 `
    ///
    pub fn Allocate(self: QOpenGLBuffer, data: ?*const anyopaque, count: i32) void {
        qtc.QOpenGLBuffer_Allocate(@ptrCast(self.ptr), @ptrCast(data), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#allocate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` count: i32 `
    ///
    pub fn Allocate2(self: QOpenGLBuffer, count: i32) void {
        qtc.QOpenGLBuffer_Allocate2(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` access: qopenglbuffer_enums.Access `
    ///
    pub fn Map(self: QOpenGLBuffer, access: i32) ?*anyopaque {
        return qtc.QOpenGLBuffer_Map(@ptrCast(self.ptr), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#mapRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` offset: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` access: flag of qopenglbuffer_enums.RangeAccessFlag `
    ///
    pub fn MapRange(self: QOpenGLBuffer, offset: i32, count: i32, access: i32) ?*anyopaque {
        return qtc.QOpenGLBuffer_MapRange(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn Unmap(self: QOpenGLBuffer) bool {
        return qtc.QOpenGLBuffer_Unmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#dtor.QOpenGLBuffer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn Delete(self: QOpenGLBuffer) void {
        qtc.QOpenGLBuffer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const VertexBuffer: i32 = 34962;
        pub const IndexBuffer: i32 = 34963;
        pub const PixelPackBuffer: i32 = 35051;
        pub const PixelUnpackBuffer: i32 = 35052;
    };

    pub const UsagePattern = enum(i32) {
        pub const StreamDraw: i32 = 35040;
        pub const StreamRead: i32 = 35041;
        pub const StreamCopy: i32 = 35042;
        pub const StaticDraw: i32 = 35044;
        pub const StaticRead: i32 = 35045;
        pub const StaticCopy: i32 = 35046;
        pub const DynamicDraw: i32 = 35048;
        pub const DynamicRead: i32 = 35049;
        pub const DynamicCopy: i32 = 35050;
    };

    pub const Access = enum(i32) {
        pub const ReadOnly: i32 = 35000;
        pub const WriteOnly: i32 = 35001;
        pub const ReadWrite: i32 = 35002;
    };

    pub const RangeAccessFlag = enum(i32) {
        pub const RangeRead: i32 = 1;
        pub const RangeWrite: i32 = 2;
        pub const RangeInvalidate: i32 = 4;
        pub const RangeInvalidateBuffer: i32 = 8;
        pub const RangeFlushExplicit: i32 = 16;
        pub const RangeUnsynchronized: i32 = 32;
    };
};
