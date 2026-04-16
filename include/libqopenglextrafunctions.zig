const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;
const qopenglfunctions_enums = @import("libqopenglfunctions.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html)
pub const QOpenGLExtraFunctions = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOpenGLExtraFunctions,

    pub const _is_QOpenGLExtraFunctions = {};
    pub const _is_QOpenGLFunctions = {};

    /// New constructs a new QOpenGLExtraFunctions object.
    ///
    pub fn New() QOpenGLExtraFunctions {
        return .{ .ptr = qtc.QOpenGLExtraFunctions_new() };
    }

    /// New2 constructs a new QOpenGLExtraFunctions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn New2(context: anytype) QOpenGLExtraFunctions {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return .{ .ptr = qtc.QOpenGLExtraFunctions_new2(@ptrCast(context.ptr)) };
    }

    /// New3 constructs a new QOpenGLExtraFunctions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOpenGLExtraFunctions `
    ///
    pub fn New3(param1: anytype) QOpenGLExtraFunctions {
        comptime _ = @TypeOf(param1)._is_QOpenGLExtraFunctions;
        return .{ .ptr = qtc.QOpenGLExtraFunctions_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlReadBuffer(self: QOpenGLExtraFunctions, mode: u32) void {
        qtc.QOpenGLExtraFunctions_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawRangeElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` start: u32 `
    ///
    /// ` end: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn GlDrawRangeElements(self: QOpenGLExtraFunctions, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` internalformat: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` depth: i32 `
    ///
    /// ` border: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: ?*const anyopaque `
    ///
    pub fn GlTexImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` yoffset: i32 `
    ///
    /// ` zoffset: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` depth: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: ?*const anyopaque `
    ///
    pub fn GlTexSubImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` yoffset: i32 `
    ///
    /// ` zoffset: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlCopyTexSubImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCompressedTexImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` depth: i32 `
    ///
    /// ` border: i32 `
    ///
    /// ` imageSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlCompressedTexImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlCompressedTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCompressedTexSubImage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` yoffset: i32 `
    ///
    /// ` zoffset: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` depth: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` imageSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlCompressedTexSubImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlCompressedTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenQueries(self: QOpenGLExtraFunctions, n: i32, ids: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteQueries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteQueries(self: QOpenGLExtraFunctions, n: i32, ids: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsQuery(self: QOpenGLExtraFunctions, id: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsQuery(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBeginQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBeginQuery(self: QOpenGLExtraFunctions, target: u32, id: u32) void {
        qtc.QOpenGLExtraFunctions_GlBeginQuery(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    pub fn GlEndQuery(self: QOpenGLExtraFunctions, target: u32) void {
        qtc.QOpenGLExtraFunctions_GlEndQuery(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetQueryiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetQueryiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetQueryiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetQueryObjectuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` id: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetQueryObjectuiv(self: QOpenGLExtraFunctions, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetQueryObjectuiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    pub fn GlUnmapBuffer(self: QOpenGLExtraFunctions, target: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlUnmapBuffer(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBufferPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetBufferPointerv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlGetBufferPointerv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2x3fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3x2fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2x4fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4x2fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3x4fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4x3fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlitFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` srcX0: i32 `
    ///
    /// ` srcY0: i32 `
    ///
    /// ` srcX1: i32 `
    ///
    /// ` srcY1: i32 `
    ///
    /// ` dstX0: i32 `
    ///
    /// ` dstY0: i32 `
    ///
    /// ` dstX1: i32 `
    ///
    /// ` dstY1: i32 `
    ///
    /// ` mask: u32 `
    ///
    /// ` filter: u32 `
    ///
    pub fn GlBlitFramebuffer(self: QOpenGLExtraFunctions, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlitFramebuffer(@ptrCast(self.ptr), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glRenderbufferStorageMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` samples: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlRenderbufferStorageMultisample(self: QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlRenderbufferStorageMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferTextureLayer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` layer: i32 `
    ///
    pub fn GlFramebufferTextureLayer(self: QOpenGLExtraFunctions, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferTextureLayer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMapBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    /// ` access: u32 `
    ///
    pub fn GlMapBufferRange(self: QOpenGLExtraFunctions, target: u32, offset: isize, length: isize, access: u32) ?*anyopaque {
        return qtc.QOpenGLExtraFunctions_GlMapBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFlushMappedBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` length: isize `
    ///
    pub fn GlFlushMappedBufferRange(self: QOpenGLExtraFunctions, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLExtraFunctions_GlFlushMappedBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` array: u32 `
    ///
    pub fn GlBindVertexArray(self: QOpenGLExtraFunctions, array: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []const u32 `
    ///
    pub fn GlDeleteVertexArrays(self: QOpenGLExtraFunctions, n: i32, arrays: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenVertexArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` arrays: []u32 `
    ///
    pub fn GlGenVertexArrays(self: QOpenGLExtraFunctions, n: i32, arrays: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` array: u32 `
    ///
    pub fn GlIsVertexArray(self: QOpenGLExtraFunctions, array: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetIntegeri_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i32 `
    ///
    pub fn GlGetIntegeriV(self: QOpenGLExtraFunctions, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetIntegeriV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn GlBeginTransformFeedback(self: QOpenGLExtraFunctions, primitiveMode: u32) void {
        qtc.QOpenGLExtraFunctions_GlBeginTransformFeedback(@ptrCast(self.ptr), @bitCast(primitiveMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlEndTransformFeedback(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlEndTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    pub fn GlBindBufferRange(self: QOpenGLExtraFunctions, target: u32, index: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLExtraFunctions_GlBindBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindBufferBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBufferBase(self: QOpenGLExtraFunctions, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindBufferBase(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTransformFeedbackVaryings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` varyings: []const [:0]const u8 `
    ///
    /// ` bufferMode: u32 `
    ///
    pub fn GlTransformFeedbackVaryings(self: QOpenGLExtraFunctions, allocator: std.mem.Allocator, program: u32, count: i32, varyings: []const [:0]const u8, bufferMode: u32) void {
        const varyings_chararr = allocator.alloc([*c]const u8, varyings.len) catch @panic("qopenglextrafunctions.GlTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i|
            varyings_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLExtraFunctions_GlTransformFeedbackVaryings(@ptrCast(self.ptr), @bitCast(program), @bitCast(count), varyings_chararr.ptr, @bitCast(bufferMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribIPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` stride: i32 `
    ///
    /// ` pointer: ?*const anyopaque `
    ///
    pub fn GlVertexAttribIPointer(self: QOpenGLExtraFunctions, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribIPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetVertexAttribIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribIiv(self: QOpenGLExtraFunctions, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetVertexAttribIiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetVertexAttribIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetVertexAttribIuiv(self: QOpenGLExtraFunctions, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetVertexAttribIuiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GlVertexAttribI4i(self: QOpenGLExtraFunctions, index: u32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` x: u32 `
    ///
    /// ` y: u32 `
    ///
    /// ` z: u32 `
    ///
    /// ` w: u32 `
    ///
    pub fn GlVertexAttribI4ui(self: QOpenGLExtraFunctions, index: u32, x: u32, y: u32, z: u32, w: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlVertexAttribI4iv(self: QOpenGLExtraFunctions, index: u32, v: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` v: []const u32 `
    ///
    pub fn GlVertexAttribI4uiv(self: QOpenGLExtraFunctions, index: u32, v: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetUniformuiv(self: QOpenGLExtraFunctions, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetFragDataLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetFragDataLocation(self: QOpenGLExtraFunctions, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLExtraFunctions_GlGetFragDataLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlUniform1ui(self: QOpenGLExtraFunctions, location: i32, v0: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform1ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn GlUniform2ui(self: QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform2ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    pub fn GlUniform3ui(self: QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform3ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    /// ` v3: u32 `
    ///
    pub fn GlUniform4ui(self: QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform4ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform1uiv(self: QOpenGLExtraFunctions, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform1uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform2uiv(self: QOpenGLExtraFunctions, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform2uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform3uiv(self: QOpenGLExtraFunctions, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform3uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlUniform4uiv(self: QOpenGLExtraFunctions, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform4uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlClearBufferiv(self: QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlClearBufferuiv(self: QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferuiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlClearBufferfv(self: QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferfv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferfi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buffer: u32 `
    ///
    /// ` drawbuffer: i32 `
    ///
    /// ` depth: f32 `
    ///
    /// ` stencil: i32 `
    ///
    pub fn GlClearBufferfi(self: QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferfi(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetStringi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` name: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlGetStringi(self: QOpenGLExtraFunctions, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLExtraFunctions_GlGetStringi(@ptrCast(self.ptr), @bitCast(name), @bitCast(index));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` readTarget: u32 `
    ///
    /// ` writeTarget: u32 `
    ///
    /// ` readOffset: isize `
    ///
    /// ` writeOffset: isize `
    ///
    /// ` size: isize `
    ///
    pub fn GlCopyBufferSubData(self: QOpenGLExtraFunctions, readTarget: u32, writeTarget: u32, readOffset: isize, writeOffset: isize, size: isize) void {
        qtc.QOpenGLExtraFunctions_GlCopyBufferSubData(@ptrCast(self.ptr), @bitCast(readTarget), @bitCast(writeTarget), @bitCast(readOffset), @bitCast(writeOffset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetUniformIndices)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformCount: i32 `
    ///
    /// ` uniformNames: []const [:0]const u8 `
    ///
    /// ` uniformIndices: []u32 `
    ///
    pub fn GlGetUniformIndices(self: QOpenGLExtraFunctions, allocator: std.mem.Allocator, program: u32, uniformCount: i32, uniformNames: []const [:0]const u8, uniformIndices: []u32) void {
        const uniformNames_chararr = allocator.alloc([*c]const u8, uniformNames.len) catch @panic("qopenglextrafunctions.GlGetUniformIndices: Memory allocation failed");
        defer allocator.free(uniformNames_chararr);
        for (uniformNames, 0..uniformNames.len) |str, i|
            uniformNames_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLExtraFunctions_GlGetUniformIndices(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformNames_chararr.ptr, uniformIndices.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformsiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformCount: i32 `
    ///
    /// ` uniformIndices: []const u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetActiveUniformsiv(self: QOpenGLExtraFunctions, program: u32, uniformCount: i32, uniformIndices: []const u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformsiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformIndices.ptr, @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetUniformBlockIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockName: [:0]const u8 `
    ///
    pub fn GlGetUniformBlockIndex(self: QOpenGLExtraFunctions, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLExtraFunctions_GlGetUniformBlockIndex(@ptrCast(self.ptr), @bitCast(program), uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformBlockiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetActiveUniformBlockiv(self: QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformBlockiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformBlockName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` uniformBlockName: [:0]u8 `
    ///
    pub fn GlGetActiveUniformBlockName(self: QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, bufSize: i32, length: []i32, uniformBlockName: [:0]u8) void {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformBlockName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformBlockBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` uniformBlockIndex: u32 `
    ///
    /// ` uniformBlockBinding: u32 `
    ///
    pub fn GlUniformBlockBinding(self: QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniformBlockBinding(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(uniformBlockBinding));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawArraysInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn GlDrawArraysInstanced(self: QOpenGLExtraFunctions, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawArraysInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsInstanced)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    /// ` instancecount: i32 `
    ///
    pub fn GlDrawElementsInstanced(self: QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInteger64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn GlGetInteger64v(self: QOpenGLExtraFunctions, pname: u32, data: []i64) void {
        qtc.QOpenGLExtraFunctions_GlGetInteger64v(@ptrCast(self.ptr), @bitCast(pname), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInteger64i_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []i64 `
    ///
    pub fn GlGetInteger64iV(self: QOpenGLExtraFunctions, target: u32, index: u32, data: []i64) void {
        qtc.QOpenGLExtraFunctions_GlGetInteger64iV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBufferParameteri64v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i64 `
    ///
    pub fn GlGetBufferParameteri64v(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLExtraFunctions_GlGetBufferParameteri64v(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []u32 `
    ///
    pub fn GlGenSamplers(self: QOpenGLExtraFunctions, count: i32, samplers: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteSamplers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` count: i32 `
    ///
    /// ` samplers: []const u32 `
    ///
    pub fn GlDeleteSamplers(self: QOpenGLExtraFunctions, count: i32, samplers: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    pub fn GlIsSampler(self: QOpenGLExtraFunctions, sampler: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsSampler(@ptrCast(self.ptr), @bitCast(sampler));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` unit: u32 `
    ///
    /// ` sampler: u32 `
    ///
    pub fn GlBindSampler(self: QOpenGLExtraFunctions, unit: u32, sampler: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindSampler(@ptrCast(self.ptr), @bitCast(unit), @bitCast(sampler));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlSamplerParameteri(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameteri(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn GlSamplerParameteriv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlSamplerParameterf(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterf(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const f32 `
    ///
    pub fn GlSamplerParameterfv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetSamplerParameteriv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetSamplerParameterfv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn GlVertexAttribDivisor(self: QOpenGLExtraFunctions, index: u32, divisor: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribDivisor(@ptrCast(self.ptr), @bitCast(index), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` id: u32 `
    ///
    pub fn GlBindTransformFeedback(self: QOpenGLExtraFunctions, target: u32, id: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindTransformFeedback(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    pub fn GlDeleteTransformFeedbacks(self: QOpenGLExtraFunctions, n: i32, ids: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenTransformFeedbacks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` ids: []u32 `
    ///
    pub fn GlGenTransformFeedbacks(self: QOpenGLExtraFunctions, n: i32, ids: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` id: u32 `
    ///
    pub fn GlIsTransformFeedback(self: QOpenGLExtraFunctions, id: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsTransformFeedback(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPauseTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlPauseTransformFeedback(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlPauseTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glResumeTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlResumeTransformFeedback(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlResumeTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` binaryFormat: u32 `
    ///
    /// ` binary: ?*const anyopaque `
    ///
    /// ` length: i32 `
    ///
    pub fn GlProgramBinary(self: QOpenGLExtraFunctions, program: u32, binaryFormat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramBinary(@ptrCast(self.ptr), @bitCast(program), @bitCast(binaryFormat), @ptrCast(binary), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn GlProgramParameteri(self: QOpenGLExtraFunctions, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramParameteri(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` levels: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlTexStorage2D(self: QOpenGLExtraFunctions, target: u32, levels: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage3D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` levels: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` depth: i32 `
    ///
    pub fn GlTexStorage3D(self: QOpenGLExtraFunctions, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInternalformativ)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetInternalformativ(self: QOpenGLExtraFunctions, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetInternalformativ(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(pname), @bitCast(bufSize), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDispatchCompute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` num_groups_x: u32 `
    ///
    /// ` num_groups_y: u32 `
    ///
    /// ` num_groups_z: u32 `
    ///
    pub fn GlDispatchCompute(self: QOpenGLExtraFunctions, num_groups_x: u32, num_groups_y: u32, num_groups_z: u32) void {
        qtc.QOpenGLExtraFunctions_GlDispatchCompute(@ptrCast(self.ptr), @bitCast(num_groups_x), @bitCast(num_groups_y), @bitCast(num_groups_z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDispatchComputeIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indirect: isize `
    ///
    pub fn GlDispatchComputeIndirect(self: QOpenGLExtraFunctions, indirect: isize) void {
        qtc.QOpenGLExtraFunctions_GlDispatchComputeIndirect(@ptrCast(self.ptr), @bitCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawArraysIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn GlDrawArraysIndirect(self: QOpenGLExtraFunctions, mode: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawArraysIndirect(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indirect: ?*const anyopaque `
    ///
    pub fn GlDrawElementsIndirect(self: QOpenGLExtraFunctions, mode: u32, typeVal: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsIndirect(@ptrCast(self.ptr), @bitCast(mode), @bitCast(typeVal), @ptrCast(indirect));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlFramebufferParameteri(self: QOpenGLExtraFunctions, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetFramebufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetFramebufferParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetFramebufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramInterfaceiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramInterfaceiv(self: QOpenGLExtraFunctions, program: u32, programInterface: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetProgramInterfaceiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetProgramResourceIndex(self: QOpenGLExtraFunctions, program: u32, programInterface: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLExtraFunctions_GlGetProgramResourceIndex(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` name: [:0]u8 `
    ///
    pub fn GlGetProgramResourceName(self: QOpenGLExtraFunctions, program: u32, programInterface: u32, index: u32, bufSize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLExtraFunctions_GlGetProgramResourceName(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), @bitCast(index), @bitCast(bufSize), length.ptr, name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` programInterface: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetProgramResourceLocation(self: QOpenGLExtraFunctions, program: u32, programInterface: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLExtraFunctions_GlGetProgramResourceLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUseProgramStages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` stages: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgramStages(self: QOpenGLExtraFunctions, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLExtraFunctions_GlUseProgramStages(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(stages), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glActiveShaderProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` program: u32 `
    ///
    pub fn GlActiveShaderProgram(self: QOpenGLExtraFunctions, pipeline: u32, program: u32) void {
        qtc.QOpenGLExtraFunctions_GlActiveShaderProgram(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCreateShaderProgramv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` strings: []const [:0]const u8 `
    ///
    pub fn GlCreateShaderProgramv(self: QOpenGLExtraFunctions, allocator: std.mem.Allocator, typeVal: u32, count: i32, strings: []const [:0]const u8) u32 {
        const strings_chararr = allocator.alloc([*c]const u8, strings.len) catch @panic("qopenglextrafunctions.GlCreateShaderProgramv: Memory allocation failed");
        defer allocator.free(strings_chararr);
        for (strings, 0..strings.len) |str, i|
            strings_chararr[i] = @ptrCast(str.ptr);
        return qtc.QOpenGLExtraFunctions_GlCreateShaderProgramv(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(count), strings_chararr.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlBindProgramPipeline(self: QOpenGLExtraFunctions, pipeline: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []const u32 `
    ///
    pub fn GlDeleteProgramPipelines(self: QOpenGLExtraFunctions, n: i32, pipelines: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteProgramPipelines(@ptrCast(self.ptr), @bitCast(n), pipelines.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenProgramPipelines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` pipelines: []u32 `
    ///
    pub fn GlGenProgramPipelines(self: QOpenGLExtraFunctions, n: i32, pipelines: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenProgramPipelines(@ptrCast(self.ptr), @bitCast(n), pipelines.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlIsProgramPipeline(self: QOpenGLExtraFunctions, pipeline: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramPipelineiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramPipelineiv(self: QOpenGLExtraFunctions, pipeline: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetProgramPipelineiv(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    pub fn GlProgramUniform1i(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    pub fn GlProgramUniform2i(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    /// ` v2: i32 `
    ///
    pub fn GlProgramUniform3i(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: i32 `
    ///
    /// ` v1: i32 `
    ///
    /// ` v2: i32 `
    ///
    /// ` v3: i32 `
    ///
    pub fn GlProgramUniform4i(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    pub fn GlProgramUniform1ui(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    pub fn GlProgramUniform2ui(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    pub fn GlProgramUniform3ui(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4ui)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: u32 `
    ///
    /// ` v1: u32 `
    ///
    /// ` v2: u32 `
    ///
    /// ` v3: u32 `
    ///
    pub fn GlProgramUniform4ui(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    pub fn GlProgramUniform1f(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    pub fn GlProgramUniform2f(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    pub fn GlProgramUniform3f(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` v0: f32 `
    ///
    /// ` v1: f32 `
    ///
    /// ` v2: f32 `
    ///
    /// ` v3: f32 `
    ///
    pub fn GlProgramUniform4f(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlProgramUniform1iv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlProgramUniform2iv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlProgramUniform3iv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const i32 `
    ///
    pub fn GlProgramUniform4iv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlProgramUniform1uiv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlProgramUniform2uiv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlProgramUniform3uiv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4uiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const u32 `
    ///
    pub fn GlProgramUniform4uiv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniform1fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniform2fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniform3fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniform4fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix2fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix3fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix4fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix2x3fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix3x2fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix2x4fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4x2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix4x2fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3x4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix3x4fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4x3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlProgramUniformMatrix4x3fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glValidateProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn GlValidateProgramPipeline(self: QOpenGLExtraFunctions, pipeline: u32) void {
        qtc.QOpenGLExtraFunctions_GlValidateProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramPipelineInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infoLog: [:0]u8 `
    ///
    pub fn GlGetProgramPipelineInfoLog(self: QOpenGLExtraFunctions, pipeline: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLExtraFunctions_GlGetProgramPipelineInfoLog(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindImageTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` unit: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` layered: u8 `
    ///
    /// ` layer: i32 `
    ///
    /// ` access: u32 `
    ///
    /// ` format: u32 `
    ///
    pub fn GlBindImageTexture(self: QOpenGLExtraFunctions, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindImageTexture(@ptrCast(self.ptr), @bitCast(unit), @bitCast(texture), @bitCast(level), @bitCast(layered), @bitCast(layer), @bitCast(access), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBooleani_v)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn GlGetBooleaniV(self: QOpenGLExtraFunctions, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLExtraFunctions_GlGetBooleaniV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMemoryBarrier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` barriers: u32 `
    ///
    pub fn GlMemoryBarrier(self: QOpenGLExtraFunctions, barriers: u32) void {
        qtc.QOpenGLExtraFunctions_GlMemoryBarrier(@ptrCast(self.ptr), @bitCast(barriers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMemoryBarrierByRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` barriers: u32 `
    ///
    pub fn GlMemoryBarrierByRegion(self: QOpenGLExtraFunctions, barriers: u32) void {
        qtc.QOpenGLExtraFunctions_GlMemoryBarrierByRegion(@ptrCast(self.ptr), @bitCast(barriers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage2DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` samples: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` fixedsamplelocations: u8 `
    ///
    pub fn GlTexStorage2DMultisample(self: QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage2DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(fixedsamplelocations));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetMultisamplefv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` val: []f32 `
    ///
    pub fn GlGetMultisamplefv(self: QOpenGLExtraFunctions, pname: u32, index: u32, val: []f32) void {
        qtc.QOpenGLExtraFunctions_GlGetMultisamplefv(@ptrCast(self.ptr), @bitCast(pname), @bitCast(index), val.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSampleMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` maskNumber: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlSampleMaski(self: QOpenGLExtraFunctions, maskNumber: u32, mask: u32) void {
        qtc.QOpenGLExtraFunctions_GlSampleMaski(@ptrCast(self.ptr), @bitCast(maskNumber), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexLevelParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexLevelParameteriv(self: QOpenGLExtraFunctions, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexLevelParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexLevelParameterfv(self: QOpenGLExtraFunctions, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindVertexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` bindingindex: u32 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` stride: i32 `
    ///
    pub fn GlBindVertexBuffer(self: QOpenGLExtraFunctions, bindingindex: u32, buffer: u32, offset: isize, stride: i32) void {
        qtc.QOpenGLExtraFunctions_GlBindVertexBuffer(@ptrCast(self.ptr), @bitCast(bindingindex), @bitCast(buffer), @bitCast(offset), @bitCast(stride));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` relativeoffset: u32 `
    ///
    pub fn GlVertexAttribFormat(self: QOpenGLExtraFunctions, attribindex: u32, size: i32, typeVal: u32, normalized: u8, relativeoffset: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribFormat(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(relativeoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribIFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` relativeoffset: u32 `
    ///
    pub fn GlVertexAttribIFormat(self: QOpenGLExtraFunctions, attribindex: u32, size: i32, typeVal: u32, relativeoffset: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribIFormat(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(size), @bitCast(typeVal), @bitCast(relativeoffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribBinding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` attribindex: u32 `
    ///
    /// ` bindingindex: u32 `
    ///
    pub fn GlVertexAttribBinding(self: QOpenGLExtraFunctions, attribindex: u32, bindingindex: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribBinding(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(bindingindex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexBindingDivisor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` bindingindex: u32 `
    ///
    /// ` divisor: u32 `
    ///
    pub fn GlVertexBindingDivisor(self: QOpenGLExtraFunctions, bindingindex: u32, divisor: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexBindingDivisor(@ptrCast(self.ptr), @bitCast(bindingindex), @bitCast(divisor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendBarrier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlBlendBarrier(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlBlendBarrier(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyImageSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` srcName: u32 `
    ///
    /// ` srcTarget: u32 `
    ///
    /// ` srcLevel: i32 `
    ///
    /// ` srcX: i32 `
    ///
    /// ` srcY: i32 `
    ///
    /// ` srcZ: i32 `
    ///
    /// ` dstName: u32 `
    ///
    /// ` dstTarget: u32 `
    ///
    /// ` dstLevel: i32 `
    ///
    /// ` dstX: i32 `
    ///
    /// ` dstY: i32 `
    ///
    /// ` dstZ: i32 `
    ///
    /// ` srcWidth: i32 `
    ///
    /// ` srcHeight: i32 `
    ///
    /// ` srcDepth: i32 `
    ///
    pub fn GlCopyImageSubData(self: QOpenGLExtraFunctions, srcName: u32, srcTarget: u32, srcLevel: i32, srcX: i32, srcY: i32, srcZ: i32, dstName: u32, dstTarget: u32, dstLevel: i32, dstX: i32, dstY: i32, dstZ: i32, srcWidth: i32, srcHeight: i32, srcDepth: i32) void {
        qtc.QOpenGLExtraFunctions_GlCopyImageSubData(@ptrCast(self.ptr), @bitCast(srcName), @bitCast(srcTarget), @bitCast(srcLevel), @bitCast(srcX), @bitCast(srcY), @bitCast(srcZ), @bitCast(dstName), @bitCast(dstTarget), @bitCast(dstLevel), @bitCast(dstX), @bitCast(dstY), @bitCast(dstZ), @bitCast(srcWidth), @bitCast(srcHeight), @bitCast(srcDepth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDebugMessageControl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` source: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` severity: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` ids: []const u32 `
    ///
    /// ` enabled: u8 `
    ///
    pub fn GlDebugMessageControl(self: QOpenGLExtraFunctions, source: u32, typeVal: u32, severity: u32, count: i32, ids: []const u32, enabled: u8) void {
        qtc.QOpenGLExtraFunctions_GlDebugMessageControl(@ptrCast(self.ptr), @bitCast(source), @bitCast(typeVal), @bitCast(severity), @bitCast(count), ids.ptr, @bitCast(enabled));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDebugMessageInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` source: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` severity: u32 `
    ///
    /// ` length: i32 `
    ///
    /// ` buf: [:0]const u8 `
    ///
    pub fn GlDebugMessageInsert(self: QOpenGLExtraFunctions, source: u32, typeVal: u32, id: u32, severity: u32, length: i32, buf: [:0]const u8) void {
        const buf_Cstring = buf.ptr;
        qtc.QOpenGLExtraFunctions_GlDebugMessageInsert(@ptrCast(self.ptr), @bitCast(source), @bitCast(typeVal), @bitCast(id), @bitCast(severity), @bitCast(length), buf_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPushDebugGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` source: u32 `
    ///
    /// ` id: u32 `
    ///
    /// ` length: i32 `
    ///
    /// ` message: [:0]const u8 `
    ///
    pub fn GlPushDebugGroup(self: QOpenGLExtraFunctions, source: u32, id: u32, length: i32, message: [:0]const u8) void {
        const message_Cstring = message.ptr;
        qtc.QOpenGLExtraFunctions_GlPushDebugGroup(@ptrCast(self.ptr), @bitCast(source), @bitCast(id), @bitCast(length), message_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPopDebugGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlPopDebugGroup(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlPopDebugGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glObjectLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` identifier: u32 `
    ///
    /// ` name: u32 `
    ///
    /// ` length: i32 `
    ///
    /// ` label: [:0]const u8 `
    ///
    pub fn GlObjectLabel(self: QOpenGLExtraFunctions, identifier: u32, name: u32, length: i32, label: [:0]const u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLExtraFunctions_GlObjectLabel(@ptrCast(self.ptr), @bitCast(identifier), @bitCast(name), @bitCast(length), label_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetObjectLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` identifier: u32 `
    ///
    /// ` name: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` label: [:0]u8 `
    ///
    pub fn GlGetObjectLabel(self: QOpenGLExtraFunctions, identifier: u32, name: u32, bufSize: i32, length: []i32, label: [:0]u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLExtraFunctions_GlGetObjectLabel(@ptrCast(self.ptr), @bitCast(identifier), @bitCast(name), @bitCast(bufSize), length.ptr, label_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glObjectPtrLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` ptr: ?*const anyopaque `
    ///
    /// ` length: i32 `
    ///
    /// ` label: [:0]const u8 `
    ///
    pub fn GlObjectPtrLabel(self: QOpenGLExtraFunctions, ptr: ?*const anyopaque, length: i32, label: [:0]const u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLExtraFunctions_GlObjectPtrLabel(@ptrCast(self.ptr), @ptrCast(ptr), @bitCast(length), label_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetObjectPtrLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` ptr: ?*const anyopaque `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` label: [:0]u8 `
    ///
    pub fn GlGetObjectPtrLabel(self: QOpenGLExtraFunctions, ptr: ?*const anyopaque, bufSize: i32, length: []i32, label: [:0]u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLExtraFunctions_GlGetObjectPtrLabel(@ptrCast(self.ptr), @ptrCast(ptr), @bitCast(bufSize), length.ptr, label_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: *?*anyopaque `
    ///
    pub fn GlGetPointerv(self: QOpenGLExtraFunctions, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlGetPointerv(@ptrCast(self.ptr), @bitCast(pname), @ptrCast(params));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEnablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnablei(self: QOpenGLExtraFunctions, target: u32, index: u32) void {
        qtc.QOpenGLExtraFunctions_GlEnablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDisablei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisablei(self: QOpenGLExtraFunctions, target: u32, index: u32) void {
        qtc.QOpenGLExtraFunctions_GlDisablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendEquationi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buf: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquationi(self: QOpenGLExtraFunctions, buf: u32, mode: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendEquationi(@ptrCast(self.ptr), @bitCast(buf), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendEquationSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buf: u32 `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparatei(self: QOpenGLExtraFunctions, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendEquationSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendFunci)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buf: u32 `
    ///
    /// ` src: u32 `
    ///
    /// ` dst: u32 `
    ///
    pub fn GlBlendFunci(self: QOpenGLExtraFunctions, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendFunci(@ptrCast(self.ptr), @bitCast(buf), @bitCast(src), @bitCast(dst));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendFuncSeparatei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buf: u32 `
    ///
    /// ` srcRGB: u32 `
    ///
    /// ` dstRGB: u32 `
    ///
    /// ` srcAlpha: u32 `
    ///
    /// ` dstAlpha: u32 `
    ///
    pub fn GlBlendFuncSeparatei(self: QOpenGLExtraFunctions, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendFuncSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glColorMaski)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` r: u8 `
    ///
    /// ` g: u8 `
    ///
    /// ` b: u8 `
    ///
    /// ` a: u8 `
    ///
    pub fn GlColorMaski(self: QOpenGLExtraFunctions, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLExtraFunctions_GlColorMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsEnabledi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` index: u32 `
    ///
    pub fn GlIsEnabledi(self: QOpenGLExtraFunctions, target: u32, index: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsEnabledi(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    /// ` basevertex: i32 `
    ///
    pub fn GlDrawElementsBaseVertex(self: QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawRangeElementsBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` start: u32 `
    ///
    /// ` end: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    /// ` basevertex: i32 `
    ///
    pub fn GlDrawRangeElementsBaseVertex(self: QOpenGLExtraFunctions, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawRangeElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsInstancedBaseVertex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    /// ` instancecount: i32 `
    ///
    /// ` basevertex: i32 `
    ///
    pub fn GlDrawElementsInstancedBaseVertex(self: QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsInstancedBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn GlFramebufferTexture(self: QOpenGLExtraFunctions, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPrimitiveBoundingBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` minX: f32 `
    ///
    /// ` minY: f32 `
    ///
    /// ` minZ: f32 `
    ///
    /// ` minW: f32 `
    ///
    /// ` maxX: f32 `
    ///
    /// ` maxY: f32 `
    ///
    /// ` maxZ: f32 `
    ///
    /// ` maxW: f32 `
    ///
    pub fn GlPrimitiveBoundingBox(self: QOpenGLExtraFunctions, minX: f32, minY: f32, minZ: f32, minW: f32, maxX: f32, maxY: f32, maxZ: f32, maxW: f32) void {
        qtc.QOpenGLExtraFunctions_GlPrimitiveBoundingBox(@ptrCast(self.ptr), @bitCast(minX), @bitCast(minY), @bitCast(minZ), @bitCast(minW), @bitCast(maxX), @bitCast(maxY), @bitCast(maxZ), @bitCast(maxW));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glReadnPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn GlReadnPixels(self: QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, bufSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlReadnPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @bitCast(bufSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetnUniformfv(self: QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: []f32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(bufSize), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetnUniformiv(self: QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(bufSize), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` bufSize: i32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetnUniformuiv(self: QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(bufSize), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMinSampleShading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` value: f32 `
    ///
    pub fn GlMinSampleShading(self: QOpenGLExtraFunctions, value: f32) void {
        qtc.QOpenGLExtraFunctions_GlMinSampleShading(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPatchParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` value: i32 `
    ///
    pub fn GlPatchParameteri(self: QOpenGLExtraFunctions, pname: u32, value: i32) void {
        qtc.QOpenGLExtraFunctions_GlPatchParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameterIiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const u32 `
    ///
    pub fn GlTexParameterIuiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameterIiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetTexParameterIuiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const i32 `
    ///
    pub fn GlSamplerParameterIiv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: []const u32 `
    ///
    pub fn GlSamplerParameterIuiv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterIiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetSamplerParameterIiv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterIuiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u32 `
    ///
    pub fn GlGetSamplerParameterIuiv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlTexBuffer(self: QOpenGLExtraFunctions, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLExtraFunctions_GlTexBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexBufferRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` buffer: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    pub fn GlTexBufferRange(self: QOpenGLExtraFunctions, target: u32, internalformat: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLExtraFunctions_GlTexBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage3DMultisample)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` samples: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` depth: i32 `
    ///
    /// ` fixedsamplelocations: u8 `
    ///
    pub fn GlTexStorage3DMultisample(self: QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage3DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(fixedsamplelocations));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#openGLFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ## Returns:
    ///
    /// ` flag of qopenglfunctions_enums.OpenGLFeature `
    ///
    pub fn OpenGLFeatures(self: QOpenGLExtraFunctions) i32 {
        return qtc.QOpenGLFunctions_OpenGLFeatures(@ptrCast(self.ptr));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#hasOpenGLFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` feature: qopenglfunctions_enums.OpenGLFeature `
    ///
    pub fn HasOpenGLFeature(self: QOpenGLExtraFunctions, feature: i32) bool {
        return qtc.QOpenGLFunctions_HasOpenGLFeature(@ptrCast(self.ptr), @bitCast(feature));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn InitializeOpenGLFunctions(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: QOpenGLExtraFunctions, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: QOpenGLExtraFunctions, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: QOpenGLExtraFunctions, mask: u32) void {
        qtc.QOpenGLFunctions_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlClearColor(self: QOpenGLExtraFunctions, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlClearColor(@ptrCast(self.ptr), red, green, blue, alpha);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: QOpenGLExtraFunctions, s: i32) void {
        qtc.QOpenGLFunctions_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn GlColorMask(self: QOpenGLExtraFunctions, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` border: i32 `
    ///
    pub fn GlCopyTexImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` yoffset: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlCopyTexSubImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: QOpenGLExtraFunctions, mode: u32) void {
        qtc.QOpenGLFunctions_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: QOpenGLExtraFunctions, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: QOpenGLExtraFunctions, func: u32) void {
        qtc.QOpenGLFunctions_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: QOpenGLExtraFunctions, flag: u8) void {
        qtc.QOpenGLFunctions_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: QOpenGLExtraFunctions, cap: u32) void {
        qtc.QOpenGLFunctions_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: QOpenGLExtraFunctions, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn GlDrawElements(self: QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: QOpenGLExtraFunctions, cap: u32) void {
        qtc.QOpenGLFunctions_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlFinish(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLFunctions_GlFinish(@ptrCast(self.ptr));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlFlush(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLFunctions_GlFlush(@ptrCast(self.ptr));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: QOpenGLExtraFunctions, mode: u32) void {
        qtc.QOpenGLFunctions_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: QOpenGLExtraFunctions, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: QOpenGLExtraFunctions, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: QOpenGLExtraFunctions, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: QOpenGLExtraFunctions, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: QOpenGLExtraFunctions, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: QOpenGLExtraFunctions, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: QOpenGLExtraFunctions, cap: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: QOpenGLExtraFunctions, texture: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: QOpenGLExtraFunctions, width: f32) void {
        qtc.QOpenGLFunctions_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: QOpenGLExtraFunctions, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: QOpenGLExtraFunctions, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: ?*anyopaque `
    ///
    pub fn GlReadPixels(self: QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlScissor(self: QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: QOpenGLExtraFunctions, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: QOpenGLExtraFunctions, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: QOpenGLExtraFunctions, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` internalformat: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` border: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: ?*const anyopaque `
    ///
    pub fn GlTexImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: QOpenGLExtraFunctions, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: QOpenGLExtraFunctions, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` yoffset: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` pixels: ?*const anyopaque `
    ///
    pub fn GlTexSubImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlViewport(self: QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlActiveTexture(self: QOpenGLExtraFunctions, texture: u32) void {
        qtc.QOpenGLFunctions_GlActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlAttachShader(self: QOpenGLExtraFunctions, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlAttachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindAttribLocation(self: QOpenGLExtraFunctions, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_GlBindAttribLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBuffer(self: QOpenGLExtraFunctions, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_GlBindBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(buffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlBindFramebuffer(self: QOpenGLExtraFunctions, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindFramebuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(framebuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlBindRenderbuffer(self: QOpenGLExtraFunctions, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(renderbuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlBlendColor(self: QOpenGLExtraFunctions, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlBlendColor(@ptrCast(self.ptr), red, green, blue, alpha);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: QOpenGLExtraFunctions, mode: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparate(self: QOpenGLExtraFunctions, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquationSeparate(@ptrCast(self.ptr), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` srcRGB: u32 `
    ///
    /// ` dstRGB: u32 `
    ///
    /// ` srcAlpha: u32 `
    ///
    /// ` dstAlpha: u32 `
    ///
    pub fn GlBlendFuncSeparate(self: QOpenGLExtraFunctions, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendFuncSeparate(@ptrCast(self.ptr), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn GlBufferData(self: QOpenGLExtraFunctions, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_GlBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: isize `
    ///
    /// ` size: isize `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlBufferSubData(self: QOpenGLExtraFunctions, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearDepthf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` depth: f32 `
    ///
    pub fn GlClearDepthf(self: QOpenGLExtraFunctions, depth: f32) void {
        qtc.QOpenGLFunctions_GlClearDepthf(@ptrCast(self.ptr), depth);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlCompileShader(self: QOpenGLExtraFunctions, shader: u32) void {
        qtc.QOpenGLFunctions_GlCompileShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` border: i32 `
    ///
    /// ` imageSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlCompressedTexImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` level: i32 `
    ///
    /// ` xoffset: i32 `
    ///
    /// ` yoffset: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    /// ` format: u32 `
    ///
    /// ` imageSize: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlCompressedTexSubImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlCreateProgram(self: QOpenGLExtraFunctions) u32 {
        return qtc.QOpenGLFunctions_GlCreateProgram(@ptrCast(self.ptr));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn GlCreateShader(self: QOpenGLExtraFunctions, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_GlCreateShader(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn GlDeleteBuffers(self: QOpenGLExtraFunctions, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn GlDeleteFramebuffers(self: QOpenGLExtraFunctions, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlDeleteProgram(self: QOpenGLExtraFunctions, program: u32) void {
        qtc.QOpenGLFunctions_GlDeleteProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn GlDeleteRenderbuffers(self: QOpenGLExtraFunctions, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDeleteShader(self: QOpenGLExtraFunctions, shader: u32) void {
        qtc.QOpenGLFunctions_GlDeleteShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthRangef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` zNear: f32 `
    ///
    /// ` zFar: f32 `
    ///
    pub fn GlDepthRangef(self: QOpenGLExtraFunctions, zNear: f32, zFar: f32) void {
        qtc.QOpenGLFunctions_GlDepthRangef(@ptrCast(self.ptr), zNear, zFar);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDetachShader(self: QOpenGLExtraFunctions, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlDetachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisableVertexAttribArray(self: QOpenGLExtraFunctions, index: u32) void {
        qtc.QOpenGLFunctions_GlDisableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnableVertexAttribArray(self: QOpenGLExtraFunctions, index: u32) void {
        qtc.QOpenGLFunctions_GlEnableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` renderbuffertarget: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlFramebufferRenderbuffer(self: QOpenGLExtraFunctions, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlFramebufferRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` textarget: u32 `
    ///
    /// ` texture: u32 `
    ///
    /// ` level: i32 `
    ///
    pub fn GlFramebufferTexture2D(self: QOpenGLExtraFunctions, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_GlFramebufferTexture2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn GlGenBuffers(self: QOpenGLExtraFunctions, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    pub fn GlGenerateMipmap(self: QOpenGLExtraFunctions, target: u32) void {
        qtc.QOpenGLFunctions_GlGenerateMipmap(@ptrCast(self.ptr), @bitCast(target));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn GlGenFramebuffers(self: QOpenGLExtraFunctions, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn GlGenRenderbuffers(self: QOpenGLExtraFunctions, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` maxcount: i32 `
    ///
    /// ` count: []i32 `
    ///
    /// ` shaders: []u32 `
    ///
    pub fn GlGetAttachedShaders(self: QOpenGLExtraFunctions, program: u32, maxcount: i32, count: []i32, shaders: []u32) void {
        qtc.QOpenGLFunctions_GlGetAttachedShaders(@ptrCast(self.ptr), @bitCast(program), @bitCast(maxcount), count.ptr, shaders.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetAttribLocation(self: QOpenGLExtraFunctions, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetAttribLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetBufferParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetBufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetFramebufferAttachmentParameteriv(self: QOpenGLExtraFunctions, target: u32, attachment: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramiv(self: QOpenGLExtraFunctions, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetProgramiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` bufsize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infolog: [:0]u8 `
    ///
    pub fn GlGetProgramInfoLog(self: QOpenGLExtraFunctions, program: u32, bufsize: i32, length: []i32, infolog: [:0]u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetProgramInfoLog(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufsize), length.ptr, infolog_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetRenderbufferParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetRenderbufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetShaderiv(self: QOpenGLExtraFunctions, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetShaderiv(@ptrCast(self.ptr), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufsize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infolog: [:0]u8 `
    ///
    pub fn GlGetShaderInfoLog(self: QOpenGLExtraFunctions, shader: u32, bufsize: i32, length: []i32, infolog: [:0]u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetShaderInfoLog(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufsize), length.ptr, infolog_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderPrecisionFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` precisiontype: u32 `
    ///
    /// ` range: []i32 `
    ///
    /// ` precision: []i32 `
    ///
    pub fn GlGetShaderPrecisionFormat(self: QOpenGLExtraFunctions, shadertype: u32, precisiontype: u32, range: []i32, precision: []i32) void {
        qtc.QOpenGLFunctions_GlGetShaderPrecisionFormat(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(precisiontype), range.ptr, precision.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufsize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` source: [:0]u8 `
    ///
    pub fn GlGetShaderSource(self: QOpenGLExtraFunctions, shader: u32, bufsize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_GlGetShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufsize), length.ptr, source_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetUniformfv(self: QOpenGLExtraFunctions, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetUniformiv(self: QOpenGLExtraFunctions, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetUniformLocation(self: QOpenGLExtraFunctions, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetUniformLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetVertexAttribfv(self: QOpenGLExtraFunctions, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribfv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribiv(self: QOpenGLExtraFunctions, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn GlGetVertexAttribPointerv(self: QOpenGLExtraFunctions, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribPointerv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlIsBuffer(self: QOpenGLExtraFunctions, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsBuffer(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlIsFramebuffer(self: QOpenGLExtraFunctions, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsFramebuffer(@ptrCast(self.ptr), @bitCast(framebuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlIsProgram(self: QOpenGLExtraFunctions, program: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlIsRenderbuffer(self: QOpenGLExtraFunctions, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsRenderbuffer(@ptrCast(self.ptr), @bitCast(renderbuffer));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlIsShader(self: QOpenGLExtraFunctions, shader: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlLinkProgram(self: QOpenGLExtraFunctions, program: u32) void {
        qtc.QOpenGLFunctions_GlLinkProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glReleaseShaderCompiler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn GlReleaseShaderCompiler(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLFunctions_GlReleaseShaderCompiler(@ptrCast(self.ptr));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlRenderbufferStorage(self: QOpenGLExtraFunctions, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlRenderbufferStorage(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn GlSampleCoverage(self: QOpenGLExtraFunctions, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_GlSampleCoverage(@ptrCast(self.ptr), value, @bitCast(invert));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` shaders: []const u32 `
    ///
    /// ` binaryformat: u32 `
    ///
    /// ` binary: ?*const anyopaque `
    ///
    /// ` length: i32 `
    ///
    pub fn GlShaderBinary(self: QOpenGLExtraFunctions, n: i32, shaders: []const u32, binaryformat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_GlShaderBinary(@ptrCast(self.ptr), @bitCast(n), shaders.ptr, @bitCast(binaryformat), @ptrCast(binary), @bitCast(length));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` shader: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` stringVal: []const [:0]const u8 `
    ///
    /// ` length: []const i32 `
    ///
    pub fn GlShaderSource(self: QOpenGLExtraFunctions, allocator: std.mem.Allocator, shader: u32, count: i32, stringVal: []const [:0]const u8, length: []const i32) void {
        const stringVal_chararr = allocator.alloc([*c]const u8, stringVal.len) catch @panic("qopenglextrafunctions.GlShaderSource: Memory allocation failed");
        defer allocator.free(stringVal_chararr);
        for (stringVal, 0..stringVal.len) |str, i|
            stringVal_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_GlShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(count), stringVal_chararr.ptr, length.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` face: u32 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFuncSeparate(self: QOpenGLExtraFunctions, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFuncSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMaskSeparate(self: QOpenGLExtraFunctions, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMaskSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(mask));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` face: u32 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOpSeparate(self: QOpenGLExtraFunctions, face: u32, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOpSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    pub fn GlUniform1f(self: QOpenGLExtraFunctions, location: i32, x: f32) void {
        qtc.QOpenGLFunctions_GlUniform1f(@ptrCast(self.ptr), @bitCast(location), @bitCast(x));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlUniform1fv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform1fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: i32 `
    ///
    pub fn GlUniform1i(self: QOpenGLExtraFunctions, location: i32, x: i32) void {
        qtc.QOpenGLFunctions_GlUniform1i(@ptrCast(self.ptr), @bitCast(location), @bitCast(x));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlUniform1iv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform1iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlUniform2f(self: QOpenGLExtraFunctions, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlUniform2f(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlUniform2fv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlUniform2i(self: QOpenGLExtraFunctions, location: i32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_GlUniform2i(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlUniform2iv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform2iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlUniform3f(self: QOpenGLExtraFunctions, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlUniform3f(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlUniform3fv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlUniform3i(self: QOpenGLExtraFunctions, location: i32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_GlUniform3i(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlUniform3iv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform3iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlUniform4f(self: QOpenGLExtraFunctions, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlUniform4f(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlUniform4fv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    /// ` w: i32 `
    ///
    pub fn GlUniform4i(self: QOpenGLExtraFunctions, location: i32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_GlUniform4i(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlUniform4iv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform4iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgram(self: QOpenGLExtraFunctions, program: u32) void {
        qtc.QOpenGLFunctions_GlUseProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlValidateProgram(self: QOpenGLExtraFunctions, program: u32) void {
        qtc.QOpenGLFunctions_GlValidateProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` x: f32 `
    ///
    pub fn GlVertexAttrib1f(self: QOpenGLExtraFunctions, indx: u32, x: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1f(@ptrCast(self.ptr), @bitCast(indx), @bitCast(x));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlVertexAttrib1fv(self: QOpenGLExtraFunctions, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1fv(@ptrCast(self.ptr), @bitCast(indx), values.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertexAttrib2f(self: QOpenGLExtraFunctions, indx: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2f(@ptrCast(self.ptr), @bitCast(indx), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlVertexAttrib2fv(self: QOpenGLExtraFunctions, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2fv(@ptrCast(self.ptr), @bitCast(indx), values.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertexAttrib3f(self: QOpenGLExtraFunctions, indx: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3f(@ptrCast(self.ptr), @bitCast(indx), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlVertexAttrib3fv(self: QOpenGLExtraFunctions, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3fv(@ptrCast(self.ptr), @bitCast(indx), values.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    /// ` w: f32 `
    ///
    pub fn GlVertexAttrib4f(self: QOpenGLExtraFunctions, indx: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4f(@ptrCast(self.ptr), @bitCast(indx), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlVertexAttrib4fv(self: QOpenGLExtraFunctions, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4fv(@ptrCast(self.ptr), @bitCast(indx), values.ptr);
    }

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` size: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` normalized: u8 `
    ///
    /// ` stride: i32 `
    ///
    /// ` ptr: ?*const anyopaque `
    ///
    pub fn GlVertexAttribPointer(self: QOpenGLExtraFunctions, indx: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, ptr: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlVertexAttribPointer(@ptrCast(self.ptr), @bitCast(indx), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#dtor.QOpenGLExtraFunctions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn Delete(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_Delete(@ptrCast(self.ptr));
    }
};
