const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QImage = @import("libqt6").QImage;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const qopenglframebufferobject_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html)
pub const QOpenGLFramebufferObject = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFramebufferObject,

    pub const _is_QOpenGLFramebufferObject = {};

    /// New constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    pub fn New(size: anytype) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new(@ptrCast(size.ptr)) };
    }

    /// New2 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn New2(width: i32, height: i32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new2(@bitCast(width), @bitCast(height)) };
    }

    /// New3 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` attachment: qopenglframebufferobject_enums.Attachment `
    ///
    pub fn New3(size: anytype, attachment: i32) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new3(@ptrCast(size.ptr), @bitCast(attachment)) };
    }

    /// New4 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` attachment: qopenglframebufferobject_enums.Attachment `
    ///
    pub fn New4(width: i32, height: i32, attachment: i32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new4(@bitCast(width), @bitCast(height), @bitCast(attachment)) };
    }

    /// New5 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` format: QOpenGLFramebufferObjectFormat `
    ///
    pub fn New5(size: anytype, format: anytype) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(size)._is_QSize;
        comptime _ = @TypeOf(format)._is_QOpenGLFramebufferObjectFormat;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new5(@ptrCast(size.ptr), @ptrCast(format.ptr)) };
    }

    /// New6 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: QOpenGLFramebufferObjectFormat `
    ///
    pub fn New6(width: i32, height: i32, format: anytype) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(format)._is_QOpenGLFramebufferObjectFormat;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new6(@bitCast(width), @bitCast(height), @ptrCast(format.ptr)) };
    }

    /// New7 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` target: u32 `
    ///
    pub fn New7(size: anytype, target: u32) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new7(@ptrCast(size.ptr), @bitCast(target)) };
    }

    /// New8 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` target: u32 `
    ///
    pub fn New8(width: i32, height: i32, target: u32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new8(@bitCast(width), @bitCast(height), @bitCast(target)) };
    }

    /// New9 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` attachment: qopenglframebufferobject_enums.Attachment `
    ///
    /// ` target: u32 `
    ///
    pub fn New9(size: anytype, attachment: i32, target: u32) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new9(@ptrCast(size.ptr), @bitCast(attachment), @bitCast(target)) };
    }

    /// New10 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: QSize `
    ///
    /// ` attachment: qopenglframebufferobject_enums.Attachment `
    ///
    /// ` target: u32 `
    ///
    /// ` internalFormat: u32 `
    ///
    pub fn New10(size: anytype, attachment: i32, target: u32, internalFormat: u32) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new10(@ptrCast(size.ptr), @bitCast(attachment), @bitCast(target), @bitCast(internalFormat)) };
    }

    /// New11 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` attachment: qopenglframebufferobject_enums.Attachment `
    ///
    /// ` target: u32 `
    ///
    pub fn New11(width: i32, height: i32, attachment: i32, target: u32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new11(@bitCast(width), @bitCast(height), @bitCast(attachment), @bitCast(target)) };
    }

    /// New12 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` attachment: qopenglframebufferobject_enums.Attachment `
    ///
    /// ` target: u32 `
    ///
    /// ` internalFormat: u32 `
    ///
    pub fn New12(width: i32, height: i32, attachment: i32, target: u32, internalFormat: u32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new12(@bitCast(width), @bitCast(height), @bitCast(attachment), @bitCast(target), @bitCast(internalFormat)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` size: QSize `
    ///
    pub fn AddColorAttachment(self: QOpenGLFramebufferObject, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QOpenGLFramebufferObject_AddColorAttachment(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn AddColorAttachment2(self: QOpenGLFramebufferObject, width: i32, height: i32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment2(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Format(self: QOpenGLFramebufferObject) QOpenGLFramebufferObjectFormat {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_Format(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn IsValid(self: QOpenGLFramebufferObject) bool {
        return qtc.QOpenGLFramebufferObject_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#isBound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn IsBound(self: QOpenGLFramebufferObject) bool {
        return qtc.QOpenGLFramebufferObject_IsBound(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Bind(self: QOpenGLFramebufferObject) bool {
        return qtc.QOpenGLFramebufferObject_Bind(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Release(self: QOpenGLFramebufferObject) bool {
        return qtc.QOpenGLFramebufferObject_Release(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Width(self: QOpenGLFramebufferObject) i32 {
        return qtc.QOpenGLFramebufferObject_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Height(self: QOpenGLFramebufferObject) i32 {
        return qtc.QOpenGLFramebufferObject_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Texture(self: QOpenGLFramebufferObject) u32 {
        return qtc.QOpenGLFramebufferObject_Texture(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#textures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Textures(self: QOpenGLFramebufferObject, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLFramebufferObject_Textures(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qopenglframebufferobject.Textures: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#takeTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn TakeTexture(self: QOpenGLFramebufferObject) u32 {
        return qtc.QOpenGLFramebufferObject_TakeTexture(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#takeTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` colorAttachmentIndex: i32 `
    ///
    pub fn TakeTexture2(self: QOpenGLFramebufferObject, colorAttachmentIndex: i32) u32 {
        return qtc.QOpenGLFramebufferObject_TakeTexture2(@ptrCast(self.ptr), @bitCast(colorAttachmentIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Size(self: QOpenGLFramebufferObject) QSize {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_Size(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#sizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Sizes(self: QOpenGLFramebufferObject, allocator: std.mem.Allocator) []QSize {
        const _arr: qtc.libqt_list = qtc.QOpenGLFramebufferObject_Sizes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("qopenglframebufferobject.Sizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn ToImage(self: QOpenGLFramebufferObject) QImage {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_ToImage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` flipped: bool `
    ///
    /// ` colorAttachmentIndex: i32 `
    ///
    pub fn ToImage2(self: QOpenGLFramebufferObject, flipped: bool, colorAttachmentIndex: i32) QImage {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_ToImage2(@ptrCast(self.ptr), flipped, @bitCast(colorAttachmentIndex)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#attachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ## Returns:
    ///
    /// ` qopenglframebufferobject_enums.Attachment `
    ///
    pub fn Attachment(self: QOpenGLFramebufferObject) i32 {
        return qtc.QOpenGLFramebufferObject_Attachment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#setAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` attachment: qopenglframebufferobject_enums.Attachment `
    ///
    pub fn SetAttachment(self: QOpenGLFramebufferObject, attachment: i32) void {
        qtc.QOpenGLFramebufferObject_SetAttachment(@ptrCast(self.ptr), @bitCast(attachment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Handle(self: QOpenGLFramebufferObject) u32 {
        return qtc.QOpenGLFramebufferObject_Handle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#bindDefault)
    ///
    pub fn BindDefault() bool {
        return qtc.QOpenGLFramebufferObject_BindDefault();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#hasOpenGLFramebufferObjects)
    ///
    pub fn HasOpenGLFramebufferObjects() bool {
        return qtc.QOpenGLFramebufferObject_HasOpenGLFramebufferObjects();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#hasOpenGLFramebufferBlit)
    ///
    pub fn HasOpenGLFramebufferBlit() bool {
        return qtc.QOpenGLFramebufferObject_HasOpenGLFramebufferBlit();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    /// ` sourceRect: QRect `
    ///
    /// ` buffers: u32 `
    ///
    /// ` filter: u32 `
    ///
    /// ` readColorAttachmentIndex: i32 `
    ///
    /// ` drawColorAttachmentIndex: i32 `
    ///
    /// ` restorePolicy: qopenglframebufferobject_enums.FramebufferRestorePolicy `
    ///
    pub fn BlitFramebuffer(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32, restorePolicy: i32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr), @bitCast(buffers), @bitCast(filter), @bitCast(readColorAttachmentIndex), @bitCast(drawColorAttachmentIndex), @bitCast(restorePolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    /// ` sourceRect: QRect `
    ///
    /// ` buffers: u32 `
    ///
    /// ` filter: u32 `
    ///
    /// ` readColorAttachmentIndex: i32 `
    ///
    /// ` drawColorAttachmentIndex: i32 `
    ///
    pub fn BlitFramebuffer2(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer2(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr), @bitCast(buffers), @bitCast(filter), @bitCast(readColorAttachmentIndex), @bitCast(drawColorAttachmentIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    /// ` sourceRect: QRect `
    ///
    pub fn BlitFramebuffer3(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer3(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    pub fn BlitFramebuffer4(target: anytype, source: anytype) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer4(@ptrCast(target.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` size: QSize `
    ///
    /// ` internalFormat: u32 `
    ///
    pub fn AddColorAttachment22(self: QOpenGLFramebufferObject, size: anytype, internalFormat: u32) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QOpenGLFramebufferObject_AddColorAttachment22(@ptrCast(self.ptr), @ptrCast(size.ptr), @bitCast(internalFormat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` internalFormat: u32 `
    ///
    pub fn AddColorAttachment3(self: QOpenGLFramebufferObject, width: i32, height: i32, internalFormat: u32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment3(@ptrCast(self.ptr), @bitCast(width), @bitCast(height), @bitCast(internalFormat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` flipped: bool `
    ///
    pub fn ToImage1(self: QOpenGLFramebufferObject, flipped: bool) QImage {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_ToImage1(@ptrCast(self.ptr), flipped) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    /// ` sourceRect: QRect `
    ///
    /// ` buffers: u32 `
    ///
    pub fn BlitFramebuffer5(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype, buffers: u32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer5(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr), @bitCast(buffers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` targetRect: QRect `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    /// ` sourceRect: QRect `
    ///
    /// ` buffers: u32 `
    ///
    /// ` filter: u32 `
    ///
    pub fn BlitFramebuffer6(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype, buffers: u32, filter: u32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer6(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr), @bitCast(buffers), @bitCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    /// ` buffers: u32 `
    ///
    pub fn BlitFramebuffer32(target: anytype, source: anytype, buffers: u32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer32(@ptrCast(target.ptr), @ptrCast(source.ptr), @bitCast(buffers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    /// ` buffers: u32 `
    ///
    /// ` filter: u32 `
    ///
    pub fn BlitFramebuffer42(target: anytype, source: anytype, buffers: u32, filter: u32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer42(@ptrCast(target.ptr), @ptrCast(source.ptr), @bitCast(buffers), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#dtor.QOpenGLFramebufferObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn Delete(self: QOpenGLFramebufferObject) void {
        qtc.QOpenGLFramebufferObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html)
pub const QOpenGLFramebufferObjectFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLFramebufferObjectFormat,

    pub const _is_QOpenGLFramebufferObjectFormat = {};

    /// New constructs a new QOpenGLFramebufferObjectFormat object.
    ///
    pub fn New() QOpenGLFramebufferObjectFormat {
        return .{ .ptr = qtc.QOpenGLFramebufferObjectFormat_new() };
    }

    /// New2 constructs a new QOpenGLFramebufferObjectFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLFramebufferObjectFormat `
    ///
    pub fn New2(other: anytype) QOpenGLFramebufferObjectFormat {
        comptime _ = @TypeOf(other)._is_QOpenGLFramebufferObjectFormat;
        return .{ .ptr = qtc.QOpenGLFramebufferObjectFormat_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` other: QOpenGLFramebufferObjectFormat `
    ///
    pub fn OperatorAssign(self: QOpenGLFramebufferObjectFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLFramebufferObjectFormat;
        qtc.QOpenGLFramebufferObjectFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setSamples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` samples: i32 `
    ///
    pub fn SetSamples(self: QOpenGLFramebufferObjectFormat, samples: i32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetSamples(@ptrCast(self.ptr), @bitCast(samples));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#samples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    pub fn Samples(self: QOpenGLFramebufferObjectFormat) i32 {
        return qtc.QOpenGLFramebufferObjectFormat_Samples(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetMipmap(self: QOpenGLFramebufferObjectFormat, enabled: bool) void {
        qtc.QOpenGLFramebufferObjectFormat_SetMipmap(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#mipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    pub fn Mipmap(self: QOpenGLFramebufferObjectFormat) bool {
        return qtc.QOpenGLFramebufferObjectFormat_Mipmap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` attachment: qopenglframebufferobject_enums.Attachment `
    ///
    pub fn SetAttachment(self: QOpenGLFramebufferObjectFormat, attachment: i32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetAttachment(@ptrCast(self.ptr), @bitCast(attachment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#attachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ## Returns:
    ///
    /// ` qopenglframebufferobject_enums.Attachment `
    ///
    pub fn Attachment(self: QOpenGLFramebufferObjectFormat) i32 {
        return qtc.QOpenGLFramebufferObjectFormat_Attachment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setTextureTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` target: u32 `
    ///
    pub fn SetTextureTarget(self: QOpenGLFramebufferObjectFormat, target: u32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetTextureTarget(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setInternalTextureFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` internalTextureFormat: u32 `
    ///
    pub fn SetInternalTextureFormat(self: QOpenGLFramebufferObjectFormat, internalTextureFormat: u32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetInternalTextureFormat(@ptrCast(self.ptr), @bitCast(internalTextureFormat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` other: QOpenGLFramebufferObjectFormat `
    ///
    pub fn OperatorEqual(self: QOpenGLFramebufferObjectFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QOpenGLFramebufferObjectFormat;
        return qtc.QOpenGLFramebufferObjectFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` other: QOpenGLFramebufferObjectFormat `
    ///
    pub fn OperatorNotEqual(self: QOpenGLFramebufferObjectFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QOpenGLFramebufferObjectFormat;
        return qtc.QOpenGLFramebufferObjectFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#dtor.QOpenGLFramebufferObjectFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    pub fn Delete(self: QOpenGLFramebufferObjectFormat) void {
        qtc.QOpenGLFramebufferObjectFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#public-types)
pub const enums = struct {
    pub const Attachment = enum(i32) {
        pub const NoAttachment: i32 = 0;
        pub const CombinedDepthStencil: i32 = 1;
        pub const Depth: i32 = 2;
    };

    pub const FramebufferRestorePolicy = enum(i32) {
        pub const DontRestoreFramebufferBinding: i32 = 0;
        pub const RestoreFramebufferBindingToDefault: i32 = 1;
        pub const RestoreFrameBufferBinding: i32 = 2;
    };
};
