const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopenglframebufferobject_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qopenglframebufferobject.html
pub const qopenglframebufferobject = struct {
    /// New constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` size: QtC.QSize ```
    pub fn New(size: ?*anyopaque) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new(@ptrCast(size));
    }

    /// New2 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` width: i32, height: i32 ```
    pub fn New2(width: i32, height: i32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new2(@intCast(width), @intCast(height));
    }

    /// New3 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` size: QtC.QSize, attachment: qopenglframebufferobject_enums.Attachment ```
    pub fn New3(size: ?*anyopaque, attachment: i32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new3(@ptrCast(size), @intCast(attachment));
    }

    /// New4 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` width: i32, height: i32, attachment: qopenglframebufferobject_enums.Attachment ```
    pub fn New4(width: i32, height: i32, attachment: i32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new4(@intCast(width), @intCast(height), @intCast(attachment));
    }

    /// New5 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` size: QtC.QSize, format: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn New5(size: ?*anyopaque, format: ?*anyopaque) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new5(@ptrCast(size), @ptrCast(format));
    }

    /// New6 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` width: i32, height: i32, format: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn New6(width: i32, height: i32, format: ?*anyopaque) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new6(@intCast(width), @intCast(height), @ptrCast(format));
    }

    /// New7 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` size: QtC.QSize, target: u32 ```
    pub fn New7(size: ?*anyopaque, target: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new7(@ptrCast(size), @intCast(target));
    }

    /// New8 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` width: i32, height: i32, target: u32 ```
    pub fn New8(width: i32, height: i32, target: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new8(@intCast(width), @intCast(height), @intCast(target));
    }

    /// New9 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` size: QtC.QSize, attachment: qopenglframebufferobject_enums.Attachment, target: u32 ```
    pub fn New9(size: ?*anyopaque, attachment: i32, target: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new9(@ptrCast(size), @intCast(attachment), @intCast(target));
    }

    /// New10 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` size: QtC.QSize, attachment: qopenglframebufferobject_enums.Attachment, target: u32, internalFormat: u32 ```
    pub fn New10(size: ?*anyopaque, attachment: i32, target: u32, internalFormat: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new10(@ptrCast(size), @intCast(attachment), @intCast(target), @intCast(internalFormat));
    }

    /// New11 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` width: i32, height: i32, attachment: qopenglframebufferobject_enums.Attachment, target: u32 ```
    pub fn New11(width: i32, height: i32, attachment: i32, target: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new11(@intCast(width), @intCast(height), @intCast(attachment), @intCast(target));
    }

    /// New12 constructs a new QOpenGLFramebufferObject object.
    ///
    /// ``` width: i32, height: i32, attachment: qopenglframebufferobject_enums.Attachment, target: u32, internalFormat: u32 ```
    pub fn New12(width: i32, height: i32, attachment: i32, target: u32, internalFormat: u32) QtC.QOpenGLFramebufferObject {
        return qtc.QOpenGLFramebufferObject_new12(@intCast(width), @intCast(height), @intCast(attachment), @intCast(target), @intCast(internalFormat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, size: QtC.QSize ```
    pub fn AddColorAttachment(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, width: i32, height: i32 ```
    pub fn AddColorAttachment2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment2(@ptrCast(self), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#format)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn Format(self: ?*anyopaque) QtC.QOpenGLFramebufferObjectFormat {
        return qtc.QOpenGLFramebufferObject_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#isValid)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObject_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#isBound)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn IsBound(self: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObject_IsBound(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#bind)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn Bind(self: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObject_Bind(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#release)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn Release(self: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObject_Release(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#width)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QOpenGLFramebufferObject_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#height)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QOpenGLFramebufferObject_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#texture)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn Texture(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFramebufferObject_Texture(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#textures)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, allocator: std.mem.Allocator ```
    pub fn Textures(self: ?*anyopaque, allocator: std.mem.Allocator) []u32 {
        const _arr: qtc.libqt_list = qtc.QOpenGLFramebufferObject_Textures(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(u32, _arr.len) catch @panic("qopenglframebufferobject.Textures: Memory allocation failed");
        const _data: [*]u32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#takeTexture)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn TakeTexture(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFramebufferObject_TakeTexture(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#takeTexture)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, colorAttachmentIndex: i32 ```
    pub fn TakeTexture2(self: ?*anyopaque, colorAttachmentIndex: i32) u32 {
        return qtc.QOpenGLFramebufferObject_TakeTexture2(@ptrCast(self), @intCast(colorAttachmentIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#size)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QOpenGLFramebufferObject_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#sizes)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, allocator: std.mem.Allocator ```
    pub fn Sizes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSize {
        const _arr: qtc.libqt_list = qtc.QOpenGLFramebufferObject_Sizes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSize, _arr.len) catch @panic("qopenglframebufferobject.Sizes: Memory allocation failed");
        const _data: [*]QtC.QSize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn ToImage(self: ?*anyopaque) QtC.QImage {
        return qtc.QOpenGLFramebufferObject_ToImage(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, flipped: bool, colorAttachmentIndex: i32 ```
    pub fn ToImage2(self: ?*anyopaque, flipped: bool, colorAttachmentIndex: i32) QtC.QImage {
        return qtc.QOpenGLFramebufferObject_ToImage2(@ptrCast(self), flipped, @intCast(colorAttachmentIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#attachment)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    ///
    /// Returns: ``` qopenglframebufferobject_enums.Attachment ```
    pub fn Attachment(self: ?*anyopaque) i32 {
        return qtc.QOpenGLFramebufferObject_Attachment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#setAttachment)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, attachment: qopenglframebufferobject_enums.Attachment ```
    pub fn SetAttachment(self: ?*anyopaque, attachment: i32) void {
        qtc.QOpenGLFramebufferObject_SetAttachment(@ptrCast(self), @intCast(attachment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#handle)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn Handle(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFramebufferObject_Handle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#bindDefault)
    ///
    ///
    pub fn BindDefault() bool {
        return qtc.QOpenGLFramebufferObject_BindDefault();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#hasOpenGLFramebufferObjects)
    ///
    ///
    pub fn HasOpenGLFramebufferObjects() bool {
        return qtc.QOpenGLFramebufferObject_HasOpenGLFramebufferObjects();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#hasOpenGLFramebufferBlit)
    ///
    ///
    pub fn HasOpenGLFramebufferBlit() bool {
        return qtc.QOpenGLFramebufferObject_HasOpenGLFramebufferBlit();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ``` target: QtC.QOpenGLFramebufferObject, targetRect: QtC.QRect, source: QtC.QOpenGLFramebufferObject, sourceRect: QtC.QRect, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32, restorePolicy: qopenglframebufferobject_enums.FramebufferRestorePolicy ```
    pub fn BlitFramebuffer(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32, restorePolicy: i32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect), @intCast(buffers), @intCast(filter), @intCast(readColorAttachmentIndex), @intCast(drawColorAttachmentIndex), @intCast(restorePolicy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ``` target: QtC.QOpenGLFramebufferObject, targetRect: QtC.QRect, source: QtC.QOpenGLFramebufferObject, sourceRect: QtC.QRect, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32 ```
    pub fn BlitFramebuffer2(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque, buffers: u32, filter: u32, readColorAttachmentIndex: i32, drawColorAttachmentIndex: i32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer2(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect), @intCast(buffers), @intCast(filter), @intCast(readColorAttachmentIndex), @intCast(drawColorAttachmentIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ``` target: QtC.QOpenGLFramebufferObject, targetRect: QtC.QRect, source: QtC.QOpenGLFramebufferObject, sourceRect: QtC.QRect ```
    pub fn BlitFramebuffer3(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer3(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ``` target: QtC.QOpenGLFramebufferObject, source: QtC.QOpenGLFramebufferObject ```
    pub fn BlitFramebuffer4(target: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer4(@ptrCast(target), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, size: QtC.QSize, internalFormat: u32 ```
    pub fn AddColorAttachment22(self: ?*anyopaque, size: ?*anyopaque, internalFormat: u32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment22(@ptrCast(self), @ptrCast(size), @intCast(internalFormat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#addColorAttachment)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, width: i32, height: i32, internalFormat: u32 ```
    pub fn AddColorAttachment3(self: ?*anyopaque, width: i32, height: i32, internalFormat: u32) void {
        qtc.QOpenGLFramebufferObject_AddColorAttachment3(@ptrCast(self), @intCast(width), @intCast(height), @intCast(internalFormat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#toImage)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject, flipped: bool ```
    pub fn ToImage1(self: ?*anyopaque, flipped: bool) QtC.QImage {
        return qtc.QOpenGLFramebufferObject_ToImage1(@ptrCast(self), flipped);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ``` target: QtC.QOpenGLFramebufferObject, targetRect: QtC.QRect, source: QtC.QOpenGLFramebufferObject, sourceRect: QtC.QRect, buffers: u32 ```
    pub fn BlitFramebuffer5(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque, buffers: u32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer5(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect), @intCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ``` target: QtC.QOpenGLFramebufferObject, targetRect: QtC.QRect, source: QtC.QOpenGLFramebufferObject, sourceRect: QtC.QRect, buffers: u32, filter: u32 ```
    pub fn BlitFramebuffer6(target: ?*anyopaque, targetRect: ?*anyopaque, source: ?*anyopaque, sourceRect: ?*anyopaque, buffers: u32, filter: u32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer6(@ptrCast(target), @ptrCast(targetRect), @ptrCast(source), @ptrCast(sourceRect), @intCast(buffers), @intCast(filter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ``` target: QtC.QOpenGLFramebufferObject, source: QtC.QOpenGLFramebufferObject, buffers: u32 ```
    pub fn BlitFramebuffer32(target: ?*anyopaque, source: ?*anyopaque, buffers: u32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer32(@ptrCast(target), @ptrCast(source), @intCast(buffers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#blitFramebuffer)
    ///
    /// ``` target: QtC.QOpenGLFramebufferObject, source: QtC.QOpenGLFramebufferObject, buffers: u32, filter: u32 ```
    pub fn BlitFramebuffer42(target: ?*anyopaque, source: ?*anyopaque, buffers: u32, filter: u32) void {
        qtc.QOpenGLFramebufferObject_BlitFramebuffer42(@ptrCast(target), @ptrCast(source), @intCast(buffers), @intCast(filter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobject.html#dtor.QOpenGLFramebufferObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLFramebufferObject ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html
pub const qopenglframebufferobjectformat = struct {
    /// New constructs a new QOpenGLFramebufferObjectFormat object.
    ///
    ///
    pub fn New() QtC.QOpenGLFramebufferObjectFormat {
        return qtc.QOpenGLFramebufferObjectFormat_new();
    }

    /// New2 constructs a new QOpenGLFramebufferObjectFormat object.
    ///
    /// ``` other: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn New2(other: ?*anyopaque) QtC.QOpenGLFramebufferObjectFormat {
        return qtc.QOpenGLFramebufferObjectFormat_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-eq)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat, other: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObjectFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setSamples)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat, samples: i32 ```
    pub fn SetSamples(self: ?*anyopaque, samples: i32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetSamples(@ptrCast(self), @intCast(samples));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#samples)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn Samples(self: ?*anyopaque) i32 {
        return qtc.QOpenGLFramebufferObjectFormat_Samples(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setMipmap)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat, enabled: bool ```
    pub fn SetMipmap(self: ?*anyopaque, enabled: bool) void {
        qtc.QOpenGLFramebufferObjectFormat_SetMipmap(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#mipmap)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn Mipmap(self: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObjectFormat_Mipmap(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setAttachment)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat, attachment: qopenglframebufferobject_enums.Attachment ```
    pub fn SetAttachment(self: ?*anyopaque, attachment: i32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetAttachment(@ptrCast(self), @intCast(attachment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#attachment)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat ```
    ///
    /// Returns: ``` qopenglframebufferobject_enums.Attachment ```
    pub fn Attachment(self: ?*anyopaque) i32 {
        return qtc.QOpenGLFramebufferObjectFormat_Attachment(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setTextureTarget)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat, target: u32 ```
    pub fn SetTextureTarget(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetTextureTarget(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#setInternalTextureFormat)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat, internalTextureFormat: u32 ```
    pub fn SetInternalTextureFormat(self: ?*anyopaque, internalTextureFormat: u32) void {
        qtc.QOpenGLFramebufferObjectFormat_SetInternalTextureFormat(@ptrCast(self), @intCast(internalTextureFormat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat, other: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObjectFormat_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#operator-not-eq)
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat, other: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QOpenGLFramebufferObjectFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglframebufferobjectformat.html#dtor.QOpenGLFramebufferObjectFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLFramebufferObjectFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFramebufferObjectFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qopenglframebufferobject.html#types
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
