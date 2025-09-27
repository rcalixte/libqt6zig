const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopenglfunctions_enums = @import("libqopenglfunctions.zig").enums;

/// https://doc.qt.io/qt-6/qopenglextrafunctions.html
pub const qopenglextrafunctions = struct {
    /// New constructs a new QOpenGLExtraFunctions object.
    ///
    ///
    pub fn New() QtC.QOpenGLExtraFunctions {
        return qtc.QOpenGLExtraFunctions_new();
    }

    /// New2 constructs a new QOpenGLExtraFunctions object.
    ///
    /// ``` context: QtC.QOpenGLContext ```
    pub fn New2(context: ?*anyopaque) QtC.QOpenGLExtraFunctions {
        return qtc.QOpenGLExtraFunctions_new2(@ptrCast(context));
    }

    /// New3 constructs a new QOpenGLExtraFunctions object.
    ///
    /// ``` param1: QtC.QOpenGLExtraFunctions ```
    pub fn New3(param1: ?*anyopaque) QtC.QOpenGLExtraFunctions {
        return qtc.QOpenGLExtraFunctions_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glReadBuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32 ```
    pub fn GlReadBuffer(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLExtraFunctions_GlReadBuffer(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawRangeElements)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque ```
    pub fn GlDrawRangeElements(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawRangeElements(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), indices);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque ```
    pub fn GlTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*anyopaque ```
    pub fn GlTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(typeVal), pixels);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlCopyTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCompressedTexImage3D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*anyopaque ```
    pub fn GlCompressedTexImage3D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlCompressedTexImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(border), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCompressedTexSubImage3D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*anyopaque ```
    pub fn GlCompressedTexSubImage3D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlCompressedTexSubImage3D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(zoffset), @intCast(width), @intCast(height), @intCast(depth), @intCast(format), @intCast(imageSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenQueries)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, ids: *u32 ```
    pub fn GlGenQueries(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGenQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteQueries)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, ids: *const u32 ```
    pub fn GlDeleteQueries(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteQueries(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsQuery)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, id: u32 ```
    pub fn GlIsQuery(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsQuery(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBeginQuery)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, id: u32 ```
    pub fn GlBeginQuery(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLExtraFunctions_GlBeginQuery(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEndQuery)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32 ```
    pub fn GlEndQuery(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLExtraFunctions_GlEndQuery(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetQueryiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetQueryiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetQueryiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetQueryObjectuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, id: u32, pname: u32, params: *u32 ```
    pub fn GlGetQueryObjectuiv(self: ?*anyopaque, id: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGetQueryObjectuiv(@ptrCast(self), @intCast(id), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUnmapBuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32 ```
    pub fn GlUnmapBuffer(self: ?*anyopaque, target: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlUnmapBuffer(@ptrCast(self), @intCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBufferPointerv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: ?*anyopaque ```
    pub fn GlGetBufferPointerv(self: ?*anyopaque, target: u32, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlGetBufferPointerv(@ptrCast(self), @intCast(target), @intCast(pname), params);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix2x3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix2x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix3x2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix3x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix2x4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix2x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix4x2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4x2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix4x2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix3x4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3x4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix3x4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix4x3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4x3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix4x3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlitFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32 ```
    pub fn GlBlitFramebuffer(self: ?*anyopaque, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlitFramebuffer(@ptrCast(self), @intCast(srcX0), @intCast(srcY0), @intCast(srcX1), @intCast(srcY1), @intCast(dstX0), @intCast(dstY0), @intCast(dstX1), @intCast(dstY1), @intCast(mask), @intCast(filter));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glRenderbufferStorageMultisample)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32 ```
    pub fn GlRenderbufferStorageMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlRenderbufferStorageMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferTextureLayer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, attachment: u32, texture: u32, level: i32, layer: i32 ```
    pub fn GlFramebufferTextureLayer(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferTextureLayer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(texture), @intCast(level), @intCast(layer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMapBufferRange)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, offset: i64, length: i64, access: u32 ```
    pub fn GlMapBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64, access: u32) ?*anyopaque {
        return qtc.QOpenGLExtraFunctions_GlMapBufferRange(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(length), @intCast(access));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFlushMappedBufferRange)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, offset: i64, length: i64 ```
    pub fn GlFlushMappedBufferRange(self: ?*anyopaque, target: u32, offset: i64, length: i64) void {
        qtc.QOpenGLExtraFunctions_GlFlushMappedBufferRange(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindVertexArray)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, array: u32 ```
    pub fn GlBindVertexArray(self: ?*anyopaque, array: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindVertexArray(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteVertexArrays)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, arrays: *const u32 ```
    pub fn GlDeleteVertexArrays(self: ?*anyopaque, n: i32, arrays: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteVertexArrays(@ptrCast(self), @intCast(n), @ptrCast(arrays));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenVertexArrays)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, arrays: *u32 ```
    pub fn GlGenVertexArrays(self: ?*anyopaque, n: i32, arrays: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGenVertexArrays(@ptrCast(self), @intCast(n), @ptrCast(arrays));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsVertexArray)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, array: u32 ```
    pub fn GlIsVertexArray(self: ?*anyopaque, array: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsVertexArray(@ptrCast(self), @intCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetIntegeri_v)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, index: u32, data: *i32 ```
    pub fn GlGetIntegeriV(self: ?*anyopaque, target: u32, index: u32, data: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetIntegeriV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBeginTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, primitiveMode: u32 ```
    pub fn GlBeginTransformFeedback(self: ?*anyopaque, primitiveMode: u32) void {
        qtc.QOpenGLExtraFunctions_GlBeginTransformFeedback(@ptrCast(self), @intCast(primitiveMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEndTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlEndTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlEndTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindBufferRange)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, index: u32, buffer: u32, offset: i64, size: i64 ```
    pub fn GlBindBufferRange(self: ?*anyopaque, target: u32, index: u32, buffer: u32, offset: i64, size: i64) void {
        qtc.QOpenGLExtraFunctions_GlBindBufferRange(@ptrCast(self), @intCast(target), @intCast(index), @intCast(buffer), @intCast(offset), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindBufferBase)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, index: u32, buffer: u32 ```
    pub fn GlBindBufferBase(self: ?*anyopaque, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindBufferBase(@ptrCast(self), @intCast(target), @intCast(index), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribIPointer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque ```
    pub fn GlVertexAttribIPointer(self: ?*anyopaque, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribIPointer(@ptrCast(self), @intCast(index), @intCast(size), @intCast(typeVal), @intCast(stride), pointer);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetVertexAttribIiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetVertexAttribIiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetVertexAttribIiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetVertexAttribIuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, pname: u32, params: *u32 ```
    pub fn GlGetVertexAttribIuiv(self: ?*anyopaque, index: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGetVertexAttribIuiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlVertexAttribI4i(self: ?*anyopaque, index: u32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4i(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, x: u32, y: u32, z: u32, w: u32 ```
    pub fn GlVertexAttribI4ui(self: ?*anyopaque, index: u32, x: u32, y: u32, z: u32, w: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4ui(@ptrCast(self), @intCast(index), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, v: *const i32 ```
    pub fn GlVertexAttribI4iv(self: ?*anyopaque, index: u32, v: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4iv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, v: *const u32 ```
    pub fn GlVertexAttribI4uiv(self: ?*anyopaque, index: u32, v: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4uiv(@ptrCast(self), @intCast(index), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetUniformuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, params: *u32 ```
    pub fn GlGetUniformuiv(self: ?*anyopaque, program: u32, location: i32, params: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGetUniformuiv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetFragDataLocation)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, name: *const i8 ```
    pub fn GlGetFragDataLocation(self: ?*anyopaque, program: u32, name: *const i8) i32 {
        return qtc.QOpenGLExtraFunctions_GlGetFragDataLocation(@ptrCast(self), @intCast(program), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform1ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, v0: u32 ```
    pub fn GlUniform1ui(self: ?*anyopaque, location: i32, v0: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform1ui(@ptrCast(self), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform2ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32 ```
    pub fn GlUniform2ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform2ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform3ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32, v2: u32 ```
    pub fn GlUniform3ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform3ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform4ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32, v2: u32, v3: u32 ```
    pub fn GlUniform4ui(self: ?*anyopaque, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform4ui(@ptrCast(self), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform1uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform1uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform1uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform2uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform2uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform2uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform3uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform3uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform3uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform4uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, value: *const u32 ```
    pub fn GlUniform4uiv(self: ?*anyopaque, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform4uiv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: *const i32 ```
    pub fn GlClearBufferiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferiv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: *const u32 ```
    pub fn GlClearBufferuiv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferuiv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: *const f32 ```
    pub fn GlClearBufferfv(self: ?*anyopaque, buffer: u32, drawbuffer: i32, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferfv(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferfi)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32 ```
    pub fn GlClearBufferfi(self: ?*anyopaque, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferfi(@ptrCast(self), @intCast(buffer), @intCast(drawbuffer), @intCast(depth), @intCast(stencil));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetStringi)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, name: u32, index: u32 ```
    pub fn GlGetStringi(self: ?*anyopaque, name: u32, index: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLExtraFunctions_GlGetStringi(@ptrCast(self), @intCast(name), @intCast(index)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64 ```
    pub fn GlCopyBufferSubData(self: ?*anyopaque, readTarget: u32, writeTarget: u32, readOffset: i64, writeOffset: i64, size: i64) void {
        qtc.QOpenGLExtraFunctions_GlCopyBufferSubData(@ptrCast(self), @intCast(readTarget), @intCast(writeTarget), @intCast(readOffset), @intCast(writeOffset), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformsiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32 ```
    pub fn GlGetActiveUniformsiv(self: ?*anyopaque, program: u32, uniformCount: i32, uniformIndices: *const u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformsiv(@ptrCast(self), @intCast(program), @intCast(uniformCount), @ptrCast(uniformIndices), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetUniformBlockIndex)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, uniformBlockName: *const i8 ```
    pub fn GlGetUniformBlockIndex(self: ?*anyopaque, program: u32, uniformBlockName: *const i8) u32 {
        return qtc.QOpenGLExtraFunctions_GlGetUniformBlockIndex(@ptrCast(self), @intCast(program), @ptrCast(uniformBlockName));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformBlockiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32 ```
    pub fn GlGetActiveUniformBlockiv(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformBlockiv(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformBlockName)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8 ```
    pub fn GlGetActiveUniformBlockName(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, bufSize: i32, length: *i32, uniformBlockName: *i8) void {
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformBlockName(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(bufSize), @ptrCast(length), @ptrCast(uniformBlockName));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformBlockBinding)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32 ```
    pub fn GlUniformBlockBinding(self: ?*anyopaque, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniformBlockBinding(@ptrCast(self), @intCast(program), @intCast(uniformBlockIndex), @intCast(uniformBlockBinding));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawArraysInstanced)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, first: i32, count: i32, instancecount: i32 ```
    pub fn GlDrawArraysInstanced(self: ?*anyopaque, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawArraysInstanced(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count), @intCast(instancecount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsInstanced)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32 ```
    pub fn GlDrawElementsInstanced(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsInstanced(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(instancecount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInteger64v)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pname: u32, data: *i64 ```
    pub fn GlGetInteger64v(self: ?*anyopaque, pname: u32, data: *i64) void {
        qtc.QOpenGLExtraFunctions_GlGetInteger64v(@ptrCast(self), @intCast(pname), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInteger64i_v)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, index: u32, data: *i64 ```
    pub fn GlGetInteger64iV(self: ?*anyopaque, target: u32, index: u32, data: *i64) void {
        qtc.QOpenGLExtraFunctions_GlGetInteger64iV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBufferParameteri64v)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *i64 ```
    pub fn GlGetBufferParameteri64v(self: ?*anyopaque, target: u32, pname: u32, params: *i64) void {
        qtc.QOpenGLExtraFunctions_GlGetBufferParameteri64v(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenSamplers)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, count: i32, samplers: *u32 ```
    pub fn GlGenSamplers(self: ?*anyopaque, count: i32, samplers: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGenSamplers(@ptrCast(self), @intCast(count), @ptrCast(samplers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteSamplers)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, count: i32, samplers: *const u32 ```
    pub fn GlDeleteSamplers(self: ?*anyopaque, count: i32, samplers: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteSamplers(@ptrCast(self), @intCast(count), @ptrCast(samplers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsSampler)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32 ```
    pub fn GlIsSampler(self: ?*anyopaque, sampler: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsSampler(@ptrCast(self), @intCast(sampler));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindSampler)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, unit: u32, sampler: u32 ```
    pub fn GlBindSampler(self: ?*anyopaque, unit: u32, sampler: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindSampler(@ptrCast(self), @intCast(unit), @intCast(sampler));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameteri)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, param: i32 ```
    pub fn GlSamplerParameteri(self: ?*anyopaque, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameteri(@ptrCast(self), @intCast(sampler), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, param: *const i32 ```
    pub fn GlSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameteriv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterf)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, param: f32 ```
    pub fn GlSamplerParameterf(self: ?*anyopaque, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterf(@ptrCast(self), @intCast(sampler), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, param: *const f32 ```
    pub fn GlSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterfv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, params: *i32 ```
    pub fn GlGetSamplerParameteriv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameteriv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, params: *f32 ```
    pub fn GlGetSamplerParameterfv(self: ?*anyopaque, sampler: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterfv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribDivisor)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, divisor: u32 ```
    pub fn GlVertexAttribDivisor(self: ?*anyopaque, index: u32, divisor: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribDivisor(@ptrCast(self), @intCast(index), @intCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, id: u32 ```
    pub fn GlBindTransformFeedback(self: ?*anyopaque, target: u32, id: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindTransformFeedback(@ptrCast(self), @intCast(target), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteTransformFeedbacks)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, ids: *const u32 ```
    pub fn GlDeleteTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteTransformFeedbacks(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenTransformFeedbacks)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, ids: *u32 ```
    pub fn GlGenTransformFeedbacks(self: ?*anyopaque, n: i32, ids: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGenTransformFeedbacks(@ptrCast(self), @intCast(n), @ptrCast(ids));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, id: u32 ```
    pub fn GlIsTransformFeedback(self: ?*anyopaque, id: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsTransformFeedback(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPauseTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlPauseTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlPauseTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glResumeTransformFeedback)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlResumeTransformFeedback(self: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlResumeTransformFeedback(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramBinary)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, binaryFormat: u32, binary: ?*anyopaque, length: i32 ```
    pub fn GlProgramBinary(self: ?*anyopaque, program: u32, binaryFormat: u32, binary: ?*anyopaque, length: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramBinary(@ptrCast(self), @intCast(program), @intCast(binaryFormat), binary, @intCast(length));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramParameteri)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, pname: u32, value: i32 ```
    pub fn GlProgramParameteri(self: ?*anyopaque, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramParameteri(@ptrCast(self), @intCast(program), @intCast(pname), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage2D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, levels: i32, internalformat: u32, width: i32, height: i32 ```
    pub fn GlTexStorage2D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage2D(@ptrCast(self), @intCast(target), @intCast(levels), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage3D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32 ```
    pub fn GlTexStorage3D(self: ?*anyopaque, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage3D(@ptrCast(self), @intCast(target), @intCast(levels), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInternalformativ)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: *i32 ```
    pub fn GlGetInternalformativ(self: ?*anyopaque, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetInternalformativ(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(pname), @intCast(bufSize), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDispatchCompute)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, num_groups_x: u32, num_groups_y: u32, num_groups_z: u32 ```
    pub fn GlDispatchCompute(self: ?*anyopaque, num_groups_x: u32, num_groups_y: u32, num_groups_z: u32) void {
        qtc.QOpenGLExtraFunctions_GlDispatchCompute(@ptrCast(self), @intCast(num_groups_x), @intCast(num_groups_y), @intCast(num_groups_z));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDispatchComputeIndirect)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indirect: i64 ```
    pub fn GlDispatchComputeIndirect(self: ?*anyopaque, indirect: i64) void {
        qtc.QOpenGLExtraFunctions_GlDispatchComputeIndirect(@ptrCast(self), @intCast(indirect));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawArraysIndirect)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, indirect: ?*anyopaque ```
    pub fn GlDrawArraysIndirect(self: ?*anyopaque, mode: u32, indirect: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawArraysIndirect(@ptrCast(self), @intCast(mode), indirect);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsIndirect)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, typeVal: u32, indirect: ?*anyopaque ```
    pub fn GlDrawElementsIndirect(self: ?*anyopaque, mode: u32, typeVal: u32, indirect: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsIndirect(@ptrCast(self), @intCast(mode), @intCast(typeVal), indirect);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferParameteri)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, param: i32 ```
    pub fn GlFramebufferParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetFramebufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetFramebufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetFramebufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramInterfaceiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, programInterface: u32, pname: u32, params: *i32 ```
    pub fn GlGetProgramInterfaceiv(self: ?*anyopaque, program: u32, programInterface: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetProgramInterfaceiv(@ptrCast(self), @intCast(program), @intCast(programInterface), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceIndex)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, programInterface: u32, name: *const i8 ```
    pub fn GlGetProgramResourceIndex(self: ?*anyopaque, program: u32, programInterface: u32, name: *const i8) u32 {
        return qtc.QOpenGLExtraFunctions_GlGetProgramResourceIndex(@ptrCast(self), @intCast(program), @intCast(programInterface), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceName)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, programInterface: u32, index: u32, bufSize: i32, length: *i32, name: *i8 ```
    pub fn GlGetProgramResourceName(self: ?*anyopaque, program: u32, programInterface: u32, index: u32, bufSize: i32, length: *i32, name: *i8) void {
        qtc.QOpenGLExtraFunctions_GlGetProgramResourceName(@ptrCast(self), @intCast(program), @intCast(programInterface), @intCast(index), @intCast(bufSize), @ptrCast(length), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceLocation)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, programInterface: u32, name: *const i8 ```
    pub fn GlGetProgramResourceLocation(self: ?*anyopaque, program: u32, programInterface: u32, name: *const i8) i32 {
        return qtc.QOpenGLExtraFunctions_GlGetProgramResourceLocation(@ptrCast(self), @intCast(program), @intCast(programInterface), @ptrCast(name));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUseProgramStages)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pipeline: u32, stages: u32, program: u32 ```
    pub fn GlUseProgramStages(self: ?*anyopaque, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLExtraFunctions_GlUseProgramStages(@ptrCast(self), @intCast(pipeline), @intCast(stages), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glActiveShaderProgram)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pipeline: u32, program: u32 ```
    pub fn GlActiveShaderProgram(self: ?*anyopaque, pipeline: u32, program: u32) void {
        qtc.QOpenGLExtraFunctions_GlActiveShaderProgram(@ptrCast(self), @intCast(pipeline), @intCast(program));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindProgramPipeline)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pipeline: u32 ```
    pub fn GlBindProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteProgramPipelines)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, pipelines: *const u32 ```
    pub fn GlDeleteProgramPipelines(self: ?*anyopaque, n: i32, pipelines: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteProgramPipelines(@ptrCast(self), @intCast(n), @ptrCast(pipelines));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenProgramPipelines)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, pipelines: *u32 ```
    pub fn GlGenProgramPipelines(self: ?*anyopaque, n: i32, pipelines: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGenProgramPipelines(@ptrCast(self), @intCast(n), @ptrCast(pipelines));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsProgramPipeline)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pipeline: u32 ```
    pub fn GlIsProgramPipeline(self: ?*anyopaque, pipeline: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramPipelineiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pipeline: u32, pname: u32, params: *i32 ```
    pub fn GlGetProgramPipelineiv(self: ?*anyopaque, pipeline: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetProgramPipelineiv(@ptrCast(self), @intCast(pipeline), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: i32 ```
    pub fn GlProgramUniform1i(self: ?*anyopaque, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32 ```
    pub fn GlProgramUniform2i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32, v2: i32 ```
    pub fn GlProgramUniform3i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32 ```
    pub fn GlProgramUniform4i(self: ?*anyopaque, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4i(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: u32 ```
    pub fn GlProgramUniform1ui(self: ?*anyopaque, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32 ```
    pub fn GlProgramUniform2ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32, v2: u32 ```
    pub fn GlProgramUniform3ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4ui)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32 ```
    pub fn GlProgramUniform4ui(self: ?*anyopaque, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4ui(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: f32 ```
    pub fn GlProgramUniform1f(self: ?*anyopaque, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1f(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32 ```
    pub fn GlProgramUniform2f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2f(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32, v2: f32 ```
    pub fn GlProgramUniform3f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3f(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32 ```
    pub fn GlProgramUniform4f(self: ?*anyopaque, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4f(@ptrCast(self), @intCast(program), @intCast(location), @intCast(v0), @intCast(v1), @intCast(v2), @intCast(v3));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const i32 ```
    pub fn GlProgramUniform1iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const i32 ```
    pub fn GlProgramUniform2iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const i32 ```
    pub fn GlProgramUniform3iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const i32 ```
    pub fn GlProgramUniform4iv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4iv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const u32 ```
    pub fn GlProgramUniform1uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const u32 ```
    pub fn GlProgramUniform2uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const u32 ```
    pub fn GlProgramUniform3uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4uiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const u32 ```
    pub fn GlProgramUniform4uiv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4uiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const f32 ```
    pub fn GlProgramUniform1fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const f32 ```
    pub fn GlProgramUniform2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const f32 ```
    pub fn GlProgramUniform3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: *const f32 ```
    pub fn GlProgramUniform4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2x3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix2x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2x3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3x2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix3x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3x2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2x4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix2x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2x4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4x2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix4x2fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4x2fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3x4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix3x4fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3x4fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4x3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlProgramUniformMatrix4x3fv(self: ?*anyopaque, program: u32, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4x3fv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glValidateProgramPipeline)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pipeline: u32 ```
    pub fn GlValidateProgramPipeline(self: ?*anyopaque, pipeline: u32) void {
        qtc.QOpenGLExtraFunctions_GlValidateProgramPipeline(@ptrCast(self), @intCast(pipeline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramPipelineInfoLog)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pipeline: u32, bufSize: i32, length: *i32, infoLog: *i8 ```
    pub fn GlGetProgramPipelineInfoLog(self: ?*anyopaque, pipeline: u32, bufSize: i32, length: *i32, infoLog: *i8) void {
        qtc.QOpenGLExtraFunctions_GlGetProgramPipelineInfoLog(@ptrCast(self), @intCast(pipeline), @intCast(bufSize), @ptrCast(length), @ptrCast(infoLog));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindImageTexture)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32 ```
    pub fn GlBindImageTexture(self: ?*anyopaque, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindImageTexture(@ptrCast(self), @intCast(unit), @intCast(texture), @intCast(level), @intCast(layered), @intCast(layer), @intCast(access), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBooleani_v)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, index: u32, data: *u8 ```
    pub fn GlGetBooleaniV(self: ?*anyopaque, target: u32, index: u32, data: *u8) void {
        qtc.QOpenGLExtraFunctions_GlGetBooleaniV(@ptrCast(self), @intCast(target), @intCast(index), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMemoryBarrier)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, barriers: u32 ```
    pub fn GlMemoryBarrier(self: ?*anyopaque, barriers: u32) void {
        qtc.QOpenGLExtraFunctions_GlMemoryBarrier(@ptrCast(self), @intCast(barriers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMemoryBarrierByRegion)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, barriers: u32 ```
    pub fn GlMemoryBarrierByRegion(self: ?*anyopaque, barriers: u32) void {
        qtc.QOpenGLExtraFunctions_GlMemoryBarrierByRegion(@ptrCast(self), @intCast(barriers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage2DMultisample)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, fixedsamplelocations: u8 ```
    pub fn GlTexStorage2DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage2DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(fixedsamplelocations));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetMultisamplefv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pname: u32, index: u32, val: *f32 ```
    pub fn GlGetMultisamplefv(self: ?*anyopaque, pname: u32, index: u32, val: *f32) void {
        qtc.QOpenGLExtraFunctions_GlGetMultisamplefv(@ptrCast(self), @intCast(pname), @intCast(index), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSampleMaski)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, maskNumber: u32, mask: u32 ```
    pub fn GlSampleMaski(self: ?*anyopaque, maskNumber: u32, mask: u32) void {
        qtc.QOpenGLExtraFunctions_GlSampleMaski(@ptrCast(self), @intCast(maskNumber), @intCast(mask));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexLevelParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, pname: u32, params: *i32 ```
    pub fn GlGetTexLevelParameteriv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexLevelParameteriv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexLevelParameterfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, pname: u32, params: *f32 ```
    pub fn GlGetTexLevelParameterfv(self: ?*anyopaque, target: u32, level: i32, pname: u32, params: *f32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexLevelParameterfv(@ptrCast(self), @intCast(target), @intCast(level), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindVertexBuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, bindingindex: u32, buffer: u32, offset: i64, stride: i32 ```
    pub fn GlBindVertexBuffer(self: ?*anyopaque, bindingindex: u32, buffer: u32, offset: i64, stride: i32) void {
        qtc.QOpenGLExtraFunctions_GlBindVertexBuffer(@ptrCast(self), @intCast(bindingindex), @intCast(buffer), @intCast(offset), @intCast(stride));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribFormat)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, attribindex: u32, size: i32, typeVal: u32, normalized: u8, relativeoffset: u32 ```
    pub fn GlVertexAttribFormat(self: ?*anyopaque, attribindex: u32, size: i32, typeVal: u32, normalized: u8, relativeoffset: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribFormat(@ptrCast(self), @intCast(attribindex), @intCast(size), @intCast(typeVal), @intCast(normalized), @intCast(relativeoffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribIFormat)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, attribindex: u32, size: i32, typeVal: u32, relativeoffset: u32 ```
    pub fn GlVertexAttribIFormat(self: ?*anyopaque, attribindex: u32, size: i32, typeVal: u32, relativeoffset: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribIFormat(@ptrCast(self), @intCast(attribindex), @intCast(size), @intCast(typeVal), @intCast(relativeoffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribBinding)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, attribindex: u32, bindingindex: u32 ```
    pub fn GlVertexAttribBinding(self: ?*anyopaque, attribindex: u32, bindingindex: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribBinding(@ptrCast(self), @intCast(attribindex), @intCast(bindingindex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexBindingDivisor)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, bindingindex: u32, divisor: u32 ```
    pub fn GlVertexBindingDivisor(self: ?*anyopaque, bindingindex: u32, divisor: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexBindingDivisor(@ptrCast(self), @intCast(bindingindex), @intCast(divisor));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendBarrier)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlBlendBarrier(self: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlBlendBarrier(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyImageSubData)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, srcName: u32, srcTarget: u32, srcLevel: i32, srcX: i32, srcY: i32, srcZ: i32, dstName: u32, dstTarget: u32, dstLevel: i32, dstX: i32, dstY: i32, dstZ: i32, srcWidth: i32, srcHeight: i32, srcDepth: i32 ```
    pub fn GlCopyImageSubData(self: ?*anyopaque, srcName: u32, srcTarget: u32, srcLevel: i32, srcX: i32, srcY: i32, srcZ: i32, dstName: u32, dstTarget: u32, dstLevel: i32, dstX: i32, dstY: i32, dstZ: i32, srcWidth: i32, srcHeight: i32, srcDepth: i32) void {
        qtc.QOpenGLExtraFunctions_GlCopyImageSubData(@ptrCast(self), @intCast(srcName), @intCast(srcTarget), @intCast(srcLevel), @intCast(srcX), @intCast(srcY), @intCast(srcZ), @intCast(dstName), @intCast(dstTarget), @intCast(dstLevel), @intCast(dstX), @intCast(dstY), @intCast(dstZ), @intCast(srcWidth), @intCast(srcHeight), @intCast(srcDepth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDebugMessageControl)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, source: u32, typeVal: u32, severity: u32, count: i32, ids: *const u32, enabled: u8 ```
    pub fn GlDebugMessageControl(self: ?*anyopaque, source: u32, typeVal: u32, severity: u32, count: i32, ids: *const u32, enabled: u8) void {
        qtc.QOpenGLExtraFunctions_GlDebugMessageControl(@ptrCast(self), @intCast(source), @intCast(typeVal), @intCast(severity), @intCast(count), @ptrCast(ids), @intCast(enabled));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDebugMessageInsert)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, source: u32, typeVal: u32, id: u32, severity: u32, length: i32, buf: *const i8 ```
    pub fn GlDebugMessageInsert(self: ?*anyopaque, source: u32, typeVal: u32, id: u32, severity: u32, length: i32, buf: *const i8) void {
        qtc.QOpenGLExtraFunctions_GlDebugMessageInsert(@ptrCast(self), @intCast(source), @intCast(typeVal), @intCast(id), @intCast(severity), @intCast(length), @ptrCast(buf));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPushDebugGroup)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, source: u32, id: u32, length: i32, message: *const i8 ```
    pub fn GlPushDebugGroup(self: ?*anyopaque, source: u32, id: u32, length: i32, message: *const i8) void {
        qtc.QOpenGLExtraFunctions_GlPushDebugGroup(@ptrCast(self), @intCast(source), @intCast(id), @intCast(length), @ptrCast(message));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPopDebugGroup)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlPopDebugGroup(self: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlPopDebugGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glObjectLabel)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, identifier: u32, name: u32, length: i32, label: *const i8 ```
    pub fn GlObjectLabel(self: ?*anyopaque, identifier: u32, name: u32, length: i32, label: *const i8) void {
        qtc.QOpenGLExtraFunctions_GlObjectLabel(@ptrCast(self), @intCast(identifier), @intCast(name), @intCast(length), @ptrCast(label));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetObjectLabel)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, identifier: u32, name: u32, bufSize: i32, length: *i32, label: *i8 ```
    pub fn GlGetObjectLabel(self: ?*anyopaque, identifier: u32, name: u32, bufSize: i32, length: *i32, label: *i8) void {
        qtc.QOpenGLExtraFunctions_GlGetObjectLabel(@ptrCast(self), @intCast(identifier), @intCast(name), @intCast(bufSize), @ptrCast(length), @ptrCast(label));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glObjectPtrLabel)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, ptr: ?*anyopaque, length: i32, label: *const i8 ```
    pub fn GlObjectPtrLabel(self: ?*anyopaque, ptr: ?*anyopaque, length: i32, label: *const i8) void {
        qtc.QOpenGLExtraFunctions_GlObjectPtrLabel(@ptrCast(self), ptr, @intCast(length), @ptrCast(label));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetObjectPtrLabel)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, ptr: ?*anyopaque, bufSize: i32, length: *i32, label: *i8 ```
    pub fn GlGetObjectPtrLabel(self: ?*anyopaque, ptr: ?*anyopaque, bufSize: i32, length: *i32, label: *i8) void {
        qtc.QOpenGLExtraFunctions_GlGetObjectPtrLabel(@ptrCast(self), ptr, @intCast(bufSize), @ptrCast(length), @ptrCast(label));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetPointerv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pname: u32, params: ?*anyopaque ```
    pub fn GlGetPointerv(self: ?*anyopaque, pname: u32, params: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlGetPointerv(@ptrCast(self), @intCast(pname), params);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEnablei)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, index: u32 ```
    pub fn GlEnablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLExtraFunctions_GlEnablei(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDisablei)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, index: u32 ```
    pub fn GlDisablei(self: ?*anyopaque, target: u32, index: u32) void {
        qtc.QOpenGLExtraFunctions_GlDisablei(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendEquationi)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buf: u32, mode: u32 ```
    pub fn GlBlendEquationi(self: ?*anyopaque, buf: u32, mode: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendEquationi(@ptrCast(self), @intCast(buf), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendEquationSeparatei)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buf: u32, modeRGB: u32, modeAlpha: u32 ```
    pub fn GlBlendEquationSeparatei(self: ?*anyopaque, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendEquationSeparatei(@ptrCast(self), @intCast(buf), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendFunci)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buf: u32, src: u32, dst: u32 ```
    pub fn GlBlendFunci(self: ?*anyopaque, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendFunci(@ptrCast(self), @intCast(buf), @intCast(src), @intCast(dst));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendFuncSeparatei)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32 ```
    pub fn GlBlendFuncSeparatei(self: ?*anyopaque, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendFuncSeparatei(@ptrCast(self), @intCast(buf), @intCast(srcRGB), @intCast(dstRGB), @intCast(srcAlpha), @intCast(dstAlpha));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glColorMaski)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, r: u8, g: u8, b: u8, a: u8 ```
    pub fn GlColorMaski(self: ?*anyopaque, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLExtraFunctions_GlColorMaski(@ptrCast(self), @intCast(index), @intCast(r), @intCast(g), @intCast(b), @intCast(a));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsEnabledi)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, index: u32 ```
    pub fn GlIsEnabledi(self: ?*anyopaque, target: u32, index: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsEnabledi(@ptrCast(self), @intCast(target), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, basevertex: i32 ```
    pub fn GlDrawElementsBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsBaseVertex(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawRangeElementsBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque, basevertex: i32 ```
    pub fn GlDrawRangeElementsBaseVertex(self: ?*anyopaque, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*anyopaque, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawRangeElementsBaseVertex(@ptrCast(self), @intCast(mode), @intCast(start), @intCast(end), @intCast(count), @intCast(typeVal), indices, @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32, basevertex: i32 ```
    pub fn GlDrawElementsInstancedBaseVertex(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsInstancedBaseVertex(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices, @intCast(instancecount), @intCast(basevertex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferTexture)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, attachment: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture(self: ?*anyopaque, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferTexture(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(texture), @intCast(level));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPrimitiveBoundingBox)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, minX: f32, minY: f32, minZ: f32, minW: f32, maxX: f32, maxY: f32, maxZ: f32, maxW: f32 ```
    pub fn GlPrimitiveBoundingBox(self: ?*anyopaque, minX: f32, minY: f32, minZ: f32, minW: f32, maxX: f32, maxY: f32, maxZ: f32, maxW: f32) void {
        qtc.QOpenGLExtraFunctions_GlPrimitiveBoundingBox(@ptrCast(self), @intCast(minX), @intCast(minY), @intCast(minZ), @intCast(minW), @intCast(maxX), @intCast(maxY), @intCast(maxZ), @intCast(maxW));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glReadnPixels)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, bufSize: i32, data: ?*anyopaque ```
    pub fn GlReadnPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, bufSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlReadnPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), @intCast(bufSize), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: *f32 ```
    pub fn GlGetnUniformfv(self: ?*anyopaque, program: u32, location: i32, bufSize: i32, params: *f32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformfv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(bufSize), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: *i32 ```
    pub fn GlGetnUniformiv(self: ?*anyopaque, program: u32, location: i32, bufSize: i32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(bufSize), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: *u32 ```
    pub fn GlGetnUniformuiv(self: ?*anyopaque, program: u32, location: i32, bufSize: i32, params: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformuiv(@ptrCast(self), @intCast(program), @intCast(location), @intCast(bufSize), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMinSampleShading)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, value: f32 ```
    pub fn GlMinSampleShading(self: ?*anyopaque, value: f32) void {
        qtc.QOpenGLExtraFunctions_GlMinSampleShading(@ptrCast(self), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPatchParameteri)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pname: u32, value: i32 ```
    pub fn GlPatchParameteri(self: ?*anyopaque, pname: u32, value: i32) void {
        qtc.QOpenGLExtraFunctions_GlPatchParameteri(@ptrCast(self), @intCast(pname), @intCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlTexParameterIiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *const u32 ```
    pub fn GlTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlTexParameterIuiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameterIiv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexParameterIiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *u32 ```
    pub fn GlGetTexParameterIuiv(self: ?*anyopaque, target: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexParameterIuiv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, param: *const i32 ```
    pub fn GlSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterIiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, param: *const u32 ```
    pub fn GlSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, param: *const u32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterIuiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(param));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterIiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, params: *i32 ```
    pub fn GlGetSamplerParameterIiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterIiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterIuiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sampler: u32, pname: u32, params: *u32 ```
    pub fn GlGetSamplerParameterIuiv(self: ?*anyopaque, sampler: u32, pname: u32, params: *u32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterIuiv(@ptrCast(self), @intCast(sampler), @intCast(pname), @ptrCast(params));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexBuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, internalformat: u32, buffer: u32 ```
    pub fn GlTexBuffer(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLExtraFunctions_GlTexBuffer(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(buffer));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexBufferRange)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, internalformat: u32, buffer: u32, offset: i64, size: i64 ```
    pub fn GlTexBufferRange(self: ?*anyopaque, target: u32, internalformat: u32, buffer: u32, offset: i64, size: i64) void {
        qtc.QOpenGLExtraFunctions_GlTexBufferRange(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(buffer), @intCast(offset), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage3DMultisample)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8 ```
    pub fn GlTexStorage3DMultisample(self: ?*anyopaque, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage3DMultisample(@ptrCast(self), @intCast(target), @intCast(samples), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(depth), @intCast(fixedsamplelocations));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#openGLFeatures)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    ///
    /// Returns: ``` flag of qopenglfunctions_enums.OpenGLFeature ```
    pub fn OpenGLFeatures(self: ?*anyopaque) i32 {
        return qtc.QOpenGLFunctions_OpenGLFeatures(@ptrCast(self));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#hasOpenGLFeature)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, feature: qopenglfunctions_enums.OpenGLFeature ```
    pub fn HasOpenGLFeature(self: ?*anyopaque, feature: i32) bool {
        return qtc.QOpenGLFunctions_HasOpenGLFeature(@ptrCast(self), @intCast(feature));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindTexture)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, texture: u32 ```
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_GlBindTexture(@ptrCast(self), @intCast(target), @intCast(texture));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFunc)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, sfactor: u32, dfactor: u32 ```
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_GlBlendFunc(@ptrCast(self), @intCast(sfactor), @intCast(dfactor));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClear)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mask: u32 ```
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_GlClear(@ptrCast(self), @intCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearColor)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearStencil)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, s: i32 ```
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_GlClearStencil(@ptrCast(self), @intCast(s));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glColorMask)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, red: u8, green: u8, blue: u8, alpha: u8 ```
    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_GlColorMask(@ptrCast(self), @intCast(red), @intCast(green), @intCast(blue), @intCast(alpha));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32 ```
    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(border));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCullFace)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32 ```
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlCullFace(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteTextures)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, textures: *const u32 ```
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthFunc)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, func: u32 ```
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_GlDepthFunc(@ptrCast(self), @intCast(func));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthMask)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, flag: u8 ```
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_GlDepthMask(@ptrCast(self), @intCast(flag));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisable)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, cap: u32 ```
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_GlDisable(@ptrCast(self), @intCast(cap));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawArrays)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, first: i32, count: i32 ```
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_GlDrawArrays(@ptrCast(self), @intCast(mode), @intCast(first), @intCast(count));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawElements)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: *void ```
    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: *const void) void {
        qtc.QOpenGLFunctions_GlDrawElements(@ptrCast(self), @intCast(mode), @intCast(count), @intCast(typeVal), indices);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnable)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, cap: u32 ```
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_GlEnable(@ptrCast(self), @intCast(cap));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFinish)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlFinish(@ptrCast(self));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFlush)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlFlush(@ptrCast(self));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFrontFace)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32 ```
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlFrontFace(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenTextures)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, textures: *u32 ```
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: *u32) void {
        qtc.QOpenGLFunctions_GlGenTextures(@ptrCast(self), @intCast(n), @ptrCast(textures));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBooleanv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pname: u32, params: *u8 ```
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: *u8) void {
        qtc.QOpenGLFunctions_GlGetBooleanv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFloatv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pname: u32, params: *f32 ```
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetFloatv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetIntegerv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pname: u32, params: *i32 ```
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetIntegerv(@ptrCast(self), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetString)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, name: u32 ```
    pub fn GlGetString(self: ?*anyopaque, name: u32) ?*const u8 {
        return @ptrCast(qtc.QOpenGLFunctions_GlGetString(@ptrCast(self), @intCast(name)));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *f32 ```
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glHint)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, mode: u32 ```
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_GlHint(@ptrCast(self), @intCast(target), @intCast(mode));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsEnabled)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, cap: u32 ```
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsEnabled(@ptrCast(self), @intCast(cap));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsTexture)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, texture: u32 ```
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsTexture(@ptrCast(self), @intCast(texture));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glLineWidth)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, width: f32 ```
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_GlLineWidth(@ptrCast(self), @intCast(width));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glPixelStorei)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, pname: u32, param: i32 ```
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlPixelStorei(@ptrCast(self), @intCast(pname), @intCast(param));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glPolygonOffset)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, factor: f32, units: f32 ```
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_GlPolygonOffset(@ptrCast(self), @intCast(factor), @intCast(units));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glReadPixels)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void) void {
        qtc.QOpenGLFunctions_GlReadPixels(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glScissor)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlScissor(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFunc)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFunc(@ptrCast(self), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMask)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mask: u32 ```
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMask(@ptrCast(self), @intCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOp)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, fail: u32, zfail: u32, zpass: u32 ```
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOp(@ptrCast(self), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_GlTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(format), @intCast(typeVal), pixels);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterf)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, param: f32 ```
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_GlTexParameterf(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *const f32 ```
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: *const f32) void {
        qtc.QOpenGLFunctions_GlTexParameterfv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteri)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, param: i32 ```
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlTexParameteri(@ptrCast(self), @intCast(target), @intCast(pname), @intCast(param));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *const i32 ```
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *const i32) void {
        qtc.QOpenGLFunctions_GlTexParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *void ```
    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: *const void) void {
        qtc.QOpenGLFunctions_GlTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(typeVal), pixels);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glViewport)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32 ```
    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlViewport(@ptrCast(self), @intCast(x), @intCast(y), @intCast(width), @intCast(height));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glActiveTexture)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, texture: u32 ```
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_GlActiveTexture(@ptrCast(self), @intCast(texture));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glAttachShader)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, shader: u32 ```
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlAttachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, index: u32, name: []const u8 ```
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: []const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_GlBindAttribLocation(@ptrCast(self), @intCast(program), @intCast(index), name_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindBuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, buffer: u32 ```
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_GlBindBuffer(@ptrCast(self), @intCast(target), @intCast(buffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, framebuffer: u32 ```
    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindFramebuffer(@ptrCast(self), @intCast(target), @intCast(framebuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, renderbuffer: u32 ```
    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindRenderbuffer(@ptrCast(self), @intCast(target), @intCast(renderbuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendColor)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, red: f32, green: f32, blue: f32, alpha: f32 ```
    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlBlendColor(@ptrCast(self), red, green, blue, alpha);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquation)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, mode: u32 ```
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquation(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquationSeparate)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, modeRGB: u32, modeAlpha: u32 ```
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquationSeparate(@ptrCast(self), @intCast(modeRGB), @intCast(modeAlpha));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32 ```
    pub fn GlBlendFuncSeparate(self: ?*anyopaque, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendFuncSeparate(@ptrCast(self), @intCast(srcRGB), @intCast(dstRGB), @intCast(srcAlpha), @intCast(dstAlpha));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferData)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, size: i64, data: ?*anyopaque, usage: u32 ```
    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: ?*anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_GlBufferData(@ptrCast(self), @intCast(target), @intCast(size), data, @intCast(usage));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferSubData)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, offset: i64, size: i64, data: ?*anyopaque ```
    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlBufferSubData(@ptrCast(self), @intCast(target), @intCast(offset), @intCast(size), data);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearDepthf)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, depth: f32 ```
    pub fn GlClearDepthf(self: ?*anyopaque, depth: f32) void {
        qtc.QOpenGLFunctions_GlClearDepthf(@ptrCast(self), depth);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompileShader)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, shader: u32 ```
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_GlCompileShader(@ptrCast(self), @intCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexImage2D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque ```
    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(internalformat), @intCast(width), @intCast(height), @intCast(border), @intCast(imageSize), data);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexSubImage2D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque ```
    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexSubImage2D(@ptrCast(self), @intCast(target), @intCast(level), @intCast(xoffset), @intCast(yoffset), @intCast(width), @intCast(height), @intCast(format), @intCast(imageSize), data);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateProgram)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_GlCreateProgram(@ptrCast(self));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateShader)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, typeVal: u32 ```
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_GlCreateShader(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteBuffers)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, buffers: *const u32 ```
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteFramebuffers)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, framebuffers: *const u32 ```
    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteFramebuffers(@ptrCast(self), @intCast(n), @ptrCast(framebuffers));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteProgram)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32 ```
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlDeleteProgram(@ptrCast(self), @intCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteRenderbuffers)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, renderbuffers: *const u32 ```
    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *const u32) void {
        qtc.QOpenGLFunctions_GlDeleteRenderbuffers(@ptrCast(self), @intCast(n), @ptrCast(renderbuffers));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteShader)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, shader: u32 ```
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_GlDeleteShader(@ptrCast(self), @intCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthRangef)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, zNear: f32, zFar: f32 ```
    pub fn GlDepthRangef(self: ?*anyopaque, zNear: f32, zFar: f32) void {
        qtc.QOpenGLFunctions_GlDepthRangef(@ptrCast(self), zNear, zFar);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDetachShader)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, shader: u32 ```
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlDetachShader(@ptrCast(self), @intCast(program), @intCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32 ```
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_GlDisableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnableVertexAttribArray)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32 ```
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_GlEnableVertexAttribArray(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32 ```
    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlFramebufferRenderbuffer(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(renderbuffertarget), @intCast(renderbuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferTexture2D)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32 ```
    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_GlFramebufferTexture2D(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(textarget), @intCast(texture), @intCast(level));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenBuffers)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, buffers: *u32 ```
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenBuffers(@ptrCast(self), @intCast(n), @ptrCast(buffers));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenerateMipmap)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32 ```
    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_GlGenerateMipmap(@ptrCast(self), @intCast(target));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenFramebuffers)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, framebuffers: *u32 ```
    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenFramebuffers(@ptrCast(self), @intCast(n), @ptrCast(framebuffers));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenRenderbuffers)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, renderbuffers: *u32 ```
    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: *u32) void {
        qtc.QOpenGLFunctions_GlGenRenderbuffers(@ptrCast(self), @intCast(n), @ptrCast(renderbuffers));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttachedShaders)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, maxcount: i32, count: *i32, shaders: *u32 ```
    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxcount: i32, count: *i32, shaders: *u32) void {
        qtc.QOpenGLFunctions_GlGetAttachedShaders(@ptrCast(self), @intCast(program), @intCast(maxcount), @ptrCast(count), @ptrCast(shaders));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttribLocation)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, name: []const u8 ```
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetAttribLocation(@ptrCast(self), @intCast(program), name_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetBufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, attachment: u32, pname: u32, params: *i32 ```
    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), @intCast(target), @intCast(attachment), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, pname: u32, params: *i32 ```
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetProgramiv(@ptrCast(self), @intCast(program), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramInfoLog)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, bufsize: i32, length: *i32, infolog: []const u8 ```
    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufsize: i32, length: *i32, infolog: []const u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetProgramInfoLog(@ptrCast(self), @intCast(program), @intCast(bufsize), @ptrCast(length), infolog_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetRenderbufferParameteriv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, pname: u32, params: *i32 ```
    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetRenderbufferParameteriv(@ptrCast(self), @intCast(target), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, shader: u32, pname: u32, params: *i32 ```
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetShaderiv(@ptrCast(self), @intCast(shader), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderInfoLog)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, shader: u32, bufsize: i32, length: *i32, infolog: []const u8 ```
    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufsize: i32, length: *i32, infolog: []const u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetShaderInfoLog(@ptrCast(self), @intCast(shader), @intCast(bufsize), @ptrCast(length), infolog_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderPrecisionFormat)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32 ```
    pub fn GlGetShaderPrecisionFormat(self: ?*anyopaque, shadertype: u32, precisiontype: u32, range: *i32, precision: *i32) void {
        qtc.QOpenGLFunctions_GlGetShaderPrecisionFormat(@ptrCast(self), @intCast(shadertype), @intCast(precisiontype), @ptrCast(range), @ptrCast(precision));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderSource)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, shader: u32, bufsize: i32, length: *i32, source: []const u8 ```
    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufsize: i32, length: *i32, source: []const u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_GlGetShaderSource(@ptrCast(self), @intCast(shader), @intCast(bufsize), @ptrCast(length), source_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, params: *f32 ```
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetUniformfv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, location: i32, params: *i32 ```
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetUniformiv(@ptrCast(self), @intCast(program), @intCast(location), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformLocation)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32, name: []const u8 ```
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: []const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetUniformLocation(@ptrCast(self), @intCast(program), name_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribfv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, pname: u32, params: *f32 ```
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: *f32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribfv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribiv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, pname: u32, params: *i32 ```
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: *i32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribiv(@ptrCast(self), @intCast(index), @intCast(pname), @ptrCast(params));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribPointerv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, index: u32, pname: u32, pointer: ?*anyopaque ```
    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribPointerv(@ptrCast(self), @intCast(index), @intCast(pname), pointer);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsBuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, buffer: u32 ```
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsBuffer(@ptrCast(self), @intCast(buffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsFramebuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, framebuffer: u32 ```
    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsFramebuffer(@ptrCast(self), @intCast(framebuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsProgram)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32 ```
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsProgram(@ptrCast(self), @intCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsRenderbuffer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, renderbuffer: u32 ```
    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsRenderbuffer(@ptrCast(self), @intCast(renderbuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsShader)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, shader: u32 ```
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsShader(@ptrCast(self), @intCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glLinkProgram)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32 ```
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlLinkProgram(@ptrCast(self), @intCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glReleaseShaderCompiler)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn GlReleaseShaderCompiler(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlReleaseShaderCompiler(@ptrCast(self));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glRenderbufferStorage)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, target: u32, internalformat: u32, width: i32, height: i32 ```
    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlRenderbufferStorage(@ptrCast(self), @intCast(target), @intCast(internalformat), @intCast(width), @intCast(height));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glSampleCoverage)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, value: f32, invert: u8 ```
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_GlSampleCoverage(@ptrCast(self), value, @intCast(invert));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderBinary)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, n: i32, shaders: *const u32, binaryformat: u32, binary: ?*anyopaque, length: i32 ```
    pub fn GlShaderBinary(self: ?*anyopaque, n: i32, shaders: *const u32, binaryformat: u32, binary: ?*anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_GlShaderBinary(@ptrCast(self), @intCast(n), @ptrCast(shaders), @intCast(binaryformat), binary, @intCast(length));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderSource)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, shader: u32, count: i32, stringVal: []const u8, length: *const i32 ```
    pub fn GlShaderSource(self: ?*anyopaque, shader: u32, count: i32, stringVal: []const u8, length: *const i32) void {
        const stringVal_Cstring = stringVal.ptr;
        qtc.QOpenGLFunctions_GlShaderSource(@ptrCast(self), @intCast(shader), @intCast(count), stringVal_Cstring, @ptrCast(length));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFuncSeparate)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, face: u32, func: u32, ref: i32, mask: u32 ```
    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFuncSeparate(@ptrCast(self), @intCast(face), @intCast(func), @intCast(ref), @intCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMaskSeparate)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, face: u32, mask: u32 ```
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMaskSeparate(@ptrCast(self), @intCast(face), @intCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOpSeparate)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, face: u32, fail: u32, zfail: u32, zpass: u32 ```
    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOpSeparate(@ptrCast(self), @intCast(face), @intCast(fail), @intCast(zfail), @intCast(zpass));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, x: f32 ```
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, x: f32) void {
        qtc.QOpenGLFunctions_GlUniform1f(@ptrCast(self), @intCast(location), @intCast(x));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, v: *const f32 ```
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform1fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, x: i32 ```
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, x: i32) void {
        qtc.QOpenGLFunctions_GlUniform1i(@ptrCast(self), @intCast(location), @intCast(x));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, v: *const i32 ```
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform1iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, x: f32, y: f32 ```
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlUniform2f(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, v: *const f32 ```
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform2fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, x: i32, y: i32 ```
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_GlUniform2i(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, v: *const i32 ```
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform2iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, x: f32, y: f32, z: f32 ```
    pub fn GlUniform3f(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlUniform3f(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, v: *const f32 ```
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform3fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, x: i32, y: i32, z: i32 ```
    pub fn GlUniform3i(self: ?*anyopaque, location: i32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_GlUniform3i(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, v: *const i32 ```
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform3iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlUniform4f(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlUniform4f(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, v: *const f32 ```
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, v: *const f32) void {
        qtc.QOpenGLFunctions_GlUniform4fv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4i)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, x: i32, y: i32, z: i32, w: i32 ```
    pub fn GlUniform4i(self: ?*anyopaque, location: i32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_GlUniform4i(@ptrCast(self), @intCast(location), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4iv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, v: *const i32 ```
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, v: *const i32) void {
        qtc.QOpenGLFunctions_GlUniform4iv(@ptrCast(self), @intCast(location), @intCast(count), @ptrCast(v));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix2fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix3fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: *const f32 ```
    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: *const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix4fv(@ptrCast(self), @intCast(location), @intCast(count), @intCast(transpose), @ptrCast(value));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUseProgram)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32 ```
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlUseProgram(@ptrCast(self), @intCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glValidateProgram)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, program: u32 ```
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlValidateProgram(@ptrCast(self), @intCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, x: f32 ```
    pub fn GlVertexAttrib1f(self: ?*anyopaque, indx: u32, x: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1f(@ptrCast(self), @intCast(indx), @intCast(x));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, values: *const f32 ```
    pub fn GlVertexAttrib1fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1fv(@ptrCast(self), @intCast(indx), @ptrCast(values));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, x: f32, y: f32 ```
    pub fn GlVertexAttrib2f(self: ?*anyopaque, indx: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2f(@ptrCast(self), @intCast(indx), @intCast(x), @intCast(y));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, values: *const f32 ```
    pub fn GlVertexAttrib2fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2fv(@ptrCast(self), @intCast(indx), @ptrCast(values));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, x: f32, y: f32, z: f32 ```
    pub fn GlVertexAttrib3f(self: ?*anyopaque, indx: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3f(@ptrCast(self), @intCast(indx), @intCast(x), @intCast(y), @intCast(z));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, values: *const f32 ```
    pub fn GlVertexAttrib3fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3fv(@ptrCast(self), @intCast(indx), @ptrCast(values));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4f)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, x: f32, y: f32, z: f32, w: f32 ```
    pub fn GlVertexAttrib4f(self: ?*anyopaque, indx: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4f(@ptrCast(self), @intCast(indx), @intCast(x), @intCast(y), @intCast(z), @intCast(w));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4fv)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, values: *const f32 ```
    pub fn GlVertexAttrib4fv(self: ?*anyopaque, indx: u32, values: *const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4fv(@ptrCast(self), @intCast(indx), @ptrCast(values));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttribPointer)
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions, indx: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, ptr: ?*anyopaque ```
    pub fn GlVertexAttribPointer(self: ?*anyopaque, indx: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, ptr: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlVertexAttribPointer(@ptrCast(self), @intCast(indx), @intCast(size), @intCast(typeVal), @intCast(normalized), @intCast(stride), ptr);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#dtor.QOpenGLExtraFunctions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOpenGLExtraFunctions ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_Delete(@ptrCast(self));
    }
};
