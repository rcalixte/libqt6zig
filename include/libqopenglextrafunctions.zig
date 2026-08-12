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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOpenGLExtraFunctions object in C++ memory
    ///
    pub fn new() QOpenGLExtraFunctions {
        return .{ .ptr = qtc.QOpenGLExtraFunctions_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOpenGLExtraFunctions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn new2(context: anytype) QOpenGLExtraFunctions {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return .{ .ptr = qtc.QOpenGLExtraFunctions_new2(@ptrCast(context.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOpenGLExtraFunctions object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOpenGLExtraFunctions `
    ///
    pub fn new3(param1: anytype) QOpenGLExtraFunctions {
        comptime _ = @TypeOf(param1)._is_QOpenGLExtraFunctions;
        return .{ .ptr = qtc.QOpenGLExtraFunctions_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `glReadBuffer` instead
    ///
    pub const GlReadBuffer = glReadBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glReadBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` mode: u32 `
    ///
    pub fn glReadBuffer(self: QOpenGLExtraFunctions, mode: u32) void {
        qtc.QOpenGLExtraFunctions_GlReadBuffer(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glDrawRangeElements` instead
    ///
    pub const GlDrawRangeElements = glDrawRangeElements;

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
    pub fn glDrawRangeElements(self: QOpenGLExtraFunctions, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawRangeElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glTexImage3D` instead
    ///
    pub const GlTexImage3D = glTexImage3D;

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
    pub fn glTexImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: i32, width: i32, height: i32, depth: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexSubImage3D` instead
    ///
    pub const GlTexSubImage3D = glTexSubImage3D;

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
    pub fn glTexSubImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage3D` instead
    ///
    pub const GlCopyTexSubImage3D = glCopyTexSubImage3D;

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
    pub fn glCopyTexSubImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlCopyTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage3D` instead
    ///
    pub const GlCompressedTexImage3D = glCompressedTexImage3D;

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
    pub fn glCompressedTexImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, width: i32, height: i32, depth: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlCompressedTexImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage3D` instead
    ///
    pub const GlCompressedTexSubImage3D = glCompressedTexSubImage3D;

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
    pub fn glCompressedTexSubImage3D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, zoffset: i32, width: i32, height: i32, depth: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlCompressedTexSubImage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(zoffset), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glGenQueries` instead
    ///
    pub const GlGenQueries = glGenQueries;

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
    pub fn glGenQueries(self: QOpenGLExtraFunctions, n: i32, ids: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteQueries` instead
    ///
    pub const GlDeleteQueries = glDeleteQueries;

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
    pub fn glDeleteQueries(self: QOpenGLExtraFunctions, n: i32, ids: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteQueries(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glIsQuery` instead
    ///
    pub const GlIsQuery = glIsQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` id: u32 `
    ///
    pub fn glIsQuery(self: QOpenGLExtraFunctions, id: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsQuery(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glBeginQuery` instead
    ///
    pub const GlBeginQuery = glBeginQuery;

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
    pub fn glBeginQuery(self: QOpenGLExtraFunctions, target: u32, id: u32) void {
        qtc.QOpenGLExtraFunctions_GlBeginQuery(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glEndQuery` instead
    ///
    pub const GlEndQuery = glEndQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEndQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    pub fn glEndQuery(self: QOpenGLExtraFunctions, target: u32) void {
        qtc.QOpenGLExtraFunctions_GlEndQuery(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glGetQueryiv` instead
    ///
    pub const GlGetQueryiv = glGetQueryiv;

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
    pub fn glGetQueryiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetQueryiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetQueryObjectuiv` instead
    ///
    pub const GlGetQueryObjectuiv = glGetQueryObjectuiv;

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
    pub fn glGetQueryObjectuiv(self: QOpenGLExtraFunctions, id: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetQueryObjectuiv(@ptrCast(self.ptr), @bitCast(id), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glUnmapBuffer` instead
    ///
    pub const GlUnmapBuffer = glUnmapBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUnmapBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` target: u32 `
    ///
    pub fn glUnmapBuffer(self: QOpenGLExtraFunctions, target: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlUnmapBuffer(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glGetBufferPointerv` instead
    ///
    pub const GlGetBufferPointerv = glGetBufferPointerv;

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
    pub fn glGetBufferPointerv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlGetBufferPointerv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @ptrCast(params));
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x3fv` instead
    ///
    pub const GlUniformMatrix2x3fv = glUniformMatrix2x3fv;

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
    pub fn glUniformMatrix2x3fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x2fv` instead
    ///
    pub const GlUniformMatrix3x2fv = glUniformMatrix3x2fv;

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
    pub fn glUniformMatrix3x2fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2x4fv` instead
    ///
    pub const GlUniformMatrix2x4fv = glUniformMatrix2x4fv;

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
    pub fn glUniformMatrix2x4fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x2fv` instead
    ///
    pub const GlUniformMatrix4x2fv = glUniformMatrix4x2fv;

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
    pub fn glUniformMatrix4x2fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3x4fv` instead
    ///
    pub const GlUniformMatrix3x4fv = glUniformMatrix3x4fv;

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
    pub fn glUniformMatrix3x4fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4x3fv` instead
    ///
    pub const GlUniformMatrix4x3fv = glUniformMatrix4x3fv;

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
    pub fn glUniformMatrix4x3fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glBlitFramebuffer` instead
    ///
    pub const GlBlitFramebuffer = glBlitFramebuffer;

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
    pub fn glBlitFramebuffer(self: QOpenGLExtraFunctions, srcX0: i32, srcY0: i32, srcX1: i32, srcY1: i32, dstX0: i32, dstY0: i32, dstX1: i32, dstY1: i32, mask: u32, filter: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlitFramebuffer(@ptrCast(self.ptr), @bitCast(srcX0), @bitCast(srcY0), @bitCast(srcX1), @bitCast(srcY1), @bitCast(dstX0), @bitCast(dstY0), @bitCast(dstX1), @bitCast(dstY1), @bitCast(mask), @bitCast(filter));
    }

    /// ### DEPRECATED: Use `glRenderbufferStorageMultisample` instead
    ///
    pub const GlRenderbufferStorageMultisample = glRenderbufferStorageMultisample;

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
    pub fn glRenderbufferStorageMultisample(self: QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlRenderbufferStorageMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glFramebufferTextureLayer` instead
    ///
    pub const GlFramebufferTextureLayer = glFramebufferTextureLayer;

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
    pub fn glFramebufferTextureLayer(self: QOpenGLExtraFunctions, target: u32, attachment: u32, texture: u32, level: i32, layer: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferTextureLayer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level), @bitCast(layer));
    }

    /// ### DEPRECATED: Use `glMapBufferRange` instead
    ///
    pub const GlMapBufferRange = glMapBufferRange;

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
    pub fn glMapBufferRange(self: QOpenGLExtraFunctions, target: u32, offset: isize, length: isize, access: u32) ?*anyopaque {
        return qtc.QOpenGLExtraFunctions_GlMapBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length), @bitCast(access));
    }

    /// ### DEPRECATED: Use `glFlushMappedBufferRange` instead
    ///
    pub const GlFlushMappedBufferRange = glFlushMappedBufferRange;

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
    pub fn glFlushMappedBufferRange(self: QOpenGLExtraFunctions, target: u32, offset: isize, length: isize) void {
        qtc.QOpenGLExtraFunctions_GlFlushMappedBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glBindVertexArray` instead
    ///
    pub const GlBindVertexArray = glBindVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` array: u32 `
    ///
    pub fn glBindVertexArray(self: QOpenGLExtraFunctions, array: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glDeleteVertexArrays` instead
    ///
    pub const GlDeleteVertexArrays = glDeleteVertexArrays;

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
    pub fn glDeleteVertexArrays(self: QOpenGLExtraFunctions, n: i32, arrays: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### DEPRECATED: Use `glGenVertexArrays` instead
    ///
    pub const GlGenVertexArrays = glGenVertexArrays;

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
    pub fn glGenVertexArrays(self: QOpenGLExtraFunctions, n: i32, arrays: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenVertexArrays(@ptrCast(self.ptr), @bitCast(n), arrays.ptr);
    }

    /// ### DEPRECATED: Use `glIsVertexArray` instead
    ///
    pub const GlIsVertexArray = glIsVertexArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsVertexArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` array: u32 `
    ///
    pub fn glIsVertexArray(self: QOpenGLExtraFunctions, array: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsVertexArray(@ptrCast(self.ptr), @bitCast(array));
    }

    /// ### DEPRECATED: Use `glGetIntegeriV` instead
    ///
    pub const GlGetIntegeriV = glGetIntegeriV;

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
    pub fn glGetIntegeriV(self: QOpenGLExtraFunctions, target: u32, index: u32, data: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetIntegeriV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glBeginTransformFeedback` instead
    ///
    pub const GlBeginTransformFeedback = glBeginTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBeginTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` primitiveMode: u32 `
    ///
    pub fn glBeginTransformFeedback(self: QOpenGLExtraFunctions, primitiveMode: u32) void {
        qtc.QOpenGLExtraFunctions_GlBeginTransformFeedback(@ptrCast(self.ptr), @bitCast(primitiveMode));
    }

    /// ### DEPRECATED: Use `glEndTransformFeedback` instead
    ///
    pub const GlEndTransformFeedback = glEndTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEndTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glEndTransformFeedback(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlEndTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glBindBufferRange` instead
    ///
    pub const GlBindBufferRange = glBindBufferRange;

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
    pub fn glBindBufferRange(self: QOpenGLExtraFunctions, target: u32, index: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLExtraFunctions_GlBindBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glBindBufferBase` instead
    ///
    pub const GlBindBufferBase = glBindBufferBase;

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
    pub fn glBindBufferBase(self: QOpenGLExtraFunctions, target: u32, index: u32, buffer: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindBufferBase(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glTransformFeedbackVaryings` instead
    ///
    pub const GlTransformFeedbackVaryings = glTransformFeedbackVaryings;

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
    pub fn glTransformFeedbackVaryings(self: QOpenGLExtraFunctions, allocator: std.mem.Allocator, program: u32, count: i32, varyings: []const [:0]const u8, bufferMode: u32) void {
        const varyings_chararr = allocator.alloc([*:0]const u8, varyings.len) catch @panic("QOpenGLExtraFunctions.glTransformFeedbackVaryings: Memory allocation failed");
        defer allocator.free(varyings_chararr);
        for (varyings, 0..varyings.len) |str, i|
            varyings_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLExtraFunctions_GlTransformFeedbackVaryings(@ptrCast(self.ptr), @bitCast(program), @bitCast(count), @ptrCast(varyings_chararr), @bitCast(bufferMode));
    }

    /// ### DEPRECATED: Use `glVertexAttribIPointer` instead
    ///
    pub const GlVertexAttribIPointer = glVertexAttribIPointer;

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
    pub fn glVertexAttribIPointer(self: QOpenGLExtraFunctions, index: u32, size: i32, typeVal: u32, stride: i32, pointer: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribIPointer(@ptrCast(self.ptr), @bitCast(index), @bitCast(size), @bitCast(typeVal), @bitCast(stride), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glGetVertexAttribIiv` instead
    ///
    pub const GlGetVertexAttribIiv = glGetVertexAttribIiv;

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
    pub fn glGetVertexAttribIiv(self: QOpenGLExtraFunctions, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetVertexAttribIiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribIuiv` instead
    ///
    pub const GlGetVertexAttribIuiv = glGetVertexAttribIuiv;

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
    pub fn glGetVertexAttribIuiv(self: QOpenGLExtraFunctions, index: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetVertexAttribIuiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4i` instead
    ///
    pub const GlVertexAttribI4i = glVertexAttribI4i;

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
    pub fn glVertexAttribI4i(self: QOpenGLExtraFunctions, index: u32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4i(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttribI4ui` instead
    ///
    pub const GlVertexAttribI4ui = glVertexAttribI4ui;

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
    pub fn glVertexAttribI4ui(self: QOpenGLExtraFunctions, index: u32, x: u32, y: u32, z: u32, w: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4ui(@ptrCast(self.ptr), @bitCast(index), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttribI4iv` instead
    ///
    pub const GlVertexAttribI4iv = glVertexAttribI4iv;

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
    pub fn glVertexAttribI4iv(self: QOpenGLExtraFunctions, index: u32, v: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4iv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribI4uiv` instead
    ///
    pub const GlVertexAttribI4uiv = glVertexAttribI4uiv;

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
    pub fn glVertexAttribI4uiv(self: QOpenGLExtraFunctions, index: u32, v: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribI4uiv(@ptrCast(self.ptr), @bitCast(index), v.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformuiv` instead
    ///
    pub const GlGetUniformuiv = glGetUniformuiv;

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
    pub fn glGetUniformuiv(self: QOpenGLExtraFunctions, program: u32, location: i32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetFragDataLocation` instead
    ///
    pub const GlGetFragDataLocation = glGetFragDataLocation;

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
    pub fn glGetFragDataLocation(self: QOpenGLExtraFunctions, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLExtraFunctions_GlGetFragDataLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glUniform1ui` instead
    ///
    pub const GlUniform1ui = glUniform1ui;

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
    pub fn glUniform1ui(self: QOpenGLExtraFunctions, location: i32, v0: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform1ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glUniform2ui` instead
    ///
    pub const GlUniform2ui = glUniform2ui;

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
    pub fn glUniform2ui(self: QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform2ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glUniform3ui` instead
    ///
    pub const GlUniform3ui = glUniform3ui;

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
    pub fn glUniform3ui(self: QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform3ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glUniform4ui` instead
    ///
    pub const GlUniform4ui = glUniform4ui;

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
    pub fn glUniform4ui(self: QOpenGLExtraFunctions, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform4ui(@ptrCast(self.ptr), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glUniform1uiv` instead
    ///
    pub const GlUniform1uiv = glUniform1uiv;

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
    pub fn glUniform1uiv(self: QOpenGLExtraFunctions, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform1uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2uiv` instead
    ///
    pub const GlUniform2uiv = glUniform2uiv;

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
    pub fn glUniform2uiv(self: QOpenGLExtraFunctions, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform2uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3uiv` instead
    ///
    pub const GlUniform3uiv = glUniform3uiv;

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
    pub fn glUniform3uiv(self: QOpenGLExtraFunctions, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform3uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4uiv` instead
    ///
    pub const GlUniform4uiv = glUniform4uiv;

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
    pub fn glUniform4uiv(self: QOpenGLExtraFunctions, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlUniform4uiv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferiv` instead
    ///
    pub const GlClearBufferiv = glClearBufferiv;

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
    pub fn glClearBufferiv(self: QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferuiv` instead
    ///
    pub const GlClearBufferuiv = glClearBufferuiv;

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
    pub fn glClearBufferuiv(self: QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferuiv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferfv` instead
    ///
    pub const GlClearBufferfv = glClearBufferfv;

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
    pub fn glClearBufferfv(self: QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferfv(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), value.ptr);
    }

    /// ### DEPRECATED: Use `glClearBufferfi` instead
    ///
    pub const GlClearBufferfi = glClearBufferfi;

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
    pub fn glClearBufferfi(self: QOpenGLExtraFunctions, buffer: u32, drawbuffer: i32, depth: f32, stencil: i32) void {
        qtc.QOpenGLExtraFunctions_GlClearBufferfi(@ptrCast(self.ptr), @bitCast(buffer), @bitCast(drawbuffer), @bitCast(depth), @bitCast(stencil));
    }

    /// ### DEPRECATED: Use `glGetStringi` instead
    ///
    pub const GlGetStringi = glGetStringi;

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
    pub fn glGetStringi(self: QOpenGLExtraFunctions, name: u32, index: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLExtraFunctions_GlGetStringi(@ptrCast(self.ptr), @bitCast(name), @bitCast(index));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glCopyBufferSubData` instead
    ///
    pub const GlCopyBufferSubData = glCopyBufferSubData;

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
    pub fn glCopyBufferSubData(self: QOpenGLExtraFunctions, readTarget: u32, writeTarget: u32, readOffset: isize, writeOffset: isize, size: isize) void {
        qtc.QOpenGLExtraFunctions_GlCopyBufferSubData(@ptrCast(self.ptr), @bitCast(readTarget), @bitCast(writeTarget), @bitCast(readOffset), @bitCast(writeOffset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glGetUniformIndices` instead
    ///
    pub const GlGetUniformIndices = glGetUniformIndices;

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
    pub fn glGetUniformIndices(self: QOpenGLExtraFunctions, allocator: std.mem.Allocator, program: u32, uniformCount: i32, uniformNames: []const [:0]const u8, uniformIndices: []u32) void {
        const uniformNames_chararr = allocator.alloc([*:0]const u8, uniformNames.len) catch @panic("QOpenGLExtraFunctions.glGetUniformIndices: Memory allocation failed");
        defer allocator.free(uniformNames_chararr);
        for (uniformNames, 0..uniformNames.len) |str, i|
            uniformNames_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLExtraFunctions_GlGetUniformIndices(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), @ptrCast(uniformNames_chararr), uniformIndices.ptr);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformsiv` instead
    ///
    pub const GlGetActiveUniformsiv = glGetActiveUniformsiv;

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
    pub fn glGetActiveUniformsiv(self: QOpenGLExtraFunctions, program: u32, uniformCount: i32, uniformIndices: []const u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformsiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformCount), uniformIndices.ptr, @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformBlockIndex` instead
    ///
    pub const GlGetUniformBlockIndex = glGetUniformBlockIndex;

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
    pub fn glGetUniformBlockIndex(self: QOpenGLExtraFunctions, program: u32, uniformBlockName: [:0]const u8) u32 {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        return qtc.QOpenGLExtraFunctions_GlGetUniformBlockIndex(@ptrCast(self.ptr), @bitCast(program), uniformBlockName_Cstring);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformBlockiv` instead
    ///
    pub const GlGetActiveUniformBlockiv = glGetActiveUniformBlockiv;

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
    pub fn glGetActiveUniformBlockiv(self: QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformBlockiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetActiveUniformBlockName` instead
    ///
    pub const GlGetActiveUniformBlockName = glGetActiveUniformBlockName;

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
    pub fn glGetActiveUniformBlockName(self: QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, bufSize: i32, length: []i32, uniformBlockName: [:0]u8) void {
        const uniformBlockName_Cstring = uniformBlockName.ptr;
        qtc.QOpenGLExtraFunctions_GlGetActiveUniformBlockName(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(bufSize), length.ptr, uniformBlockName_Cstring);
    }

    /// ### DEPRECATED: Use `glUniformBlockBinding` instead
    ///
    pub const GlUniformBlockBinding = glUniformBlockBinding;

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
    pub fn glUniformBlockBinding(self: QOpenGLExtraFunctions, program: u32, uniformBlockIndex: u32, uniformBlockBinding: u32) void {
        qtc.QOpenGLExtraFunctions_GlUniformBlockBinding(@ptrCast(self.ptr), @bitCast(program), @bitCast(uniformBlockIndex), @bitCast(uniformBlockBinding));
    }

    /// ### DEPRECATED: Use `glDrawArraysInstanced` instead
    ///
    pub const GlDrawArraysInstanced = glDrawArraysInstanced;

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
    pub fn glDrawArraysInstanced(self: QOpenGLExtraFunctions, mode: u32, first: i32, count: i32, instancecount: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawArraysInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glDrawElementsInstanced` instead
    ///
    pub const GlDrawElementsInstanced = glDrawElementsInstanced;

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
    pub fn glDrawElementsInstanced(self: QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsInstanced(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount));
    }

    /// ### DEPRECATED: Use `glGetInteger64v` instead
    ///
    pub const GlGetInteger64v = glGetInteger64v;

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
    pub fn glGetInteger64v(self: QOpenGLExtraFunctions, pname: u32, data: []i64) void {
        qtc.QOpenGLExtraFunctions_GlGetInteger64v(@ptrCast(self.ptr), @bitCast(pname), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetInteger64iV` instead
    ///
    pub const GlGetInteger64iV = glGetInteger64iV;

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
    pub fn glGetInteger64iV(self: QOpenGLExtraFunctions, target: u32, index: u32, data: []i64) void {
        qtc.QOpenGLExtraFunctions_GlGetInteger64iV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glGetBufferParameteri64v` instead
    ///
    pub const GlGetBufferParameteri64v = glGetBufferParameteri64v;

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
    pub fn glGetBufferParameteri64v(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i64) void {
        qtc.QOpenGLExtraFunctions_GlGetBufferParameteri64v(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGenSamplers` instead
    ///
    pub const GlGenSamplers = glGenSamplers;

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
    pub fn glGenSamplers(self: QOpenGLExtraFunctions, count: i32, samplers: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteSamplers` instead
    ///
    pub const GlDeleteSamplers = glDeleteSamplers;

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
    pub fn glDeleteSamplers(self: QOpenGLExtraFunctions, count: i32, samplers: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteSamplers(@ptrCast(self.ptr), @bitCast(count), samplers.ptr);
    }

    /// ### DEPRECATED: Use `glIsSampler` instead
    ///
    pub const GlIsSampler = glIsSampler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsSampler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` sampler: u32 `
    ///
    pub fn glIsSampler(self: QOpenGLExtraFunctions, sampler: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsSampler(@ptrCast(self.ptr), @bitCast(sampler));
    }

    /// ### DEPRECATED: Use `glBindSampler` instead
    ///
    pub const GlBindSampler = glBindSampler;

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
    pub fn glBindSampler(self: QOpenGLExtraFunctions, unit: u32, sampler: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindSampler(@ptrCast(self.ptr), @bitCast(unit), @bitCast(sampler));
    }

    /// ### DEPRECATED: Use `glSamplerParameteri` instead
    ///
    pub const GlSamplerParameteri = glSamplerParameteri;

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
    pub fn glSamplerParameteri(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameteri(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glSamplerParameteriv` instead
    ///
    pub const GlSamplerParameteriv = glSamplerParameteriv;

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
    pub fn glSamplerParameteriv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterf` instead
    ///
    pub const GlSamplerParameterf = glSamplerParameterf;

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
    pub fn glSamplerParameterf(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: f32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterf(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glSamplerParameterfv` instead
    ///
    pub const GlSamplerParameterfv = glSamplerParameterfv;

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
    pub fn glSamplerParameterfv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameteriv` instead
    ///
    pub const GlGetSamplerParameteriv = glGetSamplerParameteriv;

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
    pub fn glGetSamplerParameteriv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameteriv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterfv` instead
    ///
    pub const GlGetSamplerParameterfv = glGetSamplerParameterfv;

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
    pub fn glGetSamplerParameterfv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterfv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribDivisor` instead
    ///
    pub const GlVertexAttribDivisor = glVertexAttribDivisor;

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
    pub fn glVertexAttribDivisor(self: QOpenGLExtraFunctions, index: u32, divisor: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribDivisor(@ptrCast(self.ptr), @bitCast(index), @bitCast(divisor));
    }

    /// ### DEPRECATED: Use `glBindTransformFeedback` instead
    ///
    pub const GlBindTransformFeedback = glBindTransformFeedback;

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
    pub fn glBindTransformFeedback(self: QOpenGLExtraFunctions, target: u32, id: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindTransformFeedback(@ptrCast(self.ptr), @bitCast(target), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glDeleteTransformFeedbacks` instead
    ///
    pub const GlDeleteTransformFeedbacks = glDeleteTransformFeedbacks;

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
    pub fn glDeleteTransformFeedbacks(self: QOpenGLExtraFunctions, n: i32, ids: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glGenTransformFeedbacks` instead
    ///
    pub const GlGenTransformFeedbacks = glGenTransformFeedbacks;

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
    pub fn glGenTransformFeedbacks(self: QOpenGLExtraFunctions, n: i32, ids: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenTransformFeedbacks(@ptrCast(self.ptr), @bitCast(n), ids.ptr);
    }

    /// ### DEPRECATED: Use `glIsTransformFeedback` instead
    ///
    pub const GlIsTransformFeedback = glIsTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` id: u32 `
    ///
    pub fn glIsTransformFeedback(self: QOpenGLExtraFunctions, id: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsTransformFeedback(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `glPauseTransformFeedback` instead
    ///
    pub const GlPauseTransformFeedback = glPauseTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPauseTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glPauseTransformFeedback(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlPauseTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glResumeTransformFeedback` instead
    ///
    pub const GlResumeTransformFeedback = glResumeTransformFeedback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glResumeTransformFeedback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glResumeTransformFeedback(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlResumeTransformFeedback(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glProgramBinary` instead
    ///
    pub const GlProgramBinary = glProgramBinary;

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
    pub fn glProgramBinary(self: QOpenGLExtraFunctions, program: u32, binaryFormat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramBinary(@ptrCast(self.ptr), @bitCast(program), @bitCast(binaryFormat), @ptrCast(binary), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glProgramParameteri` instead
    ///
    pub const GlProgramParameteri = glProgramParameteri;

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
    pub fn glProgramParameteri(self: QOpenGLExtraFunctions, program: u32, pname: u32, value: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramParameteri(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glTexStorage2D` instead
    ///
    pub const GlTexStorage2D = glTexStorage2D;

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
    pub fn glTexStorage2D(self: QOpenGLExtraFunctions, target: u32, levels: i32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glTexStorage3D` instead
    ///
    pub const GlTexStorage3D = glTexStorage3D;

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
    pub fn glTexStorage3D(self: QOpenGLExtraFunctions, target: u32, levels: i32, internalformat: u32, width: i32, height: i32, depth: i32) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage3D(@ptrCast(self.ptr), @bitCast(target), @bitCast(levels), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `glGetInternalformativ` instead
    ///
    pub const GlGetInternalformativ = glGetInternalformativ;

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
    pub fn glGetInternalformativ(self: QOpenGLExtraFunctions, target: u32, internalformat: u32, pname: u32, bufSize: i32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetInternalformativ(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(pname), @bitCast(bufSize), params.ptr);
    }

    /// ### DEPRECATED: Use `glDispatchCompute` instead
    ///
    pub const GlDispatchCompute = glDispatchCompute;

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
    pub fn glDispatchCompute(self: QOpenGLExtraFunctions, num_groups_x: u32, num_groups_y: u32, num_groups_z: u32) void {
        qtc.QOpenGLExtraFunctions_GlDispatchCompute(@ptrCast(self.ptr), @bitCast(num_groups_x), @bitCast(num_groups_y), @bitCast(num_groups_z));
    }

    /// ### DEPRECATED: Use `glDispatchComputeIndirect` instead
    ///
    pub const GlDispatchComputeIndirect = glDispatchComputeIndirect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDispatchComputeIndirect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` indirect: isize `
    ///
    pub fn glDispatchComputeIndirect(self: QOpenGLExtraFunctions, indirect: isize) void {
        qtc.QOpenGLExtraFunctions_GlDispatchComputeIndirect(@ptrCast(self.ptr), @bitCast(indirect));
    }

    /// ### DEPRECATED: Use `glDrawArraysIndirect` instead
    ///
    pub const GlDrawArraysIndirect = glDrawArraysIndirect;

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
    pub fn glDrawArraysIndirect(self: QOpenGLExtraFunctions, mode: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawArraysIndirect(@ptrCast(self.ptr), @bitCast(mode), @ptrCast(indirect));
    }

    /// ### DEPRECATED: Use `glDrawElementsIndirect` instead
    ///
    pub const GlDrawElementsIndirect = glDrawElementsIndirect;

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
    pub fn glDrawElementsIndirect(self: QOpenGLExtraFunctions, mode: u32, typeVal: u32, indirect: ?*const anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsIndirect(@ptrCast(self.ptr), @bitCast(mode), @bitCast(typeVal), @ptrCast(indirect));
    }

    /// ### DEPRECATED: Use `glFramebufferParameteri` instead
    ///
    pub const GlFramebufferParameteri = glFramebufferParameteri;

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
    pub fn glFramebufferParameteri(self: QOpenGLExtraFunctions, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glGetFramebufferParameteriv` instead
    ///
    pub const GlGetFramebufferParameteriv = glGetFramebufferParameteriv;

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
    pub fn glGetFramebufferParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetFramebufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetProgramInterfaceiv` instead
    ///
    pub const GlGetProgramInterfaceiv = glGetProgramInterfaceiv;

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
    pub fn glGetProgramInterfaceiv(self: QOpenGLExtraFunctions, program: u32, programInterface: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetProgramInterfaceiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetProgramResourceIndex` instead
    ///
    pub const GlGetProgramResourceIndex = glGetProgramResourceIndex;

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
    pub fn glGetProgramResourceIndex(self: QOpenGLExtraFunctions, program: u32, programInterface: u32, name: [:0]const u8) u32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLExtraFunctions_GlGetProgramResourceIndex(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramResourceName` instead
    ///
    pub const GlGetProgramResourceName = glGetProgramResourceName;

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
    pub fn glGetProgramResourceName(self: QOpenGLExtraFunctions, program: u32, programInterface: u32, index: u32, bufSize: i32, length: []i32, name: [:0]u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLExtraFunctions_GlGetProgramResourceName(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), @bitCast(index), @bitCast(bufSize), length.ptr, name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetProgramResourceLocation` instead
    ///
    pub const GlGetProgramResourceLocation = glGetProgramResourceLocation;

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
    pub fn glGetProgramResourceLocation(self: QOpenGLExtraFunctions, program: u32, programInterface: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLExtraFunctions_GlGetProgramResourceLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(programInterface), name_Cstring);
    }

    /// ### DEPRECATED: Use `glUseProgramStages` instead
    ///
    pub const GlUseProgramStages = glUseProgramStages;

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
    pub fn glUseProgramStages(self: QOpenGLExtraFunctions, pipeline: u32, stages: u32, program: u32) void {
        qtc.QOpenGLExtraFunctions_GlUseProgramStages(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(stages), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glActiveShaderProgram` instead
    ///
    pub const GlActiveShaderProgram = glActiveShaderProgram;

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
    pub fn glActiveShaderProgram(self: QOpenGLExtraFunctions, pipeline: u32, program: u32) void {
        qtc.QOpenGLExtraFunctions_GlActiveShaderProgram(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glCreateShaderProgramv` instead
    ///
    pub const GlCreateShaderProgramv = glCreateShaderProgramv;

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
    pub fn glCreateShaderProgramv(self: QOpenGLExtraFunctions, allocator: std.mem.Allocator, typeVal: u32, count: i32, strings: []const [:0]const u8) u32 {
        const strings_chararr = allocator.alloc([*:0]const u8, strings.len) catch @panic("QOpenGLExtraFunctions.glCreateShaderProgramv: Memory allocation failed");
        defer allocator.free(strings_chararr);
        for (strings, 0..strings.len) |str, i|
            strings_chararr[i] = @ptrCast(str.ptr);
        return qtc.QOpenGLExtraFunctions_GlCreateShaderProgramv(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(count), @ptrCast(strings_chararr));
    }

    /// ### DEPRECATED: Use `glBindProgramPipeline` instead
    ///
    pub const GlBindProgramPipeline = glBindProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glBindProgramPipeline(self: QOpenGLExtraFunctions, pipeline: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glDeleteProgramPipelines` instead
    ///
    pub const GlDeleteProgramPipelines = glDeleteProgramPipelines;

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
    pub fn glDeleteProgramPipelines(self: QOpenGLExtraFunctions, n: i32, pipelines: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlDeleteProgramPipelines(@ptrCast(self.ptr), @bitCast(n), pipelines.ptr);
    }

    /// ### DEPRECATED: Use `glGenProgramPipelines` instead
    ///
    pub const GlGenProgramPipelines = glGenProgramPipelines;

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
    pub fn glGenProgramPipelines(self: QOpenGLExtraFunctions, n: i32, pipelines: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGenProgramPipelines(@ptrCast(self.ptr), @bitCast(n), pipelines.ptr);
    }

    /// ### DEPRECATED: Use `glIsProgramPipeline` instead
    ///
    pub const GlIsProgramPipeline = glIsProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glIsProgramPipeline(self: QOpenGLExtraFunctions, pipeline: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glGetProgramPipelineiv` instead
    ///
    pub const GlGetProgramPipelineiv = glGetProgramPipelineiv;

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
    pub fn glGetProgramPipelineiv(self: QOpenGLExtraFunctions, pipeline: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetProgramPipelineiv(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1i` instead
    ///
    pub const GlProgramUniform1i = glProgramUniform1i;

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
    pub fn glProgramUniform1i(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform2i` instead
    ///
    pub const GlProgramUniform2i = glProgramUniform2i;

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
    pub fn glProgramUniform2i(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform3i` instead
    ///
    pub const GlProgramUniform3i = glProgramUniform3i;

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
    pub fn glProgramUniform3i(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32, v2: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform4i` instead
    ///
    pub const GlProgramUniform4i = glProgramUniform4i;

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
    pub fn glProgramUniform4i(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: i32, v1: i32, v2: i32, v3: i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4i(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform1ui` instead
    ///
    pub const GlProgramUniform1ui = glProgramUniform1ui;

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
    pub fn glProgramUniform1ui(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform2ui` instead
    ///
    pub const GlProgramUniform2ui = glProgramUniform2ui;

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
    pub fn glProgramUniform2ui(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform3ui` instead
    ///
    pub const GlProgramUniform3ui = glProgramUniform3ui;

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
    pub fn glProgramUniform3ui(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32, v2: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform4ui` instead
    ///
    pub const GlProgramUniform4ui = glProgramUniform4ui;

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
    pub fn glProgramUniform4ui(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: u32, v1: u32, v2: u32, v3: u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4ui(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform1f` instead
    ///
    pub const GlProgramUniform1f = glProgramUniform1f;

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
    pub fn glProgramUniform1f(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0));
    }

    /// ### DEPRECATED: Use `glProgramUniform2f` instead
    ///
    pub const GlProgramUniform2f = glProgramUniform2f;

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
    pub fn glProgramUniform2f(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1));
    }

    /// ### DEPRECATED: Use `glProgramUniform3f` instead
    ///
    pub const GlProgramUniform3f = glProgramUniform3f;

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
    pub fn glProgramUniform3f(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32, v2: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2));
    }

    /// ### DEPRECATED: Use `glProgramUniform4f` instead
    ///
    pub const GlProgramUniform4f = glProgramUniform4f;

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
    pub fn glProgramUniform4f(self: QOpenGLExtraFunctions, program: u32, location: i32, v0: f32, v1: f32, v2: f32, v3: f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4f(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(v0), @bitCast(v1), @bitCast(v2), @bitCast(v3));
    }

    /// ### DEPRECATED: Use `glProgramUniform1iv` instead
    ///
    pub const GlProgramUniform1iv = glProgramUniform1iv;

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
    pub fn glProgramUniform1iv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2iv` instead
    ///
    pub const GlProgramUniform2iv = glProgramUniform2iv;

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
    pub fn glProgramUniform2iv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3iv` instead
    ///
    pub const GlProgramUniform3iv = glProgramUniform3iv;

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
    pub fn glProgramUniform3iv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4iv` instead
    ///
    pub const GlProgramUniform4iv = glProgramUniform4iv;

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
    pub fn glProgramUniform4iv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4iv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1uiv` instead
    ///
    pub const GlProgramUniform1uiv = glProgramUniform1uiv;

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
    pub fn glProgramUniform1uiv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2uiv` instead
    ///
    pub const GlProgramUniform2uiv = glProgramUniform2uiv;

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
    pub fn glProgramUniform2uiv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3uiv` instead
    ///
    pub const GlProgramUniform3uiv = glProgramUniform3uiv;

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
    pub fn glProgramUniform3uiv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4uiv` instead
    ///
    pub const GlProgramUniform4uiv = glProgramUniform4uiv;

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
    pub fn glProgramUniform4uiv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4uiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform1fv` instead
    ///
    pub const GlProgramUniform1fv = glProgramUniform1fv;

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
    pub fn glProgramUniform1fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform1fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform2fv` instead
    ///
    pub const GlProgramUniform2fv = glProgramUniform2fv;

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
    pub fn glProgramUniform2fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform3fv` instead
    ///
    pub const GlProgramUniform3fv = glProgramUniform3fv;

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
    pub fn glProgramUniform3fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniform4fv` instead
    ///
    pub const GlProgramUniform4fv = glProgramUniform4fv;

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
    pub fn glProgramUniform4fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniform4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2fv` instead
    ///
    pub const GlProgramUniformMatrix2fv = glProgramUniformMatrix2fv;

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
    pub fn glProgramUniformMatrix2fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3fv` instead
    ///
    pub const GlProgramUniformMatrix3fv = glProgramUniformMatrix3fv;

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
    pub fn glProgramUniformMatrix3fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4fv` instead
    ///
    pub const GlProgramUniformMatrix4fv = glProgramUniformMatrix4fv;

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
    pub fn glProgramUniformMatrix4fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x3fv` instead
    ///
    pub const GlProgramUniformMatrix2x3fv = glProgramUniformMatrix2x3fv;

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
    pub fn glProgramUniformMatrix2x3fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2x3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x2fv` instead
    ///
    pub const GlProgramUniformMatrix3x2fv = glProgramUniformMatrix3x2fv;

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
    pub fn glProgramUniformMatrix3x2fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3x2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix2x4fv` instead
    ///
    pub const GlProgramUniformMatrix2x4fv = glProgramUniformMatrix2x4fv;

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
    pub fn glProgramUniformMatrix2x4fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix2x4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x2fv` instead
    ///
    pub const GlProgramUniformMatrix4x2fv = glProgramUniformMatrix4x2fv;

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
    pub fn glProgramUniformMatrix4x2fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4x2fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix3x4fv` instead
    ///
    pub const GlProgramUniformMatrix3x4fv = glProgramUniformMatrix3x4fv;

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
    pub fn glProgramUniformMatrix3x4fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix3x4fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glProgramUniformMatrix4x3fv` instead
    ///
    pub const GlProgramUniformMatrix4x3fv = glProgramUniformMatrix4x3fv;

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
    pub fn glProgramUniformMatrix4x3fv(self: QOpenGLExtraFunctions, program: u32, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLExtraFunctions_GlProgramUniformMatrix4x3fv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glValidateProgramPipeline` instead
    ///
    pub const GlValidateProgramPipeline = glValidateProgramPipeline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glValidateProgramPipeline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` pipeline: u32 `
    ///
    pub fn glValidateProgramPipeline(self: QOpenGLExtraFunctions, pipeline: u32) void {
        qtc.QOpenGLExtraFunctions_GlValidateProgramPipeline(@ptrCast(self.ptr), @bitCast(pipeline));
    }

    /// ### DEPRECATED: Use `glGetProgramPipelineInfoLog` instead
    ///
    pub const GlGetProgramPipelineInfoLog = glGetProgramPipelineInfoLog;

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
    pub fn glGetProgramPipelineInfoLog(self: QOpenGLExtraFunctions, pipeline: u32, bufSize: i32, length: []i32, infoLog: [:0]u8) void {
        const infoLog_Cstring = infoLog.ptr;
        qtc.QOpenGLExtraFunctions_GlGetProgramPipelineInfoLog(@ptrCast(self.ptr), @bitCast(pipeline), @bitCast(bufSize), length.ptr, infoLog_Cstring);
    }

    /// ### DEPRECATED: Use `glBindImageTexture` instead
    ///
    pub const GlBindImageTexture = glBindImageTexture;

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
    pub fn glBindImageTexture(self: QOpenGLExtraFunctions, unit: u32, texture: u32, level: i32, layered: u8, layer: i32, access: u32, format: u32) void {
        qtc.QOpenGLExtraFunctions_GlBindImageTexture(@ptrCast(self.ptr), @bitCast(unit), @bitCast(texture), @bitCast(level), @bitCast(layered), @bitCast(layer), @bitCast(access), @bitCast(format));
    }

    /// ### DEPRECATED: Use `glGetBooleaniV` instead
    ///
    pub const GlGetBooleaniV = glGetBooleaniV;

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
    pub fn glGetBooleaniV(self: QOpenGLExtraFunctions, target: u32, index: u32, data: []u8) void {
        qtc.QOpenGLExtraFunctions_GlGetBooleaniV(@ptrCast(self.ptr), @bitCast(target), @bitCast(index), data.ptr);
    }

    /// ### DEPRECATED: Use `glMemoryBarrier` instead
    ///
    pub const GlMemoryBarrier = glMemoryBarrier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMemoryBarrier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` barriers: u32 `
    ///
    pub fn glMemoryBarrier(self: QOpenGLExtraFunctions, barriers: u32) void {
        qtc.QOpenGLExtraFunctions_GlMemoryBarrier(@ptrCast(self.ptr), @bitCast(barriers));
    }

    /// ### DEPRECATED: Use `glMemoryBarrierByRegion` instead
    ///
    pub const GlMemoryBarrierByRegion = glMemoryBarrierByRegion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMemoryBarrierByRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` barriers: u32 `
    ///
    pub fn glMemoryBarrierByRegion(self: QOpenGLExtraFunctions, barriers: u32) void {
        qtc.QOpenGLExtraFunctions_GlMemoryBarrierByRegion(@ptrCast(self.ptr), @bitCast(barriers));
    }

    /// ### DEPRECATED: Use `glTexStorage2DMultisample` instead
    ///
    pub const GlTexStorage2DMultisample = glTexStorage2DMultisample;

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
    pub fn glTexStorage2DMultisample(self: QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage2DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(fixedsamplelocations));
    }

    /// ### DEPRECATED: Use `glGetMultisamplefv` instead
    ///
    pub const GlGetMultisamplefv = glGetMultisamplefv;

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
    pub fn glGetMultisamplefv(self: QOpenGLExtraFunctions, pname: u32, index: u32, val: []f32) void {
        qtc.QOpenGLExtraFunctions_GlGetMultisamplefv(@ptrCast(self.ptr), @bitCast(pname), @bitCast(index), val.ptr);
    }

    /// ### DEPRECATED: Use `glSampleMaski` instead
    ///
    pub const GlSampleMaski = glSampleMaski;

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
    pub fn glSampleMaski(self: QOpenGLExtraFunctions, maskNumber: u32, mask: u32) void {
        qtc.QOpenGLExtraFunctions_GlSampleMaski(@ptrCast(self.ptr), @bitCast(maskNumber), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameteriv` instead
    ///
    pub const GlGetTexLevelParameteriv = glGetTexLevelParameteriv;

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
    pub fn glGetTexLevelParameteriv(self: QOpenGLExtraFunctions, target: u32, level: i32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexLevelParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexLevelParameterfv` instead
    ///
    pub const GlGetTexLevelParameterfv = glGetTexLevelParameterfv;

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
    pub fn glGetTexLevelParameterfv(self: QOpenGLExtraFunctions, target: u32, level: i32, pname: u32, params: []f32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexLevelParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glBindVertexBuffer` instead
    ///
    pub const GlBindVertexBuffer = glBindVertexBuffer;

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
    pub fn glBindVertexBuffer(self: QOpenGLExtraFunctions, bindingindex: u32, buffer: u32, offset: isize, stride: i32) void {
        qtc.QOpenGLExtraFunctions_GlBindVertexBuffer(@ptrCast(self.ptr), @bitCast(bindingindex), @bitCast(buffer), @bitCast(offset), @bitCast(stride));
    }

    /// ### DEPRECATED: Use `glVertexAttribFormat` instead
    ///
    pub const GlVertexAttribFormat = glVertexAttribFormat;

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
    pub fn glVertexAttribFormat(self: QOpenGLExtraFunctions, attribindex: u32, size: i32, typeVal: u32, normalized: u8, relativeoffset: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribFormat(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(relativeoffset));
    }

    /// ### DEPRECATED: Use `glVertexAttribIFormat` instead
    ///
    pub const GlVertexAttribIFormat = glVertexAttribIFormat;

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
    pub fn glVertexAttribIFormat(self: QOpenGLExtraFunctions, attribindex: u32, size: i32, typeVal: u32, relativeoffset: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribIFormat(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(size), @bitCast(typeVal), @bitCast(relativeoffset));
    }

    /// ### DEPRECATED: Use `glVertexAttribBinding` instead
    ///
    pub const GlVertexAttribBinding = glVertexAttribBinding;

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
    pub fn glVertexAttribBinding(self: QOpenGLExtraFunctions, attribindex: u32, bindingindex: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexAttribBinding(@ptrCast(self.ptr), @bitCast(attribindex), @bitCast(bindingindex));
    }

    /// ### DEPRECATED: Use `glVertexBindingDivisor` instead
    ///
    pub const GlVertexBindingDivisor = glVertexBindingDivisor;

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
    pub fn glVertexBindingDivisor(self: QOpenGLExtraFunctions, bindingindex: u32, divisor: u32) void {
        qtc.QOpenGLExtraFunctions_GlVertexBindingDivisor(@ptrCast(self.ptr), @bitCast(bindingindex), @bitCast(divisor));
    }

    /// ### DEPRECATED: Use `glBlendBarrier` instead
    ///
    pub const GlBlendBarrier = glBlendBarrier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendBarrier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glBlendBarrier(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlBlendBarrier(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glCopyImageSubData` instead
    ///
    pub const GlCopyImageSubData = glCopyImageSubData;

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
    pub fn glCopyImageSubData(self: QOpenGLExtraFunctions, srcName: u32, srcTarget: u32, srcLevel: i32, srcX: i32, srcY: i32, srcZ: i32, dstName: u32, dstTarget: u32, dstLevel: i32, dstX: i32, dstY: i32, dstZ: i32, srcWidth: i32, srcHeight: i32, srcDepth: i32) void {
        qtc.QOpenGLExtraFunctions_GlCopyImageSubData(@ptrCast(self.ptr), @bitCast(srcName), @bitCast(srcTarget), @bitCast(srcLevel), @bitCast(srcX), @bitCast(srcY), @bitCast(srcZ), @bitCast(dstName), @bitCast(dstTarget), @bitCast(dstLevel), @bitCast(dstX), @bitCast(dstY), @bitCast(dstZ), @bitCast(srcWidth), @bitCast(srcHeight), @bitCast(srcDepth));
    }

    /// ### DEPRECATED: Use `glDebugMessageControl` instead
    ///
    pub const GlDebugMessageControl = glDebugMessageControl;

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
    pub fn glDebugMessageControl(self: QOpenGLExtraFunctions, source: u32, typeVal: u32, severity: u32, count: i32, ids: []const u32, enabled: u8) void {
        qtc.QOpenGLExtraFunctions_GlDebugMessageControl(@ptrCast(self.ptr), @bitCast(source), @bitCast(typeVal), @bitCast(severity), @bitCast(count), ids.ptr, @bitCast(enabled));
    }

    /// ### DEPRECATED: Use `glDebugMessageInsert` instead
    ///
    pub const GlDebugMessageInsert = glDebugMessageInsert;

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
    pub fn glDebugMessageInsert(self: QOpenGLExtraFunctions, source: u32, typeVal: u32, id: u32, severity: u32, length: i32, buf: [:0]const u8) void {
        const buf_Cstring = buf.ptr;
        qtc.QOpenGLExtraFunctions_GlDebugMessageInsert(@ptrCast(self.ptr), @bitCast(source), @bitCast(typeVal), @bitCast(id), @bitCast(severity), @bitCast(length), buf_Cstring);
    }

    /// ### DEPRECATED: Use `glPushDebugGroup` instead
    ///
    pub const GlPushDebugGroup = glPushDebugGroup;

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
    pub fn glPushDebugGroup(self: QOpenGLExtraFunctions, source: u32, id: u32, length: i32, message: [:0]const u8) void {
        const message_Cstring = message.ptr;
        qtc.QOpenGLExtraFunctions_GlPushDebugGroup(@ptrCast(self.ptr), @bitCast(source), @bitCast(id), @bitCast(length), message_Cstring);
    }

    /// ### DEPRECATED: Use `glPopDebugGroup` instead
    ///
    pub const GlPopDebugGroup = glPopDebugGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPopDebugGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glPopDebugGroup(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_GlPopDebugGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glObjectLabel` instead
    ///
    pub const GlObjectLabel = glObjectLabel;

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
    pub fn glObjectLabel(self: QOpenGLExtraFunctions, identifier: u32, name: u32, length: i32, label: [:0]const u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLExtraFunctions_GlObjectLabel(@ptrCast(self.ptr), @bitCast(identifier), @bitCast(name), @bitCast(length), label_Cstring);
    }

    /// ### DEPRECATED: Use `glGetObjectLabel` instead
    ///
    pub const GlGetObjectLabel = glGetObjectLabel;

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
    pub fn glGetObjectLabel(self: QOpenGLExtraFunctions, identifier: u32, name: u32, bufSize: i32, length: []i32, label: [:0]u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLExtraFunctions_GlGetObjectLabel(@ptrCast(self.ptr), @bitCast(identifier), @bitCast(name), @bitCast(bufSize), length.ptr, label_Cstring);
    }

    /// ### DEPRECATED: Use `glObjectPtrLabel` instead
    ///
    pub const GlObjectPtrLabel = glObjectPtrLabel;

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
    pub fn glObjectPtrLabel(self: QOpenGLExtraFunctions, ptr: ?*const anyopaque, length: i32, label: [:0]const u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLExtraFunctions_GlObjectPtrLabel(@ptrCast(self.ptr), @ptrCast(ptr), @bitCast(length), label_Cstring);
    }

    /// ### DEPRECATED: Use `glGetObjectPtrLabel` instead
    ///
    pub const GlGetObjectPtrLabel = glGetObjectPtrLabel;

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
    pub fn glGetObjectPtrLabel(self: QOpenGLExtraFunctions, ptr: ?*const anyopaque, bufSize: i32, length: []i32, label: [:0]u8) void {
        const label_Cstring = label.ptr;
        qtc.QOpenGLExtraFunctions_GlGetObjectPtrLabel(@ptrCast(self.ptr), @ptrCast(ptr), @bitCast(bufSize), length.ptr, label_Cstring);
    }

    /// ### DEPRECATED: Use `glGetPointerv` instead
    ///
    pub const GlGetPointerv = glGetPointerv;

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
    pub fn glGetPointerv(self: QOpenGLExtraFunctions, pname: u32, params: *?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlGetPointerv(@ptrCast(self.ptr), @bitCast(pname), @ptrCast(params));
    }

    /// ### DEPRECATED: Use `glEnablei` instead
    ///
    pub const GlEnablei = glEnablei;

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
    pub fn glEnablei(self: QOpenGLExtraFunctions, target: u32, index: u32) void {
        qtc.QOpenGLExtraFunctions_GlEnablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDisablei` instead
    ///
    pub const GlDisablei = glDisablei;

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
    pub fn glDisablei(self: QOpenGLExtraFunctions, target: u32, index: u32) void {
        qtc.QOpenGLExtraFunctions_GlDisablei(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glBlendEquationi` instead
    ///
    pub const GlBlendEquationi = glBlendEquationi;

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
    pub fn glBlendEquationi(self: QOpenGLExtraFunctions, buf: u32, mode: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendEquationi(@ptrCast(self.ptr), @bitCast(buf), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glBlendEquationSeparatei` instead
    ///
    pub const GlBlendEquationSeparatei = glBlendEquationSeparatei;

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
    pub fn glBlendEquationSeparatei(self: QOpenGLExtraFunctions, buf: u32, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendEquationSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### DEPRECATED: Use `glBlendFunci` instead
    ///
    pub const GlBlendFunci = glBlendFunci;

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
    pub fn glBlendFunci(self: QOpenGLExtraFunctions, buf: u32, src: u32, dst: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendFunci(@ptrCast(self.ptr), @bitCast(buf), @bitCast(src), @bitCast(dst));
    }

    /// ### DEPRECATED: Use `glBlendFuncSeparatei` instead
    ///
    pub const GlBlendFuncSeparatei = glBlendFuncSeparatei;

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
    pub fn glBlendFuncSeparatei(self: QOpenGLExtraFunctions, buf: u32, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLExtraFunctions_GlBlendFuncSeparatei(@ptrCast(self.ptr), @bitCast(buf), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// ### DEPRECATED: Use `glColorMaski` instead
    ///
    pub const GlColorMaski = glColorMaski;

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
    pub fn glColorMaski(self: QOpenGLExtraFunctions, index: u32, r: u8, g: u8, b: u8, a: u8) void {
        qtc.QOpenGLExtraFunctions_GlColorMaski(@ptrCast(self.ptr), @bitCast(index), @bitCast(r), @bitCast(g), @bitCast(b), @bitCast(a));
    }

    /// ### DEPRECATED: Use `glIsEnabledi` instead
    ///
    pub const GlIsEnabledi = glIsEnabledi;

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
    pub fn glIsEnabledi(self: QOpenGLExtraFunctions, target: u32, index: u32) u8 {
        return qtc.QOpenGLExtraFunctions_GlIsEnabledi(@ptrCast(self.ptr), @bitCast(target), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glDrawElementsBaseVertex` instead
    ///
    pub const GlDrawElementsBaseVertex = glDrawElementsBaseVertex;

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
    pub fn glDrawElementsBaseVertex(self: QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glDrawRangeElementsBaseVertex` instead
    ///
    pub const GlDrawRangeElementsBaseVertex = glDrawRangeElementsBaseVertex;

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
    pub fn glDrawRangeElementsBaseVertex(self: QOpenGLExtraFunctions, mode: u32, start: u32, end: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawRangeElementsBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(start), @bitCast(end), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glDrawElementsInstancedBaseVertex` instead
    ///
    pub const GlDrawElementsInstancedBaseVertex = glDrawElementsInstancedBaseVertex;

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
    pub fn glDrawElementsInstancedBaseVertex(self: QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque, instancecount: i32, basevertex: i32) void {
        qtc.QOpenGLExtraFunctions_GlDrawElementsInstancedBaseVertex(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices), @bitCast(instancecount), @bitCast(basevertex));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture` instead
    ///
    pub const GlFramebufferTexture = glFramebufferTexture;

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
    pub fn glFramebufferTexture(self: QOpenGLExtraFunctions, target: u32, attachment: u32, texture: u32, level: i32) void {
        qtc.QOpenGLExtraFunctions_GlFramebufferTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glPrimitiveBoundingBox` instead
    ///
    pub const GlPrimitiveBoundingBox = glPrimitiveBoundingBox;

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
    pub fn glPrimitiveBoundingBox(self: QOpenGLExtraFunctions, minX: f32, minY: f32, minZ: f32, minW: f32, maxX: f32, maxY: f32, maxZ: f32, maxW: f32) void {
        qtc.QOpenGLExtraFunctions_GlPrimitiveBoundingBox(@ptrCast(self.ptr), @bitCast(minX), @bitCast(minY), @bitCast(minZ), @bitCast(minW), @bitCast(maxX), @bitCast(maxY), @bitCast(maxZ), @bitCast(maxW));
    }

    /// ### DEPRECATED: Use `glReadnPixels` instead
    ///
    pub const GlReadnPixels = glReadnPixels;

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
    pub fn glReadnPixels(self: QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, bufSize: i32, data: ?*anyopaque) void {
        qtc.QOpenGLExtraFunctions_GlReadnPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @bitCast(bufSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glGetnUniformfv` instead
    ///
    pub const GlGetnUniformfv = glGetnUniformfv;

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
    pub fn glGetnUniformfv(self: QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: []f32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(bufSize), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetnUniformiv` instead
    ///
    pub const GlGetnUniformiv = glGetnUniformiv;

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
    pub fn glGetnUniformiv(self: QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(bufSize), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetnUniformuiv` instead
    ///
    pub const GlGetnUniformuiv = glGetnUniformuiv;

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
    pub fn glGetnUniformuiv(self: QOpenGLExtraFunctions, program: u32, location: i32, bufSize: i32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetnUniformuiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), @bitCast(bufSize), params.ptr);
    }

    /// ### DEPRECATED: Use `glMinSampleShading` instead
    ///
    pub const GlMinSampleShading = glMinSampleShading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMinSampleShading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    /// ` value: f32 `
    ///
    pub fn glMinSampleShading(self: QOpenGLExtraFunctions, value: f32) void {
        qtc.QOpenGLExtraFunctions_GlMinSampleShading(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glPatchParameteri` instead
    ///
    pub const GlPatchParameteri = glPatchParameteri;

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
    pub fn glPatchParameteri(self: QOpenGLExtraFunctions, pname: u32, value: i32) void {
        qtc.QOpenGLExtraFunctions_GlPatchParameteri(@ptrCast(self.ptr), @bitCast(pname), @bitCast(value));
    }

    /// ### DEPRECATED: Use `glTexParameterIiv` instead
    ///
    pub const GlTexParameterIiv = glTexParameterIiv;

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
    pub fn glTexParameterIiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameterIuiv` instead
    ///
    pub const GlTexParameterIuiv = glTexParameterIuiv;

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
    pub fn glTexParameterIuiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterIiv` instead
    ///
    pub const GlGetTexParameterIiv = glGetTexParameterIiv;

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
    pub fn glGetTexParameterIiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexParameterIiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameterIuiv` instead
    ///
    pub const GlGetTexParameterIuiv = glGetTexParameterIuiv;

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
    pub fn glGetTexParameterIuiv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetTexParameterIuiv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterIiv` instead
    ///
    pub const GlSamplerParameterIiv = glSamplerParameterIiv;

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
    pub fn glSamplerParameterIiv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: []const i32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glSamplerParameterIuiv` instead
    ///
    pub const GlSamplerParameterIuiv = glSamplerParameterIuiv;

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
    pub fn glSamplerParameterIuiv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, param: []const u32) void {
        qtc.QOpenGLExtraFunctions_GlSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), param.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterIiv` instead
    ///
    pub const GlGetSamplerParameterIiv = glGetSamplerParameterIiv;

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
    pub fn glGetSamplerParameterIiv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterIiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetSamplerParameterIuiv` instead
    ///
    pub const GlGetSamplerParameterIuiv = glGetSamplerParameterIuiv;

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
    pub fn glGetSamplerParameterIuiv(self: QOpenGLExtraFunctions, sampler: u32, pname: u32, params: []u32) void {
        qtc.QOpenGLExtraFunctions_GlGetSamplerParameterIuiv(@ptrCast(self.ptr), @bitCast(sampler), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexBuffer` instead
    ///
    pub const GlTexBuffer = glTexBuffer;

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
    pub fn glTexBuffer(self: QOpenGLExtraFunctions, target: u32, internalformat: u32, buffer: u32) void {
        qtc.QOpenGLExtraFunctions_GlTexBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glTexBufferRange` instead
    ///
    pub const GlTexBufferRange = glTexBufferRange;

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
    pub fn glTexBufferRange(self: QOpenGLExtraFunctions, target: u32, internalformat: u32, buffer: u32, offset: isize, size: isize) void {
        qtc.QOpenGLExtraFunctions_GlTexBufferRange(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(buffer), @bitCast(offset), @bitCast(size));
    }

    /// ### DEPRECATED: Use `glTexStorage3DMultisample` instead
    ///
    pub const GlTexStorage3DMultisample = glTexStorage3DMultisample;

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
    pub fn glTexStorage3DMultisample(self: QOpenGLExtraFunctions, target: u32, samples: i32, internalformat: u32, width: i32, height: i32, depth: i32, fixedsamplelocations: u8) void {
        qtc.QOpenGLExtraFunctions_GlTexStorage3DMultisample(@ptrCast(self.ptr), @bitCast(target), @bitCast(samples), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(depth), @bitCast(fixedsamplelocations));
    }

    /// ### DEPRECATED: Use `openGLFeatures` instead
    ///
    pub const OpenGLFeatures = openGLFeatures;

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
    pub fn openGLFeatures(self: QOpenGLExtraFunctions) i32 {
        return qtc.QOpenGLFunctions_OpenGLFeatures(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasOpenGLFeature` instead
    ///
    pub const HasOpenGLFeature = hasOpenGLFeature;

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
    pub fn hasOpenGLFeature(self: QOpenGLExtraFunctions, feature: i32) bool {
        return qtc.QOpenGLFunctions_HasOpenGLFeature(@ptrCast(self.ptr), @bitCast(feature));
    }

    /// ### DEPRECATED: Use `initializeOpenGLFunctions` instead
    ///
    pub const InitializeOpenGLFunctions = initializeOpenGLFunctions;

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn initializeOpenGLFunctions(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glBindTexture` instead
    ///
    pub const GlBindTexture = glBindTexture;

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
    pub fn glBindTexture(self: QOpenGLExtraFunctions, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_GlBindTexture(@ptrCast(self.ptr), @bitCast(target), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glBlendFunc` instead
    ///
    pub const GlBlendFunc = glBlendFunc;

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
    pub fn glBlendFunc(self: QOpenGLExtraFunctions, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_GlBlendFunc(@ptrCast(self.ptr), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### DEPRECATED: Use `glClear` instead
    ///
    pub const GlClear = glClear;

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
    pub fn glClear(self: QOpenGLExtraFunctions, mask: u32) void {
        qtc.QOpenGLFunctions_GlClear(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glClearColor` instead
    ///
    pub const GlClearColor = glClearColor;

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
    pub fn glClearColor(self: QOpenGLExtraFunctions, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlClearColor(@ptrCast(self.ptr), red, green, blue, alpha);
    }

    /// ### DEPRECATED: Use `glClearStencil` instead
    ///
    pub const GlClearStencil = glClearStencil;

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
    pub fn glClearStencil(self: QOpenGLExtraFunctions, s: i32) void {
        qtc.QOpenGLFunctions_GlClearStencil(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `glColorMask` instead
    ///
    pub const GlColorMask = glColorMask;

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
    pub fn glColorMask(self: QOpenGLExtraFunctions, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_GlColorMask(@ptrCast(self.ptr), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### DEPRECATED: Use `glCopyTexImage2D` instead
    ///
    pub const GlCopyTexImage2D = glCopyTexImage2D;

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
    pub fn glCopyTexImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### DEPRECATED: Use `glCopyTexSubImage2D` instead
    ///
    pub const GlCopyTexSubImage2D = glCopyTexSubImage2D;

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
    pub fn glCopyTexSubImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glCullFace` instead
    ///
    pub const GlCullFace = glCullFace;

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
    pub fn glCullFace(self: QOpenGLExtraFunctions, mode: u32) void {
        qtc.QOpenGLFunctions_GlCullFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glDeleteTextures` instead
    ///
    pub const GlDeleteTextures = glDeleteTextures;

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
    pub fn glDeleteTextures(self: QOpenGLExtraFunctions, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glDepthFunc` instead
    ///
    pub const GlDepthFunc = glDepthFunc;

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
    pub fn glDepthFunc(self: QOpenGLExtraFunctions, func: u32) void {
        qtc.QOpenGLFunctions_GlDepthFunc(@ptrCast(self.ptr), @bitCast(func));
    }

    /// ### DEPRECATED: Use `glDepthMask` instead
    ///
    pub const GlDepthMask = glDepthMask;

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
    pub fn glDepthMask(self: QOpenGLExtraFunctions, flag: u8) void {
        qtc.QOpenGLFunctions_GlDepthMask(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `glDisable` instead
    ///
    pub const GlDisable = glDisable;

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
    pub fn glDisable(self: QOpenGLExtraFunctions, cap: u32) void {
        qtc.QOpenGLFunctions_GlDisable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glDrawArrays` instead
    ///
    pub const GlDrawArrays = glDrawArrays;

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
    pub fn glDrawArrays(self: QOpenGLExtraFunctions, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_GlDrawArrays(@ptrCast(self.ptr), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### DEPRECATED: Use `glDrawElements` instead
    ///
    pub const GlDrawElements = glDrawElements;

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
    pub fn glDrawElements(self: QOpenGLExtraFunctions, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlDrawElements(@ptrCast(self.ptr), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### DEPRECATED: Use `glEnable` instead
    ///
    pub const GlEnable = glEnable;

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
    pub fn glEnable(self: QOpenGLExtraFunctions, cap: u32) void {
        qtc.QOpenGLFunctions_GlEnable(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glFinish` instead
    ///
    pub const GlFinish = glFinish;

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glFinish(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLFunctions_GlFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFlush` instead
    ///
    pub const GlFlush = glFlush;

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glFlush(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLFunctions_GlFlush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glFrontFace` instead
    ///
    pub const GlFrontFace = glFrontFace;

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
    pub fn glFrontFace(self: QOpenGLExtraFunctions, mode: u32) void {
        qtc.QOpenGLFunctions_GlFrontFace(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glGenTextures` instead
    ///
    pub const GlGenTextures = glGenTextures;

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
    pub fn glGenTextures(self: QOpenGLExtraFunctions, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_GlGenTextures(@ptrCast(self.ptr), @bitCast(n), textures.ptr);
    }

    /// ### DEPRECATED: Use `glGetBooleanv` instead
    ///
    pub const GlGetBooleanv = glGetBooleanv;

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
    pub fn glGetBooleanv(self: QOpenGLExtraFunctions, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_GlGetBooleanv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetFloatv` instead
    ///
    pub const GlGetFloatv = glGetFloatv;

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
    pub fn glGetFloatv(self: QOpenGLExtraFunctions, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetFloatv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetIntegerv` instead
    ///
    pub const GlGetIntegerv = glGetIntegerv;

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
    pub fn glGetIntegerv(self: QOpenGLExtraFunctions, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetIntegerv(@ptrCast(self.ptr), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetString` instead
    ///
    pub const GlGetString = glGetString;

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
    pub fn glGetString(self: QOpenGLExtraFunctions, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_GlGetString(@ptrCast(self.ptr), @bitCast(name));
        if (ret_str == null) return "";
        return std.mem.span(ret_str.?);
    }

    /// ### DEPRECATED: Use `glGetTexParameterfv` instead
    ///
    pub const GlGetTexParameterfv = glGetTexParameterfv;

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
    pub fn glGetTexParameterfv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetTexParameteriv` instead
    ///
    pub const GlGetTexParameteriv = glGetTexParameteriv;

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
    pub fn glGetTexParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glHint` instead
    ///
    pub const GlHint = glHint;

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
    pub fn glHint(self: QOpenGLExtraFunctions, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_GlHint(@ptrCast(self.ptr), @bitCast(target), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glIsEnabled` instead
    ///
    pub const GlIsEnabled = glIsEnabled;

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
    pub fn glIsEnabled(self: QOpenGLExtraFunctions, cap: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsEnabled(@ptrCast(self.ptr), @bitCast(cap));
    }

    /// ### DEPRECATED: Use `glIsTexture` instead
    ///
    pub const GlIsTexture = glIsTexture;

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
    pub fn glIsTexture(self: QOpenGLExtraFunctions, texture: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glLineWidth` instead
    ///
    pub const GlLineWidth = glLineWidth;

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
    pub fn glLineWidth(self: QOpenGLExtraFunctions, width: f32) void {
        qtc.QOpenGLFunctions_GlLineWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `glPixelStorei` instead
    ///
    pub const GlPixelStorei = glPixelStorei;

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
    pub fn glPixelStorei(self: QOpenGLExtraFunctions, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlPixelStorei(@ptrCast(self.ptr), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glPolygonOffset` instead
    ///
    pub const GlPolygonOffset = glPolygonOffset;

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
    pub fn glPolygonOffset(self: QOpenGLExtraFunctions, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_GlPolygonOffset(@ptrCast(self.ptr), @bitCast(factor), @bitCast(units));
    }

    /// ### DEPRECATED: Use `glReadPixels` instead
    ///
    pub const GlReadPixels = glReadPixels;

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
    pub fn glReadPixels(self: QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlReadPixels(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glScissor` instead
    ///
    pub const GlScissor = glScissor;

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
    pub fn glScissor(self: QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlScissor(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glStencilFunc` instead
    ///
    pub const GlStencilFunc = glStencilFunc;

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
    pub fn glStencilFunc(self: QOpenGLExtraFunctions, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFunc(@ptrCast(self.ptr), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilMask` instead
    ///
    pub const GlStencilMask = glStencilMask;

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
    pub fn glStencilMask(self: QOpenGLExtraFunctions, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMask(@ptrCast(self.ptr), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilOp` instead
    ///
    pub const GlStencilOp = glStencilOp;

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
    pub fn glStencilOp(self: QOpenGLExtraFunctions, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOp(@ptrCast(self.ptr), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### DEPRECATED: Use `glTexImage2D` instead
    ///
    pub const GlTexImage2D = glTexImage2D;

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
    pub fn glTexImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glTexParameterf` instead
    ///
    pub const GlTexParameterf = glTexParameterf;

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
    pub fn glTexParameterf(self: QOpenGLExtraFunctions, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_GlTexParameterf(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexParameterfv` instead
    ///
    pub const GlTexParameterfv = glTexParameterfv;

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
    pub fn glTexParameterfv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_GlTexParameterfv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexParameteri` instead
    ///
    pub const GlTexParameteri = glTexParameteri;

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
    pub fn glTexParameteri(self: QOpenGLExtraFunctions, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlTexParameteri(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### DEPRECATED: Use `glTexParameteriv` instead
    ///
    pub const GlTexParameteriv = glTexParameteriv;

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
    pub fn glTexParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_GlTexParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glTexSubImage2D` instead
    ///
    pub const GlTexSubImage2D = glTexSubImage2D;

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
    pub fn glTexSubImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### DEPRECATED: Use `glViewport` instead
    ///
    pub const GlViewport = glViewport;

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
    pub fn glViewport(self: QOpenGLExtraFunctions, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlViewport(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glActiveTexture` instead
    ///
    pub const GlActiveTexture = glActiveTexture;

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
    pub fn glActiveTexture(self: QOpenGLExtraFunctions, texture: u32) void {
        qtc.QOpenGLFunctions_GlActiveTexture(@ptrCast(self.ptr), @bitCast(texture));
    }

    /// ### DEPRECATED: Use `glAttachShader` instead
    ///
    pub const GlAttachShader = glAttachShader;

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
    pub fn glAttachShader(self: QOpenGLExtraFunctions, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlAttachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glBindAttribLocation` instead
    ///
    pub const GlBindAttribLocation = glBindAttribLocation;

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
    pub fn glBindAttribLocation(self: QOpenGLExtraFunctions, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_GlBindAttribLocation(@ptrCast(self.ptr), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### DEPRECATED: Use `glBindBuffer` instead
    ///
    pub const GlBindBuffer = glBindBuffer;

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
    pub fn glBindBuffer(self: QOpenGLExtraFunctions, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_GlBindBuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glBindFramebuffer` instead
    ///
    pub const GlBindFramebuffer = glBindFramebuffer;

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
    pub fn glBindFramebuffer(self: QOpenGLExtraFunctions, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindFramebuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### DEPRECATED: Use `glBindRenderbuffer` instead
    ///
    pub const GlBindRenderbuffer = glBindRenderbuffer;

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
    pub fn glBindRenderbuffer(self: QOpenGLExtraFunctions, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glBlendColor` instead
    ///
    pub const GlBlendColor = glBlendColor;

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
    pub fn glBlendColor(self: QOpenGLExtraFunctions, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlBlendColor(@ptrCast(self.ptr), red, green, blue, alpha);
    }

    /// ### DEPRECATED: Use `glBlendEquation` instead
    ///
    pub const GlBlendEquation = glBlendEquation;

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
    pub fn glBlendEquation(self: QOpenGLExtraFunctions, mode: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquation(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `glBlendEquationSeparate` instead
    ///
    pub const GlBlendEquationSeparate = glBlendEquationSeparate;

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
    pub fn glBlendEquationSeparate(self: QOpenGLExtraFunctions, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquationSeparate(@ptrCast(self.ptr), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### DEPRECATED: Use `glBlendFuncSeparate` instead
    ///
    pub const GlBlendFuncSeparate = glBlendFuncSeparate;

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
    pub fn glBlendFuncSeparate(self: QOpenGLExtraFunctions, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendFuncSeparate(@ptrCast(self.ptr), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// ### DEPRECATED: Use `glBufferData` instead
    ///
    pub const GlBufferData = glBufferData;

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
    pub fn glBufferData(self: QOpenGLExtraFunctions, target: u32, size: isize, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_GlBufferData(@ptrCast(self.ptr), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### DEPRECATED: Use `glBufferSubData` instead
    ///
    pub const GlBufferSubData = glBufferSubData;

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
    pub fn glBufferSubData(self: QOpenGLExtraFunctions, target: u32, offset: isize, size: isize, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlBufferSubData(@ptrCast(self.ptr), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glClearDepthf` instead
    ///
    pub const GlClearDepthf = glClearDepthf;

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
    pub fn glClearDepthf(self: QOpenGLExtraFunctions, depth: f32) void {
        qtc.QOpenGLFunctions_GlClearDepthf(@ptrCast(self.ptr), depth);
    }

    /// ### DEPRECATED: Use `glCompileShader` instead
    ///
    pub const GlCompileShader = glCompileShader;

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
    pub fn glCompileShader(self: QOpenGLExtraFunctions, shader: u32) void {
        qtc.QOpenGLFunctions_GlCompileShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glCompressedTexImage2D` instead
    ///
    pub const GlCompressedTexImage2D = glCompressedTexImage2D;

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
    pub fn glCompressedTexImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCompressedTexSubImage2D` instead
    ///
    pub const GlCompressedTexSubImage2D = glCompressedTexSubImage2D;

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
    pub fn glCompressedTexSubImage2D(self: QOpenGLExtraFunctions, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexSubImage2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `glCreateProgram` instead
    ///
    pub const GlCreateProgram = glCreateProgram;

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glCreateProgram(self: QOpenGLExtraFunctions) u32 {
        return qtc.QOpenGLFunctions_GlCreateProgram(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glCreateShader` instead
    ///
    pub const GlCreateShader = glCreateShader;

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
    pub fn glCreateShader(self: QOpenGLExtraFunctions, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_GlCreateShader(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `glDeleteBuffers` instead
    ///
    pub const GlDeleteBuffers = glDeleteBuffers;

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
    pub fn glDeleteBuffers(self: QOpenGLExtraFunctions, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteFramebuffers` instead
    ///
    pub const GlDeleteFramebuffers = glDeleteFramebuffers;

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
    pub fn glDeleteFramebuffers(self: QOpenGLExtraFunctions, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteProgram` instead
    ///
    pub const GlDeleteProgram = glDeleteProgram;

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
    pub fn glDeleteProgram(self: QOpenGLExtraFunctions, program: u32) void {
        qtc.QOpenGLFunctions_GlDeleteProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glDeleteRenderbuffers` instead
    ///
    pub const GlDeleteRenderbuffers = glDeleteRenderbuffers;

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
    pub fn glDeleteRenderbuffers(self: QOpenGLExtraFunctions, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### DEPRECATED: Use `glDeleteShader` instead
    ///
    pub const GlDeleteShader = glDeleteShader;

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
    pub fn glDeleteShader(self: QOpenGLExtraFunctions, shader: u32) void {
        qtc.QOpenGLFunctions_GlDeleteShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glDepthRangef` instead
    ///
    pub const GlDepthRangef = glDepthRangef;

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
    pub fn glDepthRangef(self: QOpenGLExtraFunctions, zNear: f32, zFar: f32) void {
        qtc.QOpenGLFunctions_GlDepthRangef(@ptrCast(self.ptr), zNear, zFar);
    }

    /// ### DEPRECATED: Use `glDetachShader` instead
    ///
    pub const GlDetachShader = glDetachShader;

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
    pub fn glDetachShader(self: QOpenGLExtraFunctions, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlDetachShader(@ptrCast(self.ptr), @bitCast(program), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glDisableVertexAttribArray` instead
    ///
    pub const GlDisableVertexAttribArray = glDisableVertexAttribArray;

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
    pub fn glDisableVertexAttribArray(self: QOpenGLExtraFunctions, index: u32) void {
        qtc.QOpenGLFunctions_GlDisableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glEnableVertexAttribArray` instead
    ///
    pub const GlEnableVertexAttribArray = glEnableVertexAttribArray;

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
    pub fn glEnableVertexAttribArray(self: QOpenGLExtraFunctions, index: u32) void {
        qtc.QOpenGLFunctions_GlEnableVertexAttribArray(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `glFramebufferRenderbuffer` instead
    ///
    pub const GlFramebufferRenderbuffer = glFramebufferRenderbuffer;

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
    pub fn glFramebufferRenderbuffer(self: QOpenGLExtraFunctions, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlFramebufferRenderbuffer(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glFramebufferTexture2D` instead
    ///
    pub const GlFramebufferTexture2D = glFramebufferTexture2D;

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
    pub fn glFramebufferTexture2D(self: QOpenGLExtraFunctions, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_GlFramebufferTexture2D(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### DEPRECATED: Use `glGenBuffers` instead
    ///
    pub const GlGenBuffers = glGenBuffers;

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
    pub fn glGenBuffers(self: QOpenGLExtraFunctions, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenBuffers(@ptrCast(self.ptr), @bitCast(n), buffers.ptr);
    }

    /// ### DEPRECATED: Use `glGenerateMipmap` instead
    ///
    pub const GlGenerateMipmap = glGenerateMipmap;

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
    pub fn glGenerateMipmap(self: QOpenGLExtraFunctions, target: u32) void {
        qtc.QOpenGLFunctions_GlGenerateMipmap(@ptrCast(self.ptr), @bitCast(target));
    }

    /// ### DEPRECATED: Use `glGenFramebuffers` instead
    ///
    pub const GlGenFramebuffers = glGenFramebuffers;

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
    pub fn glGenFramebuffers(self: QOpenGLExtraFunctions, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenFramebuffers(@ptrCast(self.ptr), @bitCast(n), framebuffers.ptr);
    }

    /// ### DEPRECATED: Use `glGenRenderbuffers` instead
    ///
    pub const GlGenRenderbuffers = glGenRenderbuffers;

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
    pub fn glGenRenderbuffers(self: QOpenGLExtraFunctions, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenRenderbuffers(@ptrCast(self.ptr), @bitCast(n), renderbuffers.ptr);
    }

    /// ### DEPRECATED: Use `glGetAttachedShaders` instead
    ///
    pub const GlGetAttachedShaders = glGetAttachedShaders;

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
    pub fn glGetAttachedShaders(self: QOpenGLExtraFunctions, program: u32, maxcount: i32, count: []i32, shaders: []u32) void {
        qtc.QOpenGLFunctions_GlGetAttachedShaders(@ptrCast(self.ptr), @bitCast(program), @bitCast(maxcount), count.ptr, shaders.ptr);
    }

    /// ### DEPRECATED: Use `glGetAttribLocation` instead
    ///
    pub const GlGetAttribLocation = glGetAttribLocation;

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
    pub fn glGetAttribLocation(self: QOpenGLExtraFunctions, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetAttribLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetBufferParameteriv` instead
    ///
    pub const GlGetBufferParameteriv = glGetBufferParameteriv;

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
    pub fn glGetBufferParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetBufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetFramebufferAttachmentParameteriv` instead
    ///
    pub const GlGetFramebufferAttachmentParameteriv = glGetFramebufferAttachmentParameteriv;

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
    pub fn glGetFramebufferAttachmentParameteriv(self: QOpenGLExtraFunctions, target: u32, attachment: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetProgramiv` instead
    ///
    pub const GlGetProgramiv = glGetProgramiv;

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
    pub fn glGetProgramiv(self: QOpenGLExtraFunctions, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetProgramiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetProgramInfoLog` instead
    ///
    pub const GlGetProgramInfoLog = glGetProgramInfoLog;

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
    pub fn glGetProgramInfoLog(self: QOpenGLExtraFunctions, program: u32, bufsize: i32, length: []i32, infolog: [:0]u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetProgramInfoLog(@ptrCast(self.ptr), @bitCast(program), @bitCast(bufsize), length.ptr, infolog_Cstring);
    }

    /// ### DEPRECATED: Use `glGetRenderbufferParameteriv` instead
    ///
    pub const GlGetRenderbufferParameteriv = glGetRenderbufferParameteriv;

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
    pub fn glGetRenderbufferParameteriv(self: QOpenGLExtraFunctions, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetRenderbufferParameteriv(@ptrCast(self.ptr), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetShaderiv` instead
    ///
    pub const GlGetShaderiv = glGetShaderiv;

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
    pub fn glGetShaderiv(self: QOpenGLExtraFunctions, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetShaderiv(@ptrCast(self.ptr), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetShaderInfoLog` instead
    ///
    pub const GlGetShaderInfoLog = glGetShaderInfoLog;

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
    pub fn glGetShaderInfoLog(self: QOpenGLExtraFunctions, shader: u32, bufsize: i32, length: []i32, infolog: [:0]u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetShaderInfoLog(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufsize), length.ptr, infolog_Cstring);
    }

    /// ### DEPRECATED: Use `glGetShaderPrecisionFormat` instead
    ///
    pub const GlGetShaderPrecisionFormat = glGetShaderPrecisionFormat;

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
    pub fn glGetShaderPrecisionFormat(self: QOpenGLExtraFunctions, shadertype: u32, precisiontype: u32, range: []i32, precision: []i32) void {
        qtc.QOpenGLFunctions_GlGetShaderPrecisionFormat(@ptrCast(self.ptr), @bitCast(shadertype), @bitCast(precisiontype), range.ptr, precision.ptr);
    }

    /// ### DEPRECATED: Use `glGetShaderSource` instead
    ///
    pub const GlGetShaderSource = glGetShaderSource;

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
    pub fn glGetShaderSource(self: QOpenGLExtraFunctions, shader: u32, bufsize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_GlGetShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(bufsize), length.ptr, source_Cstring);
    }

    /// ### DEPRECATED: Use `glGetUniformfv` instead
    ///
    pub const GlGetUniformfv = glGetUniformfv;

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
    pub fn glGetUniformfv(self: QOpenGLExtraFunctions, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetUniformfv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformiv` instead
    ///
    pub const GlGetUniformiv = glGetUniformiv;

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
    pub fn glGetUniformiv(self: QOpenGLExtraFunctions, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetUniformiv(@ptrCast(self.ptr), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetUniformLocation` instead
    ///
    pub const GlGetUniformLocation = glGetUniformLocation;

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
    pub fn glGetUniformLocation(self: QOpenGLExtraFunctions, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetUniformLocation(@ptrCast(self.ptr), @bitCast(program), name_Cstring);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribfv` instead
    ///
    pub const GlGetVertexAttribfv = glGetVertexAttribfv;

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
    pub fn glGetVertexAttribfv(self: QOpenGLExtraFunctions, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribfv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribiv` instead
    ///
    pub const GlGetVertexAttribiv = glGetVertexAttribiv;

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
    pub fn glGetVertexAttribiv(self: QOpenGLExtraFunctions, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribiv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### DEPRECATED: Use `glGetVertexAttribPointerv` instead
    ///
    pub const GlGetVertexAttribPointerv = glGetVertexAttribPointerv;

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
    pub fn glGetVertexAttribPointerv(self: QOpenGLExtraFunctions, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribPointerv(@ptrCast(self.ptr), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### DEPRECATED: Use `glIsBuffer` instead
    ///
    pub const GlIsBuffer = glIsBuffer;

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
    pub fn glIsBuffer(self: QOpenGLExtraFunctions, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsBuffer(@ptrCast(self.ptr), @bitCast(buffer));
    }

    /// ### DEPRECATED: Use `glIsFramebuffer` instead
    ///
    pub const GlIsFramebuffer = glIsFramebuffer;

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
    pub fn glIsFramebuffer(self: QOpenGLExtraFunctions, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsFramebuffer(@ptrCast(self.ptr), @bitCast(framebuffer));
    }

    /// ### DEPRECATED: Use `glIsProgram` instead
    ///
    pub const GlIsProgram = glIsProgram;

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
    pub fn glIsProgram(self: QOpenGLExtraFunctions, program: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glIsRenderbuffer` instead
    ///
    pub const GlIsRenderbuffer = glIsRenderbuffer;

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
    pub fn glIsRenderbuffer(self: QOpenGLExtraFunctions, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsRenderbuffer(@ptrCast(self.ptr), @bitCast(renderbuffer));
    }

    /// ### DEPRECATED: Use `glIsShader` instead
    ///
    pub const GlIsShader = glIsShader;

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
    pub fn glIsShader(self: QOpenGLExtraFunctions, shader: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsShader(@ptrCast(self.ptr), @bitCast(shader));
    }

    /// ### DEPRECATED: Use `glLinkProgram` instead
    ///
    pub const GlLinkProgram = glLinkProgram;

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
    pub fn glLinkProgram(self: QOpenGLExtraFunctions, program: u32) void {
        qtc.QOpenGLFunctions_GlLinkProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glReleaseShaderCompiler` instead
    ///
    pub const GlReleaseShaderCompiler = glReleaseShaderCompiler;

    /// Inherited from QOpenGLFunctions
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glReleaseShaderCompiler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn glReleaseShaderCompiler(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLFunctions_GlReleaseShaderCompiler(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glRenderbufferStorage` instead
    ///
    pub const GlRenderbufferStorage = glRenderbufferStorage;

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
    pub fn glRenderbufferStorage(self: QOpenGLExtraFunctions, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlRenderbufferStorage(@ptrCast(self.ptr), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### DEPRECATED: Use `glSampleCoverage` instead
    ///
    pub const GlSampleCoverage = glSampleCoverage;

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
    pub fn glSampleCoverage(self: QOpenGLExtraFunctions, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_GlSampleCoverage(@ptrCast(self.ptr), value, @bitCast(invert));
    }

    /// ### DEPRECATED: Use `glShaderBinary` instead
    ///
    pub const GlShaderBinary = glShaderBinary;

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
    pub fn glShaderBinary(self: QOpenGLExtraFunctions, n: i32, shaders: []const u32, binaryformat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_GlShaderBinary(@ptrCast(self.ptr), @bitCast(n), shaders.ptr, @bitCast(binaryformat), @ptrCast(binary), @bitCast(length));
    }

    /// ### DEPRECATED: Use `glShaderSource` instead
    ///
    pub const GlShaderSource = glShaderSource;

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
    /// ` string: []const [:0]const u8 `
    ///
    /// ` length: []const i32 `
    ///
    pub fn glShaderSource(self: QOpenGLExtraFunctions, allocator: std.mem.Allocator, shader: u32, count: i32, string: []const [:0]const u8, length: []const i32) void {
        const string_chararr = allocator.alloc([*:0]const u8, string.len) catch @panic("QOpenGLExtraFunctions.glShaderSource: Memory allocation failed");
        defer allocator.free(string_chararr);
        for (string, 0..string.len) |str, i|
            string_chararr[i] = @ptrCast(str.ptr);
        qtc.QOpenGLFunctions_GlShaderSource(@ptrCast(self.ptr), @bitCast(shader), @bitCast(count), @ptrCast(string_chararr), length.ptr);
    }

    /// ### DEPRECATED: Use `glStencilFuncSeparate` instead
    ///
    pub const GlStencilFuncSeparate = glStencilFuncSeparate;

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
    pub fn glStencilFuncSeparate(self: QOpenGLExtraFunctions, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFuncSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilMaskSeparate` instead
    ///
    pub const GlStencilMaskSeparate = glStencilMaskSeparate;

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
    pub fn glStencilMaskSeparate(self: QOpenGLExtraFunctions, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMaskSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(mask));
    }

    /// ### DEPRECATED: Use `glStencilOpSeparate` instead
    ///
    pub const GlStencilOpSeparate = glStencilOpSeparate;

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
    pub fn glStencilOpSeparate(self: QOpenGLExtraFunctions, face: u32, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOpSeparate(@ptrCast(self.ptr), @bitCast(face), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### DEPRECATED: Use `glUniform1f` instead
    ///
    pub const GlUniform1f = glUniform1f;

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
    pub fn glUniform1f(self: QOpenGLExtraFunctions, location: i32, x: f32) void {
        qtc.QOpenGLFunctions_GlUniform1f(@ptrCast(self.ptr), @bitCast(location), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glUniform1fv` instead
    ///
    pub const GlUniform1fv = glUniform1fv;

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
    pub fn glUniform1fv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform1fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glUniform1i` instead
    ///
    pub const GlUniform1i = glUniform1i;

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
    pub fn glUniform1i(self: QOpenGLExtraFunctions, location: i32, x: i32) void {
        qtc.QOpenGLFunctions_GlUniform1i(@ptrCast(self.ptr), @bitCast(location), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glUniform1iv` instead
    ///
    pub const GlUniform1iv = glUniform1iv;

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
    pub fn glUniform1iv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform1iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2f` instead
    ///
    pub const GlUniform2f = glUniform2f;

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
    pub fn glUniform2f(self: QOpenGLExtraFunctions, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlUniform2f(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glUniform2fv` instead
    ///
    pub const GlUniform2fv = glUniform2fv;

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
    pub fn glUniform2fv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glUniform2i` instead
    ///
    pub const GlUniform2i = glUniform2i;

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
    pub fn glUniform2i(self: QOpenGLExtraFunctions, location: i32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_GlUniform2i(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glUniform2iv` instead
    ///
    pub const GlUniform2iv = glUniform2iv;

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
    pub fn glUniform2iv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform2iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3f` instead
    ///
    pub const GlUniform3f = glUniform3f;

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
    pub fn glUniform3f(self: QOpenGLExtraFunctions, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlUniform3f(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glUniform3fv` instead
    ///
    pub const GlUniform3fv = glUniform3fv;

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
    pub fn glUniform3fv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glUniform3i` instead
    ///
    pub const GlUniform3i = glUniform3i;

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
    pub fn glUniform3i(self: QOpenGLExtraFunctions, location: i32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_GlUniform3i(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glUniform3iv` instead
    ///
    pub const GlUniform3iv = glUniform3iv;

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
    pub fn glUniform3iv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform3iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4f` instead
    ///
    pub const GlUniform4f = glUniform4f;

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
    pub fn glUniform4f(self: QOpenGLExtraFunctions, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlUniform4f(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glUniform4fv` instead
    ///
    pub const GlUniform4fv = glUniform4fv;

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
    pub fn glUniform4fv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glUniform4i` instead
    ///
    pub const GlUniform4i = glUniform4i;

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
    pub fn glUniform4i(self: QOpenGLExtraFunctions, location: i32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_GlUniform4i(@ptrCast(self.ptr), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glUniform4iv` instead
    ///
    pub const GlUniform4iv = glUniform4iv;

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
    pub fn glUniform4iv(self: QOpenGLExtraFunctions, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform4iv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix2fv` instead
    ///
    pub const GlUniformMatrix2fv = glUniformMatrix2fv;

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
    pub fn glUniformMatrix2fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix2fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix3fv` instead
    ///
    pub const GlUniformMatrix3fv = glUniformMatrix3fv;

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
    pub fn glUniformMatrix3fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix3fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUniformMatrix4fv` instead
    ///
    pub const GlUniformMatrix4fv = glUniformMatrix4fv;

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
    pub fn glUniformMatrix4fv(self: QOpenGLExtraFunctions, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix4fv(@ptrCast(self.ptr), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### DEPRECATED: Use `glUseProgram` instead
    ///
    pub const GlUseProgram = glUseProgram;

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
    pub fn glUseProgram(self: QOpenGLExtraFunctions, program: u32) void {
        qtc.QOpenGLFunctions_GlUseProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glValidateProgram` instead
    ///
    pub const GlValidateProgram = glValidateProgram;

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
    pub fn glValidateProgram(self: QOpenGLExtraFunctions, program: u32) void {
        qtc.QOpenGLFunctions_GlValidateProgram(@ptrCast(self.ptr), @bitCast(program));
    }

    /// ### DEPRECATED: Use `glVertexAttrib1f` instead
    ///
    pub const GlVertexAttrib1f = glVertexAttrib1f;

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
    pub fn glVertexAttrib1f(self: QOpenGLExtraFunctions, indx: u32, x: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1f(@ptrCast(self.ptr), @bitCast(indx), @bitCast(x));
    }

    /// ### DEPRECATED: Use `glVertexAttrib1fv` instead
    ///
    pub const GlVertexAttrib1fv = glVertexAttrib1fv;

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
    pub fn glVertexAttrib1fv(self: QOpenGLExtraFunctions, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1fv(@ptrCast(self.ptr), @bitCast(indx), values.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib2f` instead
    ///
    pub const GlVertexAttrib2f = glVertexAttrib2f;

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
    pub fn glVertexAttrib2f(self: QOpenGLExtraFunctions, indx: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2f(@ptrCast(self.ptr), @bitCast(indx), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `glVertexAttrib2fv` instead
    ///
    pub const GlVertexAttrib2fv = glVertexAttrib2fv;

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
    pub fn glVertexAttrib2fv(self: QOpenGLExtraFunctions, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2fv(@ptrCast(self.ptr), @bitCast(indx), values.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib3f` instead
    ///
    pub const GlVertexAttrib3f = glVertexAttrib3f;

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
    pub fn glVertexAttrib3f(self: QOpenGLExtraFunctions, indx: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3f(@ptrCast(self.ptr), @bitCast(indx), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### DEPRECATED: Use `glVertexAttrib3fv` instead
    ///
    pub const GlVertexAttrib3fv = glVertexAttrib3fv;

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
    pub fn glVertexAttrib3fv(self: QOpenGLExtraFunctions, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3fv(@ptrCast(self.ptr), @bitCast(indx), values.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttrib4f` instead
    ///
    pub const GlVertexAttrib4f = glVertexAttrib4f;

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
    pub fn glVertexAttrib4f(self: QOpenGLExtraFunctions, indx: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4f(@ptrCast(self.ptr), @bitCast(indx), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### DEPRECATED: Use `glVertexAttrib4fv` instead
    ///
    pub const GlVertexAttrib4fv = glVertexAttrib4fv;

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
    pub fn glVertexAttrib4fv(self: QOpenGLExtraFunctions, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4fv(@ptrCast(self.ptr), @bitCast(indx), values.ptr);
    }

    /// ### DEPRECATED: Use `glVertexAttribPointer` instead
    ///
    pub const GlVertexAttribPointer = glVertexAttribPointer;

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
    pub fn glVertexAttribPointer(self: QOpenGLExtraFunctions, indx: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, ptr: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlVertexAttribPointer(@ptrCast(self.ptr), @bitCast(indx), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglextrafunctions.html#dtor.QOpenGLExtraFunctions)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOpenGLExtraFunctions `
    ///
    pub fn delete(self: QOpenGLExtraFunctions) void {
        qtc.QOpenGLExtraFunctions_Delete(@ptrCast(self.ptr));
    }
};
