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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    pub fn new(_size: anytype) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new(@ptrCast(_size.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn new2(_width: i32, _height: i32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new2(@bitCast(_width), @bitCast(_height)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` _attachment: qopenglframebufferobject_enums.Attachment `
    ///
    pub fn new3(_size: anytype, _attachment: i32) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new3(@ptrCast(_size.ptr), @bitCast(_attachment)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _attachment: qopenglframebufferobject_enums.Attachment `
    ///
    pub fn new4(_width: i32, _height: i32, _attachment: i32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new4(@bitCast(_width), @bitCast(_height), @bitCast(_attachment)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` _format: QOpenGLFramebufferObjectFormat `
    ///
    pub fn new5(_size: anytype, _format: anytype) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(_size)._is_QSize;
        comptime _ = @TypeOf(_format)._is_QOpenGLFramebufferObjectFormat;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new5(@ptrCast(_size.ptr), @ptrCast(_format.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _format: QOpenGLFramebufferObjectFormat `
    ///
    pub fn new6(_width: i32, _height: i32, _format: anytype) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(_format)._is_QOpenGLFramebufferObjectFormat;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new6(@bitCast(_width), @bitCast(_height), @ptrCast(_format.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` target: u32 `
    ///
    pub fn new7(_size: anytype, target: u32) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new7(@ptrCast(_size.ptr), @bitCast(target)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` target: u32 `
    ///
    pub fn new8(_width: i32, _height: i32, target: u32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new8(@bitCast(_width), @bitCast(_height), @bitCast(target)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` _attachment: qopenglframebufferobject_enums.Attachment `
    ///
    /// ` target: u32 `
    ///
    pub fn new9(_size: anytype, _attachment: i32, target: u32) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new9(@ptrCast(_size.ptr), @bitCast(_attachment), @bitCast(target)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: QSize `
    ///
    /// ` _attachment: qopenglframebufferobject_enums.Attachment `
    ///
    /// ` target: u32 `
    ///
    /// ` internalFormat: u32 `
    ///
    pub fn new10(_size: anytype, _attachment: i32, target: u32, internalFormat: u32) QOpenGLFramebufferObject {
        comptime _ = @TypeOf(_size)._is_QSize;
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new10(@ptrCast(_size.ptr), @bitCast(_attachment), @bitCast(target), @bitCast(internalFormat)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _attachment: qopenglframebufferobject_enums.Attachment `
    ///
    /// ` target: u32 `
    ///
    pub fn new11(_width: i32, _height: i32, _attachment: i32, target: u32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new11(@bitCast(_width), @bitCast(_height), @bitCast(_attachment), @bitCast(target)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QOpenGLFramebufferObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` _attachment: qopenglframebufferobject_enums.Attachment `
    ///
    /// ` target: u32 `
    ///
    /// ` internalFormat: u32 `
    ///
    pub fn new12(_width: i32, _height: i32, _attachment: i32, target: u32, internalFormat: u32) QOpenGLFramebufferObject {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_new12(@bitCast(_width), @bitCast(_height), @bitCast(_attachment), @bitCast(target), @bitCast(internalFormat)) };
    }

    /// ### DEPRECATED: Use `addColorAttachment` instead
    ///
    pub const AddColorAttachment = addColorAttachment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` _size: QSize `
    ///
    pub fn addColorAttachment(self: QOpenGLFramebufferObject, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QOpenGLFramebufferObject_AddColorAttachment(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `addColorAttachment2` instead
    ///
    pub const AddColorAttachment2 = addColorAttachment2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn addColorAttachment2(self: QOpenGLFramebufferObject, _width: i32, _height: i32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment2(@ptrCast(self.ptr), @bitCast(_width), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn format(self: QOpenGLFramebufferObject) QOpenGLFramebufferObjectFormat {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn isValid(self: QOpenGLFramebufferObject) bool {
        return qtc.QOpenGLFramebufferObject_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBound` instead
    ///
    pub const IsBound = isBound;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#isBound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn isBound(self: QOpenGLFramebufferObject) bool {
        return qtc.QOpenGLFramebufferObject_IsBound(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bind` instead
    ///
    pub const Bind = bind;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn bind(self: QOpenGLFramebufferObject) bool {
        return qtc.QOpenGLFramebufferObject_Bind(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `release` instead
    ///
    pub const Release = release;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#release)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn release(self: QOpenGLFramebufferObject) bool {
        return qtc.QOpenGLFramebufferObject_Release(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn width(self: QOpenGLFramebufferObject) i32 {
        return qtc.QOpenGLFramebufferObject_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn height(self: QOpenGLFramebufferObject) i32 {
        return qtc.QOpenGLFramebufferObject_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `texture` instead
    ///
    pub const Texture = texture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#texture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn texture(self: QOpenGLFramebufferObject) u32 {
        return qtc.QOpenGLFramebufferObject_Texture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textures` instead
    ///
    pub const Textures = textures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#textures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textures(self: QOpenGLFramebufferObject, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLFramebufferObject_Textures(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("QOpenGLFramebufferObject.textures: Memory allocation failed");
        const _data_val: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `takeTexture` instead
    ///
    pub const TakeTexture = takeTexture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#takeTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn takeTexture(self: QOpenGLFramebufferObject) u32 {
        return qtc.QOpenGLFramebufferObject_TakeTexture(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `takeTexture2` instead
    ///
    pub const TakeTexture2 = takeTexture2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#takeTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` colorAttachmentIndex: i32 `
    ///
    pub fn takeTexture2(self: QOpenGLFramebufferObject, colorAttachmentIndex: i32) u32 {
        return qtc.QOpenGLFramebufferObject_TakeTexture2(@ptrCast(self.ptr), @bitCast(colorAttachmentIndex));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn size(self: QOpenGLFramebufferObject) QSize {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizes` instead
    ///
    pub const Sizes = sizes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#sizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sizes(self: QOpenGLFramebufferObject, allocator: std.mem.Allocator) []QSize {
        const _arr: qtc.libqt_list = qtc.QOpenGLFramebufferObject_Sizes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSize, _arr.len) catch @panic("QOpenGLFramebufferObject.sizes: Memory allocation failed");
        const _data_val: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toImage` instead
    ///
    pub const ToImage = toImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn toImage(self: QOpenGLFramebufferObject) QImage {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_ToImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImage2` instead
    ///
    pub const ToImage2 = toImage2;

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
    pub fn toImage2(self: QOpenGLFramebufferObject, flipped: bool, colorAttachmentIndex: i32) QImage {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_ToImage2(@ptrCast(self.ptr), flipped, @bitCast(colorAttachmentIndex)) };
    }

    /// ### DEPRECATED: Use `attachment` instead
    ///
    pub const Attachment = attachment;

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
    pub fn attachment(self: QOpenGLFramebufferObject) i32 {
        return qtc.QOpenGLFramebufferObject_Attachment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAttachment` instead
    ///
    pub const SetAttachment = setAttachment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#setAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` _attachment: qopenglframebufferobject_enums.Attachment `
    ///
    pub fn setAttachment(self: QOpenGLFramebufferObject, _attachment: i32) void {
        qtc.QOpenGLFramebufferObject_SetAttachment(@ptrCast(self.ptr), @bitCast(_attachment));
    }

    /// ### DEPRECATED: Use `handle` instead
    ///
    pub const Handle = handle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn handle(self: QOpenGLFramebufferObject) u32 {
        return qtc.QOpenGLFramebufferObject_Handle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bindDefault` instead
    ///
    pub const BindDefault = bindDefault;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#bindDefault)
    ///
    pub fn bindDefault() bool {
        return qtc.QOpenGLFramebufferObject_BindDefault();
    }

    /// ### DEPRECATED: Use `hasOpenGLFramebufferObjects` instead
    ///
    pub const HasOpenGLFramebufferObjects = hasOpenGLFramebufferObjects;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#hasOpenGLFramebufferObjects)
    ///
    pub fn hasOpenGLFramebufferObjects() bool {
        return qtc.QOpenGLFramebufferObject_HasOpenGLFramebufferObjects();
    }

    /// ### DEPRECATED: Use `hasOpenGLFramebufferBlit` instead
    ///
    pub const HasOpenGLFramebufferBlit = hasOpenGLFramebufferBlit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#hasOpenGLFramebufferBlit)
    ///
    pub fn hasOpenGLFramebufferBlit() bool {
        return qtc.QOpenGLFramebufferObject_HasOpenGLFramebufferBlit();
    }

    /// ### DEPRECATED: Use `blitFramebuffer` instead
    ///
    pub const BlitFramebuffer = blitFramebuffer;

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
    pub fn blitFramebuffer(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32, restorePolicy: i32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr), @bitCast(buffers), @bitCast(filter), @bitCast(readColorAttachmentIndex), @bitCast(drawColorAttachmentIndex), @bitCast(restorePolicy));
    }

    /// ### DEPRECATED: Use `blitFramebuffer2` instead
    ///
    pub const BlitFramebuffer2 = blitFramebuffer2;

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
    pub fn blitFramebuffer2(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer2(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr), @bitCast(buffers), @bitCast(filter), @bitCast(readColorAttachmentIndex), @bitCast(drawColorAttachmentIndex));
    }

    /// ### DEPRECATED: Use `blitFramebuffer3` instead
    ///
    pub const BlitFramebuffer3 = blitFramebuffer3;

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
    pub fn blitFramebuffer3(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer3(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr));
    }

    /// ### DEPRECATED: Use `blitFramebuffer4` instead
    ///
    pub const BlitFramebuffer4 = blitFramebuffer4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QOpenGLFramebufferObject `
    ///
    /// ` source: QOpenGLFramebufferObject `
    ///
    pub fn blitFramebuffer4(target: anytype, source: anytype) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer4(@ptrCast(target.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `addColorAttachment22` instead
    ///
    pub const AddColorAttachment22 = addColorAttachment22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` _size: QSize `
    ///
    /// ` internalFormat: u32 `
    ///
    pub fn addColorAttachment22(self: QOpenGLFramebufferObject, _size: anytype, internalFormat: u32) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QOpenGLFramebufferObject_AddColorAttachment22(@ptrCast(self.ptr), @ptrCast(_size.ptr), @bitCast(internalFormat));
    }

    /// ### DEPRECATED: Use `addColorAttachment3` instead
    ///
    pub const AddColorAttachment3 = addColorAttachment3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    /// ` internalFormat: u32 `
    ///
    pub fn addColorAttachment3(self: QOpenGLFramebufferObject, _width: i32, _height: i32, internalFormat: u32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment3(@ptrCast(self.ptr), @bitCast(_width), @bitCast(_height), @bitCast(internalFormat));
    }

    /// ### DEPRECATED: Use `toImage1` instead
    ///
    pub const ToImage1 = toImage1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    /// ` flipped: bool `
    ///
    pub fn toImage1(self: QOpenGLFramebufferObject, flipped: bool) QImage {
        return .{ .ptr = qtc.QOpenGLFramebufferObject_ToImage1(@ptrCast(self.ptr), flipped) };
    }

    /// ### DEPRECATED: Use `blitFramebuffer5` instead
    ///
    pub const BlitFramebuffer5 = blitFramebuffer5;

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
    pub fn blitFramebuffer5(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype, buffers: u32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer5(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr), @bitCast(buffers));
    }

    /// ### DEPRECATED: Use `blitFramebuffer6` instead
    ///
    pub const BlitFramebuffer6 = blitFramebuffer6;

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
    pub fn blitFramebuffer6(target: anytype, targetRect: anytype, source: anytype, sourceRect: anytype, buffers: u32, filter: u32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(targetRect)._is_QRect;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(sourceRect)._is_QRect;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer6(@ptrCast(target.ptr), @ptrCast(targetRect.ptr), @ptrCast(source.ptr), @ptrCast(sourceRect.ptr), @bitCast(buffers), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `blitFramebuffer32` instead
    ///
    pub const BlitFramebuffer32 = blitFramebuffer32;

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
    pub fn blitFramebuffer32(target: anytype, source: anytype, buffers: u32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer32(@ptrCast(target.ptr), @ptrCast(source.ptr), @bitCast(buffers));
    }

    /// ### DEPRECATED: Use `blitFramebuffer42` instead
    ///
    pub const BlitFramebuffer42 = blitFramebuffer42;

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
    pub fn blitFramebuffer42(target: anytype, source: anytype, buffers: u32, filter: u32) void {
        comptime _ = @TypeOf(target)._is_QOpenGLFramebufferObject;
        comptime _ = @TypeOf(source)._is_QOpenGLFramebufferObject;
        qtc.QOpenGLFramebufferObject_BlitFramebuffer42(@ptrCast(target.ptr), @ptrCast(source.ptr), @bitCast(buffers), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#dtor.QOpenGLFramebufferObject)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFramebufferObject `
    ///
    pub fn delete(self: QOpenGLFramebufferObject) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLFramebufferObjectFormat object in C++ memory
    ///
    pub fn new() QOpenGLFramebufferObjectFormat {
        return .{ .ptr = qtc.QOpenGLFramebufferObjectFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLFramebufferObjectFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOpenGLFramebufferObjectFormat `
    ///
    pub fn new2(other: anytype) QOpenGLFramebufferObjectFormat {
        comptime _ = @TypeOf(other)._is_QOpenGLFramebufferObjectFormat;
        return .{ .ptr = qtc.QOpenGLFramebufferObjectFormat_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` other: QOpenGLFramebufferObjectFormat `
    ///
    pub fn operatorAssign(self: QOpenGLFramebufferObjectFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QOpenGLFramebufferObjectFormat;
        qtc.QOpenGLFramebufferObjectFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setSamples` instead
    ///
    pub const SetSamples = setSamples;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setSamples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` _samples: i32 `
    ///
    pub fn setSamples(self: QOpenGLFramebufferObjectFormat, _samples: i32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetSamples(@ptrCast(self.ptr), @bitCast(_samples));
    }

    /// ### DEPRECATED: Use `samples` instead
    ///
    pub const Samples = samples;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#samples)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    pub fn samples(self: QOpenGLFramebufferObjectFormat) i32 {
        return qtc.QOpenGLFramebufferObjectFormat_Samples(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMipmap` instead
    ///
    pub const SetMipmap = setMipmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` enabled: bool `
    ///
    pub fn setMipmap(self: QOpenGLFramebufferObjectFormat, enabled: bool) void {
        qtc.QOpenGLFramebufferObjectFormat_SetMipmap(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `mipmap` instead
    ///
    pub const Mipmap = mipmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#mipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    pub fn mipmap(self: QOpenGLFramebufferObjectFormat) bool {
        return qtc.QOpenGLFramebufferObjectFormat_Mipmap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAttachment` instead
    ///
    pub const SetAttachment = setAttachment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setAttachment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` _attachment: qopenglframebufferobject_enums.Attachment `
    ///
    pub fn setAttachment(self: QOpenGLFramebufferObjectFormat, _attachment: i32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetAttachment(@ptrCast(self.ptr), @bitCast(_attachment));
    }

    /// ### DEPRECATED: Use `attachment` instead
    ///
    pub const Attachment = attachment;

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
    pub fn attachment(self: QOpenGLFramebufferObjectFormat) i32 {
        return qtc.QOpenGLFramebufferObjectFormat_Attachment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextureTarget` instead
    ///
    pub const SetTextureTarget = setTextureTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setTextureTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` target: u32 `
    ///
    pub fn setTextureTarget(self: QOpenGLFramebufferObjectFormat, target: u32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetTextureTarget(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `setInternalTextureFormat` instead
    ///
    pub const SetInternalTextureFormat = setInternalTextureFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setInternalTextureFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` internalTextureFormat: u32 `
    ///
    pub fn setInternalTextureFormat(self: QOpenGLFramebufferObjectFormat, internalTextureFormat: u32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetInternalTextureFormat(@ptrCast(self.ptr), @bitCast(internalTextureFormat));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` other: QOpenGLFramebufferObjectFormat `
    ///
    pub fn operatorEqual(self: QOpenGLFramebufferObjectFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QOpenGLFramebufferObjectFormat;
        return qtc.QOpenGLFramebufferObjectFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    /// ` other: QOpenGLFramebufferObjectFormat `
    ///
    pub fn operatorNotEqual(self: QOpenGLFramebufferObjectFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QOpenGLFramebufferObjectFormat;
        return qtc.QOpenGLFramebufferObjectFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#dtor.QOpenGLFramebufferObjectFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLFramebufferObjectFormat `
    ///
    pub fn delete(self: QOpenGLFramebufferObjectFormat) void {
        qtc.QOpenGLFramebufferObjectFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglframebufferobject.html#public-types)
pub const enums = struct {
    pub const Attachment = enum {
        pub const NoAttachment: i32 = 0;
        pub const CombinedDepthStencil: i32 = 1;
        pub const Depth: i32 = 2;
    };

    pub const FramebufferRestorePolicy = enum {
        pub const DontRestoreFramebufferBinding: i32 = 0;
        pub const RestoreFramebufferBindingToDefault: i32 = 1;
        pub const RestoreFrameBufferBinding: i32 = 2;
    };
};
