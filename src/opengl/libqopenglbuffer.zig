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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLBuffer object in C++ memory
    ///
    pub fn new() QOpenGLBuffer {
        return .{ .ptr = qtc.QOpenGLBuffer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLBuffer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qopenglbuffer_enums.Type `
    ///
    pub fn new2(typeVal: i32) QOpenGLBuffer {
        return .{ .ptr = qtc.QOpenGLBuffer_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOpenGLBuffer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLBuffer `
    ///
    pub fn new3(other: anytype) QOpenGLBuffer {
        comptime _ = @TypeOf(other)._is_QOpenGLBuffer;
        return .{ .ptr = qtc.QOpenGLBuffer_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` other: QOpenGLBuffer `
    ///
    pub fn operatorAssign(self: QOpenGLBuffer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLBuffer;
        qtc.QOpenGLBuffer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` other: QOpenGLBuffer `
    ///
    pub fn swap(self: QOpenGLBuffer, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLBuffer;
        qtc.QOpenGLBuffer_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QOpenGLBuffer) i32 {
        return qtc.QOpenGLBuffer_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `usagePattern` instead
    ///
    pub const UsagePattern = usagePattern;

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
    pub fn usagePattern(self: QOpenGLBuffer) i32 {
        return qtc.QOpenGLBuffer_UsagePattern(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUsagePattern` instead
    ///
    pub const SetUsagePattern = setUsagePattern;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#setUsagePattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` value: qopenglbuffer_enums.UsagePattern `
    ///
    pub fn setUsagePattern(self: QOpenGLBuffer, value: i32) void {
        qtc.QOpenGLBuffer_SetUsagePattern(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn create(self: QOpenGLBuffer) bool {
        return qtc.QOpenGLBuffer_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCreated` instead
    ///
    pub const IsCreated = isCreated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#isCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn isCreated(self: QOpenGLBuffer) bool {
        return qtc.QOpenGLBuffer_IsCreated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn destroy(self: QOpenGLBuffer) void {
        qtc.QOpenGLBuffer_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bind` instead
    ///
    pub const Bind = bind;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn bind(self: QOpenGLBuffer) bool {
        return qtc.QOpenGLBuffer_Bind(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn release(self: QOpenGLBuffer) void {
        qtc.QOpenGLBuffer_Release(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `release2` instead
    ///
    pub const Release2 = release2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qopenglbuffer_enums.Type `
    ///
    pub fn release2(typeVal: i32) void {
        qtc.QOpenGLBuffer_Release2(@bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `bufferId` instead
    ///
    pub const BufferId = bufferId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#bufferId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn bufferId(self: QOpenGLBuffer) u32 {
        return qtc.QOpenGLBuffer_BufferId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn size(self: QOpenGLBuffer) i32 {
        return qtc.QOpenGLBuffer_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

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
    pub fn read(self: QOpenGLBuffer, offset: i32, data: ?*anyopaque, count: i32) bool {
        return qtc.QOpenGLBuffer_Read(@ptrCast(self.ptr), @bitCast(offset), @ptrCast(data), @bitCast(count));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

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
    pub fn write(self: QOpenGLBuffer, offset: i32, data: ?*const anyopaque, count: i32) void {
        qtc.QOpenGLBuffer_Write(@ptrCast(self.ptr), @bitCast(offset), @ptrCast(data), @bitCast(count));
    }

    /// ### DEPRECATED: Use `allocate` instead
    ///
    pub const Allocate = allocate;

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
    pub fn allocate(self: QOpenGLBuffer, data: ?*const anyopaque, count: i32) void {
        qtc.QOpenGLBuffer_Allocate(@ptrCast(self.ptr), @ptrCast(data), @bitCast(count));
    }

    /// ### DEPRECATED: Use `allocate2` instead
    ///
    pub const Allocate2 = allocate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#allocate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` count: i32 `
    ///
    pub fn allocate2(self: QOpenGLBuffer, count: i32) void {
        qtc.QOpenGLBuffer_Allocate2(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `map` instead
    ///
    pub const Map = map;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    /// ` access: qopenglbuffer_enums.Access `
    ///
    pub fn map(self: QOpenGLBuffer, access: i32) ?*anyopaque {
        return qtc.QOpenGLBuffer_Map(@ptrCast(self.ptr), @bitCast(access));
    }

    /// ### DEPRECATED: Use `mapRange` instead
    ///
    pub const MapRange = mapRange;

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
    pub fn mapRange(self: QOpenGLBuffer, offset: i32, count: i32, access: i32) ?*anyopaque {
        return qtc.QOpenGLBuffer_MapRange(@ptrCast(self.ptr), @bitCast(offset), @bitCast(count), @bitCast(access));
    }

    /// ### DEPRECATED: Use `unmap` instead
    ///
    pub const Unmap = unmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn unmap(self: QOpenGLBuffer) bool {
        return qtc.QOpenGLBuffer_Unmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglbuffer.html#dtor.QOpenGLBuffer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLBuffer `
    ///
    pub fn delete(self: QOpenGLBuffer) void {
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
