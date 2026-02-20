const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qopenglfunctions_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html)
pub const qopenglfunctions = struct {
    /// New constructs a new QOpenGLFunctions object.
    ///
    pub fn New() QtC.QOpenGLFunctions {
        return qtc.QOpenGLFunctions_new();
    }

    /// New2 constructs a new QOpenGLFunctions object.
    ///
    /// ## Parameter(s):
    ///
    /// ` context: QtC.QOpenGLContext `
    ///
    pub fn New2(context: ?*anyopaque) QtC.QOpenGLFunctions {
        return qtc.QOpenGLFunctions_new2(@ptrCast(context));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#openGLFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ## Returns:
    ///
    /// ` flag of qopenglfunctions_enums.OpenGLFeature `
    ///
    pub fn OpenGLFeatures(self: ?*anyopaque) i32 {
        return qtc.QOpenGLFunctions_OpenGLFeatures(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#hasOpenGLFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` feature: qopenglfunctions_enums.OpenGLFeature `
    ///
    pub fn HasOpenGLFeature(self: ?*anyopaque, feature: i32) bool {
        return qtc.QOpenGLFunctions_HasOpenGLFeature(@ptrCast(self), @bitCast(feature));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#initializeOpenGLFunctions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    pub fn InitializeOpenGLFunctions(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_InitializeOpenGLFunctions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlBindTexture(self: ?*anyopaque, target: u32, texture: u32) void {
        qtc.QOpenGLFunctions_GlBindTexture(@ptrCast(self), @bitCast(target), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` sfactor: u32 `
    ///
    /// ` dfactor: u32 `
    ///
    pub fn GlBlendFunc(self: ?*anyopaque, sfactor: u32, dfactor: u32) void {
        qtc.QOpenGLFunctions_GlBlendFunc(@ptrCast(self), @bitCast(sfactor), @bitCast(dfactor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlClear(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_GlClear(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlClearColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlClearColor(@ptrCast(self), red, green, blue, alpha);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearStencil)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` s: i32 `
    ///
    pub fn GlClearStencil(self: ?*anyopaque, s: i32) void {
        qtc.QOpenGLFunctions_GlClearStencil(@ptrCast(self), @bitCast(s));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glColorMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` red: u8 `
    ///
    /// ` green: u8 `
    ///
    /// ` blue: u8 `
    ///
    /// ` alpha: u8 `
    ///
    pub fn GlColorMask(self: ?*anyopaque, red: u8, green: u8, blue: u8, alpha: u8) void {
        qtc.QOpenGLFunctions_GlColorMask(@ptrCast(self), @bitCast(red), @bitCast(green), @bitCast(blue), @bitCast(alpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlCopyTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, x: i32, y: i32, width: i32, height: i32, border: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(border));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlCopyTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlCopyTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCullFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlCullFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlCullFace(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []const u32 `
    ///
    pub fn GlDeleteTextures(self: ?*anyopaque, n: i32, textures: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteTextures(@ptrCast(self), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` func: u32 `
    ///
    pub fn GlDepthFunc(self: ?*anyopaque, func: u32) void {
        qtc.QOpenGLFunctions_GlDepthFunc(@ptrCast(self), @bitCast(func));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` flag: u8 `
    ///
    pub fn GlDepthMask(self: ?*anyopaque, flag: u8) void {
        qtc.QOpenGLFunctions_GlDepthMask(@ptrCast(self), @bitCast(flag));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlDisable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_GlDisable(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawArrays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` first: i32 `
    ///
    /// ` count: i32 `
    ///
    pub fn GlDrawArrays(self: ?*anyopaque, mode: u32, first: i32, count: i32) void {
        qtc.QOpenGLFunctions_GlDrawArrays(@ptrCast(self), @bitCast(mode), @bitCast(first), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawElements)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` mode: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` typeVal: u32 `
    ///
    /// ` indices: ?*const anyopaque `
    ///
    pub fn GlDrawElements(self: ?*anyopaque, mode: u32, count: i32, typeVal: u32, indices: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlDrawElements(@ptrCast(self), @bitCast(mode), @bitCast(count), @bitCast(typeVal), @ptrCast(indices));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlEnable(self: ?*anyopaque, cap: u32) void {
        qtc.QOpenGLFunctions_GlEnable(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    pub fn GlFinish(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlFinish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFlush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    pub fn GlFlush(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlFlush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFrontFace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlFrontFace(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlFrontFace(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenTextures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` textures: []u32 `
    ///
    pub fn GlGenTextures(self: ?*anyopaque, n: i32, textures: []u32) void {
        qtc.QOpenGLFunctions_GlGenTextures(@ptrCast(self), @bitCast(n), textures.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBooleanv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []u8 `
    ///
    pub fn GlGetBooleanv(self: ?*anyopaque, pname: u32, params: []u8) void {
        qtc.QOpenGLFunctions_GlGetBooleanv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFloatv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetFloatv(self: ?*anyopaque, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetFloatv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetIntegerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetIntegerv(self: ?*anyopaque, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetIntegerv(@ptrCast(self), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` name: u32 `
    ///
    pub fn GlGetString(self: ?*anyopaque, name: u32) []const u8 {
        const ret_str: ?[*:0]const u8 = qtc.QOpenGLFunctions_GlGetString(@ptrCast(self), @bitCast(name));
        if (ret_str == null) {
            return "";
        }
        return std.mem.span(ret_str.?);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetTexParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetTexParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlHint(self: ?*anyopaque, target: u32, mode: u32) void {
        qtc.QOpenGLFunctions_GlHint(@ptrCast(self), @bitCast(target), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` cap: u32 `
    ///
    pub fn GlIsEnabled(self: ?*anyopaque, cap: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsEnabled(@ptrCast(self), @bitCast(cap));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlIsTexture(self: ?*anyopaque, texture: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsTexture(@ptrCast(self), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` width: f32 `
    ///
    pub fn GlLineWidth(self: ?*anyopaque, width: f32) void {
        qtc.QOpenGLFunctions_GlLineWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glPixelStorei)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlPixelStorei(self: ?*anyopaque, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlPixelStorei(@ptrCast(self), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glPolygonOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` factor: f32 `
    ///
    /// ` units: f32 `
    ///
    pub fn GlPolygonOffset(self: ?*anyopaque, factor: f32, units: f32) void {
        qtc.QOpenGLFunctions_GlPolygonOffset(@ptrCast(self), @bitCast(factor), @bitCast(units));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glReadPixels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlReadPixels(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlReadPixels(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glScissor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlScissor(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlScissor(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFunc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFunc(self: ?*anyopaque, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFunc(@ptrCast(self), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMask(self: ?*anyopaque, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMask(@ptrCast(self), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOp(self: ?*anyopaque, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOp(@ptrCast(self), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: i32, width: i32, height: i32, border: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: f32 `
    ///
    pub fn GlTexParameterf(self: ?*anyopaque, target: u32, pname: u32, param: f32) void {
        qtc.QOpenGLFunctions_GlTexParameterf(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const f32 `
    ///
    pub fn GlTexParameterfv(self: ?*anyopaque, target: u32, pname: u32, params: []const f32) void {
        qtc.QOpenGLFunctions_GlTexParameterfv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteri)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` param: i32 `
    ///
    pub fn GlTexParameteri(self: ?*anyopaque, target: u32, pname: u32, param: i32) void {
        qtc.QOpenGLFunctions_GlTexParameteri(@ptrCast(self), @bitCast(target), @bitCast(pname), @bitCast(param));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []const i32 `
    ///
    pub fn GlTexParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []const i32) void {
        qtc.QOpenGLFunctions_GlTexParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, typeVal: u32, pixels: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(typeVal), @ptrCast(pixels));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlViewport(self: ?*anyopaque, x: i32, y: i32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlViewport(@ptrCast(self), @bitCast(x), @bitCast(y), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glActiveTexture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` texture: u32 `
    ///
    pub fn GlActiveTexture(self: ?*anyopaque, texture: u32) void {
        qtc.QOpenGLFunctions_GlActiveTexture(@ptrCast(self), @bitCast(texture));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glAttachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlAttachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlAttachShader(@ptrCast(self), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` index: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlBindAttribLocation(self: ?*anyopaque, program: u32, index: u32, name: [:0]const u8) void {
        const name_Cstring = name.ptr;
        qtc.QOpenGLFunctions_GlBindAttribLocation(@ptrCast(self), @bitCast(program), @bitCast(index), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlBindBuffer(self: ?*anyopaque, target: u32, buffer: u32) void {
        qtc.QOpenGLFunctions_GlBindBuffer(@ptrCast(self), @bitCast(target), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlBindFramebuffer(self: ?*anyopaque, target: u32, framebuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindFramebuffer(@ptrCast(self), @bitCast(target), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlBindRenderbuffer(self: ?*anyopaque, target: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlBindRenderbuffer(@ptrCast(self), @bitCast(target), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` red: f32 `
    ///
    /// ` green: f32 `
    ///
    /// ` blue: f32 `
    ///
    /// ` alpha: f32 `
    ///
    pub fn GlBlendColor(self: ?*anyopaque, red: f32, green: f32, blue: f32, alpha: f32) void {
        qtc.QOpenGLFunctions_GlBlendColor(@ptrCast(self), red, green, blue, alpha);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` mode: u32 `
    ///
    pub fn GlBlendEquation(self: ?*anyopaque, mode: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquation(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquationSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` modeRGB: u32 `
    ///
    /// ` modeAlpha: u32 `
    ///
    pub fn GlBlendEquationSeparate(self: ?*anyopaque, modeRGB: u32, modeAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendEquationSeparate(@ptrCast(self), @bitCast(modeRGB), @bitCast(modeAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` srcRGB: u32 `
    ///
    /// ` dstRGB: u32 `
    ///
    /// ` srcAlpha: u32 `
    ///
    /// ` dstAlpha: u32 `
    ///
    pub fn GlBlendFuncSeparate(self: ?*anyopaque, srcRGB: u32, dstRGB: u32, srcAlpha: u32, dstAlpha: u32) void {
        qtc.QOpenGLFunctions_GlBlendFuncSeparate(@ptrCast(self), @bitCast(srcRGB), @bitCast(dstRGB), @bitCast(srcAlpha), @bitCast(dstAlpha));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` size: i64 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    /// ` usage: u32 `
    ///
    pub fn GlBufferData(self: ?*anyopaque, target: u32, size: i64, data: ?*const anyopaque, usage: u32) void {
        qtc.QOpenGLFunctions_GlBufferData(@ptrCast(self), @bitCast(target), @bitCast(size), @ptrCast(data), @bitCast(usage));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferSubData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` offset: i64 `
    ///
    /// ` size: i64 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn GlBufferSubData(self: ?*anyopaque, target: u32, offset: i64, size: i64, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlBufferSubData(@ptrCast(self), @bitCast(target), @bitCast(offset), @bitCast(size), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearDepthf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` depth: f32 `
    ///
    pub fn GlClearDepthf(self: ?*anyopaque, depth: f32) void {
        qtc.QOpenGLFunctions_GlClearDepthf(@ptrCast(self), depth);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompileShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlCompileShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_GlCompileShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlCompressedTexImage2D(self: ?*anyopaque, target: u32, level: i32, internalformat: u32, width: i32, height: i32, border: i32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(internalformat), @bitCast(width), @bitCast(height), @bitCast(border), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexSubImage2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlCompressedTexSubImage2D(self: ?*anyopaque, target: u32, level: i32, xoffset: i32, yoffset: i32, width: i32, height: i32, format: u32, imageSize: i32, data: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlCompressedTexSubImage2D(@ptrCast(self), @bitCast(target), @bitCast(level), @bitCast(xoffset), @bitCast(yoffset), @bitCast(width), @bitCast(height), @bitCast(format), @bitCast(imageSize), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    pub fn GlCreateProgram(self: ?*anyopaque) u32 {
        return qtc.QOpenGLFunctions_GlCreateProgram(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` typeVal: u32 `
    ///
    pub fn GlCreateShader(self: ?*anyopaque, typeVal: u32) u32 {
        return qtc.QOpenGLFunctions_GlCreateShader(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []const u32 `
    ///
    pub fn GlDeleteBuffers(self: ?*anyopaque, n: i32, buffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteBuffers(@ptrCast(self), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []const u32 `
    ///
    pub fn GlDeleteFramebuffers(self: ?*anyopaque, n: i32, framebuffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteFramebuffers(@ptrCast(self), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlDeleteProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlDeleteProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []const u32 `
    ///
    pub fn GlDeleteRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: []const u32) void {
        qtc.QOpenGLFunctions_GlDeleteRenderbuffers(@ptrCast(self), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDeleteShader(self: ?*anyopaque, shader: u32) void {
        qtc.QOpenGLFunctions_GlDeleteShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthRangef)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` zNear: f32 `
    ///
    /// ` zFar: f32 `
    ///
    pub fn GlDepthRangef(self: ?*anyopaque, zNear: f32, zFar: f32) void {
        qtc.QOpenGLFunctions_GlDepthRangef(@ptrCast(self), zNear, zFar);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDetachShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlDetachShader(self: ?*anyopaque, program: u32, shader: u32) void {
        qtc.QOpenGLFunctions_GlDetachShader(@ptrCast(self), @bitCast(program), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` index: u32 `
    ///
    pub fn GlDisableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_GlDisableVertexAttribArray(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnableVertexAttribArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` index: u32 `
    ///
    pub fn GlEnableVertexAttribArray(self: ?*anyopaque, index: u32) void {
        qtc.QOpenGLFunctions_GlEnableVertexAttribArray(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` renderbuffertarget: u32 `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlFramebufferRenderbuffer(self: ?*anyopaque, target: u32, attachment: u32, renderbuffertarget: u32, renderbuffer: u32) void {
        qtc.QOpenGLFunctions_GlFramebufferRenderbuffer(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(renderbuffertarget), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferTexture2D)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlFramebufferTexture2D(self: ?*anyopaque, target: u32, attachment: u32, textarget: u32, texture: u32, level: i32) void {
        qtc.QOpenGLFunctions_GlFramebufferTexture2D(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(textarget), @bitCast(texture), @bitCast(level));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenBuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` buffers: []u32 `
    ///
    pub fn GlGenBuffers(self: ?*anyopaque, n: i32, buffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenBuffers(@ptrCast(self), @bitCast(n), buffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenerateMipmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    pub fn GlGenerateMipmap(self: ?*anyopaque, target: u32) void {
        qtc.QOpenGLFunctions_GlGenerateMipmap(@ptrCast(self), @bitCast(target));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenFramebuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` framebuffers: []u32 `
    ///
    pub fn GlGenFramebuffers(self: ?*anyopaque, n: i32, framebuffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenFramebuffers(@ptrCast(self), @bitCast(n), framebuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenRenderbuffers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` n: i32 `
    ///
    /// ` renderbuffers: []u32 `
    ///
    pub fn GlGenRenderbuffers(self: ?*anyopaque, n: i32, renderbuffers: []u32) void {
        qtc.QOpenGLFunctions_GlGenRenderbuffers(@ptrCast(self), @bitCast(n), renderbuffers.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttachedShaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` maxcount: i32 `
    ///
    /// ` count: []i32 `
    ///
    /// ` shaders: []u32 `
    ///
    pub fn GlGetAttachedShaders(self: ?*anyopaque, program: u32, maxcount: i32, count: []i32, shaders: []u32) void {
        qtc.QOpenGLFunctions_GlGetAttachedShaders(@ptrCast(self), @bitCast(program), @bitCast(maxcount), count.ptr, shaders.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttribLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetAttribLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetAttribLocation(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetBufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetBufferParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFramebufferAttachmentParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` attachment: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetFramebufferAttachmentParameteriv(self: ?*anyopaque, target: u32, attachment: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(@ptrCast(self), @bitCast(target), @bitCast(attachment), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetProgramiv(self: ?*anyopaque, program: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetProgramiv(@ptrCast(self), @bitCast(program), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` bufsize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infolog: [:0]u8 `
    ///
    pub fn GlGetProgramInfoLog(self: ?*anyopaque, program: u32, bufsize: i32, length: []i32, infolog: [:0]u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetProgramInfoLog(@ptrCast(self), @bitCast(program), @bitCast(bufsize), length.ptr, infolog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetRenderbufferParameteriv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetRenderbufferParameteriv(self: ?*anyopaque, target: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetRenderbufferParameteriv(@ptrCast(self), @bitCast(target), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` shader: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetShaderiv(self: ?*anyopaque, shader: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetShaderiv(@ptrCast(self), @bitCast(shader), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderInfoLog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufsize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` infolog: [:0]u8 `
    ///
    pub fn GlGetShaderInfoLog(self: ?*anyopaque, shader: u32, bufsize: i32, length: []i32, infolog: [:0]u8) void {
        const infolog_Cstring = infolog.ptr;
        qtc.QOpenGLFunctions_GlGetShaderInfoLog(@ptrCast(self), @bitCast(shader), @bitCast(bufsize), length.ptr, infolog_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderPrecisionFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` shadertype: u32 `
    ///
    /// ` precisiontype: u32 `
    ///
    /// ` range: []i32 `
    ///
    /// ` precision: []i32 `
    ///
    pub fn GlGetShaderPrecisionFormat(self: ?*anyopaque, shadertype: u32, precisiontype: u32, range: []i32, precision: []i32) void {
        qtc.QOpenGLFunctions_GlGetShaderPrecisionFormat(@ptrCast(self), @bitCast(shadertype), @bitCast(precisiontype), range.ptr, precision.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` shader: u32 `
    ///
    /// ` bufsize: i32 `
    ///
    /// ` length: []i32 `
    ///
    /// ` source: [:0]u8 `
    ///
    pub fn GlGetShaderSource(self: ?*anyopaque, shader: u32, bufsize: i32, length: []i32, source: [:0]u8) void {
        const source_Cstring = source.ptr;
        qtc.QOpenGLFunctions_GlGetShaderSource(@ptrCast(self), @bitCast(shader), @bitCast(bufsize), length.ptr, source_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetUniformfv(self: ?*anyopaque, program: u32, location: i32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetUniformfv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` location: i32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetUniformiv(self: ?*anyopaque, program: u32, location: i32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetUniformiv(@ptrCast(self), @bitCast(program), @bitCast(location), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn GlGetUniformLocation(self: ?*anyopaque, program: u32, name: [:0]const u8) i32 {
        const name_Cstring = name.ptr;
        return qtc.QOpenGLFunctions_GlGetUniformLocation(@ptrCast(self), @bitCast(program), name_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribfv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []f32 `
    ///
    pub fn GlGetVertexAttribfv(self: ?*anyopaque, index: u32, pname: u32, params: []f32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribfv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribiv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` params: []i32 `
    ///
    pub fn GlGetVertexAttribiv(self: ?*anyopaque, index: u32, pname: u32, params: []i32) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribiv(@ptrCast(self), @bitCast(index), @bitCast(pname), params.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribPointerv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` index: u32 `
    ///
    /// ` pname: u32 `
    ///
    /// ` pointer: *?*anyopaque `
    ///
    pub fn GlGetVertexAttribPointerv(self: ?*anyopaque, index: u32, pname: u32, pointer: *?*anyopaque) void {
        qtc.QOpenGLFunctions_GlGetVertexAttribPointerv(@ptrCast(self), @bitCast(index), @bitCast(pname), @ptrCast(pointer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` buffer: u32 `
    ///
    pub fn GlIsBuffer(self: ?*anyopaque, buffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsBuffer(@ptrCast(self), @bitCast(buffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsFramebuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` framebuffer: u32 `
    ///
    pub fn GlIsFramebuffer(self: ?*anyopaque, framebuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsFramebuffer(@ptrCast(self), @bitCast(framebuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlIsProgram(self: ?*anyopaque, program: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsRenderbuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` renderbuffer: u32 `
    ///
    pub fn GlIsRenderbuffer(self: ?*anyopaque, renderbuffer: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsRenderbuffer(@ptrCast(self), @bitCast(renderbuffer));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsShader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` shader: u32 `
    ///
    pub fn GlIsShader(self: ?*anyopaque, shader: u32) u8 {
        return qtc.QOpenGLFunctions_GlIsShader(@ptrCast(self), @bitCast(shader));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glLinkProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlLinkProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlLinkProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glReleaseShaderCompiler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    pub fn GlReleaseShaderCompiler(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_GlReleaseShaderCompiler(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glRenderbufferStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` target: u32 `
    ///
    /// ` internalformat: u32 `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn GlRenderbufferStorage(self: ?*anyopaque, target: u32, internalformat: u32, width: i32, height: i32) void {
        qtc.QOpenGLFunctions_GlRenderbufferStorage(@ptrCast(self), @bitCast(target), @bitCast(internalformat), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glSampleCoverage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` value: f32 `
    ///
    /// ` invert: u8 `
    ///
    pub fn GlSampleCoverage(self: ?*anyopaque, value: f32, invert: u8) void {
        qtc.QOpenGLFunctions_GlSampleCoverage(@ptrCast(self), value, @bitCast(invert));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderBinary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlShaderBinary(self: ?*anyopaque, n: i32, shaders: []const u32, binaryformat: u32, binary: ?*const anyopaque, length: i32) void {
        qtc.QOpenGLFunctions_GlShaderBinary(@ptrCast(self), @bitCast(n), shaders.ptr, @bitCast(binaryformat), @ptrCast(binary), @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` shader: u32 `
    ///
    /// ` count: i32 `
    ///
    /// ` stringVal: []const [:0]const u8 `
    ///
    /// ` length: []const i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GlShaderSource(self: ?*anyopaque, shader: u32, count: i32, stringVal: []const [:0]const u8, length: []const i32, allocator: std.mem.Allocator) void {
        const stringVal_chararr = allocator.alloc([*c]const u8, stringVal.len) catch @panic("qopenglfunctions.GlShaderSource: Memory allocation failed");
        defer allocator.free(stringVal_chararr);
        for (stringVal, 0..stringVal.len) |str, i| {
            stringVal_chararr[i] = @ptrCast(str.ptr);
        }
        qtc.QOpenGLFunctions_GlShaderSource(@ptrCast(self), @bitCast(shader), @bitCast(count), stringVal_chararr.ptr, length.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFuncSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` face: u32 `
    ///
    /// ` func: u32 `
    ///
    /// ` ref: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilFuncSeparate(self: ?*anyopaque, face: u32, func: u32, ref: i32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilFuncSeparate(@ptrCast(self), @bitCast(face), @bitCast(func), @bitCast(ref), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMaskSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` face: u32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn GlStencilMaskSeparate(self: ?*anyopaque, face: u32, mask: u32) void {
        qtc.QOpenGLFunctions_GlStencilMaskSeparate(@ptrCast(self), @bitCast(face), @bitCast(mask));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOpSeparate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` face: u32 `
    ///
    /// ` fail: u32 `
    ///
    /// ` zfail: u32 `
    ///
    /// ` zpass: u32 `
    ///
    pub fn GlStencilOpSeparate(self: ?*anyopaque, face: u32, fail: u32, zfail: u32, zpass: u32) void {
        qtc.QOpenGLFunctions_GlStencilOpSeparate(@ptrCast(self), @bitCast(face), @bitCast(fail), @bitCast(zfail), @bitCast(zpass));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    pub fn GlUniform1f(self: ?*anyopaque, location: i32, x: f32) void {
        qtc.QOpenGLFunctions_GlUniform1f(@ptrCast(self), @bitCast(location), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlUniform1fv(self: ?*anyopaque, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform1fv(@ptrCast(self), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: i32 `
    ///
    pub fn GlUniform1i(self: ?*anyopaque, location: i32, x: i32) void {
        qtc.QOpenGLFunctions_GlUniform1i(@ptrCast(self), @bitCast(location), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlUniform1iv(self: ?*anyopaque, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform1iv(@ptrCast(self), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlUniform2f(self: ?*anyopaque, location: i32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlUniform2f(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlUniform2fv(self: ?*anyopaque, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform2fv(@ptrCast(self), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn GlUniform2i(self: ?*anyopaque, location: i32, x: i32, y: i32) void {
        qtc.QOpenGLFunctions_GlUniform2i(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlUniform2iv(self: ?*anyopaque, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform2iv(@ptrCast(self), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlUniform3f(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlUniform3f(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlUniform3fv(self: ?*anyopaque, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform3fv(@ptrCast(self), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` z: i32 `
    ///
    pub fn GlUniform3i(self: ?*anyopaque, location: i32, x: i32, y: i32, z: i32) void {
        qtc.QOpenGLFunctions_GlUniform3i(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlUniform3iv(self: ?*anyopaque, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform3iv(@ptrCast(self), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlUniform4f(self: ?*anyopaque, location: i32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlUniform4f(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const f32 `
    ///
    pub fn GlUniform4fv(self: ?*anyopaque, location: i32, count: i32, v: []const f32) void {
        qtc.QOpenGLFunctions_GlUniform4fv(@ptrCast(self), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4i)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlUniform4i(self: ?*anyopaque, location: i32, x: i32, y: i32, z: i32, w: i32) void {
        qtc.QOpenGLFunctions_GlUniform4i(@ptrCast(self), @bitCast(location), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4iv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` v: []const i32 `
    ///
    pub fn GlUniform4iv(self: ?*anyopaque, location: i32, count: i32, v: []const i32) void {
        qtc.QOpenGLFunctions_GlUniform4iv(@ptrCast(self), @bitCast(location), @bitCast(count), v.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix2fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix2fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix3fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix3fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` location: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` transpose: u8 `
    ///
    /// ` value: []const f32 `
    ///
    pub fn GlUniformMatrix4fv(self: ?*anyopaque, location: i32, count: i32, transpose: u8, value: []const f32) void {
        qtc.QOpenGLFunctions_GlUniformMatrix4fv(@ptrCast(self), @bitCast(location), @bitCast(count), @bitCast(transpose), value.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glUseProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlUseProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlUseProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glValidateProgram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` program: u32 `
    ///
    pub fn GlValidateProgram(self: ?*anyopaque, program: u32) void {
        qtc.QOpenGLFunctions_GlValidateProgram(@ptrCast(self), @bitCast(program));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` x: f32 `
    ///
    pub fn GlVertexAttrib1f(self: ?*anyopaque, indx: u32, x: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1f(@ptrCast(self), @bitCast(indx), @bitCast(x));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlVertexAttrib1fv(self: ?*anyopaque, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib1fv(@ptrCast(self), @bitCast(indx), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    pub fn GlVertexAttrib2f(self: ?*anyopaque, indx: u32, x: f32, y: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2f(@ptrCast(self), @bitCast(indx), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlVertexAttrib2fv(self: ?*anyopaque, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib2fv(@ptrCast(self), @bitCast(indx), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` x: f32 `
    ///
    /// ` y: f32 `
    ///
    /// ` z: f32 `
    ///
    pub fn GlVertexAttrib3f(self: ?*anyopaque, indx: u32, x: f32, y: f32, z: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3f(@ptrCast(self), @bitCast(indx), @bitCast(x), @bitCast(y), @bitCast(z));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlVertexAttrib3fv(self: ?*anyopaque, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib3fv(@ptrCast(self), @bitCast(indx), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4f)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlVertexAttrib4f(self: ?*anyopaque, indx: u32, x: f32, y: f32, z: f32, w: f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4f(@ptrCast(self), @bitCast(indx), @bitCast(x), @bitCast(y), @bitCast(z), @bitCast(w));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4fv)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    /// ` indx: u32 `
    ///
    /// ` values: []const f32 `
    ///
    pub fn GlVertexAttrib4fv(self: ?*anyopaque, indx: u32, values: []const f32) void {
        qtc.QOpenGLFunctions_GlVertexAttrib4fv(@ptrCast(self), @bitCast(indx), values.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttribPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOpenGLFunctions `
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
    pub fn GlVertexAttribPointer(self: ?*anyopaque, indx: u32, size: i32, typeVal: u32, normalized: u8, stride: i32, ptr: ?*const anyopaque) void {
        qtc.QOpenGLFunctions_GlVertexAttribPointer(@ptrCast(self), @bitCast(indx), @bitCast(size), @bitCast(typeVal), @bitCast(normalized), @bitCast(stride), @ptrCast(ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#dtor.QOpenGLFunctions)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOpenGLFunctions `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOpenGLFunctions_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions.html#public-types)
pub const enums = struct {
    pub const OpenGLFeature = enum(i32) {
        pub const Multitexture: i32 = 1;
        pub const Shaders: i32 = 2;
        pub const Buffers: i32 = 4;
        pub const Framebuffers: i32 = 8;
        pub const BlendColor: i32 = 16;
        pub const BlendEquation: i32 = 32;
        pub const BlendEquationSeparate: i32 = 64;
        pub const BlendFuncSeparate: i32 = 128;
        pub const BlendSubtract: i32 = 256;
        pub const CompressedTextures: i32 = 512;
        pub const Multisample: i32 = 1024;
        pub const StencilSeparate: i32 = 2048;
        pub const NPOTTextures: i32 = 4096;
        pub const NPOTTextureRepeat: i32 = 8192;
        pub const FixedFunctionPipeline: i32 = 16384;
        pub const TextureRGFormats: i32 = 32768;
        pub const MultipleRenderTargets: i32 = 65536;
        pub const BlendEquationAdvanced: i32 = 131072;
    };
};
